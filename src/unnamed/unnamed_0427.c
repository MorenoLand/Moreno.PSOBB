#include "protos.h"

void f_004270f4(void) /* sub_4270F4 */
{
    FN_ENTER(0x004270f4);
    /* 004270f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004270f5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004270f9: fld dword ptr [0x8fc4dc] */ FPUSH(R_F32((u32)(0x8fc4dcu)));
    /* 004270ff: mov ecx, dword ptr [0xa43898] */ r_ecx = R32((u32)(0xa43898u));
    /* 00427105: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427107: je 0x427204 */ if (fZ) goto L_00427204;
L_0042710d:; BB(0x0042710d);
    /* 0042710d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0042710f: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00427112: mov edx, 0 */ r_edx = 0x0u;
    /* 00427117: jle 0x42720e */ if ((fZ||fS!=fO)) goto L_0042720e;
L_0042711d:; BB(0x0042711d);
    /* 0042711d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427120: jl 0x4271cc */ if ((fS!=fO)) goto L_004271cc;
L_00427126:; BB(0x00427126);
    /* 00427126: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00427129: lea eax, [ecx - 5] */ r_eax = (u32)(r_ecx+0xfffffffbu);
    /* 0042712c: mov ebp, eax */ r_ebp = r_eax;
L_0042712e:; BB(0x0042712e);
    /* 0042712e: mov eax, dword ptr [edx*4 + 0xa43840] */ r_eax = R32((u32)(r_edx*4+0xa43840u));
    /* 00427135: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00427138: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0042713a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0042713c: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0042713f: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00427141: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00427143: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00427145: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00427147: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427149: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042714a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042714c: jb 0x427150 */ if (fC) goto L_00427150;
L_0042714e:; BB(0x0042714e);
    /* 0042714e: fst st(3) */ ST(3) = ST(0);
L_00427150:; BB(0x00427150);
    /* 00427150: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427152: mov eax, dword ptr [edx*4 + 0xa43844] */ r_eax = R32((u32)(r_edx*4+0xa43844u));
    /* 00427159: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0042715c: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0042715e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00427160: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00427163: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00427165: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00427167: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00427169: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0042716b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042716d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042716e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00427170: jb 0x427174 */ if (fC) goto L_00427174;
L_00427172:; BB(0x00427172);
    /* 00427172: fst st(3) */ ST(3) = ST(0);
L_00427174:; BB(0x00427174);
    /* 00427174: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427176: mov eax, dword ptr [edx*4 + 0xa43848] */ r_eax = R32((u32)(r_edx*4+0xa43848u));
    /* 0042717d: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00427180: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00427182: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00427184: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00427187: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00427189: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0042718b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042718d: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0042718f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427191: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427192: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00427194: jb 0x427198 */ if (fC) goto L_00427198;
L_00427196:; BB(0x00427196);
    /* 00427196: fst st(3) */ ST(3) = ST(0);
L_00427198:; BB(0x00427198);
    /* 00427198: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042719a: mov eax, dword ptr [edx*4 + 0xa4384c] */ r_eax = R32((u32)(r_edx*4+0xa4384cu));
    /* 004271a1: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004271a4: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004271a6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004271a8: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004271ab: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004271ad: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004271af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004271b1: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004271b4: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004271b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004271b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004271b9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004271bb: jb 0x4271bf */ if (fC) goto L_004271bf;
L_004271bd:; BB(0x004271bd);
    /* 004271bd: fst st(3) */ ST(3) = ST(0);
L_004271bf:; BB(0x004271bf);
    /* 004271bf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004271c1: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004271c3: jle 0x42712e */ if ((fZ||fS!=fO)) goto L_0042712e;
L_004271c9:; BB(0x004271c9);
    /* 004271c9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004271cc:; BB(0x004271cc);
    /* 004271cc: mov eax, dword ptr [edx*4 + 0xa43840] */ r_eax = R32((u32)(r_edx*4+0xa43840u));
    /* 004271d3: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004271d6: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004271d8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004271da: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004271dd: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004271df: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004271e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004271e3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004271e6: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004271e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004271ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004271eb: jae 0x4271ef */ if (!fC) goto L_004271ef;
L_004271ed:; BB(0x004271ed);
    /* 004271ed: fst st(3) */ ST(3) = ST(0);
L_004271ef:; BB(0x004271ef);
    /* 004271ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004271f1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004271f3: jl 0x4271cc */ if ((fS!=fO)) goto L_004271cc;
L_004271f5:; BB(0x004271f5);
    /* 004271f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004271f7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004271f9:; BB(0x004271f9);
    /* 004271f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004271fa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004271fd: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x427202u); f_0082dc9c();
    /* 00427202: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427203: ret  */ FN_RET(0x004270f4); r_esp += 4; return;
L_00427204:; BB(0x00427204);
    /* 00427204: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427206: fld dword ptr [0x8fc4d8] */ FPUSH(R_F32((u32)(0x8fc4d8u)));
    /* 0042720c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042720d: ret  */ FN_RET(0x004270f4); r_esp += 4; return;
L_0042720e:; BB(0x0042720e);
    /* 0042720e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427210: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427212: jmp 0x4271f9 */ goto L_004271f9;
}

void f_00427214(void) /* sub_427214 */
{
    FN_ENTER(0x00427214);
    /* 00427214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00427215: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00427216: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427219: mov esi, ecx */ r_esi = r_ecx;
    /* 0042721b: mov ecx, dword ptr [esi + 0xac] */ r_ecx = R32((u32)(r_esi+0xacu));
    /* 00427221: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427223: je 0x427349 */ if (fZ) goto L_00427349;
L_00427229:; BB(0x00427229);
    /* 00427229: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x42722eu); f_008173b4();
    /* 0042722e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427230: jne 0x427242 */ if (!fZ) goto L_00427242;
L_00427232:; BB(0x00427232);
    /* 00427232: mov dword ptr [esi + 0xac], 0 */ W32((u32)(r_esi+0xacu), 0x0u);
    /* 0042723c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042723f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00427240: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00427241: ret  */ FN_RET(0x00427214); r_esp += 4; return;
L_00427242:; BB(0x00427242);
    /* 00427242: mov eax, dword ptr [0x9a42f0] */ r_eax = R32((u32)(0x9a42f0u));
    /* 00427247: mov edx, dword ptr [0x9a42f4] */ r_edx = R32((u32)(0x9a42f4u));
    /* 0042724d: mov ebx, dword ptr [0x9a42f8] */ r_ebx = R32((u32)(0x9a42f8u));
    /* 00427253: mov ecx, dword ptr [esi + 0xac] */ r_ecx = R32((u32)(r_esi+0xacu));
    /* 00427259: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0042725c: mov eax, dword ptr [0x9a42fc] */ r_eax = R32((u32)(0x9a42fcu));
    /* 00427261: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00427265: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00427269: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0042726d: mov eax, dword ptr [0x9a4300] */ r_eax = R32((u32)(0x9a4300u));
    /* 00427272: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00427276: call 0x4250c4 */ r_esp -= 4; W32(r_esp, 0x42727bu); f_004250c4();
    /* 0042727b: mov ebx, dword ptr [esi + 0xcc] */ r_ebx = R32((u32)(r_esi+0xccu));
    /* 00427281: mov edx, dword ptr [esi + 0xb8] */ r_edx = R32((u32)(r_esi+0xb8u));
    /* 00427287: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00427289: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0042728d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00427290: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00427293: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00427296: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427298: mov ecx, esi */ r_ecx = r_esi;
    /* 0042729a: push 0x9a42fc */ { u32 v = 0x9a42fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042729f: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x4272a2u); call_ind(t); }
    /* 004272a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004272a4: jne 0x4272b1 */ if (!fZ) goto L_004272b1;
L_004272a6:; BB(0x004272a6);
    /* 004272a6: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 004272ac: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004272af: jmp 0x427314 */ goto L_00427314;
