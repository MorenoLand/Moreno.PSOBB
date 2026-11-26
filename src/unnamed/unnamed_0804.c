#include "protos.h"

void f_008046b0(void) /* sub_8046B0 */
{
    FN_ENTER(0x008046b0);
    /* 008046b0: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008046b3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008046b7: fld dword ptr [edx*4 + 0xa11418] */ FPUSH(R_F32((u32)(r_edx*4+0xa11418u)));
    /* 008046be: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008046c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008046c5: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 008046cd: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 008046d1: mov dword ptr [esp + 0xc], 4 */ W32((u32)(r_esp+0xcu), 0x4u);
    /* 008046d9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008046dd: mov eax, dword ptr [edx*8 + 0xa113e8] */ r_eax = R32((u32)(r_edx*8+0xa113e8u));
    /* 008046e4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008046e8: mov eax, dword ptr [edx*8 + 0xa113ec] */ r_eax = R32((u32)(r_edx*8+0xa113ecu));
    /* 008046ef: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008046f3: fld dword ptr [edx*8 + 0xa113e8] */ FPUSH(R_F32((u32)(r_edx*8+0xa113e8u)));
    /* 008046fa: fadd dword ptr [edx*8 + 0xa11400] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa11400u));
    /* 00804701: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00804705: mov eax, dword ptr [edx*8 + 0xa113ec] */ r_eax = R32((u32)(r_edx*8+0xa113ecu));
    /* 0080470c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00804710: fld dword ptr [edx*8 + 0xa113e8] */ FPUSH(R_F32((u32)(r_edx*8+0xa113e8u)));
    /* 00804717: fadd dword ptr [edx*8 + 0xa11400] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa11400u));
    /* 0080471e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00804722: fld dword ptr [edx*8 + 0xa113ec] */ FPUSH(R_F32((u32)(r_edx*8+0xa113ecu)));
    /* 00804729: fadd dword ptr [edx*8 + 0xa11404] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa11404u));
    /* 00804730: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00804734: mov eax, dword ptr [edx*8 + 0xa113e8] */ r_eax = R32((u32)(r_edx*8+0xa113e8u));
    /* 0080473b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0080473f: fld dword ptr [edx*8 + 0xa113ec] */ FPUSH(R_F32((u32)(r_edx*8+0xa113ecu)));
    /* 00804746: fadd dword ptr [edx*8 + 0xa11404] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa11404u));
    /* 0080474d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080474f: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00804753: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00804758: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080475d: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00804761: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00804765: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 00804769: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0080476d: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00804771: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00804775: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00804778: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0080477c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00804780: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00804784: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00804788: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x80478du); f_007a9044();
    /* 0080478d: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x804792u); f_0082dbac();
    /* 00804792: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00804795: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00804797: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080479c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080479e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080479f: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x8047a4u); f_0082b5d8();
    /* 008047a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008047a7: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x8047acu); f_0082dab0();
    /* 008047ac: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008047af: ret 4 */ FN_RET(0x008046b0); r_esp += 8; return;
}

void f_008047b4(void) /* sub_8047B4 */
{
    FN_ENTER(0x008047b4);
    /* 008047b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008047b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008047b6: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008047b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008047bb: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 008047bf: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x8047c4u); f_004d28a4();
    /* 008047c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008047c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008047c7: call 0x804844 */ r_esp -= 4; W32(r_esp, 0x8047ccu); f_00804844();
    /* 008047cc: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 008047d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008047d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008047d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008047d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008047d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008047da: lea edx, [eax + eax + 0xaafb00] */ r_edx = (u32)(r_eax+r_eax+0xaafb00u);
    /* 008047e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008047e2: call 0x80499c */ r_esp -= 4; W32(r_esp, 0x8047e7u); f_0080499c();
    /* 008047e7: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008047ee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008047f1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008047f5: mov dword ptr [esp + 4], 0xbf800000 */ W32((u32)(r_esp+0x4u), 0xbf800000u);
    /* 008047fd: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00804805: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0080480d: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00804815: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 0080481d: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00804825: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080482b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080482c: call 0x794a44 */ r_esp -= 4; W32(r_esp, 0x804831u); f_00794a44();
    /* 00804831: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804834: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x804839u); f_0082dbac();
    /* 00804839: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080483c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080483d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080483e: ret 4 */ FN_RET(0x008047b4); r_esp += 8; return;
}

