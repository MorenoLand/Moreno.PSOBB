#include "protos.h"

void f_00607070(void) /* sub_607070 */
{
    FN_ENTER(0x00607070);
    /* 00607070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00607071: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607074: mov edi, ecx */ r_edi = r_ecx;
    /* 00607076: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00607079: fld dword ptr [edi + 0x360] */ FPUSH(R_F32((u32)(r_edi+0x360u)));
    /* 0060707f: fld dword ptr [0x92f114] */ FPUSH(R_F32((u32)(0x92f114u)));
    /* 00607085: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00607087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00607089: mov dword ptr [edi + 0x38c], edx */ W32((u32)(r_edi+0x38cu), r_edx);
    /* 0060708f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00607091: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00607092: ja 0x6070c3 */ if ((!fC&&!fZ)) goto L_006070c3;
L_00607094:; BB(0x00607094);
    /* 00607094: fld dword ptr [0x92f110] */ FPUSH(R_F32((u32)(0x92f110u)));
    /* 0060709a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0060709c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006070a0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006070a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006070aa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006070ae: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006070b2: fistp dword ptr [edi + 0x3a8] */ W32((u32)(r_edi+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006070b8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006070bc: mov edx, 1 */ r_edx = 0x1u;
    /* 006070c1: jmp 0x6070e5 */ goto L_006070e5;
L_006070c3:; BB(0x006070c3);
    /* 006070c3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006070c5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006070c9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006070ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006070d3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006070d7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006070db: fistp dword ptr [edi + 0x3a8] */ W32((u32)(r_edi+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006070e1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
L_006070e5:; BB(0x006070e5);
    /* 006070e5: fld dword ptr [edi + 0x364] */ FPUSH(R_F32((u32)(r_edi+0x364u)));
    /* 006070eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006070ed: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006070ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006070f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006070f2: ja 0x607128 */ if ((!fC&&!fZ)) goto L_00607128;
L_006070f4:; BB(0x006070f4);
    /* 006070f4: fld dword ptr [0x92f110] */ FPUSH(R_F32((u32)(0x92f110u)));
    /* 006070fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006070fc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00607100: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00607105: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060710a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0060710e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00607112: fistp dword ptr [edi + 0x3ac] */ W32((u32)(r_edi+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00607118: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0060711c: mov dword ptr [edi + 0x394], 1 */ W32((u32)(r_edi+0x394u), 0x1u);
    /* 00607126: jmp 0x60714e */ goto L_0060714e;
L_00607128:; BB(0x00607128);
    /* 00607128: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0060712c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00607131: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607136: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0060713a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0060713e: fistp dword ptr [edi + 0x3ac] */ W32((u32)(r_edi+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00607144: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00607148: mov dword ptr [edi + 0x394], edx */ W32((u32)(r_edi+0x394u), r_edx);
L_0060714e:; BB(0x0060714e);
    /* 0060714e: fld dword ptr [edi + 0x36c] */ FPUSH(R_F32((u32)(r_edi+0x36cu)));
    /* 00607154: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00607158: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0060715d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607162: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00607166: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0060716a: fistp dword ptr [edi + 0x3b0] */ W32((u32)(r_edi+0x3b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00607170: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00607174: fld dword ptr [edi + 0x368] */ FPUSH(R_F32((u32)(r_edi+0x368u)));
    /* 0060717a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0060717e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00607183: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607188: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0060718c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00607190: fistp dword ptr [edi + 0x3b4] */ W32((u32)(r_edi+0x3b4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00607196: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0060719a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0060719e: mov dword ptr [esp], 0x1a001d */ W32((u32)(r_esp), 0x1a001du);
    /* 006071a5: mov dword ptr [esp + 4], 0x92f168 */ W32((u32)(r_esp+0x4u), 0x92f168u);
    /* 006071ad: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071b2u); f_0061cdb0();
    /* 006071b2: fld dword ptr [edi + 0x364] */ FPUSH(R_F32((u32)(r_edi+0x364u)));
    /* 006071b8: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006071bc: mov dword ptr [esp], 0x1a001e */ W32((u32)(r_esp), 0x1a001eu);
    /* 006071c3: mov dword ptr [esp + 4], 0x92f184 */ W32((u32)(r_esp+0x4u), 0x92f184u);
    /* 006071cb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071d0u); f_0061cdb0();
    /* 006071d0: push dword ptr [edi + 0x3b4] */ { u32 v = R32((u32)(r_edi+0x3b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006071d6: push 0x92f1a0 */ { u32 v = 0x92f1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006071db: push 0x1a001f */ { u32 v = 0x1a001fu; r_esp -= 4; W32(r_esp, v); }
    /* 006071e0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071e5u); f_0061cdb0();
    /* 006071e5: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006071eb: push 0x92f1b8 */ { u32 v = 0x92f1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006071f0: push 0x1a0020 */ { u32 v = 0x1a0020u; r_esp -= 4; W32(r_esp, v); }
    /* 006071f5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071fau); f_0061cdb0();
    /* 006071fa: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006071fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006071fe: ret  */ FN_RET(0x00607070); r_esp += 4; return;
}

void f_0060707d(void)
{
    FN_ENTER(0x0060707d);
    /* 0060707d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0060707f: fld dword ptr [0x92f114] */ FPUSH(R_F32((u32)(0x92f114u)));
    /* 00607085: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00607087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00607089: mov dword ptr [edi + 0x38c], edx */ W32((u32)(r_edi+0x38cu), r_edx);
    /* 0060708f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00607091: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00607092: ja 0x6070c3 */ if ((!fC&&!fZ)) goto L_006070c3;
L_00607094:; BB(0x00607094);
    /* 00607094: fld dword ptr [0x92f110] */ FPUSH(R_F32((u32)(0x92f110u)));
    /* 0060709a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0060709c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006070a0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006070a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006070aa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006070ae: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006070b2: fistp dword ptr [edi + 0x3a8] */ W32((u32)(r_edi+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006070b8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006070bc: mov edx, 1 */ r_edx = 0x1u;
    /* 006070c1: jmp 0x6070e5 */ goto L_006070e5;
L_006070c3:; BB(0x006070c3);
    /* 006070c3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006070c5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006070c9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006070ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006070d3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006070d7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006070db: fistp dword ptr [edi + 0x3a8] */ W32((u32)(r_edi+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006070e1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
L_006070e5:; BB(0x006070e5);
    /* 006070e5: fld dword ptr [edi + 0x364] */ FPUSH(R_F32((u32)(r_edi+0x364u)));
    /* 006070eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006070ed: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006070ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006070f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006070f2: ja 0x607128 */ if ((!fC&&!fZ)) goto L_00607128;
L_006070f4:; BB(0x006070f4);
    /* 006070f4: fld dword ptr [0x92f110] */ FPUSH(R_F32((u32)(0x92f110u)));
    /* 006070fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006070fc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00607100: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00607105: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060710a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0060710e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00607112: fistp dword ptr [edi + 0x3ac] */ W32((u32)(r_edi+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00607118: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0060711c: mov dword ptr [edi + 0x394], 1 */ W32((u32)(r_edi+0x394u), 0x1u);
    /* 00607126: jmp 0x60714e */ goto L_0060714e;
L_00607128:; BB(0x00607128);
    /* 00607128: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0060712c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00607131: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607136: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0060713a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0060713e: fistp dword ptr [edi + 0x3ac] */ W32((u32)(r_edi+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00607144: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00607148: mov dword ptr [edi + 0x394], edx */ W32((u32)(r_edi+0x394u), r_edx);
L_0060714e:; BB(0x0060714e);
    /* 0060714e: fld dword ptr [edi + 0x36c] */ FPUSH(R_F32((u32)(r_edi+0x36cu)));
    /* 00607154: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00607158: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0060715d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607162: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00607166: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0060716a: fistp dword ptr [edi + 0x3b0] */ W32((u32)(r_edi+0x3b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00607170: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00607174: fld dword ptr [edi + 0x368] */ FPUSH(R_F32((u32)(r_edi+0x368u)));
    /* 0060717a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0060717e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00607183: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607188: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0060718c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00607190: fistp dword ptr [edi + 0x3b4] */ W32((u32)(r_edi+0x3b4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00607196: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0060719a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0060719e: mov dword ptr [esp], 0x1a001d */ W32((u32)(r_esp), 0x1a001du);
    /* 006071a5: mov dword ptr [esp + 4], 0x92f168 */ W32((u32)(r_esp+0x4u), 0x92f168u);
    /* 006071ad: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071b2u); f_0061cdb0();
    /* 006071b2: fld dword ptr [edi + 0x364] */ FPUSH(R_F32((u32)(r_edi+0x364u)));
    /* 006071b8: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006071bc: mov dword ptr [esp], 0x1a001e */ W32((u32)(r_esp), 0x1a001eu);
    /* 006071c3: mov dword ptr [esp + 4], 0x92f184 */ W32((u32)(r_esp+0x4u), 0x92f184u);
    /* 006071cb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071d0u); f_0061cdb0();
    /* 006071d0: push dword ptr [edi + 0x3b4] */ { u32 v = R32((u32)(r_edi+0x3b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006071d6: push 0x92f1a0 */ { u32 v = 0x92f1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006071db: push 0x1a001f */ { u32 v = 0x1a001fu; r_esp -= 4; W32(r_esp, v); }
    /* 006071e0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071e5u); f_0061cdb0();
    /* 006071e5: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006071eb: push 0x92f1b8 */ { u32 v = 0x92f1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006071f0: push 0x1a0020 */ { u32 v = 0x1a0020u; r_esp -= 4; W32(r_esp, v); }
    /* 006071f5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6071fau); f_0061cdb0();
    /* 006071fa: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006071fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006071fe: ret  */ FN_RET(0x0060707d); r_esp += 4; return;
}

void f_00607200(void) /* sub_607200 */
{
    FN_ENTER(0x00607200);
    /* 00607200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00607201: mov edi, ecx */ r_edi = r_ecx;
    /* 00607203: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0060720a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060720d: je 0x60724d */ if (fZ) goto L_0060724d;
L_0060720f:; BB(0x0060720f);
    /* 0060720f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00607211: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00607213: mov ecx, edi */ r_ecx = r_edi;
    /* 00607215: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x607218u); call_ind(t); }
    /* 00607218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060721a: je 0x60724d */ if (fZ) goto L_0060724d;
L_0060721c:; BB(0x0060721c);
    /* 0060721c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060721e: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 00607224: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00607226: mov ecx, edi */ r_ecx = r_edi;
    /* 00607228: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x60722du); f_007714cc();
    /* 0060722d: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00607234: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00607237: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060723c: je 0x60724f */ if (fZ) goto L_0060724f;
L_0060723e:; BB(0x0060723e);
    /* 0060723e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060723f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x607244u); f_0068d5a8();
    /* 00607244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607246: mov ecx, edi */ r_ecx = r_edi;
    /* 00607248: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x60724du); f_007706b0();
L_0060724d:; BB(0x0060724d);
    /* 0060724d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060724e: ret  */ FN_RET(0x00607200); r_esp += 4; return;
L_0060724f:; BB(0x0060724f);
    /* 0060724f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607251: mov ecx, edi */ r_ecx = r_edi;
    /* 00607253: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x607258u); f_007706b0();
    /* 00607258: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00607259: ret  */ FN_RET(0x00607200); r_esp += 4; return;
}

void f_0060725c(void) /* sub_60725C */
{
    FN_ENTER(0x0060725c);
    /* 0060725c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00607263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607265: je 0x607280 */ if (fZ) goto L_00607280;
L_00607267:; BB(0x00607267);
    /* 00607267: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00607269: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060726b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060726c: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00607273: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 0060727a: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x607280u); call_ind(t); }
L_00607280:; BB(0x00607280);
    /* 00607280: ret  */ FN_RET(0x0060725c); r_esp += 4; return;
}

void f_00607284(void) /* sub_607284 */
{
    FN_ENTER(0x00607284);
    /* 00607284: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0060728b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0060728d: jle 0x607294 */ if ((fZ||fS!=fO)) goto L_00607294;
L_0060728f:; BB(0x0060728f);
    /* 0060728f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00607292: jle 0x6072dc */ if ((fZ||fS!=fO)) goto L_006072dc;
L_00607294:; BB(0x00607294);
    /* 00607294: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 0060729a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060729d: jne 0x6072be */ if (!fZ) goto L_006072be;
L_0060729f:; BB(0x0060729f);
    /* 0060729f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006072a1: mov edx, 2 */ r_edx = 0x2u;
    /* 006072a6: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 006072ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006072af: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 006072b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006072b7: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x6072bdu); call_ind(t); }
    /* 006072bd: ret  */ FN_RET(0x00607284); r_esp += 4; return;
L_006072be:; BB(0x006072be);
    /* 006072be: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006072c0: mov edx, 1 */ r_edx = 0x1u;
    /* 006072c5: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 006072cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006072ce: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 006072d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006072d6: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x6072dcu); call_ind(t); }
L_006072dc:; BB(0x006072dc);
    /* 006072dc: ret  */ FN_RET(0x00607284); r_esp += 4; return;
}

void f_006072e0(void) /* sub_6072E0 */
{
    FN_ENTER(0x006072e0);
    /* 006072e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006072e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006072e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006072e3: mov edi, ecx */ r_edi = r_ecx;
    /* 006072e5: movzx esi, word ptr [esp + 0x10] */ r_esi = (u32)R16((u32)(r_esp+0x10u));
    /* 006072ea: mov eax, dword ptr [edi + 0x3b0] */ r_eax = R32((u32)(r_edi+0x3b0u));
    /* 006072f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006072f2: jle 0x6073ca */ if ((fZ||fS!=fO)) goto L_006073ca;
L_006072f8:; BB(0x006072f8);
    /* 006072f8: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006072fe: je 0x607319 */ if (fZ) goto L_00607319;
L_00607300:; BB(0x00607300);
    /* 00607300: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00607305: mov word ptr [edi + 0x94], ax */ W16((u32)(r_edi+0x94u), (u16)r_eax);
    /* 0060730c: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00607313: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607314: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00607315: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00607316: ret 4 */ FN_RET(0x006072e0); r_esp += 8; return;
L_00607319:; BB(0x00607319);
    /* 00607319: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060731a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x60731fu); f_0068d5a8();
    /* 0060731f: mov ebp, eax */ r_ebp = r_eax;
    /* 00607321: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00607324: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607326: je 0x6073ca */ if (fZ) goto L_006073ca;
L_0060732c:; BB(0x0060732c);
    /* 0060732c: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00607333: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00607336: je 0x6073ca */ if (fZ) goto L_006073ca;
L_0060733c:; BB(0x0060733c);
    /* 0060733c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060733d: mov edx, 3 */ r_edx = 0x3u;
    /* 00607342: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
    /* 00607349: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060734b: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 00607352: mov word ptr [edi + 0x94], si */ W16((u32)(r_edi+0x94u), (u16)r_esi);
    /* 00607359: mov word ptr [edi + 0x340], si */ W16((u32)(r_edi+0x340u), (u16)r_esi);
    /* 00607360: mov ecx, edi */ r_ecx = r_edi;
    /* 00607362: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x607367u); f_007706b0();
    /* 00607367: movzx edx, word ptr [edi + 0x340] */ r_edx = (u32)R16((u32)(r_edi+0x340u));
    /* 0060736e: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607374: jne 0x6073b4 */ if (!fZ) goto L_006073b4;
L_00607376:; BB(0x00607376);
    /* 00607376: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607378: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060737a: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x60737fu); f_006854a8();
    /* 0060737f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607381: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00607383: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x607388u); f_00694c24();
    /* 00607388: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060738a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060738c: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x607391u); f_00694c24();
    /* 00607391: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00607393: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00607395: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x60739au); f_00694c24();
    /* 0060739a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0060739c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060739e: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x6073a3u); f_00694c24();
    /* 006073a3: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6073a8u); f_00717d68();
    /* 006073a8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006073ae: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6073b3u); f_00718078();
    /* 006073b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006073b4:; BB(0x006073b4);
    /* 006073b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006073b6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006073b8: mov ecx, edi */ r_ecx = r_edi;
    /* 006073ba: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x6073c0u); call_ind(t); }
    /* 006073c0: mov dword ptr [edi + 0x2b0], 0 */ W32((u32)(r_edi+0x2b0u), 0x0u);
L_006073ca:; BB(0x006073ca);
    /* 006073ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006073cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006073cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006073cd: ret 4 */ FN_RET(0x006072e0); r_esp += 8; return;
}

void f_006073d0(void) /* sub_6073D0 */
{
    FN_ENTER(0x006073d0);
    /* 006073d0: mov eax, dword ptr [0xa8e4c4] */ r_eax = R32((u32)(0xa8e4c4u));
    /* 006073d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006073d7: je 0x6073ea */ if (fZ) goto L_006073ea;
L_006073d9:; BB(0x006073d9);
    /* 006073d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006073da: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x6073dfu); f_005b9bac();
    /* 006073df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006073e0: mov dword ptr [0xa8e4c4], 0 */ W32((u32)(0xa8e4c4u), 0x0u);
L_006073ea:; BB(0x006073ea);
    /* 006073ea: ret  */ FN_RET(0x006073d0); r_esp += 4; return;
}

void f_00607418(void) /* sub_607418 */
{
    FN_ENTER(0x00607418);
    /* 00607418: push 0x92f1d0 */ { u32 v = 0x92f1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060741d: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x607422u); f_005b9568();
    /* 00607422: mov dword ptr [0xa8e4c4], eax */ W32((u32)(0xa8e4c4u), r_eax);
    /* 00607427: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607428: ret  */ FN_RET(0x00607418); r_esp += 4; return;
}

void f_0060742c(void) /* sub_60742C */
{
    FN_ENTER(0x0060742c);
    /* 0060742c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060742d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060742f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00607431: call 0x607450 */ r_esp -= 4; W32(r_esp, 0x607436u); f_00607450();
    /* 00607436: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060743a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060743c: jne 0x607442 */ if (!fZ) goto L_00607442;
L_0060743e:; BB(0x0060743e);
    /* 0060743e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060743f: ret 4 */ FN_RET(0x0060742c); r_esp += 8; return;
L_00607442:; BB(0x00607442);
    /* 00607442: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00607443: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x607448u); f_005c2f74();
    /* 00607448: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060744a: ret 4 */ FN_RET(0x0060742c); r_esp += 8; return;
}

void f_00607450(void) /* sub_607450 */
{
    FN_ENTER(0x00607450);
    /* 00607450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607451: mov ebp, esp */ r_ebp = r_esp;
    /* 00607453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607455: push 0x8def94 */ { u32 v = 0x8def94u; r_esp -= 4; W32(r_esp, v); }
    /* 0060745a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607461: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607468: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060746b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060746e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00607471: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00607474: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00607477: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060747a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060747d: mov dword ptr [ecx], 0xb1e000 */ W32((u32)(r_ecx), 0xb1e000u);
    /* 00607483: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060748a: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x60748fu); f_00606190();
    /* 0060748f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607492: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607499: mov esp, ebp */ r_esp = r_ebp;
    /* 0060749b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060749c: ret  */ FN_RET(0x00607450); r_esp += 4; return;
}

void f_006074a0(void) /* sub_6074A0 */
{
    FN_ENTER(0x006074a0);
    /* 006074a0: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 006074a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006074aa: jne 0x6074bb */ if (!fZ) goto L_006074bb;
L_006074ac:; BB(0x006074ac);
    /* 006074ac: mov eax, 1 */ r_eax = 0x1u;
    /* 006074b1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006074b8: ret 4 */ FN_RET(0x006074a0); r_esp += 8; return;
L_006074bb:; BB(0x006074bb);
    /* 006074bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006074bd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006074c4: ret 4 */ FN_RET(0x006074a0); r_esp += 8; return;
}

void f_006074c8(void)
{
    FN_ENTER(0x006074c8);
    /* 006074c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006074c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006074cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006074cd: push 0x8defd6 */ { u32 v = 0x8defd6u; r_esp -= 4; W32(r_esp, v); }
    /* 006074d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006074d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006074d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006074e0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006074e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006074e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006074e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006074ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006074ef: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006074f1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006074f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6074fdu); f_005caba4();
    /* 006074fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006074fe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00607501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607503: je 0x60758b */ if (fZ) goto L_0060758b;
L_00607509:; BB(0x00607509);
    /* 00607509: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00607510: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607517: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060751d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607520: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x607525u); f_00787a4c();
    /* 00607525: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607528: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060752f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00607532:; BB(0x00607532);
    /* 00607532: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607539: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00607540: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607545: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60754au); f_005caba4();
    /* 0060754a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060754b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060754e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607550: je 0x607587 */ if (fZ) goto L_00607587;
L_00607552:; BB(0x00607552);
    /* 00607552: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00607559: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00607560: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607563: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00607566: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060756a: call 0x607594 */ r_esp -= 4; W32(r_esp, 0x60756fu); f_00607594();
    /* 0060756f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607572: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00607579:; BB(0x00607579);
    /* 00607579: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060757c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607583: mov esp, ebp */ r_esp = r_ebp;
    /* 00607585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607586: ret  */ FN_RET(0x006074c8); r_esp += 4; return;
L_00607587:; BB(0x00607587);
    /* 00607587: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607589: jmp 0x607579 */ goto L_00607579;
L_0060758b:; BB(0x0060758b);
    /* 0060758b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060758d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00607590: jmp 0x607532 */ goto L_00607532;
}

void f_00607594(void) /* sub_607594 */
{
    FN_ENTER(0x00607594);
    /* 00607594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607595: mov ebp, esp */ r_ebp = r_esp;
    /* 00607597: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607599: push 0x8deff0 */ { u32 v = 0x8deff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060759e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006075a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006075a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006075ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006075af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006075b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006075b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006075b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006075bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006075be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006075c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006075c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006075c7: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x6075ccu); f_00606c28();
    /* 006075cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006075d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006075d6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006075d9: mov dword ptr [ecx], 0xb1e000 */ W32((u32)(r_ecx), 0xb1e000u);
    /* 006075df: mov eax, dword ptr [0x9c3f58] */ r_eax = R32((u32)(0x9c3f58u));
    /* 006075e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006075e5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006075e8: call dword ptr [0xb1e14c] */ { u32 t = R32((u32)(0xb1e14cu)); r_esp -= 4; W32(r_esp, 0x6075eeu); call_ind(t); }
    /* 006075ee: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006075f1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006075f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006075f6: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006075f9: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006075fc: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006075ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607601: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00607607: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060760d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607610: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00607616: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060761c: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 00607622: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00607628: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 0060762e: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00607634: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060763a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060763d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00607643: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00607646: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060764c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060764f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00607655: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00607658: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060765a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x607660u); call_ind(t); }
    /* 00607660: mov ecx, dword ptr [0xa73628] */ r_ecx = R32((u32)(0xa73628u));
    /* 00607666: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607668: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60766du); f_005b8610();
    /* 0060766d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607670: mov ecx, dword ptr [0xa73628] */ r_ecx = R32((u32)(0xa73628u));
    /* 00607676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607678: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060767b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x607680u); f_005b8624();
    /* 00607680: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607683: mov edx, dword ptr [0xa73628] */ r_edx = R32((u32)(0xa73628u));
    /* 00607689: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060768c: movsx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 00607693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607694: push dword ptr [edx + 0x430] */ { u32 v = R32((u32)(r_edx+0x430u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060769a: push 0x9c3f5c */ { u32 v = 0x9c3f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060769f: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x6076a4u); f_007aa624();
    /* 006076a4: push 0x9c3e8c */ { u32 v = 0x9c3e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006076a9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006076ac: mov dword ptr [ecx + 0x358], 0x9c3eb0 */ W32((u32)(r_ecx+0x358u), 0x9c3eb0u);
    /* 006076b6: call 0x771160 */ r_esp -= 4; W32(r_esp, 0x6076bbu); f_00771160();
    /* 006076bb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006076be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006076c0: push 0x9c3f00 */ { u32 v = 0x9c3f00u; r_esp -= 4; W32(r_esp, v); }
    /* 006076c5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6076cau); f_007b9a88();
    /* 006076ca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006076cd: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6076d2u); f_007b4f54();
    /* 006076d2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006076d5: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x6076dau); f_0078730c();
    /* 006076da: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006076dd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006076e0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006076e3: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 006076e9: mov ecx, dword ptr [edi + 0x304] */ r_ecx = R32((u32)(r_edi+0x304u));
    /* 006076ef: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 006076f5: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 006076f8: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 006076fb: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 006076fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607701: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607704: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607707: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060770e: mov esp, ebp */ r_esp = r_ebp;
    /* 00607710: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607711: ret 8 */ FN_RET(0x00607594); r_esp += 12; return;
}

void f_00607714(void) /* sub_607714 */
{
    FN_ENTER(0x00607714);
    /* 00607714: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00607715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00607717: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00607719: call 0x607738 */ r_esp -= 4; W32(r_esp, 0x60771eu); f_00607738();
    /* 0060771e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00607722: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607724: jne 0x60772a */ if (!fZ) goto L_0060772a;
L_00607726:; BB(0x00607726);
    /* 00607726: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00607727: ret 4 */ FN_RET(0x00607714); r_esp += 8; return;
L_0060772a:; BB(0x0060772a);
    /* 0060772a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060772b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x607730u); f_005c2f74();
    /* 00607730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00607732: ret 4 */ FN_RET(0x00607714); r_esp += 8; return;
}

void f_00607738(void) /* sub_607738 */
{
    FN_ENTER(0x00607738);
    /* 00607738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607739: mov ebp, esp */ r_ebp = r_esp;
    /* 0060773b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060773d: push 0x8df00c */ { u32 v = 0x8df00cu; r_esp -= 4; W32(r_esp, v); }
    /* 00607742: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607749: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607750: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607753: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607756: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00607759: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060775c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060775f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00607762: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607765: mov dword ptr [ecx], 0xb1e240 */ W32((u32)(r_ecx), 0xb1e240u);
    /* 0060776b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607772: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x607777u); f_00608fc0();
    /* 00607777: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060777a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607781: mov esp, ebp */ r_esp = r_ebp;
    /* 00607783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607784: ret  */ FN_RET(0x00607738); r_esp += 4; return;
}

void f_00607788(void) /* sub_607788 */
{
    FN_ENTER(0x00607788);
    /* 00607788: fld dword ptr [0x92f1e8] */ FPUSH(R_F32((u32)(0x92f1e8u)));
    /* 0060778e: ret 0x18 */ FN_RET(0x00607788); r_esp += 28; return;
}

void f_00607794(void) /* sub_607794 */
{
    FN_ENTER(0x00607794);
    /* 00607794: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00607795: mov edi, ecx */ r_edi = r_ecx;
    /* 00607797: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x60779cu); f_00807ac0();
    /* 0060779c: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060779f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006077a2: jne 0x6077b5 */ if (!fZ) goto L_006077b5;
L_006077a4:; BB(0x006077a4);
    /* 006077a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006077a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006077a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006077a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006077a9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006077ab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6077b0u); f_00814298();
    /* 006077b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006077b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006077b4: ret  */ FN_RET(0x00607794); r_esp += 4; return;
L_006077b5:; BB(0x006077b5);
    /* 006077b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006077b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006077b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006077b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006077ba: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006077bc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6077c1u); f_00814298();
    /* 006077c1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006077c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006077c5: ret  */ FN_RET(0x00607794); r_esp += 4; return;
}

void f_006077c3(void)
{
    FN_ENTER(0x006077c3);
    /* 006077c3: adc byte ptr [edi - 0x3d], bl */ { u32 ad = (u32)(r_edi+0xffffffc3u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 006077c6: nop  */ ;
    /* 006077c7: nop  */ ;
    /* 006077c8: mov ecx, dword ptr [0xa8e4d0] */ r_ecx = R32((u32)(0xa8e4d0u));
    /* 006077ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006077d0: je 0x6077e5 */ if (fZ) goto L_006077e5;
L_006077d2:; BB(0x006077d2);
    /* 006077d2: je 0x6077db */ if (fZ) goto L_006077db;
L_006077d4:; BB(0x006077d4);
    /* 006077d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006077d6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6077dbu); f_004066a8();
L_006077db:; BB(0x006077db);
    /* 006077db: mov dword ptr [0xa8e4d0], 0 */ W32((u32)(0xa8e4d0u), 0x0u);
L_006077e5:; BB(0x006077e5);
    /* 006077e5: ret  */ FN_RET(0x006077c3); r_esp += 4; return;
}

void f_006077c8(void) /* sub_6077C8 */
{
    FN_ENTER(0x006077c8);
    /* 006077c8: mov ecx, dword ptr [0xa8e4d0] */ r_ecx = R32((u32)(0xa8e4d0u));
    /* 006077ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006077d0: je 0x6077e5 */ if (fZ) goto L_006077e5;
L_006077d2:; BB(0x006077d2);
    /* 006077d2: je 0x6077db */ if (fZ) goto L_006077db;
L_006077d4:; BB(0x006077d4);
    /* 006077d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006077d6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6077dbu); f_004066a8();
L_006077db:; BB(0x006077db);
    /* 006077db: mov dword ptr [0xa8e4d0], 0 */ W32((u32)(0xa8e4d0u), 0x0u);
L_006077e5:; BB(0x006077e5);
    /* 006077e5: ret  */ FN_RET(0x006077c8); r_esp += 4; return;
}

void f_006077e8(void)
{
    FN_ENTER(0x006077e8);
    /* 006077e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006077e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006077eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006077ed: push 0x8df04e */ { u32 v = 0x8df04eu; r_esp -= 4; W32(r_esp, v); }
    /* 006077f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006077f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006077f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607800: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607803: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607806: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00607809: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060780c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060780f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00607811: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00607818: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60781du); f_005caba4();
    /* 0060781d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060781e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00607821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607823: je 0x6078ab */ if (fZ) goto L_006078ab;
L_00607829:; BB(0x00607829);
    /* 00607829: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00607830: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607837: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060783d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607840: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x607845u); f_00787a4c();
    /* 00607845: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607848: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060784f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00607852:; BB(0x00607852);
    /* 00607852: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607859: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00607860: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607865: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60786au); f_005caba4();
    /* 0060786a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060786b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060786e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607870: je 0x6078a7 */ if (fZ) goto L_006078a7;
L_00607872:; BB(0x00607872);
    /* 00607872: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00607879: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00607880: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607883: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00607886: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060788a: call 0x6078b4 */ r_esp -= 4; W32(r_esp, 0x60788fu); f_006078b4();
    /* 0060788f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607892: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00607899:; BB(0x00607899);
    /* 00607899: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060789c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006078a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006078a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006078a6: ret  */ FN_RET(0x006077e8); r_esp += 4; return;
L_006078a7:; BB(0x006078a7);
    /* 006078a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006078a9: jmp 0x607899 */ goto L_00607899;
L_006078ab:; BB(0x006078ab);
    /* 006078ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006078ad: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006078b0: jmp 0x607852 */ goto L_00607852;
}

void f_006078b4(void) /* sub_6078B4 */
{
    FN_ENTER(0x006078b4);
    /* 006078b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006078b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006078b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006078b9: push 0x8df068 */ { u32 v = 0x8df068u; r_esp -= 4; W32(r_esp, v); }
    /* 006078be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006078c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006078c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006078cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006078cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006078d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006078d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006078d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006078db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006078de: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006078e1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006078e4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006078e7: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x6078ecu); f_00609010();
    /* 006078ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006078f3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006078f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006078f9: mov dword ptr [ecx], 0xb1e240 */ W32((u32)(r_ecx), 0xb1e240u);
    /* 006078ff: mov eax, dword ptr [0x9c3f98] */ r_eax = R32((u32)(0x9c3f98u));
    /* 00607904: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00607905: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00607908: call dword ptr [0xb1e38c] */ { u32 t = R32((u32)(0xb1e38cu)); r_esp -= 4; W32(r_esp, 0x60790eu); call_ind(t); }
    /* 0060790e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607911: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00607914: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00607917: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060791a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00607920: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00607926: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607929: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060792f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00607935: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060793b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00607941: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00607947: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060794d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607950: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00607956: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607959: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060795f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00607962: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00607968: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060796b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00607971: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00607974: mov edx, dword ptr [0xa8e4d0] */ r_edx = R32((u32)(0xa8e4d0u));
    /* 0060797a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00607980: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00607983: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00607986: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060798c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060798f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00607992: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x607997u); f_00606bc8();
    /* 00607997: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060799a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060799d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006079a0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006079a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006079a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006079ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006079af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006079b0: ret 8 */ FN_RET(0x006078b4); r_esp += 12; return;
}

void f_006079b4(void) /* sub_6079B4 */
{
    FN_ENTER(0x006079b4);
    /* 006079b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006079b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006079b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006079b9: push 0x8df090 */ { u32 v = 0x8df090u; r_esp -= 4; W32(r_esp, v); }
    /* 006079be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006079c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006079c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006079cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006079cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006079d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006079d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006079d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006079db: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006079e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006079e7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6079ecu); f_008581c5();
    /* 006079ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006079ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006079f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006079f2: je 0x607a33 */ if (fZ) goto L_00607a33;
L_006079f4:; BB(0x006079f4);
    /* 006079f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006079fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607a02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607a05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00607a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607a09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607a0a: push 0x9c3f88 */ { u32 v = 0x9c3f88u; r_esp -= 4; W32(r_esp, v); }
    /* 00607a0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00607a11: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x607a16u); f_005b7a84();
    /* 00607a16: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607a19: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00607a20:; BB(0x00607a20);
    /* 00607a20: mov dword ptr [0xa8e4d0], eax */ W32((u32)(0xa8e4d0u), r_eax);
    /* 00607a25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607a28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607a2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00607a31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607a32: ret  */ FN_RET(0x006079b4); r_esp += 4; return;
L_00607a33:; BB(0x00607a33);
    /* 00607a33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607a35: jmp 0x607a20 */ goto L_00607a20;
}

void f_00607a38(void) /* sub_607A38 */
{
    FN_ENTER(0x00607a38);
    /* 00607a38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00607a39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00607a3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00607a3d: call 0x607a5c */ r_esp -= 4; W32(r_esp, 0x607a42u); f_00607a5c();
    /* 00607a42: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00607a46: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607a48: jne 0x607a4e */ if (!fZ) goto L_00607a4e;
L_00607a4a:; BB(0x00607a4a);
    /* 00607a4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00607a4b: ret 4 */ FN_RET(0x00607a38); r_esp += 8; return;
L_00607a4e:; BB(0x00607a4e);
    /* 00607a4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00607a4f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x607a54u); f_005c2f74();
    /* 00607a54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607a55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00607a56: ret 4 */ FN_RET(0x00607a38); r_esp += 8; return;
}

void f_00607a5c(void) /* sub_607A5C */
{
    FN_ENTER(0x00607a5c);
    /* 00607a5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607a5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00607a5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607a61: push 0x8df0ac */ { u32 v = 0x8df0acu; r_esp -= 4; W32(r_esp, v); }
    /* 00607a66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607a6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607a74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607a77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607a7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00607a7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00607a80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00607a83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00607a86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607a89: mov dword ptr [ecx], 0xb1e480 */ W32((u32)(r_ecx), 0xb1e480u);
    /* 00607a8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607a96: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x607a9bu); f_0060c7e4();
    /* 00607a9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607a9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607aa5: mov esp, ebp */ r_esp = r_ebp;
    /* 00607aa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607aa8: ret  */ FN_RET(0x00607a5c); r_esp += 4; return;
}

void f_00607aac(void) /* sub_607AAC */
{
    FN_ENTER(0x00607aac);
    /* 00607aac: mov ecx, dword ptr [0xa8e4dc] */ r_ecx = R32((u32)(0xa8e4dcu));
    /* 00607ab2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607ab4: je 0x607ac9 */ if (fZ) goto L_00607ac9;
L_00607ab6:; BB(0x00607ab6);
    /* 00607ab6: je 0x607abf */ if (fZ) goto L_00607abf;
L_00607ab8:; BB(0x00607ab8);
    /* 00607ab8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00607aba: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x607abfu); f_004066a8();
L_00607abf:; BB(0x00607abf);
    /* 00607abf: mov dword ptr [0xa8e4dc], 0 */ W32((u32)(0xa8e4dcu), 0x0u);
L_00607ac9:; BB(0x00607ac9);
    /* 00607ac9: ret  */ FN_RET(0x00607aac); r_esp += 4; return;
}

void f_00607acc(void)
{
    FN_ENTER(0x00607acc);
    /* 00607acc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607acd: mov ebp, esp */ r_ebp = r_esp;
    /* 00607acf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607ad1: push 0x8df0ee */ { u32 v = 0x8df0eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00607ad6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607add: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607ae4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607ae7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607aea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00607aed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00607af0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00607af3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00607af5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00607afc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x607b01u); f_005caba4();
    /* 00607b01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607b02: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00607b05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607b07: je 0x607b8f */ if (fZ) goto L_00607b8f;
L_00607b0d:; BB(0x00607b0d);
    /* 00607b0d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00607b14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607b1b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607b21: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607b24: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x607b29u); f_00787a4c();
    /* 00607b29: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607b2c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00607b33: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00607b36:; BB(0x00607b36);
    /* 00607b36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607b3d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00607b44: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607b49: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x607b4eu); f_005caba4();
    /* 00607b4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607b4f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00607b52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607b54: je 0x607b8b */ if (fZ) goto L_00607b8b;
L_00607b56:; BB(0x00607b56);
    /* 00607b56: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00607b5d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00607b64: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607b67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00607b6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607b6e: call 0x607b98 */ r_esp -= 4; W32(r_esp, 0x607b73u); f_00607b98();
    /* 00607b73: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607b76: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00607b7d:; BB(0x00607b7d);
    /* 00607b7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607b80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607b87: mov esp, ebp */ r_esp = r_ebp;
    /* 00607b89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607b8a: ret  */ FN_RET(0x00607acc); r_esp += 4; return;
L_00607b8b:; BB(0x00607b8b);
    /* 00607b8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607b8d: jmp 0x607b7d */ goto L_00607b7d;
L_00607b8f:; BB(0x00607b8f);
    /* 00607b8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00607b91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00607b94: jmp 0x607b36 */ goto L_00607b36;
}

void f_00607b98(void) /* sub_607B98 */
{
    FN_ENTER(0x00607b98);
    /* 00607b98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607b99: mov ebp, esp */ r_ebp = r_esp;
    /* 00607b9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607b9d: push 0x8df108 */ { u32 v = 0x8df108u; r_esp -= 4; W32(r_esp, v); }
    /* 00607ba2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607ba9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607bb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607bb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607bb6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00607bb9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00607bbc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00607bbf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00607bc2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607bc5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00607bc8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00607bcb: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x607bd0u); f_0060c858();
    /* 00607bd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607bd7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607bda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607bdd: mov dword ptr [ecx], 0xb1e480 */ W32((u32)(r_ecx), 0xb1e480u);
    /* 00607be3: mov eax, dword ptr [0x9c40b4] */ r_eax = R32((u32)(0x9c40b4u));
    /* 00607be8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00607be9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00607bec: call dword ptr [0xb1e5cc] */ { u32 t = R32((u32)(0xb1e5ccu)); r_esp -= 4; W32(r_esp, 0x607bf2u); call_ind(t); }
    /* 00607bf2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607bf5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00607bf8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00607bfb: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00607bfe: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00607c04: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00607c0a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607c0d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00607c13: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00607c19: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00607c1f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00607c25: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00607c2b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00607c31: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607c34: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00607c3a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607c3d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00607c43: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00607c46: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00607c4c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00607c4f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00607c55: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00607c58: mov edx, dword ptr [0xa8e4dc] */ r_edx = R32((u32)(0xa8e4dcu));
    /* 00607c5e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00607c64: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00607c67: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00607c6a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00607c70: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00607c73: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00607c76: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x607c7bu); f_00606bc8();
    /* 00607c7b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607c7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607c81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00607c84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00607c87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607c8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607c91: mov esp, ebp */ r_esp = r_ebp;
    /* 00607c93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607c94: ret 8 */ FN_RET(0x00607b98); r_esp += 12; return;
}

void f_00607c98(void) /* sub_607C98 */
{
    FN_ENTER(0x00607c98);
    /* 00607c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607c99: mov ebp, esp */ r_ebp = r_esp;
    /* 00607c9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607c9d: push 0x8df130 */ { u32 v = 0x8df130u; r_esp -= 4; W32(r_esp, v); }
    /* 00607ca2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607ca9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607cb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607cb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607cb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00607cb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00607cbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00607cbf: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 00607cc4: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x607cc9u); f_00827374();
    /* 00607cc9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00607cd0: mov dword ptr [0xa8e4e0], eax */ W32((u32)(0xa8e4e0u), r_eax);
    /* 00607cd5: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00607cda: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x607cdfu); f_008581c5();
    /* 00607cdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607ce0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00607ce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607ce5: je 0x607d2e */ if (fZ) goto L_00607d2e;
L_00607ce7:; BB(0x00607ce7);
    /* 00607ce7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00607cee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607cf5: mov edx, dword ptr [0xa8e4e0] */ r_edx = R32((u32)(0xa8e4e0u));
    /* 00607cfb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607cfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00607d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607d03: push dword ptr [edx*4 + 0x9c408c] */ { u32 v = R32((u32)(r_edx*4+0x9c408cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00607d0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00607d0c: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x607d11u); f_005b7a84();
    /* 00607d11: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607d14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00607d1b:; BB(0x00607d1b);
    /* 00607d1b: mov dword ptr [0xa8e4dc], eax */ W32((u32)(0xa8e4dcu), r_eax);
    /* 00607d20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607d23: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607d2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00607d2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607d2d: ret  */ FN_RET(0x00607c98); r_esp += 4; return;
L_00607d2e:; BB(0x00607d2e);
    /* 00607d2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607d30: jmp 0x607d1b */ goto L_00607d1b;
}

void f_00607d34(void) /* sub_607D34 */
{
    FN_ENTER(0x00607d34);
    /* 00607d34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00607d35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00607d37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00607d39: call 0x607d58 */ r_esp -= 4; W32(r_esp, 0x607d3eu); f_00607d58();
    /* 00607d3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00607d42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607d44: jne 0x607d4a */ if (!fZ) goto L_00607d4a;
L_00607d46:; BB(0x00607d46);
    /* 00607d46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00607d47: ret 4 */ FN_RET(0x00607d34); r_esp += 8; return;
L_00607d4a:; BB(0x00607d4a);
    /* 00607d4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00607d4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x607d50u); f_005c2f74();
    /* 00607d50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607d51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00607d52: ret 4 */ FN_RET(0x00607d34); r_esp += 8; return;
}

void f_00607d58(void) /* sub_607D58 */
{
    FN_ENTER(0x00607d58);
    /* 00607d58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607d59: mov ebp, esp */ r_ebp = r_esp;
    /* 00607d5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607d5d: push 0x8df14c */ { u32 v = 0x8df14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00607d62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607d69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607d70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607d73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607d76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00607d79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00607d7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00607d7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00607d82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607d85: mov dword ptr [ecx], 0xb1e680 */ W32((u32)(r_ecx), 0xb1e680u);
    /* 00607d8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607d92: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x607d97u); f_00606190();
    /* 00607d97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607d9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607da1: mov esp, ebp */ r_esp = r_ebp;
    /* 00607da3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607da4: ret  */ FN_RET(0x00607d58); r_esp += 4; return;
}

void f_00607da8(void) /* sub_607DA8 */
{
    FN_ENTER(0x00607da8);
    /* 00607da8: mov edx, dword ptr [ecx + 0x3c0] */ r_edx = R32((u32)(r_ecx+0x3c0u));
    /* 00607dae: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00607db5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00607db8: jne 0x607dc8 */ if (!fZ) goto L_00607dc8;
L_00607dba:; BB(0x00607dba);
    /* 00607dba: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 00607dbe: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00607dc5: ret 4 */ FN_RET(0x00607da8); r_esp += 8; return;
L_00607dc8:; BB(0x00607dc8);
    /* 00607dc8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00607dcc: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00607dd3: ret 4 */ FN_RET(0x00607da8); r_esp += 8; return;
}

void f_00607dd8(void)
{
    FN_ENTER(0x00607dd8);
    /* 00607dd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607dd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00607ddb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607ddd: push 0x8df18e */ { u32 v = 0x8df18eu; r_esp -= 4; W32(r_esp, v); }
    /* 00607de2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607de9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607df0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607df3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607df6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00607df9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00607dfc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00607dff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00607e01: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00607e08: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x607e0du); f_005caba4();
    /* 00607e0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607e0e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00607e11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607e13: je 0x607e9b */ if (fZ) goto L_00607e9b;
L_00607e19:; BB(0x00607e19);
    /* 00607e19: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00607e20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607e27: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607e2d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607e30: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x607e35u); f_00787a4c();
    /* 00607e35: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00607e38: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00607e3f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00607e42:; BB(0x00607e42);
    /* 00607e42: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00607e49: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00607e50: push 0x3c4 */ { u32 v = 0x3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00607e55: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x607e5au); f_005caba4();
    /* 00607e5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607e5b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00607e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607e60: je 0x607e97 */ if (fZ) goto L_00607e97;
L_00607e62:; BB(0x00607e62);
    /* 00607e62: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00607e69: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00607e70: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607e73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00607e76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607e7a: call 0x607ea4 */ r_esp -= 4; W32(r_esp, 0x607e7fu); f_00607ea4();
    /* 00607e7f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607e82: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00607e89:; BB(0x00607e89);
    /* 00607e89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607e8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607e93: mov esp, ebp */ r_esp = r_ebp;
    /* 00607e95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607e96: ret  */ FN_RET(0x00607dd8); r_esp += 4; return;
L_00607e97:; BB(0x00607e97);
    /* 00607e97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00607e99: jmp 0x607e89 */ goto L_00607e89;
L_00607e9b:; BB(0x00607e9b);
    /* 00607e9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00607e9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00607ea0: jmp 0x607e42 */ goto L_00607e42;
}

void f_00607ea4(void) /* sub_607EA4 */
{
    FN_ENTER(0x00607ea4);
    /* 00607ea4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607ea5: mov ebp, esp */ r_ebp = r_esp;
    /* 00607ea7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607ea9: push 0x8df1a8 */ { u32 v = 0x8df1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00607eae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00607eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607eb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00607ebc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607ebf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00607ec2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00607ec5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00607ec8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00607ecb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00607ece: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607ed1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00607ed4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00607ed7: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x607edcu); f_00606c28();
    /* 00607edc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00607ee3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607ee6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607ee9: mov dword ptr [ecx], 0xb1e680 */ W32((u32)(r_ecx), 0xb1e680u);
    /* 00607eef: mov eax, dword ptr [0x9c40b8] */ r_eax = R32((u32)(0x9c40b8u));
    /* 00607ef4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00607ef5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00607ef8: call dword ptr [0xb1e7cc] */ { u32 t = R32((u32)(0xb1e7ccu)); r_esp -= 4; W32(r_esp, 0x607efeu); call_ind(t); }
    /* 00607efe: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f01: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00607f06: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00607f09: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00607f0c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00607f0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00607f11: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00607f17: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00607f1d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f20: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00607f26: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00607f2c: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 00607f32: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00607f38: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 00607f3e: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00607f44: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00607f4a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f4d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00607f53: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00607f56: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00607f5c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00607f5f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00607f65: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00607f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00607f6a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x607f70u); call_ind(t); }
    /* 00607f70: push 0x9c3e8c */ { u32 v = 0x9c3e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00607f75: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f78: mov dword ptr [ecx + 0x358], 0x9c3eb0 */ W32((u32)(r_ecx+0x358u), 0x9c3eb0u);
    /* 00607f82: call 0x771160 */ r_esp -= 4; W32(r_esp, 0x607f87u); f_00771160();
    /* 00607f87: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00607f8c: push 0x9c40bc */ { u32 v = 0x9c40bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00607f91: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x607f96u); f_007b9a88();
    /* 00607f96: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607f99: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x607f9eu); f_007b4f54();
    /* 00607f9e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607fa1: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x607fa6u); f_0078730c();
    /* 00607fa6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607fa9: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00607faf: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 00607fb5: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00607fbb: mov dword ptr [esi + 0x74], edx */ W32((u32)(r_esi+0x74u), r_edx);
    /* 00607fbe: mov dword ptr [esi + 0x78], ecx */ W32((u32)(r_esi+0x78u), r_ecx);
    /* 00607fc1: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00607fc4: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607fc7: movsx eax, word ptr [ebx + 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x5cu));
    /* 00607fcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00607fcc: call 0x607ffd */ r_esp -= 4; W32(r_esp, 0x607fd1u); f_00607ffd();
    /* 00607fd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00607fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607fd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00607fd5: call 0x608bfc */ r_esp -= 4; W32(r_esp, 0x607fdau); f_00608bfc();
    /* 00607fda: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00607fdd: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00607fe0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00607fe3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00607fe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607fe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00607ff0: mov esp, ebp */ r_esp = r_ebp;
    /* 00607ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607ff3: ret 8 */ FN_RET(0x00607ea4); r_esp += 12; return;
}

void f_00607ffd(void) /* sub_607FFD */
{
    FN_ENTER(0x00607ffd);
    /* 00607ffd: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00608000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00608002: jl 0x60801b */ if ((fS!=fO)) goto L_0060801b;
L_00608004:; BB(0x00608004);
    /* 00608004: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608007: jge 0x60801b */ if ((fS==fO)) goto L_0060801b;
L_00608009:; BB(0x00608009);
    /* 00608009: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060800b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060800d: lea edx, [eax + eax*8 + 0xa8e520] */ r_edx = (u32)(r_eax+r_eax*8+0xa8e520u);
    /* 00608014: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00608017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608019: jne 0x60801e */ if (!fZ) goto L_0060801e;
L_0060801b:; BB(0x0060801b);
    /* 0060801b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060801d: ret  */ FN_RET(0x00607ffd); r_esp += 4; return;
L_0060801e:; BB(0x0060801e);
    /* 0060801e: mov eax, edx */ r_eax = r_edx;
    /* 00608020: ret  */ FN_RET(0x00607ffd); r_esp += 4; return;
}

