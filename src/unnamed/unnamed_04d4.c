#include "protos.h"

void f_004d4048(void) /* sub_4D4048 */
{
    FN_ENTER(0x004d4048);
    /* 004d4048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d4049: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d404c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d404e: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004d4053: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4056: je 0x4d415d */ if (fZ) goto L_004d415d;
L_004d405c:; BB(0x004d405c);
    /* 004d405c: movzx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)R8((u32)(r_ebp+0x1cu));
    /* 004d4060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4062: jne 0x4d4137 */ if (!fZ) goto L_004d4137;
L_004d4068:; BB(0x004d4068);
    /* 004d4068: fld dword ptr [0xa48780] */ FPUSH(R_F32((u32)(0xa48780u)));
    /* 004d406e: mov eax, dword ptr [0xa48780] */ r_eax = R32((u32)(0xa48780u));
    /* 004d4073: fld dword ptr [0xa48784] */ FPUSH(R_F32((u32)(0xa48784u)));
    /* 004d4079: mov edx, dword ptr [0xa48784] */ r_edx = R32((u32)(0xa48784u));
    /* 004d407f: fld dword ptr [0xa48788] */ FPUSH(R_F32((u32)(0xa48788u)));
    /* 004d4085: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 004d408b: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 004d4091: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 004d4097: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d4099: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 004d409b: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 004d409f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d40a1: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004d40a3: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 004d40a7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d40a9: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004d40ab: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 004d40af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d40b1: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 004d40b3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004d40b5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d40b9: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004d40bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d40bd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004d40c1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004d40c3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004d40c7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d40ca: mov eax, dword ptr [0xa48788] */ r_eax = R32((u32)(0xa48788u));
    /* 004d40cf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004d40d3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d40d7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004d40db: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d40e0u); f_0082def4();
    /* 004d40e0: fld dword ptr [0x9090ac] */ FPUSH(R_F32((u32)(0x9090acu)));
    /* 004d40e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d40e8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004d40ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d40ec: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 004d40f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d40f2: jne 0x4d4104 */ if (!fZ) goto L_004d4104;
L_004d40f4:; BB(0x004d40f4);
    /* 004d40f4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004d40f8: fld dword ptr [0x9090a8] */ FPUSH(R_F32((u32)(0x9090a8u)));
    /* 004d40fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d4100: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_004d4104:; BB(0x004d4104);
    /* 004d4104: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 004d4108: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d410a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d410b: je 0x4d4140 */ if (fZ) goto L_004d4140;
L_004d410d:; BB(0x004d410d);
    /* 004d410d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d410f: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4115: mov ecx, dword ptr [ebp + 0x19c] */ r_ecx = R32((u32)(r_ebp+0x19cu));
    /* 004d411b: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4120: call 0x82ebc8 */ r_esp -= 4; W32(r_esp, 0x4d4125u); f_0082ebc8();
    /* 004d4125: push 0xa489cc */ { u32 v = 0xa489ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004d412a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004d412e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004d4132: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x4d4137u); f_0082f108();
L_004d4137:; BB(0x004d4137);
    /* 004d4137: mov byte ptr [ebp + 0x1c], 0 */ W8((u32)(r_ebp+0x1cu), 0x0u);
    /* 004d413b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d413e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d413f: ret  */ FN_RET(0x004d4048); r_esp += 4; return;
L_004d4140:; BB(0x004d4140);
    /* 004d4140: fcom dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); 
    /* 004d4144: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4146: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d4147: jne 0x4d410d */ if (!fZ) goto L_004d410d;
L_004d4149:; BB(0x004d4149);
    /* 004d4149: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d414b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004d414f: fld dword ptr [0x9090a8] */ FPUSH(R_F32((u32)(0x9090a8u)));
    /* 004d4155: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d4157: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 004d415b: jmp 0x4d410d */ goto L_004d410d;
L_004d415d:; BB(0x004d415d);
    /* 004d415d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d4161: ret  */ FN_RET(0x004d4048); r_esp += 4; return;
}

void f_004d4164(void) /* sub_4D4164 */
{
    FN_ENTER(0x004d4164);
    /* 004d4164: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d4165: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d4168: mov esi, ecx */ r_esi = r_ecx;
    /* 004d416a: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004d416e: fld dword ptr [0xa48780] */ FPUSH(R_F32((u32)(0xa48780u)));
    /* 004d4174: mov edx, dword ptr [0xa48780] */ r_edx = R32((u32)(0xa48780u));
    /* 004d417a: fld dword ptr [0xa48784] */ FPUSH(R_F32((u32)(0xa48784u)));
    /* 004d4180: fld dword ptr [0xa48788] */ FPUSH(R_F32((u32)(0xa48788u)));
    /* 004d4186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4188: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004d418b: mov edx, dword ptr [0xa48784] */ r_edx = R32((u32)(0xa48784u));
    /* 004d4191: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004d4195: mov edx, dword ptr [0xa48788] */ r_edx = R32((u32)(0xa48788u));
    /* 004d419b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004d419f: je 0x4d41c0 */ if (fZ) goto L_004d41c0;
L_004d41a1:; BB(0x004d41a1);
    /* 004d41a1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d41a3: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 004d41a5: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004d41a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d41aa: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 004d41ad: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 004d41b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d41b3: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 004d41b6: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004d41ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d41bc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d41be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004d41c0:; BB(0x004d41c0);
    /* 004d41c0: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 004d41c6: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004d41c8: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 004d41ce: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 004d41d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d41d6: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 004d41da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d41dc: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004d41de: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 004d41e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d41e4: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004d41e6: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 004d41ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d41ec: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 004d41ee: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004d41f0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d41f4: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004d41f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d41f8: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004d41fc: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004d41fe: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004d4202: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004d4206: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d420bu); f_0082def4();
    /* 004d420b: fld dword ptr [0x90909c] */ FPUSH(R_F32((u32)(0x90909cu)));
    /* 004d4211: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4213: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004d4215: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4217: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 004d421c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d421d: jne 0x4d422f */ if (!fZ) goto L_004d422f;
L_004d421f:; BB(0x004d421f);
    /* 004d421f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004d4223: fld dword ptr [0x909098] */ FPUSH(R_F32((u32)(0x909098u)));
    /* 004d4229: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d422b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_004d422f:; BB(0x004d422f);
    /* 004d422f: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 004d4233: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4235: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d4236: je 0x4d4269 */ if (fZ) goto L_004d4269;
L_004d4238:; BB(0x004d4238);
    /* 004d4238: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d423a: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d423f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4240: mov ecx, dword ptr [esi + 0x19c] */ r_ecx = R32((u32)(r_esi+0x19cu));
    /* 004d4246: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 004d424b: call 0x82ebc8 */ r_esp -= 4; W32(r_esp, 0x4d4250u); f_0082ebc8();
    /* 004d4250: push 0xa489cc */ { u32 v = 0xa489ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4255: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004d4259: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004d425d: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x4d4262u); f_0082f108();
    /* 004d4262: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4265: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d4266: ret 4 */ FN_RET(0x004d4164); r_esp += 8; return;
L_004d4269:; BB(0x004d4269);
    /* 004d4269: fcom dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); 
    /* 004d426d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d426f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d4270: jne 0x4d4238 */ if (!fZ) goto L_004d4238;
L_004d4272:; BB(0x004d4272);
    /* 004d4272: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d4274: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004d4278: fld dword ptr [0x909098] */ FPUSH(R_F32((u32)(0x909098u)));
    /* 004d427e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d4280: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 004d4284: jmp 0x4d4238 */ goto L_004d4238;
}

void f_004d4288(void) /* sub_4D4288 */
{
    FN_ENTER(0x004d4288);
    /* 004d4288: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004d428c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d4291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d4293: je 0x4d430b */ if (fZ) goto L_004d430b;
L_004d4295:; BB(0x004d4295);
    /* 004d4295: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4297: je 0x4d42eb */ if (fZ) goto L_004d42eb;
L_004d4299:; BB(0x004d4299);
    /* 004d4299: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d429c: jne 0x4d42c2 */ if (!fZ) goto L_004d42c2;
L_004d429e:; BB(0x004d429e);
    /* 004d429e: mov dword ptr [eax + 0x1c4], 0x3e333333 */ W32((u32)(r_eax+0x1c4u), 0x3e333333u);
    /* 004d42a8: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 004d42ad: mov dword ptr [eax + 0x1c0], edx */ W32((u32)(r_eax+0x1c0u), r_edx);
    /* 004d42b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d42b4: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d42b9: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4d42beu); f_006ff5f8();
    /* 004d42be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d42c1: ret  */ FN_RET(0x004d4288); r_esp += 4; return;
L_004d42c2:; BB(0x004d42c2);
    /* 004d42c2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d42c5: jne 0x4d430b */ if (!fZ) goto L_004d430b;
L_004d42c7:; BB(0x004d42c7);
    /* 004d42c7: mov dword ptr [eax + 0x1c4], 0x3d4ccccd */ W32((u32)(r_eax+0x1c4u), 0x3d4ccccdu);
    /* 004d42d1: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 004d42d6: mov dword ptr [eax + 0x1c0], edx */ W32((u32)(r_eax+0x1c0u), r_edx);
    /* 004d42dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d42dd: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d42e2: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4d42e7u); f_006ff5f8();
    /* 004d42e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d42ea: ret  */ FN_RET(0x004d4288); r_esp += 4; return;
L_004d42eb:; BB(0x004d42eb);
    /* 004d42eb: mov dword ptr [eax + 0x1c4], 0x3c8f5c29 */ W32((u32)(r_eax+0x1c4u), 0x3c8f5c29u);
    /* 004d42f5: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004d42fa: mov dword ptr [eax + 0x1c0], edx */ W32((u32)(r_eax+0x1c0u), r_edx);
    /* 004d4300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4301: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4303: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4d4308u); f_006ff5f8();
    /* 004d4308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004d430b:; BB(0x004d430b);
    /* 004d430b: ret  */ FN_RET(0x004d4288); r_esp += 4; return;
}