void f_00804844(void) /* sub_804844 */
{
    FN_ENTER(0x00804844);
    /* 00804844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00804845: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00804846: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00804849: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0080484d: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 00804853: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00804859: fld dword ptr [0x97ec84] */ FPUSH(R_F32((u32)(0x97ec84u)));
    /* 0080485f: lea ebp, [edx + edx*4] */ r_ebp = (u32)(r_edx+r_edx*4);
    /* 00804862: fld dword ptr [ebp*4 + 0xa1132c] */ FPUSH(R_F32((u32)(r_ebp*4+0xa1132cu)));
    /* 00804869: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0080486b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080486f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00804874: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804879: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0080487d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00804881: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 00804885: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00804889: fld dword ptr [ebp*4 + 0xa11330] */ FPUSH(R_F32((u32)(r_ebp*4+0xa11330u)));
    /* 00804890: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00804892: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00804896: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080489a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080489f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008048a4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008048a8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008048ac: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 008048b0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008048b4: fld dword ptr [ebp*4 + 0xa11324] */ FPUSH(R_F32((u32)(r_ebp*4+0xa11324u)));
    /* 008048bb: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008048bf: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008048c1: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 008048c5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008048c9: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 008048cd: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008048d1: mov eax, esi */ r_eax = r_esi;
    /* 008048d3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008048d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008048d8: fadd dword ptr [eax*4 + 0x97eb10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97eb10u));
    /* 008048df: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008048e1: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008048e3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008048e5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 008048e9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008048ee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008048f3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008048f7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008048fb: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 008048ff: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00804903: fld dword ptr [ebp*4 + 0xa11328] */ FPUSH(R_F32((u32)(r_ebp*4+0xa11328u)));
    /* 0080490a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0080490c: mov eax, ecx */ r_eax = r_ecx;
    /* 0080490e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00804912: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00804915: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00804917: fadd dword ptr [eax*4 + 0x97eb10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97eb10u));
    /* 0080491e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00804920: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00804922: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00804926: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080492b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804930: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00804934: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00804938: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080493c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00804940: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00804942: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00804946: jbe 0x804955 */ if ((fC||fZ)) goto L_00804955;
L_00804948:; BB(0x00804948);
    /* 00804948: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00804950: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00804953: jmp 0x804962 */ goto L_00804962;
L_00804955:; BB(0x00804955);
    /* 00804955: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0080495c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0080495e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_00804962:; BB(0x00804962);
    /* 00804962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00804964: jbe 0x804974 */ if ((fC||fZ)) goto L_00804974;
L_00804966:; BB(0x00804966);
    /* 00804966: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0080496e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00804972: jmp 0x804982 */ goto L_00804982;
L_00804974:; BB(0x00804974);
    /* 00804974: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0080497c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0080497e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00804982:; BB(0x00804982);
    /* 00804982: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00804986: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0080498a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080498d: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x804992u); f_0082f308();
    /* 00804992: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00804996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00804997: ret 4 */ FN_RET(0x00804844); r_esp += 8; return;
}

void f_0080499c(void) /* sub_80499C */
{
    FN_ENTER(0x0080499c);
    /* 0080499c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080499d: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008049a0: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 008049a4: fld dword ptr [0xa1144c] */ FPUSH(R_F32((u32)(0xa1144cu)));
    /* 008049aa: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008049b1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 008049b6: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 008049be: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 008049c6: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008049c8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008049ca: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 008049ce: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 008049d1: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008049d4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008049d6: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 008049da: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 008049dd: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008049e0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008049e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008049e4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 008049e8: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 008049ec: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 008049f0: fadd dword ptr [edi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x14u));
    /* 008049f3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008049f7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x8049fcu); f_0082d990();
    /* 008049fc: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 008049ff: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00804a01: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00804a07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00804a09: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x804a0eu); f_0082d8bc();
    /* 00804a0e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00804a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804a12: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00804a16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00804a18: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x804a1du); f_0082eab8();
    /* 00804a1d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x804a22u); f_0082da80();
    /* 00804a22: fld dword ptr [0xa11448] */ FPUSH(R_F32((u32)(0xa11448u)));
    /* 00804a28: fmul dword ptr [0x97ec74] */ ST(0) = ST(0) * R_F32((u32)(0x97ec74u));
    /* 00804a2e: fdiv dword ptr [0x97ec70] */ ST(0) = ST(0) / R_F32((u32)(0x97ec70u));
    /* 00804a34: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00804a38: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00804a3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804a42: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00804a46: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00804a4a: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00804a4e: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00804a52: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00804a57: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00804a5c: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 00804a61: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00804a65: call 0x82eea0 */ r_esp -= 4; W32(r_esp, 0x804a6au); f_0082eea0();
    /* 00804a6a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00804a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804a6e: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00804a72: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00804a76: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x804a7bu); f_0082f108();
    /* 00804a7b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804a7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00804a7f: ret 4 */ FN_RET(0x0080499c); r_esp += 8; return;
}

