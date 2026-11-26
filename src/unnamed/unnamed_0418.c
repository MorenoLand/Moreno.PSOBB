#include "protos.h"

void f_004180bc(void) /* sub_4180BC */
{
    FN_ENTER(0x004180bc);
    /* 004180bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004180bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004180be: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004180c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004180c3: movsx edx, word ptr [0xaae8b0] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaae8b0u));
    /* 004180ca: fld dword ptr [0x8fb124] */ FPUSH(R_F32((u32)(0x8fb124u)));
    /* 004180d0: fld dword ptr [0x8fb128] */ FPUSH(R_F32((u32)(0x8fb128u)));
    /* 004180d6: movsx eax, word ptr [0xaae8b2] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae8b2u));
    /* 004180dd: fld dword ptr [0x8fb128] */ FPUSH(R_F32((u32)(0x8fb128u)));
    /* 004180e3: fld dword ptr [0x8fb128] */ FPUSH(R_F32((u32)(0x8fb128u)));
    /* 004180e9: fld dword ptr [0x8fb128] */ FPUSH(R_F32((u32)(0x8fb128u)));
    /* 004180ef: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004180f3: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004180f7: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004180f9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004180fb: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 004180fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004180ff: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00418103: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00418107: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00418109: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0041810b: fsubr st(6) */ ST(0) = ST(6) - ST(0);
    /* 0041810d: movsx eax, word ptr [0xaae8b4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae8b4u));
    /* 00418114: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00418118: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0041811c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0041811e: movsx eax, word ptr [0xaae8b6] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae8b6u));
    /* 00418125: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00418127: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00418129: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041812b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0041812f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00418133: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00418135: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 00418137: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00418139: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0041813d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0041813f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418141: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00418143: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418145: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00418149: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041814a: je 0x418405 */ if (fZ) goto L_00418405;
L_00418150:; BB(0x00418150);
    /* 00418150: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00418152: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00418154:; BB(0x00418154);
    /* 00418154: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418156: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0041815b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0041815d:; BB(0x0041815d);
    /* 0041815d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041815f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418161: mov eax, dword ptr [0xaae89c] */ r_eax = R32((u32)(0xaae89cu));
    /* 00418166: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041816c: je 0x418181 */ if (fZ) goto L_00418181;
L_0041816e:; BB(0x0041816e);
    /* 0041816e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00418172: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 00418178: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0041817c: mov ebx, 1 */ r_ebx = 0x1u;
L_00418181:; BB(0x00418181);
    /* 00418181: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418187: je 0x41819c */ if (fZ) goto L_0041819c;
L_00418189:; BB(0x00418189);
    /* 00418189: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0041818d: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 00418193: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00418197: mov ebx, 1 */ r_ebx = 0x1u;
L_0041819c:; BB(0x0041819c);
    /* 0041819c: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181a2: je 0x4181b7 */ if (fZ) goto L_004181b7;
L_004181a4:; BB(0x004181a4);
    /* 004181a4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004181a8: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 004181ae: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004181b2: mov ebx, 1 */ r_ebx = 0x1u;
L_004181b7:; BB(0x004181b7);
    /* 004181b7: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181bd: je 0x4181d2 */ if (fZ) goto L_004181d2;
L_004181bf:; BB(0x004181bf);
    /* 004181bf: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004181c3: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 004181c9: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004181cd: mov ebx, 1 */ r_ebx = 0x1u;
L_004181d2:; BB(0x004181d2);
    /* 004181d2: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x4181d7u); f_00791b48();
    /* 004181d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181d9: je 0x418273 */ if (fZ) goto L_00418273;
L_004181df:; BB(0x004181df);
    /* 004181df: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x4181e4u); f_00791b48();
    /* 004181e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004181e6: mov ecx, eax */ r_ecx = r_eax;
    /* 004181e8: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x4181edu); f_0078fcd4();
    /* 004181ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181ef: je 0x418204 */ if (fZ) goto L_00418204;
L_004181f1:; BB(0x004181f1);
    /* 004181f1: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004181f5: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 004181fb: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004181ff: mov ebx, 1 */ r_ebx = 0x1u;
L_00418204:; BB(0x00418204);
    /* 00418204: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x418209u); f_00791b48();
    /* 00418209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041820b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041820d: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x418212u); f_0078fcd4();
    /* 00418212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418214: je 0x418229 */ if (fZ) goto L_00418229;
L_00418216:; BB(0x00418216);
    /* 00418216: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0041821a: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 00418220: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00418224: mov ebx, 1 */ r_ebx = 0x1u;
L_00418229:; BB(0x00418229);
    /* 00418229: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x41822eu); f_00791b48();
    /* 0041822e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00418230: mov ecx, eax */ r_ecx = r_eax;
    /* 00418232: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x418237u); f_0078fcd4();
    /* 00418237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418239: je 0x41824e */ if (fZ) goto L_0041824e;
L_0041823b:; BB(0x0041823b);
    /* 0041823b: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0041823f: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 00418245: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00418249: mov ebx, 1 */ r_ebx = 0x1u;
L_0041824e:; BB(0x0041824e);
    /* 0041824e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x418253u); f_00791b48();
    /* 00418253: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00418255: mov ecx, eax */ r_ecx = r_eax;
    /* 00418257: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x41825cu); f_0078fcd4();
    /* 0041825c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041825e: je 0x418273 */ if (fZ) goto L_00418273;
L_00418260:; BB(0x00418260);
    /* 00418260: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00418264: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 0041826a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0041826e: mov ebx, 1 */ r_ebx = 0x1u;
L_00418273:; BB(0x00418273);
    /* 00418273: fld dword ptr [0x8fb118] */ FPUSH(R_F32((u32)(0x8fb118u)));
    /* 00418279: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0041827d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041827f: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00418282: fld dword ptr [0x8fb124] */ FPUSH(R_F32((u32)(0x8fb124u)));
    /* 00418288: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0041828b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041828d: fst dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0));
    /* 00418290: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418292: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00418295: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418297: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0041829b: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0041829e: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 004182a1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004182a3: jne 0x41833e */ if (!fZ) goto L_0041833e;
L_004182a9:; BB(0x004182a9);
    /* 004182a9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004182ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004182ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004182b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004182b1: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x4182b6u); f_0070a024();
    /* 004182b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004182b7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004182ba: fcom dword ptr [ebp + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x5cu))); 
    /* 004182bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004182bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004182c0: je 0x4183f0 */ if (fZ) goto L_004183f0;
L_004182c6:; BB(0x004182c6);
    /* 004182c6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
L_004182ca:; BB(0x004182ca);
    /* 004182ca: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 004182d0: fld dword ptr [0x8fb114] */ FPUSH(R_F32((u32)(0x8fb114u)));
    /* 004182d6: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 004182dc: fld dword ptr [0x8fb110] */ FPUSH(R_F32((u32)(0x8fb110u)));
    /* 004182e2: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 004182e5: fld dword ptr [0x8fb10c] */ FPUSH(R_F32((u32)(0x8fb10cu)));
    /* 004182eb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004182ed: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 004182ef: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004182f1: fdivr st(5), st(0) */ ST(5) = ST(0) / ST(5);
    /* 004182f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004182f5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004182f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004182f9: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 004182fb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004182fd: fsubp st(6) */ ST(6) = ST(6) - ST(0); FPOP();
    /* 004182ff: fld dword ptr [0x8fb108] */ FPUSH(R_F32((u32)(0x8fb108u)));
    /* 00418305: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00418307: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 00418309: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0041830b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0041830e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00418310: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00418312: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418314: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00418316: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418318: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0041831a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041831c: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0041831f: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00418322: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418324: fchs  */ ST(0) = -ST(0);
    /* 00418326: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00418328: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041832a: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0041832e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00418330: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00418332: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418334: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 00418337: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_0041833e:; BB(0x0041833e);
    /* 0041833e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418340: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418342: lea eax, [ebp + 0x5c] */ r_eax = (u32)(r_ebp+0x5cu);
    /* 00418345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418346: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x41834bu); f_0070a024();
    /* 0041834b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041834c: fld dword ptr [0x8fb104] */ FPUSH(R_F32((u32)(0x8fb104u)));
    /* 00418352: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00418356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418357: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0041835a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0041835d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041835f: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00418362: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00418365: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00418368: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0041836b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0041836d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0041836f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00418371: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00418374: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00418376: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00418379: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041837b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041837d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0041837f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418381: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00418384: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00418387: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00418389: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0041838b: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0041838e: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00418391: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00418393: call 0x41843c */ r_esp -= 4; W32(r_esp, 0x418398u); f_0041843c();
    /* 00418398: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0041839c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004183a0: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004183a4: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004183a7: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004183aa: mov dword ptr [ebp + 0x4c], ebx */ W32((u32)(r_ebp+0x4cu), r_ebx);
    /* 004183ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004183af: call 0x4184a4 */ r_esp -= 4; W32(r_esp, 0x4183b4u); f_004184a4();
    /* 004183b4: fld dword ptr [0x8fb124] */ FPUSH(R_F32((u32)(0x8fb124u)));
    /* 004183ba: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004183be: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004183c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004183c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004183c3: je 0x4183e3 */ if (fZ) goto L_004183e3;
L_004183c5:; BB(0x004183c5);
    /* 004183c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004183c7: lea edx, [ebp + 0x2c] */ r_edx = (u32)(r_ebp+0x2cu);
    /* 004183ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004183cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004183cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004183ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004183cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004183d0: push 0x57f */ { u32 v = 0x57fu; r_esp -= 4; W32(r_esp, v); }
    /* 004183d5: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4183dau); f_008144b0();
    /* 004183da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004183dd: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004183e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004183e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004183e2: ret  */ FN_RET(0x004180bc); r_esp += 4; return;
L_004183e3:; BB(0x004183e3);
    /* 004183e3: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004183e7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004183e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004183eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004183ec: jne 0x4183c5 */ if (!fZ) goto L_004183c5;
L_004183ee:; BB(0x004183ee);
    /* 004183ee: jmp 0x418432 */ goto L_00418432;
L_004183f0:; BB(0x004183f0);
    /* 004183f0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004183f4: fcom dword ptr [ebp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x60u))); 
    /* 004183f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004183f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004183fa: jne 0x4182ca */ if (!fZ) goto L_004182ca;
L_00418400:; BB(0x00418400);
    /* 00418400: jmp 0x41833e */ goto L_0041833e;
L_00418405:; BB(0x00418405);
    /* 00418405: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418407: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00418409: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041840b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041840c: je 0x418415 */ if (fZ) goto L_00418415;
L_0041840e:; BB(0x0041840e);
    /* 0041840e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00418410: jmp 0x418154 */ goto L_00418154;
L_00418415:; BB(0x00418415);
    /* 00418415: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418417: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00418419: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041841b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041841c: jne 0x418154 */ if (!fZ) goto L_00418154;
L_00418422:; BB(0x00418422);
    /* 00418422: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00418424: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00418426: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00418427: jne 0x418154 */ if (!fZ) goto L_00418154;
L_0041842d:; BB(0x0041842d);
    /* 0041842d: jmp 0x41815d */ goto L_0041815d;
L_00418432:; BB(0x00418432);
    /* 00418432: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418434: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418439: ret  */ FN_RET(0x004180bc); r_esp += 4; return;
}