void f_004d430c(void) /* sub_4D430C */
{
    FN_ENTER(0x004d430c);
    /* 004d430c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004d4310: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d4316: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d4318: je 0x4d4338 */ if (fZ) goto L_004d4338;
L_004d431a:; BB(0x004d431a);
    /* 004d431a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d431e: mov dword ptr [edx + 0x1c4], eax */ W32((u32)(r_edx+0x1c4u), r_eax);
    /* 004d4324: mov dword ptr [edx + 0x1c0], ecx */ W32((u32)(r_edx+0x1c0u), r_ecx);
    /* 004d432a: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 004d432d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d432e: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4330: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4d4335u); f_006ff5f8();
    /* 004d4335: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004d4338:; BB(0x004d4338);
    /* 004d4338: ret  */ FN_RET(0x004d430c); r_esp += 4; return;
}

void f_004d433c(void) /* sub_4D433C */
{
    FN_ENTER(0x004d433c);
    /* 004d433c: add ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d433f: mov eax, ecx */ r_eax = r_ecx;
    /* 004d4341: ret  */ FN_RET(0x004d433c); r_esp += 4; return;
}

void f_004d4344(void) /* sub_4D4344 */
{
    FN_ENTER(0x004d4344);
    /* 004d4344: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4347: mov eax, ecx */ r_eax = r_ecx;
    /* 004d4349: ret  */ FN_RET(0x004d4344); r_esp += 4; return;
}

void f_004d434c(void) /* sub_4D434C */
{
    FN_ENTER(0x004d434c);
    /* 004d434c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d434d: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d4353: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d4357: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d435d: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
    /* 004d4363: call 0x4d4374 */ r_esp -= 4; W32(r_esp, 0x4d4368u); f_004d4374();
    /* 004d4368: mov eax, 1 */ r_eax = 0x1u;
    /* 004d436d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d436e: ret  */ FN_RET(0x004d434c); r_esp += 4; return;
}

void f_004d4374(void) /* sub_4D4374 */
{
    FN_ENTER(0x004d4374);
    /* 004d4374: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d437a: fld dword ptr [0xacc090] */ FPUSH(R_F32((u32)(0xacc090u)));
    /* 004d4380: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004d4383: fld dword ptr [0xacc08c] */ FPUSH(R_F32((u32)(0xacc08cu)));
    /* 004d4389: fld dword ptr [0x909080] */ FPUSH(R_F32((u32)(0x909080u)));
    /* 004d438f: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004d4391: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4393: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004d4395: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d439b: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
    /* 004d43a1: mov dword ptr [0xa48848], ecx */ W32((u32)(0xa48848u), r_ecx);
    /* 004d43a7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004d43aa: mov dword ptr [0xa4884c], edx */ W32((u32)(0xa4884cu), r_edx);
    /* 004d43b0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004d43b3: mov dword ptr [0xa48828], edx */ W32((u32)(0xa48828u), r_edx);
    /* 004d43b9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004d43bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d43be: fstp dword ptr [0xa48844] */ W_F32((u32)(0xa48844u), ST(0)); FPOP();
    /* 004d43c4: fstp dword ptr [0xa48820] */ W_F32((u32)(0xa48820u), ST(0)); FPOP();
    /* 004d43ca: mov dword ptr [0xa48840], 0x3f800000 */ W32((u32)(0xa48840u), 0x3f800000u);
    /* 004d43d4: fld dword ptr [0xa48840] */ FPUSH(R_F32((u32)(0xa48840u)));
    /* 004d43da: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d43dc: mov dword ptr [0xa4882c], edx */ W32((u32)(0xa4882cu), r_edx);
    /* 004d43e2: mov edx, dword ptr [0xacc090] */ r_edx = R32((u32)(0xacc090u));
    /* 004d43e8: mov dword ptr [0xa48838], edx */ W32((u32)(0xa48838u), r_edx);
    /* 004d43ee: fchs  */ ST(0) = -ST(0);
    /* 004d43f0: mov edx, dword ptr [0xacc08c] */ r_edx = R32((u32)(0xacc08cu));
    /* 004d43f6: fstp dword ptr [0xa48824] */ W_F32((u32)(0xa48824u), ST(0)); FPOP();
    /* 004d43fc: mov dword ptr [0xa4883c], edx */ W32((u32)(0xa4883cu), r_edx);
    /* 004d4402: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004d4405: mov dword ptr [0xa48850], edx */ W32((u32)(0xa48850u), r_edx);
    /* 004d440b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004d440e: mov dword ptr [0xa48854], edx */ W32((u32)(0xa48854u), r_edx);
    /* 004d4414: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d4417: mov dword ptr [0xa48858], edx */ W32((u32)(0xa48858u), r_edx);
    /* 004d441d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004d4420: mov dword ptr [0xa4885c], edx */ W32((u32)(0xa4885cu), r_edx);
    /* 004d4426: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004d4429: mov dword ptr [0xa48860], edx */ W32((u32)(0xa48860u), r_edx);
    /* 004d442f: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004d4432: mov dword ptr [0xa48864], eax */ W32((u32)(0xa48864u), r_eax);
    /* 004d4437: ret  */ FN_RET(0x004d4374); r_esp += 4; return;
}

void f_004d4438(void) /* sub_4D4438 */
{
    FN_ENTER(0x004d4438);
    /* 004d4438: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d443b: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d4440: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4445: je 0x4d4451 */ if (fZ) goto L_004d4451;
L_004d4447:; BB(0x004d4447);
    /* 004d4447: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d444c: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
L_004d4451:; BB(0x004d4451);
    /* 004d4451: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 004d4457: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 004d445d: mov edx, dword ptr [0xaf0350] */ r_edx = R32((u32)(0xaf0350u));
    /* 004d4463: mov ecx, dword ptr [0xaf0354] */ r_ecx = R32((u32)(0xaf0354u));
    /* 004d4469: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d446b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d446f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004d4473: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 004d447b: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 004d4483: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004d4487: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d4489: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004d448b: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004d448f: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 004d4493: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d4497: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 004d449b: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004d449f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d44a3: mov dword ptr [esp + 0x3c], 0x41a00000 */ W32((u32)(r_esp+0x3cu), 0x41a00000u);
    /* 004d44ab: mov dword ptr [esp + 0x40], 0x41700000 */ W32((u32)(r_esp+0x40u), 0x41700000u);
    /* 004d44b3: mov dword ptr [esp + 0x44], 0x3f800000 */ W32((u32)(r_esp+0x44u), 0x3f800000u);
    /* 004d44bb: mov dword ptr [esp + 0x48], 0x3f59999a */ W32((u32)(r_esp+0x48u), 0x3f59999au);
    /* 004d44c3: call 0x4d4374 */ r_esp -= 4; W32(r_esp, 0x4d44c8u); f_004d4374();
    /* 004d44c8: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d44cb: ret  */ FN_RET(0x004d4438); r_esp += 4; return;
}

void f_004d44cc(void) /* sub_4D44CC */
{
    FN_ENTER(0x004d44cc);
    /* 004d44cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d44cf: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004d44d6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d44db: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d44e3: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004d44eb: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004d44f3: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 004d44fb: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004d4503: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d4508u); f_0082d990();
    /* 004d4508: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004d450c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d450e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d4513u); f_0082d8bc();
    /* 004d4513: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d4516: push 0xa489e8 */ { u32 v = 0xa489e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d451b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d451c: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x4d4521u); f_0083a610();
    /* 004d4521: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4524: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d4529u); f_0082da80();
    /* 004d4529: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d452e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d4533u); f_0082d990();
    /* 004d4533: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004d4537: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4539: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4d453eu); f_0082e9e4();
    /* 004d453e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d4542: push 0xa489dc */ { u32 v = 0xa489dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4548: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x4d454du); f_0083a610();
    /* 004d454d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4550: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d4555u); f_0082da80();
    /* 004d4555: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4558: ret 8 */ FN_RET(0x004d44cc); r_esp += 12; return;
}

void f_004d455c(void) /* sub_4D455C */
{
    FN_ENTER(0x004d455c);
    /* 004d455c: mov eax, 0xa48980 */ r_eax = 0xa48980u;
    /* 004d4561: ret  */ FN_RET(0x004d455c); r_esp += 4; return;
}

void f_004d4564(void) /* sub_4D4564 */
{
    FN_ENTER(0x004d4564);
    /* 004d4564: push 0xa48980 */ { u32 v = 0xa48980u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4569: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d456b: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x4d4570u); f_0083a668();
    /* 004d4570: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4573: ret  */ FN_RET(0x004d4564); r_esp += 4; return;
}

void f_004d4574(void) /* sub_4D4574 */
{
    FN_ENTER(0x004d4574);
    /* 004d4574: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d4579u); f_0082d7b0();
    /* 004d4579: push 0xa48980 */ { u32 v = 0xa48980u; r_esp -= 4; W32(r_esp, v); }
    /* 004d457e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4580: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x4d4585u); f_0083a668();
    /* 004d4585: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4588: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d458c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004d4590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4592: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d4597u); f_00830aa0();
    /* 004d4597: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d459cu); f_0082da80();
    /* 004d459c: ret  */ FN_RET(0x004d4574); r_esp += 4; return;
}

void f_004d45a0(void) /* sub_4D45A0 */
{
    FN_ENTER(0x004d45a0);
    /* 004d45a0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004d45a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d45a6: mov dword ptr [0xa489cc], eax */ W32((u32)(0xa489ccu), r_eax);
    /* 004d45ab: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004d45ae: mov dword ptr [0xa489d0], edx */ W32((u32)(0xa489d0u), r_edx);
    /* 004d45b4: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004d45b7: mov dword ptr [0xa489d4], eax */ W32((u32)(0xa489d4u), r_eax);
    /* 004d45bc: ret  */ FN_RET(0x004d45a0); r_esp += 4; return;
}

void f_004d45c0(void) /* sub_4D45C0 */
{
    FN_ENTER(0x004d45c0);
    /* 004d45c0: mov dword ptr [0xa489cc], 0 */ W32((u32)(0xa489ccu), 0x0u);
    /* 004d45ca: mov dword ptr [0xa489d0], 0x3f800000 */ W32((u32)(0xa489d0u), 0x3f800000u);
    /* 004d45d4: mov dword ptr [0xa489d4], 0 */ W32((u32)(0xa489d4u), 0x0u);
    /* 004d45de: ret  */ FN_RET(0x004d45c0); r_esp += 4; return;
}

