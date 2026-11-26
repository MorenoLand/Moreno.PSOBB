#include "protos.h"

void f_00425004(void) /* sub_425004 */
{
    FN_ENTER(0x00425004);
    /* 00425004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00425005: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425008: mov edi, ecx */ r_edi = r_ecx;
    /* 0042500a: mov eax, dword ptr [0x8fb8b4] */ r_eax = R32((u32)(0x8fb8b4u));
    /* 0042500f: mov edx, dword ptr [0x8fb8c4] */ r_edx = R32((u32)(0x8fb8c4u));
    /* 00425015: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 0042501d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00425020: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 00425025: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 0042502d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00425031: mov dword ptr [esp + 8], 0x41f00000 */ W32((u32)(r_esp+0x8u), 0x41f00000u);
    /* 00425039: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0042503c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00425040: mov eax, dword ptr [edi + 0x778] */ r_eax = R32((u32)(r_edi+0x778u));
    /* 00425046: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00425049: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42504eu); f_00420a44();
    /* 0042504e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425050: jne 0x42506b */ if (!fZ) goto L_0042506b;
L_00425052:; BB(0x00425052);
    /* 00425052: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00425055: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425058: mov ecx, edi */ r_ecx = r_edi;
    /* 0042505a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0042505e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042505f: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x425064u); f_0051fc9c();
    /* 00425064: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425068: ret 4 */ FN_RET(0x00425004); r_esp += 8; return;
L_0042506b:; BB(0x0042506b);
    /* 0042506b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042506e: jne 0x4250bc */ if (!fZ) goto L_004250bc;
L_00425070:; BB(0x00425070);
    /* 00425070: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00425074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425075: mov ecx, dword ptr [edi + 0x77c] */ r_ecx = R32((u32)(r_edi+0x77cu));
    /* 0042507b: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x425080u); f_006ac1a4();
    /* 00425080: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00425084: mov edx, dword ptr [edi + 0x77c] */ r_edx = R32((u32)(r_edi+0x77cu));
    /* 0042508a: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 00425090: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00425093: mov eax, dword ptr [edi + 0x77c] */ r_eax = R32((u32)(r_edi+0x77cu));
    /* 00425099: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0042509f: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 004250a6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004250aa: mov ecx, dword ptr [edi + 0x77c] */ r_ecx = R32((u32)(r_edi+0x77cu));
    /* 004250b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004250b2: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 004250b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004250b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004250b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004250b9: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x4250bcu); call_ind(t); }
L_004250bc:; BB(0x004250bc);
    /* 004250bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004250bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004250c0: ret 4 */ FN_RET(0x00425004); r_esp += 8; return;
}

void f_00425044(void)
{
    FN_ENTER(0x00425044);
    /* 00425044: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00425046: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00425049: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42504eu); f_00420a44();
    /* 0042504e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425050: jne 0x42506b */ if (!fZ) goto L_0042506b;
L_00425052:; BB(0x00425052);
    /* 00425052: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00425055: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425058: mov ecx, edi */ r_ecx = r_edi;
    /* 0042505a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0042505e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042505f: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x425064u); f_0051fc9c();
    /* 00425064: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425068: ret 4 */ FN_RET(0x00425044); r_esp += 8; return;
L_0042506b:; BB(0x0042506b);
    /* 0042506b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042506e: jne 0x4250bc */ if (!fZ) goto L_004250bc;
L_00425070:; BB(0x00425070);
    /* 00425070: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00425074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425075: mov ecx, dword ptr [edi + 0x77c] */ r_ecx = R32((u32)(r_edi+0x77cu));
    /* 0042507b: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x425080u); f_006ac1a4();
    /* 00425080: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00425084: mov edx, dword ptr [edi + 0x77c] */ r_edx = R32((u32)(r_edi+0x77cu));
    /* 0042508a: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 00425090: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00425093: mov eax, dword ptr [edi + 0x77c] */ r_eax = R32((u32)(r_edi+0x77cu));
    /* 00425099: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0042509f: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 004250a6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004250aa: mov ecx, dword ptr [edi + 0x77c] */ r_ecx = R32((u32)(r_edi+0x77cu));
    /* 004250b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004250b2: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 004250b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004250b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004250b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004250b9: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x4250bcu); call_ind(t); }
L_004250bc:; BB(0x004250bc);
    /* 004250bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004250bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004250c0: ret 4 */ FN_RET(0x00425044); r_esp += 8; return;
}

void f_004250c4(void) /* sub_4250C4 */
{
    FN_ENTER(0x004250c4);
    /* 004250c4: mov edx, dword ptr [0xa43728] */ r_edx = R32((u32)(0xa43728u));
    /* 004250ca: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004250cd: fmul dword ptr [0x8fbb34] */ ST(0) = ST(0) * R_F32((u32)(0x8fbb34u));
    /* 004250d3: ret  */ FN_RET(0x004250c4); r_esp += 4; return;
}

void f_004250d4(void) /* sub_4250D4 */
{
    FN_ENTER(0x004250d4);
    /* 004250d4: mov dword ptr [0xa4377c], 1 */ W32((u32)(0xa4377cu), 0x1u);
    /* 004250de: ret  */ FN_RET(0x004250d4); r_esp += 4; return;
}

void f_004250e0(void) /* sub_4250E0 */
{
    FN_ENTER(0x004250e0);
    /* 004250e0: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 004250e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004250e7: je 0x4250fe */ if (fZ) goto L_004250fe;
L_004250e9:; BB(0x004250e9);
    /* 004250e9: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 004250ee: mov dword ptr [0xa43778], 1 */ W32((u32)(0xa43778u), 0x1u);
    /* 004250f8: mov word ptr [0xa43774], ax */ W16((u32)(0xa43774u), (u16)r_eax);
L_004250fe:; BB(0x004250fe);
    /* 004250fe: ret  */ FN_RET(0x004250e0); r_esp += 4; return;
}

void f_00425100(void) /* sub_425100 */
{
    FN_ENTER(0x00425100);
    /* 00425100: mov dword ptr [0xa43778], 0 */ W32((u32)(0xa43778u), 0x0u);
    /* 0042510a: ret  */ FN_RET(0x00425100); r_esp += 4; return;
}

void f_0042510c(void)
{
    FN_ENTER(0x0042510c);
    /* 0042510c: fld dword ptr [0x921680] */ FPUSH(R_F32((u32)(0x921680u)));
    /* 00425112: fld dword ptr [0x8fbb24] */ FPUSH(R_F32((u32)(0x8fbb24u)));
    /* 00425118: fld dword ptr [0x8fbb10] */ FPUSH(R_F32((u32)(0x8fbb10u)));
    /* 0042511e: fld dword ptr [0x8fbb0c] */ FPUSH(R_F32((u32)(0x8fbb0cu)));
    /* 00425124: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00425126: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00425128: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042512a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0042512c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042512e: fstp dword ptr [0xa436f8] */ W_F32((u32)(0xa436f8u), ST(0)); FPOP();
    /* 00425134: fstp dword ptr [0xa436ec] */ W_F32((u32)(0xa436ecu), ST(0)); FPOP();
    /* 0042513a: mov eax, dword ptr [0xa436ec] */ r_eax = R32((u32)(0xa436ecu));
    /* 0042513f: fld dword ptr [0x921680] */ FPUSH(R_F32((u32)(0x921680u)));
    /* 00425145: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425147: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00425149: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042514b: fstp dword ptr [0xa436f0] */ W_F32((u32)(0xa436f0u), ST(0)); FPOP();
    /* 00425151: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00425153: fstp dword ptr [0xa436f4] */ W_F32((u32)(0xa436f4u), ST(0)); FPOP();
    /* 00425159: mov dword ptr [0xa43704], 0x3f800000 */ W32((u32)(0xa43704u), 0x3f800000u);
    /* 00425163: mov dword ptr [0xa43708], 0x41000000 */ W32((u32)(0xa43708u), 0x41000000u);
    /* 0042516d: mov dword ptr [0xa436e0], eax */ W32((u32)(0xa436e0u), r_eax);
    /* 00425172: mov dword ptr [0xa4370c], 0x3fc00000 */ W32((u32)(0xa4370cu), 0x3fc00000u);
    /* 0042517c: mov dword ptr [0xa43710], 0x3f000000 */ W32((u32)(0xa43710u), 0x3f000000u);
    /* 00425186: mov dword ptr [0xa436fc], 0x42e60000 */ W32((u32)(0xa436fcu), 0x42e60000u);
    /* 00425190: mov dword ptr [0xa43700], 0x420c0000 */ W32((u32)(0xa43700u), 0x420c0000u);
    /* 0042519a: mov dword ptr [0xa436ac], 0x45c80000 */ W32((u32)(0xa436acu), 0x45c80000u);
    /* 004251a4: mov dword ptr [0xa43714], 0x44610000 */ W32((u32)(0xa43714u), 0x44610000u);
    /* 004251ae: mov dword ptr [0x9a3ecc], 0x41f00000 */ W32((u32)(0x9a3eccu), 0x41f00000u);
    /* 004251b8: mov dword ptr [0x9a3f08], 0x420c0000 */ W32((u32)(0x9a3f08u), 0x420c0000u);
    /* 004251c2: mov dword ptr [0xa43718], 0x441c4000 */ W32((u32)(0xa43718u), 0x441c4000u);
    /* 004251cc: mov dword ptr [0x9a3ee0], 0x41c80000 */ W32((u32)(0x9a3ee0u), 0x41c80000u);
    /* 004251d6: mov dword ptr [0xa436d8], 0x43af0000 */ W32((u32)(0xa436d8u), 0x43af0000u);
    /* 004251e0: mov dword ptr [0xa436e8], 0x43af0000 */ W32((u32)(0xa436e8u), 0x43af0000u);
    /* 004251ea: mov dword ptr [0x9a3df8], 0x42340000 */ W32((u32)(0x9a3df8u), 0x42340000u);
    /* 004251f4: mov dword ptr [0xa4371c], 0x43af0000 */ W32((u32)(0xa4371cu), 0x43af0000u);
    /* 004251fe: mov dword ptr [0xa436e4], 0xbecdb6db */ W32((u32)(0xa436e4u), 0xbecdb6dbu);
    /* 00425208: mov dword ptr [0x9a3db0], 0 */ W32((u32)(0x9a3db0u), 0x0u);
    /* 00425212: mov dword ptr [0x9a39ac], 0x41200000 */ W32((u32)(0x9a39acu), 0x41200000u);
    /* 0042521c: mov dword ptr [0x9a39d8], 0x41200000 */ W32((u32)(0x9a39d8u), 0x41200000u);
    /* 00425226: mov dword ptr [0x9a3a04], 0x41200000 */ W32((u32)(0x9a3a04u), 0x41200000u);
    /* 00425230: mov dword ptr [0x9a3a30], 0x41700000 */ W32((u32)(0x9a3a30u), 0x41700000u);
    /* 0042523a: mov dword ptr [0x9a3a5c], 0x41700000 */ W32((u32)(0x9a3a5cu), 0x41700000u);
    /* 00425244: mov dword ptr [0x9a3a88], 0x41200000 */ W32((u32)(0x9a3a88u), 0x41200000u);
    /* 0042524e: mov dword ptr [0x9a3ab4], 0x41200000 */ W32((u32)(0x9a3ab4u), 0x41200000u);
    /* 00425258: mov dword ptr [0x9a3c18], 0x3f000000 */ W32((u32)(0x9a3c18u), 0x3f000000u);
    /* 00425262: mov dword ptr [0xa436dc], 0x41500000 */ W32((u32)(0xa436dcu), 0x41500000u);
    /* 0042526c: ret  */ FN_RET(0x0042510c); r_esp += 4; return;
}