void f_00418139(void)
{
    FN_ENTER(0x00418139);
    /* 00418139: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0041813d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0041813f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418141: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00418143: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418145: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00418149: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041814a: je 0x418405 */ if (fZ) goto L_00418405;
L_00418150:; BB(0x00418150);
    /* 00418150: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00418152: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00418154:; BB(0x00418154);
    /* 00418154: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418156: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0041815b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0041815d:; BB(0x0041815d);
    /* 0041815d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041815f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418161: mov eax, dword ptr [0xaae89c] */ r_eax = R32((u32)(0xaae89cu));
    /* 00418166: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041816c: je 0x418181 */ if (fZ) goto L_00418181;
L_0041816e:; BB(0x0041816e);
    /* 0041816e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00418172: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 00418178: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0041817c: mov ebx, 1 */ r_ebx = 0x1u;
L_00418181:; BB(0x00418181);
    /* 00418181: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418187: je 0x41819c */ if (fZ) goto L_0041819c;
L_00418189:; BB(0x00418189);
    /* 00418189: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0041818d: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 00418193: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00418197: mov ebx, 1 */ r_ebx = 0x1u;
L_0041819c:; BB(0x0041819c);
    /* 0041819c: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181a2: je 0x4181b7 */ if (fZ) goto L_004181b7;
L_004181a4:; BB(0x004181a4);
    /* 004181a4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004181a8: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 004181ae: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004181b2: mov ebx, 1 */ r_ebx = 0x1u;
L_004181b7:; BB(0x004181b7);
    /* 004181b7: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181bd: je 0x4181d2 */ if (fZ) goto L_004181d2;
L_004181bf:; BB(0x004181bf);
    /* 004181bf: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004181c3: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 004181c9: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004181cd: mov ebx, 1 */ r_ebx = 0x1u;
L_004181d2:; BB(0x004181d2);
    /* 004181d2: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x4181d7u); f_00791b48();
    /* 004181d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181d9: je 0x418273 */ if (fZ) goto L_00418273;
L_004181df:; BB(0x004181df);
    /* 004181df: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x4181e4u); f_00791b48();
    /* 004181e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004181e6: mov ecx, eax */ r_ecx = r_eax;
    /* 004181e8: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x4181edu); f_0078fcd4();
    /* 004181ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004181ef: je 0x418204 */ if (fZ) goto L_00418204;
L_004181f1:; BB(0x004181f1);
    /* 004181f1: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004181f5: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 004181fb: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004181ff: mov ebx, 1 */ r_ebx = 0x1u;
L_00418204:; BB(0x00418204);
    /* 00418204: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x418209u); f_00791b48();
    /* 00418209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041820b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041820d: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x418212u); f_0078fcd4();
    /* 00418212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418214: je 0x418229 */ if (fZ) goto L_00418229;
L_00418216:; BB(0x00418216);
    /* 00418216: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0041821a: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 00418220: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00418224: mov ebx, 1 */ r_ebx = 0x1u;
L_00418229:; BB(0x00418229);
    /* 00418229: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x41822eu); f_00791b48();
    /* 0041822e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00418230: mov ecx, eax */ r_ecx = r_eax;
    /* 00418232: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x418237u); f_0078fcd4();
    /* 00418237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418239: je 0x41824e */ if (fZ) goto L_0041824e;
L_0041823b:; BB(0x0041823b);
    /* 0041823b: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0041823f: fadd dword ptr [0x8fb120] */ ST(0) = ST(0) + R_F32((u32)(0x8fb120u));
    /* 00418245: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00418249: mov ebx, 1 */ r_ebx = 0x1u;
L_0041824e:; BB(0x0041824e);
    /* 0041824e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x418253u); f_00791b48();
    /* 00418253: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00418255: mov ecx, eax */ r_ecx = r_eax;
    /* 00418257: call 0x78fcd4 */ r_esp -= 4; W32(r_esp, 0x41825cu); f_0078fcd4();
    /* 0041825c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041825e: je 0x418273 */ if (fZ) goto L_00418273;
L_00418260:; BB(0x00418260);
    /* 00418260: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00418264: fadd dword ptr [0x8fb11c] */ ST(0) = ST(0) + R_F32((u32)(0x8fb11cu));
    /* 0041826a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0041826e: mov ebx, 1 */ r_ebx = 0x1u;
L_00418273:; BB(0x00418273);
    /* 00418273: fld dword ptr [0x8fb118] */ FPUSH(R_F32((u32)(0x8fb118u)));
    /* 00418279: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0041827d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041827f: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00418282: fld dword ptr [0x8fb124] */ FPUSH(R_F32((u32)(0x8fb124u)));
    /* 00418288: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0041828b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041828d: fst dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0));
    /* 00418290: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418292: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00418295: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418297: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0041829b: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0041829e: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 004182a1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004182a3: jne 0x41833e */ if (!fZ) goto L_0041833e;
L_004182a9:; BB(0x004182a9);
    /* 004182a9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004182ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004182ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004182b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004182b1: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x4182b6u); f_0070a024();
    /* 004182b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004182b7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004182ba: fcom dword ptr [ebp + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x5cu))); 
    /* 004182bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004182bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004182c0: je 0x4183f0 */ if (fZ) goto L_004183f0;
L_004182c6:; BB(0x004182c6);
    /* 004182c6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
L_004182ca:; BB(0x004182ca);
    /* 004182ca: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 004182d0: fld dword ptr [0x8fb114] */ FPUSH(R_F32((u32)(0x8fb114u)));
    /* 004182d6: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 004182dc: fld dword ptr [0x8fb110] */ FPUSH(R_F32((u32)(0x8fb110u)));
    /* 004182e2: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 004182e5: fld dword ptr [0x8fb10c] */ FPUSH(R_F32((u32)(0x8fb10cu)));
    /* 004182eb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004182ed: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 004182ef: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004182f1: fdivr st(5), st(0) */ ST(5) = ST(0) / ST(5);
    /* 004182f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004182f5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004182f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004182f9: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 004182fb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004182fd: fsubp st(6) */ ST(6) = ST(6) - ST(0); FPOP();
    /* 004182ff: fld dword ptr [0x8fb108] */ FPUSH(R_F32((u32)(0x8fb108u)));
    /* 00418305: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00418307: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 00418309: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0041830b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0041830e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00418310: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00418312: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418314: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00418316: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418318: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0041831a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041831c: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0041831f: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00418322: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418324: fchs  */ ST(0) = -ST(0);
    /* 00418326: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00418328: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041832a: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0041832e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00418330: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00418332: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418334: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 00418337: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_0041833e:; BB(0x0041833e);
    /* 0041833e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418340: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418342: lea eax, [ebp + 0x5c] */ r_eax = (u32)(r_ebp+0x5cu);
    /* 00418345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418346: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x41834bu); f_0070a024();
    /* 0041834b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041834c: fld dword ptr [0x8fb104] */ FPUSH(R_F32((u32)(0x8fb104u)));
    /* 00418352: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00418356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418357: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0041835a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0041835d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041835f: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00418362: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00418365: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00418368: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0041836b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0041836d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0041836f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00418371: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00418374: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00418376: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00418379: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041837b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041837d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0041837f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418381: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00418384: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00418387: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00418389: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0041838b: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0041838e: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00418391: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00418393: call 0x41843c */ r_esp -= 4; W32(r_esp, 0x418398u); f_0041843c();
    /* 00418398: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0041839c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004183a0: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004183a4: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004183a7: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004183aa: mov dword ptr [ebp + 0x4c], ebx */ W32((u32)(r_ebp+0x4cu), r_ebx);
    /* 004183ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004183af: call 0x4184a4 */ r_esp -= 4; W32(r_esp, 0x4183b4u); f_004184a4();
    /* 004183b4: fld dword ptr [0x8fb124] */ FPUSH(R_F32((u32)(0x8fb124u)));
    /* 004183ba: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004183be: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004183c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004183c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004183c3: je 0x4183e3 */ if (fZ) goto L_004183e3;
L_004183c5:; BB(0x004183c5);
    /* 004183c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004183c7: lea edx, [ebp + 0x2c] */ r_edx = (u32)(r_ebp+0x2cu);
    /* 004183ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004183cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004183cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004183ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004183cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004183d0: push 0x57f */ { u32 v = 0x57fu; r_esp -= 4; W32(r_esp, v); }
    /* 004183d5: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4183dau); f_008144b0();
    /* 004183da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004183dd: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004183e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004183e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004183e2: ret  */ FN_RET(0x00418139); r_esp += 4; return;
L_004183e3:; BB(0x004183e3);
    /* 004183e3: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004183e7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004183e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004183eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004183ec: jne 0x4183c5 */ if (!fZ) goto L_004183c5;
L_004183ee:; BB(0x004183ee);
    /* 004183ee: jmp 0x418432 */ goto L_00418432;
L_004183f0:; BB(0x004183f0);
    /* 004183f0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004183f4: fcom dword ptr [ebp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x60u))); 
    /* 004183f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004183f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004183fa: jne 0x4182ca */ if (!fZ) goto L_004182ca;
L_00418400:; BB(0x00418400);
    /* 00418400: jmp 0x41833e */ goto L_0041833e;
L_00418405:; BB(0x00418405);
    /* 00418405: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418407: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00418409: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041840b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041840c: je 0x418415 */ if (fZ) goto L_00418415;
L_0041840e:; BB(0x0041840e);
    /* 0041840e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00418410: jmp 0x418154 */ goto L_00418154;
L_00418415:; BB(0x00418415);
    /* 00418415: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418417: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00418419: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041841b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041841c: jne 0x418154 */ if (!fZ) goto L_00418154;
L_00418422:; BB(0x00418422);
    /* 00418422: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00418424: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00418426: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00418427: jne 0x418154 */ if (!fZ) goto L_00418154;
L_0041842d:; BB(0x0041842d);
    /* 0041842d: jmp 0x41815d */ goto L_0041815d;
L_00418432:; BB(0x00418432);
    /* 00418432: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418434: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418439: ret  */ FN_RET(0x00418139); r_esp += 4; return;
}