void f_004d45e0(void) /* sub_4D45E0 */
{
    FN_ENTER(0x004d45e0);
    /* 004d45e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d45e1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d45e4: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 004d45e8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d45eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d45ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d45ed: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4d45f2u); f_00835c3c();
    /* 004d45f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d45f5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d45f9: fld dword ptr [0x909060] */ FPUSH(R_F32((u32)(0x909060u)));
    /* 004d45ff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d4601: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4603: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d4604: jb 0x4d46e3 */ if (fC) goto L_004d46e3;
L_004d460a:; BB(0x004d460a);
    /* 004d460a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004d460e: fchs  */ ST(0) = -ST(0);
    /* 004d4610: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004d4612: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4614: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d4616: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4618: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d4619: ja 0x4d46f8 */ if ((!fC&&!fZ)) goto L_004d46f8;
L_004d461f:; BB(0x004d461f);
    /* 004d461f: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 004d4622: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4624: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d4625: jbe 0x4d4683 */ if ((fC||fZ)) goto L_004d4683;
L_004d4627:; BB(0x004d4627);
    /* 004d4627: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 004d462d: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d4631: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004d4633: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4635: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 004d4638: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 004d463e: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 004d4644: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4646: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004d4648: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d464a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d464c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d464e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d4651: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4653: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 004d4656: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d465a: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 004d465d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d4660: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d4664: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004d4668: call 0x82f0ac */ r_esp -= 4; W32(r_esp, 0x4d466du); f_0082f0ac();
    /* 004d466d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004d4671: fcomp dword ptr [0x909060] */ fx_compare(ST(0), R_F32((u32)(0x909060u))); FPOP();
    /* 004d4677: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d4679: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d467a: jae 0x4d46ee */ if (!fC) goto L_004d46ee;
L_004d467c:; BB(0x004d467c);
    /* 004d467c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d467e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d4681: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d4682: ret  */ FN_RET(0x004d45e0); r_esp += 4; return;
L_004d4683:; BB(0x004d4683);
    /* 004d4683: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 004d4689: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d468d: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 004d4693: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 004d4699: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d469b: fchs  */ ST(0) = -ST(0);
    /* 004d469d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004d469f: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 004d46a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d46a5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d46a8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004d46ac: fchs  */ ST(0) = -ST(0);
    /* 004d46ae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d46b0: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 004d46b3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d46b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d46b9: fchs  */ ST(0) = -ST(0);
    /* 004d46bb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d46bd: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 004d46c0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d46c4: call 0x82f0ac */ r_esp -= 4; W32(r_esp, 0x4d46c9u); f_0082f0ac();
    /* 004d46c9: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 004d46d0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004d46d4: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 004d46d8: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 004d46dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d46de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d46df: jb 0x4d46e7 */ if (fC) goto L_004d46e7;
L_004d46e1:; BB(0x004d46e1);
    /* 004d46e1: jmp 0x4d46ee */ goto L_004d46ee;
L_004d46e3:; BB(0x004d46e3);
    /* 004d46e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004d46e5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d46e7:; BB(0x004d46e7);
    /* 004d46e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d46e9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d46ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d46ed: ret  */ FN_RET(0x004d45e0); r_esp += 4; return;
L_004d46ee:; BB(0x004d46ee);
    /* 004d46ee: mov eax, 1 */ r_eax = 0x1u;
    /* 004d46f3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d46f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d46f7: ret  */ FN_RET(0x004d45e0); r_esp += 4; return;
L_004d46f8:; BB(0x004d46f8);
    /* 004d46f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d46fa: jmp 0x4d46e7 */ goto L_004d46e7;
}

void f_004d46fc(void) /* sub_4D46FC */
{
    FN_ENTER(0x004d46fc);
    /* 004d46fc: mov dword ptr [0xa489c0], 0x3f800000 */ W32((u32)(0xa489c0u), 0x3f800000u);
    /* 004d4706: mov dword ptr [0xa489c4], 0x41000000 */ W32((u32)(0xa489c4u), 0x41000000u);
    /* 004d4710: mov dword ptr [0xa489c8], 0x3fc00000 */ W32((u32)(0xa489c8u), 0x3fc00000u);
    /* 004d471a: ret  */ FN_RET(0x004d46fc); r_esp += 4; return;
}

void f_004d471c(void) /* sub_4D471C */
{
    FN_ENTER(0x004d471c);
    /* 004d471c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d471f: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 004d4725: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 004d472b: mov edx, dword ptr [0xaf0350] */ r_edx = R32((u32)(0xaf0350u));
    /* 004d4731: mov ecx, dword ptr [0xaf0354] */ r_ecx = R32((u32)(0xaf0354u));
    /* 004d4737: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d4739: fstp dword ptr [0xa48848] */ W_F32((u32)(0xa48848u), ST(0)); FPOP();
    /* 004d473f: fstp dword ptr [0xa4884c] */ W_F32((u32)(0xa4884cu), ST(0)); FPOP();
    /* 004d4745: mov dword ptr [0xa48838], 0 */ W32((u32)(0xa48838u), 0x0u);
    /* 004d474f: mov dword ptr [0xa48850], 0 */ W32((u32)(0xa48850u), 0x0u);
    /* 004d4759: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d475b: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d475d: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004d475f: mov dword ptr [0xa48854], 0 */ W32((u32)(0xa48854u), 0x0u);
    /* 004d4769: mov dword ptr [0xa48a44], eax */ W32((u32)(0xa48a44u), r_eax);
    /* 004d476e: mov byte ptr [0xa489f4], al */ W8((u32)(0xa489f4u), (u8)r_eax);
    /* 004d4773: mov word ptr [0xa489f6], ax */ W16((u32)(0xa489f6u), (u16)r_eax);
    /* 004d4779: mov dword ptr [0xa489f8], eax */ W32((u32)(0xa489f8u), r_eax);
    /* 004d477e: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
    /* 004d4783: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004d4786: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d4789: fstp dword ptr [0xa48828] */ W_F32((u32)(0xa48828u), ST(0)); FPOP();
    /* 004d478f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004d4793: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d4797: fstp dword ptr [0xa4882c] */ W_F32((u32)(0xa4882cu), ST(0)); FPOP();
    /* 004d479d: mov dword ptr [0xa48858], 0 */ W32((u32)(0xa48858u), 0x0u);
    /* 004d47a7: mov dword ptr [0xa4885c], 0 */ W32((u32)(0xa4885cu), 0x0u);
    /* 004d47b1: mov dword ptr [0xa48860], 0x3f800000 */ W32((u32)(0xa48860u), 0x3f800000u);
    /* 004d47bb: mov dword ptr [0xa48864], 0x3f59999a */ W32((u32)(0xa48864u), 0x3f59999au);
    /* 004d47c5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d47cau); f_0061cdb0();
    /* 004d47ca: mov dword ptr [0xa489cc], 0 */ W32((u32)(0xa489ccu), 0x0u);
    /* 004d47d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d47d6: mov dword ptr [0xa489d8], eax */ W32((u32)(0xa489d8u), r_eax);
    /* 004d47db: mov dword ptr [0xa489d0], 0x3f800000 */ W32((u32)(0xa489d0u), 0x3f800000u);
    /* 004d47e5: mov word ptr [0xa48a34], ax */ W16((u32)(0xa48a34u), (u16)r_eax);
    /* 004d47eb: mov dword ptr [0xa489d4], 0 */ W32((u32)(0xa489d4u), 0x0u);
    /* 004d47f5: mov byte ptr [0xa48a40], 0xff */ W8((u32)(0xa48a40u), 0xffu);
    /* 004d47fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d47ff: ret  */ FN_RET(0x004d471c); r_esp += 4; return;
}

void f_004d4800(void) /* sub_4D4800 */
{
    FN_ENTER(0x004d4800);
    /* 004d4800: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d4803: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 004d4809: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 004d480f: mov ecx, dword ptr [0xaf0350] */ r_ecx = R32((u32)(0xaf0350u));
    /* 004d4815: mov eax, dword ptr [0xaf0354] */ r_eax = R32((u32)(0xaf0354u));
    /* 004d481a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d481c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d4820: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004d4824: mov dword ptr [esp + 0x1c], 0x437a0000 */ W32((u32)(r_esp+0x1cu), 0x437a0000u);
    /* 004d482c: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 004d4834: mov word ptr [0x9acb68], cx */ W16((u32)(0x9acb68u), (u16)r_ecx);
    /* 004d483b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d483d: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 004d4845: mov word ptr [0xa48a38], dx */ W16((u32)(0xa48a38u), (u16)r_edx);
    /* 004d484c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004d484e: mov word ptr [0xa48a4c], dx */ W16((u32)(0xa48a4cu), (u16)r_edx);
    /* 004d4855: mov word ptr [0xa48a48], dx */ W16((u32)(0xa48a48u), (u16)r_edx);
    /* 004d485c: mov word ptr [0x9acb6c], ax */ W16((u32)(0x9acb6cu), (u16)r_eax);
    /* 004d4862: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 004d4866: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 004d486a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d486e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d4870: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004d4874: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004d4878: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d487c: mov dword ptr [esp + 0x3c], 0x41a00000 */ W32((u32)(r_esp+0x3cu), 0x41a00000u);
    /* 004d4884: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004d4888: mov dword ptr [esp + 0x40], 0x41700000 */ W32((u32)(r_esp+0x40u), 0x41700000u);
    /* 004d4890: mov dword ptr [esp + 0x44], 0x3f800000 */ W32((u32)(r_esp+0x44u), 0x3f800000u);
    /* 004d4898: mov dword ptr [esp + 0x48], 0x3f59999a */ W32((u32)(r_esp+0x48u), 0x3f59999au);
    /* 004d48a0: call 0x4d4374 */ r_esp -= 4; W32(r_esp, 0x4d48a5u); f_004d4374();
    /* 004d48a5: push 0xa48820 */ { u32 v = 0xa48820u; r_esp -= 4; W32(r_esp, v); }
    /* 004d48aa: call 0x83a5f0 */ r_esp -= 4; W32(r_esp, 0x4d48afu); f_0083a5f0();
    /* 004d48af: mov dword ptr [0xa48a5c], 0x3f800000 */ W32((u32)(0xa48a5cu), 0x3f800000u);
    /* 004d48b9: mov dword ptr [0xa48a58], 0x3f59999a */ W32((u32)(0xa48a58u), 0x3f59999au);
    /* 004d48c3: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d48c6: ret  */ FN_RET(0x004d4800); r_esp += 4; return;
}

