#include "protos.h"

void f_005680fc(void) /* sub_5680FC */
{
    FN_ENTER(0x005680fc);
    /* 005680fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005680fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005680ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568101: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568106: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56810bu); f_007aaa30();
    /* 0056810b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056810d: jne 0x56811f */ if (!fZ) goto L_0056811f;
L_0056810f:; BB(0x0056810f);
    /* 0056810f: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568114: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568116: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56811bu); f_007aaa30();
    /* 0056811b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056811d: je 0x56812a */ if (fZ) goto L_0056812a;
L_0056811f:; BB(0x0056811f);
    /* 0056811f: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00568122: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568123: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568125: call 0x5648a0 */ r_esp -= 4; W32(r_esp, 0x56812au); f_005648a0();
L_0056812a:; BB(0x0056812a);
    /* 0056812a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056812b: ret  */ FN_RET(0x005680fc); r_esp += 4; return;
}

void f_0056812c(void) /* sub_56812C */
{
    FN_ENTER(0x0056812c);
    /* 0056812c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056812d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568130: mov esi, ecx */ r_esi = r_ecx;
    /* 00568132: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00568135: fsub dword ptr [esi + 0x490] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x490u));
    /* 0056813b: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0056813e: fsub dword ptr [esi + 0x498] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x498u));
    /* 00568144: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00568146: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00568149: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0056814d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00568155: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00568158: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568159: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x56815eu); f_007828e4();
    /* 0056815e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00568160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568163: mov ecx, esi */ r_ecx = r_esi;
    /* 00568165: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56816au); f_007751b0();
    /* 0056816a: fld dword ptr [0x925e28] */ FPUSH(R_F32((u32)(0x925e28u)));
    /* 00568170: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00568172: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00568176: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0056817b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00568180: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00568184: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00568188: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0056818c: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00568190: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00568193: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00568197: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0056819b: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005681a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005681a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005681a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005681a3: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5681a8u); f_00782b64();
    /* 005681a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005681ab: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005681b0: mov ecx, esi */ r_ecx = r_esi;
    /* 005681b2: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005681b7: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x5681bcu); f_00520c08();
    /* 005681bc: fld dword ptr [0x925e3c] */ FPUSH(R_F32((u32)(0x925e3cu)));
    /* 005681c2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005681c4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005681c7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005681c9: fadd dword ptr [esi + 0x490] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x490u));
    /* 005681cf: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005681d3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005681d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005681d7: fadd dword ptr [esi + 0x498] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x498u));
    /* 005681dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005681df: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 005681e5: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 005681eb: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005681f0: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005681f6: lea eax, [esi + 0x39c] */ r_eax = (u32)(r_esi+0x39cu);
    /* 005681fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005681fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005681fe: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x568203u); f_0077fffc();
    /* 00568203: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568208: je 0x568255 */ if (fZ) goto L_00568255;
L_0056820a:; BB(0x0056820a);
    /* 0056820a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056820d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0056820f: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00568212: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00568215: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00568218: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0056821b: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0056821e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00568221: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00568225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568226: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x56822bu); f_007828e4();
    /* 0056822b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056822c: fld dword ptr [0x925e1c] */ FPUSH(R_F32((u32)(0x925e1cu)));
    /* 00568232: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00568234: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00568237: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00568239: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0056823c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00568240: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00568242: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00568244: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00568247: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00568249: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0056824f: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
L_00568255:; BB(0x00568255);
    /* 00568255: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00568258: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568259: ret  */ FN_RET(0x0056812c); r_esp += 4; return;
}

