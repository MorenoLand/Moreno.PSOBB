#include "protos.h"

void f_00659000(void) /* sub_659000 */
{
    FN_ENTER(0x00659000);
    /* 00659000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659001: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00659002: mov esi, ecx */ r_esi = r_ecx;
    /* 00659004: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065900a: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659010: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00659012: mov ecx, esi */ r_ecx = r_esi;
    /* 00659014: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x659017u); call_ind(t); }
    /* 00659017: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065901a: je 0x65901f */ if (fZ) goto L_0065901f;
L_0065901c:; BB(0x0065901c);
    /* 0065901c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065901d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065901e: ret  */ FN_RET(0x00659000); r_esp += 4; return;
L_0065901f:; BB(0x0065901f);
    /* 0065901f: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 00659025: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659027: jne 0x659070 */ if (!fZ) goto L_00659070;
L_00659029:; BB(0x00659029);
    /* 00659029: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 0065902f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659031: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x659036u); f_005b8624();
    /* 00659036: mov ecx, eax */ r_ecx = r_eax;
    /* 00659038: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65903du); f_00829cc8();
    /* 0065903d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x659042u); f_0082d7b0();
    /* 00659042: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00659045: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65904au); f_0082d838();
    /* 0065904a: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0065904d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065904f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x659054u); f_0082d8bc();
    /* 00659054: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 0065905a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065905c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x659061u); f_005b8610();
    /* 00659061: mov ecx, eax */ r_ecx = r_eax;
    /* 00659063: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x659068u); f_00831758();
    /* 00659068: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65906du); f_0082da80();
    /* 0065906d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065906e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065906f: ret  */ FN_RET(0x00659000); r_esp += 4; return;
L_00659070:; BB(0x00659070);
    /* 00659070: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659073: jne 0x65901c */ if (!fZ) goto L_0065901c;
L_00659075:; BB(0x00659075);
    /* 00659075: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 0065907b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065907d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x659082u); f_005b8624();
    /* 00659082: mov ecx, eax */ r_ecx = r_eax;
    /* 00659084: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x659089u); f_00829cc8();
    /* 00659089: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65908eu); f_0082d7b0();
    /* 0065908e: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00659091: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x659096u); f_0082d838();
    /* 00659096: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00659099: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065909b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6590a0u); f_0082d8bc();
    /* 006590a0: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 006590a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006590a8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6590adu); f_005b8610();
    /* 006590ad: mov edi, eax */ r_edi = r_eax;
    /* 006590af: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 006590b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006590b7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6590bcu); f_005b8638();
    /* 006590bc: push dword ptr [esi + 0xe8] */ { u32 v = R32((u32)(r_esi+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006590c2: mov ecx, edi */ r_ecx = r_edi;
    /* 006590c4: mov edx, eax */ r_edx = r_eax;
    /* 006590c6: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6590cbu); f_0083bd00();
    /* 006590cb: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6590d0u); f_0082dbac();
    /* 006590d0: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 006590d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006590d8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6590ddu); f_005b8610();
    /* 006590dd: mov edi, eax */ r_edi = r_eax;
    /* 006590df: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 006590e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006590e7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6590ecu); f_005b8638();
    /* 006590ec: push dword ptr [esi + 0xec] */ { u32 v = R32((u32)(r_esi+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 006590f2: mov ecx, edi */ r_ecx = r_edi;
    /* 006590f4: mov edx, eax */ r_edx = r_eax;
    /* 006590f6: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6590fbu); f_0083bd00();
    /* 006590fb: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x659100u); f_0082dab0();
    /* 00659100: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x659105u); f_0082da80();
    /* 00659105: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659106: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659107: ret  */ FN_RET(0x00659000); r_esp += 4; return;
}

void f_00659108(void) /* sub_659108 */
{
    FN_ENTER(0x00659108);
    /* 00659108: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0065910e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00659110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00659112: jg 0x659116 */ if ((!fZ&&fS==fO)) goto L_00659116;
L_00659114:; BB(0x00659114);
    /* 00659114: mov eax, edx */ r_eax = r_edx;
L_00659116:; BB(0x00659116);
    /* 00659116: mov edx, 2 */ r_edx = 0x2u;
    /* 0065911b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065911e: jl 0x659122 */ if ((fS!=fO)) goto L_00659122;
L_00659120:; BB(0x00659120);
    /* 00659120: mov eax, edx */ r_eax = r_edx;
L_00659122:; BB(0x00659122);
    /* 00659122: push dword ptr [eax*4 + 0x937b60] */ { u32 v = R32((u32)(r_eax*4+0x937b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659129: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0065912f: push 0x937d84 */ { u32 v = 0x937d84u; r_esp -= 4; W32(r_esp, v); }
    /* 00659134: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00659139: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65913eu); f_0061cdb0();
    /* 0065913e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659141: ret  */ FN_RET(0x00659108); r_esp += 4; return;
}

void f_00659144(void) /* sub_659144 */
{
    FN_ENTER(0x00659144);
    /* 00659144: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00659145: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659146: mov esi, ecx */ r_esi = r_ecx;
    /* 00659148: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0065914e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659151: je 0x6591a0 */ if (fZ) goto L_006591a0;
L_00659153:; BB(0x00659153);
    /* 00659153: mov ebp, dword ptr [esi + 0xd4] */ r_ebp = R32((u32)(r_esi+0xd4u));
    /* 00659159: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 0065915f: push dword ptr [eax*4 + 0x937b60] */ { u32 v = R32((u32)(r_eax*4+0x937b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659166: push dword ptr [0xa9cd68] */ { u32 v = R32((u32)(0xa9cd68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065916c: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x659171u); f_006bb450();
    /* 00659171: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659176: je 0x659189 */ if (fZ) goto L_00659189;
L_00659178:; BB(0x00659178);
    /* 00659178: mov dword ptr [esi + 0xd4], 1 */ W32((u32)(r_esi+0xd4u), 0x1u);
    /* 00659182: mov eax, 1 */ r_eax = 0x1u;
    /* 00659187: jmp 0x659195 */ goto L_00659195;
L_00659189:; BB(0x00659189);
    /* 00659189: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 00659193: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00659195:; BB(0x00659195);
    /* 00659195: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659197: je 0x6591a0 */ if (fZ) goto L_006591a0;
L_00659199:; BB(0x00659199);
    /* 00659199: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0065919b: mov ecx, esi */ r_ecx = r_esi;
    /* 0065919d: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6591a0u); call_ind(t); }
L_006591a0:; BB(0x006591a0);
    /* 006591a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006591a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006591a2: ret  */ FN_RET(0x00659144); r_esp += 4; return;
}

void f_006591a4(void) /* sub_6591A4 */
{
    FN_ENTER(0x006591a4);
    /* 006591a4: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 006591aa: push dword ptr [eax*4 + 0x937b60] */ { u32 v = R32((u32)(r_eax*4+0x937b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006591b1: push dword ptr [0xa9cd68] */ { u32 v = R32((u32)(0xa9cd68u)); r_esp -= 4; W32(r_esp, v); }
    /* 006591b7: call 0x6bb2dc */ r_esp -= 4; W32(r_esp, 0x6591bcu); f_006bb2dc();
    /* 006591bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006591bf: ret  */ FN_RET(0x006591a4); r_esp += 4; return;
}

void f_006591c0(void) /* sub_6591C0 */
{
    FN_ENTER(0x006591c0);
    /* 006591c0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006591c2: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x6591c5u); call_ind(t); }
    /* 006591c5: ret  */ FN_RET(0x006591c0); r_esp += 4; return;
}

void f_006591c8(void) /* sub_6591C8 */
{
    FN_ENTER(0x006591c8);
    /* 006591c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006591c9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006591cc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006591ce: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 006591d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006591d6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6591dbu); f_005b8638();
    /* 006591db: fld dword ptr [0x937cfc] */ FPUSH(R_F32((u32)(0x937cfcu)));
    /* 006591e1: fadd dword ptr [ebp + 0xe8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xe8u));
    /* 006591e7: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 006591ed: fst dword ptr [ebp + 0xe8] */ W_F32((u32)(r_ebp+0xe8u), ST(0));
    /* 006591f3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006591f6: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006591f9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006591fc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006591ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659201: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00659204: fadd dword ptr [edx*4 + 0x937cf0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937cf0u));
    /* 0065920b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065920d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065920f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659210: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00659212: jb 0x659216 */ if (fC) goto L_00659216;
L_00659214:; BB(0x00659214);
    /* 00659214: fst st(1) */ ST(1) = ST(0);
L_00659216:; BB(0x00659216);
    /* 00659216: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00659218: fstp dword ptr [ebp + 0xe8] */ W_F32((u32)(r_ebp+0xe8u), ST(0)); FPOP();
    /* 0065921e: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x659223u); f_005b8638();
    /* 00659223: fld dword ptr [0x937cf8] */ FPUSH(R_F32((u32)(0x937cf8u)));
    /* 00659229: fadd dword ptr [ebp + 0xec] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xecu));
    /* 0065922f: fst dword ptr [ebp + 0xec] */ W_F32((u32)(r_ebp+0xecu), ST(0));
    /* 00659235: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00659238: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065923b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0065923f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00659243: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00659246: fadd dword ptr [edx*4 + 0x937cf0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937cf0u));
    /* 0065924d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065924f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659251: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659252: jae 0x65925e */ if (!fC) goto L_0065925e;
L_00659254:; BB(0x00659254);
    /* 00659254: mov dword ptr [ebp + 0xec], 0 */ W32((u32)(r_ebp+0xecu), 0x0u);
L_0065925e:; BB(0x0065925e);
    /* 0065925e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659262: ret  */ FN_RET(0x006591c8); r_esp += 4; return;
}

void f_00659264(void) /* sub_659264 */
{
    FN_ENTER(0x00659264);
    /* 00659264: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659265: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659266: mov edi, ecx */ r_edi = r_ecx;
    /* 00659268: mov ebx, 0x4ce */ r_ebx = 0x4ceu;
    /* 0065926d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x659272u); f_00807ac0();
    /* 00659272: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659275: jne 0x65927e */ if (!fZ) goto L_0065927e;
L_00659277:; BB(0x00659277);
    /* 00659277: mov ebx, 0x53b */ r_ebx = 0x53bu;
    /* 0065927c: jmp 0x659288 */ goto L_00659288;
L_0065927e:; BB(0x0065927e);
    /* 0065927e: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659281: jne 0x659288 */ if (!fZ) goto L_00659288;
L_00659283:; BB(0x00659283);
    /* 00659283: mov ebx, 0x517 */ r_ebx = 0x517u;
L_00659288:; BB(0x00659288);
    /* 00659288: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065928b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065928d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065928e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065928f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659291: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x659296u); f_00814298();
    /* 00659296: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659299: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065929a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065929b: ret  */ FN_RET(0x00659264); r_esp += 4; return;
}

void f_0065929c(void) /* sub_65929C */
{
    FN_ENTER(0x0065929c);
    /* 0065929c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065929d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065929f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006592a1: push 0x8e7160 */ { u32 v = 0x8e7160u; r_esp -= 4; W32(r_esp, v); }
    /* 006592a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006592ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006592ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006592b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006592b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006592ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006592bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006592c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006592c3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006592c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006592cf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6592d4u); f_008581c5();
    /* 006592d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006592d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006592d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006592da: je 0x65931b */ if (fZ) goto L_0065931b;
L_006592dc:; BB(0x006592dc);
    /* 006592dc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006592e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006592ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006592ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006592ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006592f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006592f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006592f2: push 0x9c7df8 */ { u32 v = 0x9c7df8u; r_esp -= 4; W32(r_esp, v); }
    /* 006592f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006592f9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6592feu); f_005b7a84();
    /* 006592fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659301: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00659308:; BB(0x00659308);
    /* 00659308: mov dword ptr [0xa8f80c], eax */ W32((u32)(0xa8f80cu), r_eax);
    /* 0065930d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659310: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659317: mov esp, ebp */ r_esp = r_ebp;
    /* 00659319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065931a: ret  */ FN_RET(0x0065929c); r_esp += 4; return;
L_0065931b:; BB(0x0065931b);
    /* 0065931b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065931d: jmp 0x659308 */ goto L_00659308;
}

void f_00659320(void) /* sub_659320 */
{
    FN_ENTER(0x00659320);
    /* 00659320: mov dword ptr [0xa8f814], 0x3f800000 */ W32((u32)(0xa8f814u), 0x3f800000u);
    /* 0065932a: mov dword ptr [0xa8f818], 0x41000000 */ W32((u32)(0xa8f818u), 0x41000000u);
    /* 00659334: mov dword ptr [0xa8f81c], 0x3fc00000 */ W32((u32)(0xa8f81cu), 0x3fc00000u);
    /* 0065933e: ret  */ FN_RET(0x00659320); r_esp += 4; return;
}

void f_00659340(void) /* sub_659340 */
{
    FN_ENTER(0x00659340);
    /* 00659340: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659341: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00659343: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00659345: call 0x659364 */ r_esp -= 4; W32(r_esp, 0x65934au); f_00659364();
    /* 0065934a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065934e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659350: jne 0x659356 */ if (!fZ) goto L_00659356;
L_00659352:; BB(0x00659352);
    /* 00659352: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659353: ret 4 */ FN_RET(0x00659340); r_esp += 8; return;
L_00659356:; BB(0x00659356);
    /* 00659356: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659357: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65935cu); f_005c2f74();
    /* 0065935c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065935d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065935e: ret 4 */ FN_RET(0x00659340); r_esp += 8; return;
}

void f_00659364(void) /* sub_659364 */
{
    FN_ENTER(0x00659364);
    /* 00659364: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659365: mov ebp, esp */ r_ebp = r_esp;
    /* 00659367: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659369: push 0x8e717c */ { u32 v = 0x8e717cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065936e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659375: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065937c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065937f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659382: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00659385: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00659388: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065938b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065938e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659391: mov dword ptr [ecx], 0xb32748 */ W32((u32)(r_ecx), 0xb32748u);
    /* 00659397: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065939e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6593a3u); f_007ba1f0();
    /* 006593a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006593a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006593ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006593af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006593b0: ret  */ FN_RET(0x00659364); r_esp += 4; return;
}

void f_006593b4(void) /* sub_6593B4 */
{
    FN_ENTER(0x006593b4);
    /* 006593b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006593b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006593b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006593b9: call 0x6593d8 */ r_esp -= 4; W32(r_esp, 0x6593beu); f_006593d8();
    /* 006593be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006593c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006593c4: jne 0x6593ca */ if (!fZ) goto L_006593ca;
L_006593c6:; BB(0x006593c6);
    /* 006593c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006593c7: ret 4 */ FN_RET(0x006593b4); r_esp += 8; return;
L_006593ca:; BB(0x006593ca);
    /* 006593ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006593cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6593d0u); f_005c2f74();
    /* 006593d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006593d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006593d2: ret 4 */ FN_RET(0x006593b4); r_esp += 8; return;
}

void f_006593d8(void) /* sub_6593D8 */
{
    FN_ENTER(0x006593d8);
    /* 006593d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006593d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006593db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006593dd: push 0x8e7198 */ { u32 v = 0x8e7198u; r_esp -= 4; W32(r_esp, v); }
    /* 006593e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006593e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006593e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006593f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006593f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006593f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006593f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006593fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006593ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00659402: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659405: mov dword ptr [ecx], 0xb32774 */ W32((u32)(r_ecx), 0xb32774u);
    /* 0065940b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00659412: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x659417u); f_007ba1f0();
    /* 00659417: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065941a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659421: mov esp, ebp */ r_esp = r_ebp;
    /* 00659423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659424: ret  */ FN_RET(0x006593d8); r_esp += 4; return;
}

void f_00659428(void) /* sub_659428 */
{
    FN_ENTER(0x00659428);
    /* 00659428: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659429: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065942b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065942d: call 0x65944c */ r_esp -= 4; W32(r_esp, 0x659432u); f_0065944c();
    /* 00659432: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00659436: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659438: jne 0x65943e */ if (!fZ) goto L_0065943e;
L_0065943a:; BB(0x0065943a);
    /* 0065943a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065943b: ret 4 */ FN_RET(0x00659428); r_esp += 8; return;
L_0065943e:; BB(0x0065943e);
    /* 0065943e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065943f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x659444u); f_005c2f74();
    /* 00659444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659445: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659446: ret 4 */ FN_RET(0x00659428); r_esp += 8; return;
}

void f_0065944c(void) /* sub_65944C */
{
    FN_ENTER(0x0065944c);
    /* 0065944c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065944d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065944f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659451: push 0x8e71b4 */ { u32 v = 0x8e71b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00659456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065945c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065945d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659464: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065946a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065946d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00659470: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00659473: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00659476: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659479: mov dword ptr [ecx], 0xb327a0 */ W32((u32)(r_ecx), 0xb327a0u);
    /* 0065947f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00659486: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x65948bu); f_007ba1f0();
    /* 0065948b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065948e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659495: mov esp, ebp */ r_esp = r_ebp;
    /* 00659497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659498: ret  */ FN_RET(0x0065944c); r_esp += 4; return;
}

void f_0065949c(void) /* sub_65949C */
{
    FN_ENTER(0x0065949c);
    /* 0065949c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065949d: mov edi, ecx */ r_edi = r_ecx;
    /* 0065949f: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 006594a5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006594a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006594a8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006594ab: mov ecx, edi */ r_ecx = r_edi;
    /* 006594ad: call 0x659514 */ r_esp -= 4; W32(r_esp, 0x6594b2u); f_00659514();
    /* 006594b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006594b4: je 0x65950f */ if (fZ) goto L_0065950f;
L_006594b6:; BB(0x006594b6);
    /* 006594b6: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006594bc: mov ecx, edi */ r_ecx = r_edi;
    /* 006594be: call 0x659544 */ r_esp -= 4; W32(r_esp, 0x6594c3u); f_00659544();
    /* 006594c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006594c5: je 0x65950f */ if (fZ) goto L_0065950f;
L_006594c7:; BB(0x006594c7);
    /* 006594c7: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 006594cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006594cf: je 0x65950f */ if (fZ) goto L_0065950f;
L_006594d1:; BB(0x006594d1);
    /* 006594d1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006594d4: jne 0x6594ef */ if (!fZ) goto L_006594ef;
L_006594d6:; BB(0x006594d6);
    /* 006594d6: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 006594d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006594db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006594dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006594dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006594de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006594df: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006594e5: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6594eau); f_008144b0();
    /* 006594ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006594ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006594ee: ret  */ FN_RET(0x0065949c); r_esp += 4; return;
L_006594ef:; BB(0x006594ef);
    /* 006594ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006594f2: jne 0x65950f */ if (!fZ) goto L_0065950f;
L_006594f4:; BB(0x006594f4);
    /* 006594f4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006594f6: push dword ptr [edi + 0x94] */ { u32 v = R32((u32)(r_edi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 006594fc: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 006594ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659500: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659501: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659507: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x65950cu); f_008144b0();
    /* 0065950c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0065950f:; BB(0x0065950f);
    /* 0065950f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659510: ret  */ FN_RET(0x0065949c); r_esp += 4; return;
}

void f_00659514(void) /* sub_659514 */
{
    FN_ENTER(0x00659514);
    /* 00659514: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00659519: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065951e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659521: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659523: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x659528u); f_0078ea2c();
    /* 00659528: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0065952b: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0065952f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659531: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659532: jae 0x65953c */ if (!fC) goto L_0065953c;
L_00659534:; BB(0x00659534);
    /* 00659534: mov eax, 1 */ r_eax = 0x1u;
    /* 00659539: ret 4 */ FN_RET(0x00659514); r_esp += 8; return;
L_0065953c:; BB(0x0065953c);
    /* 0065953c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065953e: ret 4 */ FN_RET(0x00659514); r_esp += 8; return;
}

void f_00659544(void) /* sub_659544 */
{
    FN_ENTER(0x00659544);
    /* 00659544: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x659549u); f_006dc358();
    /* 00659549: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065954c: je 0x659556 */ if (fZ) goto L_00659556;
L_0065954e:; BB(0x0065954e);
    /* 0065954e: mov eax, 1 */ r_eax = 0x1u;
    /* 00659553: ret 4 */ FN_RET(0x00659544); r_esp += 8; return;
L_00659556:; BB(0x00659556);
    /* 00659556: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65955bu); f_00807ac0();
    /* 0065955b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065955e: jne 0x65954e */ if (!fZ) goto L_0065954e;
L_00659560:; BB(0x00659560);
    /* 00659560: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00659564: cmp eax, 0x425 */ {  u32 a = r_eax; u32 b = 0x425u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659569: jl 0x65954e */ if ((fS!=fO)) goto L_0065954e;
L_0065956b:; BB(0x0065956b);
    /* 0065956b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0065956f: cmp eax, 0x426 */ {  u32 a = r_eax; u32 b = 0x426u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659574: jg 0x65954e */ if ((!fZ&&fS==fO)) goto L_0065954e;
L_00659576:; BB(0x00659576);
    /* 00659576: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659578: ret 4 */ FN_RET(0x00659544); r_esp += 8; return;
}

void f_0065957c(void) /* sub_65957C */
{
    FN_ENTER(0x0065957c);
    /* 0065957c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065957d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065957e: mov edi, ecx */ r_edi = r_ecx;
    /* 00659580: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x659585u); f_00807ac0();
    /* 00659585: mov esi, dword ptr [eax*8 + 0x937fc0] */ r_esi = R32((u32)(r_eax*8+0x937fc0u));
    /* 0065958c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065958e: je 0x659632 */ if (fZ) goto L_00659632;
L_00659594:; BB(0x00659594);
    /* 00659594: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 0065959a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0065959c: jge 0x6595a2 */ if ((fS==fO)) goto L_006595a2;
L_0065959e:; BB(0x0065959e);
    /* 0065959e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006595a0: jmp 0x6595ca */ goto L_006595ca;
L_006595a2:; BB(0x006595a2);
    /* 006595a2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6595a7u); f_00807ac0();
    /* 006595a7: mov eax, dword ptr [eax*8 + 0x937fc4] */ r_eax = R32((u32)(r_eax*8+0x937fc4u));
    /* 006595ae: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 006595b4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006595b7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006595b9: jl 0x6595ca */ if ((fS!=fO)) goto L_006595ca;
L_006595bb:; BB(0x006595bb);
    /* 006595bb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6595c0u); f_00807ac0();
    /* 006595c0: mov edx, dword ptr [eax*8 + 0x937fc4] */ r_edx = R32((u32)(r_eax*8+0x937fc4u));
    /* 006595c7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006595ca:; BB(0x006595ca);
    /* 006595ca: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 006595cd: mov dword ptr [edi + 0x84], edx */ W32((u32)(r_edi+0x84u), r_edx);
    /* 006595d3: mov eax, dword ptr [esi + edx*8] */ r_eax = R32((u32)(r_esi+r_edx*8));
    /* 006595d6: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 006595dc: fcomp dword ptr [0x938168] */ fx_compare(ST(0), R_F32((u32)(0x938168u))); FPOP();
    /* 006595e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006595e4: mov edx, dword ptr [esi + edx*8 + 4] */ r_edx = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 006595e8: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 006595ee: mov edx, dword ptr [edi + 0x70] */ r_edx = R32((u32)(r_edi+0x70u));
    /* 006595f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006595f2: ja 0x659600 */ if ((!fC&&!fZ)) goto L_00659600;
L_006595f4:; BB(0x006595f4);
    /* 006595f4: mov dword ptr [edi + 0x90], 0x43480000 */ W32((u32)(r_edi+0x90u), 0x43480000u);
    /* 006595fe: jmp 0x659606 */ goto L_00659606;
L_00659600:; BB(0x00659600);
    /* 00659600: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
L_00659606:; BB(0x00659606);
    /* 00659606: mov esi, dword ptr [edi + 0x88] */ r_esi = R32((u32)(r_edi+0x88u));
    /* 0065960c: mov edx, 0x7f */ r_edx = 0x7fu;
    /* 00659611: cmp esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659614: mov eax, 0xffffff81 */ r_eax = 0xffffff81u;
    /* 00659619: jl 0x65961d */ if ((fS!=fO)) goto L_0065961d;
L_0065961b:; BB(0x0065961b);
    /* 0065961b: mov esi, edx */ r_esi = r_edx;
L_0065961d:; BB(0x0065961d);
    /* 0065961d: cmp esi, -0x7f */ {  u32 a = r_esi; u32 b = 0xffffff81u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659620: jg 0x659624 */ if ((!fZ&&fS==fO)) goto L_00659624;
L_00659622:; BB(0x00659622);
    /* 00659622: mov esi, eax */ r_esi = r_eax;
L_00659624:; BB(0x00659624);
    /* 00659624: mov dword ptr [edi + 0x94], esi */ W32((u32)(r_edi+0x94u), r_esi);
    /* 0065962a: mov eax, 1 */ r_eax = 0x1u;
    /* 0065962f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659630: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659631: ret  */ FN_RET(0x0065957c); r_esp += 4; return;
L_00659632:; BB(0x00659632);
    /* 00659632: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00659636: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0065963c: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 00659640: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659644: ret  */ FN_RET(0x0065957c); r_esp += 4; return;
}

void f_00659648(void)
{
    FN_ENTER(0x00659648);
    /* 00659648: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659649: mov ebp, esp */ r_ebp = r_esp;
    /* 0065964b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065964d: push 0x8e71dc */ { u32 v = 0x8e71dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00659652: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659659: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659660: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659663: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659666: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00659669: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065966c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065966f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x659674u); f_006dc358();
    /* 00659674: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659677: je 0x6596cd */ if (fZ) goto L_006596cd;
L_00659679:; BB(0x00659679);
    /* 00659679: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00659680: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659685: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65968au); f_005caba4();
    /* 0065968a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065968b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065968e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659690: je 0x6596c9 */ if (fZ) goto L_006596c9;
L_00659692:; BB(0x00659692);
    /* 00659692: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00659699: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006596a0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006596a3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006596a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006596ac: call 0x6596e0 */ r_esp -= 4; W32(r_esp, 0x6596b1u); f_006596e0();
    /* 006596b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006596b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006596bb:; BB(0x006596bb);
    /* 006596bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006596be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006596c5: mov esp, ebp */ r_esp = r_ebp;
    /* 006596c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006596c8: ret  */ FN_RET(0x00659648); r_esp += 4; return;
L_006596c9:; BB(0x006596c9);
    /* 006596c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006596cb: jmp 0x6596bb */ goto L_006596bb;
L_006596cd:; BB(0x006596cd);
    /* 006596cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006596cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006596d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006596d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006596db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006596dc: ret  */ FN_RET(0x00659648); r_esp += 4; return;
}

void f_006596e0(void) /* sub_6596E0 */
{
    FN_ENTER(0x006596e0);
    /* 006596e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006596e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006596e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006596e5: push 0x8e71f8 */ { u32 v = 0x8e71f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006596ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006596f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006596f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006596f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006596fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006596fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00659701: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00659704: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00659707: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065970a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065970d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00659710: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00659713: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x659718u); f_007ba278();
    /* 00659718: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065971f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659722: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00659725: mov dword ptr [ecx], 0xb32748 */ W32((u32)(r_ecx), 0xb32748u);
    /* 0065972b: mov eax, dword ptr [0x9c7e44] */ r_eax = R32((u32)(0x9c7e44u));
    /* 00659730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659731: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00659734: call dword ptr [0xb3275c] */ { u32 t = R32((u32)(0xb3275cu)); r_esp -= 4; W32(r_esp, 0x65973au); call_ind(t); }
    /* 0065973a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065973d: call 0x65957c */ r_esp -= 4; W32(r_esp, 0x659742u); f_0065957c();
    /* 00659742: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659745: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00659749: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065974f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00659753: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659756: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065975d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065975f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659760: ret 8 */ FN_RET(0x006596e0); r_esp += 12; return;
}

void f_00659764(void) /* sub_659764 */
{
    FN_ENTER(0x00659764);
    /* 00659764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659765: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659766: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659769: mov edi, ecx */ r_edi = r_ecx;
    /* 0065976b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00659770: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00659773: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659774: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065977a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x65977fu); f_0078ea50();
    /* 0065977f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659782: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 00659788: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065978a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065978c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065978e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065978f: jbe 0x65982d */ if ((fC||fZ)) goto L_0065982d;
L_00659795:; BB(0x00659795);
    /* 00659795: fild dword ptr [edi + 0x90] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x90u)));
    /* 0065979b: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 006597a1: fadd dword ptr [edi + 0x98] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x98u));
    /* 006597a7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006597a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006597ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006597ac: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 006597b2: ja 0x6597b6 */ if ((!fC&&!fZ)) goto L_006597b6;
L_006597b4:; BB(0x006597b4);
    /* 006597b4: fst st(1) */ ST(1) = ST(0);
L_006597b6:; BB(0x006597b6);
    /* 006597b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006597b8: fst dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0));
    /* 006597be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006597c0: je 0x6598d0 */ if (fZ) goto L_006598d0;
L_006597c6:; BB(0x006597c6);
    /* 006597c6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006597c9: jne 0x6597e7 */ if (!fZ) goto L_006597e7;
L_006597cb:; BB(0x006597cb);
    /* 006597cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006597cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006597cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006597d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006597d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006597d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006597d3: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006597d9: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6597deu); f_008144b0();
    /* 006597de: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006597e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006597e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006597e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006597e6: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_006597e7:; BB(0x006597e7);
    /* 006597e7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006597ea: je 0x6597f4 */ if (fZ) goto L_006597f4;
L_006597ec:; BB(0x006597ec);
    /* 006597ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006597ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006597f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006597f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006597f3: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_006597f4:; BB(0x006597f4);
    /* 006597f4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006597f7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006597fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00659800: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00659804: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00659808: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065980c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0065980f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00659813: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00659815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659816: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659818: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659819: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065981f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x659824u); f_008144b0();
    /* 00659824: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659827: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065982a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065982b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065982c: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_0065982d:; BB(0x0065982d);
    /* 0065982d: fld dword ptr [0x938160] */ FPUSH(R_F32((u32)(0x938160u)));
    /* 00659833: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 00659839: fsub dword ptr [edi + 0x98] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x98u));
    /* 0065983f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00659841: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659843: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659844: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00659846: ja 0x65984a */ if ((!fC&&!fZ)) goto L_0065984a;
L_00659848:; BB(0x00659848);
    /* 00659848: fst st(1) */ ST(1) = ST(0);
L_0065984a:; BB(0x0065984a);
    /* 0065984a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0065984c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065984e: fst dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0));
    /* 00659854: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659855: jae 0x6598c8 */ if (!fC) goto L_006598c8;
L_00659857:; BB(0x00659857);
    /* 00659857: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 0065985d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065985f: je 0x6598d8 */ if (fZ) goto L_006598d8;
L_00659861:; BB(0x00659861);
    /* 00659861: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659864: jne 0x659882 */ if (!fZ) goto L_00659882;
L_00659866:; BB(0x00659866);
    /* 00659866: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00659868: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065986a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065986b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065986c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065986d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065986e: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00659874: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x659879u); f_008144b0();
    /* 00659879: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065987c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065987f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659880: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659881: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_00659882:; BB(0x00659882);
    /* 00659882: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659885: je 0x65988f */ if (fZ) goto L_0065988f;
L_00659887:; BB(0x00659887);
    /* 00659887: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00659889: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065988c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065988d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065988e: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_0065988f:; BB(0x0065988f);
    /* 0065988f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00659892: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00659896: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065989b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065989f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006598a3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006598a7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006598aa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006598ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006598b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006598b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006598b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006598b4: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006598ba: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6598bfu); f_008144b0();
    /* 006598bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006598c2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006598c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006598c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006598c7: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_006598c8:; BB(0x006598c8);
    /* 006598c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006598ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006598cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006598ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006598cf: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_006598d0:; BB(0x006598d0);
    /* 006598d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006598d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006598d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006598d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006598d7: ret  */ FN_RET(0x00659764); r_esp += 4; return;
L_006598d8:; BB(0x006598d8);
    /* 006598d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006598da: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006598dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006598de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006598df: ret  */ FN_RET(0x00659764); r_esp += 4; return;
}

void f_006598e0(void) /* sub_6598E0 */
{
    FN_ENTER(0x006598e0);
    /* 006598e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006598e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006598e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006598e3: mov edi, ecx */ r_edi = r_ecx;
    /* 006598e5: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006598ea: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6598efu); f_00807ac0();
    /* 006598ef: mov esi, dword ptr [eax*8 + 0x937fc0] */ r_esi = R32((u32)(r_eax*8+0x937fc0u));
    /* 006598f6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006598f8: je 0x6599a8 */ if (fZ) goto L_006599a8;
L_006598fe:; BB(0x006598fe);
    /* 006598fe: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00659904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00659906: jge 0x65990c */ if ((fS==fO)) goto L_0065990c;
L_00659908:; BB(0x00659908);
    /* 00659908: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065990a: jmp 0x659934 */ goto L_00659934;
L_0065990c:; BB(0x0065990c);
    /* 0065990c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x659911u); f_00807ac0();
    /* 00659911: mov eax, dword ptr [eax*8 + 0x937fc4] */ r_eax = R32((u32)(r_eax*8+0x937fc4u));
    /* 00659918: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 0065991e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659921: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659923: jl 0x659934 */ if ((fS!=fO)) goto L_00659934;
L_00659925:; BB(0x00659925);
    /* 00659925: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65992au); f_00807ac0();
    /* 0065992a: mov edx, dword ptr [eax*8 + 0x937fc4] */ r_edx = R32((u32)(r_eax*8+0x937fc4u));
    /* 00659931: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00659934:; BB(0x00659934);
    /* 00659934: mov dword ptr [edi + 0x84], edx */ W32((u32)(r_edi+0x84u), r_edx);
    /* 0065993a: mov eax, dword ptr [esi + edx*8] */ r_eax = R32((u32)(r_esi+r_edx*8));
    /* 0065993d: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 00659943: mov edx, dword ptr [esi + edx*8 + 4] */ r_edx = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 00659947: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
L_0065994d:; BB(0x0065994d);
    /* 0065994d: push dword ptr [edi + 0x6c] */ { u32 v = R32((u32)(r_edi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00659950: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x659955u); f_0082e900();
    /* 00659955: mov edx, dword ptr [edi + 0x70] */ r_edx = R32((u32)(r_edi+0x70u));
    /* 00659958: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 0065995e: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 00659961: fcomp dword ptr [0x938158] */ fx_compare(ST(0), R_F32((u32)(0x938158u))); FPOP();
    /* 00659967: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659969: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065996a: ja 0x659978 */ if ((!fC&&!fZ)) goto L_00659978;
L_0065996c:; BB(0x0065996c);
    /* 0065996c: mov dword ptr [edi + 0xa4], 0x43480000 */ W32((u32)(r_edi+0xa4u), 0x43480000u);
    /* 00659976: jmp 0x65997e */ goto L_0065997e;
L_00659978:; BB(0x00659978);
    /* 00659978: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
L_0065997e:; BB(0x0065997e);
    /* 0065997e: mov esi, dword ptr [edi + 0x88] */ r_esi = R32((u32)(r_edi+0x88u));
    /* 00659984: mov edx, 0x7f */ r_edx = 0x7fu;
    /* 00659989: cmp esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065998c: mov eax, 0xffffff81 */ r_eax = 0xffffff81u;
    /* 00659991: jl 0x659995 */ if ((fS!=fO)) goto L_00659995;
L_00659993:; BB(0x00659993);
    /* 00659993: mov esi, edx */ r_esi = r_edx;
L_00659995:; BB(0x00659995);
    /* 00659995: cmp esi, -0x7f */ {  u32 a = r_esi; u32 b = 0xffffff81u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00659998: jg 0x65999c */ if ((!fZ&&fS==fO)) goto L_0065999c;
L_0065999a:; BB(0x0065999a);
    /* 0065999a: mov esi, eax */ r_esi = r_eax;
L_0065999c:; BB(0x0065999c);
    /* 0065999c: mov dword ptr [edi + 0x90], esi */ W32((u32)(r_edi+0x90u), r_esi);
    /* 006599a2: mov eax, ebx */ r_eax = r_ebx;
    /* 006599a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006599a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006599a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006599a7: ret  */ FN_RET(0x006598e0); r_esp += 4; return;
L_006599a8:; BB(0x006599a8);
    /* 006599a8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006599ad: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 006599b3: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 006599b9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006599bb: jmp 0x65994d */ goto L_0065994d;
}

void f_006599c0(void)
{
    FN_ENTER(0x006599c0);
    /* 006599c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006599c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006599c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006599c5: push 0x8e7220 */ { u32 v = 0x8e7220u; r_esp -= 4; W32(r_esp, v); }
    /* 006599ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006599d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006599d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006599d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006599db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006599de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006599e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006599e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006599e7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6599ecu); f_006dc358();
    /* 006599ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006599ef: je 0x659a45 */ if (fZ) goto L_00659a45;
L_006599f1:; BB(0x006599f1);
    /* 006599f1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006599f8: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 006599fd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x659a02u); f_005caba4();
    /* 00659a02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659a03: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00659a06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659a08: je 0x659a41 */ if (fZ) goto L_00659a41;
L_00659a0a:; BB(0x00659a0a);
    /* 00659a0a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00659a11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659a18: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659a1b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659a21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659a24: call 0x659a58 */ r_esp -= 4; W32(r_esp, 0x659a29u); f_00659a58();
    /* 00659a29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659a2c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00659a33:; BB(0x00659a33);
    /* 00659a33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659a36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659a3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00659a3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659a40: ret  */ FN_RET(0x006599c0); r_esp += 4; return;
L_00659a41:; BB(0x00659a41);
    /* 00659a41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659a43: jmp 0x659a33 */ goto L_00659a33;
L_00659a45:; BB(0x00659a45);
    /* 00659a45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659a47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659a4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659a51: mov esp, ebp */ r_esp = r_ebp;
    /* 00659a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659a54: ret  */ FN_RET(0x006599c0); r_esp += 4; return;
}

void f_00659a58(void) /* sub_659A58 */
{
    FN_ENTER(0x00659a58);
    /* 00659a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659a59: mov ebp, esp */ r_ebp = r_esp;
    /* 00659a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659a5d: push 0x8e723c */ { u32 v = 0x8e723cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659a62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659a69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659a70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659a73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659a76: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00659a79: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00659a7c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00659a7f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00659a82: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659a85: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00659a88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00659a8b: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x659a90u); f_007ba278();
    /* 00659a90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659a97: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659a9a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00659a9d: mov dword ptr [ecx], 0xb32774 */ W32((u32)(r_ecx), 0xb32774u);
    /* 00659aa3: mov eax, dword ptr [0x9c7e48] */ r_eax = R32((u32)(0x9c7e48u));
    /* 00659aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659aa9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00659aac: call dword ptr [0xb32788] */ { u32 t = R32((u32)(0xb32788u)); r_esp -= 4; W32(r_esp, 0x659ab2u); call_ind(t); }
    /* 00659ab2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659ab5: call 0x6598e0 */ r_esp -= 4; W32(r_esp, 0x659abau); f_006598e0();
    /* 00659aba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659abd: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00659ac1: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659ac7: mov dword ptr [eax + 0x94], 0xc2fe0000 */ W32((u32)(r_eax+0x94u), 0xc2fe0000u);
    /* 00659ad1: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00659ad5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659ad8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659adf: mov esp, ebp */ r_esp = r_ebp;
    /* 00659ae1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659ae2: ret 8 */ FN_RET(0x00659a58); r_esp += 12; return;
}

void f_00659ae8(void) /* sub_659AE8 */
{
    FN_ENTER(0x00659ae8);
    /* 00659ae8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659aeb: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 00659af1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659af3: je 0x659b53 */ if (fZ) goto L_00659b53;
L_00659af5:; BB(0x00659af5);
    /* 00659af5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659af8: jne 0x659b15 */ if (!fZ) goto L_00659b15;
L_00659afa:; BB(0x00659afa);
    /* 00659afa: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00659afd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00659aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659b00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659b01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b03: push dword ptr [ecx + 0x94] */ { u32 v = R32((u32)(r_ecx+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659b09: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x659b0eu); f_008144b0();
    /* 00659b0e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659b11: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659b14: ret  */ FN_RET(0x00659ae8); r_esp += 4; return;
L_00659b15:; BB(0x00659b15);
    /* 00659b15: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b18: jne 0x659b53 */ if (!fZ) goto L_00659b53;
L_00659b1a:; BB(0x00659b1a);
    /* 00659b1a: fld dword ptr [ecx + 0x90] */ FPUSH(R_F32((u32)(r_ecx+0x90u)));
    /* 00659b20: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00659b23: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00659b27: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00659b2c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00659b30: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00659b34: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00659b38: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00659b3b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00659b3f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00659b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659b42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659b44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b45: push dword ptr [ecx + 0x94] */ { u32 v = R32((u32)(r_ecx+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659b4b: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x659b50u); f_008144b0();
    /* 00659b50: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659b53:; BB(0x00659b53);
    /* 00659b53: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659b56: ret  */ FN_RET(0x00659ae8); r_esp += 4; return;
}

void f_00659b58(void) /* sub_659B58 */
{
    FN_ENTER(0x00659b58);
    /* 00659b58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00659b59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00659b5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659b5b: mov edi, ecx */ r_edi = r_ecx;
    /* 00659b5d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00659b62: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x659b67u); f_00807ac0();
    /* 00659b67: mov esi, dword ptr [eax*8 + 0x937fc0] */ r_esi = R32((u32)(r_eax*8+0x937fc0u));
    /* 00659b6e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659b70: je 0x659bfd */ if (fZ) goto L_00659bfd;
L_00659b76:; BB(0x00659b76);
    /* 00659b76: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00659b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00659b7e: jge 0x659b84 */ if ((fS==fO)) goto L_00659b84;
L_00659b80:; BB(0x00659b80);
    /* 00659b80: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00659b82: jmp 0x659bac */ goto L_00659bac;
L_00659b84:; BB(0x00659b84);
    /* 00659b84: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x659b89u); f_00807ac0();
    /* 00659b89: mov eax, dword ptr [eax*8 + 0x937fc4] */ r_eax = R32((u32)(r_eax*8+0x937fc4u));
    /* 00659b90: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 00659b96: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659b99: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659b9b: jl 0x659bac */ if ((fS!=fO)) goto L_00659bac;
L_00659b9d:; BB(0x00659b9d);
    /* 00659b9d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x659ba2u); f_00807ac0();
    /* 00659ba2: mov edx, dword ptr [eax*8 + 0x937fc4] */ r_edx = R32((u32)(r_eax*8+0x937fc4u));
    /* 00659ba9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_00659bac:; BB(0x00659bac);
    /* 00659bac: mov dword ptr [edi + 0x84], edx */ W32((u32)(r_edi+0x84u), r_edx);
    /* 00659bb2: mov eax, dword ptr [esi + edx*8] */ r_eax = R32((u32)(r_esi+r_edx*8));
    /* 00659bb5: mov dword ptr [edi + 0x94], eax */ W32((u32)(r_edi+0x94u), r_eax);
    /* 00659bbb: mov edx, dword ptr [esi + edx*8 + 4] */ r_edx = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 00659bbf: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
L_00659bc5:; BB(0x00659bc5);
    /* 00659bc5: fild dword ptr [edi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x88u)));
    /* 00659bcb: fld dword ptr [0x93814c] */ FPUSH(R_F32((u32)(0x93814cu)));
    /* 00659bd1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00659bd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659bd6: jbe 0x659bdc */ if ((fC||fZ)) goto L_00659bdc;
L_00659bd8:; BB(0x00659bd8);
    /* 00659bd8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00659bda: jmp 0x659bf1 */ goto L_00659bf1;
L_00659bdc:; BB(0x00659bdc);
    /* 00659bdc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00659bde: fld dword ptr [0x938148] */ FPUSH(R_F32((u32)(0x938148u)));
    /* 00659be4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00659be6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659be8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659be9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00659beb: jbe 0x659bef */ if ((fC||fZ)) goto L_00659bef;
L_00659bed:; BB(0x00659bed);
    /* 00659bed: fst st(1) */ ST(1) = ST(0);
L_00659bef:; BB(0x00659bef);
    /* 00659bef: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00659bf1:; BB(0x00659bf1);
    /* 00659bf1: fstp dword ptr [edi + 0x90] */ W_F32((u32)(r_edi+0x90u), ST(0)); FPOP();
    /* 00659bf7: mov eax, ebx */ r_eax = r_ebx;
    /* 00659bf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659bfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659bfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00659bfc: ret  */ FN_RET(0x00659b58); r_esp += 4; return;
L_00659bfd:; BB(0x00659bfd);
    /* 00659bfd: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00659c02: mov dword ptr [edi + 0x94], eax */ W32((u32)(r_edi+0x94u), r_eax);
    /* 00659c08: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 00659c0e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fO = 0; }
    /* 00659c10: jmp 0x659bc5 */ goto L_00659bc5;
}

void f_00659c14(void)
{
    FN_ENTER(0x00659c14);
    /* 00659c14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659c15: mov ebp, esp */ r_ebp = r_esp;
    /* 00659c17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659c19: push 0x8e7264 */ { u32 v = 0x8e7264u; r_esp -= 4; W32(r_esp, v); }
    /* 00659c1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659c24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659c25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659c2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659c2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659c32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00659c35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00659c38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00659c3b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x659c40u); f_006dc358();
    /* 00659c40: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c43: je 0x659c99 */ if (fZ) goto L_00659c99;
L_00659c45:; BB(0x00659c45);
    /* 00659c45: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00659c4c: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659c51: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x659c56u); f_005caba4();
    /* 00659c56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659c57: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00659c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659c5c: je 0x659c95 */ if (fZ) goto L_00659c95;
L_00659c5e:; BB(0x00659c5e);
    /* 00659c5e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00659c65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659c6c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659c6f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659c75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659c78: call 0x659cac */ r_esp -= 4; W32(r_esp, 0x659c7du); f_00659cac();
    /* 00659c7d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659c80: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00659c87:; BB(0x00659c87);
    /* 00659c87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659c8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659c91: mov esp, ebp */ r_esp = r_ebp;
    /* 00659c93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659c94: ret  */ FN_RET(0x00659c14); r_esp += 4; return;
L_00659c95:; BB(0x00659c95);
    /* 00659c95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659c97: jmp 0x659c87 */ goto L_00659c87;
L_00659c99:; BB(0x00659c99);
    /* 00659c99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659c9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659c9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659ca5: mov esp, ebp */ r_esp = r_ebp;
    /* 00659ca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659ca8: ret  */ FN_RET(0x00659c14); r_esp += 4; return;
}

void f_00659cac(void) /* sub_659CAC */
{
    FN_ENTER(0x00659cac);
    /* 00659cac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659cad: mov ebp, esp */ r_ebp = r_esp;
    /* 00659caf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659cb1: push 0x8e7280 */ { u32 v = 0x8e7280u; r_esp -= 4; W32(r_esp, v); }
    /* 00659cb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659cbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659cc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659cc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659cca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00659ccd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00659cd0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00659cd3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00659cd6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659cd9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00659cdc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00659cdf: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x659ce4u); f_007ba278();
    /* 00659ce4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659ceb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659cee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00659cf1: mov dword ptr [ecx], 0xb327a0 */ W32((u32)(r_ecx), 0xb327a0u);
    /* 00659cf7: mov eax, dword ptr [0x9c7e4c] */ r_eax = R32((u32)(0x9c7e4cu));
    /* 00659cfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659cfd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00659d00: call dword ptr [0xb327b4] */ { u32 t = R32((u32)(0xb327b4u)); r_esp -= 4; W32(r_esp, 0x659d06u); call_ind(t); }
    /* 00659d06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659d09: call 0x659b58 */ r_esp -= 4; W32(r_esp, 0x659d0eu); f_00659b58();
    /* 00659d0e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659d11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659d14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659d1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00659d1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659d1e: ret 8 */ FN_RET(0x00659cac); r_esp += 12; return;
}

void f_00659d24(void) /* sub_659D24 */
{
    FN_ENTER(0x00659d24);
    /* 00659d24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659d25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00659d27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00659d29: call 0x659d48 */ r_esp -= 4; W32(r_esp, 0x659d2eu); f_00659d48();
    /* 00659d2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00659d32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659d34: jne 0x659d3a */ if (!fZ) goto L_00659d3a;
L_00659d36:; BB(0x00659d36);
    /* 00659d36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659d37: ret 4 */ FN_RET(0x00659d24); r_esp += 8; return;
L_00659d3a:; BB(0x00659d3a);
    /* 00659d3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659d3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x659d40u); f_005c2f74();
    /* 00659d40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659d41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659d42: ret 4 */ FN_RET(0x00659d24); r_esp += 8; return;
}

void f_00659d48(void) /* sub_659D48 */
{
    FN_ENTER(0x00659d48);
    /* 00659d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659d49: mov ebp, esp */ r_ebp = r_esp;
    /* 00659d4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659d4d: push 0x8e729c */ { u32 v = 0x8e729cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659d52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659d59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659d60: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659d63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659d66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00659d69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00659d6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00659d6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00659d72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659d75: mov dword ptr [ecx], 0xb32848 */ W32((u32)(r_ecx), 0xb32848u);
    /* 00659d7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00659d82: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x659d87u); f_007b4aec();
    /* 00659d87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659d8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659d91: mov esp, ebp */ r_esp = r_ebp;
    /* 00659d93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659d94: ret  */ FN_RET(0x00659d48); r_esp += 4; return;
}

void f_00659d98(void) /* sub_659D98 */
{
    FN_ENTER(0x00659d98);
    /* 00659d98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00659d99: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659d9c: mov esi, ecx */ r_esi = r_ecx;
    /* 00659d9e: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00659da4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659da7: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 00659dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00659daf: jle 0x659db6 */ if ((fZ||fS!=fO)) goto L_00659db6;
L_00659db1:; BB(0x00659db1);
    /* 00659db1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659db4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659db5: ret  */ FN_RET(0x00659d98); r_esp += 4; return;
L_00659db6:; BB(0x00659db6);
    /* 00659db6: fld dword ptr [esi + 0xac] */ FPUSH(R_F32((u32)(r_esi+0xacu)));
    /* 00659dbc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00659dbe: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00659dc2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659dc8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x659dcdu); f_0068d5a8();
    /* 00659dcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659dce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659dd0: je 0x659e3a */ if (fZ) goto L_00659e3a;
L_00659dd2:; BB(0x00659dd2);
    /* 00659dd2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659dd5: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00659dd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659dda: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x659ddfu); f_0078ea2c();
    /* 00659ddf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659de2: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00659de6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00659de8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00659de9: jae 0x659e3a */ if (!fC) goto L_00659e3a;
L_00659deb:; BB(0x00659deb);
    /* 00659deb: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00659df1: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00659df5: mov byte ptr [esp], 0x67 */ W8((u32)(r_esp), 0x67u);
    /* 00659df9: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 00659dfe: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00659e03: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 00659e09: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00659e0d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00659e11: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00659e16: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00659e1a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00659e1d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x659e22u); f_008003e0();
    /* 00659e22: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00659e24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00659e25: call 0x81137c */ r_esp -= 4; W32(r_esp, 0x659e2au); f_0081137c();
    /* 00659e2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659e2d: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00659e31: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00659e36: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_00659e3a:; BB(0x00659e3a);
    /* 00659e3a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659e3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00659e3e: ret  */ FN_RET(0x00659d98); r_esp += 4; return;
}

void f_00659e40(void)
{
    FN_ENTER(0x00659e40);
    /* 00659e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00659e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659e45: push 0x8e72c4 */ { u32 v = 0x8e72c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00659e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659e58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659e5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00659e61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00659e64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00659e67: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00659e6c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00659e73: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x659e78u); f_005caba4();
    /* 00659e78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659e79: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00659e7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659e7e: je 0x659eb7 */ if (fZ) goto L_00659eb7;
L_00659e80:; BB(0x00659e80);
    /* 00659e80: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00659e87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659e8e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659e91: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659e97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659e9a: call 0x659ebc */ r_esp -= 4; W32(r_esp, 0x659e9fu); f_00659ebc();
    /* 00659e9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00659ea2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00659ea9:; BB(0x00659ea9);
    /* 00659ea9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659eac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659eb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00659eb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659eb6: ret  */ FN_RET(0x00659e40); r_esp += 4; return;
L_00659eb7:; BB(0x00659eb7);
    /* 00659eb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659eb9: jmp 0x659ea9 */ goto L_00659ea9;
}

void f_00659ebc(void) /* sub_659EBC */
{
    FN_ENTER(0x00659ebc);
    /* 00659ebc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659ebd: mov ebp, esp */ r_ebp = r_esp;
    /* 00659ebf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659ec1: push 0x8e72e0 */ { u32 v = 0x8e72e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659ec6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659ecd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659ed4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659ed7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659eda: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00659edd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00659ee0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00659ee3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00659ee6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659ee9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00659eec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00659eef: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x659ef4u); f_007b4b48();
    /* 00659ef4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659efb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659efe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00659f01: mov dword ptr [ecx], 0xb32848 */ W32((u32)(r_ecx), 0xb32848u);
    /* 00659f07: mov eax, dword ptr [0x9c7e50] */ r_eax = R32((u32)(0x9c7e50u));
    /* 00659f0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659f0d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00659f10: call dword ptr [0xb3285c] */ { u32 t = R32((u32)(0xb3285cu)); r_esp -= 4; W32(r_esp, 0x659f16u); call_ind(t); }
    /* 00659f16: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659f19: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 00659f1c: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00659f22: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00659f26: mov dword ptr [ebx + 0xb4], 3 */ W32((u32)(r_ebx+0xb4u), 0x3u);
    /* 00659f30: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 00659f36: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 00659f3c: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659f41: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00659f45: mov eax, ebx */ r_eax = r_ebx;
    /* 00659f47: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00659f4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659f4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00659f54: mov esp, ebp */ r_esp = r_ebp;
    /* 00659f56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659f57: ret 8 */ FN_RET(0x00659ebc); r_esp += 12; return;
}

void f_00659f5c(void)
{
    FN_ENTER(0x00659f5c);
    /* 00659f5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00659f60: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00659f63: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659f69: je 0x659f7a */ if (fZ) goto L_00659f7a;
L_00659f6b:; BB(0x00659f6b);
    /* 00659f6b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00659f6d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659f70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659f71: call 0x80d274 */ r_esp -= 4; W32(r_esp, 0x659f76u); f_0080d274();
    /* 00659f76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659f79: ret  */ FN_RET(0x00659f5c); r_esp += 4; return;
L_00659f7a:; BB(0x00659f7a);
    /* 00659f7a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00659f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659f7e: call 0x80d188 */ r_esp -= 4; W32(r_esp, 0x659f83u); f_0080d188();
    /* 00659f83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00659f86: ret  */ FN_RET(0x00659f5c); r_esp += 4; return;
}

void f_00659f88(void) /* sub_659F88 */
{
    FN_ENTER(0x00659f88);
    /* 00659f88: mov dword ptr [0xa8f838], 0x3f800000 */ W32((u32)(0xa8f838u), 0x3f800000u);
    /* 00659f92: mov dword ptr [0xa8f83c], 0x41000000 */ W32((u32)(0xa8f83cu), 0x41000000u);
    /* 00659f9c: mov dword ptr [0xa8f840], 0x3fc00000 */ W32((u32)(0xa8f840u), 0x3fc00000u);
    /* 00659fa6: ret  */ FN_RET(0x00659f88); r_esp += 4; return;
}

void f_00659fa8(void) /* sub_659FA8 */
{
    FN_ENTER(0x00659fa8);
    /* 00659fa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659fa9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00659fab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00659fad: call 0x659fcc */ r_esp -= 4; W32(r_esp, 0x659fb2u); f_00659fcc();
    /* 00659fb2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00659fb6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00659fb8: jne 0x659fbe */ if (!fZ) goto L_00659fbe;
L_00659fba:; BB(0x00659fba);
    /* 00659fba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659fbb: ret 4 */ FN_RET(0x00659fa8); r_esp += 8; return;
L_00659fbe:; BB(0x00659fbe);
    /* 00659fbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00659fbf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x659fc4u); f_005c2f74();
    /* 00659fc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00659fc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00659fc6: ret 4 */ FN_RET(0x00659fa8); r_esp += 8; return;
}

void f_00659fcc(void) /* sub_659FCC */
{
    FN_ENTER(0x00659fcc);
    /* 00659fcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659fcd: mov ebp, esp */ r_ebp = r_esp;
    /* 00659fcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659fd1: push 0x8e72fc */ { u32 v = 0x8e72fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00659fd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00659fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659fdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00659fe4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659fe7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00659fea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00659fed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00659ff0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00659ff3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00659ff6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00659ffd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a000: mov dword ptr [eax], 0xb32970 */ W32((u32)(r_eax), 0xb32970u);
    /* 0065a006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a007: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65a00cu); f_007b4e84();
    /* 0065a00c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a00d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a010: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65a015u); f_007b9c8c();
    /* 0065a015: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a018: movzx eax, word ptr [ecx + 0xac] */ r_eax = (u32)R16((u32)(r_ecx+0xacu));
    /* 0065a01f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a024: je 0x65a043 */ if (fZ) goto L_0065a043;
L_0065a026:; BB(0x0065a026);
    /* 0065a026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a027: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65a02cu); f_0068d5a8();
    /* 0065a02c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a02d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a02f: je 0x65a05d */ if (fZ) goto L_0065a05d;
L_0065a031:; BB(0x0065a031);
    /* 0065a031: je 0x65a040 */ if (fZ) goto L_0065a040;
L_0065a033:; BB(0x0065a033);
    /* 0065a033: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a035: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065a037: mov ecx, eax */ r_ecx = r_eax;
    /* 0065a039: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x65a03bu); call_ind(t); }
    /* 0065a03b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a03e: jmp 0x65a043 */ goto L_0065a043;
L_0065a040:; BB(0x0065a040);
    /* 0065a040: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0065a043:; BB(0x0065a043);
    /* 0065a043: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065a04a: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65a04fu); f_007b4aec();
    /* 0065a04f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a052: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a059: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a05b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a05c: ret  */ FN_RET(0x00659fcc); r_esp += 4; return;
L_0065a05d:; BB(0x0065a05d);
    /* 0065a05d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a060: jmp 0x65a043 */ goto L_0065a043;
}