void f_004d48c8(void) /* sub_4D48C8 */
{
    FN_ENTER(0x004d48c8);
    /* 004d48c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d48c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d48cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d48cd: call 0x4d48ec */ r_esp -= 4; W32(r_esp, 0x4d48d2u); f_004d48ec();
    /* 004d48d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d48d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d48d8: jne 0x4d48de */ if (!fZ) goto L_004d48de;
L_004d48da:; BB(0x004d48da);
    /* 004d48da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d48db: ret 4 */ FN_RET(0x004d48c8); r_esp += 8; return;
L_004d48de:; BB(0x004d48de);
    /* 004d48de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d48df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d48e4u); f_005c2f74();
    /* 004d48e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d48e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d48e6: ret 4 */ FN_RET(0x004d48c8); r_esp += 8; return;
}

void f_004d48ec(void) /* sub_4D48EC */
{
    FN_ENTER(0x004d48ec);
    /* 004d48ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d48ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004d48ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d48f1: push 0x8d1dc0 */ { u32 v = 0x8d1dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d48f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d48fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d48fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d4904: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d4907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d490a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d490d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d4910: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d4913: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d4916: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d4919: mov dword ptr [ecx], 0xafc620 */ W32((u32)(r_ecx), 0xafc620u);
    /* 004d491f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d4926: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x4d492bu); f_004f7078();
    /* 004d492b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d492e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d4935: mov esp, ebp */ r_esp = r_ebp;
    /* 004d4937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d4938: ret  */ FN_RET(0x004d48ec); r_esp += 4; return;
}

void f_004d493c(void) /* sub_4D493C */
{
    FN_ENTER(0x004d493c);
    /* 004d493c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d493d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d493f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4941: push 0x8d1e02 */ { u32 v = 0x8d1e02u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d494c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d494d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d4954: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d4957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d495a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004d495d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004d4960: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004d4963: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004d4966: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004d4968:; BB(0x004d4968);
    /* 004d4968: mov ebx, dword ptr [0xa48a6c] */ r_ebx = R32((u32)(0xa48a6cu));
    /* 004d496e: mov edi, dword ptr [0xa48a74] */ r_edi = R32((u32)(0xa48a74u));
    /* 004d4974: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d4977: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004d497a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d497c: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004d497f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4981: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4983: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4985: mov esi, dword ptr [ecx + edi + 4] */ r_esi = R32((u32)(r_ecx+r_edi+0x4u));
    /* 004d4989: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d498c: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4992: mov dword ptr [ebx + eax*8], esi */ W32((u32)(r_ebx+r_eax*8), r_esi);
    /* 004d4995: mov esi, dword ptr [ecx + edi + 8] */ r_esi = R32((u32)(r_ecx+r_edi+0x8u));
    /* 004d4999: mov dword ptr [ebx + eax*8 + 4], esi */ W32((u32)(r_ebx+r_eax*8+0x4u), r_esi);
    /* 004d499d: mov esi, dword ptr [ecx + edi + 0xc] */ r_esi = R32((u32)(r_ecx+r_edi+0xcu));
    /* 004d49a1: mov dword ptr [ebx + eax*8 + 8], esi */ W32((u32)(r_ebx+r_eax*8+0x8u), r_esi);
    /* 004d49a5: mov esi, dword ptr [0xa48a70] */ r_esi = R32((u32)(0xa48a70u));
    /* 004d49ab: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d49b1: mov edi, dword ptr [ecx + ebx + 0x10] */ r_edi = R32((u32)(r_ecx+r_ebx+0x10u));
    /* 004d49b5: mov dword ptr [esi + eax*8], edi */ W32((u32)(r_esi+r_eax*8), r_edi);
    /* 004d49b8: mov edi, dword ptr [ecx + ebx + 0x14] */ r_edi = R32((u32)(r_ecx+r_ebx+0x14u));
    /* 004d49bc: mov dword ptr [esi + eax*8 + 4], edi */ W32((u32)(r_esi+r_eax*8+0x4u), r_edi);
    /* 004d49c0: mov ecx, dword ptr [ecx + ebx + 0x18] */ r_ecx = R32((u32)(r_ecx+r_ebx+0x18u));
    /* 004d49c4: mov dword ptr [esi + eax*8 + 8], ecx */ W32((u32)(r_esi+r_eax*8+0x8u), r_ecx);
    /* 004d49c8: jl 0x4d4968 */ if ((fS!=fO)) goto L_004d4968;
L_004d49ca:; BB(0x004d49ca);
    /* 004d49ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d49cd: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004d49d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d49d2: je 0x4d4a1f */ if (fZ) goto L_004d4a1f;
L_004d49d4:; BB(0x004d49d4);
    /* 004d49d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d49d6: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 004d49d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d49db: jle 0x4d4d29 */ if ((fZ||fS!=fO)) goto L_004d4d29;
L_004d49e1:; BB(0x004d49e1);
    /* 004d49e1: mov eax, dword ptr [0xa48a6c] */ r_eax = R32((u32)(0xa48a6cu));
L_004d49e6:; BB(0x004d49e6);
    /* 004d49e6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004d49e9: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004d49ec: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d49ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d49f0: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 004d49f3: lea eax, [eax + edx + 0x10] */ r_eax = (u32)(r_eax+r_edx+0x10u);
    /* 004d49f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d49f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d49f9: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d49feu); f_00836208();
    /* 004d49fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4a01: mov eax, dword ptr [0xa48a6c] */ r_eax = R32((u32)(0xa48a6cu));
    /* 004d4a06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4a09: fstp dword ptr [eax + ebx*8 + 0xc] */ W_F32((u32)(r_eax+r_ebx*8+0xcu), ST(0)); FPOP();
    /* 004d4a0d: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 004d4a10: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4a13: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 004d4a16: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4a18: jl 0x4d49e6 */ if ((fS!=fO)) goto L_004d49e6;
L_004d4a1a:; BB(0x004d4a1a);
    /* 004d4a1a: jmp 0x4d4d2e */ goto L_004d4d2e;
L_004d4a1f:; BB(0x004d4a1f);
    /* 004d4a1f: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4a25: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4a2a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4a2fu); f_007c1160();
    /* 004d4a2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4a31: je 0x4d4a53 */ if (fZ) goto L_004d4a53;
L_004d4a33:; BB(0x004d4a33);
    /* 004d4a33: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4a39: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4a3e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4a43u); f_007c1100();
    /* 004d4a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4a45: je 0x4d4a53 */ if (fZ) goto L_004d4a53;
L_004d4a47:; BB(0x004d4a47);
    /* 004d4a47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4a4a: add dword ptr [ecx + 0x44], 1 */ { u32 ad = (u32)(r_ecx+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d4a4e: call 0x4d5150 */ r_esp -= 4; W32(r_esp, 0x4d4a53u); f_004d5150();
L_004d4a53:; BB(0x004d4a53);
    /* 004d4a53: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4a59: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4a5e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4a63u); f_007c1160();
    /* 004d4a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4a65: je 0x4d4a87 */ if (fZ) goto L_004d4a87;
L_004d4a67:; BB(0x004d4a67);
    /* 004d4a67: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4a6d: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4a72: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4a77u); f_007c1100();
    /* 004d4a77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4a79: je 0x4d4a87 */ if (fZ) goto L_004d4a87;
L_004d4a7b:; BB(0x004d4a7b);
    /* 004d4a7b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4a7e: add dword ptr [ecx + 0x44], -1 */ { u32 ad = (u32)(r_ecx+0x44u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d4a82: call 0x4d5150 */ r_esp -= 4; W32(r_esp, 0x4d4a87u); f_004d5150();
L_004d4a87:; BB(0x004d4a87);
    /* 004d4a87: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4a8d: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4a92: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4a97u); f_007c1160();
    /* 004d4a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4a99: je 0x4d4abb */ if (fZ) goto L_004d4abb;
L_004d4a9b:; BB(0x004d4a9b);
    /* 004d4a9b: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4aa1: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4aa6: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4aabu); f_007c1100();
    /* 004d4aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4aad: je 0x4d4abb */ if (fZ) goto L_004d4abb;
L_004d4aaf:; BB(0x004d4aaf);
    /* 004d4aaf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4ab2: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004d4ab5: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d4ab8: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
L_004d4abb:; BB(0x004d4abb);
    /* 004d4abb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4abe: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004d4ac1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d4ac3: jle 0x4d4b8d */ if ((fZ||fS!=fO)) goto L_004d4b8d;
L_004d4ac9:; BB(0x004d4ac9);
    /* 004d4ac9: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4acf: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4ad4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4ad9u); f_007c1160();
    /* 004d4ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4adb: je 0x4d4b2c */ if (fZ) goto L_004d4b2c;
L_004d4add:; BB(0x004d4add);
    /* 004d4add: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4ae3: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4ae8: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4aedu); f_007c1100();
    /* 004d4aed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4aef: je 0x4d4b2c */ if (fZ) goto L_004d4b2c;
L_004d4af1:; BB(0x004d4af1);
    /* 004d4af1: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4af7: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4afc: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4b01u); f_007c1100();
    /* 004d4b01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b03: je 0x4d4b2c */ if (fZ) goto L_004d4b2c;
L_004d4b05:; BB(0x004d4b05);
    /* 004d4b05: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4b08: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d4b0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b0d: je 0x4d4dcf */ if (fZ) goto L_004d4dcf;
L_004d4b13:; BB(0x004d4b13);
    /* 004d4b13: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004d4b17: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d4b1c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004d4b20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4b23: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 004d4b2a: jmp 0x4d4b8d */ goto L_004d4b8d;
L_004d4b2c:; BB(0x004d4b2c);
    /* 004d4b2c: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4b32: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4b37: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4b3cu); f_007c1160();
    /* 004d4b3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b3e: je 0x4d4b8d */ if (fZ) goto L_004d4b8d;
L_004d4b40:; BB(0x004d4b40);
    /* 004d4b40: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4b46: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4b4b: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4b50u); f_007c1100();
    /* 004d4b50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b52: je 0x4d4b8d */ if (fZ) goto L_004d4b8d;
L_004d4b54:; BB(0x004d4b54);
    /* 004d4b54: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4b5a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4b5f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4b64u); f_007c1100();
    /* 004d4b64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b66: je 0x4d4b8d */ if (fZ) goto L_004d4b8d;
L_004d4b68:; BB(0x004d4b68);
    /* 004d4b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4b6b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d4b6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b70: je 0x4d4e4a */ if (fZ) goto L_004d4e4a;
L_004d4b76:; BB(0x004d4b76);
    /* 004d4b76: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004d4b7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d4b7f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004d4b83: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4b86: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_004d4b8d:; BB(0x004d4b8d);
    /* 004d4b8d: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4b93: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4b98: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4b9du); f_007c1160();
    /* 004d4b9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4b9f: je 0x4d4bc4 */ if (fZ) goto L_004d4bc4;
L_004d4ba1:; BB(0x004d4ba1);
    /* 004d4ba1: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4ba7: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4bac: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4bb1u); f_007c1100();
    /* 004d4bb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4bb3: je 0x4d4bc4 */ if (fZ) goto L_004d4bc4;
L_004d4bb5:; BB(0x004d4bb5);
    /* 004d4bb5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4bb8: call 0x4d5248 */ r_esp -= 4; W32(r_esp, 0x4d4bbdu); f_004d5248();
    /* 004d4bbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4bc0: add dword ptr [eax + 0x44], 1 */ { u32 ad = (u32)(r_eax+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004d4bc4:; BB(0x004d4bc4);
    /* 004d4bc4: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4bca: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4bcf: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4bd4u); f_007c1160();
    /* 004d4bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4bd6: jne 0x4d4be9 */ if (!fZ) goto L_004d4be9;
L_004d4bd8:; BB(0x004d4bd8);
    /* 004d4bd8: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d4bde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4be1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004d4be4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004d4be7: jmp 0x4d4c0c */ goto L_004d4c0c;
L_004d4be9:; BB(0x004d4be9);
    /* 004d4be9: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4bef: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4bf4: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4bf9u); f_007c1100();
    /* 004d4bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4bfb: jne 0x4d4c59 */ if (!fZ) goto L_004d4c59;
L_004d4bfd:; BB(0x004d4bfd);
    /* 004d4bfd: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d4c03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4c06: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004d4c09: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_004d4c0c:; BB(0x004d4c0c);
    /* 004d4c0c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4c0f: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 004d4c16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c18: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004d4c1a:; BB(0x004d4c1a);
    /* 004d4c1a: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004d4c1d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4c1f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004d4c22: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4c24: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4c26: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d4c28: mov edi, dword ptr [eax + ebx] */ r_edi = R32((u32)(r_eax+r_ebx));
    /* 004d4c2b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4c2d: je 0x4d4c38 */ if (fZ) goto L_004d4c38;
L_004d4c2f:; BB(0x004d4c2f);
    /* 004d4c2f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4c32: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c35: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
L_004d4c38:; BB(0x004d4c38);
    /* 004d4c38: mov eax, dword ptr [eax + ebx + 0x1c] */ r_eax = R32((u32)(r_eax+r_ebx+0x1cu));
    /* 004d4c3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4c3e: je 0x4d4c49 */ if (fZ) goto L_004d4c49;
L_004d4c40:; BB(0x004d4c40);
    /* 004d4c40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4c43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c46: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
L_004d4c49:; BB(0x004d4c49);
    /* 004d4c49: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4c4c: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4c52: jl 0x4d4c1a */ if ((fS!=fO)) goto L_004d4c1a;
L_004d4c54:; BB(0x004d4c54);
    /* 004d4c54: jmp 0x4d4ec7 */ goto L_004d4ec7;
L_004d4c59:; BB(0x004d4c59);
    /* 004d4c59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4c5c: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d4c62: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004d4c65: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d4c67: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c69: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c6b: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 004d4c6e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d4c70: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d4c72: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004d4c74: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004d4c76: mov dword ptr [ebx + esi], 0 */ W32((u32)(r_ebx+r_esi), 0x0u);
    /* 004d4c7d: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
L_004d4c83:; BB(0x004d4c83);
    /* 004d4c83: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004d4c86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4c88: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004d4c8b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c8f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4c91: mov esi, dword ptr [ecx + ebx] */ r_esi = R32((u32)(r_ecx+r_ebx));
    /* 004d4c94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4c96: je 0x4d5147 */ if (fZ) goto L_004d5147;
L_004d4c9c:; BB(0x004d4c9c);
    /* 004d4c9c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d4c9f: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4ca5: jl 0x4d4c83 */ if ((fS!=fO)) goto L_004d4c83;
L_004d4ca7:; BB(0x004d4ca7);
    /* 004d4ca7: cmp edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4caa: jge 0x4d4d15 */ if ((fS==fO)) goto L_004d4d15;
L_004d4cac:; BB(0x004d4cac);
    /* 004d4cac: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004d4caf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4cb1: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d4cb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4cb6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4cb8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d4cba: mov esi, dword ptr [eax + ebx + 0x1c] */ r_esi = R32((u32)(r_eax+r_ebx+0x1cu));
    /* 004d4cbe: mov edi, dword ptr [eax + ebx + 0x20] */ r_edi = R32((u32)(r_eax+r_ebx+0x20u));
    /* 004d4cc2: mov ecx, dword ptr [eax + ebx + 0x24] */ r_ecx = R32((u32)(r_eax+r_ebx+0x24u));
    /* 004d4cc6: mov dword ptr [eax + ebx], esi */ W32((u32)(r_eax+r_ebx), r_esi);
    /* 004d4cc9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4ccc: mov dword ptr [eax + ebx + 4], edi */ W32((u32)(r_eax+r_ebx+0x4u), r_edi);
    /* 004d4cd0: mov dword ptr [eax + ebx + 8], ecx */ W32((u32)(r_eax+r_ebx+0x8u), r_ecx);
    /* 004d4cd4: mov ecx, dword ptr [eax + ebx + 0x28] */ r_ecx = R32((u32)(r_eax+r_ebx+0x28u));
    /* 004d4cd8: cmp edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4cdb: mov dword ptr [eax + ebx + 0xc], ecx */ W32((u32)(r_eax+r_ebx+0xcu), r_ecx);
    /* 004d4cdf: mov ecx, dword ptr [eax + ebx + 0x2c] */ r_ecx = R32((u32)(r_eax+r_ebx+0x2cu));
    /* 004d4ce3: mov dword ptr [eax + ebx + 0x10], ecx */ W32((u32)(r_eax+r_ebx+0x10u), r_ecx);
    /* 004d4ce7: mov ecx, dword ptr [eax + ebx + 0x30] */ r_ecx = R32((u32)(r_eax+r_ebx+0x30u));
    /* 004d4ceb: mov dword ptr [eax + ebx + 0x14], ecx */ W32((u32)(r_eax+r_ebx+0x14u), r_ecx);
    /* 004d4cef: mov ecx, dword ptr [eax + ebx + 0x34] */ r_ecx = R32((u32)(r_eax+r_ebx+0x34u));
    /* 004d4cf3: mov dword ptr [eax + ebx + 0x18], ecx */ W32((u32)(r_eax+r_ebx+0x18u), r_ecx);
    /* 004d4cf7: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d4cfd: mov dword ptr [eax + ebx + 0x1c], 0 */ W32((u32)(r_eax+r_ebx+0x1cu), 0x0u);
    /* 004d4d05: jge 0x4d4d0f */ if ((fS==fO)) goto L_004d4d0f;
L_004d4d07:; BB(0x004d4d07);
    /* 004d4d07: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d4d0d: jmp 0x4d4cac */ goto L_004d4cac;
L_004d4d0f:; BB(0x004d4d0f);
    /* 004d4d0f: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
L_004d4d15:; BB(0x004d4d15);
    /* 004d4d15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4d18: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004d4d1b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4d1e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d4d21: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004d4d24: jmp 0x4d4c0c */ goto L_004d4c0c;
L_004d4d29:; BB(0x004d4d29);
    /* 004d4d29: mov eax, dword ptr [0xa48a6c] */ r_eax = R32((u32)(0xa48a6cu));
L_004d4d2e:; BB(0x004d4d2e);
    /* 004d4d2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4d2f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d31: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d33: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d35: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d37: lea edx, [eax + edx - 0x10] */ r_edx = (u32)(r_eax+r_edx+0xfffffff0u);
    /* 004d4d3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4d3c: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d4d41u); f_00836208();
    /* 004d4d41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4d44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4d47: mov esi, dword ptr [0xa48a6c] */ r_esi = R32((u32)(0xa48a6cu));
    /* 004d4d4d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004d4d50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4d52: fstp dword ptr [esi + eax*8 - 4] */ W_F32((u32)(r_esi+r_eax*8+0xfffffffcu), ST(0)); FPOP();
    /* 004d4d56: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 004d4d59: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d4d5b: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 004d4d5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d4d60: jle 0x4d4dc8 */ if ((fZ||fS!=fO)) goto L_004d4dc8;
L_004d4d62:; BB(0x004d4d62);
    /* 004d4d62: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
L_004d4d67:; BB(0x004d4d67);
    /* 004d4d67: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004d4d6a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004d4d6d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d6f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d71: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 004d4d74: lea eax, [eax + edx + 0x10] */ r_eax = (u32)(r_eax+r_edx+0x10u);
    /* 004d4d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4d79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4d7a: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d4d7fu); f_00836208();
    /* 004d4d7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4d82: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d4d87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4d8a: fstp dword ptr [eax + ebx*8 + 0xc] */ W_F32((u32)(r_eax+r_ebx*8+0xcu), ST(0)); FPOP();
    /* 004d4d8e: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 004d4d91: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4d94: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 004d4d97: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4d99: jl 0x4d4d67 */ if ((fS!=fO)) goto L_004d4d67;
L_004d4d9b:; BB(0x004d4d9b);
    /* 004d4d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4d9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4d9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4da0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4da2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d4da4: lea edx, [eax + edx - 0x10] */ r_edx = (u32)(r_eax+r_edx+0xfffffff0u);
    /* 004d4da8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4da9: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d4daeu); f_00836208();
    /* 004d4dae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4db1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4db4: mov edx, dword ptr [0xa48a70] */ r_edx = R32((u32)(0xa48a70u));
    /* 004d4dba: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004d4dbd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d4dbf: fstp dword ptr [edx + ecx*8 - 4] */ W_F32((u32)(r_edx+r_ecx*8+0xfffffffcu), ST(0)); FPOP();
    /* 004d4dc3: jmp 0x4d4a1f */ goto L_004d4a1f;
L_004d4dc8:; BB(0x004d4dc8);
    /* 004d4dc8: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d4dcd: jmp 0x4d4d9b */ goto L_004d4d9b;
L_004d4dcf:; BB(0x004d4dcf);
    /* 004d4dcf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004d4dd6: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4dd8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d4dddu); f_005caba4();
    /* 004d4ddd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d4de0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4de3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004d4de6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4de8: je 0x4d4e43 */ if (fZ) goto L_004d4e43;
L_004d4dea:; BB(0x004d4dea);
    /* 004d4dea: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004d4df1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004d4df8: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4dfe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4e01: movsx eax, word ptr [edx + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3cu));
    /* 004d4e05: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d4e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e09: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e0e: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e13: push dword ptr [edx + 0x48] */ { u32 v = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e16: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e1c: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e22: call 0x4d5d5c */ r_esp -= 4; W32(r_esp, 0x4d4e27u); f_004d5d5c();
    /* 004d4e27: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004d4e2e:; BB(0x004d4e2e);
    /* 004d4e2e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d4e31: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4e34: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004d4e37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d4e3e: jmp 0x4d4b8d */ goto L_004d4b8d;
L_004d4e43:; BB(0x004d4e43);
    /* 004d4e43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d4e45: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d4e48: jmp 0x4d4e2e */ goto L_004d4e2e;
L_004d4e4a:; BB(0x004d4e4a);
    /* 004d4e4a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004d4e51: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e53: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d4e58u); f_005caba4();
    /* 004d4e58: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d4e5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4e5e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004d4e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4e63: je 0x4d4ec0 */ if (fZ) goto L_004d4ec0;
L_004d4e65:; BB(0x004d4e65);
    /* 004d4e65: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004d4e6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d4e73: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e79: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 004d4e80: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4e83: mov ecx, eax */ r_ecx = r_eax;
    /* 004d4e85: movsx eax, word ptr [ebx + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3cu));
    /* 004d4e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e8b: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4e90: push dword ptr [ebx + 0x48] */ { u32 v = R32((u32)(r_ebx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e93: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e99: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4e9f: call 0x4d5d5c */ r_esp -= 4; W32(r_esp, 0x4d4ea4u); f_004d5d5c();
    /* 004d4ea4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004d4eab:; BB(0x004d4eab);
    /* 004d4eab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d4eae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4eb1: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004d4eb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d4ebb: jmp 0x4d4b8d */ goto L_004d4b8d;
L_004d4ec0:; BB(0x004d4ec0);
    /* 004d4ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d4ec2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d4ec5: jmp 0x4d4eab */ goto L_004d4eab;
L_004d4ec7:; BB(0x004d4ec7);
    /* 004d4ec7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d4eca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d4ecc: jl 0x4d513d */ if ((fS!=fO)) goto L_004d513d;
L_004d4ed2:; BB(0x004d4ed2);
    /* 004d4ed2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4ed4: jl 0x4d4ed8 */ if ((fS!=fO)) goto L_004d4ed8;
L_004d4ed6:; BB(0x004d4ed6);
    /* 004d4ed6: mov eax, ecx */ r_eax = r_ecx;
L_004d4ed8:; BB(0x004d4ed8);
    /* 004d4ed8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004d4edb:; BB(0x004d4edb);
    /* 004d4edb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4ede: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004d4ee1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004d4ee3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d4ee5: jle 0x4d4f54 */ if ((fZ||fS!=fO)) goto L_004d4f54;
L_004d4ee7:; BB(0x004d4ee7);
    /* 004d4ee7: mov esi, dword ptr [0xa9c4ec] */ r_esi = R32((u32)(0xa9c4ecu));
    /* 004d4eed: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004d4ef2: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004d4ef4: mov edi, esi */ r_edi = r_esi;
    /* 004d4ef6: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004d4ef9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d4efb: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d4efd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d4f00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f02: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f04: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f06: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f08: jne 0x4d4f4d */ if (!fZ) goto L_004d4f4d;
L_004d4f0a:; BB(0x004d4f0a);
    /* 004d4f0a: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d4f10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f11: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f13: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004d4f16: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f1a: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004d4f1d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f1f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f21: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f23: lea ecx, [edx + esi + 4] */ r_ecx = (u32)(r_edx+r_esi+0x4u);
    /* 004d4f27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f28: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x4d4f2du); f_0078a5e8();
    /* 004d4f2d: mov eax, dword ptr [0xa48a74] */ r_eax = R32((u32)(0xa48a74u));
    /* 004d4f32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f33: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f35: lea edx, [eax + esi + 0x10] */ r_edx = (u32)(r_eax+r_esi+0x10u);
    /* 004d4f39: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f3f: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x4d4f44u); f_0078a5e8();
    /* 004d4f44: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4f47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4f4a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
L_004d4f4d:; BB(0x004d4f4d);
    /* 004d4f4d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d4f50: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4f52: jl 0x4d4ee7 */ if ((fS!=fO)) goto L_004d4ee7;
L_004d4f54:; BB(0x004d4f54);
    /* 004d4f54: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f5a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4f5f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4f64u); f_007c1160();
    /* 004d4f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f66: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f68:; BB(0x004d4f68);
    /* 004d4f68: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f6e: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4f73: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4f78u); f_007c1100();
    /* 004d4f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f7a: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f7c:; BB(0x004d4f7c);
    /* 004d4f7c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4f7f: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004d4f82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f84: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f86:; BB(0x004d4f86);
    /* 004d4f86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f88: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f8f: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f95: push 0x9091b0 */ { u32 v = 0x9091b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f9a: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4d4f9fu); f_005b9f68();
    /* 004d4f9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d4fa2:; BB(0x004d4fa2);
    /* 004d4fa2: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fa8: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4fad: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4fb2u); f_007c1160();
    /* 004d4fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fb4: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fb6:; BB(0x004d4fb6);
    /* 004d4fb6: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fbc: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4fc1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4fc6u); f_007c1100();
    /* 004d4fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fc8: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fca:; BB(0x004d4fca);
    /* 004d4fca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4fcd: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004d4fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fd2: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fd4:; BB(0x004d4fd4);
    /* 004d4fd4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fd6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fd8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4fdd: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fe3: push 0x9091c0 */ { u32 v = 0x9091c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4fe8: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4d4fedu); f_005b9f68();
    /* 004d4fed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d4ff0:; BB(0x004d4ff0);
    /* 004d4ff0: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4ff6: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4ffb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d5000u); f_007c1160();
    /* 004d5000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5002: je 0x4d501c */ if (fZ) goto L_004d501c;
L_004d5004:; BB(0x004d5004);
    /* 004d5004: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d500a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d500f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d5014u); f_007c1100();
    /* 004d5014: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5016: jne 0x4d50cc */ if (!fZ) goto L_004d50cc;
L_004d501c:; BB(0x004d501c);
    /* 004d501c: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5022: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d5027: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d502cu); f_007c1160();
    /* 004d502c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d502e: je 0x4d5044 */ if (fZ) goto L_004d5044;
L_004d5030:; BB(0x004d5030);
    /* 004d5030: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5036: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d503b: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d5040u); f_007c1100();
    /* 004d5040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5042: jne 0x4d505b */ if (!fZ) goto L_004d505b;
L_004d5044:; BB(0x004d5044);
    /* 004d5044: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d5047: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d504a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d504d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5050: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5057: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d505a: ret  */ FN_RET(0x004d493c); r_esp += 4; return;
L_004d505b:; BB(0x004d505b);
    /* 004d505b: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5061: push 0x9091b0 */ { u32 v = 0x9091b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5066: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4d506bu); f_005b9ec4();
    /* 004d506b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d506e: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d5074: mov esi, dword ptr [0xa48a70] */ r_esi = R32((u32)(0xa48a70u));
    /* 004d507a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004d507c:; BB(0x004d507c);
    /* 004d507c: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 004d507f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5081: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004d5084: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5088: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d508a: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d508d: mov edi, dword ptr [esi + eax*8] */ r_edi = R32((u32)(r_esi+r_eax*8));
    /* 004d5090: mov dword ptr [edx + ebx + 4], edi */ W32((u32)(r_edx+r_ebx+0x4u), r_edi);
    /* 004d5094: mov edi, dword ptr [esi + eax*8 + 4] */ r_edi = R32((u32)(r_esi+r_eax*8+0x4u));
    /* 004d5098: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d509b: mov dword ptr [edx + ebx + 8], edi */ W32((u32)(r_edx+r_ebx+0x8u), r_edi);
    /* 004d509f: mov edi, dword ptr [esi + eax*8 + 8] */ r_edi = R32((u32)(r_esi+r_eax*8+0x8u));
    /* 004d50a3: mov dword ptr [edx + ebx + 0xc], edi */ W32((u32)(r_edx+r_ebx+0xcu), r_edi);
    /* 004d50a7: mov edi, dword ptr [esi + eax*8 + 0x10] */ r_edi = R32((u32)(r_esi+r_eax*8+0x10u));
    /* 004d50ab: mov dword ptr [edx + ebx + 0x20], edi */ W32((u32)(r_edx+r_ebx+0x20u), r_edi);
    /* 004d50af: mov edi, dword ptr [esi + eax*8 + 0x14] */ r_edi = R32((u32)(r_esi+r_eax*8+0x14u));
    /* 004d50b3: mov dword ptr [edx + ebx + 0x24], edi */ W32((u32)(r_edx+r_ebx+0x24u), r_edi);
    /* 004d50b7: mov eax, dword ptr [esi + eax*8 + 0x18] */ r_eax = R32((u32)(r_esi+r_eax*8+0x18u));
    /* 004d50bb: mov dword ptr [edx + ebx + 0x28], eax */ W32((u32)(r_edx+r_ebx+0x28u), r_eax);
    /* 004d50bf: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d50c5: jl 0x4d507c */ if ((fS!=fO)) goto L_004d507c;
L_004d50c7:; BB(0x004d50c7);
    /* 004d50c7: jmp 0x4d5044 */ goto L_004d5044;
L_004d50cc:; BB(0x004d50cc);
    /* 004d50cc: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d50d2: push 0x9091c0 */ { u32 v = 0x9091c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d50d7: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4d50dcu); f_005b9ec4();
    /* 004d50dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d50df: mov ebx, dword ptr [0xa48a6c] */ r_ebx = R32((u32)(0xa48a6cu));
    /* 004d50e5: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d50eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004d50ed:; BB(0x004d50ed);
    /* 004d50ed: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 004d50f0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d50f2: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004d50f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d50f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d50f9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d50fb: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d50fe: mov edi, dword ptr [ebx + eax*8] */ r_edi = R32((u32)(r_ebx+r_eax*8));
    /* 004d5101: mov dword ptr [edx + esi + 4], edi */ W32((u32)(r_edx+r_esi+0x4u), r_edi);
    /* 004d5105: mov edi, dword ptr [ebx + eax*8 + 4] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 004d5109: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d510c: mov dword ptr [edx + esi + 8], edi */ W32((u32)(r_edx+r_esi+0x8u), r_edi);
    /* 004d5110: mov edi, dword ptr [ebx + eax*8 + 8] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x8u));
    /* 004d5114: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 004d5118: mov edi, dword ptr [ebx + eax*8 + 0x10] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 004d511c: mov dword ptr [edx + esi + 0x20], edi */ W32((u32)(r_edx+r_esi+0x20u), r_edi);
    /* 004d5120: mov edi, dword ptr [ebx + eax*8 + 0x14] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x14u));
    /* 004d5124: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 004d5128: mov eax, dword ptr [ebx + eax*8 + 0x18] */ r_eax = R32((u32)(r_ebx+r_eax*8+0x18u));
    /* 004d512c: mov dword ptr [edx + esi + 0x28], eax */ W32((u32)(r_edx+r_esi+0x28u), r_eax);
    /* 004d5130: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5136: jl 0x4d50ed */ if ((fS!=fO)) goto L_004d50ed;
L_004d5138:; BB(0x004d5138);
    /* 004d5138: jmp 0x4d501c */ goto L_004d501c;
L_004d513d:; BB(0x004d513d);
    /* 004d513d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d513f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d5142: jmp 0x4d4edb */ goto L_004d4edb;
L_004d5147:; BB(0x004d5147);
    /* 004d5147: mov edx, edi */ r_edx = r_edi;
    /* 004d5149: jmp 0x4d4ca7 */ goto L_004d4ca7;
}

void f_004d4f44(void)
{
    FN_ENTER(0x004d4f44);
    goto L_004d4f44;
L_004d4ee7:; BB(0x004d4ee7);
    /* 004d4ee7: mov esi, dword ptr [0xa9c4ec] */ r_esi = R32((u32)(0xa9c4ecu));
    /* 004d4eed: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004d4ef2: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004d4ef4: mov edi, esi */ r_edi = r_esi;
    /* 004d4ef6: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004d4ef9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d4efb: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d4efd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d4f00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f02: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f04: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f06: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f08: jne 0x4d4f4d */ if (!fZ) goto L_004d4f4d;
L_004d4f0a:; BB(0x004d4f0a);
    /* 004d4f0a: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d4f10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f11: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f13: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004d4f16: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f1a: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004d4f1d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f1f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f21: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004d4f23: lea ecx, [edx + esi + 4] */ r_ecx = (u32)(r_edx+r_esi+0x4u);
    /* 004d4f27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f28: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x4d4f2du); f_0078a5e8();
    /* 004d4f2d: mov eax, dword ptr [0xa48a74] */ r_eax = R32((u32)(0xa48a74u));
    /* 004d4f32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f33: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f35: lea edx, [eax + esi + 0x10] */ r_edx = (u32)(r_eax+r_esi+0x10u);
    /* 004d4f39: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f3f: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x4d4f44u); f_0078a5e8();
L_004d4f44:; BB(0x004d4f44);
    /* 004d4f44: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d4f47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4f4a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
L_004d4f4d:; BB(0x004d4f4d);
    /* 004d4f4d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d4f50: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d4f52: jl 0x4d4ee7 */ if ((fS!=fO)) goto L_004d4ee7;
L_004d4f54:; BB(0x004d4f54);
    /* 004d4f54: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f5a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4f5f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4f64u); f_007c1160();
    /* 004d4f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f66: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f68:; BB(0x004d4f68);
    /* 004d4f68: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f6e: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4f73: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4f78u); f_007c1100();
    /* 004d4f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f7a: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f7c:; BB(0x004d4f7c);
    /* 004d4f7c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4f7f: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004d4f82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f84: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f86:; BB(0x004d4f86);
    /* 004d4f86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f88: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f8f: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f95: push 0x9091b0 */ { u32 v = 0x9091b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f9a: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4d4f9fu); f_005b9f68();
    /* 004d4f9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d4fa2:; BB(0x004d4fa2);
    /* 004d4fa2: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fa8: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4fad: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4fb2u); f_007c1160();
    /* 004d4fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fb4: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fb6:; BB(0x004d4fb6);
    /* 004d4fb6: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fbc: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4fc1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4fc6u); f_007c1100();
    /* 004d4fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fc8: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fca:; BB(0x004d4fca);
    /* 004d4fca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4fcd: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004d4fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fd2: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fd4:; BB(0x004d4fd4);
    /* 004d4fd4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fd6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fd8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4fdd: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fe3: push 0x9091c0 */ { u32 v = 0x9091c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4fe8: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4d4fedu); f_005b9f68();
    /* 004d4fed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d4ff0:; BB(0x004d4ff0);
    /* 004d4ff0: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4ff6: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4ffb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d5000u); f_007c1160();
    /* 004d5000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5002: je 0x4d501c */ if (fZ) goto L_004d501c;
L_004d5004:; BB(0x004d5004);
    /* 004d5004: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d500a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d500f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d5014u); f_007c1100();
    /* 004d5014: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5016: jne 0x4d50cc */ if (!fZ) goto L_004d50cc;
L_004d501c:; BB(0x004d501c);
    /* 004d501c: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5022: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d5027: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d502cu); f_007c1160();
    /* 004d502c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d502e: je 0x4d5044 */ if (fZ) goto L_004d5044;
L_004d5030:; BB(0x004d5030);
    /* 004d5030: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5036: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d503b: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d5040u); f_007c1100();
    /* 004d5040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5042: jne 0x4d505b */ if (!fZ) goto L_004d505b;
L_004d5044:; BB(0x004d5044);
    /* 004d5044: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d5047: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d504a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d504d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5050: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5057: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d505a: ret  */ FN_RET(0x004d4f44); r_esp += 4; return;
L_004d505b:; BB(0x004d505b);
    /* 004d505b: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5061: push 0x9091b0 */ { u32 v = 0x9091b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5066: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4d506bu); f_005b9ec4();
    /* 004d506b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d506e: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d5074: mov esi, dword ptr [0xa48a70] */ r_esi = R32((u32)(0xa48a70u));
    /* 004d507a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004d507c:; BB(0x004d507c);
    /* 004d507c: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 004d507f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5081: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004d5084: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5088: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d508a: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d508d: mov edi, dword ptr [esi + eax*8] */ r_edi = R32((u32)(r_esi+r_eax*8));
    /* 004d5090: mov dword ptr [edx + ebx + 4], edi */ W32((u32)(r_edx+r_ebx+0x4u), r_edi);
    /* 004d5094: mov edi, dword ptr [esi + eax*8 + 4] */ r_edi = R32((u32)(r_esi+r_eax*8+0x4u));
    /* 004d5098: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d509b: mov dword ptr [edx + ebx + 8], edi */ W32((u32)(r_edx+r_ebx+0x8u), r_edi);
    /* 004d509f: mov edi, dword ptr [esi + eax*8 + 8] */ r_edi = R32((u32)(r_esi+r_eax*8+0x8u));
    /* 004d50a3: mov dword ptr [edx + ebx + 0xc], edi */ W32((u32)(r_edx+r_ebx+0xcu), r_edi);
    /* 004d50a7: mov edi, dword ptr [esi + eax*8 + 0x10] */ r_edi = R32((u32)(r_esi+r_eax*8+0x10u));
    /* 004d50ab: mov dword ptr [edx + ebx + 0x20], edi */ W32((u32)(r_edx+r_ebx+0x20u), r_edi);
    /* 004d50af: mov edi, dword ptr [esi + eax*8 + 0x14] */ r_edi = R32((u32)(r_esi+r_eax*8+0x14u));
    /* 004d50b3: mov dword ptr [edx + ebx + 0x24], edi */ W32((u32)(r_edx+r_ebx+0x24u), r_edi);
    /* 004d50b7: mov eax, dword ptr [esi + eax*8 + 0x18] */ r_eax = R32((u32)(r_esi+r_eax*8+0x18u));
    /* 004d50bb: mov dword ptr [edx + ebx + 0x28], eax */ W32((u32)(r_edx+r_ebx+0x28u), r_eax);
    /* 004d50bf: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d50c5: jl 0x4d507c */ if ((fS!=fO)) goto L_004d507c;
L_004d50c7:; BB(0x004d50c7);
    /* 004d50c7: jmp 0x4d5044 */ goto L_004d5044;
L_004d50cc:; BB(0x004d50cc);
    /* 004d50cc: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d50d2: push 0x9091c0 */ { u32 v = 0x9091c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d50d7: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4d50dcu); f_005b9ec4();
    /* 004d50dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d50df: mov ebx, dword ptr [0xa48a6c] */ r_ebx = R32((u32)(0xa48a6cu));
    /* 004d50e5: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d50eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004d50ed:; BB(0x004d50ed);
    /* 004d50ed: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 004d50f0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d50f2: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004d50f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d50f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d50f9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d50fb: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d50fe: mov edi, dword ptr [ebx + eax*8] */ r_edi = R32((u32)(r_ebx+r_eax*8));
    /* 004d5101: mov dword ptr [edx + esi + 4], edi */ W32((u32)(r_edx+r_esi+0x4u), r_edi);
    /* 004d5105: mov edi, dword ptr [ebx + eax*8 + 4] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 004d5109: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d510c: mov dword ptr [edx + esi + 8], edi */ W32((u32)(r_edx+r_esi+0x8u), r_edi);
    /* 004d5110: mov edi, dword ptr [ebx + eax*8 + 8] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x8u));
    /* 004d5114: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 004d5118: mov edi, dword ptr [ebx + eax*8 + 0x10] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 004d511c: mov dword ptr [edx + esi + 0x20], edi */ W32((u32)(r_edx+r_esi+0x20u), r_edi);
    /* 004d5120: mov edi, dword ptr [ebx + eax*8 + 0x14] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x14u));
    /* 004d5124: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 004d5128: mov eax, dword ptr [ebx + eax*8 + 0x18] */ r_eax = R32((u32)(r_ebx+r_eax*8+0x18u));
    /* 004d512c: mov dword ptr [edx + esi + 0x28], eax */ W32((u32)(r_edx+r_esi+0x28u), r_eax);
    /* 004d5130: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5136: jl 0x4d50ed */ if ((fS!=fO)) goto L_004d50ed;
L_004d5138:; BB(0x004d5138);
    /* 004d5138: jmp 0x4d501c */ goto L_004d501c;
}

void f_004d4f54(void)
{
    FN_ENTER(0x004d4f54);
    /* 004d4f54: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f5a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4f5f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4f64u); f_007c1160();
    /* 004d4f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f66: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f68:; BB(0x004d4f68);
    /* 004d4f68: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f6e: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4f73: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4f78u); f_007c1100();
    /* 004d4f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f7a: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f7c:; BB(0x004d4f7c);
    /* 004d4f7c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4f7f: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004d4f82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4f84: je 0x4d4fa2 */ if (fZ) goto L_004d4fa2;
L_004d4f86:; BB(0x004d4f86);
    /* 004d4f86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f88: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f8f: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4f95: push 0x9091b0 */ { u32 v = 0x9091b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4f9a: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4d4f9fu); f_005b9f68();
    /* 004d4f9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d4fa2:; BB(0x004d4fa2);
    /* 004d4fa2: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fa8: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4fad: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d4fb2u); f_007c1160();
    /* 004d4fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fb4: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fb6:; BB(0x004d4fb6);
    /* 004d4fb6: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fbc: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4fc1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d4fc6u); f_007c1100();
    /* 004d4fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fc8: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fca:; BB(0x004d4fca);
    /* 004d4fca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d4fcd: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004d4fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d4fd2: je 0x4d4ff0 */ if (fZ) goto L_004d4ff0;
L_004d4fd4:; BB(0x004d4fd4);
    /* 004d4fd4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fd6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fd8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d4fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d4fdd: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4fe3: push 0x9091c0 */ { u32 v = 0x9091c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d4fe8: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x4d4fedu); f_005b9f68();
    /* 004d4fed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d4ff0:; BB(0x004d4ff0);
    /* 004d4ff0: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d4ff6: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d4ffb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d5000u); f_007c1160();
    /* 004d5000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5002: je 0x4d501c */ if (fZ) goto L_004d501c;
L_004d5004:; BB(0x004d5004);
    /* 004d5004: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d500a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d500f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d5014u); f_007c1100();
    /* 004d5014: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5016: jne 0x4d50cc */ if (!fZ) goto L_004d50cc;
L_004d501c:; BB(0x004d501c);
    /* 004d501c: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5022: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d5027: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d502cu); f_007c1160();
    /* 004d502c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d502e: je 0x4d5044 */ if (fZ) goto L_004d5044;
L_004d5030:; BB(0x004d5030);
    /* 004d5030: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5036: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 004d503b: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d5040u); f_007c1100();
    /* 004d5040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5042: jne 0x4d505b */ if (!fZ) goto L_004d505b;
L_004d5044:; BB(0x004d5044);
    /* 004d5044: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d5047: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d504a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d504d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5050: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5057: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d505a: ret  */ FN_RET(0x004d4f54); r_esp += 4; return;
L_004d505b:; BB(0x004d505b);
    /* 004d505b: push dword ptr [0xa48a70] */ { u32 v = R32((u32)(0xa48a70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5061: push 0x9091b0 */ { u32 v = 0x9091b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5066: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4d506bu); f_005b9ec4();
    /* 004d506b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d506e: mov ebx, dword ptr [0xa48a74] */ r_ebx = R32((u32)(0xa48a74u));
    /* 004d5074: mov esi, dword ptr [0xa48a70] */ r_esi = R32((u32)(0xa48a70u));
    /* 004d507a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004d507c:; BB(0x004d507c);
    /* 004d507c: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 004d507f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5081: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004d5084: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5088: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d508a: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d508d: mov edi, dword ptr [esi + eax*8] */ r_edi = R32((u32)(r_esi+r_eax*8));
    /* 004d5090: mov dword ptr [edx + ebx + 4], edi */ W32((u32)(r_edx+r_ebx+0x4u), r_edi);
    /* 004d5094: mov edi, dword ptr [esi + eax*8 + 4] */ r_edi = R32((u32)(r_esi+r_eax*8+0x4u));
    /* 004d5098: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d509b: mov dword ptr [edx + ebx + 8], edi */ W32((u32)(r_edx+r_ebx+0x8u), r_edi);
    /* 004d509f: mov edi, dword ptr [esi + eax*8 + 8] */ r_edi = R32((u32)(r_esi+r_eax*8+0x8u));
    /* 004d50a3: mov dword ptr [edx + ebx + 0xc], edi */ W32((u32)(r_edx+r_ebx+0xcu), r_edi);
    /* 004d50a7: mov edi, dword ptr [esi + eax*8 + 0x10] */ r_edi = R32((u32)(r_esi+r_eax*8+0x10u));
    /* 004d50ab: mov dword ptr [edx + ebx + 0x20], edi */ W32((u32)(r_edx+r_ebx+0x20u), r_edi);
    /* 004d50af: mov edi, dword ptr [esi + eax*8 + 0x14] */ r_edi = R32((u32)(r_esi+r_eax*8+0x14u));
    /* 004d50b3: mov dword ptr [edx + ebx + 0x24], edi */ W32((u32)(r_edx+r_ebx+0x24u), r_edi);
    /* 004d50b7: mov eax, dword ptr [esi + eax*8 + 0x18] */ r_eax = R32((u32)(r_esi+r_eax*8+0x18u));
    /* 004d50bb: mov dword ptr [edx + ebx + 0x28], eax */ W32((u32)(r_edx+r_ebx+0x28u), r_eax);
    /* 004d50bf: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d50c5: jl 0x4d507c */ if ((fS!=fO)) goto L_004d507c;
L_004d50c7:; BB(0x004d50c7);
    /* 004d50c7: jmp 0x4d5044 */ goto L_004d5044;
L_004d50cc:; BB(0x004d50cc);
    /* 004d50cc: push dword ptr [0xa48a6c] */ { u32 v = R32((u32)(0xa48a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d50d2: push 0x9091c0 */ { u32 v = 0x9091c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d50d7: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4d50dcu); f_005b9ec4();
    /* 004d50dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d50df: mov ebx, dword ptr [0xa48a6c] */ r_ebx = R32((u32)(0xa48a6cu));
    /* 004d50e5: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d50eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004d50ed:; BB(0x004d50ed);
    /* 004d50ed: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 004d50f0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d50f2: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004d50f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d50f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d50f9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d50fb: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d50fe: mov edi, dword ptr [ebx + eax*8] */ r_edi = R32((u32)(r_ebx+r_eax*8));
    /* 004d5101: mov dword ptr [edx + esi + 4], edi */ W32((u32)(r_edx+r_esi+0x4u), r_edi);
    /* 004d5105: mov edi, dword ptr [ebx + eax*8 + 4] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 004d5109: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d510c: mov dword ptr [edx + esi + 8], edi */ W32((u32)(r_edx+r_esi+0x8u), r_edi);
    /* 004d5110: mov edi, dword ptr [ebx + eax*8 + 8] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x8u));
    /* 004d5114: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 004d5118: mov edi, dword ptr [ebx + eax*8 + 0x10] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 004d511c: mov dword ptr [edx + esi + 0x20], edi */ W32((u32)(r_edx+r_esi+0x20u), r_edi);
    /* 004d5120: mov edi, dword ptr [ebx + eax*8 + 0x14] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x14u));
    /* 004d5124: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 004d5128: mov eax, dword ptr [ebx + eax*8 + 0x18] */ r_eax = R32((u32)(r_ebx+r_eax*8+0x18u));
    /* 004d512c: mov dword ptr [edx + esi + 0x28], eax */ W32((u32)(r_edx+r_esi+0x28u), r_eax);
    /* 004d5130: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5136: jl 0x4d50ed */ if ((fS!=fO)) goto L_004d50ed;
L_004d5138:; BB(0x004d5138);
    /* 004d5138: jmp 0x4d501c */ goto L_004d501c;
}