void f_0041843c(void) /* sub_41843C */
{
    FN_ENTER(0x0041843c);
    /* 0041843c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00418440: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00418446: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00418448: je 0x41849c */ if (fZ) goto L_0041849c;
L_0041844a:; BB(0x0041844a);
    /* 0041844a: fld dword ptr [0x8fb100] */ FPUSH(R_F32((u32)(0x8fb100u)));
    /* 00418450: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00418456: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00418458: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0041845e: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 00418464: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0041846a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041846c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0041846e: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 00418474: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00418476: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00418478: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 0041847e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418480: fst dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0));
    /* 00418483: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00418485: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 00418488: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
L_0041848b:; BB(0x0041848b);
    /* 0041848b: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0041848d: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00418490: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00418493: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00418496: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00418499: ret 4 */ FN_RET(0x0041843c); r_esp += 8; return;
L_0041849c:; BB(0x0041849c);
    /* 0041849c: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 0041849f: jmp 0x41848b */ goto L_0041848b;
}

void f_004184a4(void) /* sub_4184A4 */
{
    FN_ENTER(0x004184a4);
    /* 004184a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004184a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004184a6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004184a9: mov esi, ecx */ r_esi = r_ecx;
    /* 004184ab: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004184ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004184b0: je 0x418564 */ if (fZ) goto L_00418564;
L_004184b6:; BB(0x004184b6);
    /* 004184b6: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004184b9: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 004184bc: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 004184bf: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 004184c2: mov eax, dword ptr [0x8fb0d4] */ r_eax = R32((u32)(0x8fb0d4u));
    /* 004184c7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004184ca: mov eax, dword ptr [0x8fb0d8] */ r_eax = R32((u32)(0x8fb0d8u));
    /* 004184cf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004184d3: mov eax, dword ptr [0x8fb0dc] */ r_eax = R32((u32)(0x8fb0dcu));
    /* 004184d8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004184dc: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004184e0: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004184e3: mov dword ptr [esi + 0x34], ebp */ W32((u32)(r_esi+0x34u), r_ebp);
    /* 004184e6: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 004184ec: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 004184f2: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 004184f8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004184fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004184fd: fchs  */ ST(0) = -ST(0);
    /* 004184ff: fstp dword ptr [esi + 0x50] */ W_F32((u32)(r_esi+0x50u), ST(0)); FPOP();
    /* 00418502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418503: fchs  */ ST(0) = -ST(0);
    /* 00418505: fstp dword ptr [esi + 0x54] */ W_F32((u32)(r_esi+0x54u), ST(0)); FPOP();
    /* 00418508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418509: fchs  */ ST(0) = -ST(0);
    /* 0041850b: fstp dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0)); FPOP();
    /* 0041850e: lea ebp, [esi + 0x50] */ r_ebp = (u32)(r_esi+0x50u);
    /* 00418511: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418512: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x418517u); f_007a8d04();
    /* 00418517: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041851a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0041851f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x418524u); f_0082d990();
    /* 00418524: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00418528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041852a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x41852fu); f_0082d8bc();
    /* 0041852f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00418532: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00418534: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x418539u); f_0082e9e4();
    /* 00418539: lea ebp, [esi + 0x2c] */ r_ebp = (u32)(r_esi+0x2cu);
    /* 0041853c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041853d: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 00418540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00418542: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x418547u); f_0082eab8();
    /* 00418547: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0041854c: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x418551u); f_0082eb80();
    /* 00418551: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 00418554: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00418556: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41855bu); f_0082ebac();
    /* 0041855b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041855c: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0041855f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x418564u); f_00508db8();
L_00418564:; BB(0x00418564);
    /* 00418564: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418567: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418568: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00418569: ret  */ FN_RET(0x004184a4); r_esp += 4; return;
}