L_004272b1:; BB(0x004272b1);
    /* 004272b1: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 004272b7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004272ba: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004272bc: jge 0x427314 */ if ((fS==fO)) goto L_00427314;
L_004272be:; BB(0x004272be);
    /* 004272be: mov edx, eax */ r_edx = r_eax;
    /* 004272c0: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004272c2: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004272c5: jl 0x4272f9 */ if ((fS!=fO)) goto L_004272f9;
L_004272c7:; BB(0x004272c7);
    /* 004272c7: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_004272ca:; BB(0x004272ca);
    /* 004272ca: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 004272cf: mov dword ptr [esi + ebx*4 + 0xbc], ecx */ W32((u32)(r_esi+r_ebx*4+0xbcu), r_ecx);
    /* 004272d6: mov dword ptr [esi + ebx*4 + 0xc0], ecx */ W32((u32)(r_esi+r_ebx*4+0xc0u), r_ecx);
    /* 004272dd: mov dword ptr [esi + ebx*4 + 0xc4], ecx */ W32((u32)(r_esi+r_ebx*4+0xc4u), r_ecx);
    /* 004272e4: mov dword ptr [esi + ebx*4 + 0xc8], ecx */ W32((u32)(r_esi+r_ebx*4+0xc8u), r_ecx);
    /* 004272eb: mov dword ptr [esi + ebx*4 + 0xcc], ecx */ W32((u32)(r_esi+r_ebx*4+0xccu), r_ecx);
    /* 004272f2: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004272f5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004272f7: jle 0x4272ca */ if ((fZ||fS!=fO)) goto L_004272ca;
L_004272f9:; BB(0x004272f9);
    /* 004272f9: mov dword ptr [esi + ebx*4 + 0xbc], 0x3c */ W32((u32)(r_esi+r_ebx*4+0xbcu), 0x3cu);
    /* 00427304: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00427307: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427309: jl 0x4272f9 */ if ((fS!=fO)) goto L_004272f9;
L_0042730b:; BB(0x0042730b);
    /* 0042730b: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 00427311: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_00427314:; BB(0x00427314);
    /* 00427314: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00427316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00427318: jle 0x427349 */ if ((fZ||fS!=fO)) goto L_00427349;
L_0042731a:; BB(0x0042731a);
    /* 0042731a: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0042731e: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
L_00427322:; BB(0x00427322);
    /* 00427322: mov edx, dword ptr [esi + ecx*4 + 0xbc] */ r_edx = R32((u32)(r_esi+r_ecx*4+0xbcu));
    /* 00427329: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0042732c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042732e: jle 0x42734f */ if ((fZ||fS!=fO)) goto L_0042734f;
L_00427330:; BB(0x00427330);
    /* 00427330: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00427333: mov dword ptr [esi + ebx*2 + 0xbc], edx */ W32((u32)(r_esi+r_ebx*2+0xbcu), r_edx);
L_0042733a:; BB(0x0042733a);
    /* 0042733a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042733d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042733f: jl 0x427322 */ if ((fS!=fO)) goto L_00427322;
L_00427341:; BB(0x00427341);
    /* 00427341: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00427345: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_00427349:; BB(0x00427349);
    /* 00427349: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042734c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042734d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042734e: ret  */ FN_RET(0x00427214); r_esp += 4; return;
L_0042734f:; BB(0x0042734f);
    /* 0042734f: mov edx, dword ptr [esi + 0xb8] */ r_edx = R32((u32)(r_esi+0xb8u));
    /* 00427355: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00427357: jl 0x42737c */ if ((fS!=fO)) goto L_0042737c;
L_00427359:; BB(0x00427359);
    /* 00427359: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0042735c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042735e: jge 0x42737c */ if ((fS==fO)) goto L_0042737c;
L_00427360:; BB(0x00427360);
    /* 00427360: lea ebp, [edi - 1] */ r_ebp = (u32)(r_edi+0xffffffffu);
    /* 00427363: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 00427366: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00427368: mov edi, dword ptr [ebp + edi*4 - 4] */ r_edi = R32((u32)(r_ebp+r_edi*4+0xfffffffcu));
    /* 0042736c: mov dword ptr [ebp + ebx*2], edi */ W32((u32)(r_ebp+r_ebx*2), r_edi);
    /* 00427370: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00427373: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00427375: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00427378: mov dword ptr [ebp + edi*4], edx */ W32((u32)(r_ebp+r_edi*4), r_edx);
L_0042737c:; BB(0x0042737c);
    /* 0042737c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042737f: mov edx, dword ptr [esi + eax*4 + 0xbc] */ r_edx = R32((u32)(r_esi+r_eax*4+0xbcu));
    /* 00427386: mov dword ptr [esi + ebx*2 + 0xbc], edx */ W32((u32)(r_esi+r_ebx*2+0xbcu), r_edx);
    /* 0042738d: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427390: mov dword ptr [esi + eax*4 + 0xbc], 0 */ W32((u32)(r_esi+r_eax*4+0xbcu), 0x0u);
    /* 0042739b: jmp 0x42733a */ goto L_0042733a;
}

void f_004273a0(void) /* sub_4273A0 */
{
    FN_ENTER(0x004273a0);
    /* 004273a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004273a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004273a3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4273a8u); f_0082d7b0();
    /* 004273a8: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 004273ae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4273b3u); f_00829cc8();
    /* 004273b3: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 004273b6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4273bbu); f_0082d838();
    /* 004273bb: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 004273be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004273c0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4273c5u); f_0082d8bc();
    /* 004273c5: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004273ca: mov edx, dword ptr [0xa43820] */ r_edx = R32((u32)(0xa43820u));
    /* 004273d0: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004273d5: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 004273db: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004273de: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004273e3: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4273e8u); f_0082e1e8();
    /* 004273e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004273e9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004273ee: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004273f3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004273f8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4273fdu); f_0082da80();
    /* 004273fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004273fe: ret  */ FN_RET(0x004273a0); r_esp += 4; return;
}