void f_0056825c(void) /* sub_56825C */
{
    FN_ENTER(0x0056825c);
    /* 0056825c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056825d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056825f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00568263: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568266: je 0x568315 */ if (fZ) goto L_00568315;
L_0056826c:; BB(0x0056826c);
    /* 0056826c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056826f: je 0x5682fd */ if (fZ) goto L_005682fd;
L_00568275:; BB(0x00568275);
    /* 00568275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00568277: jne 0x568311 */ if (!fZ) goto L_00568311;
L_0056827d:; BB(0x0056827d);
    /* 0056827d: add dword ptr [ebp + 0x520], 1 */ { u32 ad = (u32)(r_ebp+0x520u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00568284: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568286: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56828bu); f_007aa094();
    /* 0056828b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568290: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568292: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x568297u); f_007aaa30();
    /* 00568297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568299: je 0x5682ba */ if (fZ) goto L_005682ba;
L_0056829b:; BB(0x0056829b);
    /* 0056829b: push 0x230 */ { u32 v = 0x230u; r_esp -= 4; W32(r_esp, v); }
    /* 005682a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682a2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5682a7u); f_007879b8();
    /* 005682a7: mov ecx, eax */ r_ecx = r_eax;
    /* 005682a9: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005682ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005682ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005682af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005682b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005682b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005682b2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5682b7u); f_00814298();
    /* 005682b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005682ba:; BB(0x005682ba);
    /* 005682ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682bc: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5682c1u); f_0052126c();
    /* 005682c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005682c3: je 0x5682dc */ if (fZ) goto L_005682dc;
L_005682c5:; BB(0x005682c5);
    /* 005682c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682c7: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5682ccu); f_005213d8();
    /* 005682cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682ce: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5682d3u); f_00521410();
    /* 005682d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682d5: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x5682dau); f_00564780();
    /* 005682da: jmp 0x5682e3 */ goto L_005682e3;
L_005682dc:; BB(0x005682dc);
    /* 005682dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682de: call 0x564760 */ r_esp -= 4; W32(r_esp, 0x5682e3u); f_00564760();
L_005682e3:; BB(0x005682e3);
    /* 005682e3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005682e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682e8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5682eeu); call_ind(t); }
    /* 005682ee: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005682f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005682f3: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5682f9u); call_ind(t); }
    /* 005682f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005682fa: ret 4 */ FN_RET(0x0056825c); r_esp += 8; return;
L_005682fd:; BB(0x005682fd);
    /* 005682fd: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00568303: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00568306: jle 0x568311 */ if ((fZ||fS!=fO)) goto L_00568311;
L_00568308:; BB(0x00568308);
    /* 00568308: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056830a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056830c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568311u); f_0051f62c();
L_00568311:; BB(0x00568311);
    /* 00568311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568312: ret 4 */ FN_RET(0x0056825c); r_esp += 8; return;
L_00568315:; BB(0x00568315);
    /* 00568315: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00568317: mov eax, 5 */ r_eax = 0x5u;
    /* 0056831c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00568323: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568325: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x56832au); f_0051f664();
    /* 0056832a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056832d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056832f: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x568335u); call_ind(t); }
    /* 00568335: mov dword ptr [ebp + 0x520], 0 */ W32((u32)(r_ebp+0x520u), 0x0u);
    /* 0056833f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568340: ret 4 */ FN_RET(0x0056825c); r_esp += 8; return;
}

void f_00568344(void) /* sub_568344 */
{
    FN_ENTER(0x00568344);
    /* 00568344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568345: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568348: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056834a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0056834e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568351: je 0x5683a6 */ if (fZ) goto L_005683a6;
L_00568353:; BB(0x00568353);
    /* 00568353: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568356: je 0x56838e */ if (fZ) goto L_0056838e;
L_00568358:; BB(0x00568358);
    /* 00568358: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056835a: jne 0x56839f */ if (!fZ) goto L_0056839f;
L_0056835c:; BB(0x0056835c);
    /* 0056835c: add dword ptr [ebp + 0x520], -1 */ { u32 ad = (u32)(r_ebp+0x520u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00568363: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568365: call 0x564760 */ r_esp -= 4; W32(r_esp, 0x56836au); f_00564760();
    /* 0056836a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056836c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x568371u); f_007aa094();
    /* 00568371: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00568374: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568376: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x56837cu); call_ind(t); }
    /* 0056837c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056837f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568381: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x568387u); call_ind(t); }
    /* 00568387: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056838a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056838b: ret 4 */ FN_RET(0x00568344); r_esp += 8; return;
L_0056838e:; BB(0x0056838e);
    /* 0056838e: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00568394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00568396: jg 0x56839f */ if ((!fZ&&fS==fO)) goto L_0056839f;
L_00568398:; BB(0x00568398);
    /* 00568398: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056839a: call 0x568404 */ r_esp -= 4; W32(r_esp, 0x56839fu); f_00568404();
L_0056839f:; BB(0x0056839f);
    /* 0056839f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005683a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005683a3: ret 4 */ FN_RET(0x00568344); r_esp += 8; return;
L_005683a6:; BB(0x005683a6);
    /* 005683a6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005683a8: mov eax, 4 */ r_eax = 0x4u;
    /* 005683ad: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005683b4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005683b6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5683bbu); f_0051f664();
    /* 005683bb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005683be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005683c0: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5683c6u); call_ind(t); }
    /* 005683c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005683c8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5683cdu); f_007751b0();
    /* 005683cd: fld dword ptr [0x925e14] */ FPUSH(R_F32((u32)(0x925e14u)));
    /* 005683d3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005683d5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005683d8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005683dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005683e1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005683e5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005683e9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005683ed: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005683f0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005683f4: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005683f7: mov dword ptr [ebp + 0x520], eax */ W32((u32)(r_ebp+0x520u), r_eax);
    /* 005683fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00568400: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568401: ret 4 */ FN_RET(0x00568344); r_esp += 8; return;
}

void f_00568404(void) /* sub_568404 */
{
    FN_ENTER(0x00568404);
    /* 00568404: mov eax, dword ptr [ecx + 0x46c] */ r_eax = R32((u32)(r_ecx+0x46cu));
    /* 0056840a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056840c: je 0x568416 */ if (fZ) goto L_00568416;
L_0056840e:; BB(0x0056840e);
    /* 0056840e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00568410: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568415u); f_0051f62c();
    /* 00568415: ret  */ FN_RET(0x00568404); r_esp += 4; return;
L_00568416:; BB(0x00568416);
    /* 00568416: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00568418: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56841du); f_0051f62c();
    /* 0056841d: ret  */ FN_RET(0x00568404); r_esp += 4; return;
}

void f_00568420(void) /* sub_568420 */
{
    FN_ENTER(0x00568420);
    /* 00568420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00568421: mov edi, ecx */ r_edi = r_ecx;
    /* 00568423: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00568427: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056842a: je 0x5684c3 */ if (fZ) goto L_005684c3;
L_00568430:; BB(0x00568430);
    /* 00568430: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568433: je 0x568477 */ if (fZ) goto L_00568477;
L_00568435:; BB(0x00568435);
    /* 00568435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568437: jne 0x56845f */ if (!fZ) goto L_0056845f;
L_00568439:; BB(0x00568439);
    /* 00568439: mov ecx, edi */ r_ecx = r_edi;
    /* 0056843b: call 0x564760 */ r_esp -= 4; W32(r_esp, 0x568440u); f_00564760();
    /* 00568440: mov ecx, edi */ r_ecx = r_edi;
    /* 00568442: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x568447u); f_007aa094();
    /* 00568447: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00568449: mov ecx, edi */ r_ecx = r_edi;
    /* 0056844b: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x568451u); call_ind(t); }
    /* 00568451: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00568453: mov ecx, edi */ r_ecx = r_edi;
    /* 00568455: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x56845bu); call_ind(t); }
    /* 0056845b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056845c: ret 4 */ FN_RET(0x00568420); r_esp += 8; return;
L_0056845f:; BB(0x0056845f);
    /* 0056845f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00568462: jne 0x5684bf */ if (!fZ) goto L_005684bf;
L_00568464:; BB(0x00568464);
    /* 00568464: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 0056846a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056846d: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 00568473: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568474: ret 4 */ FN_RET(0x00568420); r_esp += 8; return;
L_00568477:; BB(0x00568477);
    /* 00568477: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 0056847d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056847f: jne 0x5684b6 */ if (!fZ) goto L_005684b6;
L_00568481:; BB(0x00568481);
    /* 00568481: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00568487: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00568489: je 0x5684bf */ if (fZ) goto L_005684bf;
L_0056848b:; BB(0x0056848b);
    /* 0056848b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056848d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x568492u); f_005213d8();
    /* 00568492: mov ecx, edi */ r_ecx = r_edi;
    /* 00568494: call 0x568404 */ r_esp -= 4; W32(r_esp, 0x568499u); f_00568404();
    /* 00568499: movzx eax, word ptr [edi + 0x47c] */ r_eax = (u32)R16((u32)(r_edi+0x47cu));
    /* 005684a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005684a1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5684a6u); f_007b4d18();
    /* 005684a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005684a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005684a9: je 0x5684bf */ if (fZ) goto L_005684bf;
L_005684ab:; BB(0x005684ab);
    /* 005684ab: mov ecx, eax */ r_ecx = r_eax;
    /* 005684ad: call 0x568508 */ r_esp -= 4; W32(r_esp, 0x5684b2u); f_00568508();
    /* 005684b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005684b3: ret 4 */ FN_RET(0x00568420); r_esp += 8; return;
L_005684b6:; BB(0x005684b6);
    /* 005684b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005684b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005684ba: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5684bfu); f_0051f62c();
L_005684bf:; BB(0x005684bf);
    /* 005684bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005684c0: ret 4 */ FN_RET(0x00568420); r_esp += 8; return;
L_005684c3:; BB(0x005684c3);
    /* 005684c3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005684c5: mov eax, 4 */ r_eax = 0x4u;
    /* 005684ca: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005684d1: mov ecx, edi */ r_ecx = r_edi;
    /* 005684d3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5684d8u); f_0051f664();
    /* 005684d8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005684da: mov ecx, edi */ r_ecx = r_edi;
    /* 005684dc: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5684e2u); call_ind(t); }
    /* 005684e2: mov ecx, edi */ r_ecx = r_edi;
    /* 005684e4: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5684e9u); f_00520f68();
    /* 005684e9: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 005684ef: mov dword ptr [edi + 0x480], 0 */ W32((u32)(r_edi+0x480u), 0x0u);
    /* 005684f9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005684fc: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 00568502: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568503: ret 4 */ FN_RET(0x00568420); r_esp += 8; return;
}

void f_005684a0(void)
{
    FN_ENTER(0x005684a0);
    /* 005684a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005684a1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5684a6u); f_007b4d18();
    /* 005684a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005684a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005684a9: je 0x5684bf */ if (fZ) goto L_005684bf;
L_005684ab:; BB(0x005684ab);
    /* 005684ab: mov ecx, eax */ r_ecx = r_eax;
    /* 005684ad: call 0x568508 */ r_esp -= 4; W32(r_esp, 0x5684b2u); f_00568508();
    /* 005684b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005684b3: ret 4 */ FN_RET(0x005684a0); r_esp += 8; return;
L_005684bf:; BB(0x005684bf);
    /* 005684bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005684c0: ret 4 */ FN_RET(0x005684a0); r_esp += 8; return;
}

void f_00568508(void) /* sub_568508 */
{
    FN_ENTER(0x00568508);
    /* 00568508: mov eax, dword ptr [ecx + 0x4b4] */ r_eax = R32((u32)(r_ecx+0x4b4u));
    /* 0056850e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00568511: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 00568517: ret  */ FN_RET(0x00568508); r_esp += 4; return;
}

void f_00568518(void) /* sub_568518 */
{
    FN_ENTER(0x00568518);
    /* 00568518: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00568519: mov edi, ecx */ r_edi = r_ecx;
    /* 0056851b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056851f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568522: je 0x568584 */ if (fZ) goto L_00568584;
L_00568524:; BB(0x00568524);
    /* 00568524: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568527: je 0x56854c */ if (fZ) goto L_0056854c;
L_00568529:; BB(0x00568529);
    /* 00568529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056852b: jne 0x568580 */ if (!fZ) goto L_00568580;
L_0056852d:; BB(0x0056852d);
    /* 0056852d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056852f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x568534u); f_007aa094();
    /* 00568534: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00568536: mov ecx, edi */ r_ecx = r_edi;
    /* 00568538: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x56853eu); call_ind(t); }
    /* 0056853e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00568540: mov ecx, edi */ r_ecx = r_edi;
    /* 00568542: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x568548u); call_ind(t); }
    /* 00568548: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568549: ret 4 */ FN_RET(0x00568518); r_esp += 8; return;
L_0056854c:; BB(0x0056854c);
    /* 0056854c: mov eax, dword ptr [edi + 0x3e0] */ r_eax = R32((u32)(r_edi+0x3e0u));
    /* 00568552: lea ecx, [edi + 0x3e0] */ r_ecx = (u32)(r_edi+0x3e0u);
    /* 00568558: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x56855bu); call_ind(t); }
    /* 0056855b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056855d: je 0x568580 */ if (fZ) goto L_00568580;
L_0056855f:; BB(0x0056855f);
    /* 0056855f: mov ecx, edi */ r_ecx = r_edi;
    /* 00568561: call 0x565eac */ r_esp -= 4; W32(r_esp, 0x568566u); f_00565eac();
    /* 00568566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568568: je 0x568577 */ if (fZ) goto L_00568577;
L_0056856a:; BB(0x0056856a);
    /* 0056856a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056856c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056856e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568573u); f_0051f62c();
    /* 00568573: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568574: ret 4 */ FN_RET(0x00568518); r_esp += 8; return;
L_00568577:; BB(0x00568577);
    /* 00568577: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00568579: mov ecx, edi */ r_ecx = r_edi;
    /* 0056857b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568580u); f_0051f62c();
L_00568580:; BB(0x00568580);
    /* 00568580: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568581: ret 4 */ FN_RET(0x00568518); r_esp += 8; return;
L_00568584:; BB(0x00568584);
    /* 00568584: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00568586: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00568588: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0056858f: mov ecx, edi */ r_ecx = r_edi;
    /* 00568591: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x568596u); f_0051f664();
    /* 00568596: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00568598: mov ecx, edi */ r_ecx = r_edi;
    /* 0056859a: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5685a0u); call_ind(t); }
    /* 005685a0: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 005685a6: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005685a9: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 005685af: mov ecx, edi */ r_ecx = r_edi;
    /* 005685b1: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5685b6u); f_00520f68();
    /* 005685b6: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005685b9: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005685bc: mov dword ptr [edi + 0x480], 0 */ W32((u32)(r_edi+0x480u), 0x0u);
    /* 005685c6: mov dword ptr [edi + 0x548], eax */ W32((u32)(r_edi+0x548u), r_eax);
    /* 005685cc: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005685cf: mov dword ptr [edi + 0x54c], edx */ W32((u32)(r_edi+0x54cu), r_edx);
    /* 005685d5: mov dword ptr [edi + 0x550], eax */ W32((u32)(r_edi+0x550u), r_eax);
    /* 005685db: lea ecx, [edi + 0x3e0] */ r_ecx = (u32)(r_edi+0x3e0u);
    /* 005685e1: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5685e6u); f_00576c48();
    /* 005685e6: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005685e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005685ea: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x5685efu); f_0057895c();
    /* 005685ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005685f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005685f1: ret 4 */ FN_RET(0x00568518); r_esp += 8; return;
}

void f_005685f4(void) /* sub_5685F4 */
{
    FN_ENTER(0x005685f4);
    /* 005685f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005685f5: mov edi, ecx */ r_edi = r_ecx;
    /* 005685f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005685fb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005685fe: je 0x568725 */ if (fZ) goto L_00568725;
L_00568604:; BB(0x00568604);
    /* 00568604: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568607: je 0x5686f6 */ if (fZ) goto L_005686f6;
L_0056860d:; BB(0x0056860d);
    /* 0056860d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056860f: jne 0x568721 */ if (!fZ) goto L_00568721;
L_00568615:; BB(0x00568615);
    /* 00568615: mov ecx, edi */ r_ecx = r_edi;
    /* 00568617: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56861cu); f_007aa094();
    /* 0056861c: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00568622: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00568624: jne 0x5686de */ if (!fZ) goto L_005686de;
L_0056862a:; BB(0x0056862a);
    /* 0056862a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056862c: call 0x565e7c */ r_esp -= 4; W32(r_esp, 0x568631u); f_00565e7c();
    /* 00568631: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568636: mov ecx, edi */ r_ecx = r_edi;
    /* 00568638: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56863du); f_007aaa30();
    /* 0056863d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056863f: je 0x568660 */ if (fZ) goto L_00568660;
L_00568641:; BB(0x00568641);
    /* 00568641: push 0x235 */ { u32 v = 0x235u; r_esp -= 4; W32(r_esp, v); }
    /* 00568646: mov ecx, edi */ r_ecx = r_edi;
    /* 00568648: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56864du); f_007879b8();
    /* 0056864d: mov ecx, eax */ r_ecx = r_eax;
    /* 0056864f: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00568652: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00568654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568656: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568657: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568658: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56865du); f_00814298();
    /* 0056865d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00568660:; BB(0x00568660);
    /* 00568660: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568665: mov ecx, edi */ r_ecx = r_edi;
    /* 00568667: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56866cu); f_007aaa30();
    /* 0056866c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056866e: je 0x56868f */ if (fZ) goto L_0056868f;
L_00568670:; BB(0x00568670);
    /* 00568670: push 0x236 */ { u32 v = 0x236u; r_esp -= 4; W32(r_esp, v); }
    /* 00568675: mov ecx, edi */ r_ecx = r_edi;
    /* 00568677: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56867cu); f_007879b8();
    /* 0056867c: mov ecx, eax */ r_ecx = r_eax;
    /* 0056867e: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00568681: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00568683: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568684: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568686: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568687: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56868cu); f_00814298();
    /* 0056868c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056868f:; BB(0x0056868f);
    /* 0056868f: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00568695: fcomp dword ptr [0x925f20] */ fx_compare(ST(0), R_F32((u32)(0x925f20u))); FPOP();
    /* 0056869b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056869d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056869e: jbe 0x5686b2 */ if ((fC||fZ)) goto L_005686b2;
L_005686a0:; BB(0x005686a0);
    /* 005686a0: fld dword ptr [edi + 0x538] */ FPUSH(R_F32((u32)(r_edi+0x538u)));
    /* 005686a6: fmul dword ptr [0x925e08] */ ST(0) = ST(0) * R_F32((u32)(0x925e08u));
    /* 005686ac: fstp dword ptr [edi + 0x538] */ W_F32((u32)(r_edi+0x538u), ST(0)); FPOP();
L_005686b2:; BB(0x005686b2);
    /* 005686b2: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005686b5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5686bau); f_0082dcbc();
    /* 005686ba: fld dword ptr [edi + 0x538] */ FPUSH(R_F32((u32)(r_edi+0x538u)));
    /* 005686c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005686c2: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 005686c5: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005686c8: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 005686cb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5686d0u); f_0082ddd8();
    /* 005686d0: fld dword ptr [edi + 0x538] */ FPUSH(R_F32((u32)(r_edi+0x538u)));
    /* 005686d6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005686d8: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 005686db: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
L_005686de:; BB(0x005686de);
    /* 005686de: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005686e0: mov ecx, edi */ r_ecx = r_edi;
    /* 005686e2: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5686e8u); call_ind(t); }
    /* 005686e8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005686ea: mov ecx, edi */ r_ecx = r_edi;
    /* 005686ec: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5686f2u); call_ind(t); }
    /* 005686f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005686f3: ret 4 */ FN_RET(0x005685f4); r_esp += 8; return;
L_005686f6:; BB(0x005686f6);
    /* 005686f6: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005686fc: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005686fe: je 0x568721 */ if (fZ) goto L_00568721;
L_00568700:; BB(0x00568700);
    /* 00568700: mov ecx, edi */ r_ecx = r_edi;
    /* 00568702: call 0x565eac */ r_esp -= 4; W32(r_esp, 0x568707u); f_00565eac();
    /* 00568707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568709: je 0x568718 */ if (fZ) goto L_00568718;
L_0056870b:; BB(0x0056870b);
    /* 0056870b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056870d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056870f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568714u); f_0051f62c();
    /* 00568714: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568715: ret 4 */ FN_RET(0x005685f4); r_esp += 8; return;
L_00568718:; BB(0x00568718);
    /* 00568718: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056871a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056871c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568721u); f_0051f62c();
L_00568721:; BB(0x00568721);
    /* 00568721: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568722: ret 4 */ FN_RET(0x005685f4); r_esp += 8; return;
L_00568725:; BB(0x00568725);
    /* 00568725: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00568727: mov eax, 0xf */ r_eax = 0xfu;
    /* 0056872c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00568733: mov ecx, edi */ r_ecx = r_edi;
    /* 00568735: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x56873au); f_0051f664();
    /* 0056873a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0056873c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056873e: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x568744u); call_ind(t); }
    /* 00568744: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 0056874a: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056874d: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 00568753: mov ecx, edi */ r_ecx = r_edi;
    /* 00568755: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x56875au); f_00520f68();
    /* 0056875a: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0056875d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00568760: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00568763: mov dword ptr [edi + 0x548], eax */ W32((u32)(r_edi+0x548u), r_eax);
    /* 00568769: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0056876c: mov dword ptr [edi + 0x54c], edx */ W32((u32)(r_edi+0x54cu), r_edx);
    /* 00568772: mov dword ptr [edi + 0x480], 0 */ W32((u32)(r_edi+0x480u), 0x0u);
    /* 0056877c: mov dword ptr [edi + 0x550], eax */ W32((u32)(r_edi+0x550u), r_eax);
    /* 00568782: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x568787u); f_0082dcbc();
    /* 00568787: fld dword ptr [0x925e04] */ FPUSH(R_F32((u32)(0x925e04u)));
    /* 0056878d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0056878f: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00568792: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00568795: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 00568798: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x56879du); f_0082ddd8();
    /* 0056879d: fld dword ptr [0x925e04] */ FPUSH(R_F32((u32)(0x925e04u)));
    /* 005687a3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005687a5: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 005687a8: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 005687ab: mov dword ptr [edi + 0x538], 0x40649249 */ W32((u32)(r_edi+0x538u), 0x40649249u);
    /* 005687b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005687b6: ret 4 */ FN_RET(0x005685f4); r_esp += 8; return;
}

void f_005687bc(void) /* sub_5687BC */
{
    FN_ENTER(0x005687bc);
    /* 005687bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005687bd: mov esi, ecx */ r_esi = r_ecx;
    /* 005687bf: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5687c4u); f_004f7c84();
    /* 005687c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005687c6: je 0x5687d4 */ if (fZ) goto L_005687d4;
L_005687c8:; BB(0x005687c8);
    /* 005687c8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005687ca: mov ecx, esi */ r_ecx = r_esi;
    /* 005687cc: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5687d2u); call_ind(t); }
    /* 005687d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005687d3: ret  */ FN_RET(0x005687bc); r_esp += 4; return;
L_005687d4:; BB(0x005687d4);
    /* 005687d4: movzx eax, word ptr [esi + 0x47c] */ r_eax = (u32)R16((u32)(r_esi+0x47cu));
    /* 005687db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005687dc: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5687e1u); f_007b4d18();
    /* 005687e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005687e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005687e4: je 0x5687ed */ if (fZ) goto L_005687ed;
L_005687e6:; BB(0x005687e6);
    /* 005687e6: mov ecx, eax */ r_ecx = r_eax;
    /* 005687e8: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5687edu); f_008173b4();
L_005687ed:; BB(0x005687ed);
    /* 005687ed: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005687ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005687f1: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x5687f7u); call_ind(t); }
    /* 005687f7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005687fa: je 0x56884f */ if (fZ) goto L_0056884f;
L_005687fc:; BB(0x005687fc);
    /* 005687fc: mov eax, dword ptr [esi + 0x518] */ r_eax = R32((u32)(r_esi+0x518u));
    /* 00568802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568804: je 0x56882b */ if (fZ) goto L_0056882b;
L_00568806:; BB(0x00568806);
    /* 00568806: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00568809: mov dword ptr [esi + 0x518], eax */ W32((u32)(r_esi+0x518u), r_eax);
    /* 0056880f: jne 0x56882b */ if (!fZ) goto L_0056882b;
L_00568811:; BB(0x00568811);
    /* 00568811: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00568818: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056881b: je 0x56882b */ if (fZ) goto L_0056882b;
L_0056881d:; BB(0x0056881d);
    /* 0056881d: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568820: je 0x56882b */ if (fZ) goto L_0056882b;
L_00568822:; BB(0x00568822);
    /* 00568822: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00568824: mov ecx, esi */ r_ecx = r_esi;
    /* 00568826: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56882bu); f_0051f62c();
L_0056882b:; BB(0x0056882b);
    /* 0056882b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0056882d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056882f: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x568835u); call_ind(t); }
L_00568835:; BB(0x00568835);
    /* 00568835: mov ecx, esi */ r_ecx = r_esi;
    /* 00568837: call 0x564fb4 */ r_esp -= 4; W32(r_esp, 0x56883cu); f_00564fb4();
    /* 0056883c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056883e: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x568843u); f_006401f0();
    /* 00568843: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00568845: mov ecx, esi */ r_ecx = r_esi;
    /* 00568847: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x56884du); call_ind(t); }
    /* 0056884d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056884e: ret  */ FN_RET(0x005687bc); r_esp += 4; return;
L_0056884f:; BB(0x0056884f);
    /* 0056884f: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00568856: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568858: je 0x568861 */ if (fZ) goto L_00568861;
L_0056885a:; BB(0x0056885a);
    /* 0056885a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056885d: je 0x56886d */ if (fZ) goto L_0056886d;
L_0056885f:; BB(0x0056885f);
    /* 0056885f: jmp 0x568835 */ goto L_00568835;
L_00568861:; BB(0x00568861);
    /* 00568861: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00568863: mov ecx, esi */ r_ecx = r_esi;
    /* 00568865: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x56886bu); call_ind(t); }
    /* 0056886b: jmp 0x568835 */ goto L_00568835;
L_0056886d:; BB(0x0056886d);
    /* 0056886d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056886f: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00568872: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 00568875: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00568878: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0056887b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0056887e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00568881: mov ecx, esi */ r_ecx = r_esi;
    /* 00568883: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568888u); f_0051f62c();
    /* 00568888: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0056888a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056888c: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x568892u); call_ind(t); }
    /* 00568892: jmp 0x568835 */ goto L_00568835;
}

void f_00568880(void)
{
    FN_ENTER(0x00568880);
    goto L_00568880;
L_00568835:; BB(0x00568835);
    /* 00568835: mov ecx, esi */ r_ecx = r_esi;
    /* 00568837: call 0x564fb4 */ r_esp -= 4; W32(r_esp, 0x56883cu); f_00564fb4();
    /* 0056883c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056883e: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x568843u); f_006401f0();
    /* 00568843: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00568845: mov ecx, esi */ r_ecx = r_esi;
    /* 00568847: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x56884du); call_ind(t); }
    /* 0056884d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056884e: ret  */ FN_RET(0x00568880); r_esp += 4; return;
L_00568880:; BB(0x00568880);
    /* 00568880: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568881: mov ecx, esi */ r_ecx = r_esi;
    /* 00568883: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568888u); f_0051f62c();
    /* 00568888: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0056888a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056888c: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x568892u); call_ind(t); }
    /* 00568892: jmp 0x568835 */ goto L_00568835;
}

void f_00568894(void) /* sub_568894 */
{
    FN_ENTER(0x00568894);
    /* 00568894: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00568895: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00568896: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568897: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00568898: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056889b: mov edi, ecx */ r_edi = r_ecx;
    /* 0056889d: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5688a2u); f_004f7c84();
    /* 005688a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005688a4: je 0x5688b8 */ if (fZ) goto L_005688b8;
L_005688a6:; BB(0x005688a6);
    /* 005688a6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005688a8: mov ecx, edi */ r_ecx = r_edi;
    /* 005688aa: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5688b0u); call_ind(t); }
    /* 005688b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005688b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005688b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005688b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005688b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005688b7: ret  */ FN_RET(0x00568894); r_esp += 4; return;
L_005688b8:; BB(0x005688b8);
    /* 005688b8: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 005688be: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005688c0: jne 0x568b13 */ if (!fZ) goto L_00568b13;
L_005688c6:; BB(0x005688c6);
    /* 005688c6: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005688cd: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005688d0: je 0x568b13 */ if (fZ) goto L_00568b13;
L_005688d6:; BB(0x005688d6);
    /* 005688d6: mov edx, dword ptr [edi + 0x46c] */ r_edx = R32((u32)(r_edi+0x46cu));
    /* 005688dc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005688de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005688e0: je 0x5688ff */ if (fZ) goto L_005688ff;
L_005688e2:; BB(0x005688e2);
    /* 005688e2: lea ebx, [edi + 0x3fc] */ r_ebx = (u32)(r_edi+0x3fcu);
    /* 005688e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005688ea: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5688efu); f_005771a4();
    /* 005688ef: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005688f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005688f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005688f8: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5688fdu); f_0057725c();
    /* 005688fd: mov esi, eax */ r_esi = r_eax;
L_005688ff:; BB(0x005688ff);
    /* 005688ff: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x568904u); f_00694cc8();
    /* 00568904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568906: je 0x56892b */ if (fZ) goto L_0056892b;
L_00568908:; BB(0x00568908);
    /* 00568908: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056890d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056890f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00568911: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00568917: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056891d: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x568920u); call_ind(t); }
    /* 00568920: mov ebp, eax */ r_ebp = r_eax;
    /* 00568922: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568924: jne 0x568949 */ if (!fZ) goto L_00568949;
L_00568926:; BB(0x00568926);
    /* 00568926: jmp 0x568b0e */ goto L_00568b0e;
L_0056892b:; BB(0x0056892b);
    /* 0056892b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568930: mov ecx, edi */ r_ecx = r_edi;
    /* 00568932: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00568934: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568939: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x56893cu); call_ind(t); }
    /* 0056893c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056893e: je 0x568b0e */ if (fZ) goto L_00568b0e;
L_00568944:; BB(0x00568944);
    /* 00568944: mov ebp, 1 */ r_ebp = 0x1u;
L_00568949:; BB(0x00568949);
    /* 00568949: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00568950: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568953: je 0x5689f0 */ if (fZ) goto L_005689f0;
L_00568959:; BB(0x00568959);
    /* 00568959: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 0056895c: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00568960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568961: lea eax, [edi + 0x250] */ r_eax = (u32)(r_edi+0x250u);
    /* 00568967: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00568968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568969: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x56896eu); f_007a8d98();
    /* 0056896e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568971: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x568976u); f_0082d7b0();
    /* 00568976: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00568979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056897b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x568980u); f_0082d838();
    /* 00568980: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568982: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00568987: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568989: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056898b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x568990u); f_00830b74();
    /* 00568990: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00568994: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568996: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x56899bu); f_00830c04();
    /* 0056899b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0056899e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005689a0: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5689a5u); f_0082e9e4();
    /* 005689a5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005689a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005689aa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5689afu); f_0082d8bc();
    /* 005689af: push 0xc0400000 */ { u32 v = 0xc0400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005689b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005689b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005689b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005689ba: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5689bfu); f_00830b74();
    /* 005689bf: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005689c4: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005689c9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005689ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005689d0: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5689d5u); f_0082fa0c();
    /* 005689d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005689d7: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005689dc: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5689e1u); f_0082e9e4();
    /* 005689e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005689e3: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x5689e8u); f_0052d46c();
    /* 005689e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005689e9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5689eeu); f_0082da80();
    /* 005689ee: jmp 0x5689f3 */ goto L_005689f3;
L_005689f0:; BB(0x005689f0);
    /* 005689f0: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
L_005689f3:; BB(0x005689f3);
    /* 005689f3: mov ecx, edi */ r_ecx = r_edi;
    /* 005689f5: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5689fau); f_00520608();
    /* 005689fa: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005689fd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x568a02u); f_00829cc8();
    /* 00568a02: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x568a07u); f_0082d7b0();
    /* 00568a07: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00568a0e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568a11: je 0x568b59 */ if (fZ) goto L_00568b59;
L_00568a17:; BB(0x00568a17);
    /* 00568a17: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568a1a: je 0x568b59 */ if (fZ) goto L_00568b59;
L_00568a20:; BB(0x00568a20);
    /* 00568a20: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568a22: je 0x568a33 */ if (fZ) goto L_00568a33;
L_00568a24:; BB(0x00568a24);
    /* 00568a24: mov edx, dword ptr [edi + 0x3fc] */ r_edx = R32((u32)(r_edi+0x3fcu));
    /* 00568a2a: lea ecx, [edi + 0x3fc] */ r_ecx = (u32)(r_edi+0x3fcu);
    /* 00568a30: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x568a33u); call_ind(t); }
L_00568a33:; BB(0x00568a33);
    /* 00568a33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00568a35: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x568a3au); f_0082d838();
    /* 00568a3a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00568a3d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568a3f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x568a44u); f_0082d8bc();
    /* 00568a44: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568a49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568a4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568a4f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x568a54u); f_00830b74();
    /* 00568a54: mov edx, dword ptr [edi + 0x46c] */ r_edx = R32((u32)(r_edi+0x46cu));
    /* 00568a5a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568a5d: je 0x568b3e */ if (fZ) goto L_00568b3e;
L_00568a63:; BB(0x00568a63);
    /* 00568a63: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568a68: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568a6d: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568a72: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568a74: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x568a79u); f_0082fa0c();
L_00568a79:; BB(0x00568a79);
    /* 00568a79: mov ebx, dword ptr [edi + 0x480] */ r_ebx = R32((u32)(r_edi+0x480u));
    /* 00568a7f: mov dword ptr [0xa73d5c], 0 */ W32((u32)(0xa73d5cu), 0x0u);
    /* 00568a89: mov edx, ebx */ r_edx = r_ebx;
    /* 00568a8b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00568a8e: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00568a90: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00568a92: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00568a94: mov dword ptr [0xa73d58], ebx */ W32((u32)(0xa73d58u), r_ebx);
    /* 00568a9a: mov ecx, 0x564734 */ r_ecx = 0x564734u;
    /* 00568a9f: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x568aa4u); f_0082fac4();
    /* 00568aa4: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x568aa9u); f_00520d08();
    /* 00568aa9: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x568aaeu); f_00578b38();
    /* 00568aae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ab0: jne 0x568ac0 */ if (!fZ) goto L_00568ac0;
L_00568ab2:; BB(0x00568ab2);
    /* 00568ab2: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ab5: je 0x568b1b */ if (fZ) goto L_00568b1b;
L_00568ab7:; BB(0x00568ab7);
    /* 00568ab7: mov ecx, edi */ r_ecx = r_edi;
    /* 00568ab9: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x568abeu); f_007aa7b8();
    /* 00568abe: jmp 0x568ad7 */ goto L_00568ad7;
L_00568ac0:; BB(0x00568ac0);
    /* 00568ac0: mov ecx, edi */ r_ecx = r_edi;
    /* 00568ac2: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x568ac7u); f_008173d0();
    /* 00568ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ac9: jne 0x568ad7 */ if (!fZ) goto L_00568ad7;
L_00568acb:; BB(0x00568acb);
    /* 00568acb: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ace: je 0x568b24 */ if (fZ) goto L_00568b24;
L_00568ad0:; BB(0x00568ad0);
    /* 00568ad0: mov ecx, edi */ r_ecx = r_edi;
    /* 00568ad2: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x568ad7u); f_007aa7b8();
L_00568ad7:; BB(0x00568ad7);
    /* 00568ad7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568ad9: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x568adeu); f_0082fac4();
    /* 00568ade: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00568ae5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ae8: je 0x568b2d */ if (fZ) goto L_00568b2d;
L_00568aea:; BB(0x00568aea);
    /* 00568aea: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568aed: je 0x568b2d */ if (fZ) goto L_00568b2d;
L_00568aef:; BB(0x00568aef);
    /* 00568aef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568af1: je 0x568b02 */ if (fZ) goto L_00568b02;
L_00568af3:; BB(0x00568af3);
    /* 00568af3: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00568af9: lea ecx, [edi + 0x3fc] */ r_ecx = (u32)(r_edi+0x3fcu);
    /* 00568aff: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x568b02u); call_ind(t); }
L_00568b02:; BB(0x00568b02);
    /* 00568b02: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x568b07u); f_0082da80();
    /* 00568b07: mov ecx, edi */ r_ecx = r_edi;
    /* 00568b09: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x568b0eu); f_00520610();
L_00568b0e:; BB(0x00568b0e);
    /* 00568b0e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x568b13u); f_0082dab0();
L_00568b13:; BB(0x00568b13);
    /* 00568b13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00568b16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00568b17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568b18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568b19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568b1a: ret  */ FN_RET(0x00568894); r_esp += 4; return;
L_00568b1b:; BB(0x00568b1b);
    /* 00568b1b: mov ecx, edi */ r_ecx = r_edi;
    /* 00568b1d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x568b22u); f_007aa668();
    /* 00568b22: jmp 0x568ad7 */ goto L_00568ad7;
L_00568b24:; BB(0x00568b24);
    /* 00568b24: mov ecx, edi */ r_ecx = r_edi;
    /* 00568b26: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x568b2bu); f_007aa668();
    /* 00568b2b: jmp 0x568ad7 */ goto L_00568ad7;
L_00568b2d:; BB(0x00568b2d);
    /* 00568b2d: mov eax, dword ptr [edi + 0x3e0] */ r_eax = R32((u32)(r_edi+0x3e0u));
    /* 00568b33: lea ecx, [edi + 0x3e0] */ r_ecx = (u32)(r_edi+0x3e0u);
    /* 00568b39: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x568b3cu); call_ind(t); }
    /* 00568b3c: jmp 0x568b02 */ goto L_00568b02;
L_00568b3e:; BB(0x00568b3e);
    /* 00568b3e: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568b43: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568b48: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568b4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568b4f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x568b54u); f_0082fa0c();
    /* 00568b54: jmp 0x568a79 */ goto L_00568a79;
L_00568b59:; BB(0x00568b59);
    /* 00568b59: mov edx, dword ptr [edi + 0x3e0] */ r_edx = R32((u32)(r_edi+0x3e0u));
    /* 00568b5f: lea ecx, [edi + 0x3e0] */ r_ecx = (u32)(r_edi+0x3e0u);
    /* 00568b65: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x568b68u); call_ind(t); }
    /* 00568b68: jmp 0x568a33 */ goto L_00568a33;
}

void f_00568b70(void) /* sub_568B70 */
{
    FN_ENTER(0x00568b70);
    /* 00568b70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00568b71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568b72: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00568b74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568b76: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x568b7bu); f_0051f814();
    /* 00568b7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00568b7d: je 0x568baf */ if (fZ) goto L_00568baf;
L_00568b7f:; BB(0x00568b7f);
    /* 00568b7f: mov esi, dword ptr [ebp + 0x46c] */ r_esi = R32((u32)(r_ebp+0x46cu));
    /* 00568b85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568b87: call 0x564e98 */ r_esp -= 4; W32(r_esp, 0x568b8cu); f_00564e98();
    /* 00568b8c: cmp esi, dword ptr [ebp + 0x46c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x46cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568b92: je 0x568ba8 */ if (fZ) goto L_00568ba8;
L_00568b94:; BB(0x00568b94);
    /* 00568b94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568b96: je 0x568ba1 */ if (fZ) goto L_00568ba1;
L_00568b98:; BB(0x00568b98);
    /* 00568b98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568b9a: call 0x564720 */ r_esp -= 4; W32(r_esp, 0x568b9fu); f_00564720();
    /* 00568b9f: jmp 0x568ba8 */ goto L_00568ba8;
L_00568ba1:; BB(0x00568ba1);
    /* 00568ba1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568ba3: call 0x564fa0 */ r_esp -= 4; W32(r_esp, 0x568ba8u); f_00564fa0();
L_00568ba8:; BB(0x00568ba8);
    /* 00568ba8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568baa: call 0x564fb4 */ r_esp -= 4; W32(r_esp, 0x568bafu); f_00564fb4();
L_00568baf:; BB(0x00568baf);
    /* 00568baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568bb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568bb1: ret  */ FN_RET(0x00568b70); r_esp += 4; return;
}

void f_00568bb4(void) /* sub_568BB4 */
{
    FN_ENTER(0x00568bb4);
    /* 00568bb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00568bb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00568bb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568bb7: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568bba: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00568bbc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568bbe: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x568bc3u); f_0051f814();
    /* 00568bc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568bc5: je 0x568c87 */ if (fZ) goto L_00568c87;
L_00568bcb:; BB(0x00568bcb);
    /* 00568bcb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00568bcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568bcf: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568bd4u); f_0051f7fc();
    /* 00568bd4: push dword ptr [ebp + 0x474] */ { u32 v = R32((u32)(r_ebp+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 00568bda: push 0x921594 */ { u32 v = 0x921594u; r_esp -= 4; W32(r_esp, v); }
    /* 00568bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568be0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568be5u); f_0061cdb0();
    /* 00568be5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568be8: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 00568bee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568bf1: je 0x568ea2 */ if (fZ) goto L_00568ea2;
L_00568bf7:; BB(0x00568bf7);
    /* 00568bf7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00568bf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568bfb: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568c00u); f_0051f7fc();
    /* 00568c00: push 0x926154 */ { u32 v = 0x926154u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c06: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568c0bu); f_0061cdb0();
    /* 00568c0b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00568c0e:; BB(0x00568c0e);
    /* 00568c0e: mov eax, dword ptr [ebp + 0x46c] */ r_eax = R32((u32)(r_ebp+0x46cu));
    /* 00568c14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568c16: je 0x568c31 */ if (fZ) goto L_00568c31;
L_00568c18:; BB(0x00568c18);
    /* 00568c18: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c1c: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568c21u); f_0051f7fc();
    /* 00568c21: push 0x9215a0 */ { u32 v = 0x9215a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c27: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568c2cu); f_0061cdb0();
    /* 00568c2c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c2f: jmp 0x568c48 */ goto L_00568c48;
L_00568c31:; BB(0x00568c31);
    /* 00568c31: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c35: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568c3au); f_0051f7fc();
    /* 00568c3a: push 0x9215ac */ { u32 v = 0x9215acu; r_esp -= 4; W32(r_esp, v); }
    /* 00568c3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c40: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568c45u); f_0061cdb0();
    /* 00568c45: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00568c48:; BB(0x00568c48);
    /* 00568c48: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c4c: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568c51u); f_0051f7fc();
    /* 00568c51: push 0x926160 */ { u32 v = 0x926160u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c57: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568c5cu); f_0061cdb0();
    /* 00568c5c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c60: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568c65u); f_0051f7fc();
    /* 00568c65: push 0x926170 */ { u32 v = 0x926170u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c6b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568c70u); f_0061cdb0();
    /* 00568c70: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c74: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568c79u); f_0051f7fc();
    /* 00568c79: push 0x926180 */ { u32 v = 0x926180u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c7f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568c84u); f_0061cdb0();
    /* 00568c84: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00568c87:; BB(0x00568c87);
    /* 00568c87: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c8c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568c8e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00568c91: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568c96: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x568c99u); call_ind(t); }
    /* 00568c99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568c9b: je 0x568ddc */ if (fZ) goto L_00568ddc;
L_00568ca1:; BB(0x00568ca1);
    /* 00568ca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00568ca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568ca5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568ca7: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x568cacu); f_00520cf8();
    /* 00568cac: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00568caf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x568cb4u); f_00829cc8();
    /* 00568cb4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x568cb9u); f_0082d7b0();
    /* 00568cb9: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00568cbc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x568cc1u); f_0082d838();
    /* 00568cc1: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00568cc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568cc6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x568ccbu); f_0082d8bc();
    /* 00568ccb: mov eax, dword ptr [ebp + 0x46c] */ r_eax = R32((u32)(r_ebp+0x46cu));
    /* 00568cd1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568cd4: je 0x568e87 */ if (fZ) goto L_00568e87;
L_00568cda:; BB(0x00568cda);
    /* 00568cda: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568cdf: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ce4: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ce9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568ceb: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x568cf0u); f_0082fa0c();
L_00568cf0:; BB(0x00568cf0);
    /* 00568cf0: fld dword ptr [ebp + 0x368] */ FPUSH(R_F32((u32)(r_ebp+0x368u)));
    /* 00568cf6: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00568cfa: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00568cff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00568d04: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00568d08: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00568d0c: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00568d10: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00568d14: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00568d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00568d1a: jl 0x568d28 */ if ((fS!=fO)) goto L_00568d28;
L_00568d1c:; BB(0x00568d1c);
    /* 00568d1c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568d1f: jl 0x568d2a */ if ((fS!=fO)) goto L_00568d2a;
L_00568d21:; BB(0x00568d21);
    /* 00568d21: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00568d26: jmp 0x568d2a */ goto L_00568d2a;
L_00568d28:; BB(0x00568d28);
    /* 00568d28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00568d2a:; BB(0x00568d2a);
    /* 00568d2a: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 00568d30: mov esi, dword ptr [ebp + 0xdc] */ r_esi = R32((u32)(r_ebp+0xdcu));
    /* 00568d36: fld dword ptr [ebp + 0x36c] */ FPUSH(R_F32((u32)(r_ebp+0x36cu)));
    /* 00568d3c: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00568d40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568d42: mov edi, dword ptr [edx + eax*8 + 4] */ r_edi = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00568d46: fcomp dword ptr [0x925dc4] */ fx_compare(ST(0), R_F32((u32)(0x925dc4u))); FPOP();
    /* 00568d4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00568d4e: mov esi, dword ptr [esi + edi*8 + 4] */ r_esi = R32((u32)(r_esi+r_edi*8+0x4u));
    /* 00568d52: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00568d54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568d56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00568d57: jae 0x568d65 */ if (!fC) goto L_00568d65;
L_00568d59:; BB(0x00568d59);
    /* 00568d59: fld dword ptr [0x925dc4] */ FPUSH(R_F32((u32)(0x925dc4u)));
    /* 00568d5f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00568d63: jmp 0x568d9e */ goto L_00568d9e;
L_00568d65:; BB(0x00568d65);
    /* 00568d65: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00568d69: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00568d6c: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00568d6f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00568d73: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00568d77: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00568d7a: fadd dword ptr [eax*4 + 0x925ce8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x925ce8u));
    /* 00568d81: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00568d83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00568d85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00568d86: jae 0x568d9e */ if (!fC) goto L_00568d9e;
L_00568d88:; BB(0x00568d88);
    /* 00568d88: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00568d8c: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00568d90: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00568d93: fadd dword ptr [edx*4 + 0x925ce8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x925ce8u));
    /* 00568d9a: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_00568d9e:; BB(0x00568d9e);
    /* 00568d9e: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568da3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00568da4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568da5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568da7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x568dacu); f_00830b74();
    /* 00568dac: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x568db1u); f_00578b38();
    /* 00568db1: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x568db6u); f_0082fa9c();
    /* 00568db6: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00568dba: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00568dbd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00568dc1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00568dc4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00568dc8: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x568dcdu); f_0083046c();
    /* 00568dcd: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x568dd2u); f_0082faac();
    /* 00568dd2: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x568dd7u); f_0082dab0();
    /* 00568dd7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x568ddcu); f_0082da80();
L_00568ddc:; BB(0x00568ddc);
    /* 00568ddc: mov esi, dword ptr [0xa73d60] */ r_esi = R32((u32)(0xa73d60u));
    /* 00568de2: mov edi, dword ptr [ebp + 0x474] */ r_edi = R32((u32)(r_ebp+0x474u));
    /* 00568de8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568dea: je 0x568e0a */ if (fZ) goto L_00568e0a;
L_00568dec:; BB(0x00568dec);
    /* 00568dec: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00568df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568df1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x568df6u); f_007b4d18();
    /* 00568df6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568df9: je 0x568e03 */ if (fZ) goto L_00568e03;
L_00568dfb:; BB(0x00568dfb);
    /* 00568dfb: cmp edi, dword ptr [eax + 0x474] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x474u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e01: je 0x568e0c */ if (fZ) goto L_00568e0c;
L_00568e03:; BB(0x00568e03);
    /* 00568e03: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 00568e06: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e08: jne 0x568dec */ if (!fZ) goto L_00568dec;
L_00568e0a:; BB(0x00568e0a);
    /* 00568e0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00568e0c:; BB(0x00568e0c);
    /* 00568e0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e0e: je 0x568e36 */ if (fZ) goto L_00568e36;
L_00568e10:; BB(0x00568e10);
    /* 00568e10: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00568e15: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568e1a: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00568e20: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568e26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568e27: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568e2cu); f_0061cdb0();
    /* 00568e2c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e2f: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00568e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568e33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568e34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568e35: ret  */ FN_RET(0x00568bb4); r_esp += 4; return;
L_00568e36:; BB(0x00568e36);
    /* 00568e36: fld dword ptr [0x925dbc] */ FPUSH(R_F32((u32)(0x925dbcu)));
    /* 00568e3c: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 00568e40: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00568e46: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00568e4c: mov esi, dword ptr [ebp + 0x308] */ r_esi = R32((u32)(r_ebp+0x308u));
    /* 00568e52: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00568e58: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00568e5c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00568e60: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00568e64: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00568e68: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00568e6c: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00568e71: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568e76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00568e77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568e78: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568e7du); f_0061cdb0();
    /* 00568e7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e80: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00568e83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568e84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568e85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00568e86: ret  */ FN_RET(0x00568bb4); r_esp += 4; return;
L_00568e87:; BB(0x00568e87);
    /* 00568e87: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568e8c: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568e91: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00568e96: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568e98: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x568e9du); f_0082fa0c();
    /* 00568e9d: jmp 0x568cf0 */ goto L_00568cf0;
L_00568ea2:; BB(0x00568ea2);
    /* 00568ea2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ea6: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x568eabu); f_0051f7fc();
    /* 00568eab: push 0x926148 */ { u32 v = 0x926148u; r_esp -= 4; W32(r_esp, v); }
    /* 00568eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568eb1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x568eb6u); f_0061cdb0();
    /* 00568eb6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568eb9: jmp 0x568c0e */ goto L_00568c0e;
}

void f_00568ec0(void) /* sub_568EC0 */
{
    FN_ENTER(0x00568ec0);
    /* 00568ec0: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00568ec7: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00568eca: je 0x568ed8 */ if (fZ) goto L_00568ed8;
L_00568ecc:; BB(0x00568ecc);
    /* 00568ecc: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00568ecf: je 0x568ed8 */ if (fZ) goto L_00568ed8;
L_00568ed1:; BB(0x00568ed1);
    /* 00568ed1: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ed3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568ed8u); f_0051f62c();
L_00568ed8:; BB(0x00568ed8);
    /* 00568ed8: ret  */ FN_RET(0x00568ec0); r_esp += 4; return;
}

void f_00568edc(void) /* sub_568EDC */
{
    FN_ENTER(0x00568edc);
    /* 00568edc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00568ee3: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00568ee6: je 0x568eef */ if (fZ) goto L_00568eef;
L_00568ee8:; BB(0x00568ee8);
    /* 00568ee8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00568eea: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x568eefu); f_0051f62c();
L_00568eef:; BB(0x00568eef);
    /* 00568eef: ret  */ FN_RET(0x00568edc); r_esp += 4; return;
}

void f_00568ef0(void)
{
    FN_ENTER(0x00568ef0);
    /* 00568ef0: mov dword ptr [0xa73d10], 0x3f800000 */ W32((u32)(0xa73d10u), 0x3f800000u);
    /* 00568efa: mov ecx, 0xa73d68 */ r_ecx = 0xa73d68u;
    /* 00568eff: mov dword ptr [0xa73d14], 0x41000000 */ W32((u32)(0xa73d14u), 0x41000000u);
    /* 00568f09: mov dword ptr [0xa73d18], 0x3fc00000 */ W32((u32)(0xa73d18u), 0x3fc00000u);
    /* 00568f13: mov dword ptr [0xa73d0c], 0x46afc800 */ W32((u32)(0xa73d0cu), 0x46afc800u);
    /* 00568f1d: mov dword ptr [0xa73d04], 0x461c4000 */ W32((u32)(0xa73d04u), 0x461c4000u);
    /* 00568f27: mov dword ptr [0xa73d1c], 0x44610000 */ W32((u32)(0xa73d1cu), 0x44610000u);
    /* 00568f31: mov dword ptr [0xa73d08], 0x44610000 */ W32((u32)(0xa73d08u), 0x44610000u);
    /* 00568f3b: mov dword ptr [0xa73d00], 0x41800000 */ W32((u32)(0xa73d00u), 0x41800000u);
    /* 00568f45: mov dword ptr [0xa73d20], 0x42040000 */ W32((u32)(0xa73d20u), 0x42040000u);
    /* 00568f4f: mov dword ptr [0x9be540], 0 */ W32((u32)(0x9be540u), 0x0u);
    /* 00568f59: mov dword ptr [0x9be344], 0x40c00000 */ W32((u32)(0x9be344u), 0x40c00000u);
    /* 00568f63: mov dword ptr [0x9be370], 0x40c00000 */ W32((u32)(0x9be370u), 0x40c00000u);
    /* 00568f6d: mov dword ptr [0x9be498], 0x3f800000 */ W32((u32)(0x9be498u), 0x3f800000u);
    /* 00568f77: mov dword ptr [0x9be4a8], 0x3f800000 */ W32((u32)(0x9be4a8u), 0x3f800000u);
    /* 00568f81: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x568f86u); f_00568fa8();
    /* 00568f86: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568f8b: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x568f90u); f_0085909d();
    /* 00568f90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568f91: mov ecx, 0xa73d60 */ r_ecx = 0xa73d60u;
    /* 00568f96: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x568f9bu); f_00568fa8();
    /* 00568f9b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568fa0: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x568fa5u); f_0085909d();
    /* 00568fa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568fa6: ret  */ FN_RET(0x00568ef0); r_esp += 4; return;
}

void f_00568fa8(void) /* sub_568FA8 */
{
    FN_ENTER(0x00568fa8);
    /* 00568fa8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00568faa: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00568fac: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00568faf: ret  */ FN_RET(0x00568fa8); r_esp += 4; return;
}

void f_00568fb0(void) /* sub_568FB0 */
{
    FN_ENTER(0x00568fb0);
    /* 00568fb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00568fb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568fb4: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x568fb9u); f_00482a20();
    /* 00568fb9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00568fbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568fbe: jne 0x568fd2 */ if (!fZ) goto L_00568fd2;
L_00568fc0:; BB(0x00568fc0);
    /* 00568fc0: push 0x9be528 */ { u32 v = 0x9be528u; r_esp -= 4; W32(r_esp, v); }
    /* 00568fc5: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x568fcau); f_0051f6b0();
    /* 00568fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568fcb: mov dword ptr [0xa73d28], eax */ W32((u32)(0xa73d28u), r_eax);
    /* 00568fd0: jmp 0x568fe2 */ goto L_00568fe2;
L_00568fd2:; BB(0x00568fd2);
    /* 00568fd2: push 0x9be4e4 */ { u32 v = 0x9be4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00568fd7: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x568fdcu); f_0051f6b0();
    /* 00568fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568fdd: mov dword ptr [0xa73d28], eax */ W32((u32)(0xa73d28u), r_eax);
L_00568fe2:; BB(0x00568fe2);
    /* 00568fe2: mov ecx, 0xa73d68 */ r_ecx = 0xa73d68u;
    /* 00568fe7: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x568fecu); f_00568fa8();
    /* 00568fec: mov ecx, 0xa73d60 */ r_ecx = 0xa73d60u;
    /* 00568ff1: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x568ff6u); f_00568fa8();
    /* 00568ff6: mov dword ptr [0xa73d4c], 0 */ W32((u32)(0xa73d4cu), 0x0u);
    /* 00569000: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569002: mov dword ptr [0xa73d5c], eax */ W32((u32)(0xa73d5cu), r_eax);
    /* 00569007: mov dword ptr [0xa73d50], 0 */ W32((u32)(0xa73d50u), 0x0u);
    /* 00569011: mov dword ptr [0xa73d58], eax */ W32((u32)(0xa73d58u), r_eax);
    /* 00569016: mov dword ptr [0xa73d54], 0 */ W32((u32)(0xa73d54u), 0x0u);
    /* 00569020: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569022: mov ebx, eax */ r_ebx = r_eax;
L_00569024:; BB(0x00569024);
    /* 00569024: push dword ptr [ebx + 0x925d80] */ { u32 v = R32((u32)(r_ebx+0x925d80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056902a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56902fu); f_0077a684();
    /* 0056902f: push dword ptr [ebx + 0x925d78] */ { u32 v = R32((u32)(r_ebx+0x925d78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569035: mov dword ptr [ebx + 0xa73d44], eax */ W32((u32)(r_ebx+0xa73d44u), r_eax);
    /* 0056903b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x569040u); f_0077a698();
    /* 00569040: push dword ptr [ebx + 0x925d70] */ { u32 v = R32((u32)(r_ebx+0x925d70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569046: mov dword ptr [ebx + 0xa73d3c], eax */ W32((u32)(r_ebx+0xa73d3cu), r_eax);
    /* 0056904c: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x569051u); f_0077a6b4();
    /* 00569051: push dword ptr [ebx + 0x925d68] */ { u32 v = R32((u32)(r_ebx+0x925d68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00569057: mov dword ptr [ebx + 0xa73d34], eax */ W32((u32)(r_ebx+0xa73d34u), r_eax);
    /* 0056905d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x569062u); f_0077a6cc();
    /* 00569062: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569065: mov dword ptr [ebx + 0xa73d2c], eax */ W32((u32)(r_ebx+0xa73d2cu), r_eax);
    /* 0056906b: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056906e: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569071: jl 0x569024 */ if ((fS!=fO)) goto L_00569024;
L_00569073:; BB(0x00569073);
    /* 00569073: mov eax, dword ptr [0x925cd8] */ r_eax = R32((u32)(0x925cd8u));
    /* 00569078: movzx edx, word ptr [0x925cdc] */ r_edx = (u32)R16((u32)(0x925cdcu));
    /* 0056907f: movzx ecx, word ptr [0x925cde] */ r_ecx = (u32)R16((u32)(0x925cdeu));
    /* 00569086: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0056908a: movzx eax, word ptr [0x925ce0] */ r_eax = (u32)R16((u32)(0x925ce0u));
    /* 00569091: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 00569096: mov edx, dword ptr [0xa73d28] */ r_edx = R32((u32)(0xa73d28u));
    /* 0056909c: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 005690a1: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 005690a6: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005690ac: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005690b2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005690b5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005690b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005690b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005690bb: push dword ptr [0x9be2ec] */ { u32 v = R32((u32)(0x9be2ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005690c1: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005690c4: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005690c7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005690c9: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5690ceu); f_00608470();
    /* 005690ce: mov eax, dword ptr [0xa73d28] */ r_eax = R32((u32)(0xa73d28u));
    /* 005690d3: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005690d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005690d8: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005690de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005690e0: push dword ptr [0x9be318] */ { u32 v = R32((u32)(0x9be318u)); r_esp -= 4; W32(r_esp, v); }
    /* 005690e6: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005690e9: push dword ptr [ecx + 0x18] */ { u32 v = R32((u32)(r_ecx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005690ec: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005690ee: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5690f3u); f_00608470();
    /* 005690f3: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005690f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005690f7: ret  */ FN_RET(0x00568fb0); r_esp += 4; return;
}