void f_00425246(void)
{
    FN_ENTER(0x00425246);
    /* 00425246: mov byte ptr [edx], bh */ W8((u32)(r_edx), (u8)(r_ebx>>8));
    /* 00425248: lcall 0xc741, 0x20000000 */ UNSUP(0x00425248, "lcall 0xc741, 0x20000000");
    /* 0042524f: add eax, 0x9a3ab4 */ {  u32 a = r_eax; u32 b = 0x9a3ab4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00425254: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00425256: and byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00425259: add eax, 0x9a3c18 */ {  u32 a = r_eax; u32 b = 0x9a3c18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042525e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00425260: add byte ptr [edi], bh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00425262: mov dword ptr [0xa436dc], 0x41500000 */ W32((u32)(0xa436dcu), 0x41500000u);
    /* 0042526c: ret  */ FN_RET(0x00425246); r_esp += 4; return;
}

void f_00425270(void) /* sub_425270 */
{
    FN_ENTER(0x00425270);
    /* 00425270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00425271: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00425272: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00425273: mov edi, eax */ r_edi = r_eax;
    /* 00425275: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00425278: mov esi, 1 */ r_esi = 0x1u;
    /* 0042527d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042527f: je 0x42528b */ if (fZ) goto L_0042528b;
L_00425281:; BB(0x00425281);
    /* 00425281: call 0x425270 */ r_esp -= 4; W32(r_esp, 0x425286u); f_00425270();
    /* 00425286: mov esi, eax */ r_esi = r_eax;
    /* 00425288: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0042528b:; BB(0x0042528b);
    /* 0042528b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0042528e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00425290: je 0x425299 */ if (fZ) goto L_00425299;
L_00425292:; BB(0x00425292);
    /* 00425292: call 0x425270 */ r_esp -= 4; W32(r_esp, 0x425297u); f_00425270();
    /* 00425297: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00425299:; BB(0x00425299);
    /* 00425299: mov eax, esi */ r_eax = r_esi;
    /* 0042529b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042529c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042529d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042529e: ret  */ FN_RET(0x00425270); r_esp += 4; return;
}

void f_004252a0(void) /* sub_4252A0 */
{
    FN_ENTER(0x004252a0);
    /* 004252a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004252a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004252a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004252a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004252a6: mov ebx, eax */ r_ebx = r_eax;
    /* 004252a8: mov esi, ecx */ r_esi = r_ecx;
    /* 004252aa: jmp 0x4252b2 */ goto L_004252b2;
L_004252ac:; BB(0x004252ac);
    /* 004252ac: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 004252af: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
L_004252b2:; BB(0x004252b2);
    /* 004252b2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004252b4: mov edi, edx */ r_edi = r_edx;
    /* 004252b6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004252b8: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004252bb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004252be: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004252c1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004252c4: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 004252c7: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 004252ca: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 004252cd: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 004252d0: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 004252d3: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 004252d6: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 004252d9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004252dc: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004252df: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004252e2: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004252e5: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004252e8: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004252eb: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004252ee: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004252f1: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004252f4: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 004252f7: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004252fa: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004252fd: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00425300: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00425303: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00425306: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00425309: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0042530c: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042530f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425311: je 0x425322 */ if (fZ) goto L_00425322;
L_00425313:; BB(0x00425313);
    /* 00425313: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00425316: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00425319: mov ecx, esi */ r_ecx = r_esi;
    /* 0042531b: call 0x4252a0 */ r_esp -= 4; W32(r_esp, 0x425320u); f_004252a0();
    /* 00425320: mov edx, eax */ r_edx = r_eax;
L_00425322:; BB(0x00425322);
    /* 00425322: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00425325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425327: jne 0x4252ac */ if (!fZ) goto L_004252ac;
L_00425329:; BB(0x00425329);
    /* 00425329: mov eax, edx */ r_eax = r_edx;
    /* 0042532b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042532e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042532f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00425330: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425331: ret  */ FN_RET(0x004252a0); r_esp += 4; return;
}

void f_00425334(void) /* sub_425334 */
{
    FN_ENTER(0x00425334);
    /* 00425334: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00425335: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425338: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42533du); f_00420a44();
    /* 0042533d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042533f: jne 0x425353 */ if (!fZ) goto L_00425353;
L_00425341:; BB(0x00425341);
    /* 00425341: push 0x9a3c9c */ { u32 v = 0x9a3c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425346: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x42534bu); f_0051f6b0();
    /* 0042534b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042534c: mov dword ptr [0xa43724], eax */ W32((u32)(0xa43724u), r_eax);
    /* 00425351: jmp 0x425376 */ goto L_00425376;
L_00425353:; BB(0x00425353);
    /* 00425353: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425356: jne 0x425371 */ if (!fZ) goto L_00425371;
L_00425358:; BB(0x00425358);
    /* 00425358: push 0x8fc31c */ { u32 v = 0x8fc31cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042535d: push 0x9a3c9c */ { u32 v = 0x9a3c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425362: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x425367u); f_0051f674();
    /* 00425367: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042536a: mov dword ptr [0xa43724], eax */ W32((u32)(0xa43724u), r_eax);
    /* 0042536f: jmp 0x425376 */ goto L_00425376;
L_00425371:; BB(0x00425371);
    /* 00425371: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
L_00425376:; BB(0x00425376);
    /* 00425376: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0042537c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042537f: call 0x425270 */ r_esp -= 4; W32(r_esp, 0x425384u); f_00425270();
    /* 00425384: mov dword ptr [0xa43770], eax */ W32((u32)(0xa43770u), r_eax);
    /* 00425389: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0042538c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042538e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425390: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425392: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425395: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x42539au); f_0082e940();
    /* 0042539a: mov edx, eax */ r_edx = r_eax;
    /* 0042539c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042539f: mov dword ptr [0xa4375c], 0 */ W32((u32)(0xa4375cu), 0x0u);
    /* 004253a9: mov dword ptr [0xa4376c], edx */ W32((u32)(0xa4376cu), r_edx);
    /* 004253af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004253b1: mov dword ptr [0xa43760], 0 */ W32((u32)(0xa43760u), 0x0u);
    /* 004253bb: mov dword ptr [0xa43754], ecx */ W32((u32)(0xa43754u), r_ecx);
    /* 004253c1: mov dword ptr [0xa43758], ecx */ W32((u32)(0xa43758u), r_ecx);
    /* 004253c7: mov ecx, dword ptr [0xa43724] */ r_ecx = R32((u32)(0xa43724u));
    /* 004253cd: mov ecx, dword ptr [ecx + 0x42c] */ r_ecx = R32((u32)(r_ecx+0x42cu));
    /* 004253d3: mov dword ptr [0xa43764], 0 */ W32((u32)(0xa43764u), 0x0u);
    /* 004253dd: mov dword ptr [0xa43768], 0 */ W32((u32)(0xa43768u), 0x0u);
    /* 004253e7: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004253ea: mov ecx, 0xa43754 */ r_ecx = 0xa43754u;
    /* 004253ef: call 0x4252a0 */ r_esp -= 4; W32(r_esp, 0x4253f4u); f_004252a0();
    /* 004253f4: mov dword ptr [0xa437e0], 0 */ W32((u32)(0xa437e0u), 0x0u);
    /* 004253fe: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 00425403: mov dword ptr [0xa437dc], 0x3c */ W32((u32)(0xa437dcu), 0x3cu);
    /* 0042540d: mov dword ptr [0xa437d0], 0 */ W32((u32)(0xa437d0u), 0x0u);
    /* 00425417: mov dword ptr [0xa437d4], 0 */ W32((u32)(0xa437d4u), 0x0u);
    /* 00425421: mov dword ptr [0xa437d8], 0 */ W32((u32)(0xa437d8u), 0x0u);
    /* 0042542b: mov dword ptr [0xa437ac], 0 */ W32((u32)(0xa437acu), 0x0u);
    /* 00425435: mov dword ptr [0xa437b0], 0 */ W32((u32)(0xa437b0u), 0x0u);
    /* 0042543f: mov dword ptr [0xa437b4], 0x40a00000 */ W32((u32)(0xa437b4u), 0x40a00000u);
    /* 00425449: mov dword ptr [0xa437b8], 0 */ W32((u32)(0xa437b8u), 0x0u);
    /* 00425453: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x425458u); f_0082dcbc();
    /* 00425458: fstp dword ptr [0xa437bc] */ W_F32((u32)(0xa437bcu), ST(0)); FPOP();
    /* 0042545e: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 00425463: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x425468u); f_0082ddd8();
    /* 00425468: fstp dword ptr [0xa437c0] */ W_F32((u32)(0xa437c0u), ST(0)); FPOP();
    /* 0042546e: mov ecx, 0xa437b8 */ r_ecx = 0xa437b8u;
    /* 00425473: mov edx, 0xa437ac */ r_edx = 0xa437acu;
    /* 00425478: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42547du); f_0082ebac();
    /* 0042547d: mov edx, dword ptr [0xa43724] */ r_edx = R32((u32)(0xa43724u));
    /* 00425483: fld dword ptr [0x8fbac8] */ FPUSH(R_F32((u32)(0x8fbac8u)));
    /* 00425489: fld dword ptr [0x8fbac4] */ FPUSH(R_F32((u32)(0x8fbac4u)));
    /* 0042548f: fld dword ptr [0x8fbac0] */ FPUSH(R_F32((u32)(0x8fbac0u)));
    /* 00425495: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 0042549b: fld dword ptr [0x8fbabc] */ FPUSH(R_F32((u32)(0x8fbabcu)));
    /* 004254a1: fld dword ptr [0x8fbad0] */ FPUSH(R_F32((u32)(0x8fbad0u)));
    /* 004254a7: mov dword ptr [0xa437c4], 0 */ W32((u32)(0xa437c4u), 0x0u);
    /* 004254b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004254b3: mov dword ptr [0xa437c8], 0xbf800000 */ W32((u32)(0xa437c8u), 0xbf800000u);
    /* 004254bd: mov dword ptr [0xa437a8], eax */ W32((u32)(0xa437a8u), r_eax);
    /* 004254c2: mov dword ptr [0xa437a4], eax */ W32((u32)(0xa437a4u), r_eax);
    /* 004254c7: mov dword ptr [0xa437cc], 0x3f800000 */ W32((u32)(0xa437ccu), 0x3f800000u);
    /* 004254d1: mov dword ptr [0xa437a0], eax */ W32((u32)(0xa437a0u), r_eax);
    /* 004254d6: mov dword ptr [0xa4379c], eax */ W32((u32)(0xa4379cu), r_eax);
    /* 004254db: mov dword ptr [0xa43750], eax */ W32((u32)(0xa43750u), r_eax);
    /* 004254e0: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 004254e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004254e5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004254e7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004254e9: fadd dword ptr [eax + 0x198] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x198u));
    /* 004254ef: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004254f1: fadd dword ptr [eax + 0x1a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1a8u));
    /* 004254f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004254f9: fadd dword ptr [eax + 0x1b8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1b8u));
    /* 004254ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425501: fadd dword ptr [eax + 0x1c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1c8u));
    /* 00425507: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00425509: fadd dword ptr [eax + 0x1d8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1d8u));
    /* 0042550f: fld dword ptr [eax + 0x1e8] */ FPUSH(R_F32((u32)(r_eax+0x1e8u)));
    /* 00425515: fld dword ptr [eax + 0x1f8] */ FPUSH(R_F32((u32)(r_eax+0x1f8u)));
    /* 0042551b: fld dword ptr [eax + 0x208] */ FPUSH(R_F32((u32)(r_eax+0x208u)));
    /* 00425521: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00425523: fstp dword ptr [eax + 0x198] */ W_F32((u32)(r_eax+0x198u), ST(0)); FPOP();
    /* 00425529: fld dword ptr [0x8fbab8] */ FPUSH(R_F32((u32)(0x8fbab8u)));
    /* 0042552f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00425531: fstp dword ptr [eax + 0x1a8] */ W_F32((u32)(r_eax+0x1a8u), ST(0)); FPOP();
    /* 00425537: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00425539: fstp dword ptr [eax + 0x1b8] */ W_F32((u32)(r_eax+0x1b8u), ST(0)); FPOP();
    /* 0042553f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00425541: fstp dword ptr [eax + 0x1c8] */ W_F32((u32)(r_eax+0x1c8u), ST(0)); FPOP();
    /* 00425547: fstp dword ptr [eax + 0x1d8] */ W_F32((u32)(r_eax+0x1d8u), ST(0)); FPOP();
    /* 0042554d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042554f: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00425551: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00425553: fstp dword ptr [eax + 0x1e8] */ W_F32((u32)(r_eax+0x1e8u), ST(0)); FPOP();
    /* 00425559: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042555b: fld dword ptr [eax + 0x218] */ FPUSH(R_F32((u32)(r_eax+0x218u)));
    /* 00425561: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425563: fstp dword ptr [eax + 0x1f8] */ W_F32((u32)(r_eax+0x1f8u), ST(0)); FPOP();
    /* 00425569: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042556b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042556d: fstp dword ptr [eax + 0x208] */ W_F32((u32)(r_eax+0x208u), ST(0)); FPOP();
    /* 00425573: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00425575: fstp dword ptr [eax + 0x218] */ W_F32((u32)(r_eax+0x218u), ST(0)); FPOP();
    /* 0042557b: fld dword ptr [0x8fbab4] */ FPUSH(R_F32((u32)(0x8fbab4u)));
    /* 00425581: fadd dword ptr [eax + 0x228] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x228u));
    /* 00425587: fstp dword ptr [eax + 0x228] */ W_F32((u32)(r_eax+0x228u), ST(0)); FPOP();
    /* 0042558d: fld dword ptr [0x8fbab0] */ FPUSH(R_F32((u32)(0x8fbab0u)));
    /* 00425593: fadd dword ptr [eax + 0x238] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x238u));
    /* 00425599: fstp dword ptr [eax + 0x238] */ W_F32((u32)(r_eax+0x238u), ST(0)); FPOP();
    /* 0042559f: fld dword ptr [0x8fbaac] */ FPUSH(R_F32((u32)(0x8fbaacu)));
    /* 004255a5: fadd dword ptr [eax + 0x248] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x248u));
    /* 004255ab: fstp dword ptr [eax + 0x248] */ W_F32((u32)(r_eax+0x248u), ST(0)); FPOP();
    /* 004255b1: fld dword ptr [0x8fbaa8] */ FPUSH(R_F32((u32)(0x8fbaa8u)));
    /* 004255b7: fadd dword ptr [eax + 0x258] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x258u));
    /* 004255bd: fstp dword ptr [eax + 0x258] */ W_F32((u32)(r_eax+0x258u), ST(0)); FPOP();
    /* 004255c3: fld dword ptr [0x8fbaa4] */ FPUSH(R_F32((u32)(0x8fbaa4u)));
    /* 004255c9: fadd dword ptr [eax + 0x268] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x268u));
    /* 004255cf: fstp dword ptr [eax + 0x268] */ W_F32((u32)(r_eax+0x268u), ST(0)); FPOP();
    /* 004255d5: fld dword ptr [0x8fbaa0] */ FPUSH(R_F32((u32)(0x8fbaa0u)));
    /* 004255db: fadd dword ptr [eax + 0x278] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x278u));
    /* 004255e1: fstp dword ptr [eax + 0x278] */ W_F32((u32)(r_eax+0x278u), ST(0)); FPOP();
    /* 004255e7: fld dword ptr [0x8fba9c] */ FPUSH(R_F32((u32)(0x8fba9cu)));
    /* 004255ed: fadd dword ptr [eax + 0x288] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x288u));
    /* 004255f3: fstp dword ptr [eax + 0x288] */ W_F32((u32)(r_eax+0x288u), ST(0)); FPOP();
    /* 004255f9: fld dword ptr [0x8fba98] */ FPUSH(R_F32((u32)(0x8fba98u)));
    /* 004255ff: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
    /* 00425604: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0042560a: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0042560d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042560f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425611: fadd dword ptr [edx + 0x298] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x298u));
    /* 00425617: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 0042561d: fstp dword ptr [edx + 0x298] */ W_F32((u32)(r_edx+0x298u), ST(0)); FPOP();
    /* 00425623: fld dword ptr [0x8fba94] */ FPUSH(R_F32((u32)(0x8fba94u)));
    /* 00425629: fadd dword ptr [edx + 0x2a8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2a8u));
    /* 0042562f: fstp dword ptr [edx + 0x2a8] */ W_F32((u32)(r_edx+0x2a8u), ST(0)); FPOP();
    /* 00425635: fld dword ptr [0x8fba90] */ FPUSH(R_F32((u32)(0x8fba90u)));
    /* 0042563b: fadd dword ptr [edx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2b8u));
    /* 00425641: fstp dword ptr [edx + 0x2b8] */ W_F32((u32)(r_edx+0x2b8u), ST(0)); FPOP();
    /* 00425647: fld dword ptr [0x8fba8c] */ FPUSH(R_F32((u32)(0x8fba8cu)));
    /* 0042564d: fadd dword ptr [edx + 0x2c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2c8u));
    /* 00425653: fstp dword ptr [edx + 0x2c8] */ W_F32((u32)(r_edx+0x2c8u), ST(0)); FPOP();
    /* 00425659: fld dword ptr [0x8fba88] */ FPUSH(R_F32((u32)(0x8fba88u)));
    /* 0042565f: fadd dword ptr [edx + 0x2d8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2d8u));
    /* 00425665: fstp dword ptr [edx + 0x2d8] */ W_F32((u32)(r_edx+0x2d8u), ST(0)); FPOP();
    /* 0042566b: fld dword ptr [0x8fba84] */ FPUSH(R_F32((u32)(0x8fba84u)));
    /* 00425671: fadd dword ptr [edx + 0x2e8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2e8u));
    /* 00425677: fstp dword ptr [edx + 0x2e8] */ W_F32((u32)(r_edx+0x2e8u), ST(0)); FPOP();
    /* 0042567d: fld dword ptr [0x8fba80] */ FPUSH(R_F32((u32)(0x8fba80u)));
    /* 00425683: fadd dword ptr [edx + 0x2f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2f8u));
    /* 00425689: fstp dword ptr [edx + 0x2f8] */ W_F32((u32)(r_edx+0x2f8u), ST(0)); FPOP();
    /* 0042568f: fld dword ptr [0x8fba7c] */ FPUSH(R_F32((u32)(0x8fba7cu)));
    /* 00425695: fadd dword ptr [edx + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x308u));
    /* 0042569b: fstp dword ptr [edx + 0x308] */ W_F32((u32)(r_edx+0x308u), ST(0)); FPOP();
    /* 004256a1: fld dword ptr [0x8fba78] */ FPUSH(R_F32((u32)(0x8fba78u)));
    /* 004256a7: fadd dword ptr [edx + 0x328] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x328u));
    /* 004256ad: fstp dword ptr [edx + 0x328] */ W_F32((u32)(r_edx+0x328u), ST(0)); FPOP();
    /* 004256b3: fld dword ptr [0x8fba74] */ FPUSH(R_F32((u32)(0x8fba74u)));
    /* 004256b9: fadd dword ptr [edx + 0x338] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x338u));
    /* 004256bf: fstp dword ptr [edx + 0x338] */ W_F32((u32)(r_edx+0x338u), ST(0)); FPOP();
    /* 004256c5: fld dword ptr [0x8fba70] */ FPUSH(R_F32((u32)(0x8fba70u)));
    /* 004256cb: fadd dword ptr [edx + 0x348] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x348u));
    /* 004256d1: fstp dword ptr [edx + 0x348] */ W_F32((u32)(r_edx+0x348u), ST(0)); FPOP();
    /* 004256d7: fld dword ptr [0x8fba6c] */ FPUSH(R_F32((u32)(0x8fba6cu)));
    /* 004256dd: fadd dword ptr [edx + 0x358] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x358u));
    /* 004256e3: fstp dword ptr [edx + 0x358] */ W_F32((u32)(r_edx+0x358u), ST(0)); FPOP();
    /* 004256e9: fld dword ptr [0x8fba68] */ FPUSH(R_F32((u32)(0x8fba68u)));
    /* 004256ef: fadd dword ptr [edx + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x368u));
    /* 004256f5: fstp dword ptr [edx + 0x368] */ W_F32((u32)(r_edx+0x368u), ST(0)); FPOP();
    /* 004256fb: fld dword ptr [0x8fba64] */ FPUSH(R_F32((u32)(0x8fba64u)));
    /* 00425701: fadd dword ptr [edx + 0x378] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x378u));
    /* 00425707: fstp dword ptr [edx + 0x378] */ W_F32((u32)(r_edx+0x378u), ST(0)); FPOP();
    /* 0042570d: mov dword ptr [edx + 0x318], eax */ W32((u32)(r_edx+0x318u), r_eax);
    /* 00425713: push dword ptr [0x9a3dec] */ { u32 v = R32((u32)(0x9a3decu)); r_esp -= 4; W32(r_esp, v); }
    /* 00425719: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x42571eu); f_0077a684();
    /* 0042571e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042571f: mov dword ptr [0xa4374c], eax */ W32((u32)(0xa4374cu), r_eax);
    /* 00425724: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425726: mov ebx, eax */ r_ebx = r_eax;
L_00425728:; BB(0x00425728);
    /* 00425728: push dword ptr [ebx + 0x9a3dd8] */ { u32 v = R32((u32)(r_ebx+0x9a3dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042572e: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x425733u); f_0077a698();
    /* 00425733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425734: mov dword ptr [ebx + 0xa43738], eax */ W32((u32)(r_ebx+0xa43738u), r_eax);
    /* 0042573a: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042573d: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425740: jl 0x425728 */ if ((fS!=fO)) goto L_00425728;
L_00425742:; BB(0x00425742);
    /* 00425742: push dword ptr [0x9a3dd4] */ { u32 v = R32((u32)(0x9a3dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425748: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x42574du); f_0077a6b4();
    /* 0042574d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042574e: mov dword ptr [0xa43734], eax */ W32((u32)(0xa43734u), r_eax);
    /* 00425753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425755: mov ebx, eax */ r_ebx = r_eax;
L_00425757:; BB(0x00425757);
    /* 00425757: push dword ptr [ebx + 0x9a3dc8] */ { u32 v = R32((u32)(r_ebx+0x9a3dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042575d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x425762u); f_0077a6cc();
    /* 00425762: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425763: mov dword ptr [ebx + 0xa43728], eax */ W32((u32)(r_ebx+0xa43728u), r_eax);
    /* 00425769: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042576c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042576f: jl 0x425757 */ if ((fS!=fO)) goto L_00425757;
L_00425771:; BB(0x00425771);
    /* 00425771: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00425776: mov word ptr [0xa43774], dx */ W16((u32)(0xa43774u), (u16)r_edx);
    /* 0042577d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042577f: mov dword ptr [0xa4377c], eax */ W32((u32)(0xa4377cu), r_eax);
    /* 00425784: mov dword ptr [0xa43778], eax */ W32((u32)(0xa43778u), r_eax);
    /* 00425789: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x42578eu); f_00717f74();
    /* 0042578e: call 0x42693c */ r_esp -= 4; W32(r_esp, 0x425793u); f_0042693c();
    /* 00425793: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425796: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00425797: ret  */ FN_RET(0x00425334); r_esp += 4; return;
}

void f_00425345(void)
{
    FN_ENTER(0x00425345);
    /* 00425345: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00425347: mov dword ptr gs:[0xa359000f], eax */ W32((u32)(0xa359000fu), r_eax);
    /* 0042534d: and al, 0x37 */ {  u32 a = (u8)r_eax; u32 b = 0x37u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042534f: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00425350: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00425352: and eax, dword ptr [ebx + 0x197501f8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x197501f8u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00425358: push 0x8fc31c */ { u32 v = 0x8fc31cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042535d: push 0x9a3c9c */ { u32 v = 0x9a3c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425362: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x425367u); f_0051f674();
    /* 00425367: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042536a: mov dword ptr [0xa43724], eax */ W32((u32)(0xa43724u), r_eax);
    /* 0042536f: jmp 0x425376 */ goto L_00425376;
L_00425376:; BB(0x00425376);
    /* 00425376: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0042537c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042537f: call 0x425270 */ r_esp -= 4; W32(r_esp, 0x425384u); f_00425270();
    /* 00425384: mov dword ptr [0xa43770], eax */ W32((u32)(0xa43770u), r_eax);
    /* 00425389: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0042538c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042538e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425390: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425392: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425395: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x42539au); f_0082e940();
    /* 0042539a: mov edx, eax */ r_edx = r_eax;
    /* 0042539c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042539f: mov dword ptr [0xa4375c], 0 */ W32((u32)(0xa4375cu), 0x0u);
    /* 004253a9: mov dword ptr [0xa4376c], edx */ W32((u32)(0xa4376cu), r_edx);
    /* 004253af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004253b1: mov dword ptr [0xa43760], 0 */ W32((u32)(0xa43760u), 0x0u);
    /* 004253bb: mov dword ptr [0xa43754], ecx */ W32((u32)(0xa43754u), r_ecx);
    /* 004253c1: mov dword ptr [0xa43758], ecx */ W32((u32)(0xa43758u), r_ecx);
    /* 004253c7: mov ecx, dword ptr [0xa43724] */ r_ecx = R32((u32)(0xa43724u));
    /* 004253cd: mov ecx, dword ptr [ecx + 0x42c] */ r_ecx = R32((u32)(r_ecx+0x42cu));
    /* 004253d3: mov dword ptr [0xa43764], 0 */ W32((u32)(0xa43764u), 0x0u);
    /* 004253dd: mov dword ptr [0xa43768], 0 */ W32((u32)(0xa43768u), 0x0u);
    /* 004253e7: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004253ea: mov ecx, 0xa43754 */ r_ecx = 0xa43754u;
    /* 004253ef: call 0x4252a0 */ r_esp -= 4; W32(r_esp, 0x4253f4u); f_004252a0();
    /* 004253f4: mov dword ptr [0xa437e0], 0 */ W32((u32)(0xa437e0u), 0x0u);
    /* 004253fe: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 00425403: mov dword ptr [0xa437dc], 0x3c */ W32((u32)(0xa437dcu), 0x3cu);
    /* 0042540d: mov dword ptr [0xa437d0], 0 */ W32((u32)(0xa437d0u), 0x0u);
    /* 00425417: mov dword ptr [0xa437d4], 0 */ W32((u32)(0xa437d4u), 0x0u);
    /* 00425421: mov dword ptr [0xa437d8], 0 */ W32((u32)(0xa437d8u), 0x0u);
    /* 0042542b: mov dword ptr [0xa437ac], 0 */ W32((u32)(0xa437acu), 0x0u);
    /* 00425435: mov dword ptr [0xa437b0], 0 */ W32((u32)(0xa437b0u), 0x0u);
    /* 0042543f: mov dword ptr [0xa437b4], 0x40a00000 */ W32((u32)(0xa437b4u), 0x40a00000u);
    /* 00425449: mov dword ptr [0xa437b8], 0 */ W32((u32)(0xa437b8u), 0x0u);
    /* 00425453: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x425458u); f_0082dcbc();
    /* 00425458: fstp dword ptr [0xa437bc] */ W_F32((u32)(0xa437bcu), ST(0)); FPOP();
    /* 0042545e: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 00425463: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x425468u); f_0082ddd8();
    /* 00425468: fstp dword ptr [0xa437c0] */ W_F32((u32)(0xa437c0u), ST(0)); FPOP();
    /* 0042546e: mov ecx, 0xa437b8 */ r_ecx = 0xa437b8u;
    /* 00425473: mov edx, 0xa437ac */ r_edx = 0xa437acu;
    /* 00425478: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42547du); f_0082ebac();
    /* 0042547d: mov edx, dword ptr [0xa43724] */ r_edx = R32((u32)(0xa43724u));
    /* 00425483: fld dword ptr [0x8fbac8] */ FPUSH(R_F32((u32)(0x8fbac8u)));
    /* 00425489: fld dword ptr [0x8fbac4] */ FPUSH(R_F32((u32)(0x8fbac4u)));
    /* 0042548f: fld dword ptr [0x8fbac0] */ FPUSH(R_F32((u32)(0x8fbac0u)));
    /* 00425495: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 0042549b: fld dword ptr [0x8fbabc] */ FPUSH(R_F32((u32)(0x8fbabcu)));
    /* 004254a1: fld dword ptr [0x8fbad0] */ FPUSH(R_F32((u32)(0x8fbad0u)));
    /* 004254a7: mov dword ptr [0xa437c4], 0 */ W32((u32)(0xa437c4u), 0x0u);
    /* 004254b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004254b3: mov dword ptr [0xa437c8], 0xbf800000 */ W32((u32)(0xa437c8u), 0xbf800000u);
    /* 004254bd: mov dword ptr [0xa437a8], eax */ W32((u32)(0xa437a8u), r_eax);
    /* 004254c2: mov dword ptr [0xa437a4], eax */ W32((u32)(0xa437a4u), r_eax);
    /* 004254c7: mov dword ptr [0xa437cc], 0x3f800000 */ W32((u32)(0xa437ccu), 0x3f800000u);
    /* 004254d1: mov dword ptr [0xa437a0], eax */ W32((u32)(0xa437a0u), r_eax);
    /* 004254d6: mov dword ptr [0xa4379c], eax */ W32((u32)(0xa4379cu), r_eax);
    /* 004254db: mov dword ptr [0xa43750], eax */ W32((u32)(0xa43750u), r_eax);
    /* 004254e0: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 004254e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004254e5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004254e7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004254e9: fadd dword ptr [eax + 0x198] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x198u));
    /* 004254ef: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004254f1: fadd dword ptr [eax + 0x1a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1a8u));
    /* 004254f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004254f9: fadd dword ptr [eax + 0x1b8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1b8u));
    /* 004254ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425501: fadd dword ptr [eax + 0x1c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1c8u));
    /* 00425507: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00425509: fadd dword ptr [eax + 0x1d8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1d8u));
    /* 0042550f: fld dword ptr [eax + 0x1e8] */ FPUSH(R_F32((u32)(r_eax+0x1e8u)));
    /* 00425515: fld dword ptr [eax + 0x1f8] */ FPUSH(R_F32((u32)(r_eax+0x1f8u)));
    /* 0042551b: fld dword ptr [eax + 0x208] */ FPUSH(R_F32((u32)(r_eax+0x208u)));
    /* 00425521: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00425523: fstp dword ptr [eax + 0x198] */ W_F32((u32)(r_eax+0x198u), ST(0)); FPOP();
    /* 00425529: fld dword ptr [0x8fbab8] */ FPUSH(R_F32((u32)(0x8fbab8u)));
    /* 0042552f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00425531: fstp dword ptr [eax + 0x1a8] */ W_F32((u32)(r_eax+0x1a8u), ST(0)); FPOP();
    /* 00425537: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00425539: fstp dword ptr [eax + 0x1b8] */ W_F32((u32)(r_eax+0x1b8u), ST(0)); FPOP();
    /* 0042553f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00425541: fstp dword ptr [eax + 0x1c8] */ W_F32((u32)(r_eax+0x1c8u), ST(0)); FPOP();
    /* 00425547: fstp dword ptr [eax + 0x1d8] */ W_F32((u32)(r_eax+0x1d8u), ST(0)); FPOP();
    /* 0042554d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042554f: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00425551: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00425553: fstp dword ptr [eax + 0x1e8] */ W_F32((u32)(r_eax+0x1e8u), ST(0)); FPOP();
    /* 00425559: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042555b: fld dword ptr [eax + 0x218] */ FPUSH(R_F32((u32)(r_eax+0x218u)));
    /* 00425561: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425563: fstp dword ptr [eax + 0x1f8] */ W_F32((u32)(r_eax+0x1f8u), ST(0)); FPOP();
    /* 00425569: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042556b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042556d: fstp dword ptr [eax + 0x208] */ W_F32((u32)(r_eax+0x208u), ST(0)); FPOP();
    /* 00425573: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00425575: fstp dword ptr [eax + 0x218] */ W_F32((u32)(r_eax+0x218u), ST(0)); FPOP();
    /* 0042557b: fld dword ptr [0x8fbab4] */ FPUSH(R_F32((u32)(0x8fbab4u)));
    /* 00425581: fadd dword ptr [eax + 0x228] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x228u));
    /* 00425587: fstp dword ptr [eax + 0x228] */ W_F32((u32)(r_eax+0x228u), ST(0)); FPOP();
    /* 0042558d: fld dword ptr [0x8fbab0] */ FPUSH(R_F32((u32)(0x8fbab0u)));
    /* 00425593: fadd dword ptr [eax + 0x238] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x238u));
    /* 00425599: fstp dword ptr [eax + 0x238] */ W_F32((u32)(r_eax+0x238u), ST(0)); FPOP();
    /* 0042559f: fld dword ptr [0x8fbaac] */ FPUSH(R_F32((u32)(0x8fbaacu)));
    /* 004255a5: fadd dword ptr [eax + 0x248] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x248u));
    /* 004255ab: fstp dword ptr [eax + 0x248] */ W_F32((u32)(r_eax+0x248u), ST(0)); FPOP();
    /* 004255b1: fld dword ptr [0x8fbaa8] */ FPUSH(R_F32((u32)(0x8fbaa8u)));
    /* 004255b7: fadd dword ptr [eax + 0x258] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x258u));
    /* 004255bd: fstp dword ptr [eax + 0x258] */ W_F32((u32)(r_eax+0x258u), ST(0)); FPOP();
    /* 004255c3: fld dword ptr [0x8fbaa4] */ FPUSH(R_F32((u32)(0x8fbaa4u)));
    /* 004255c9: fadd dword ptr [eax + 0x268] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x268u));
    /* 004255cf: fstp dword ptr [eax + 0x268] */ W_F32((u32)(r_eax+0x268u), ST(0)); FPOP();
    /* 004255d5: fld dword ptr [0x8fbaa0] */ FPUSH(R_F32((u32)(0x8fbaa0u)));
    /* 004255db: fadd dword ptr [eax + 0x278] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x278u));
    /* 004255e1: fstp dword ptr [eax + 0x278] */ W_F32((u32)(r_eax+0x278u), ST(0)); FPOP();
    /* 004255e7: fld dword ptr [0x8fba9c] */ FPUSH(R_F32((u32)(0x8fba9cu)));
    /* 004255ed: fadd dword ptr [eax + 0x288] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x288u));
    /* 004255f3: fstp dword ptr [eax + 0x288] */ W_F32((u32)(r_eax+0x288u), ST(0)); FPOP();
    /* 004255f9: fld dword ptr [0x8fba98] */ FPUSH(R_F32((u32)(0x8fba98u)));
    /* 004255ff: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
    /* 00425604: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0042560a: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0042560d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042560f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425611: fadd dword ptr [edx + 0x298] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x298u));
    /* 00425617: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 0042561d: fstp dword ptr [edx + 0x298] */ W_F32((u32)(r_edx+0x298u), ST(0)); FPOP();
    /* 00425623: fld dword ptr [0x8fba94] */ FPUSH(R_F32((u32)(0x8fba94u)));
    /* 00425629: fadd dword ptr [edx + 0x2a8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2a8u));
    /* 0042562f: fstp dword ptr [edx + 0x2a8] */ W_F32((u32)(r_edx+0x2a8u), ST(0)); FPOP();
    /* 00425635: fld dword ptr [0x8fba90] */ FPUSH(R_F32((u32)(0x8fba90u)));
    /* 0042563b: fadd dword ptr [edx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2b8u));
    /* 00425641: fstp dword ptr [edx + 0x2b8] */ W_F32((u32)(r_edx+0x2b8u), ST(0)); FPOP();
    /* 00425647: fld dword ptr [0x8fba8c] */ FPUSH(R_F32((u32)(0x8fba8cu)));
    /* 0042564d: fadd dword ptr [edx + 0x2c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2c8u));
    /* 00425653: fstp dword ptr [edx + 0x2c8] */ W_F32((u32)(r_edx+0x2c8u), ST(0)); FPOP();
    /* 00425659: fld dword ptr [0x8fba88] */ FPUSH(R_F32((u32)(0x8fba88u)));
    /* 0042565f: fadd dword ptr [edx + 0x2d8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2d8u));
    /* 00425665: fstp dword ptr [edx + 0x2d8] */ W_F32((u32)(r_edx+0x2d8u), ST(0)); FPOP();
    /* 0042566b: fld dword ptr [0x8fba84] */ FPUSH(R_F32((u32)(0x8fba84u)));
    /* 00425671: fadd dword ptr [edx + 0x2e8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2e8u));
    /* 00425677: fstp dword ptr [edx + 0x2e8] */ W_F32((u32)(r_edx+0x2e8u), ST(0)); FPOP();
    /* 0042567d: fld dword ptr [0x8fba80] */ FPUSH(R_F32((u32)(0x8fba80u)));
    /* 00425683: fadd dword ptr [edx + 0x2f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2f8u));
    /* 00425689: fstp dword ptr [edx + 0x2f8] */ W_F32((u32)(r_edx+0x2f8u), ST(0)); FPOP();
    /* 0042568f: fld dword ptr [0x8fba7c] */ FPUSH(R_F32((u32)(0x8fba7cu)));
    /* 00425695: fadd dword ptr [edx + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x308u));
    /* 0042569b: fstp dword ptr [edx + 0x308] */ W_F32((u32)(r_edx+0x308u), ST(0)); FPOP();
    /* 004256a1: fld dword ptr [0x8fba78] */ FPUSH(R_F32((u32)(0x8fba78u)));
    /* 004256a7: fadd dword ptr [edx + 0x328] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x328u));
    /* 004256ad: fstp dword ptr [edx + 0x328] */ W_F32((u32)(r_edx+0x328u), ST(0)); FPOP();
    /* 004256b3: fld dword ptr [0x8fba74] */ FPUSH(R_F32((u32)(0x8fba74u)));
    /* 004256b9: fadd dword ptr [edx + 0x338] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x338u));
    /* 004256bf: fstp dword ptr [edx + 0x338] */ W_F32((u32)(r_edx+0x338u), ST(0)); FPOP();
    /* 004256c5: fld dword ptr [0x8fba70] */ FPUSH(R_F32((u32)(0x8fba70u)));
    /* 004256cb: fadd dword ptr [edx + 0x348] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x348u));
    /* 004256d1: fstp dword ptr [edx + 0x348] */ W_F32((u32)(r_edx+0x348u), ST(0)); FPOP();
    /* 004256d7: fld dword ptr [0x8fba6c] */ FPUSH(R_F32((u32)(0x8fba6cu)));
    /* 004256dd: fadd dword ptr [edx + 0x358] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x358u));
    /* 004256e3: fstp dword ptr [edx + 0x358] */ W_F32((u32)(r_edx+0x358u), ST(0)); FPOP();
    /* 004256e9: fld dword ptr [0x8fba68] */ FPUSH(R_F32((u32)(0x8fba68u)));
    /* 004256ef: fadd dword ptr [edx + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x368u));
    /* 004256f5: fstp dword ptr [edx + 0x368] */ W_F32((u32)(r_edx+0x368u), ST(0)); FPOP();
    /* 004256fb: fld dword ptr [0x8fba64] */ FPUSH(R_F32((u32)(0x8fba64u)));
    /* 00425701: fadd dword ptr [edx + 0x378] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x378u));
    /* 00425707: fstp dword ptr [edx + 0x378] */ W_F32((u32)(r_edx+0x378u), ST(0)); FPOP();
    /* 0042570d: mov dword ptr [edx + 0x318], eax */ W32((u32)(r_edx+0x318u), r_eax);
    /* 00425713: push dword ptr [0x9a3dec] */ { u32 v = R32((u32)(0x9a3decu)); r_esp -= 4; W32(r_esp, v); }
    /* 00425719: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x42571eu); f_0077a684();
    /* 0042571e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042571f: mov dword ptr [0xa4374c], eax */ W32((u32)(0xa4374cu), r_eax);
    /* 00425724: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425726: mov ebx, eax */ r_ebx = r_eax;
L_00425728:; BB(0x00425728);
    /* 00425728: push dword ptr [ebx + 0x9a3dd8] */ { u32 v = R32((u32)(r_ebx+0x9a3dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042572e: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x425733u); f_0077a698();
    /* 00425733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425734: mov dword ptr [ebx + 0xa43738], eax */ W32((u32)(r_ebx+0xa43738u), r_eax);
    /* 0042573a: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042573d: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425740: jl 0x425728 */ if ((fS!=fO)) goto L_00425728;
L_00425742:; BB(0x00425742);
    /* 00425742: push dword ptr [0x9a3dd4] */ { u32 v = R32((u32)(0x9a3dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425748: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x42574du); f_0077a6b4();
    /* 0042574d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042574e: mov dword ptr [0xa43734], eax */ W32((u32)(0xa43734u), r_eax);
    /* 00425753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425755: mov ebx, eax */ r_ebx = r_eax;
L_00425757:; BB(0x00425757);
    /* 00425757: push dword ptr [ebx + 0x9a3dc8] */ { u32 v = R32((u32)(r_ebx+0x9a3dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042575d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x425762u); f_0077a6cc();
    /* 00425762: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425763: mov dword ptr [ebx + 0xa43728], eax */ W32((u32)(r_ebx+0xa43728u), r_eax);
    /* 00425769: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042576c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042576f: jl 0x425757 */ if ((fS!=fO)) goto L_00425757;
L_00425771:; BB(0x00425771);
    /* 00425771: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00425776: mov word ptr [0xa43774], dx */ W16((u32)(0xa43774u), (u16)r_edx);
    /* 0042577d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042577f: mov dword ptr [0xa4377c], eax */ W32((u32)(0xa4377cu), r_eax);
    /* 00425784: mov dword ptr [0xa43778], eax */ W32((u32)(0xa43778u), r_eax);
    /* 00425789: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x42578eu); f_00717f74();
    /* 0042578e: call 0x42693c */ r_esp -= 4; W32(r_esp, 0x425793u); f_0042693c();
    /* 00425793: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425796: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00425797: ret  */ FN_RET(0x00425345); r_esp += 4; return;
}

void f_00425450(void)
{
    FN_ENTER(0x00425450);
    /* 00425450: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00425452: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00425454: mov byte ptr fs:[eax], al */ W8((u32)(r_eax+TEB), (u8)r_eax);
    /* 00425458: fstp dword ptr [0xa437bc] */ W_F32((u32)(0xa437bcu), ST(0)); FPOP();
    /* 0042545e: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 00425463: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x425468u); f_0082ddd8();
    /* 00425468: fstp dword ptr [0xa437c0] */ W_F32((u32)(0xa437c0u), ST(0)); FPOP();
    /* 0042546e: mov ecx, 0xa437b8 */ r_ecx = 0xa437b8u;
    /* 00425473: mov edx, 0xa437ac */ r_edx = 0xa437acu;
    /* 00425478: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42547du); f_0082ebac();
    /* 0042547d: mov edx, dword ptr [0xa43724] */ r_edx = R32((u32)(0xa43724u));
    /* 00425483: fld dword ptr [0x8fbac8] */ FPUSH(R_F32((u32)(0x8fbac8u)));
    /* 00425489: fld dword ptr [0x8fbac4] */ FPUSH(R_F32((u32)(0x8fbac4u)));
    /* 0042548f: fld dword ptr [0x8fbac0] */ FPUSH(R_F32((u32)(0x8fbac0u)));
    /* 00425495: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 0042549b: fld dword ptr [0x8fbabc] */ FPUSH(R_F32((u32)(0x8fbabcu)));
    /* 004254a1: fld dword ptr [0x8fbad0] */ FPUSH(R_F32((u32)(0x8fbad0u)));
    /* 004254a7: mov dword ptr [0xa437c4], 0 */ W32((u32)(0xa437c4u), 0x0u);
    /* 004254b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004254b3: mov dword ptr [0xa437c8], 0xbf800000 */ W32((u32)(0xa437c8u), 0xbf800000u);
    /* 004254bd: mov dword ptr [0xa437a8], eax */ W32((u32)(0xa437a8u), r_eax);
    /* 004254c2: mov dword ptr [0xa437a4], eax */ W32((u32)(0xa437a4u), r_eax);
    /* 004254c7: mov dword ptr [0xa437cc], 0x3f800000 */ W32((u32)(0xa437ccu), 0x3f800000u);
    /* 004254d1: mov dword ptr [0xa437a0], eax */ W32((u32)(0xa437a0u), r_eax);
    /* 004254d6: mov dword ptr [0xa4379c], eax */ W32((u32)(0xa4379cu), r_eax);
    /* 004254db: mov dword ptr [0xa43750], eax */ W32((u32)(0xa43750u), r_eax);
    /* 004254e0: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 004254e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004254e5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004254e7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004254e9: fadd dword ptr [eax + 0x198] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x198u));
    /* 004254ef: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004254f1: fadd dword ptr [eax + 0x1a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1a8u));
    /* 004254f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004254f9: fadd dword ptr [eax + 0x1b8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1b8u));
    /* 004254ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425501: fadd dword ptr [eax + 0x1c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1c8u));
    /* 00425507: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00425509: fadd dword ptr [eax + 0x1d8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1d8u));
    /* 0042550f: fld dword ptr [eax + 0x1e8] */ FPUSH(R_F32((u32)(r_eax+0x1e8u)));
    /* 00425515: fld dword ptr [eax + 0x1f8] */ FPUSH(R_F32((u32)(r_eax+0x1f8u)));
    /* 0042551b: fld dword ptr [eax + 0x208] */ FPUSH(R_F32((u32)(r_eax+0x208u)));
    /* 00425521: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00425523: fstp dword ptr [eax + 0x198] */ W_F32((u32)(r_eax+0x198u), ST(0)); FPOP();
    /* 00425529: fld dword ptr [0x8fbab8] */ FPUSH(R_F32((u32)(0x8fbab8u)));
    /* 0042552f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00425531: fstp dword ptr [eax + 0x1a8] */ W_F32((u32)(r_eax+0x1a8u), ST(0)); FPOP();
    /* 00425537: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00425539: fstp dword ptr [eax + 0x1b8] */ W_F32((u32)(r_eax+0x1b8u), ST(0)); FPOP();
    /* 0042553f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00425541: fstp dword ptr [eax + 0x1c8] */ W_F32((u32)(r_eax+0x1c8u), ST(0)); FPOP();
    /* 00425547: fstp dword ptr [eax + 0x1d8] */ W_F32((u32)(r_eax+0x1d8u), ST(0)); FPOP();
    /* 0042554d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042554f: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00425551: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00425553: fstp dword ptr [eax + 0x1e8] */ W_F32((u32)(r_eax+0x1e8u), ST(0)); FPOP();
    /* 00425559: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042555b: fld dword ptr [eax + 0x218] */ FPUSH(R_F32((u32)(r_eax+0x218u)));
    /* 00425561: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425563: fstp dword ptr [eax + 0x1f8] */ W_F32((u32)(r_eax+0x1f8u), ST(0)); FPOP();
    /* 00425569: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042556b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042556d: fstp dword ptr [eax + 0x208] */ W_F32((u32)(r_eax+0x208u), ST(0)); FPOP();
    /* 00425573: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00425575: fstp dword ptr [eax + 0x218] */ W_F32((u32)(r_eax+0x218u), ST(0)); FPOP();
    /* 0042557b: fld dword ptr [0x8fbab4] */ FPUSH(R_F32((u32)(0x8fbab4u)));
    /* 00425581: fadd dword ptr [eax + 0x228] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x228u));
    /* 00425587: fstp dword ptr [eax + 0x228] */ W_F32((u32)(r_eax+0x228u), ST(0)); FPOP();
    /* 0042558d: fld dword ptr [0x8fbab0] */ FPUSH(R_F32((u32)(0x8fbab0u)));
    /* 00425593: fadd dword ptr [eax + 0x238] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x238u));
    /* 00425599: fstp dword ptr [eax + 0x238] */ W_F32((u32)(r_eax+0x238u), ST(0)); FPOP();
    /* 0042559f: fld dword ptr [0x8fbaac] */ FPUSH(R_F32((u32)(0x8fbaacu)));
    /* 004255a5: fadd dword ptr [eax + 0x248] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x248u));
    /* 004255ab: fstp dword ptr [eax + 0x248] */ W_F32((u32)(r_eax+0x248u), ST(0)); FPOP();
    /* 004255b1: fld dword ptr [0x8fbaa8] */ FPUSH(R_F32((u32)(0x8fbaa8u)));
    /* 004255b7: fadd dword ptr [eax + 0x258] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x258u));
    /* 004255bd: fstp dword ptr [eax + 0x258] */ W_F32((u32)(r_eax+0x258u), ST(0)); FPOP();
    /* 004255c3: fld dword ptr [0x8fbaa4] */ FPUSH(R_F32((u32)(0x8fbaa4u)));
    /* 004255c9: fadd dword ptr [eax + 0x268] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x268u));
    /* 004255cf: fstp dword ptr [eax + 0x268] */ W_F32((u32)(r_eax+0x268u), ST(0)); FPOP();
    /* 004255d5: fld dword ptr [0x8fbaa0] */ FPUSH(R_F32((u32)(0x8fbaa0u)));
    /* 004255db: fadd dword ptr [eax + 0x278] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x278u));
    /* 004255e1: fstp dword ptr [eax + 0x278] */ W_F32((u32)(r_eax+0x278u), ST(0)); FPOP();
    /* 004255e7: fld dword ptr [0x8fba9c] */ FPUSH(R_F32((u32)(0x8fba9cu)));
    /* 004255ed: fadd dword ptr [eax + 0x288] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x288u));
    /* 004255f3: fstp dword ptr [eax + 0x288] */ W_F32((u32)(r_eax+0x288u), ST(0)); FPOP();
    /* 004255f9: fld dword ptr [0x8fba98] */ FPUSH(R_F32((u32)(0x8fba98u)));
    /* 004255ff: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
    /* 00425604: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0042560a: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0042560d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042560f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425611: fadd dword ptr [edx + 0x298] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x298u));
    /* 00425617: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 0042561d: fstp dword ptr [edx + 0x298] */ W_F32((u32)(r_edx+0x298u), ST(0)); FPOP();
    /* 00425623: fld dword ptr [0x8fba94] */ FPUSH(R_F32((u32)(0x8fba94u)));
    /* 00425629: fadd dword ptr [edx + 0x2a8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2a8u));
    /* 0042562f: fstp dword ptr [edx + 0x2a8] */ W_F32((u32)(r_edx+0x2a8u), ST(0)); FPOP();
    /* 00425635: fld dword ptr [0x8fba90] */ FPUSH(R_F32((u32)(0x8fba90u)));
    /* 0042563b: fadd dword ptr [edx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2b8u));
    /* 00425641: fstp dword ptr [edx + 0x2b8] */ W_F32((u32)(r_edx+0x2b8u), ST(0)); FPOP();
    /* 00425647: fld dword ptr [0x8fba8c] */ FPUSH(R_F32((u32)(0x8fba8cu)));
    /* 0042564d: fadd dword ptr [edx + 0x2c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2c8u));
    /* 00425653: fstp dword ptr [edx + 0x2c8] */ W_F32((u32)(r_edx+0x2c8u), ST(0)); FPOP();
    /* 00425659: fld dword ptr [0x8fba88] */ FPUSH(R_F32((u32)(0x8fba88u)));
    /* 0042565f: fadd dword ptr [edx + 0x2d8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2d8u));
    /* 00425665: fstp dword ptr [edx + 0x2d8] */ W_F32((u32)(r_edx+0x2d8u), ST(0)); FPOP();
    /* 0042566b: fld dword ptr [0x8fba84] */ FPUSH(R_F32((u32)(0x8fba84u)));
    /* 00425671: fadd dword ptr [edx + 0x2e8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2e8u));
    /* 00425677: fstp dword ptr [edx + 0x2e8] */ W_F32((u32)(r_edx+0x2e8u), ST(0)); FPOP();
    /* 0042567d: fld dword ptr [0x8fba80] */ FPUSH(R_F32((u32)(0x8fba80u)));
    /* 00425683: fadd dword ptr [edx + 0x2f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x2f8u));
    /* 00425689: fstp dword ptr [edx + 0x2f8] */ W_F32((u32)(r_edx+0x2f8u), ST(0)); FPOP();
    /* 0042568f: fld dword ptr [0x8fba7c] */ FPUSH(R_F32((u32)(0x8fba7cu)));
    /* 00425695: fadd dword ptr [edx + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x308u));
    /* 0042569b: fstp dword ptr [edx + 0x308] */ W_F32((u32)(r_edx+0x308u), ST(0)); FPOP();
    /* 004256a1: fld dword ptr [0x8fba78] */ FPUSH(R_F32((u32)(0x8fba78u)));
    /* 004256a7: fadd dword ptr [edx + 0x328] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x328u));
    /* 004256ad: fstp dword ptr [edx + 0x328] */ W_F32((u32)(r_edx+0x328u), ST(0)); FPOP();
    /* 004256b3: fld dword ptr [0x8fba74] */ FPUSH(R_F32((u32)(0x8fba74u)));
    /* 004256b9: fadd dword ptr [edx + 0x338] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x338u));
    /* 004256bf: fstp dword ptr [edx + 0x338] */ W_F32((u32)(r_edx+0x338u), ST(0)); FPOP();
    /* 004256c5: fld dword ptr [0x8fba70] */ FPUSH(R_F32((u32)(0x8fba70u)));
    /* 004256cb: fadd dword ptr [edx + 0x348] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x348u));
    /* 004256d1: fstp dword ptr [edx + 0x348] */ W_F32((u32)(r_edx+0x348u), ST(0)); FPOP();
    /* 004256d7: fld dword ptr [0x8fba6c] */ FPUSH(R_F32((u32)(0x8fba6cu)));
    /* 004256dd: fadd dword ptr [edx + 0x358] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x358u));
    /* 004256e3: fstp dword ptr [edx + 0x358] */ W_F32((u32)(r_edx+0x358u), ST(0)); FPOP();
    /* 004256e9: fld dword ptr [0x8fba68] */ FPUSH(R_F32((u32)(0x8fba68u)));
    /* 004256ef: fadd dword ptr [edx + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x368u));
    /* 004256f5: fstp dword ptr [edx + 0x368] */ W_F32((u32)(r_edx+0x368u), ST(0)); FPOP();
    /* 004256fb: fld dword ptr [0x8fba64] */ FPUSH(R_F32((u32)(0x8fba64u)));
    /* 00425701: fadd dword ptr [edx + 0x378] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x378u));
    /* 00425707: fstp dword ptr [edx + 0x378] */ W_F32((u32)(r_edx+0x378u), ST(0)); FPOP();
    /* 0042570d: mov dword ptr [edx + 0x318], eax */ W32((u32)(r_edx+0x318u), r_eax);
    /* 00425713: push dword ptr [0x9a3dec] */ { u32 v = R32((u32)(0x9a3decu)); r_esp -= 4; W32(r_esp, v); }
    /* 00425719: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x42571eu); f_0077a684();
    /* 0042571e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042571f: mov dword ptr [0xa4374c], eax */ W32((u32)(0xa4374cu), r_eax);
    /* 00425724: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425726: mov ebx, eax */ r_ebx = r_eax;
L_00425728:; BB(0x00425728);
    /* 00425728: push dword ptr [ebx + 0x9a3dd8] */ { u32 v = R32((u32)(r_ebx+0x9a3dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042572e: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x425733u); f_0077a698();
    /* 00425733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425734: mov dword ptr [ebx + 0xa43738], eax */ W32((u32)(r_ebx+0xa43738u), r_eax);
    /* 0042573a: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042573d: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425740: jl 0x425728 */ if ((fS!=fO)) goto L_00425728;
L_00425742:; BB(0x00425742);
    /* 00425742: push dword ptr [0x9a3dd4] */ { u32 v = R32((u32)(0x9a3dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425748: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x42574du); f_0077a6b4();
    /* 0042574d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042574e: mov dword ptr [0xa43734], eax */ W32((u32)(0xa43734u), r_eax);
    /* 00425753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425755: mov ebx, eax */ r_ebx = r_eax;
L_00425757:; BB(0x00425757);
    /* 00425757: push dword ptr [ebx + 0x9a3dc8] */ { u32 v = R32((u32)(r_ebx+0x9a3dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042575d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x425762u); f_0077a6cc();
    /* 00425762: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425763: mov dword ptr [ebx + 0xa43728], eax */ W32((u32)(r_ebx+0xa43728u), r_eax);
    /* 00425769: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042576c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042576f: jl 0x425757 */ if ((fS!=fO)) goto L_00425757;
L_00425771:; BB(0x00425771);
    /* 00425771: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00425776: mov word ptr [0xa43774], dx */ W16((u32)(0xa43774u), (u16)r_edx);
    /* 0042577d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042577f: mov dword ptr [0xa4377c], eax */ W32((u32)(0xa4377cu), r_eax);
    /* 00425784: mov dword ptr [0xa43778], eax */ W32((u32)(0xa43778u), r_eax);
    /* 00425789: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x42578eu); f_00717f74();
    /* 0042578e: call 0x42693c */ r_esp -= 4; W32(r_esp, 0x425793u); f_0042693c();
    /* 00425793: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425796: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00425797: ret  */ FN_RET(0x00425450); r_esp += 4; return;
}

void f_0042577b(void)
{
    FN_ENTER(0x0042577b);
    /* 0042577b: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 0042577c: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042577e: shl byte ptr [ebx + 0xa4377c], 0xa3 */ { u32 ad = (u32)(r_ebx+0xa4377cu); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fS = (r >> 7) & 1; } }
    /* 00425785: js 0x4257be */ if (fS) goto L_004257be;
L_00425787:; BB(0x00425787);
    /* 00425787: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00425788: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042578a: out 0x27, al */ UNSUP(0x0042578a, "out 0x27, al");
    /* 0042578c: das  */ UNSUP(0x0042578c, "das ");
    /* 0042578d: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042578f: test eax, 0x83000011 */ {  u32 a = r_eax; u32 b = 0x83000011u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00425794: les ecx, ptr [ebx + ebx*2] */ UNSUP(0x00425794, "les ecx, ptr [ebx + ebx*2]");
    /* 00425797: ret  */ FN_RET(0x0042577b); r_esp += 4; return;
L_004257be:; BB(0x004257be);
    /* 004257be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004257c0: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 004257c1: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004257c3: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004257c5: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 004257c7: ror byte ptr [ebp - 0x18a3ed54], cl */ { u32 ad = (u32)(r_ebp+0xe75c12acu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 004257cd: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 004257ce: add byte ptr [ecx + 0x6ecaf], cl */ { u32 ad = (u32)(r_ecx+0x6ecafu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004257d4: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004257d6: out dx, al */ UNSUP(0x004257d6, "out dx, al");
    /* 004257d7: hlt  */ UNSUP(0x004257d7, "hlt");
}

void f_00425798(void) /* sub_425798 */
{
    FN_ENTER(0x00425798);
    /* 00425798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00425799: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042579a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042579b: mov edi, ecx */ r_edi = r_ecx;
    /* 0042579d: mov eax, dword ptr [0xa43778] */ r_eax = R32((u32)(0xa43778u));
    /* 004257a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004257a4: je 0x425813 */ if (fZ) goto L_00425813;
L_004257a6:; BB(0x004257a6);
    /* 004257a6: mov eax, dword ptr [0xaae96c] */ r_eax = R32((u32)(0xaae96cu));
    /* 004257ab: mov dword ptr [edi + 0x768], 1 */ W32((u32)(r_edi+0x768u), 0x1u);
    /* 004257b5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004257b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004257ba: mov dword ptr [edi + 0x770], 0x96 */ W32((u32)(r_edi+0x770u), 0x96u);
    /* 004257c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004257c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004257c8: lea ebp, [edx + edx + 0xaae75c] */ r_ebp = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004257cf: mov dword ptr [edi + 0x6ec], ebp */ W32((u32)(r_edi+0x6ecu), r_ebp);
    /* 004257d5: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4257dau); f_00694cc8();
    /* 004257da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004257dc: je 0x4257ef */ if (fZ) goto L_004257ef;
L_004257de:; BB(0x004257de);
    /* 004257de: movzx ebp, word ptr [0xa43774] */ r_ebp = (u32)R16((u32)(0xa43774u));
    /* 004257e5: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004257eb: je 0x42582d */ if (fZ) goto L_0042582d;
L_004257ed:; BB(0x004257ed);
    /* 004257ed: jmp 0x4257f6 */ goto L_004257f6;
L_004257ef:; BB(0x004257ef);
    /* 004257ef: movzx ebp, word ptr [0xa9c4f4] */ r_ebp = (u32)R16((u32)(0xa9c4f4u));
L_004257f6:; BB(0x004257f6);
    /* 004257f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004257f7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4257fcu); f_0068d5a8();
    /* 004257fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004257fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004257ff: je 0x425808 */ if (fZ) goto L_00425808;
L_00425801:; BB(0x00425801);
    /* 00425801: mov ecx, eax */ r_ecx = r_eax;
    /* 00425803: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x425808u); f_00685550();
L_00425808:; BB(0x00425808);
    /* 00425808: mov word ptr [edi + 0x76c], bp */ W16((u32)(r_edi+0x76cu), (u16)r_ebp);
    /* 0042580f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425811: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425812: ret  */ FN_RET(0x00425798); r_esp += 4; return;
L_00425813:; BB(0x00425813);
    /* 00425813: mov dword ptr [edi + 0x768], 0 */ W32((u32)(r_edi+0x768u), 0x0u);
    /* 0042581d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00425822: mov word ptr [edi + 0x76c], ax */ W16((u32)(r_edi+0x76cu), (u16)r_eax);
    /* 00425829: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042582a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042582b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042582c: ret  */ FN_RET(0x00425798); r_esp += 4; return;
L_0042582d:; BB(0x0042582d);
    /* 0042582d: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00425833: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x425838u); f_0068d5a8();
    /* 00425838: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042583b: je 0x425854 */ if (fZ) goto L_00425854;
L_0042583d:; BB(0x0042583d);
    /* 0042583d: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 00425843: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425849: jne 0x425854 */ if (!fZ) goto L_00425854;
L_0042584b:; BB(0x0042584b);
    /* 0042584b: movzx ebp, word ptr [0xa9c4dc] */ r_ebp = (u32)R16((u32)(0xa9c4dcu));
    /* 00425852: jmp 0x4257f6 */ goto L_004257f6;
L_00425854:; BB(0x00425854);
    /* 00425854: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00425857: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00425859: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0042585b:; BB(0x0042585b);
    /* 0042585b: mov esi, dword ptr [0xa9c4dc] */ r_esi = R32((u32)(0xa9c4dcu));
    /* 00425861: lea eax, [esi + eax + 1] */ r_eax = (u32)(r_esi+r_eax+0x1u);
    /* 00425865: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00425866: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425868: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042586a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042586d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042586f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00425871: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 00425874: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00425875: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x42587au); f_0068d5a8();
    /* 0042587a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042587b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042587d: je 0x42588d */ if (fZ) goto L_0042588d;
L_0042587f:; BB(0x0042587f);
    /* 0042587f: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 00425885: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042588b: je 0x4258a1 */ if (fZ) goto L_004258a1;
L_0042588d:; BB(0x0042588d);
    /* 0042588d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00425890: mov eax, ebp */ r_eax = r_ebp;
    /* 00425892: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425895: jl 0x42585b */ if ((fS!=fO)) goto L_0042585b;
L_00425897:; BB(0x00425897);
    /* 00425897: mov ebp, esi */ r_ebp = r_esi;
    /* 00425899: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0042589c: jmp 0x4257f6 */ goto L_004257f6;
L_004258a1:; BB(0x004258a1);
    /* 004258a1: mov ebp, esi */ r_ebp = r_esi;
    /* 004258a3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004258a6: jmp 0x4257f6 */ goto L_004257f6;
}

void f_004258ac(void) /* sub_4258AC */
{
    FN_ENTER(0x004258ac);
    /* 004258ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004258ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004258ae: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004258b1: mov edi, ecx */ r_edi = r_ecx;
    /* 004258b3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004258b7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004258ba: ja 0x425a07 */ if ((!fC&&!fZ)) goto L_00425a07;
L_004258c0:; BB(0x004258c0);
    /* 004258c0: mov eax, dword ptr [eax*4 + 0x8fb8c8] */ r_eax = R32((u32)(r_eax*4+0x8fb8c8u));
    /* 004258c7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00425a07:; BB(0x00425a07);
    /* 00425a07: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425a0c: ret 4 */ FN_RET(0x004258ac); r_esp += 8; return;
}

void f_004258c9(void)
{
    FN_ENTER(0x004258c9);
    /* 004258c9: mov eax, dword ptr [edi + 0x768] */ r_eax = R32((u32)(r_edi+0x768u));
    /* 004258cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004258d1: je 0x425937 */ if (fZ) goto L_00425937;
L_004258d3:; BB(0x004258d3);
    /* 004258d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004258d5: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004258d7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004258d9: mov ecx, edi */ r_ecx = r_edi;
    /* 004258db: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4258e1u); call_ind(t); }
    /* 004258e1: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004258e5: mov ebp, dword ptr [edi + 0x684] */ r_ebp = R32((u32)(r_edi+0x684u));
    /* 004258eb: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 004258ef: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004258f4: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004258f9: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004258fe: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 00425905: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0042590a: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 0042590f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00425913: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00425916: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0042591c: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 00425922: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00425926: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0042592a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42592fu); f_008003e0();
    /* 0042592f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425932: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425933: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425934: ret 4 */ FN_RET(0x004258c9); r_esp += 8; return;
L_00425937:; BB(0x00425937);
    /* 00425937: mov ebp, dword ptr [edi + 0x684] */ r_ebp = R32((u32)(r_edi+0x684u));
    /* 0042593d: cmp ebp, 0x32 */ {  u32 a = r_ebp; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425940: jge 0x42595e */ if ((fS==fO)) goto L_0042595e;
L_00425942:; BB(0x00425942);
    /* 00425942: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x425947u); f_00420a44();
    /* 00425947: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425949: jne 0x425952 */ if (!fZ) goto L_00425952;
L_0042594b:; BB(0x0042594b);
    /* 0042594b: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00425950: jmp 0x42597b */ goto L_0042597b;
L_00425952:; BB(0x00425952);
    /* 00425952: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425955: jne 0x42597b */ if (!fZ) goto L_0042597b;
L_00425957:; BB(0x00425957);
    /* 00425957: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0042595c: jmp 0x42597b */ goto L_0042597b;
L_0042595e:; BB(0x0042595e);
    /* 0042595e: add ebp, -0x32 */ {  u32 a = r_ebp; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00425961: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x425966u); f_00420a44();
    /* 00425966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425968: jne 0x425971 */ if (!fZ) goto L_00425971;
L_0042596a:; BB(0x0042596a);
    /* 0042596a: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0042596f: jmp 0x42597b */ goto L_0042597b;
L_00425971:; BB(0x00425971);
    /* 00425971: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425974: jne 0x42597b */ if (!fZ) goto L_0042597b;
L_00425976:; BB(0x00425976);
    /* 00425976: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0042597b:; BB(0x0042597b);
    /* 0042597b: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
L_00425981:; BB(0x00425981);
    /* 00425981: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 00425984: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425987: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042598a: jne 0x425a0f */ if (!fZ) goto L_00425a0f;
L_00425990:; BB(0x00425990);
    /* 00425990: mov dword ptr [edi + 0x684], 0 */ W32((u32)(r_edi+0x684u), 0x0u);
    /* 0042599a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042599c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0042599e: jmp 0x425981 */ goto L_00425981;
L_00425a0f:; BB(0x00425a0f);
    /* 00425a0f: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425a12: je 0x425a2a */ if (fZ) goto L_00425a2a;
L_00425a14:; BB(0x00425a14);
    /* 00425a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425a15: mov dword ptr [edi + 0x684], ecx */ W32((u32)(r_edi+0x684u), r_ecx);
    /* 00425a1b: mov ecx, edi */ r_ecx = r_edi;
    /* 00425a1d: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x425a22u); f_0041a808();
    /* 00425a22: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425a25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425a27: ret 4 */ FN_RET(0x004258c9); r_esp += 8; return;
L_00425a2a:; BB(0x00425a2a);
    /* 00425a2a: mov dword ptr [edi + 0x684], 0x32 */ W32((u32)(r_edi+0x684u), 0x32u);
    /* 00425a34: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 00425a39: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00425a3b: jmp 0x425981 */ goto L_00425981;
}

void f_004259a0(void)
{
    FN_ENTER(0x004259a0);
    /* 004259a0: mov ecx, edi */ r_ecx = r_edi;
    /* 004259a2: call 0x425798 */ r_esp -= 4; W32(r_esp, 0x4259a7u); f_00425798();
    /* 004259a7: jmp 0x425a07 */ goto L_00425a07;
L_00425a07:; BB(0x00425a07);
    /* 00425a07: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425a0c: ret 4 */ FN_RET(0x004259a0); r_esp += 8; return;
}

void f_004259a9(void)
{
    FN_ENTER(0x004259a9);
    /* 004259a9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004259ab: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004259ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004259af: mov ecx, edi */ r_ecx = r_edi;
    /* 004259b1: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4259b7u); call_ind(t); }
    /* 004259b7: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004259bb: mov ebp, dword ptr [edi + 0x684] */ r_ebp = R32((u32)(r_edi+0x684u));
    /* 004259c1: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 004259c6: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004259cb: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 004259d0: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004259d5: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004259dc: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004259e1: mov word ptr [esp + 0x1a], bp */ W16((u32)(r_esp+0x1au), (u16)r_ebp);
    /* 004259e6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004259ea: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004259ee: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 004259f4: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 004259fa: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004259fe: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00425a02: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x425a07u); f_008003e0();
    /* 00425a07: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425a0c: ret 4 */ FN_RET(0x004259a9); r_esp += 8; return;
}

void f_00425a07(void)
{
    FN_ENTER(0x00425a07);
    /* 00425a07: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425a0c: ret 4 */ FN_RET(0x00425a07); r_esp += 8; return;
}

void f_00425a40(void) /* sub_425A40 */
{
    FN_ENTER(0x00425a40);
    /* 00425a40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00425a41: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425a44: mov edi, ecx */ r_edi = r_ecx;
    /* 00425a46: movsx eax, word ptr [edi + 0x660] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x660u));
    /* 00425a4d: mov dword ptr [edi + 0x660], eax */ W32((u32)(r_edi+0x660u), r_eax);
    /* 00425a53: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00425a56: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00425a59: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00425a5d: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00425a61: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425a64: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x425a69u); f_007a900c();
    /* 00425a69: fld dword ptr [0x8fba5c] */ FPUSH(R_F32((u32)(0x8fba5cu)));
    /* 00425a6f: fld dword ptr [0x8fba58] */ FPUSH(R_F32((u32)(0x8fba58u)));
    /* 00425a75: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00425a79: fld dword ptr [0x8fba50] */ FPUSH(R_F32((u32)(0x8fba50u)));
    /* 00425a7f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425a81: fst dword ptr [edi + 0x674] */ W_F32((u32)(r_edi+0x674u), ST(0));
    /* 00425a87: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00425a8b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00425a8d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00425a8f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00425a93: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00425a97: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00425a9a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00425a9c: fmul dword ptr [0x8fba60] */ ST(0) = ST(0) * R_F32((u32)(0x8fba60u));
    /* 00425aa2: fdiv dword ptr [0x8fba54] */ ST(0) = ST(0) / R_F32((u32)(0x8fba54u));
    /* 00425aa8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00425aaa: mov dword ptr [edi + 0x668], eax */ W32((u32)(r_edi+0x668u), r_eax);
    /* 00425ab0: fst dword ptr [edi + 0x670] */ W_F32((u32)(r_edi+0x670u), ST(0));
    /* 00425ab6: fmul dword ptr [0x8fba48] */ ST(0) = ST(0) * R_F32((u32)(0x8fba48u));
    /* 00425abc: fstp dword ptr [edi + 0x678] */ W_F32((u32)(r_edi+0x678u), ST(0)); FPOP();
    /* 00425ac2: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00425ac4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425ac6: fchs  */ ST(0) = -ST(0);
    /* 00425ac8: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00425aca: fst dword ptr [edi + 0x66c] */ W_F32((u32)(r_edi+0x66cu), ST(0));
    /* 00425ad0: mov dword ptr [edi + 0x680], 0 */ W32((u32)(r_edi+0x680u), 0x0u);
    /* 00425ada: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00425adc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425ade: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00425ae0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00425ae2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00425ae4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00425ae6: fstp dword ptr [edi + 0x67c] */ W_F32((u32)(r_edi+0x67cu), ST(0)); FPOP();
    /* 00425aec: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425aef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425af0: ret 4 */ FN_RET(0x00425a40); r_esp += 8; return;
}

void f_00425a80(void)
{
    FN_ENTER(0x00425a80);
    /* 00425a80: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00425a81: fst dword ptr [edi + 0x674] */ W_F32((u32)(r_edi+0x674u), ST(0));
    /* 00425a87: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00425a8b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00425a8d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00425a8f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00425a93: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00425a97: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00425a9a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00425a9c: fmul dword ptr [0x8fba60] */ ST(0) = ST(0) * R_F32((u32)(0x8fba60u));
    /* 00425aa2: fdiv dword ptr [0x8fba54] */ ST(0) = ST(0) / R_F32((u32)(0x8fba54u));
    /* 00425aa8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00425aaa: mov dword ptr [edi + 0x668], eax */ W32((u32)(r_edi+0x668u), r_eax);
    /* 00425ab0: fst dword ptr [edi + 0x670] */ W_F32((u32)(r_edi+0x670u), ST(0));
    /* 00425ab6: fmul dword ptr [0x8fba48] */ ST(0) = ST(0) * R_F32((u32)(0x8fba48u));
    /* 00425abc: fstp dword ptr [edi + 0x678] */ W_F32((u32)(r_edi+0x678u), ST(0)); FPOP();
    /* 00425ac2: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00425ac4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425ac6: fchs  */ ST(0) = -ST(0);
    /* 00425ac8: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00425aca: fst dword ptr [edi + 0x66c] */ W_F32((u32)(r_edi+0x66cu), ST(0));
    /* 00425ad0: mov dword ptr [edi + 0x680], 0 */ W32((u32)(r_edi+0x680u), 0x0u);
    /* 00425ada: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00425adc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425ade: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00425ae0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00425ae2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00425ae4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00425ae6: fstp dword ptr [edi + 0x67c] */ W_F32((u32)(r_edi+0x67cu), ST(0)); FPOP();
    /* 00425aec: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00425aef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00425af0: ret 4 */ FN_RET(0x00425a80); r_esp += 8; return;
}

void f_00425af4(void) /* sub_425AF4 */
{
    FN_ENTER(0x00425af4);
    /* 00425af4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00425af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00425afa: jne 0x425b09 */ if (!fZ) goto L_00425b09;
L_00425afc:; BB(0x00425afc);
    /* 00425afc: mov dword ptr [ecx + 0x684], 0 */ W32((u32)(r_ecx+0x684u), 0x0u);
    /* 00425b06: ret 4 */ FN_RET(0x00425af4); r_esp += 8; return;
L_00425b09:; BB(0x00425b09);
    /* 00425b09: mov dword ptr [ecx + 0x684], 0x32 */ W32((u32)(r_ecx+0x684u), 0x32u);
    /* 00425b13: ret 4 */ FN_RET(0x00425af4); r_esp += 8; return;
}

void f_00425b18(void) /* sub_425B18 */
{
    FN_ENTER(0x00425b18);
    /* 00425b18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b1a: call 0x425af4 */ r_esp -= 4; W32(r_esp, 0x425b1fu); f_00425af4();
    /* 00425b1f: ret  */ FN_RET(0x00425b18); r_esp += 4; return;
}

void f_00425b20(void) /* sub_425B20 */
{
    FN_ENTER(0x00425b20);
    /* 00425b20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00425b21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00425b23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00425b25: call 0x425b44 */ r_esp -= 4; W32(r_esp, 0x425b2au); f_00425b44();
    /* 00425b2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00425b2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00425b30: jne 0x425b36 */ if (!fZ) goto L_00425b36;
L_00425b32:; BB(0x00425b32);
    /* 00425b32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00425b33: ret 4 */ FN_RET(0x00425b20); r_esp += 8; return;
L_00425b36:; BB(0x00425b36);
    /* 00425b36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00425b37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x425b3cu); f_005c2f74();
    /* 00425b3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425b3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00425b3e: ret 4 */ FN_RET(0x00425b20); r_esp += 8; return;
}

void f_00425b44(void) /* sub_425B44 */
{
    FN_ENTER(0x00425b44);
    /* 00425b44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425b45: mov ebp, esp */ r_ebp = r_esp;
    /* 00425b47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425b49: push 0x8cd760 */ { u32 v = 0x8cd760u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00425b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425b55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00425b5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425b5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00425b62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00425b65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00425b68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00425b6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00425b6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425b75: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425b78: mov dword ptr [eax], 0xaf3ce8 */ W32((u32)(r_eax), 0xaf3ce8u);
    /* 00425b7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425b7f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x425b84u); f_007b4e84();
    /* 00425b84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425b85: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425b88: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x425b8du); f_007b9c8c();
    /* 00425b8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00425b94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425b97: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x425b9cu); f_007b4aec();
    /* 00425b9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425b9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00425ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 00425ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425ba9: ret  */ FN_RET(0x00425b44); r_esp += 4; return;
}

void f_00425bac(void) /* sub_425BAC */
{
    FN_ENTER(0x00425bac);
    /* 00425bac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425bad: mov ebp, esp */ r_ebp = r_esp;
    /* 00425baf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425bb1: push 0x8cd77c */ { u32 v = 0x8cd77cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425bb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00425bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425bbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00425bc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425bc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00425bca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00425bcd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00425bd0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00425bd3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00425bd6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00425bd9: mov eax, ecx */ r_eax = r_ecx;
    /* 00425bdb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00425bde: mov dword ptr [eax], 0xaf3d18 */ W32((u32)(r_eax), 0xaf3d18u);
    /* 00425be4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425be6: je 0x425bfe */ if (fZ) goto L_00425bfe;
L_00425be8:; BB(0x00425be8);
    /* 00425be8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00425bec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00425bf1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00425bf5: mov edx, ecx */ r_edx = r_ecx;
    /* 00425bf7: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_00425bfe:; BB(0x00425bfe);
    /* 00425bfe: mov eax, ecx */ r_eax = r_ecx;
    /* 00425c00: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00425c03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425c05: je 0x425c1d */ if (fZ) goto L_00425c1d;
L_00425c07:; BB(0x00425c07);
    /* 00425c07: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00425c0b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00425c10: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00425c14: mov edx, ecx */ r_edx = r_ecx;
    /* 00425c16: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_00425c1d:; BB(0x00425c1d);
    /* 00425c1d: mov eax, ecx */ r_eax = r_ecx;
    /* 00425c1f: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00425c22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425c24: je 0x425c3c */ if (fZ) goto L_00425c3c;
L_00425c26:; BB(0x00425c26);
    /* 00425c26: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00425c2a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00425c2f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00425c33: mov edx, ecx */ r_edx = r_ecx;
    /* 00425c35: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
L_00425c3c:; BB(0x00425c3c);
    /* 00425c3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00425c43: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x425c48u); f_008171e8();
    /* 00425c48: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425c4b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00425c4d: jne 0x425c5f */ if (!fZ) goto L_00425c5f;
L_00425c4f:; BB(0x00425c4f);
    /* 00425c4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425c52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00425c59: mov esp, ebp */ r_esp = r_ebp;
    /* 00425c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425c5c: ret 4 */ FN_RET(0x00425bac); r_esp += 8; return;
L_00425c5f:; BB(0x00425c5f);
    /* 00425c5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00425c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425c63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x425c68u); f_005c2f74();
    /* 00425c68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425c69: jmp 0x425c4f */ goto L_00425c4f;
}

void f_00425c6c(void) /* sub_425C6C */
{
    FN_ENTER(0x00425c6c);
    /* 00425c6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425c6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00425c6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425c71: push 0x8cd82e */ { u32 v = 0x8cd82eu; r_esp -= 4; W32(r_esp, v); }
    /* 00425c76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00425c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425c7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00425c84: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425c8a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00425c8d: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00425c90: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00425c93: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00425c96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425c99: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00425c9c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x425ca1u); f_008193cc();
    /* 00425ca1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425ca8: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00425cab: mov dword ptr [edx], 0xaf3d18 */ W32((u32)(r_edx), 0xaf3d18u);
    /* 00425cb1: mov eax, dword ptr [0x9a3f24] */ r_eax = R32((u32)(0x9a3f24u));
    /* 00425cb6: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00425cbd: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00425cc2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00425cc5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x425ccau); f_005caba4();
    /* 00425cca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425ccb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00425cce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425cd0: je 0x426203 */ if (fZ) goto L_00426203;
L_00425cd6:; BB(0x00425cd6);
    /* 00425cd6: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00425cdd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00425ce4: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425ce7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00425cea: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00425cf0: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x425cf5u); f_007b4b48();
    /* 00425cf5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00425cfc: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425d02: mov dword ptr [eax], 0xaf3ce8 */ W32((u32)(r_eax), 0xaf3ce8u);
    /* 00425d08: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425d0e: mov edx, dword ptr [0x9a3f20] */ r_edx = R32((u32)(0x9a3f20u));
    /* 00425d14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425d16: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00425d19: mov ebx, dword ptr [ebp - 0x94] */ r_ebx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425d1f: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 00425d29: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 00425d33: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 00425d3d: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x425d42u); f_007ba898();
    /* 00425d42: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425d48: mov dword ptr [edx + 0xa8], 1 */ W32((u32)(r_edx+0xa8u), 0x1u);
    /* 00425d52: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00425d56: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425d58: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x425d5du); f_008581c5();
    /* 00425d5d: mov edi, eax */ r_edi = r_eax;
    /* 00425d5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425d62: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425d68: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 00425d6e: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 00425d74: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 00425d77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00425d79: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00425d7c: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00425d7f: fmul dword ptr [0x8fc348] */ ST(0) = ST(0) * R_F32((u32)(0x8fc348u));
    /* 00425d85: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00425d8a: jle 0x8cd818 */ if ((fZ||fS!=fO)) goto L_008cd818;
L_00425d90:; BB(0x00425d90);
    /* 00425d90: mov ecx, dword ptr [0x9a3f38] */ r_ecx = R32((u32)(0x9a3f38u));
    /* 00425d96: mov edx, dword ptr [0x9a3f44] */ r_edx = R32((u32)(0x9a3f44u));
    /* 00425d9c: mov esi, dword ptr [0x9a3f4c] */ r_esi = R32((u32)(0x9a3f4cu));
    /* 00425da2: mov eax, dword ptr [0x9a3f50] */ r_eax = R32((u32)(0x9a3f50u));
    /* 00425da7: fld dword ptr [0x8fc344] */ FPUSH(R_F32((u32)(0x8fc344u)));
    /* 00425dad: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00425db0: mov ecx, dword ptr [0x9a3f3c] */ r_ecx = R32((u32)(0x9a3f3cu));
    /* 00425db6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00425db9: mov edx, dword ptr [0x9a3f48] */ r_edx = R32((u32)(0x9a3f48u));
    /* 00425dbf: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_00425dc2:; BB(0x00425dc2);
    /* 00425dc2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425dc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425dc7: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00425dca: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00425dcc: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 00425dcf: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00425dd2: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 00425dd9: mov dword ptr [edi + 0x14], ecx */ W32((u32)(r_edi+0x14u), r_ecx);
    /* 00425ddc: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 00425ddf: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425de2: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00425de5: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 00425de8: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 00425deb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00425ded: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00425def: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00425df1: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 00425df4: mov esi, 0x41c80000 */ r_esi = 0x41c80000u;
    /* 00425df9: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 00425dfc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00425dff: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00425e02: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425e08: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425e0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00425e10: jl 0x425dc2 */ if ((fS!=fO)) goto L_00425dc2;
L_00425e12:; BB(0x00425e12);
    /* 00425e12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00425e14: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00425e16:; BB(0x00425e16);
    /* 00425e16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00425e17: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x425e1cu); f_007b999c();
    /* 00425e1c: push dword ptr [ebp - 0x94] */ { u32 v = R32((u32)(r_ebp+0xffffff6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00425e22: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x425e27u); f_007b4d98();
    /* 00425e27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425e2a: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 00425e30: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00425e36: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00425e38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00425e3a: jle 0x425e65 */ if ((fZ||fS!=fO)) goto L_00425e65;
L_00425e3c:; BB(0x00425e3c);
    /* 00425e3c: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00425e42: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00425e45: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425e47: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00425e49: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425e4b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425e4d: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00425e4f: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00425e53: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00425e56: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 00425e5a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00425e5d: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425e63: jl 0x425e3c */ if ((fS!=fO)) goto L_00425e3c;
L_00425e65:; BB(0x00425e65);
    /* 00425e65: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00425e68: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00425e6f:; BB(0x00425e6f);
    /* 00425e6f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00425e72: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00425e75: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425e7c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00425e83: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00425e88: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x425e8du); f_005caba4();
    /* 00425e8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425e8e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00425e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425e93: je 0x4261fc */ if (fZ) goto L_004261fc;
L_00425e99:; BB(0x00425e99);
    /* 00425e99: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00425ea0: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00425ea7: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425eaa: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00425ead: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00425eb0: mov dword ptr [ebp - 0x6c], 0x41200000 */ W32((u32)(r_ebp+0xffffff94u), 0x41200000u);
    /* 00425eb7: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x425ebcu); f_007b4b48();
    /* 00425ebc: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00425ec3: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00425ec6: mov dword ptr [eax], 0xaf3ce8 */ W32((u32)(r_eax), 0xaf3ce8u);
    /* 00425ecc: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00425ecf: mov edx, dword ptr [0x9a3f20] */ r_edx = R32((u32)(0x9a3f20u));
    /* 00425ed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425ed7: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00425eda: mov ebx, dword ptr [ebp - 0x7c] */ r_ebx = R32((u32)(r_ebp+0xffffff84u));
    /* 00425edd: mov dword ptr [ebx + 0xac], 0xc0800000 */ W32((u32)(r_ebx+0xacu), 0xc0800000u);
    /* 00425ee7: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 00425ef1: mov dword ptr [ebx + 0xb4], 0x42200000 */ W32((u32)(r_ebx+0xb4u), 0x42200000u);
    /* 00425efb: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x425f00u); f_007ba898();
    /* 00425f00: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00425f03: mov dword ptr [edx + 0xa8], 3 */ W32((u32)(r_edx+0xa8u), 0x3u);
    /* 00425f0d: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00425f11: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00425f16: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x425f1bu); f_008581c5();
    /* 00425f1b: mov edi, eax */ r_edi = r_eax;
    /* 00425f1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425f20: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 00425f23: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 00425f29: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 00425f2f: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 00425f32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00425f34: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 00425f37: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00425f3a: fmul dword ptr [ebp - 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffff94u));
    /* 00425f3d: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00425f42: jle 0x8cd81f */ if ((fZ||fS!=fO)) goto L_008cd81f;
L_00425f48:; BB(0x00425f48);
    /* 00425f48: mov ecx, dword ptr [0x9a3f34] */ r_ecx = R32((u32)(0x9a3f34u));
    /* 00425f4e: mov edx, dword ptr [0x9a3f38] */ r_edx = R32((u32)(0x9a3f38u));
    /* 00425f54: mov esi, dword ptr [0x9a3f3c] */ r_esi = R32((u32)(0x9a3f3cu));
    /* 00425f5a: mov eax, dword ptr [0x9a3f44] */ r_eax = R32((u32)(0x9a3f44u));
    /* 00425f5f: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00425f62: mov esi, dword ptr [0x9a3f48] */ r_esi = R32((u32)(0x9a3f48u));
    /* 00425f68: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00425f6b: mov esi, dword ptr [0x9a3f4c] */ r_esi = R32((u32)(0x9a3f4cu));
    /* 00425f71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00425f74: mov esi, dword ptr [0x9a3f50] */ r_esi = R32((u32)(0x9a3f50u));
    /* 00425f7a: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
L_00425f7d:; BB(0x00425f7d);
    /* 00425f7d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00425f80: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00425f83: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 00425f86: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 00425f89: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 00425f8c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425f8f: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 00425f96: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00425f99: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 00425f9c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425f9f: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 00425fa2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425fa5: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 00425fa8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00425faa: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00425fac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00425fae: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 00425fb1: mov esi, dword ptr [ebp - 0x6c] */ r_esi = R32((u32)(r_ebp+0xffffff94u));
    /* 00425fb4: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 00425fb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00425fba: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00425fbd: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00425fc0: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00425fc2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00425fc4: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 00425fc7: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425fcd: jl 0x425f7d */ if ((fS!=fO)) goto L_00425f7d;
L_00425fcf:; BB(0x00425fcf);
    /* 00425fcf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00425fd1:; BB(0x00425fd1);
    /* 00425fd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00425fd2: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x425fd7u); f_007b999c();
    /* 00425fd7: push dword ptr [ebp - 0x7c] */ { u32 v = R32((u32)(r_ebp+0xffffff84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00425fda: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x425fdfu); f_007b4d98();
    /* 00425fdf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425fe2: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 00425fe5: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00425feb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00425fed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00425fef: jle 0x42601a */ if ((fZ||fS!=fO)) goto L_0042601a;
L_00425ff1:; BB(0x00425ff1);
    /* 00425ff1: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00425ff7: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00425ffa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425ffc: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00425ffe: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426000: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426002: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00426004: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00426008: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042600b: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 0042600f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00426012: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426018: jl 0x425ff1 */ if ((fS!=fO)) goto L_00425ff1;
L_0042601a:; BB(0x0042601a);
    /* 0042601a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0042601d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00426024:; BB(0x00426024);
    /* 00426024: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00426027: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0042602a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426031: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00426038: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042603d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x426042u); f_005caba4();
    /* 00426042: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00426043: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00426046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426048: je 0x4261f8 */ if (fZ) goto L_004261f8;
L_0042604e:; BB(0x0042604e);
    /* 0042604e: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00426055: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0042605c: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042605f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00426062: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00426065: mov dword ptr [ebp - 0x54], 0x41200000 */ W32((u32)(r_ebp+0xffffffacu), 0x41200000u);
    /* 0042606c: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x426071u); f_007b4b48();
    /* 00426071: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00426078: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042607b: mov dword ptr [eax], 0xaf3ce8 */ W32((u32)(r_eax), 0xaf3ce8u);
    /* 00426081: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00426084: mov edx, dword ptr [0x9a3f20] */ r_edx = R32((u32)(0x9a3f20u));
    /* 0042608a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042608c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0042608f: mov ebx, dword ptr [ebp - 0x64] */ r_ebx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00426092: mov dword ptr [ebx + 0xac], 0xc0800000 */ W32((u32)(r_ebx+0xacu), 0xc0800000u);
    /* 0042609c: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 004260a6: mov dword ptr [ebx + 0xb4], 0xc2c80000 */ W32((u32)(r_ebx+0xb4u), 0xc2c80000u);
    /* 004260b0: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4260b5u); f_007ba898();
    /* 004260b5: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004260b8: mov dword ptr [edx + 0xa8], 5 */ W32((u32)(r_edx+0xa8u), 0x5u);
    /* 004260c2: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004260c6: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004260cb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4260d0u); f_008581c5();
    /* 004260d0: mov edi, eax */ r_edi = r_eax;
    /* 004260d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004260d5: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004260d8: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 004260de: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004260e4: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 004260e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004260e9: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004260ec: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004260ef: fmul dword ptr [ebp - 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffacu));
    /* 004260f2: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004260f7: jle 0x8cd826 */ if ((fZ||fS!=fO)) goto L_008cd826;
L_004260fd:; BB(0x004260fd);
    /* 004260fd: mov ecx, dword ptr [0x9a3f34] */ r_ecx = R32((u32)(0x9a3f34u));
    /* 00426103: mov edx, dword ptr [0x9a3f38] */ r_edx = R32((u32)(0x9a3f38u));
    /* 00426109: mov esi, dword ptr [0x9a3f3c] */ r_esi = R32((u32)(0x9a3f3cu));
    /* 0042610f: mov eax, dword ptr [0x9a3f50] */ r_eax = R32((u32)(0x9a3f50u));
    /* 00426114: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00426117: mov edx, dword ptr [0x9a3f44] */ r_edx = R32((u32)(0x9a3f44u));
    /* 0042611d: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00426120: mov esi, dword ptr [0x9a3f4c] */ r_esi = R32((u32)(0x9a3f4cu));
    /* 00426126: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00426129: mov edx, dword ptr [0x9a3f48] */ r_edx = R32((u32)(0x9a3f48u));
    /* 0042612f: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_00426132:; BB(0x00426132);
    /* 00426132: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426135: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00426138: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 0042613b: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 0042613e: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00426141: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 00426148: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 0042614b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042614e: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 00426151: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426154: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00426157: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 0042615a: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0042615d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0042615f: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00426161: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00426163: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 00426166: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00426169: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 0042616c: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 0042616f: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00426172: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00426174: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00426177: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00426179: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042617c: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426182: jl 0x426132 */ if ((fS!=fO)) goto L_00426132;
L_00426184:; BB(0x00426184);
    /* 00426184: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00426186:; BB(0x00426186);
    /* 00426186: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426187: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x42618cu); f_007b999c();
    /* 0042618c: push dword ptr [ebp - 0x64] */ { u32 v = R32((u32)(r_ebp+0xffffff9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042618f: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x426194u); f_007b4d98();
    /* 00426194: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426197: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 0042619a: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 004261a0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004261a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004261a4: jle 0x4261cf */ if ((fZ||fS!=fO)) goto L_004261cf;
L_004261a6:; BB(0x004261a6);
    /* 004261a6: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 004261ac: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004261af: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004261b1: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004261b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004261b5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004261b7: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004261b9: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004261bd: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004261c0: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 004261c4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004261c7: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004261cd: jl 0x4261a6 */ if ((fS!=fO)) goto L_004261a6;
L_004261cf:; BB(0x004261cf);
    /* 004261cf: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004261d2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004261d9:; BB(0x004261d9);
    /* 004261d9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004261dc: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004261df: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004261e2: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004261e5: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004261e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004261eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004261f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004261f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004261f5: ret 4 */ FN_RET(0x00425c6c); r_esp += 8; return;
L_004261f8:; BB(0x004261f8);
    /* 004261f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004261fa: jmp 0x4261d9 */ goto L_004261d9;
L_004261fc:; BB(0x004261fc);
    /* 004261fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004261fe: jmp 0x426024 */ goto L_00426024;
L_00426203:; BB(0x00426203);
    /* 00426203: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00426205: jmp 0x425e6f */ goto L_00425e6f;
L_008cd818:; BB(0x008cd818);
    /* 008cd818: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008cd81a: jmp 0x425e16 */ goto L_00425e16;
L_008cd81f:; BB(0x008cd81f);
    /* 008cd81f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008cd821: jmp 0x425fd1 */ goto L_00425fd1;
L_008cd826:; BB(0x008cd826);
    /* 008cd826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008cd828: jmp 0x426186 */ goto L_00426186;
}