void f_00427400(void) /* sub_427400 */
{
    FN_ENTER(0x00427400);
    /* 00427400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00427401: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00427402: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427403: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00427404: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00427405: mov esi, ecx */ r_esi = r_ecx;
    /* 00427407: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00427409: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0042740d: mov edi, dword ptr [ebp + 0xa8] */ r_edi = R32((u32)(r_ebp+0xa8u));
    /* 00427413: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427415: jle 0x427449 */ if ((fZ||fS!=fO)) goto L_00427449;
L_00427417:; BB(0x00427417);
    /* 00427417: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0042741d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00427420: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00427423: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427425: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00427427: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427429: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042742b: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042742d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042742f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00427431:; BB(0x00427431);
    /* 00427431: lea ebx, [edx + eax] */ r_ebx = (u32)(r_edx+r_eax);
    /* 00427434: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00427437: test esi, 0x4000000 */ {  u32 a = r_esi; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042743d: jne 0x427451 */ if (!fZ) goto L_00427451;
L_0042743f:; BB(0x0042743f);
    /* 0042743f: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427442: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427445: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00427447: jl 0x427431 */ if ((fS!=fO)) goto L_00427431;
L_00427449:; BB(0x00427449);
    /* 00427449: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042744a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042744b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042744c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042744d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042744e: ret 0xc */ FN_RET(0x00427400); r_esp += 16; return;
L_00427451:; BB(0x00427451);
    /* 00427451: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00427454: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00427457: mov eax, ebx */ r_eax = r_ebx;
    /* 00427459: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0042745e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00427460: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00427461: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00427462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427463: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00427467: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042746a: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0042746e: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00427470: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00427476: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x427479u); call_ind(t); }
    /* 00427479: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042747b: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 00427481: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00427484: jne 0x427449 */ if (!fZ) goto L_00427449;
L_00427486:; BB(0x00427486);
    /* 00427486: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00427489: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042748b: jne 0x427449 */ if (!fZ) goto L_00427449;
L_0042748d:; BB(0x0042748d);
    /* 0042748d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042748e: call 0x418d14 */ r_esp -= 4; W32(r_esp, 0x427493u); f_00418d14();
    /* 00427493: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427494: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427495: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00427496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427497: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00427498: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00427499: ret 0xc */ FN_RET(0x00427400); r_esp += 16; return;
}

void f_0042749c(void) /* sub_42749C */
{
    FN_ENTER(0x0042749c);
    /* 0042749c: mov dword ptr [0xa43894], 0x43c80000 */ W32((u32)(0xa43894u), 0x43c80000u);
    /* 004274a6: mov dword ptr [0xa43890], 0x44992000 */ W32((u32)(0xa43890u), 0x44992000u);
    /* 004274b0: mov dword ptr [0x9a42f8], 0x41a00000 */ W32((u32)(0x9a42f8u), 0x41a00000u);
    /* 004274ba: ret  */ FN_RET(0x0042749c); r_esp += 4; return;
}

void f_004274bc(void) /* sub_4274BC */
{
    FN_ENTER(0x004274bc);
    /* 004274bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004274be: mov dword ptr [0xa43898], eax */ W32((u32)(0xa43898u), r_eax);
    /* 004274c3: mov dword ptr [0xa43840], eax */ W32((u32)(0xa43840u), r_eax);
    /* 004274c8: mov dword ptr [0xa43844], eax */ W32((u32)(0xa43844u), r_eax);
    /* 004274cd: mov dword ptr [0xa43848], eax */ W32((u32)(0xa43848u), r_eax);
    /* 004274d2: mov dword ptr [0xa4384c], eax */ W32((u32)(0xa4384cu), r_eax);
    /* 004274d7: mov dword ptr [0xa43850], eax */ W32((u32)(0xa43850u), r_eax);
    /* 004274dc: mov dword ptr [0xa43854], eax */ W32((u32)(0xa43854u), r_eax);
    /* 004274e1: mov dword ptr [0xa43858], eax */ W32((u32)(0xa43858u), r_eax);
    /* 004274e6: mov dword ptr [0xa4385c], eax */ W32((u32)(0xa4385cu), r_eax);
    /* 004274eb: mov dword ptr [0xa43860], eax */ W32((u32)(0xa43860u), r_eax);
    /* 004274f0: mov dword ptr [0xa43864], eax */ W32((u32)(0xa43864u), r_eax);
    /* 004274f5: mov dword ptr [0xa43868], eax */ W32((u32)(0xa43868u), r_eax);
    /* 004274fa: mov dword ptr [0xa4386c], eax */ W32((u32)(0xa4386cu), r_eax);
    /* 004274ff: mov dword ptr [0xa43870], eax */ W32((u32)(0xa43870u), r_eax);
    /* 00427504: mov dword ptr [0xa43874], eax */ W32((u32)(0xa43874u), r_eax);
    /* 00427509: mov dword ptr [0xa43878], eax */ W32((u32)(0xa43878u), r_eax);
    /* 0042750e: mov dword ptr [0xa4387c], eax */ W32((u32)(0xa4387cu), r_eax);
    /* 00427513: mov dword ptr [0xa43880], eax */ W32((u32)(0xa43880u), r_eax);
    /* 00427518: mov dword ptr [0xa43884], eax */ W32((u32)(0xa43884u), r_eax);
    /* 0042751d: mov dword ptr [0xa43888], eax */ W32((u32)(0xa43888u), r_eax);
    /* 00427522: mov dword ptr [0xa4388c], eax */ W32((u32)(0xa4388cu), r_eax);
    /* 00427527: ret  */ FN_RET(0x004274bc); r_esp += 4; return;
}

void f_00427528(void) /* sub_427528 */
{
    FN_ENTER(0x00427528);
    /* 00427528: call 0x4275cc */ r_esp -= 4; W32(r_esp, 0x42752du); f_004275cc();
    /* 0042752d: ret  */ FN_RET(0x00427528); r_esp += 4; return;
}

void f_00427530(void) /* sub_427530 */
{
    FN_ENTER(0x00427530);
    /* 00427530: call 0x427904 */ r_esp -= 4; W32(r_esp, 0x427535u); f_00427904();
    /* 00427535: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42753au); f_0061cdb0();
    /* 0042753a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42753fu); f_0061cdb0();
    /* 0042753f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x427544u); f_0061cdb0();
    /* 00427544: call 0x426da0 */ r_esp -= 4; W32(r_esp, 0x427549u); f_00426da0();
    /* 00427549: ret  */ FN_RET(0x00427530); r_esp += 4; return;
}

void f_0042754c(void) /* sub_42754C */
{
    FN_ENTER(0x0042754c);
    /* 0042754c: call 0x426de4 */ r_esp -= 4; W32(r_esp, 0x427551u); f_00426de4();
    /* 00427551: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x427556u); f_0061cdb0();
    /* 00427556: call 0x4274bc */ r_esp -= 4; W32(r_esp, 0x42755bu); f_004274bc();
    /* 0042755b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x427560u); f_0061cdb0();
    /* 00427560: call 0x428950 */ r_esp -= 4; W32(r_esp, 0x427565u); f_00428950();
    /* 00427565: ret  */ FN_RET(0x0042754c); r_esp += 4; return;
}

void f_00427568(void) /* sub_427568 */
{
    FN_ENTER(0x00427568);
    /* 00427568: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427569: mov ebp, esp */ r_ebp = r_esp;
    /* 0042756b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042756d: push 0x8cd9c4 */ { u32 v = 0x8cd9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00427572: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00427578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427579: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00427580: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427583: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00427586: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00427589: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0042758c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0042758f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00427592: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00427595: mov eax, ecx */ r_eax = r_ecx;
    /* 00427597: mov dword ptr [eax], 0xaf4030 */ W32((u32)(r_eax), 0xaf4030u);
    /* 0042759d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004275a4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4275a9u); f_008171e8();
    /* 004275a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004275ac: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004275ae: jne 0x4275c0 */ if (!fZ) goto L_004275c0;
L_004275b0:; BB(0x004275b0);
    /* 004275b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004275b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004275ba: mov esp, ebp */ r_esp = r_ebp;
    /* 004275bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004275bd: ret 4 */ FN_RET(0x00427568); r_esp += 8; return;
L_004275c0:; BB(0x004275c0);
    /* 004275c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004275c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004275c4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4275c9u); f_005c2f74();
    /* 004275c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004275ca: jmp 0x4275b0 */ goto L_004275b0;
}

void f_004275cc(void) /* sub_4275CC */
{
    FN_ENTER(0x004275cc);
    /* 004275cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004275cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004275cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004275d1: push 0x8cd9ec */ { u32 v = 0x8cd9ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004275d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004275dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004275dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004275e4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004275e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004275ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004275ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004275f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004275f3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004275f5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004275fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x427601u); f_005caba4();
    /* 00427601: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00427604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427607: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042760a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042760c: je 0x427660 */ if (fZ) goto L_00427660;
L_0042760e:; BB(0x0042760e);
    /* 0042760e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00427615: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042761c: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00427622: mov ecx, eax */ r_ecx = r_eax;
    /* 00427624: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x427629u); f_008193cc();
    /* 00427629: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042762c: mov dword ptr [edx], 0xaf4030 */ W32((u32)(r_edx), 0xaf4030u);
    /* 00427632: mov eax, dword ptr [0x9a4304] */ r_eax = R32((u32)(0x9a4304u));
    /* 00427637: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0042763e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00427641: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427643: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00427646: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0042764d: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00427650: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00427653: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00427656: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 0042765d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_00427660:; BB(0x00427660);
    /* 00427660: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427663: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042766a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042766c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042766d: ret  */ FN_RET(0x004275cc); r_esp += 4; return;
}

void f_00427670(void) /* sub_427670 */
{
    FN_ENTER(0x00427670);
    /* 00427670: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00427671: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427674: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00427676: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42767bu); f_00520e6c();
    /* 0042767b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042767d: je 0x4276d6 */ if (fZ) goto L_004276d6;
L_0042767f:; BB(0x0042767f);
    /* 0042767f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00427683: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00427687: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427689: mov esi, eax */ r_esi = r_eax;
    /* 0042768b: mov edi, ebx */ r_edi = r_ebx;
L_0042768d:; BB(0x0042768d);
    /* 0042768d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042768e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x427693u); f_0068d5a8();
    /* 00427693: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427694: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427696: je 0x4276f2 */ if (fZ) goto L_004276f2;
L_00427698:; BB(0x00427698);
    /* 00427698: fld dword ptr [0x8fc4fc] */ FPUSH(R_F32((u32)(0x8fc4fcu)));
    /* 0042769e: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004276a1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004276a4: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004276a7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004276ab: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004276ae: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004276b1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004276b5: mov ecx, dword ptr [edi + esi*4 + 0x28] */ r_ecx = R32((u32)(r_edi+r_esi*4+0x28u));
    /* 004276b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004276bb: je 0x4276db */ if (fZ) goto L_004276db;
L_004276bd:; BB(0x004276bd);
    /* 004276bd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004276c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004276c1: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4276c6u); f_00508db8();
L_004276c6:; BB(0x004276c6);
    /* 004276c6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004276c9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004276cc: jl 0x42768d */ if ((fS!=fO)) goto L_0042768d;
L_004276ce:; BB(0x004276ce);
    /* 004276ce: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004276d2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_004276d6:; BB(0x004276d6);
    /* 004276d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004276d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004276da: ret  */ FN_RET(0x00427670); r_esp += 4; return;
L_004276db:; BB(0x004276db);
    /* 004276db: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004276de: push 0x144 */ { u32 v = 0x144u; r_esp -= 4; W32(r_esp, v); }
    /* 004276e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004276e4: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4276e9u); f_00509590();
    /* 004276e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004276ec: mov dword ptr [edi + ebx*2 + 0x28], eax */ W32((u32)(r_edi+r_ebx*2+0x28u), r_eax);
    /* 004276f0: jmp 0x4276c6 */ goto L_004276c6;
L_004276f2:; BB(0x004276f2);
    /* 004276f2: mov ecx, dword ptr [edi + esi*4 + 0x28] */ r_ecx = R32((u32)(r_edi+r_esi*4+0x28u));
    /* 004276f6: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004276f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004276fb: je 0x4276c6 */ if (fZ) goto L_004276c6;
L_004276fd:; BB(0x004276fd);
    /* 004276fd: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00427701: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00427707: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0042770b: mov dword ptr [edi + eax*2 + 0x28], 0 */ W32((u32)(r_edi+r_eax*2+0x28u), 0x0u);
    /* 00427713: jmp 0x4276c6 */ goto L_004276c6;
}

void f_00427700(void)
{
    FN_ENTER(0x00427700);
    /* 00427700: or byte ptr [ecx - 0xfffe36], al */ { u32 ad = (u32)(r_ecx+0xff0001cau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00427706: jmp dword ptr [esi - 0x77] */ { u32 t = R32((u32)(r_esi+0xffffff89u)); jmp_ind(t); return; }
}

void f_00427718(void) /* sub_427718 */
{
    FN_ENTER(0x00427718);
    /* 00427718: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00427719: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x42771eu); f_0067e408();
    /* 0042771e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427720: je 0x427724 */ if (fZ) goto L_00427724;
L_00427722:; BB(0x00427722);
    /* 00427722: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00427723: ret  */ FN_RET(0x00427718); r_esp += 4; return;
L_00427724:; BB(0x00427724);
    /* 00427724: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x427729u); f_00520e6c();
    /* 00427729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042772b: jne 0x427737 */ if (!fZ) goto L_00427737;
L_0042772d:; BB(0x0042772d);
    /* 0042772d: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00427732: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00427735: je 0x427722 */ if (fZ) goto L_00427722;
L_00427737:; BB(0x00427737);
    /* 00427737: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0042773c: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00427741: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427746: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0042774b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x427750u); f_0082dab0();
    /* 00427750: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x427755u); f_0082d7b0();
    /* 00427755: mov dword ptr [0xaf034c], 1 */ W32((u32)(0xaf034cu), 0x1u);
    /* 0042775f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00427761: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x427766u); f_007a94a0();
    /* 00427766: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427767: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x42776cu); f_0061cdb0();
    /* 0042776c: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 00427772: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x427777u); f_00829cc8();
    /* 00427777: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042777c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00427782: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00427785: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x42778au); f_00502b14();
    /* 0042778a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042778b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x427790u); f_0082e1e8();
    /* 00427790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427791: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x427796u); f_00502c30();
    /* 00427796: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x42779bu); f_007a94b0();
    /* 0042779b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4277a0u); f_0082da80();
    /* 004277a0: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004277a5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004277aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004277ab: ret  */ FN_RET(0x00427718); r_esp += 4; return;
}

void f_004277ac(void) /* sub_4277AC */
{
    FN_ENTER(0x004277ac);
    /* 004277ac: mov dword ptr [0xa438a0], 0x3f800000 */ W32((u32)(0xa438a0u), 0x3f800000u);
    /* 004277b6: mov dword ptr [0xa438a4], 0x41000000 */ W32((u32)(0xa438a4u), 0x41000000u);
    /* 004277c0: mov dword ptr [0xa438a8], 0x3fc00000 */ W32((u32)(0xa438a8u), 0x3fc00000u);
    /* 004277ca: ret  */ FN_RET(0x004277ac); r_esp += 4; return;
}

void f_004277cc(void) /* sub_4277CC */
{
    FN_ENTER(0x004277cc);
    /* 004277cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004277cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004277cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004277d1: call 0x4277f0 */ r_esp -= 4; W32(r_esp, 0x4277d6u); f_004277f0();
    /* 004277d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004277da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004277dc: jne 0x4277e2 */ if (!fZ) goto L_004277e2;
L_004277de:; BB(0x004277de);
    /* 004277de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004277df: ret 4 */ FN_RET(0x004277cc); r_esp += 8; return;
L_004277e2:; BB(0x004277e2);
    /* 004277e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004277e3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4277e8u); f_00857e98();
    /* 004277e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004277e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004277ea: ret 4 */ FN_RET(0x004277cc); r_esp += 8; return;
}

void f_004277f0(void) /* sub_4277F0 */
{
    FN_ENTER(0x004277f0);
    /* 004277f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004277f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004277f3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004277f6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4277fbu); f_00857e98();
    /* 004277fb: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004277fe: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00427805: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x42780au); f_00857e98();
    /* 0042780a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042780c: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0042780f: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 00427812: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00427815: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00427818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427819: ret  */ FN_RET(0x004277f0); r_esp += 4; return;
}

void f_0042781c(void) /* sub_42781C */
{
    FN_ENTER(0x0042781c);
    /* 0042781c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042781d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042781f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00427821: call 0x427840 */ r_esp -= 4; W32(r_esp, 0x427826u); f_00427840();
    /* 00427826: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042782a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042782c: jne 0x427832 */ if (!fZ) goto L_00427832;
L_0042782e:; BB(0x0042782e);
    /* 0042782e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042782f: ret 4 */ FN_RET(0x0042781c); r_esp += 8; return;
L_00427832:; BB(0x00427832);
    /* 00427832: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00427833: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x427838u); f_005c2f74();
    /* 00427838: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042783a: ret 4 */ FN_RET(0x0042781c); r_esp += 8; return;
}

void f_00427840(void) /* sub_427840 */
{
    FN_ENTER(0x00427840);
    /* 00427840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427841: mov ebp, esp */ r_ebp = r_esp;
    /* 00427843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00427845: push 0x8cda08 */ { u32 v = 0x8cda08u; r_esp -= 4; W32(r_esp, v); }
    /* 0042784a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00427850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00427858: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042785b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042785e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00427861: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00427864: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00427867: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042786a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042786d: mov dword ptr [ecx], 0xaf4168 */ W32((u32)(r_ecx), 0xaf4168u);
    /* 00427873: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042787a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x42787fu); f_008171e8();
    /* 0042787f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427882: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00427889: mov esp, ebp */ r_esp = r_ebp;
    /* 0042788b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042788c: ret  */ FN_RET(0x00427840); r_esp += 4; return;
}

void f_00427890(void) /* sub_427890 */
{
    FN_ENTER(0x00427890);
    /* 00427890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00427891: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00427893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00427895: call 0x4278b4 */ r_esp -= 4; W32(r_esp, 0x42789au); f_004278b4();
    /* 0042789a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042789e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004278a0: jne 0x4278a6 */ if (!fZ) goto L_004278a6;
L_004278a2:; BB(0x004278a2);
    /* 004278a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004278a3: ret 4 */ FN_RET(0x00427890); r_esp += 8; return;
L_004278a6:; BB(0x004278a6);
    /* 004278a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004278a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4278acu); f_005c2f74();
    /* 004278ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004278ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004278ae: ret 4 */ FN_RET(0x00427890); r_esp += 8; return;
}

void f_004278b4(void) /* sub_4278B4 */
{
    FN_ENTER(0x004278b4);
    /* 004278b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004278b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004278b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004278b9: push 0x8cda24 */ { u32 v = 0x8cda24u; r_esp -= 4; W32(r_esp, v); }
    /* 004278be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004278c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004278c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004278cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004278cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004278d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004278d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004278d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004278db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004278de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004278e1: mov dword ptr [ecx], 0xaf4178 */ W32((u32)(r_ecx), 0xaf4178u);
    /* 004278e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004278ee: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4278f3u); f_008171e8();
    /* 004278f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004278f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004278fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004278ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427900: ret  */ FN_RET(0x004278b4); r_esp += 4; return;
}

void f_00427904(void) /* sub_427904 */
{
    FN_ENTER(0x00427904);
    /* 00427904: push dword ptr [0xa438c0] */ { u32 v = R32((u32)(0xa438c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042790a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x42790fu); f_00857e98();
    /* 0042790f: push dword ptr [0xa438cc] */ { u32 v = R32((u32)(0xa438ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00427915: mov dword ptr [0xa438c0], 0 */ W32((u32)(0xa438c0u), 0x0u);
    /* 0042791f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x427924u); f_00857e98();
    /* 00427924: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427927: mov ecx, dword ptr [0xa43904] */ r_ecx = R32((u32)(0xa43904u));
    /* 0042792d: mov dword ptr [0xa438cc], 0 */ W32((u32)(0xa438ccu), 0x0u);
    /* 00427937: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427939: je 0x427942 */ if (fZ) goto L_00427942;
L_0042793b:; BB(0x0042793b);
    /* 0042793b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042793d: call 0x4277cc */ r_esp -= 4; W32(r_esp, 0x427942u); f_004277cc();
L_00427942:; BB(0x00427942);
    /* 00427942: mov ecx, dword ptr [0xa43900] */ r_ecx = R32((u32)(0xa43900u));
    /* 00427948: mov dword ptr [0xa43904], 0 */ W32((u32)(0xa43904u), 0x0u);
    /* 00427952: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427954: je 0x42795d */ if (fZ) goto L_0042795d;
L_00427956:; BB(0x00427956);
    /* 00427956: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427958: call 0x4277cc */ r_esp -= 4; W32(r_esp, 0x42795du); f_004277cc();
L_0042795d:; BB(0x0042795d);
    /* 0042795d: mov ecx, dword ptr [0xa43908] */ r_ecx = R32((u32)(0xa43908u));
    /* 00427963: mov dword ptr [0xa43900], 0 */ W32((u32)(0xa43900u), 0x0u);
    /* 0042796d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042796f: je 0x427978 */ if (fZ) goto L_00427978;
L_00427971:; BB(0x00427971);
    /* 00427971: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427973: call 0x4277cc */ r_esp -= 4; W32(r_esp, 0x427978u); f_004277cc();
L_00427978:; BB(0x00427978);
    /* 00427978: mov dword ptr [0xa43908], 0 */ W32((u32)(0xa43908u), 0x0u);
    /* 00427982: ret  */ FN_RET(0x00427904); r_esp += 4; return;
}

void f_0042795f(void)
{
    FN_ENTER(0x0042795f);
    /* 0042795f: or byte ptr [ecx], bh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00427961: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00427962: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00427964: add eax, 0xa43900 */ {  u32 a = r_eax; u32 b = 0xa43900u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427969: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042796b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042796d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042796f: je 0x427978 */ if (fZ) goto L_00427978;
L_00427971:; BB(0x00427971);
    /* 00427971: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427973: call 0x4277cc */ r_esp -= 4; W32(r_esp, 0x427978u); f_004277cc();
L_00427978:; BB(0x00427978);
    /* 00427978: mov dword ptr [0xa43908], 0 */ W32((u32)(0xa43908u), 0x0u);
    /* 00427982: ret  */ FN_RET(0x0042795f); r_esp += 4; return;
}

void f_00427984(void) /* sub_427984 */
{
    FN_ENTER(0x00427984);
    /* 00427984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427985: mov ebp, esp */ r_ebp = r_esp;
    /* 00427987: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00427989: push 0x8cda40 */ { u32 v = 0x8cda40u; r_esp -= 4; W32(r_esp, v); }
    /* 0042798e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00427994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427995: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042799c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042799f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004279a2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004279a5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004279a8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004279ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004279ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004279b1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004279b4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004279b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004279ba: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004279bd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4279c2u); f_008193cc();
    /* 004279c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004279c9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004279cc: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004279cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004279d2: mov dword ptr [eax], 0xaf4168 */ W32((u32)(r_eax), 0xaf4168u);
    /* 004279d8: mov edx, dword ptr [0x9a430c] */ r_edx = R32((u32)(0x9a430cu));
    /* 004279de: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 004279e5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004279e8: mov dword ptr [0xa438bc], edi */ W32((u32)(0xa438bcu), r_edi);
    /* 004279ee: mov dword ptr [0xa438b8], ecx */ W32((u32)(0xa438b8u), r_ecx);
    /* 004279f4: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004279f6: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 004279f9: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004279fc: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 004279ff: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00427a02: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00427a05: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00427a0c: mov dword ptr [eax + 0x30], 0xc1f00000 */ W32((u32)(r_eax+0x30u), 0xc1f00000u);
    /* 00427a13: mov dword ptr [eax + 0x34], 0xc1f00000 */ W32((u32)(r_eax+0x34u), 0xc1f00000u);
    /* 00427a1a: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x427a1fu); f_00520e6c();
    /* 00427a1f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00427a22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427a24: je 0x427a2f */ if (fZ) goto L_00427a2f;
L_00427a26:; BB(0x00427a26);
    /* 00427a26: mov dword ptr [edx + 0x38], 1 */ W32((u32)(r_edx+0x38u), 0x1u);
    /* 00427a2d: jmp 0x427a36 */ goto L_00427a36;
L_00427a2f:; BB(0x00427a2f);
    /* 00427a2f: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_00427a36:; BB(0x00427a36);
    /* 00427a36: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00427a39: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427a3c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00427a3f: mov eax, edx */ r_eax = r_edx;
    /* 00427a41: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 00427a48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427a4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00427a52: mov esp, ebp */ r_esp = r_ebp;
    /* 00427a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427a55: ret 0xc */ FN_RET(0x00427984); r_esp += 16; return;
}

void f_00427a58(void) /* sub_427A58 */
{
    FN_ENTER(0x00427a58);
    /* 00427a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427a59: mov ebp, esp */ r_ebp = r_esp;
    /* 00427a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00427a5d: push 0x8cda76 */ { u32 v = 0x8cda76u; r_esp -= 4; W32(r_esp, v); }
    /* 00427a62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00427a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427a69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00427a70: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427a73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00427a76: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00427a79: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00427a7c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00427a7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427a81: mov dword ptr [ecx + 0x34], 0xc1f00000 */ W32((u32)(r_ecx+0x34u), 0xc1f00000u);
    /* 00427a88: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00427a8b: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00427a8e: mov dword ptr [ecx + 0x30], 0xc1f00000 */ W32((u32)(r_ecx+0x30u), 0xc1f00000u);
    /* 00427a95: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00427a98: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00427a9a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x427a9fu); f_005caba4();
    /* 00427a9f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00427aa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427aa5: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00427aa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427aaa: je 0x427b92 */ if (fZ) goto L_00427b92;
L_00427ab0:; BB(0x00427ab0);
    /* 00427ab0: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00427ab7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427abe: mov ecx, eax */ r_ecx = r_eax;
    /* 00427ac0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427ac3: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00427ac6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00427ac9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00427acc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427acd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x427ad2u); f_008193cc();
    /* 00427ad2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00427ad9: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00427adc: mov dword ptr [edi], 0xaf4178 */ W32((u32)(r_edi), 0xaf4178u);
    /* 00427ae2: mov eax, dword ptr [0x9a4310] */ r_eax = R32((u32)(0x9a4310u));
    /* 00427ae7: mov ebx, dword ptr [0xa438bc] */ r_ebx = R32((u32)(0xa438bcu));
    /* 00427aed: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00427af0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00427af2: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00427af5: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00427af8: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 00427afb: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00427afe: mov dword ptr [edi + 0x34], 0xc2000000 */ W32((u32)(r_edi+0x34u), 0xc2000000u);
    /* 00427b05: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 00427b08: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427b0du); f_008587a5();
    /* 00427b0d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00427b10: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00427b13: fdiv dword ptr [0x8fc5dc] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5dcu));
    /* 00427b19: fmul dword ptr [0x8fc5d8] */ ST(0) = ST(0) * R_F32((u32)(0x8fc5d8u));
    /* 00427b1f: mov eax, edi */ r_eax = r_edi;
    /* 00427b21: fadd dword ptr [0x8fc5e0] */ ST(0) = ST(0) + R_F32((u32)(0x8fc5e0u));
    /* 00427b27: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00427b2a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427b2fu); f_008587a5();
    /* 00427b2f: fld dword ptr [0x8fc5d4] */ FPUSH(R_F32((u32)(0x8fc5d4u)));
    /* 00427b35: mov edx, edi */ r_edx = r_edi;
    /* 00427b37: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00427b3a: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00427b3d: fdiv dword ptr [0x8fc5dc] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5dcu));
    /* 00427b43: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00427b45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00427b47: fnstcw word ptr [ebp - 0x30] */ W16((u32)(r_ebp+0xffffffd0u), fcw);
    /* 00427b4a: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 00427b4e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427b53: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00427b56: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00427b59: fistp dword ptr [edx + 0x3c] */ W32((u32)(r_edx+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00427b5c: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00427b5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427b61: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00427b64: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00427b67: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x427b6cu); f_00520e6c();
    /* 00427b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427b6e: je 0x427b7b */ if (fZ) goto L_00427b7b;
L_00427b70:; BB(0x00427b70);
    /* 00427b70: mov eax, edi */ r_eax = r_edi;
    /* 00427b72: mov dword ptr [eax + 0x48], 1 */ W32((u32)(r_eax+0x48u), 0x1u);
    /* 00427b79: jmp 0x427b84 */ goto L_00427b84;
L_00427b7b:; BB(0x00427b7b);
    /* 00427b7b: mov eax, edi */ r_eax = r_edi;
    /* 00427b7d: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00427b84:; BB(0x00427b84);
    /* 00427b84: mov dword ptr [eax + 0x4c], 0x1e */ W32((u32)(r_eax+0x4cu), 0x1eu);
    /* 00427b8b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00427b92:; BB(0x00427b92);
    /* 00427b92: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427b95: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00427b98: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427b9b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00427b9e: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 00427ba5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427ba8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00427baf: mov esp, ebp */ r_esp = r_ebp;
    /* 00427bb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427bb2: ret  */ FN_RET(0x00427a58); r_esp += 4; return;
}

void f_00427bbc(void) /* sub_427BBC */
{
    FN_ENTER(0x00427bbc);
    /* 00427bbc: mov eax, 1 */ r_eax = 0x1u;
    /* 00427bc1: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00427bc4: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00427bc7: ret  */ FN_RET(0x00427bbc); r_esp += 4; return;
}

void f_00427bc8(void) /* sub_427BC8 */
{
    FN_ENTER(0x00427bc8);
    /* 00427bc8: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 00427bcb: fcomp dword ptr [0x8fc5d0] */ fx_compare(ST(0), R_F32((u32)(0x8fc5d0u))); FPOP();
    /* 00427bd1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427bd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00427bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427bd6: mov eax, 1 */ r_eax = 0x1u;
    /* 00427bdb: jae 0x427bdf */ if (!fC) goto L_00427bdf;
L_00427bdd:; BB(0x00427bdd);
    /* 00427bdd: mov eax, edx */ r_eax = r_edx;
L_00427bdf:; BB(0x00427bdf);
    /* 00427bdf: ret  */ FN_RET(0x00427bc8); r_esp += 4; return;
}

void f_00427be0(void) /* sub_427BE0 */
{
    FN_ENTER(0x00427be0);
    /* 00427be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00427be3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00427be5: push 0x8cdafc */ { u32 v = 0x8cdafcu; r_esp -= 4; W32(r_esp, v); }
    /* 00427bea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00427bf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427bf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00427bf8: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427bfe: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00427c01: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00427c04: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00427c07: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00427c0a: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00427c0d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00427c10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00427c12: je 0x428140 */ if (fZ) goto L_00428140;
L_00427c18:; BB(0x00427c18);
    /* 00427c18: push dword ptr [0xa438bc] */ { u32 v = R32((u32)(0xa438bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00427c1e: fld dword ptr [0x8fc584] */ FPUSH(R_F32((u32)(0x8fc584u)));
    /* 00427c24: mov edx, ecx */ r_edx = r_ecx;
    /* 00427c26: fadd dword ptr [edx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x30u));
    /* 00427c29: fld dword ptr [0x8fc5cc] */ FPUSH(R_F32((u32)(0x8fc5ccu)));
    /* 00427c2f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00427c31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427c33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427c34: ja 0x427c38 */ if ((!fC&&!fZ)) goto L_00427c38;
L_00427c36:; BB(0x00427c36);
    /* 00427c36: fst st(1) */ ST(1) = ST(0);
L_00427c38:; BB(0x00427c38);
    /* 00427c38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427c3a: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 00427c3d: call 0x4270f4 */ r_esp -= 4; W32(r_esp, 0x427c42u); f_004270f4();
    /* 00427c42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00427c43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427c46: fld dword ptr [0x8fc5cc] */ FPUSH(R_F32((u32)(0x8fc5ccu)));
    /* 00427c4c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00427c4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427c50: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 00427c53: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00427c56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427c57: je 0x428157 */ if (fZ) goto L_00428157;
L_00427c5d:; BB(0x00427c5d);
    /* 00427c5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00427c5f: fcom dword ptr [0x8fc580] */ fx_compare(ST(0), R_F32((u32)(0x8fc580u))); 
    /* 00427c65: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427c67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427c68: jae 0x427c8d */ if (!fC) goto L_00427c8d;
L_00427c6a:; BB(0x00427c6a);
    /* 00427c6a: fmul dword ptr [0x8fc5c8] */ ST(0) = ST(0) * R_F32((u32)(0x8fc5c8u));
    /* 00427c70: fadd dword ptr [0x8fc5ec] */ ST(0) = ST(0) + R_F32((u32)(0x8fc5ecu));
    /* 00427c76: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00427c78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427c7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427c7b: ja 0x427c7f */ if ((!fC&&!fZ)) goto L_00427c7f;
L_00427c7d:; BB(0x00427c7d);
    /* 00427c7d: fst st(2) */ ST(2) = ST(0);
L_00427c7f:; BB(0x00427c7f);
    /* 00427c7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427c81: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427c84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427c86: fst dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0));
    /* 00427c89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427c8b: jmp 0x427c95 */ goto L_00427c95;
L_00427c8d:; BB(0x00427c8d);
    /* 00427c8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427c8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427c92: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
L_00427c95:; BB(0x00427c95);
    /* 00427c95: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00427c97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427c99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427c9a: ja 0x42807a */ if ((!fC&&!fZ)) goto L_0042807a;
L_00427ca0:; BB(0x00427ca0);
    /* 00427ca0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427ca3: lea edx, [eax + 0x20] */ r_edx = (u32)(r_eax+0x20u);
    /* 00427ca6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ca7: push dword ptr [0xa438bc] */ { u32 v = R32((u32)(0xa438bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00427cad: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x427cb2u); f_007a9180();
    /* 00427cb2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427cb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00427cb6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00427cb9: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x427cbeu); f_0082dc9c();
    /* 00427cbe: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00427cc1: fadd dword ptr [edi + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2cu));
    /* 00427cc4: fcom dword ptr [0x8fc5c4] */ fx_compare(ST(0), R_F32((u32)(0x8fc5c4u))); 
    /* 00427cca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00427ccc: mov ebx, dword ptr [0xa438bc] */ r_ebx = R32((u32)(0xa438bcu));
    /* 00427cd2: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 00427cd5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00427cd7: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00427cda: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00427cdd: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 00427ce0: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00427ce3: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 00427ce6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00427ce7: jb 0x427f26 */ if (fC) goto L_00427f26;
L_00427ced:; BB(0x00427ced);
    /* 00427ced: mov eax, edi */ r_eax = r_edi;
    /* 00427cef: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00427cf2: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00427cf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427cfb: je 0x427e0d */ if (fZ) goto L_00427e0d;
L_00427d01:; BB(0x00427d01);
    /* 00427d01: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 00427d08: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00427d0a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x427d0fu); f_005caba4();
    /* 00427d0f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00427d12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427d15: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00427d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427d1a: je 0x427e01 */ if (fZ) goto L_00427e01;
L_00427d20:; BB(0x00427d20);
    /* 00427d20: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 00427d27: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00427d2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00427d30: mov eax, edi */ r_eax = r_edi;
    /* 00427d32: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00427d35: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00427d3b: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00427d41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427d42: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x427d47u); f_008193cc();
    /* 00427d47: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00427d4e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00427d51: mov dword ptr [edi], 0xaf4178 */ W32((u32)(r_edi), 0xaf4178u);
    /* 00427d57: mov eax, dword ptr [0x9a4310] */ r_eax = R32((u32)(0x9a4310u));
    /* 00427d5c: mov ebx, dword ptr [0xa438bc] */ r_ebx = R32((u32)(0xa438bcu));
    /* 00427d62: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00427d65: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00427d67: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00427d6a: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00427d6d: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 00427d70: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00427d73: mov dword ptr [edi + 0x34], 0xc2000000 */ W32((u32)(r_edi+0x34u), 0xc2000000u);
    /* 00427d7a: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 00427d7d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427d82u); f_008587a5();
    /* 00427d82: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00427d85: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 00427d88: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 00427d8e: fmul dword ptr [0x8fc5b4] */ ST(0) = ST(0) * R_F32((u32)(0x8fc5b4u));
    /* 00427d94: mov eax, edi */ r_eax = r_edi;
    /* 00427d96: fadd dword ptr [0x8fc5bc] */ ST(0) = ST(0) + R_F32((u32)(0x8fc5bcu));
    /* 00427d9c: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00427d9f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427da4u); f_008587a5();
    /* 00427da4: fld dword ptr [0x8fc5b0] */ FPUSH(R_F32((u32)(0x8fc5b0u)));
    /* 00427daa: mov edx, edi */ r_edx = r_edi;
    /* 00427dac: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00427daf: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00427db2: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 00427db8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00427dba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00427dbc: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00427dbf: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00427dc3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427dc8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00427dcb: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00427dce: fistp dword ptr [edx + 0x3c] */ W32((u32)(r_edx+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00427dd1: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00427dd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427dd6: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00427dd9: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00427ddc: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x427de1u); f_00520e6c();
    /* 00427de1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427de3: je 0x427df0 */ if (fZ) goto L_00427df0;
L_00427de5:; BB(0x00427de5);
    /* 00427de5: mov eax, edi */ r_eax = r_edi;
    /* 00427de7: mov dword ptr [eax + 0x48], 1 */ W32((u32)(r_eax+0x48u), 0x1u);
    /* 00427dee: jmp 0x427df9 */ goto L_00427df9;
L_00427df0:; BB(0x00427df0);
    /* 00427df0: mov eax, edi */ r_eax = r_edi;
    /* 00427df2: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00427df9:; BB(0x00427df9);
    /* 00427df9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00427dfb: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00427dfe: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
L_00427e01:; BB(0x00427e01);
    /* 00427e01: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00427e08: jmp 0x427f26 */ goto L_00427f26;
L_00427e0d:; BB(0x00427e0d);
    /* 00427e0d: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00427e17: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e19: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x427e1eu); f_005caba4();
    /* 00427e1e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00427e21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427e24: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00427e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e2c: je 0x427f1f */ if (fZ) goto L_00427f1f;
L_00427e32:; BB(0x00427e32);
    /* 00427e32: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 00427e3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00427e43: mov ecx, eax */ r_ecx = r_eax;
    /* 00427e45: mov eax, edi */ r_eax = r_edi;
    /* 00427e47: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00427e4a: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00427e50: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00427e56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e57: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x427e5cu); f_008193cc();
    /* 00427e5c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00427e63: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00427e66: mov dword ptr [edi], 0xaf4178 */ W32((u32)(r_edi), 0xaf4178u);
    /* 00427e6c: mov eax, dword ptr [0x9a4310] */ r_eax = R32((u32)(0x9a4310u));
    /* 00427e71: mov ebx, dword ptr [0xa438bc] */ r_ebx = R32((u32)(0xa438bcu));
    /* 00427e77: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00427e7a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00427e7c: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00427e7f: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00427e82: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 00427e85: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00427e88: mov dword ptr [edi + 0x34], 0xc2000000 */ W32((u32)(r_edi+0x34u), 0xc2000000u);
    /* 00427e8f: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 00427e92: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427e97u); f_008587a5();
    /* 00427e97: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00427e9a: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00427e9d: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 00427ea3: fmul dword ptr [0x8fc5b4] */ ST(0) = ST(0) * R_F32((u32)(0x8fc5b4u));
    /* 00427ea9: mov eax, edi */ r_eax = r_edi;
    /* 00427eab: fadd dword ptr [0x8fc5bc] */ ST(0) = ST(0) + R_F32((u32)(0x8fc5bcu));
    /* 00427eb1: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00427eb4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427eb9u); f_008587a5();
    /* 00427eb9: fld dword ptr [0x8fc5b0] */ FPUSH(R_F32((u32)(0x8fc5b0u)));
    /* 00427ebf: mov edx, edi */ r_edx = r_edi;
    /* 00427ec1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00427ec4: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00427ec7: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 00427ecd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00427ecf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00427ed1: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00427ed4: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00427ed8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427edd: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00427ee0: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00427ee3: fistp dword ptr [edx + 0x3c] */ W32((u32)(r_edx+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00427ee6: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00427ee9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427eeb: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00427eee: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00427ef1: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x427ef6u); f_00520e6c();
    /* 00427ef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427ef8: je 0x427f05 */ if (fZ) goto L_00427f05;
L_00427efa:; BB(0x00427efa);
    /* 00427efa: mov eax, edi */ r_eax = r_edi;
    /* 00427efc: mov dword ptr [eax + 0x48], 1 */ W32((u32)(r_eax+0x48u), 0x1u);
    /* 00427f03: jmp 0x427f0e */ goto L_00427f0e;
L_00427f05:; BB(0x00427f05);
    /* 00427f05: mov eax, edi */ r_eax = r_edi;
    /* 00427f07: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00427f0e:; BB(0x00427f0e);
    /* 00427f0e: mov dword ptr [eax + 0x4c], 0x1e */ W32((u32)(r_eax+0x4cu), 0x1eu);
    /* 00427f15: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00427f1f:; BB(0x00427f1f);
    /* 00427f1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00427f26:; BB(0x00427f26);
    /* 00427f26: mov eax, dword ptr [0xa438b8] */ r_eax = R32((u32)(0xa438b8u));
    /* 00427f2b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00427f2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00427f2f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x427f34u); f_0082ddd8();
    /* 00427f34: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00427f37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00427f39: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x427f3eu); f_0082dcbc();
    /* 00427f3e: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00427f41: mov eax, dword ptr [0xa438bc] */ r_eax = R32((u32)(0xa438bcu));
    /* 00427f46: fld dword ptr [0x8fc5ac] */ FPUSH(R_F32((u32)(0x8fc5acu)));
    /* 00427f4c: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00427f4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00427f51: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00427f53: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00427f56: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00427f58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427f5a: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00427f5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427f5f: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00427f62: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00427f65: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x427f6au); f_008587a5();
    /* 00427f6a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00427f6d: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00427f70: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 00427f76: fadd dword ptr [0x8fc5a8] */ ST(0) = ST(0) + R_F32((u32)(0x8fc5a8u));
    /* 00427f7c: fmul dword ptr [0x8fc5a4] */ ST(0) = ST(0) * R_F32((u32)(0x8fc5a4u));
    /* 00427f82: fmul dword ptr [0x8fc5a0] */ ST(0) = ST(0) * R_F32((u32)(0x8fc5a0u));
    /* 00427f88: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00427f8b: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00427f8f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427f94: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00427f97: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00427f9a: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00427f9d: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00427fa0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00427fa3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00427fa5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00427fa7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x427facu); f_0082ddd8();
    /* 00427fac: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00427faf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00427fb1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x427fb6u); f_0082dcbc();
    /* 00427fb6: mov edx, dword ptr [0xa438bc] */ r_edx = R32((u32)(0xa438bcu));
    /* 00427fbc: fld dword ptr [0x8fc59c] */ FPUSH(R_F32((u32)(0x8fc59cu)));
    /* 00427fc2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00427fc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427fc6: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00427fc8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00427fcb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00427fcd: fst dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0));
    /* 00427fd0: fsub dword ptr [ebp - 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00427fd3: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00427fda: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427fdc: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00427fdf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00427fe1: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00427fe4: fst dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0));
    /* 00427fe7: fsub dword ptr [ebp - 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00427fea: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00427fed: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00427ff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ff1: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x427ff6u); f_007828e4();
    /* 00427ff6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00427ff8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427ffb: fld dword ptr [0x8fc598] */ FPUSH(R_F32((u32)(0x8fc598u)));
    /* 00428001: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00428004: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428006: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00428009: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042800b: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0042800e: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00428011: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x428016u); f_008587a5();
    /* 00428016: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0042801d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00428020: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00428023: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 00428029: fmul dword ptr [0x8fc590] */ ST(0) = ST(0) * R_F32((u32)(0x8fc590u));
    /* 0042802f: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00428031: fadd dword ptr [0x8fc594] */ ST(0) = ST(0) + R_F32((u32)(0x8fc594u));
    /* 00428037: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0042803a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42803fu); f_005caba4();
    /* 0042803f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00428040: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00428043: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428045: je 0x428073 */ if (fZ) goto L_00428073;
L_00428047:; BB(0x00428047);
    /* 00428047: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0042804e: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00428055: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00428058: lea ebx, [ebp - 0x78] */ r_ebx = (u32)(r_ebp+0xffffff88u);
    /* 0042805b: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 0042805e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428060: mov ecx, eax */ r_ecx = r_eax;
    /* 00428062: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428063: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00428064: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428067: call 0x429400 */ r_esp -= 4; W32(r_esp, 0x42806cu); f_00429400();
    /* 0042806c: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00428073:; BB(0x00428073);
    /* 00428073: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0042807a:; BB(0x0042807a);
    /* 0042807a: mov esi, dword ptr [0xa438c0] */ r_esi = R32((u32)(0xa438c0u));
    /* 00428080: mov edx, dword ptr [0xa438c4] */ r_edx = R32((u32)(0xa438c4u));
    /* 00428086: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00428088:; BB(0x00428088);
    /* 00428088: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042808a: jge 0x428140 */ if ((fS==fO)) goto L_00428140;
L_00428090:; BB(0x00428090);
    /* 00428090: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00428093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428095: jne 0x4280ff */ if (!fZ) goto L_004280ff;
L_00428097:; BB(0x00428097);
    /* 00428097: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0042809a: fcom dword ptr [0x8fc57c] */ fx_compare(ST(0), R_F32((u32)(0x8fc57cu))); 
    /* 004280a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004280a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004280a3: jb 0x4280b5 */ if (fC) goto L_004280b5;
L_004280a5:; BB(0x004280a5);
    /* 004280a5: fld dword ptr [0x8fc58c] */ FPUSH(R_F32((u32)(0x8fc58cu)));
    /* 004280ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004280ad: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004280b0: jmp 0x428135 */ goto L_00428135;
L_004280b5:; BB(0x004280b5);
    /* 004280b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004280b7: mov eax, 0xc1000000 */ r_eax = 0xc1000000u;
    /* 004280bc: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004280bf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4280c4u); f_008587a5();
    /* 004280c4: mov edx, dword ptr [0xa438c4] */ r_edx = R32((u32)(0xa438c4u));
    /* 004280ca: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004280cd: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004280d0: fdiv dword ptr [0x8fc5b8] */ ST(0) = ST(0) / R_F32((u32)(0x8fc5b8u));
    /* 004280d6: fmul dword ptr [0x8fc588] */ ST(0) = ST(0) * R_F32((u32)(0x8fc588u));
    /* 004280dc: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 004280df: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 004280e3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004280e8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004280eb: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004280ee: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004280f1: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004280f4: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004280f7: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004280fa: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 004280fd: jmp 0x428135 */ goto L_00428135;
L_004280ff:; BB(0x004280ff);
    /* 004280ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428102: jne 0x42812f */ if (!fZ) goto L_0042812f;
L_00428104:; BB(0x00428104);
    /* 00428104: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00428107: fcom dword ptr [0x8fc5cc] */ fx_compare(ST(0), R_F32((u32)(0x8fc5ccu))); 
    /* 0042810d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042810f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00428110: jbe 0x428122 */ if ((fC||fZ)) goto L_00428122;
L_00428112:; BB(0x00428112);
    /* 00428112: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00428114: mov dword ptr [esi + 0xc], 0 */ W32((u32)(r_esi+0xcu), 0x0u);
    /* 0042811b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042811d: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00428120: jmp 0x428135 */ goto L_00428135;
L_00428122:; BB(0x00428122);
    /* 00428122: fld dword ptr [0x8fc5a4] */ FPUSH(R_F32((u32)(0x8fc5a4u)));
    /* 00428128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042812a: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0042812d: jmp 0x428135 */ goto L_00428135;
L_0042812f:; BB(0x0042812f);
    /* 0042812f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428132: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_00428135:; BB(0x00428135);
    /* 00428135: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428138: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042813b: jmp 0x428088 */ goto L_00428088;
L_00428140:; BB(0x00428140);
    /* 00428140: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00428143: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428146: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428149: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042814c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00428153: mov esp, ebp */ r_esp = r_ebp;
    /* 00428155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428156: ret  */ FN_RET(0x00427be0); r_esp += 4; return;
L_00428157:; BB(0x00428157);
    /* 00428157: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00428159: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042815c: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0042815f: jmp 0x427c95 */ goto L_00427c95;
}