void f_00804a84(void) /* sub_804A84 */
{
    FN_ENTER(0x00804a84);
    /* 00804a84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00804a85: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00804a88: mov edi, ecx */ r_edi = r_ecx;
    /* 00804a8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00804a8c: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 00804a91: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 00804a97: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00804a9a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00804a9e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00804aa2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00804aa6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00804aaa: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00804aae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00804ab1: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x804ab6u); f_0082f308();
    /* 00804ab6: push 0x43700000 */ { u32 v = 0x43700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00804abb: push 0x43a00000 */ { u32 v = 0x43a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00804ac0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x804ac5u); f_0061cdb0();
    /* 00804ac5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804ac8: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00804ace: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00804ad0: call 0x4d4164 */ r_esp -= 4; W32(r_esp, 0x804ad5u); f_004d4164();
    /* 00804ad5: mov ecx, edi */ r_ecx = r_edi;
    /* 00804ad7: call 0x804af0 */ r_esp -= 4; W32(r_esp, 0x804adcu); f_00804af0();
    /* 00804adc: call 0x794a80 */ r_esp -= 4; W32(r_esp, 0x804ae1u); f_00794a80();
    /* 00804ae1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x804ae6u); f_0082dab0();
    /* 00804ae6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804ae9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00804aea: ret 4 */ FN_RET(0x00804a84); r_esp += 8; return;
}

void f_00804af0(void) /* sub_804AF0 */
{
    FN_ENTER(0x00804af0);
    /* 00804af0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00804af3: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 00804af8: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 00804afe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00804b02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00804b04: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00804b07: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00804b0b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00804b0f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00804b13: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00804b17: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00804b1a: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x804b1fu); f_0082f308();
    /* 00804b1f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804b22: ret  */ FN_RET(0x00804af0); r_esp += 4; return;
}

void f_00804b24(void) /* sub_804B24 */
{
    FN_ENTER(0x00804b24);
    /* 00804b24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00804b25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00804b26: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00804b29: mov edi, ecx */ r_edi = r_ecx;
    /* 00804b2b: lea ecx, [edi + 0x90] */ r_ecx = (u32)(r_edi+0x90u);
    /* 00804b31: call 0x804c78 */ r_esp -= 4; W32(r_esp, 0x804b36u); f_00804c78();
    /* 00804b36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804b38: je 0x804c6d */ if (fZ) goto L_00804c6d;
L_00804b3e:; BB(0x00804b3e);
    /* 00804b3e: mov eax, dword ptr [0xaafbf0] */ r_eax = R32((u32)(0xaafbf0u));
    /* 00804b43: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00804b4a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00804b4e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00804b56: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00804b5e: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00804b66: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00804b6e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00804b76: mov dword ptr [esp + 0x1c], 0xa113c0 */ W32((u32)(r_esp+0x1cu), 0xa113c0u);
    /* 00804b7e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x804b83u); f_0082dbac();
    /* 00804b83: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 00804b87: movsx eax, word ptr [0xa113d8] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa113d8u));
    /* 00804b8e: movsx edx, word ptr [0xa113da] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa113dau));
    /* 00804b95: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00804b99: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00804b9d: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00804ba1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00804ba5: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00804ba8: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00804bab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00804bad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00804baf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00804bb1: fadd dword ptr [ecx + 0xa11398] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xa11398u));
    /* 00804bb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00804bba: fadd dword ptr [ecx + 0xa1139c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xa1139cu));
    /* 00804bc0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00804bc4: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x804bc9u); f_007a9044();
    /* 00804bc9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00804bcc: fld dword ptr [edi + 0x19c] */ FPUSH(R_F32((u32)(r_edi+0x19cu)));
    /* 00804bd2: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00804bd6: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00804bdb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804be0: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00804be4: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00804be8: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 00804bec: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00804bf0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00804bf4: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00804bf6: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00804bf9: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804bff: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00804c04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00804c06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00804c07: call 0x819f7c */ r_esp -= 4; W32(r_esp, 0x804c0cu); f_00819f7c();
    /* 00804c0c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804c0f: movsx eax, word ptr [0xa113c4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa113c4u));
    /* 00804c16: movsx edx, word ptr [0xa113c6] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa113c6u));
    /* 00804c1d: mov ecx, dword ptr [edi + 0x174] */ r_ecx = R32((u32)(r_edi+0x174u));
    /* 00804c23: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00804c27: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00804c2b: fadd dword ptr [ebx*8 + 0xa11390] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*8+0xa11390u));
    /* 00804c32: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00804c35: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00804c39: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00804c3d: fadd dword ptr [ebx*8 + 0xa11394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*8+0xa11394u));
    /* 00804c44: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00804c48: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00804c4c: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x804c51u); f_007a902c();
    /* 00804c51: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00804c54: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00804c56: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00804c58: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00804c5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00804c5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804c60: call 0x819f7c */ r_esp -= 4; W32(r_esp, 0x804c65u); f_00819f7c();
    /* 00804c65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804c68: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x804c6du); f_0082dab0();
L_00804c6d:; BB(0x00804c6d);
    /* 00804c6d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00804c71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00804c72: ret 4 */ FN_RET(0x00804b24); r_esp += 8; return;
}

void f_00804b40(void)
{
    FN_ENTER(0x00804b40);
    /* 00804b40: sti  */ UNSUP(0x00804b40, "sti ");
    /* 00804b41: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00804b42: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00804b44: add al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00804b46: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00804b48: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00804b4a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00804b4e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00804b56: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00804b5e: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00804b66: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00804b6e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00804b76: mov dword ptr [esp + 0x1c], 0xa113c0 */ W32((u32)(r_esp+0x1cu), 0xa113c0u);
    /* 00804b7e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x804b83u); f_0082dbac();
    /* 00804b83: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 00804b87: movsx eax, word ptr [0xa113d8] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa113d8u));
    /* 00804b8e: movsx edx, word ptr [0xa113da] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa113dau));
    /* 00804b95: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00804b99: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00804b9d: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00804ba1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00804ba5: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00804ba8: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00804bab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00804bad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00804baf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00804bb1: fadd dword ptr [ecx + 0xa11398] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xa11398u));
    /* 00804bb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00804bba: fadd dword ptr [ecx + 0xa1139c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xa1139cu));
    /* 00804bc0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00804bc4: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x804bc9u); f_007a9044();
    /* 00804bc9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00804bcc: fld dword ptr [edi + 0x19c] */ FPUSH(R_F32((u32)(r_edi+0x19cu)));
    /* 00804bd2: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00804bd6: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00804bdb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804be0: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00804be4: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00804be8: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 00804bec: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00804bf0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00804bf4: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00804bf6: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00804bf9: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00804bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804bff: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00804c04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00804c06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00804c07: call 0x819f7c */ r_esp -= 4; W32(r_esp, 0x804c0cu); f_00819f7c();
    /* 00804c0c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804c0f: movsx eax, word ptr [0xa113c4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa113c4u));
    /* 00804c16: movsx edx, word ptr [0xa113c6] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa113c6u));
    /* 00804c1d: mov ecx, dword ptr [edi + 0x174] */ r_ecx = R32((u32)(r_edi+0x174u));
    /* 00804c23: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00804c27: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00804c2b: fadd dword ptr [ebx*8 + 0xa11390] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*8+0xa11390u));
    /* 00804c32: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00804c35: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00804c39: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00804c3d: fadd dword ptr [ebx*8 + 0xa11394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*8+0xa11394u));
    /* 00804c44: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00804c48: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00804c4c: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x804c51u); f_007a902c();
    /* 00804c51: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00804c54: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00804c56: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00804c58: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00804c5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00804c5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804c60: call 0x819f7c */ r_esp -= 4; W32(r_esp, 0x804c65u); f_00819f7c();
    /* 00804c65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804c68: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x804c6du); f_0082dab0();
    /* 00804c6d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00804c71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00804c72: ret 4 */ FN_RET(0x00804b40); r_esp += 8; return;
}

void f_00804c78(void) /* sub_804C78 */
{
    FN_ENTER(0x00804c78);
    /* 00804c78: mov ecx, dword ptr [0xaafbf0] */ r_ecx = R32((u32)(0xaafbf0u));
    /* 00804c7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804c80: je 0x804c8d */ if (fZ) goto L_00804c8d;
L_00804c82:; BB(0x00804c82);
    /* 00804c82: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x804c87u); f_00829cc8();
    /* 00804c87: mov eax, 1 */ r_eax = 0x1u;
    /* 00804c8c: ret  */ FN_RET(0x00804c78); r_esp += 4; return;
L_00804c8d:; BB(0x00804c8d);
    /* 00804c8d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00804c92: ret  */ FN_RET(0x00804c78); r_esp += 4; return;
}

void f_00804c94(void) /* sub_804C94 */
{
    FN_ENTER(0x00804c94);
    /* 00804c94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00804c95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00804c96: mov ebx, dword ptr [0xaafbdc] */ r_ebx = R32((u32)(0xaafbdcu));
    /* 00804c9c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804c9e: je 0x804cd0 */ if (fZ) goto L_00804cd0;
L_00804ca0:; BB(0x00804ca0);
    /* 00804ca0: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00804ca5: mov ecx, dword ptr [eax*4 + 0xaaf000] */ r_ecx = R32((u32)(r_eax*4+0xaaf000u));
    /* 00804cac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804cae: je 0x804cd0 */ if (fZ) goto L_00804cd0;
L_00804cb0:; BB(0x00804cb0);
    /* 00804cb0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00804cb2: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00804cb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00804cb7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00804cb9: jle 0x804cd0 */ if ((fZ||fS!=fO)) goto L_00804cd0;
L_00804cbb:; BB(0x00804cbb);
    /* 00804cbb: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 00804cbf: mov word ptr [ecx], si */ W16((u32)(r_ecx), (u16)r_esi);
    /* 00804cc2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00804cc5: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00804cc8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00804ccb: cmp eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00804cce: jl 0x804cbb */ if ((fS!=fO)) goto L_00804cbb;
L_00804cd0:; BB(0x00804cd0);
    /* 00804cd0: call 0x804d14 */ r_esp -= 4; W32(r_esp, 0x804cd5u); f_00804d14();
    /* 00804cd5: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00804cda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804cdc: je 0x804cef */ if (fZ) goto L_00804cef;
L_00804cde:; BB(0x00804cde);
    /* 00804cde: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00804ce1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804ce3: je 0x804cef */ if (fZ) goto L_00804cef;
L_00804ce5:; BB(0x00804ce5);
    /* 00804ce5: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x804ceau); f_00829de0();
    /* 00804cea: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
L_00804cef:; BB(0x00804cef);
    /* 00804cef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804cf1: je 0x804d04 */ if (fZ) goto L_00804d04;
L_00804cf3:; BB(0x00804cf3);
    /* 00804cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804cf4: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x804cf9u); f_005b9bac();
    /* 00804cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00804cfa: mov dword ptr [0xaafbdc], 0 */ W32((u32)(0xaafbdcu), 0x0u);
L_00804d04:; BB(0x00804d04);
    /* 00804d04: mov dword ptr [0xaafbd0], 0 */ W32((u32)(0xaafbd0u), 0x0u);
    /* 00804d0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00804d0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00804d10: ret  */ FN_RET(0x00804c94); r_esp += 4; return;
}

void f_00804d14(void) /* sub_804D14 */
{
    FN_ENTER(0x00804d14);
    /* 00804d14: mov ecx, dword ptr [0xaafbf0] */ r_ecx = R32((u32)(0xaafbf0u));
    /* 00804d1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804d1c: je 0x804d39 */ if (fZ) goto L_00804d39;
L_00804d1e:; BB(0x00804d1e);
    /* 00804d1e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x804d23u); f_00829de0();
    /* 00804d23: push dword ptr [0xaafbf0] */ { u32 v = R32((u32)(0xaafbf0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00804d29: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x804d2eu); f_0082e960();
    /* 00804d2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00804d2f: mov dword ptr [0xaafbf0], 0 */ W32((u32)(0xaafbf0u), 0x0u);
L_00804d39:; BB(0x00804d39);
    /* 00804d39: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 00804d3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804d41: je 0x804d56 */ if (fZ) goto L_00804d56;
L_00804d43:; BB(0x00804d43);
    /* 00804d43: je 0x804d4c */ if (fZ) goto L_00804d4c;
L_00804d45:; BB(0x00804d45);
    /* 00804d45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00804d47: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x804d4cu); f_004066a8();
L_00804d4c:; BB(0x00804d4c);
    /* 00804d4c: mov dword ptr [0xaafbf4], 0 */ W32((u32)(0xaafbf4u), 0x0u);
L_00804d56:; BB(0x00804d56);
    /* 00804d56: ret  */ FN_RET(0x00804d14); r_esp += 4; return;
}

void f_00804d58(void) /* sub_804D58 */
{
    FN_ENTER(0x00804d58);
    /* 00804d58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00804d59: mov ecx, dword ptr [0xaafbdc] */ r_ecx = R32((u32)(0xaafbdcu));
    /* 00804d5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804d61: je 0x804d92 */ if (fZ) goto L_00804d92;
L_00804d63:; BB(0x00804d63);
    /* 00804d63: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00804d65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804d67: je 0x804d92 */ if (fZ) goto L_00804d92;
L_00804d69:; BB(0x00804d69);
    /* 00804d69: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00804d6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00804d6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804d70: jle 0x804d92 */ if ((fZ||fS!=fO)) goto L_00804d92;
L_00804d72:; BB(0x00804d72);
    /* 00804d72: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 00804d77: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00804d7a:; BB(0x00804d7a);
    /* 00804d7a: or word ptr [edx + 2], cx */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 00804d7e: mov ebx, dword ptr [0xaafbdc] */ r_ebx = R32((u32)(0xaafbdcu));
    /* 00804d84: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00804d87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00804d8a: cmp eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00804d8d: jl 0x804d7a */ if ((fS!=fO)) goto L_00804d7a;
L_00804d8f:; BB(0x00804d8f);
    /* 00804d8f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00804d92:; BB(0x00804d92);
    /* 00804d92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00804d93: ret  */ FN_RET(0x00804d58); r_esp += 4; return;
}

void f_00804d94(void) /* sub_804D94 */
{
    FN_ENTER(0x00804d94);
    /* 00804d94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00804d95: mov ebp, esp */ r_ebp = r_esp;
    /* 00804d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00804d99: push 0x8f7114 */ { u32 v = 0x8f7114u; r_esp -= 4; W32(r_esp, v); }
    /* 00804d9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00804da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804da5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00804dac: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00804daf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00804db2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00804db5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00804db8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00804dbb: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x804dc0u); f_006dc358();
    /* 00804dc0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804dc3: je 0x80537d */ if (fZ) goto L_0080537d;
L_00804dc9:; BB(0x00804dc9);
    /* 00804dc9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x804dceu); f_006dc358();
    /* 00804dce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804dd1: je 0x8050b5 */ if (fZ) goto L_008050b5;
L_00804dd7:; BB(0x00804dd7);
    /* 00804dd7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00804dde: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00804de3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x804de8u); f_005caba4();
    /* 00804de8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00804deb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804dee: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00804df1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00804df3: je 0x805064 */ if (fZ) goto L_00805064;
L_00804df9:; BB(0x00804df9);
    /* 00804df9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00804e00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00804e07: mov ecx, eax */ r_ecx = r_eax;
    /* 00804e09: mov eax, dword ptr [0xaca32c] */ r_eax = R32((u32)(0xaca32cu));
    /* 00804e0e: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00804e11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804e12: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00804e15: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x804e1au); f_007ba278();
    /* 00804e1a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00804e21: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00804e24: mov dword ptr [edx], 0xb474b8 */ W32((u32)(r_edx), 0xb474b8u);
    /* 00804e2a: mov eax, dword ptr [0xa11320] */ r_eax = R32((u32)(0xa11320u));
    /* 00804e2f: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 00804e35: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00804e37: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00804e3a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x804e3fu); f_005b8610();
    /* 00804e3f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00804e42: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 00804e48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00804e4a: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 00804e50: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x804e55u); f_005b8610();
    /* 00804e55: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00804e58: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 00804e5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00804e60: mov dword ptr [edx + 0x17c], eax */ W32((u32)(r_edx+0x17cu), r_eax);
    /* 00804e66: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x804e6bu); f_005b8610();
    /* 00804e6b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00804e6e: mov dword ptr [edx + 0x180], eax */ W32((u32)(r_edx+0x180u), r_eax);
    /* 00804e74: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00804e76:; BB(0x00804e76);
    /* 00804e76: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00804e79: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00804e7b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00804e7d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00804e80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00804e82: lea edx, [eax + eax + 0xaafb00] */ r_edx = (u32)(r_eax+r_eax+0xaafb00u);
    /* 00804e89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00804e8a: call 0x83a57c */ r_esp -= 4; W32(r_esp, 0x804e8fu); f_0083a57c();
    /* 00804e8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00804e90: mov eax, dword ptr [0xa11460] */ r_eax = R32((u32)(0xa11460u));
    /* 00804e95: mov dword ptr [ebx*8 + 0xaafb04], eax */ W32((u32)(r_ebx*8+0xaafb04u), r_eax);
    /* 00804e9c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00804e9f: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00804ea2: mov dword ptr [ebx*8 + 0xaafb10], 0xbf800000 */ W32((u32)(r_ebx*8+0xaafb10u), 0xbf800000u);
    /* 00804ead: mov dword ptr [ebx*8 + 0xaafb14], 0 */ W32((u32)(r_ebx*8+0xaafb14u), 0x0u);
    /* 00804eb8: mov dword ptr [ebx*8 + 0xaafb18], 0x8000 */ W32((u32)(r_ebx*8+0xaafb18u), 0x8000u);
    /* 00804ec3: jl 0x804e76 */ if ((fS!=fO)) goto L_00804e76;
L_00804ec5:; BB(0x00804ec5);
    /* 00804ec5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00804ec8: mov dword ptr [ecx + 0x150], 0x43fa0000 */ W32((u32)(r_ecx+0x150u), 0x43fa0000u);
    /* 00804ed2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804ed4: mov dword ptr [ecx + 0x9c], ebx */ W32((u32)(r_ecx+0x9cu), r_ebx);
    /* 00804eda: mov dword ptr [ecx + 0x160], 0x44200000 */ W32((u32)(r_ecx+0x160u), 0x44200000u);
    /* 00804ee4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00804ee6: mov dword ptr [ecx + 0x98], esi */ W32((u32)(r_ecx+0x98u), r_esi);
    /* 00804eec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00804eee: mov dword ptr [ecx + 0x164], 0x43f00000 */ W32((u32)(r_ecx+0x164u), 0x43f00000u);
    /* 00804ef8: mov dword ptr [ecx + 0x94], edi */ W32((u32)(r_ecx+0x94u), r_edi);
    /* 00804efe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00804f00: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 00804f06: mov dword ptr [ecx + 0x140], 0x44080000 */ W32((u32)(r_ecx+0x140u), 0x44080000u);
    /* 00804f10: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00804f15: mov word ptr [ecx + 0xaa], ax */ W16((u32)(r_ecx+0xaau), (u16)r_eax);
    /* 00804f1c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804f1e: mov dword ptr [ecx + 0x144], 0x430c0000 */ W32((u32)(r_ecx+0x144u), 0x430c0000u);
    /* 00804f28: mov dword ptr [ecx + 0xc4], ebx */ W32((u32)(r_ecx+0xc4u), r_ebx);
    /* 00804f2e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804f30: mov dword ptr [ecx + 0xc0], ebx */ W32((u32)(r_ecx+0xc0u), r_ebx);
    /* 00804f36: mov dword ptr [ecx + 0xa4], 0x41b00000 */ W32((u32)(r_ecx+0xa4u), 0x41b00000u);
    /* 00804f40: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804f42: mov dword ptr [ecx + 0xbc], ebx */ W32((u32)(r_ecx+0xbcu), r_ebx);
    /* 00804f48: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 00804f4e: mov dword ptr [ecx + 0xcc], 0x41b00000 */ W32((u32)(r_ecx+0xccu), 0x41b00000u);
    /* 00804f58: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00804f5f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804f61: mov dword ptr [ecx + 0xec], ebx */ W32((u32)(r_ecx+0xecu), r_ebx);
    /* 00804f67: mov dword ptr [ecx + 0xf4], 0x41b00000 */ W32((u32)(r_ecx+0xf4u), 0x41b00000u);
    /* 00804f71: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804f73: mov dword ptr [ecx + 0xe8], ebx */ W32((u32)(r_ecx+0xe8u), r_ebx);
    /* 00804f79: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804f7b: mov dword ptr [ecx + 0x11c], 0x41b00000 */ W32((u32)(r_ecx+0x11cu), 0x41b00000u);
    /* 00804f85: mov dword ptr [ecx + 0xe4], ebx */ W32((u32)(r_ecx+0xe4u), r_ebx);
    /* 00804f8b: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 00804f91: mov word ptr [ecx + 0xfa], ax */ W16((u32)(r_ecx+0xfau), (u16)r_eax);
    /* 00804f98: mov dword ptr [ecx + 0x168], 2 */ W32((u32)(r_ecx+0x168u), 0x2u);
    /* 00804fa2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804fa4: mov dword ptr [ecx + 0x114], ebx */ W32((u32)(r_ecx+0x114u), r_ebx);
    /* 00804faa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804fac: mov dword ptr [ecx + 0x90], 0x3c */ W32((u32)(r_ecx+0x90u), 0x3cu);
    /* 00804fb6: mov dword ptr [ecx + 0x110], ebx */ W32((u32)(r_ecx+0x110u), r_ebx);
    /* 00804fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00804fbe: mov dword ptr [ecx + 0x10c], ebx */ W32((u32)(r_ecx+0x10cu), r_ebx);
    /* 00804fc4: mov dword ptr [ecx + 0x118], edx */ W32((u32)(r_ecx+0x118u), r_edx);
    /* 00804fca: mov word ptr [ecx + 0x122], ax */ W16((u32)(r_ecx+0x122u), (u16)r_eax);
    /* 00804fd1: mov eax, dword ptr [0xa11444] */ r_eax = R32((u32)(0xa11444u));
    /* 00804fd6: mov dword ptr [0xaafbe4], edx */ W32((u32)(0xaafbe4u), r_edx);
    /* 00804fdc: mov dword ptr [ecx + 0x134], edx */ W32((u32)(r_ecx+0x134u), r_edx);
    /* 00804fe2: mov dword ptr [0xaafbe0], ecx */ W32((u32)(0xaafbe0u), r_ecx);
    /* 00804fe8: mov dword ptr [ecx + 0x16c], edx */ W32((u32)(r_ecx+0x16cu), r_edx);
    /* 00804fee: mov dword ptr [ecx + 0x170], eax */ W32((u32)(r_ecx+0x170u), r_eax);
    /* 00804ff4: mov dword ptr [ecx + 0x174], edx */ W32((u32)(r_ecx+0x174u), r_edx);
    /* 00804ffa: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00805000: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805002: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 00805008: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 0080500e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805010: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 00805016: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805018: mov dword ptr [ecx + 0x18c], eax */ W32((u32)(r_ecx+0x18cu), r_eax);
    /* 0080501e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805020: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 00805026: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80502bu); f_006dc358();
    /* 0080502b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080502e: je 0x80509c */ if (fZ) goto L_0080509c;
L_00805030:; BB(0x00805030);
    /* 00805030: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00805033: mov dword ptr [eax + 0x194], 0x800810 */ W32((u32)(r_eax+0x194u), 0x800810u);
L_0080503d:; BB(0x0080503d);
    /* 0080503d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x805042u); f_006dc358();
    /* 00805042: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805045: je 0x80508d */ if (fZ) goto L_0080508d;
L_00805047:; BB(0x00805047);
    /* 00805047: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080504a: mov dword ptr [eax + 0x1a0], 0x3f4ccccd */ W32((u32)(r_eax+0x1a0u), 0x3f4ccccdu);
L_00805054:; BB(0x00805054);
    /* 00805054: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00805059: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080505b: je 0x80507b */ if (fZ) goto L_0080507b;
L_0080505d:; BB(0x0080505d);
    /* 0080505d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00805064:; BB(0x00805064);
    /* 00805064: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805067: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080506a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080506d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00805070: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00805077: mov esp, ebp */ r_esp = r_ebp;
    /* 00805079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080507a: ret  */ FN_RET(0x00804d94); r_esp += 4; return;
L_0080507b:; BB(0x0080507b);
    /* 0080507b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080507e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00805082: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805087: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0080508b: jmp 0x80505d */ goto L_0080505d;
L_0080508d:; BB(0x0080508d);
    /* 0080508d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00805090: mov dword ptr [eax + 0x1a0], 0x3f4ccccd */ W32((u32)(r_eax+0x1a0u), 0x3f4ccccdu);
    /* 0080509a: jmp 0x805054 */ goto L_00805054;
L_0080509c:; BB(0x0080509c);
    /* 0080509c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080509f: mov dword ptr [eax + 0x194], 0x800810 */ W32((u32)(r_eax+0x194u), 0x800810u);
    /* 008050a9: mov dword ptr [0xaafbe4], 2 */ W32((u32)(0xaafbe4u), 0x2u);
    /* 008050b3: jmp 0x80503d */ goto L_0080503d;
L_008050b5:; BB(0x008050b5);
    /* 008050b5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 008050bc: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008050c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x8050c6u); f_005caba4();
    /* 008050c6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008050c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008050cc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008050cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008050d1: je 0x805064 */ if (fZ) goto L_00805064;
L_008050d3:; BB(0x008050d3);
    /* 008050d3: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 008050da: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 008050e1: mov ecx, eax */ r_ecx = r_eax;
    /* 008050e3: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 008050e8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 008050eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008050ec: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008050ef: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x8050f4u); f_007ba278();
    /* 008050f4: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 008050fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008050fe: mov dword ptr [edx], 0xb474b8 */ W32((u32)(r_edx), 0xb474b8u);
    /* 00805104: mov eax, dword ptr [0xa11320] */ r_eax = R32((u32)(0xa11320u));
    /* 00805109: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 0080510f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00805111: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00805114: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x805119u); f_005b8610();
    /* 00805119: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080511c: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 00805122: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00805124: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 0080512a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x80512fu); f_005b8610();
    /* 0080512f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00805132: mov ecx, dword ptr [0xaafbf4] */ r_ecx = R32((u32)(0xaafbf4u));
    /* 00805138: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080513a: mov dword ptr [edx + 0x17c], eax */ W32((u32)(r_edx+0x17cu), r_eax);
    /* 00805140: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x805145u); f_005b8610();
    /* 00805145: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00805148: mov dword ptr [edx + 0x180], eax */ W32((u32)(r_edx+0x180u), r_eax);
    /* 0080514e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00805150:; BB(0x00805150);
    /* 00805150: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00805153: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00805155: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00805157: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0080515a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080515c: lea edx, [eax + eax + 0xaafb00] */ r_edx = (u32)(r_eax+r_eax+0xaafb00u);
    /* 00805163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805164: call 0x83a57c */ r_esp -= 4; W32(r_esp, 0x805169u); f_0083a57c();
    /* 00805169: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080516a: mov eax, dword ptr [0xa11460] */ r_eax = R32((u32)(0xa11460u));
    /* 0080516f: mov dword ptr [ebx*8 + 0xaafb04], eax */ W32((u32)(r_ebx*8+0xaafb04u), r_eax);
    /* 00805176: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805179: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080517c: mov dword ptr [ebx*8 + 0xaafb10], 0xbf800000 */ W32((u32)(r_ebx*8+0xaafb10u), 0xbf800000u);
    /* 00805187: mov dword ptr [ebx*8 + 0xaafb14], 0 */ W32((u32)(r_ebx*8+0xaafb14u), 0x0u);
    /* 00805192: mov dword ptr [ebx*8 + 0xaafb18], 0x8000 */ W32((u32)(r_ebx*8+0xaafb18u), 0x8000u);
    /* 0080519d: jl 0x805150 */ if ((fS!=fO)) goto L_00805150;
L_0080519f:; BB(0x0080519f);
    /* 0080519f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008051a2: mov dword ptr [ecx + 0x150], 0x43fa0000 */ W32((u32)(r_ecx+0x150u), 0x43fa0000u);
    /* 008051ac: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008051ae: mov dword ptr [ecx + 0x9c], ebx */ W32((u32)(r_ecx+0x9cu), r_ebx);
    /* 008051b4: mov dword ptr [ecx + 0x160], 0x44200000 */ W32((u32)(r_ecx+0x160u), 0x44200000u);
    /* 008051be: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008051c0: mov dword ptr [ecx + 0x98], esi */ W32((u32)(r_ecx+0x98u), r_esi);
    /* 008051c6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008051c8: mov dword ptr [ecx + 0x164], 0x43f00000 */ W32((u32)(r_ecx+0x164u), 0x43f00000u);
    /* 008051d2: mov dword ptr [ecx + 0x94], edi */ W32((u32)(r_ecx+0x94u), r_edi);
    /* 008051d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008051da: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 008051e0: mov dword ptr [ecx + 0x140], 0x44080000 */ W32((u32)(r_ecx+0x140u), 0x44080000u);
    /* 008051ea: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008051ef: mov word ptr [ecx + 0xaa], ax */ W16((u32)(r_ecx+0xaau), (u16)r_eax);
    /* 008051f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008051f8: mov dword ptr [ecx + 0x144], 0x430c0000 */ W32((u32)(r_ecx+0x144u), 0x430c0000u);
    /* 00805202: mov dword ptr [ecx + 0xc4], ebx */ W32((u32)(r_ecx+0xc4u), r_ebx);
    /* 00805208: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080520a: mov dword ptr [ecx + 0xc0], ebx */ W32((u32)(r_ecx+0xc0u), r_ebx);
    /* 00805210: mov dword ptr [ecx + 0xa4], 0x41b00000 */ W32((u32)(r_ecx+0xa4u), 0x41b00000u);
    /* 0080521a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080521c: mov dword ptr [ecx + 0xbc], ebx */ W32((u32)(r_ecx+0xbcu), r_ebx);
    /* 00805222: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 00805228: mov dword ptr [ecx + 0xcc], 0x41b00000 */ W32((u32)(r_ecx+0xccu), 0x41b00000u);
    /* 00805232: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00805239: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080523b: mov dword ptr [ecx + 0xec], ebx */ W32((u32)(r_ecx+0xecu), r_ebx);
    /* 00805241: mov dword ptr [ecx + 0xf4], 0x41b00000 */ W32((u32)(r_ecx+0xf4u), 0x41b00000u);
    /* 0080524b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080524d: mov dword ptr [ecx + 0xe8], ebx */ W32((u32)(r_ecx+0xe8u), r_ebx);
    /* 00805253: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00805255: mov dword ptr [ecx + 0x11c], 0x41b00000 */ W32((u32)(r_ecx+0x11cu), 0x41b00000u);
    /* 0080525f: mov dword ptr [ecx + 0xe4], ebx */ W32((u32)(r_ecx+0xe4u), r_ebx);
    /* 00805265: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 0080526b: mov word ptr [ecx + 0xfa], ax */ W16((u32)(r_ecx+0xfau), (u16)r_eax);
    /* 00805272: mov dword ptr [ecx + 0x168], 2 */ W32((u32)(r_ecx+0x168u), 0x2u);
    /* 0080527c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080527e: mov dword ptr [ecx + 0x114], ebx */ W32((u32)(r_ecx+0x114u), r_ebx);
    /* 00805284: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00805286: mov dword ptr [ecx + 0x90], 0x3c */ W32((u32)(r_ecx+0x90u), 0x3cu);
    /* 00805290: mov dword ptr [ecx + 0x110], ebx */ W32((u32)(r_ecx+0x110u), r_ebx);
    /* 00805296: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00805298: mov dword ptr [ecx + 0x10c], ebx */ W32((u32)(r_ecx+0x10cu), r_ebx);
    /* 0080529e: mov dword ptr [ecx + 0x118], edx */ W32((u32)(r_ecx+0x118u), r_edx);
    /* 008052a4: mov word ptr [ecx + 0x122], ax */ W16((u32)(r_ecx+0x122u), (u16)r_eax);
    /* 008052ab: mov eax, dword ptr [0xa11444] */ r_eax = R32((u32)(0xa11444u));
    /* 008052b0: mov dword ptr [0xaafbe4], edx */ W32((u32)(0xaafbe4u), r_edx);
    /* 008052b6: mov dword ptr [ecx + 0x134], edx */ W32((u32)(r_ecx+0x134u), r_edx);
    /* 008052bc: mov dword ptr [0xaafbe0], ecx */ W32((u32)(0xaafbe0u), r_ecx);
    /* 008052c2: mov dword ptr [ecx + 0x16c], edx */ W32((u32)(r_ecx+0x16cu), r_edx);
    /* 008052c8: mov dword ptr [ecx + 0x170], eax */ W32((u32)(r_ecx+0x170u), r_eax);
    /* 008052ce: mov dword ptr [ecx + 0x174], edx */ W32((u32)(r_ecx+0x174u), r_edx);
    /* 008052d4: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 008052da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008052dc: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 008052e2: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 008052e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008052ea: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 008052f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008052f2: mov dword ptr [ecx + 0x18c], eax */ W32((u32)(r_ecx+0x18cu), r_eax);
    /* 008052f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008052fa: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 00805300: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x805305u); f_006dc358();
    /* 00805305: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805308: je 0x805364 */ if (fZ) goto L_00805364;
L_0080530a:; BB(0x0080530a);
    /* 0080530a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080530d: mov dword ptr [eax + 0x194], 0x800810 */ W32((u32)(r_eax+0x194u), 0x800810u);
L_00805317:; BB(0x00805317);
    /* 00805317: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80531cu); f_006dc358();
    /* 0080531c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080531f: je 0x805355 */ if (fZ) goto L_00805355;
L_00805321:; BB(0x00805321);
    /* 00805321: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00805324: mov dword ptr [eax + 0x1a0], 0x3f4ccccd */ W32((u32)(r_eax+0x1a0u), 0x3f4ccccdu);
L_0080532e:; BB(0x0080532e);
    /* 0080532e: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00805333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805335: je 0x805343 */ if (fZ) goto L_00805343;
L_00805337:; BB(0x00805337);
    /* 00805337: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0080533e: jmp 0x805064 */ goto L_00805064;
L_00805343:; BB(0x00805343);
    /* 00805343: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00805346: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0080534a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080534f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00805353: jmp 0x805337 */ goto L_00805337;
L_00805355:; BB(0x00805355);
    /* 00805355: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00805358: mov dword ptr [eax + 0x1a0], 0x3f4ccccd */ W32((u32)(r_eax+0x1a0u), 0x3f4ccccdu);
    /* 00805362: jmp 0x80532e */ goto L_0080532e;
L_00805364:; BB(0x00805364);
    /* 00805364: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00805367: mov dword ptr [eax + 0x194], 0x800810 */ W32((u32)(r_eax+0x194u), 0x800810u);
    /* 00805371: mov dword ptr [0xaafbe4], 2 */ W32((u32)(0xaafbe4u), 0x2u);
    /* 0080537b: jmp 0x805317 */ goto L_00805317;
L_0080537d:; BB(0x0080537d);
    /* 0080537d: call 0x78b1e8 */ r_esp -= 4; W32(r_esp, 0x805382u); f_0078b1e8();
    /* 00805382: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00805385: jne 0x804dc9 */ if (!fZ) goto L_00804dc9;
L_0080538b:; BB(0x0080538b);
    /* 0080538b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080538e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00805395: mov esp, ebp */ r_esp = r_ebp;
    /* 00805397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805398: ret  */ FN_RET(0x00804d94); r_esp += 4; return;
}