void f_0041856c(void) /* sub_41856C */
{
    FN_ENTER(0x0041856c);
    /* 0041856c: call 0x418574 */ r_esp -= 4; W32(r_esp, 0x418571u); f_00418574();
    /* 00418571: ret  */ FN_RET(0x0041856c); r_esp += 4; return;
}

void f_00418574(void) /* sub_418574 */
{
    FN_ENTER(0x00418574);
    /* 00418574: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00418575: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418578: mov edi, ecx */ r_edi = r_ecx;
    /* 0041857a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x41857fu); f_0082d7b0();
    /* 0041857f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00418582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418583: lea edx, [edi + 0x2c] */ r_edx = (u32)(r_edi+0x2cu);
    /* 00418586: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00418588: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x41858du); f_0082f09c();
    /* 0041858d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x418592u); f_0082da80();
    /* 00418592: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00418595: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00418599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041859a: mov ecx, edi */ r_ecx = r_edi;
    /* 0041859c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041859d: call 0x4185e0 */ r_esp -= 4; W32(r_esp, 0x4185a2u); f_004185e0();
    /* 004185a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004185a4: jne 0x4185ab */ if (!fZ) goto L_004185ab;
L_004185a6:; BB(0x004185a6);
    /* 004185a6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004185a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004185aa: ret  */ FN_RET(0x00418574); r_esp += 4; return;
L_004185ab:; BB(0x004185ab);
    /* 004185ab: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004185af: fmul dword ptr [0x8fb0fc] */ ST(0) = ST(0) * R_F32((u32)(0x8fb0fcu));
    /* 004185b5: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 004185b8: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004185bc: fmul dword ptr [0x8fb0f8] */ ST(0) = ST(0) * R_F32((u32)(0x8fb0f8u));
    /* 004185c2: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 004185c5: fld dword ptr [0x8fb0f4] */ FPUSH(R_F32((u32)(0x8fb0f4u)));
    /* 004185cb: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 004185ce: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004185d0: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004185d3: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004185d6: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004185d9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004185dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004185dd: ret  */ FN_RET(0x00418574); r_esp += 4; return;
}

void f_004185e0(void) /* sub_4185E0 */
{
    FN_ENTER(0x004185e0);
    /* 004185e0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004185e4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004185e8: fld dword ptr [0x8fb0f0] */ FPUSH(R_F32((u32)(0x8fb0f0u)));
    /* 004185ee: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004185f0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004185f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004185f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004185f5: jae 0x418605 */ if (!fC) goto L_00418605;
L_004185f7:; BB(0x004185f7);
    /* 004185f7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004185f9: fld dword ptr [0x8fb0e8] */ FPUSH(R_F32((u32)(0x8fb0e8u)));
    /* 004185ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418601: fst dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0));
    /* 00418603: jmp 0x41863e */ goto L_0041863e;
L_00418605:; BB(0x00418605);
    /* 00418605: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00418607: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0041860d: fadd dword ptr [0x8fb0ec] */ ST(0) = ST(0) + R_F32((u32)(0x8fb0ecu));
    /* 00418613: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00418615: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00418617: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00418618: jae 0x418628 */ if (!fC) goto L_00418628;
L_0041861a:; BB(0x0041861a);
    /* 0041861a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0041861c: fld dword ptr [0x8fb0e8] */ FPUSH(R_F32((u32)(0x8fb0e8u)));
    /* 00418622: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418624: fst dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0));
    /* 00418626: jmp 0x41863e */ goto L_0041863e;
L_00418628:; BB(0x00418628);
    /* 00418628: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041862a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041862c: fld dword ptr [0x8fb0e8] */ FPUSH(R_F32((u32)(0x8fb0e8u)));
    /* 00418632: fld dword ptr [0x8fb0e8] */ FPUSH(R_F32((u32)(0x8fb0e8u)));
    /* 00418638: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
L_0041863e:; BB(0x0041863e);
    /* 0041863e: fld dword ptr [0x8fb0e4] */ FPUSH(R_F32((u32)(0x8fb0e4u)));
    /* 00418644: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00418647: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00418649: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041864b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041864c: jae 0x41865b */ if (!fC) goto L_0041865b;
L_0041864e:; BB(0x0041864e);
    /* 0041864e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00418650: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
    /* 00418653: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418655: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00418657: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418659: jmp 0x418688 */ goto L_00418688;
L_0041865b:; BB(0x0041865b);
    /* 0041865b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0041865d: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00418663: fadd dword ptr [0x8fb0e0] */ ST(0) = ST(0) + R_F32((u32)(0x8fb0e0u));
    /* 00418669: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0041866b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041866d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041866e: jae 0x41867d */ if (!fC) goto L_0041867d;
L_00418670:; BB(0x00418670);
    /* 00418670: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00418672: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
    /* 00418675: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418677: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00418679: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041867b: jmp 0x418688 */ goto L_00418688;
L_0041867d:; BB(0x0041867d);
    /* 0041867d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041867f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418681: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418683: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
    /* 00418686: fld st(0) */ { long double v = ST(0); FPUSH(v); }
L_00418688:; BB(0x00418688);
    /* 00418688: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041868a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0041868c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041868e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00418690: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00418692: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00418694: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00418696: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00418697: jb 0x41869e */ if (fC) goto L_0041869e;
L_00418699:; BB(0x00418699);
    /* 00418699: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041869b: ret 8 */ FN_RET(0x004185e0); r_esp += 12; return;
L_0041869e:; BB(0x0041869e);
    /* 0041869e: mov eax, 1 */ r_eax = 0x1u;
    /* 004186a3: ret 8 */ FN_RET(0x004185e0); r_esp += 12; return;
}

void f_004186a8(void) /* sub_4186A8 */
{
    FN_ENTER(0x004186a8);
    /* 004186a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004186a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004186ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004186ad: call 0x4186cc */ r_esp -= 4; W32(r_esp, 0x4186b2u); f_004186cc();
    /* 004186b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004186b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004186b8: jne 0x4186be */ if (!fZ) goto L_004186be;
L_004186ba:; BB(0x004186ba);
    /* 004186ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004186bb: ret 4 */ FN_RET(0x004186a8); r_esp += 8; return;
L_004186be:; BB(0x004186be);
    /* 004186be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004186bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4186c4u); f_005c2f74();
    /* 004186c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004186c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004186c6: ret 4 */ FN_RET(0x004186a8); r_esp += 8; return;
}

void f_004186cc(void) /* sub_4186CC */
{
    FN_ENTER(0x004186cc);
    /* 004186cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004186cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004186cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004186d1: push 0x8cd3f4 */ { u32 v = 0x8cd3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004186d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004186dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004186dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004186e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004186e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004186ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004186ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004186f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004186f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004186f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004186f9: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004186fc: mov dword ptr [ecx], 0xaf3808 */ W32((u32)(r_ecx), 0xaf3808u);
    /* 00418702: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418704: je 0x41871d */ if (fZ) goto L_0041871d;
L_00418706:; BB(0x00418706);
    /* 00418706: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418709: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041870d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00418712: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00418716: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_0041871d:; BB(0x0041871d);
    /* 0041871d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00418720: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418722: je 0x41873b */ if (fZ) goto L_0041873b;
L_00418724:; BB(0x00418724);
    /* 00418724: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418727: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041872b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00418730: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00418734: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_0041873b:; BB(0x0041873b);
    /* 0041873b: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0041873e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418740: je 0x418759 */ if (fZ) goto L_00418759;
L_00418742:; BB(0x00418742);
    /* 00418742: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418745: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00418749: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041874e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00418752: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_00418759:; BB(0x00418759);
    /* 00418759: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0041875c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041875e: je 0x418777 */ if (fZ) goto L_00418777;
L_00418760:; BB(0x00418760);
    /* 00418760: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418763: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00418767: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041876c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00418770: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_00418777:; BB(0x00418777);
    /* 00418777: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041877e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x418783u); f_008171e8();
    /* 00418783: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418786: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041878d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041878f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418790: ret  */ FN_RET(0x004186cc); r_esp += 4; return;
}

void f_00418794(void) /* sub_418794 */
{
    FN_ENTER(0x00418794);
    /* 00418794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418795: mov ebp, esp */ r_ebp = r_esp;
    /* 00418797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418799: push 0x8cd446 */ { u32 v = 0x8cd446u; r_esp -= 4; W32(r_esp, v); }
    /* 0041879e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004187a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004187a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004187ac: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004187af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004187b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004187b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004187b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004187bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004187be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004187c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004187c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004187c7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4187ccu); f_008193cc();
    /* 004187cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004187d3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004187d6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004187d9: mov dword ptr [edi], 0xaf3808 */ W32((u32)(r_edi), 0xaf3808u);
    /* 004187df: mov eax, dword ptr [0x9a390c] */ r_eax = R32((u32)(0x9a390cu));
    /* 004187e4: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004187e7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004187e9: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 004187ec: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004187ef: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 004187f2: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 004187f5: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 004187f8: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 004187fb: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004187fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00418800: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00418806: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 0041880c: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 00418812: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00418815: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00418817: fchs  */ ST(0) = -ST(0);
    /* 00418819: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0041881c: fchs  */ ST(0) = -ST(0);
    /* 0041881e: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00418821: fchs  */ ST(0) = -ST(0);
    /* 00418823: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00418826: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00418829: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0041882c: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0041882f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418831: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418832: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x418837u); f_007a8d98();
    /* 00418837: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041883a: fld dword ptr [0x8fb138] */ FPUSH(R_F32((u32)(0x8fb138u)));
    /* 00418840: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00418846: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00418848: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0041884e: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00418851: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00418853: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00418855: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 0041885b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041885d: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 00418863: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00418866: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0041886c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041886e: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 00418874: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00418877: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 0041887a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0041887d: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00418880: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00418883: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00418886: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41888bu); f_005caba4();
    /* 0041888b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041888e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00418891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418893: je 0x4188ba */ if (fZ) goto L_004188ba;
L_00418895:; BB(0x00418895);
    /* 00418895: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0041889c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004188a3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004188a6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004188a9: lea eax, [edx + 0x2c] */ r_eax = (u32)(r_edx+0x2cu);
    /* 004188ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004188ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004188ae: call 0x40bf40 */ r_esp -= 4; W32(r_esp, 0x4188b3u); f_0040bf40();
    /* 004188b3: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004188ba:; BB(0x004188ba);
    /* 004188ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004188c1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004188c8: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004188ca: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4188cfu); f_005caba4();
    /* 004188cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004188d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004188d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004188d5: je 0x4188fc */ if (fZ) goto L_004188fc;
L_004188d7:; BB(0x004188d7);
    /* 004188d7: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004188de: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004188e5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004188e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004188eb: lea eax, [edx + 0x2c] */ r_eax = (u32)(r_edx+0x2cu);
    /* 004188ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004188ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004188f0: call 0x417f90 */ r_esp -= 4; W32(r_esp, 0x4188f5u); f_00417f90();
    /* 004188f5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004188fc:; BB(0x004188fc);
    /* 004188fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004188ff: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418902: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418905: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00418908: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041890b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00418912: mov esp, ebp */ r_esp = r_ebp;
    /* 00418914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418915: ret 8 */ FN_RET(0x00418794); r_esp += 12; return;
}

void f_00418918(void) /* sub_418918 */
{
    FN_ENTER(0x00418918);
    /* 00418918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418919: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041891c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041891e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00418923: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418925: je 0x4189b3 */ if (fZ) goto L_004189b3;
L_0041892b:; BB(0x0041892b);
    /* 0041892b: fld dword ptr [0x8fb134] */ FPUSH(R_F32((u32)(0x8fb134u)));
    /* 00418931: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00418937: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00418939: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0041893f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00418942: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 00418948: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0041894e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418950: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00418952: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 00418958: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041895a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041895c: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 00418962: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418964: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00418967: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418969: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041896d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00418971: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418973: je 0x41897e */ if (fZ) goto L_0041897e;
L_00418975:; BB(0x00418975);
    /* 00418975: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00418978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418979: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41897eu); f_00508db8();
L_0041897e:; BB(0x0041897e);
    /* 0041897e: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00418981: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418983: je 0x41898e */ if (fZ) goto L_0041898e;
L_00418985:; BB(0x00418985);
    /* 00418985: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00418988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418989: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41898eu); f_00508db8();
L_0041898e:; BB(0x0041898e);
    /* 0041898e: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00418991: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418993: je 0x41899e */ if (fZ) goto L_0041899e;
L_00418995:; BB(0x00418995);
    /* 00418995: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00418998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418999: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41899eu); f_00508db8();
L_0041899e:; BB(0x0041899e);
    /* 0041899e: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004189a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004189a3: je 0x4189ae */ if (fZ) goto L_004189ae;
L_004189a5:; BB(0x004189a5);
    /* 004189a5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004189a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004189a9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4189aeu); f_00508db8();
L_004189ae:; BB(0x004189ae);
    /* 004189ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004189b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004189b2: ret  */ FN_RET(0x00418918); r_esp += 4; return;
L_004189b3:; BB(0x004189b3);
    /* 004189b3: fld dword ptr [0x8fb134] */ FPUSH(R_F32((u32)(0x8fb134u)));
    /* 004189b9: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 004189bf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004189c1: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 004189c7: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004189ca: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 004189cd: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 004189d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004189d5: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 004189db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004189dd: fstp dword ptr [ebx + 0x30] */ W_F32((u32)(r_ebx+0x30u), ST(0)); FPOP();
    /* 004189e0: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 004189e6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004189e8: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 004189ee: fstp dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0)); FPOP();
    /* 004189f1: je 0x4189fc */ if (fZ) goto L_004189fc;
L_004189f3:; BB(0x004189f3);
    /* 004189f3: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 004189f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004189f7: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4189fcu); f_00508db8();
L_004189fc:; BB(0x004189fc);
    /* 004189fc: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004189ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418a01: je 0x418a0c */ if (fZ) goto L_00418a0c;
L_00418a03:; BB(0x00418a03);
    /* 00418a03: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 00418a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418a07: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x418a0cu); f_00508db8();
L_00418a0c:; BB(0x00418a0c);
    /* 00418a0c: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00418a0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418a11: je 0x418a1c */ if (fZ) goto L_00418a1c;
L_00418a13:; BB(0x00418a13);
    /* 00418a13: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 00418a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418a17: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x418a1cu); f_00508db8();
L_00418a1c:; BB(0x00418a1c);
    /* 00418a1c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00418a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418a21: je 0x4189ae */ if (fZ) goto L_004189ae;
L_00418a23:; BB(0x00418a23);
    /* 00418a23: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00418a26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a27: mov ecx, eax */ r_ecx = r_eax;
    /* 00418a29: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x418a2eu); f_00508db8();
    /* 00418a2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418a31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418a32: ret  */ FN_RET(0x00418918); r_esp += 4; return;
}

void f_00418a34(void) /* sub_418A34 */
{
    FN_ENTER(0x00418a34);
    /* 00418a34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00418a37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00418a39: call 0x418a58 */ r_esp -= 4; W32(r_esp, 0x418a3eu); f_00418a58();
    /* 00418a3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00418a42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00418a44: jne 0x418a4a */ if (!fZ) goto L_00418a4a;
L_00418a46:; BB(0x00418a46);
    /* 00418a46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418a47: ret 4 */ FN_RET(0x00418a34); r_esp += 8; return;
L_00418a4a:; BB(0x00418a4a);
    /* 00418a4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418a4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x418a50u); f_005c2f74();
    /* 00418a50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418a51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418a52: ret 4 */ FN_RET(0x00418a34); r_esp += 8; return;
}

void f_00418a58(void) /* sub_418A58 */
{
    FN_ENTER(0x00418a58);
    /* 00418a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418a59: mov ebp, esp */ r_ebp = r_esp;
    /* 00418a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418a5d: push 0x8cd460 */ { u32 v = 0x8cd460u; r_esp -= 4; W32(r_esp, v); }
    /* 00418a62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00418a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418a69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00418a70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418a73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00418a76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00418a79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00418a7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00418a7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00418a82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418a85: mov dword ptr [ecx], 0xaf3be0 */ W32((u32)(r_ecx), 0xaf3be0u);
    /* 00418a8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00418a92: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x418a97u); f_005219f0();
    /* 00418a97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418a9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00418aa1: mov esp, ebp */ r_esp = r_ebp;
    /* 00418aa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418aa4: ret  */ FN_RET(0x00418a58); r_esp += 4; return;
}

void f_00418aa8(void) /* sub_418AA8 */
{
    FN_ENTER(0x00418aa8);
    /* 00418aa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418aa9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00418aab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00418aad: call 0x521ac0 */ r_esp -= 4; W32(r_esp, 0x418ab2u); f_00521ac0();
    /* 00418ab2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00418ab6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00418ab8: jne 0x418abe */ if (!fZ) goto L_00418abe;
L_00418aba:; BB(0x00418aba);
    /* 00418aba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418abb: ret 4 */ FN_RET(0x00418aa8); r_esp += 8; return;
L_00418abe:; BB(0x00418abe);
    /* 00418abe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418abf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x418ac4u); f_00857e98();
    /* 00418ac4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418ac5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418ac6: ret 4 */ FN_RET(0x00418aa8); r_esp += 8; return;
}

void f_00418acc(void) /* sub_418ACC */
{
    FN_ENTER(0x00418acc);
    /* 00418acc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418acd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00418acf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00418ad1: call 0x418af0 */ r_esp -= 4; W32(r_esp, 0x418ad6u); f_00418af0();
    /* 00418ad6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00418ada: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00418adc: jne 0x418ae2 */ if (!fZ) goto L_00418ae2;
L_00418ade:; BB(0x00418ade);
    /* 00418ade: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418adf: ret 4 */ FN_RET(0x00418acc); r_esp += 8; return;
L_00418ae2:; BB(0x00418ae2);
    /* 00418ae2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418ae3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x418ae8u); f_005c2f74();
    /* 00418ae8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418ae9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418aea: ret 4 */ FN_RET(0x00418acc); r_esp += 8; return;
}

void f_00418af0(void) /* sub_418AF0 */
{
    FN_ENTER(0x00418af0);
    /* 00418af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00418af3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418af5: push 0x8cd504 */ { u32 v = 0x8cd504u; r_esp -= 4; W32(r_esp, v); }
    /* 00418afa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00418b00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418b01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00418b08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418b0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00418b0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00418b11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00418b14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00418b17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00418b1a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00418b21: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418b24: mov ecx, dword ptr [eax + 0x77c] */ r_ecx = R32((u32)(r_eax+0x77cu));
    /* 00418b2a: mov dword ptr [eax], 0xaf3a20 */ W32((u32)(r_eax), 0xaf3a20u);
    /* 00418b30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418b32: je 0x418b49 */ if (fZ) goto L_00418b49;
L_00418b34:; BB(0x00418b34);
    /* 00418b34: je 0x418b3f */ if (fZ) goto L_00418b3f;
L_00418b36:; BB(0x00418b36);
    /* 00418b36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418b38: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00418b3a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x418b3cu); call_ind(t); }
    /* 00418b3c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00418b3f:; BB(0x00418b3f);
    /* 00418b3f: mov dword ptr [eax + 0x77c], 0 */ W32((u32)(r_eax+0x77cu), 0x0u);
L_00418b49:; BB(0x00418b49);
    /* 00418b49: mov edx, dword ptr [eax + 0x6e0] */ r_edx = R32((u32)(r_eax+0x6e0u));
    /* 00418b4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418b51: je 0x418b6d */ if (fZ) goto L_00418b6d;
L_00418b53:; BB(0x00418b53);
    /* 00418b53: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00418b57: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00418b5c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00418b60: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418b63: mov dword ptr [eax + 0x6e0], 0 */ W32((u32)(r_eax+0x6e0u), 0x0u);
L_00418b6d:; BB(0x00418b6d);
    /* 00418b6d: mov ecx, dword ptr [eax + 0x694] */ r_ecx = R32((u32)(r_eax+0x694u));
    /* 00418b73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418b75: je 0x418b8c */ if (fZ) goto L_00418b8c;
L_00418b77:; BB(0x00418b77);
    /* 00418b77: je 0x418b82 */ if (fZ) goto L_00418b82;
L_00418b79:; BB(0x00418b79);
    /* 00418b79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418b7b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00418b7d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x418b7fu); call_ind(t); }
    /* 00418b7f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00418b82:; BB(0x00418b82);
    /* 00418b82: mov dword ptr [eax + 0x694], 0 */ W32((u32)(r_eax+0x694u), 0x0u);
L_00418b8c:; BB(0x00418b8c);
    /* 00418b8c: mov ecx, dword ptr [eax + 0x690] */ r_ecx = R32((u32)(r_eax+0x690u));
    /* 00418b92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418b94: je 0x418bac */ if (fZ) goto L_00418bac;
L_00418b96:; BB(0x00418b96);
    /* 00418b96: je 0x418ba2 */ if (fZ) goto L_00418ba2;
L_00418b98:; BB(0x00418b98);
    /* 00418b98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418b9a: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x418b9fu); f_00418aa8();
    /* 00418b9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00418ba2:; BB(0x00418ba2);
    /* 00418ba2: mov dword ptr [eax + 0x690], 0 */ W32((u32)(r_eax+0x690u), 0x0u);
L_00418bac:; BB(0x00418bac);
    /* 00418bac: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 00418bb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418bb4: je 0x418bcb */ if (fZ) goto L_00418bcb;
L_00418bb6:; BB(0x00418bb6);
    /* 00418bb6: je 0x418bc1 */ if (fZ) goto L_00418bc1;
L_00418bb8:; BB(0x00418bb8);
    /* 00418bb8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418bba: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00418bbc: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x418bbeu); call_ind(t); }
    /* 00418bbe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00418bc1:; BB(0x00418bc1);
    /* 00418bc1: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_00418bcb:; BB(0x00418bcb);
    /* 00418bcb: mov ecx, eax */ r_ecx = r_eax;
    /* 00418bcd: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x418bd2u); f_007b9c8c();
    /* 00418bd2: mov eax, dword ptr [0xa43750] */ r_eax = R32((u32)(0xa43750u));
    /* 00418bd7: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418bda: jne 0x418bea */ if (!fZ) goto L_00418bea;
L_00418be0:; BB(0x00418be0);
    /* 00418be0: mov dword ptr [0xa43750], 0 */ W32((u32)(0xa43750u), 0x0u);
L_00418bea:; BB(0x00418bea);
    /* 00418bea: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00418bf1: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00418bf6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418bf9: add eax, 0x6f0 */ {  u32 a = r_eax; u32 b = 0x6f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418bfe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00418c00: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00418c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418c03: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x418c08u); f_008586d6();
    /* 00418c08: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00418c0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418c12: add ecx, 0x620 */ {  u32 a = r_ecx; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418c18: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x418c1du); f_0061cdb0();
    /* 00418c1d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00418c24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418c27: add ecx, 0x5fc */ {  u32 a = r_ecx; u32 b = 0x5fcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418c2d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x418c32u); f_0061cdb0();
    /* 00418c32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00418c39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418c3c: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418c42: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x418c47u); f_008171e8();
    /* 00418c47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00418c4a: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x418c4fu); f_0051f4fc();
    /* 00418c4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418c52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00418c59: mov esp, ebp */ r_esp = r_ebp;
    /* 00418c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418c5c: ret  */ FN_RET(0x00418af0); r_esp += 4; return;
}

void f_00418c60(void) /* sub_418C60 */
{
    FN_ENTER(0x00418c60);
    /* 00418c60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00418c64: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 00418c6a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00418c6c: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 00418c72: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00418c75: mov edx, dword ptr [ecx + 0x308] */ r_edx = R32((u32)(r_ecx+0x308u));
    /* 00418c7b: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00418c7e: ret 4 */ FN_RET(0x00418c60); r_esp += 8; return;
}

void f_00418c84(void) /* sub_418C84 */
{
    FN_ENTER(0x00418c84);
    /* 00418c84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00418c85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418c86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418c87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418c88: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418c8b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00418c8d: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00418c91: mov esi, dword ptr [ebp + 0xa8] */ r_esi = R32((u32)(r_ebp+0xa8u));
    /* 00418c97: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00418c99: jle 0x418cce */ if ((fZ||fS!=fO)) goto L_00418cce;
L_00418c9b:; BB(0x00418c9b);
    /* 00418c9b: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00418ca1: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00418ca5: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00418ca8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418caa: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00418cac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418cae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418cb0: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00418cb2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418cb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00418cb6:; BB(0x00418cb6);
    /* 00418cb6: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 00418cb9: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 00418cbc: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418cc2: jne 0x418cd8 */ if (!fZ) goto L_00418cd8;
L_00418cc4:; BB(0x00418cc4);
    /* 00418cc4: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418cc7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00418cca: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418ccc: jl 0x418cb6 */ if ((fS!=fO)) goto L_00418cb6;
L_00418cce:; BB(0x00418cce);
    /* 00418cce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418cd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418cd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418cd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00418cd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00418cd5: ret 0xc */ FN_RET(0x00418c84); r_esp += 16; return;
L_00418cd8:; BB(0x00418cd8);
    /* 00418cd8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00418cdb: mov eax, ecx */ r_eax = r_ecx;
    /* 00418cdd: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00418ce1: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00418ce6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418ce7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418ce9: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00418ced: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00418cf0: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00418cf4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00418cf6: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00418cfc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00418cfe: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x418d01u); call_ind(t); }
    /* 00418d01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418d03: mov eax, ebp */ r_eax = r_ebp;
    /* 00418d05: call 0x418d18 */ r_esp -= 4; W32(r_esp, 0x418d0au); f_00418d18();
    /* 00418d0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418d0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00418d0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418d0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00418d10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00418d11: ret 0xc */ FN_RET(0x00418c84); r_esp += 16; return;
}

void f_00418d14(void) /* sub_418D14 */
{
    FN_ENTER(0x00418d14);
    /* 00418d14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00418d18: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00418d1f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00418d22: je 0x418d30 */ if (fZ) goto L_00418d30;
L_00418d24:; BB(0x00418d24);
    /* 00418d24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418d26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00418d28: mov ecx, eax */ r_ecx = r_eax;
    /* 00418d2a: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x418d30u); call_ind(t); }
L_00418d30:; BB(0x00418d30);
    /* 00418d30: ret  */ FN_RET(0x00418d14); r_esp += 4; return;
}

void f_00418d18(void) /* sub_418D18 */
{
    FN_ENTER(0x00418d18);
    /* 00418d18: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00418d1f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00418d22: je 0x418d30 */ if (fZ) goto L_00418d30;
L_00418d24:; BB(0x00418d24);
    /* 00418d24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418d26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00418d28: mov ecx, eax */ r_ecx = r_eax;
    /* 00418d2a: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x418d30u); call_ind(t); }
L_00418d30:; BB(0x00418d30);
    /* 00418d30: ret  */ FN_RET(0x00418d18); r_esp += 4; return;
}

void f_00418d34(void) /* sub_418D34 */
{
    FN_ENTER(0x00418d34);
    /* 00418d34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418d35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418d36: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00418d3a: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00418d3f: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00418d45: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00418d47: mov ecx, esi */ r_ecx = r_esi;
    /* 00418d49: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x418d4cu); call_ind(t); }
    /* 00418d4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00418d4e: mov eax, esi */ r_eax = r_esi;
    /* 00418d50: call 0x418d18 */ r_esp -= 4; W32(r_esp, 0x418d55u); f_00418d18();
    /* 00418d55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418d56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00418d57: ret 8 */ FN_RET(0x00418d34); r_esp += 12; return;
}

void f_00418d5c(void) /* sub_418D5C */
{
    FN_ENTER(0x00418d5c);
    /* 00418d5c: mov edx, dword ptr [0xa437e0] */ r_edx = R32((u32)(0xa437e0u));
    /* 00418d62: cmp edx, dword ptr [0xa437dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa437dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418d68: jne 0x418d93 */ if (!fZ) goto L_00418d93;
L_00418d6a:; BB(0x00418d6a);
    /* 00418d6a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x418d6fu); f_0082d7b0();
    /* 00418d6f: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x418d74u); f_00520c54();
    /* 00418d74: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00418d76: push dword ptr [0xa437a8] */ { u32 v = R32((u32)(0xa437a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00418d7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00418d7e: mov edx, 0xa437ac */ r_edx = 0xa437acu;
    /* 00418d83: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x418d88u); f_0082f940();
    /* 00418d88: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x418d8du); f_0082da80();
    /* 00418d8d: mov edx, dword ptr [0xa437e0] */ r_edx = R32((u32)(0xa437e0u));
L_00418d93:; BB(0x00418d93);
    /* 00418d93: mov eax, dword ptr [0xa437a4] */ r_eax = R32((u32)(0xa437a4u));
    /* 00418d98: cmp edx, dword ptr [eax*4 + 0x8fb900] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x8fb900u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418d9f: je 0x418dab */ if (fZ) goto L_00418dab;
L_00418da1:; BB(0x00418da1);
    /* 00418da1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00418da4: mov dword ptr [0xa437e0], edx */ W32((u32)(0xa437e0u), r_edx);
    /* 00418daa: ret  */ FN_RET(0x00418d5c); r_esp += 4; return;
L_00418dab:; BB(0x00418dab);
    /* 00418dab: mov edx, dword ptr [0xa437a0] */ r_edx = R32((u32)(0xa437a0u));
    /* 00418db1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418db2: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 00418db5: mov dword ptr [0xa437a0], eax */ W32((u32)(0xa437a0u), r_eax);
    /* 00418dba: push 0xa437d0 */ { u32 v = 0xa437d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00418dbf: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x418dc4u); f_00520c5c();
    /* 00418dc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418dc7: mov eax, dword ptr [0xa437a4] */ r_eax = R32((u32)(0xa437a4u));
    /* 00418dcc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418dcf: mov edx, eax */ r_edx = r_eax;
    /* 00418dd1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418dd4: je 0x418e27 */ if (fZ) goto L_00418e27;
L_00418dd6:; BB(0x00418dd6);
    /* 00418dd6: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418dd9: je 0x418de9 */ if (fZ) goto L_00418de9;
L_00418ddb:; BB(0x00418ddb);
    /* 00418ddb: mov dword ptr [0xa437a4], edx */ W32((u32)(0xa437a4u), r_edx);
    /* 00418de1: mov edx, dword ptr [0xa437e0] */ r_edx = R32((u32)(0xa437e0u));
    /* 00418de7: jmp 0x418da1 */ goto L_00418da1;
L_00418de9:; BB(0x00418de9);
    /* 00418de9: mov eax, dword ptr [0xa4379c] */ r_eax = R32((u32)(0xa4379cu));
    /* 00418dee: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418df3: je 0x418e03 */ if (fZ) goto L_00418e03;
L_00418df5:; BB(0x00418df5);
    /* 00418df5: mov dword ptr [0xa437a4], edx */ W32((u32)(0xa437a4u), r_edx);
    /* 00418dfb: mov edx, dword ptr [0xa437e0] */ r_edx = R32((u32)(0xa437e0u));
    /* 00418e01: jmp 0x418da1 */ goto L_00418da1;
L_00418e03:; BB(0x00418e03);
    /* 00418e03: mov eax, dword ptr [0xa437a0] */ r_eax = R32((u32)(0xa437a0u));
    /* 00418e08: mov edx, dword ptr [0xa437e0] */ r_edx = R32((u32)(0xa437e0u));
    /* 00418e0e: mov dword ptr [0xa437a4], 0x20 */ W32((u32)(0xa437a4u), 0x20u);
    /* 00418e18: add eax, 0xa8 */ {  u32 a = r_eax; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418e1d: mov dword ptr [0xa437a0], eax */ W32((u32)(0xa437a0u), r_eax);
    /* 00418e22: jmp 0x418da1 */ goto L_00418da1;
L_00418e27:; BB(0x00418e27);
    /* 00418e27: mov ecx, dword ptr [0xa4379c] */ r_ecx = R32((u32)(0xa4379cu));
    /* 00418e2d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418e33: jne 0x418dd6 */ if (!fZ) goto L_00418dd6;
L_00418e35:; BB(0x00418e35);
    /* 00418e35: mov ecx, dword ptr [0xa437a0] */ r_ecx = R32((u32)(0xa437a0u));
    /* 00418e3b: mov eax, 0xc */ r_eax = 0xcu;
    /* 00418e40: mov edx, 0xc */ r_edx = 0xcu;
    /* 00418e45: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418e48: mov dword ptr [0xa437a0], ecx */ W32((u32)(0xa437a0u), r_ecx);
    /* 00418e4e: jmp 0x418dd6 */ goto L_00418dd6;
}

void f_00418e50(void) /* sub_418E50 */
{
    FN_ENTER(0x00418e50);
    /* 00418e50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00418e51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418e52: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418e55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00418e57: mov eax, dword ptr [ebx + 0x438] */ r_eax = R32((u32)(r_ebx+0x438u));
    /* 00418e5d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00418e60: mov edx, dword ptr [ebx + 0x43c] */ r_edx = R32((u32)(r_ebx+0x43cu));
    /* 00418e66: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00418e6a: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 00418e70: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00418e72: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00418e76: mov eax, dword ptr [ebx + 0x474] */ r_eax = R32((u32)(r_ebx+0x474u));
    /* 00418e7c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00418e80: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
    /* 00418e86: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00418e8a: mov eax, dword ptr [ebx + 0x47c] */ r_eax = R32((u32)(r_ebx+0x47cu));
    /* 00418e90: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00418e94: mov eax, dword ptr [ebx + 0x45c] */ r_eax = R32((u32)(r_ebx+0x45cu));
    /* 00418e9a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00418e9e: mov eax, dword ptr [ebx + 0x460] */ r_eax = R32((u32)(r_ebx+0x460u));
    /* 00418ea4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00418ea8: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 00418eae: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00418eb2: mov eax, dword ptr [ebx + 0x444] */ r_eax = R32((u32)(r_ebx+0x444u));
    /* 00418eb8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00418ebc: mov eax, dword ptr [ebx + 0x448] */ r_eax = R32((u32)(r_ebx+0x448u));
    /* 00418ec2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00418ec6: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 00418ecc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00418ed0: mov eax, dword ptr [ebx + 0x5b8] */ r_eax = R32((u32)(r_ebx+0x5b8u));
    /* 00418ed6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00418eda: mov eax, dword ptr [ebx + 0x5bc] */ r_eax = R32((u32)(r_ebx+0x5bcu));
    /* 00418ee0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00418ee4: mov eax, dword ptr [ebx + 0x5c0] */ r_eax = R32((u32)(r_ebx+0x5c0u));
    /* 00418eea: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00418eee: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 00418ef4: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00418ef8: mov eax, dword ptr [ebx + 0x4cc] */ r_eax = R32((u32)(r_ebx+0x4ccu));
    /* 00418efe: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00418f02: mov eax, dword ptr [ebx + 0x4d0] */ r_eax = R32((u32)(r_ebx+0x4d0u));
    /* 00418f08: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00418f0c: mov eax, dword ptr [ebx + 0x504] */ r_eax = R32((u32)(r_ebx+0x504u));
    /* 00418f12: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00418f16: mov eax, dword ptr [ebx + 0x508] */ r_eax = R32((u32)(r_ebx+0x508u));
    /* 00418f1c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00418f20: mov eax, dword ptr [ebx + 0x50c] */ r_eax = R32((u32)(r_ebx+0x50cu));
    /* 00418f26: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00418f2a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00418f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418f2e: call 0x520158 */ r_esp -= 4; W32(r_esp, 0x418f33u); f_00520158();
    /* 00418f33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00418f35: mov esi, eax */ r_esi = r_eax;
L_00418f37:; BB(0x00418f37);
    /* 00418f37: mov edx, esi */ r_edx = r_esi;
    /* 00418f39: add edx, dword ptr [ebx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418f3f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00418f42: fcomp dword ptr [0x8fbfa4] */ fx_compare(ST(0), R_F32((u32)(0x8fbfa4u))); FPOP();
    /* 00418f48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00418f4a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00418f4b: jb 0x418f56 */ if (fC) goto L_00418f56;
L_00418f4d:; BB(0x00418f4d);
    /* 00418f4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418f4e: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x418f53u); f_0052033c();
    /* 00418f53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00418f54: jmp 0x418f5d */ goto L_00418f5d;
L_00418f56:; BB(0x00418f56);
    /* 00418f56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418f57: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x418f5cu); f_00520328();
    /* 00418f5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00418f5d:; BB(0x00418f5d);
    /* 00418f5d: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00418f60: cmp esi, 0x134 */ {  u32 a = r_esi; u32 b = 0x134u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418f66: jl 0x418f37 */ if ((fS!=fO)) goto L_00418f37;
L_00418f68:; BB(0x00418f68);
    /* 00418f68: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00418f6f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418f72: je 0x418f99 */ if (fZ) goto L_00418f99;
L_00418f74:; BB(0x00418f74);
    /* 00418f74: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00418f7a: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418f7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418f80: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x418f85u); f_0052033c();
    /* 00418f85: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00418f8b: add eax, 0xb0 */ {  u32 a = r_eax; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418f91: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x418f96u); f_0052033c();
    /* 00418f96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00418f99:; BB(0x00418f99);
    /* 00418f99: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 00418f9e: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00418fa1: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00418fa7: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 00418faa: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 00418fad: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00418fb3: fstp dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0)); FPOP();
    /* 00418fb6: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 00418fb9: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00418fbf: fstp dword ptr [edx + 0x80] */ W_F32((u32)(r_edx+0x80u), ST(0)); FPOP();
    /* 00418fc5: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00418fc8: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00418fce: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00418fd4: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00418fd7: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00418fdd: fstp dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0)); FPOP();
    /* 00418fe3: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 00418fe6: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00418fec: fstp dword ptr [edx + 0x104] */ W_F32((u32)(r_edx+0x104u), ST(0)); FPOP();
    /* 00418ff2: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00418ff5: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 00418ffb: fstp dword ptr [ecx + 0x130] */ W_F32((u32)(r_ecx+0x130u), ST(0)); FPOP();
    /* 00419001: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419004: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00419005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00419006: ret  */ FN_RET(0x00418e50); r_esp += 4; return;
}

