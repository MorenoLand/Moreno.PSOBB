#include "protos.h"

void f_0048e058(void) /* sub_48E058 */
{
    FN_ENTER(0x0048e058);
    /* 0048e058: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048e05c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e05e: jl 0x48e065 */ if ((fS!=fO)) goto L_0048e065;
L_0048e060:; BB(0x0048e060);
    /* 0048e060: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048e063: jl 0x48e06b */ if ((fS!=fO)) goto L_0048e06b;
L_0048e065:; BB(0x0048e065);
    /* 0048e065: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0048e06a: ret  */ FN_RET(0x0048e058); r_esp += 4; return;
L_0048e06b:; BB(0x0048e06b);
    /* 0048e06b: movzx eax, word ptr [eax*2 + 0xa46f84] */ r_eax = (u32)R16((u32)(r_eax*2+0xa46f84u));
    /* 0048e073: ret  */ FN_RET(0x0048e058); r_esp += 4; return;
}

void f_0048e074(void) /* sub_48E074 */
{
    FN_ENTER(0x0048e074);
    /* 0048e074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e075: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e077: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e078: movzx esi, word ptr [esp + 0x14] */ r_esi = (u32)R16((u32)(r_esp+0x14u));
    /* 0048e07d: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e083: je 0x48e0f9 */ if (fZ) goto L_0048e0f9;
L_0048e085:; BB(0x0048e085);
    /* 0048e085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e086: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x48e08bu); f_0068d5a8();
    /* 0048e08b: mov ebp, eax */ r_ebp = r_eax;
    /* 0048e08d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e090: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e092: je 0x48e0f9 */ if (fZ) goto L_0048e0f9;
L_0048e094:; BB(0x0048e094);
    /* 0048e094: mov eax, ebp */ r_eax = r_ebp;
    /* 0048e096: call 0x48e104 */ r_esp -= 4; W32(r_esp, 0x48e09bu); f_0048e104();
    /* 0048e09b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e09d: je 0x48e0f9 */ if (fZ) goto L_0048e0f9;
L_0048e09f:; BB(0x0048e09f);
    /* 0048e09f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0048e0a3: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0048e0aa: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0048e0b1: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0048e0b3: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0048e0b7: jae 0x48e0bb */ if (!fC) goto L_0048e0bb;
L_0048e0b9:; BB(0x0048e0b9);
    /* 0048e0b9: mov ebx, eax */ r_ebx = r_eax;
L_0048e0bb:; BB(0x0048e0bb);
    /* 0048e0bb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048e0be: jne 0x48e0c7 */ if (!fZ) goto L_0048e0c7;
L_0048e0c0:; BB(0x0048e0c0);
    /* 0048e0c0: mov eax, ebx */ r_eax = r_ebx;
    /* 0048e0c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e0c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e0c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e0c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e0c6: ret  */ FN_RET(0x0048e074); r_esp += 4; return;
L_0048e0c7:; BB(0x0048e0c7);
    /* 0048e0c7: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e0c9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0048e0cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e0cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e0ce: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048e0d3: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x48e0d8u); f_00693348();
    /* 0048e0d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e0db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e0dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048e0de: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x48e0e3u); f_0069b4f0();
    /* 0048e0e3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0048e0e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e0e7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0048e0ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048e0ec: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x48e0f2u); call_ind(t); }
    /* 0048e0f2: mov eax, ebx */ r_eax = r_ebx;
    /* 0048e0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e0f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e0f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e0f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e0f8: ret  */ FN_RET(0x0048e074); r_esp += 4; return;
L_0048e0f9:; BB(0x0048e0f9);
    /* 0048e0f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e0fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e0fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e0fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e0fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e0ff: ret  */ FN_RET(0x0048e074); r_esp += 4; return;
}

void f_0048e100(void) /* sub_48E100 */
{
    FN_ENTER(0x0048e100);
    /* 0048e100: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048e104: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e105: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e106: mov esi, eax */ r_esi = r_eax;
    /* 0048e108: mov eax, esi */ r_eax = r_esi;
    /* 0048e10a: call 0x48df4c */ r_esp -= 4; W32(r_esp, 0x48e10fu); f_0048df4c();
    /* 0048e10f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e111: je 0x48e125 */ if (fZ) goto L_0048e125;
L_0048e113:; BB(0x0048e113);
    /* 0048e113: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0048e116: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e11b: jne 0x48e125 */ if (!fZ) goto L_0048e125;
L_0048e11d:; BB(0x0048e11d);
    /* 0048e11d: mov eax, 1 */ r_eax = 0x1u;
    /* 0048e122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e123: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e124: ret  */ FN_RET(0x0048e100); r_esp += 4; return;
L_0048e125:; BB(0x0048e125);
    /* 0048e125: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e127: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e128: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e129: ret  */ FN_RET(0x0048e100); r_esp += 4; return;
}

void f_0048e104(void)
{
    FN_ENTER(0x0048e104);
    /* 0048e104: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e105: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e106: mov esi, eax */ r_esi = r_eax;
    /* 0048e108: mov eax, esi */ r_eax = r_esi;
    /* 0048e10a: call 0x48df4c */ r_esp -= 4; W32(r_esp, 0x48e10fu); f_0048df4c();
    /* 0048e10f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e111: je 0x48e125 */ if (fZ) goto L_0048e125;
L_0048e113:; BB(0x0048e113);
    /* 0048e113: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0048e116: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e11b: jne 0x48e125 */ if (!fZ) goto L_0048e125;
L_0048e11d:; BB(0x0048e11d);
    /* 0048e11d: mov eax, 1 */ r_eax = 0x1u;
    /* 0048e122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e123: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e124: ret  */ FN_RET(0x0048e104); r_esp += 4; return;
L_0048e125:; BB(0x0048e125);
    /* 0048e125: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e127: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048e128: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e129: ret  */ FN_RET(0x0048e104); r_esp += 4; return;
}

void f_0048e12c(void) /* sub_48E12C */
{
    FN_ENTER(0x0048e12c);
    /* 0048e12c: mov eax, dword ptr [0xa46f8c] */ r_eax = R32((u32)(0xa46f8cu));
    /* 0048e131: ret  */ FN_RET(0x0048e12c); r_esp += 4; return;
}

void f_0048e134(void) /* sub_48E134 */
{
    FN_ENTER(0x0048e134);
    /* 0048e134: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0048e139: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e13b: jne 0x48e143 */ if (!fZ) goto L_0048e143;
L_0048e13d:; BB(0x0048e13d);
    /* 0048e13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0048e142: ret  */ FN_RET(0x0048e134); r_esp += 4; return;
L_0048e143:; BB(0x0048e143);
    /* 0048e143: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e145: ret  */ FN_RET(0x0048e134); r_esp += 4; return;
}

void f_0048e148(void) /* sub_48E148 */
{
    FN_ENTER(0x0048e148);
    /* 0048e148: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e14b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e14f: movzx eax, byte ptr [0xa46f4c] */ r_eax = (u32)R8((u32)(0xa46f4cu));
    /* 0048e156: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048e158: jne 0x48e16c */ if (!fZ) goto L_0048e16c;
L_0048e15a:; BB(0x0048e15a);
    /* 0048e15a: mov dword ptr [0xa46f50], 0xbf400000 */ W32((u32)(0xa46f50u), 0xbf400000u);
    /* 0048e164: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e167: mov byte ptr [0xa46f4c], al */ W8((u32)(0xa46f4cu), (u8)r_eax);
L_0048e16c:; BB(0x0048e16c);
    /* 0048e16c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048e16e: jne 0x48e182 */ if (!fZ) goto L_0048e182;
L_0048e170:; BB(0x0048e170);
    /* 0048e170: mov dword ptr [0xa46f54], 0x3e800000 */ W32((u32)(0xa46f54u), 0x3e800000u);
    /* 0048e17a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e17d: mov byte ptr [0xa46f4c], al */ W8((u32)(0xa46f4cu), (u8)r_eax);
L_0048e182:; BB(0x0048e182);
    /* 0048e182: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048e184: jne 0x48e19a */ if (!fZ) goto L_0048e19a;
L_0048e186:; BB(0x0048e186);
    /* 0048e186: mov dword ptr [0xa46f58], 0x3e800000 */ W32((u32)(0xa46f58u), 0x3e800000u);
    /* 0048e190: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e195: mov byte ptr [0xa46f4c], al */ W8((u32)(0xa46f4cu), (u8)r_eax);
L_0048e19a:; BB(0x0048e19a);
    /* 0048e19a: fld dword ptr [0xa46f50] */ FPUSH(R_F32((u32)(0xa46f50u)));
    /* 0048e1a0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048e1a2: fadd dword ptr [0x901570] */ ST(0) = ST(0) + R_F32((u32)(0x901570u));
    /* 0048e1a8: fld dword ptr [0xa46f54] */ FPUSH(R_F32((u32)(0xa46f54u)));
    /* 0048e1ae: fld dword ptr [0xa46f58] */ FPUSH(R_F32((u32)(0xa46f58u)));
    /* 0048e1b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e1b6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0048e1b8: fadd dword ptr [0x90156c] */ ST(0) = ST(0) + R_F32((u32)(0x90156cu));
    /* 0048e1be: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048e1c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048e1c2: fadd dword ptr [0x901568] */ ST(0) = ST(0) + R_F32((u32)(0x901568u));
    /* 0048e1c8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0048e1cc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e1ce: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048e1d2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e1d4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048e1d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e1da: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0048e1de: call 0x48e1ec */ r_esp -= 4; W32(r_esp, 0x48e1e3u); f_0048e1ec();
    /* 0048e1e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e1e6: ret  */ FN_RET(0x0048e148); r_esp += 4; return;
}

void f_0048e1e8(void) /* sub_48E1E8 */
{
    FN_ENTER(0x0048e1e8);
    /* 0048e1e8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0048e1ec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e1ef: fld dword ptr [0xa46f90] */ FPUSH(R_F32((u32)(0xa46f90u)));
    /* 0048e1f5: fcomp dword ptr [0x90165c] */ fx_compare(ST(0), R_F32((u32)(0x90165cu))); FPOP();
    /* 0048e1fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e1fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e1fe: je 0x48e2c0 */ if (fZ) goto L_0048e2c0;
L_0048e204:; BB(0x0048e204);
    /* 0048e204: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e206: fld dword ptr [0x9015f4] */ FPUSH(R_F32((u32)(0x9015f4u)));
L_0048e20c:; BB(0x0048e20c);
    /* 0048e20c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0048e20e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0048e210:; BB(0x0048e210);
    /* 0048e210: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048e212: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e214: fstp dword ptr [0xa46f90] */ W_F32((u32)(0xa46f90u), ST(0)); FPOP();
    /* 0048e21a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e21b: je 0x48e2bc */ if (fZ) goto L_0048e2bc;
L_0048e221:; BB(0x0048e221);
    /* 0048e221: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 0048e227: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 0048e22c: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0048e232: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 0048e238: and ecx, 0xffffffdf */ {  u32 a = r_ecx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e23b: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0048e240: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0048e246: or ecx, 0x8810 */ {  u32 a = r_ecx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e24c: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 0048e252: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e257: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e259: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x48e25eu); f_0082d6fc();
    /* 0048e25e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e261: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 0048e266: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x48e26bu); f_0082e1c4();
    /* 0048e26b: fld dword ptr [0x9015f0] */ FPUSH(R_F32((u32)(0x9015f0u)));
    /* 0048e271: fld dword ptr [0xa46f90] */ FPUSH(R_F32((u32)(0xa46f90u)));
    /* 0048e277: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e27b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e27f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e283: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e285: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0048e287: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e289: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0048e28b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e28d: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0048e28f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048e292: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048e294: fchs  */ ST(0) = -ST(0);
    /* 0048e296: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048e298: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0048e29a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0048e29c: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0048e29e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048e2a2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0048e2a4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048e2a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048e2aa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0048e2ae: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 0048e2b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e2b6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x48e2bbu); f_0082d710();
    /* 0048e2bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0048e2bc:; BB(0x0048e2bc);
    /* 0048e2bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e2bf: ret  */ FN_RET(0x0048e1e8); r_esp += 4; return;
L_0048e2c0:; BB(0x0048e2c0);
    /* 0048e2c0: fld dword ptr [0x9015f4] */ FPUSH(R_F32((u32)(0x9015f4u)));
    /* 0048e2c6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048e2c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e2ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e2cb: jbe 0x48e2d4 */ if ((fC||fZ)) goto L_0048e2d4;
L_0048e2cd:; BB(0x0048e2cd);
    /* 0048e2cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e2cf: jmp 0x48e20c */ goto L_0048e20c;
L_0048e2d4:; BB(0x0048e2d4);
    /* 0048e2d4: fld dword ptr [0x9015f0] */ FPUSH(R_F32((u32)(0x9015f0u)));
    /* 0048e2da: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0048e2dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e2de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e2df: jae 0x48e2ea */ if (!fC) goto L_0048e2ea;
L_0048e2e1:; BB(0x0048e2e1);
    /* 0048e2e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e2e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e2e5: jmp 0x48e20c */ goto L_0048e20c;
L_0048e2ea:; BB(0x0048e2ea);
    /* 0048e2ea: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e2ee: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0048e2f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e2f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e2f3: jae 0x48e2fe */ if (!fC) goto L_0048e2fe;
L_0048e2f5:; BB(0x0048e2f5);
    /* 0048e2f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e2f7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e2f9: jmp 0x48e20c */ goto L_0048e20c;
L_0048e2fe:; BB(0x0048e2fe);
    /* 0048e2fe: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e302: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048e304: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e306: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e307: jbe 0x48e312 */ if ((fC||fZ)) goto L_0048e312;
L_0048e309:; BB(0x0048e309);
    /* 0048e309: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e30b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e30d: jmp 0x48e20c */ goto L_0048e20c;
L_0048e312:; BB(0x0048e312);
    /* 0048e312: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e316: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0048e318: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e31a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e31b: jae 0x48e326 */ if (!fC) goto L_0048e326;
L_0048e31d:; BB(0x0048e31d);
    /* 0048e31d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e31f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e321: jmp 0x48e20c */ goto L_0048e20c;
L_0048e326:; BB(0x0048e326);
    /* 0048e326: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e32a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048e32c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e32e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e32f: jbe 0x48e33a */ if ((fC||fZ)) goto L_0048e33a;
L_0048e331:; BB(0x0048e331);
    /* 0048e331: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e333: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e335: jmp 0x48e20c */ goto L_0048e20c;
L_0048e33a:; BB(0x0048e33a);
    /* 0048e33a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e33e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0048e340: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e342: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e343: jae 0x48e34e */ if (!fC) goto L_0048e34e;
L_0048e345:; BB(0x0048e345);
    /* 0048e345: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e347: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e349: jmp 0x48e20c */ goto L_0048e20c;
L_0048e34e:; BB(0x0048e34e);
    /* 0048e34e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e352: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048e354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e357: jbe 0x48e210 */ if ((fC||fZ)) goto L_0048e210;
L_0048e35d:; BB(0x0048e35d);
    /* 0048e35d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e35f: jmp 0x48e20c */ goto L_0048e20c;
}

void f_0048e1ec(void) /* sub_48E1EC */
{
    FN_ENTER(0x0048e1ec);
    /* 0048e1ec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e1ef: fld dword ptr [0xa46f90] */ FPUSH(R_F32((u32)(0xa46f90u)));
    /* 0048e1f5: fcomp dword ptr [0x90165c] */ fx_compare(ST(0), R_F32((u32)(0x90165cu))); FPOP();
    /* 0048e1fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e1fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e1fe: je 0x48e2c0 */ if (fZ) goto L_0048e2c0;
L_0048e204:; BB(0x0048e204);
    /* 0048e204: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e206: fld dword ptr [0x9015f4] */ FPUSH(R_F32((u32)(0x9015f4u)));
L_0048e20c:; BB(0x0048e20c);
    /* 0048e20c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0048e20e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0048e210:; BB(0x0048e210);
    /* 0048e210: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048e212: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e214: fstp dword ptr [0xa46f90] */ W_F32((u32)(0xa46f90u), ST(0)); FPOP();
    /* 0048e21a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e21b: je 0x48e2bc */ if (fZ) goto L_0048e2bc;
L_0048e221:; BB(0x0048e221);
    /* 0048e221: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 0048e227: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 0048e22c: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0048e232: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 0048e238: and ecx, 0xffffffdf */ {  u32 a = r_ecx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e23b: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0048e240: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0048e246: or ecx, 0x8810 */ {  u32 a = r_ecx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e24c: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 0048e252: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e257: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e259: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x48e25eu); f_0082d6fc();
    /* 0048e25e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e261: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 0048e266: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x48e26bu); f_0082e1c4();
    /* 0048e26b: fld dword ptr [0x9015f0] */ FPUSH(R_F32((u32)(0x9015f0u)));
    /* 0048e271: fld dword ptr [0xa46f90] */ FPUSH(R_F32((u32)(0xa46f90u)));
    /* 0048e277: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e27b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e27f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e283: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e285: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0048e287: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e289: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0048e28b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e28d: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0048e28f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048e292: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048e294: fchs  */ ST(0) = -ST(0);
    /* 0048e296: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048e298: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0048e29a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0048e29c: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0048e29e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048e2a2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0048e2a4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048e2a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048e2aa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0048e2ae: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 0048e2b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e2b6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x48e2bbu); f_0082d710();
    /* 0048e2bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0048e2bc:; BB(0x0048e2bc);
    /* 0048e2bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e2bf: ret  */ FN_RET(0x0048e1ec); r_esp += 4; return;
L_0048e2c0:; BB(0x0048e2c0);
    /* 0048e2c0: fld dword ptr [0x9015f4] */ FPUSH(R_F32((u32)(0x9015f4u)));
    /* 0048e2c6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048e2c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e2ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e2cb: jbe 0x48e2d4 */ if ((fC||fZ)) goto L_0048e2d4;
L_0048e2cd:; BB(0x0048e2cd);
    /* 0048e2cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e2cf: jmp 0x48e20c */ goto L_0048e20c;
L_0048e2d4:; BB(0x0048e2d4);
    /* 0048e2d4: fld dword ptr [0x9015f0] */ FPUSH(R_F32((u32)(0x9015f0u)));
    /* 0048e2da: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0048e2dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e2de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e2df: jae 0x48e2ea */ if (!fC) goto L_0048e2ea;
L_0048e2e1:; BB(0x0048e2e1);
    /* 0048e2e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e2e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e2e5: jmp 0x48e20c */ goto L_0048e20c;
L_0048e2ea:; BB(0x0048e2ea);
    /* 0048e2ea: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e2ee: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0048e2f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e2f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e2f3: jae 0x48e2fe */ if (!fC) goto L_0048e2fe;
L_0048e2f5:; BB(0x0048e2f5);
    /* 0048e2f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e2f7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e2f9: jmp 0x48e20c */ goto L_0048e20c;
L_0048e2fe:; BB(0x0048e2fe);
    /* 0048e2fe: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048e302: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048e304: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e306: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e307: jbe 0x48e312 */ if ((fC||fZ)) goto L_0048e312;
L_0048e309:; BB(0x0048e309);
    /* 0048e309: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e30b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e30d: jmp 0x48e20c */ goto L_0048e20c;
L_0048e312:; BB(0x0048e312);
    /* 0048e312: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e316: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0048e318: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e31a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e31b: jae 0x48e326 */ if (!fC) goto L_0048e326;
L_0048e31d:; BB(0x0048e31d);
    /* 0048e31d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e31f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e321: jmp 0x48e20c */ goto L_0048e20c;
L_0048e326:; BB(0x0048e326);
    /* 0048e326: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e32a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048e32c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e32e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e32f: jbe 0x48e33a */ if ((fC||fZ)) goto L_0048e33a;
L_0048e331:; BB(0x0048e331);
    /* 0048e331: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e333: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e335: jmp 0x48e20c */ goto L_0048e20c;
L_0048e33a:; BB(0x0048e33a);
    /* 0048e33a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e33e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0048e340: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e342: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e343: jae 0x48e34e */ if (!fC) goto L_0048e34e;
L_0048e345:; BB(0x0048e345);
    /* 0048e345: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e347: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e349: jmp 0x48e20c */ goto L_0048e20c;
L_0048e34e:; BB(0x0048e34e);
    /* 0048e34e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e352: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048e354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e357: jbe 0x48e210 */ if ((fC||fZ)) goto L_0048e210;
L_0048e35d:; BB(0x0048e35d);
    /* 0048e35d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e35f: jmp 0x48e20c */ goto L_0048e20c;
}

void f_0048e364(void) /* sub_48E364 */
{
    FN_ENTER(0x0048e364);
    /* 0048e364: fld dword ptr [0xa46f90] */ FPUSH(R_F32((u32)(0xa46f90u)));
    /* 0048e36a: fcomp dword ptr [0x9015ec] */ fx_compare(ST(0), R_F32((u32)(0x9015ecu))); FPOP();
    /* 0048e370: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e372: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e373: jbe 0x48e397 */ if ((fC||fZ)) goto L_0048e397;
L_0048e375:; BB(0x0048e375);
    /* 0048e375: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0048e37a: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0048e380: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0048e386: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0048e38b: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0048e391: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
L_0048e397:; BB(0x0048e397);
    /* 0048e397: mov dword ptr [0xa46f90], 0xbf800000 */ W32((u32)(0xa46f90u), 0xbf800000u);
    /* 0048e3a1: ret  */ FN_RET(0x0048e364); r_esp += 4; return;
}

void f_0048e3a4(void) /* sub_48E3A4 */
{
    FN_ENTER(0x0048e3a4);
    /* 0048e3a4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e3a7: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 0048e3ad: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 0048e3b2: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0048e3b8: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 0048e3be: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0048e3c3: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0048e3c9: and ecx, 0xffffffef */ {  u32 a = r_ecx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e3cc: or ecx, 0x8829 */ {  u32 a = r_ecx; u32 b = 0x8829u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0048e3d2: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 0048e3d8: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3dd: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0048e3e2: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x48e3e7u); f_0082d6fc();
    /* 0048e3e7: fld dword ptr [0x9015e8] */ FPUSH(R_F32((u32)(0x9015e8u)));
    /* 0048e3ed: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0048e3f1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048e3f5: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0048e3fd: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0048e401: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0048e409: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0048e411: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e412: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x48e417u); f_0082d710();
    /* 0048e417: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e41a: ret  */ FN_RET(0x0048e3a4); r_esp += 4; return;
}

void f_0048e41c(void) /* sub_48E41C */
{
    FN_ENTER(0x0048e41c);
    /* 0048e41c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e41f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0048e423: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0048e429: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e42b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e42d: jle 0x48e4f6 */ if ((fZ||fS!=fO)) goto L_0048e4f6;
L_0048e433:; BB(0x0048e433);
    /* 0048e433: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0048e437: mov ebx, eax */ r_ebx = r_eax;
    /* 0048e439: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0048e43d: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0048e441: mov esi, edx */ r_esi = r_edx;
    /* 0048e443: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048e445:; BB(0x0048e445);
    /* 0048e445: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048e44c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e44e: je 0x48e45b */ if (fZ) goto L_0048e45b;
L_0048e450:; BB(0x0048e450);
    /* 0048e450: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 0048e456: cmp ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e459: je 0x48e472 */ if (fZ) goto L_0048e472;
L_0048e45b:; BB(0x0048e45b);
    /* 0048e45b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048e45e: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e460: jl 0x48e445 */ if ((fS!=fO)) goto L_0048e445;
L_0048e462:; BB(0x0048e462);
    /* 0048e462: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0048e466: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0048e46a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_0048e46e:; BB(0x0048e46e);
    /* 0048e46e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e471: ret  */ FN_RET(0x0048e41c); r_esp += 4; return;
L_0048e472:; BB(0x0048e472);
    /* 0048e472: movsx ecx, word ptr [edi + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0048e479: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e47c: jne 0x48e45b */ if (!fZ) goto L_0048e45b;
L_0048e47e:; BB(0x0048e47e);
    /* 0048e47e: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048e482: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0048e485: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e486: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x48e48bu); f_00836208();
    /* 0048e48b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e48e: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 0048e492: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e494: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e495: jb 0x48e49b */ if (fC) goto L_0048e49b;
L_0048e497:; BB(0x0048e497);
    /* 0048e497: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e499: jmp 0x48e45b */ goto L_0048e45b;
L_0048e49b:; BB(0x0048e49b);
    /* 0048e49b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0048e49f: movsx ecx, word ptr [esp + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x38u));
    /* 0048e4a4: movsx edi, word ptr [edi + 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x1cu));
    /* 0048e4a8: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0048e4ab: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048e4ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e4b0: fchs  */ ST(0) = -ST(0);
    /* 0048e4b2: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0048e4b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e4b6: fadd dword ptr [0x9015e0] */ ST(0) = ST(0) + R_F32((u32)(0x9015e0u));
    /* 0048e4bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048e4be: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048e4c2: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048e4c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e4cc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048e4d0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048e4d4: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048e4d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048e4dc: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 0048e4e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e4e2: movsx ecx, word ptr [esp + 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x40u));
    /* 0048e4e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e4e9: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x48e4eeu); f_006ff4ac();
    /* 0048e4ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e4f1: jmp 0x48e45b */ goto L_0048e45b;
L_0048e4f6:; BB(0x0048e4f6);
    /* 0048e4f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e4f8: jmp 0x48e46e */ goto L_0048e46e;
}

void f_0048e500(void) /* sub_48E500 */
{
    FN_ENTER(0x0048e500);
    /* 0048e500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e501: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e504: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0048e508: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0048e50b: call 0x48e530 */ r_esp -= 4; W32(r_esp, 0x48e510u); f_0048e530();
    /* 0048e510: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0048e513: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048e518: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048e51c: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0048e520: fdiv dword ptr [0x9015dc] */ ST(0) = ST(0) / R_F32((u32)(0x9015dcu));
    /* 0048e526: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e52a: ret  */ FN_RET(0x0048e500); r_esp += 4; return;
}

void f_0048e52c(void) /* sub_48E52C */
{
    FN_ENTER(0x0048e52c);
    /* 0048e52c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048e530: imul eax, eax, 0x41c64e6d */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x41c64e6du; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e536: lea ecx, [eax + 0x3039] */ r_ecx = (u32)(r_eax+0x3039u);
    /* 0048e53c: sar ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048e53f: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0048e542: lea eax, [ecx + eax + 0x3039] */ r_eax = (u32)(r_ecx+r_eax+0x3039u);
    /* 0048e549: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048e54c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e54d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e54f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e551: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048e556: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e558: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e55a: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e55f: ret  */ FN_RET(0x0048e52c); r_esp += 4; return;
}

void f_0048e530(void) /* sub_48E530 */
{
    FN_ENTER(0x0048e530);
    /* 0048e530: imul eax, eax, 0x41c64e6d */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x41c64e6du; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048e536: lea ecx, [eax + 0x3039] */ r_ecx = (u32)(r_eax+0x3039u);
    /* 0048e53c: sar ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0048e53f: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0048e542: lea eax, [ecx + eax + 0x3039] */ r_eax = (u32)(r_ecx+r_eax+0x3039u);
    /* 0048e549: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0048e54c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0048e54d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e54f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e551: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048e556: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e558: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048e55a: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e55f: ret  */ FN_RET(0x0048e530); r_esp += 4; return;
}

void f_0048e560(void) /* sub_48E560 */
{
    FN_ENTER(0x0048e560);
    /* 0048e560: mov eax, dword ptr [0xa46f94] */ r_eax = R32((u32)(0xa46f94u));
    /* 0048e565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e567: je 0x48e57a */ if (fZ) goto L_0048e57a;
L_0048e569:; BB(0x0048e569);
    /* 0048e569: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0048e56f: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048e572: je 0x48e57a */ if (fZ) goto L_0048e57a;
L_0048e574:; BB(0x0048e574);
    /* 0048e574: mov eax, 1 */ r_eax = 0x1u;
    /* 0048e579: ret  */ FN_RET(0x0048e560); r_esp += 4; return;
L_0048e57a:; BB(0x0048e57a);
    /* 0048e57a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e57c: ret  */ FN_RET(0x0048e560); r_esp += 4; return;
}

void f_0048e580(void) /* sub_48E580 */
{
    FN_ENTER(0x0048e580);
    /* 0048e580: call 0x48e5a0 */ r_esp -= 4; W32(r_esp, 0x48e585u); f_0048e5a0();
    /* 0048e585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e587: je 0x48e596 */ if (fZ) goto L_0048e596;
L_0048e589:; BB(0x0048e589);
    /* 0048e589: mov eax, dword ptr [0xa46f98] */ r_eax = R32((u32)(0xa46f98u));
    /* 0048e58e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e590: je 0x48e596 */ if (fZ) goto L_0048e596;
L_0048e592:; BB(0x0048e592);
    /* 0048e592: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0048e595: ret  */ FN_RET(0x0048e580); r_esp += 4; return;
L_0048e596:; BB(0x0048e596);
    /* 0048e596: fld dword ptr [0x9015d8] */ FPUSH(R_F32((u32)(0x9015d8u)));
    /* 0048e59c: ret  */ FN_RET(0x0048e580); r_esp += 4; return;
}

void f_0048e5a0(void) /* sub_48E5A0 */
{
    FN_ENTER(0x0048e5a0);
    /* 0048e5a0: mov eax, dword ptr [0xa46f98] */ r_eax = R32((u32)(0xa46f98u));
    /* 0048e5a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e5a7: je 0x48e5ba */ if (fZ) goto L_0048e5ba;
L_0048e5a9:; BB(0x0048e5a9);
    /* 0048e5a9: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0048e5af: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048e5b2: je 0x48e5ba */ if (fZ) goto L_0048e5ba;
L_0048e5b4:; BB(0x0048e5b4);
    /* 0048e5b4: mov eax, 1 */ r_eax = 0x1u;
    /* 0048e5b9: ret  */ FN_RET(0x0048e5a0); r_esp += 4; return;
L_0048e5ba:; BB(0x0048e5ba);
    /* 0048e5ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048e5bc: ret  */ FN_RET(0x0048e5a0); r_esp += 4; return;
}

void f_0048e5c0(void) /* sub_48E5C0 */
{
    FN_ENTER(0x0048e5c0);
    /* 0048e5c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e5c3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048e5c7: fld dword ptr [0x9015d4] */ FPUSH(R_F32((u32)(0x9015d4u)));
    /* 0048e5cd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048e5cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e5d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e5d2: ja 0x48e629 */ if ((!fC&&!fZ)) goto L_0048e629;
L_0048e5d4:; BB(0x0048e5d4);
    /* 0048e5d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e5d6: fld dword ptr [0x9015d0] */ FPUSH(R_F32((u32)(0x9015d0u)));
    /* 0048e5dc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048e5de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e5e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e5e1: jae 0x48e5e9 */ if (!fC) goto L_0048e5e9;
L_0048e5e3:; BB(0x0048e5e3);
    /* 0048e5e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e5e5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e5e8: ret  */ FN_RET(0x0048e5c0); r_esp += 4; return;
L_0048e5e9:; BB(0x0048e5e9);
    /* 0048e5e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e5eb: fld dword ptr [0x9015cc] */ FPUSH(R_F32((u32)(0x9015ccu)));
    /* 0048e5f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048e5f3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0048e5f6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0048e5fa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e5ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048e603: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048e607: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048e60b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0048e60e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0048e612: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x48e617u); f_0082ddd8();
    /* 0048e617: fld dword ptr [0x9015d0] */ FPUSH(R_F32((u32)(0x9015d0u)));
    /* 0048e61d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0048e61f: fmul dword ptr [0x9015c8] */ ST(0) = ST(0) * R_F32((u32)(0x9015c8u));
    /* 0048e625: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e628: ret  */ FN_RET(0x0048e5c0); r_esp += 4; return;
L_0048e629:; BB(0x0048e629);
    /* 0048e629: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048e62b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e62e: ret  */ FN_RET(0x0048e5c0); r_esp += 4; return;
}

void f_0048e630(void) /* sub_48E630 */
{
    FN_ENTER(0x0048e630);
    /* 0048e630: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e631: mov ebx, esp */ r_ebx = r_esp;
    /* 0048e633: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0048e636: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e637: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048e639: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e63f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0048e642: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0048e644: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0048e647: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x48e64cu); f_007bb6d0();
    /* 0048e64c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e64d: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x48e652u); f_004d30cc();
    /* 0048e652: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0048e655: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048e656: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x48e65bu); f_0068d5a8();
    /* 0048e65b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e65e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048e660: je 0x48e972 */ if (fZ) goto L_0048e972;
L_0048e666:; BB(0x0048e666);
    /* 0048e666: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 0048e669: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0048e66c: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0048e66f: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0048e673: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0048e677: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0048e67d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0048e681: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0048e687: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 0048e68f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0048e693: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0048e699: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0048e69d: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0048e6a3: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0048e6a7: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0048e6ab: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 0048e6af: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0048e6b3: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0048e6b7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48e6bcu); f_0082f9c4();
    /* 0048e6bc: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 0048e6c4: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0048e6c8: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48e6cdu); f_0083173c();
    /* 0048e6cd: fcomp dword ptr [ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xcu))); FPOP();
    /* 0048e6d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e6d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e6d3: jae 0x48e6e7 */ if (!fC) goto L_0048e6e7;
L_0048e6d5:; BB(0x0048e6d5);
    /* 0048e6d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0048e6da: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e6e3: mov esp, ebx */ r_esp = r_ebx;
    /* 0048e6e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e6e6: ret  */ FN_RET(0x0048e630); r_esp += 4; return;
L_0048e6e7:; BB(0x0048e6e7);
    /* 0048e6e7: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 0048e6ef: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0048e6f3: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 0048e6f7: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0048e6fb: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0048e6ff: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48e704u); f_0082f9c4();
    /* 0048e704: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 0048e70c: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0048e710: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48e715u); f_0083173c();
    /* 0048e715: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0048e719: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048e71d: fcomp dword ptr [ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xcu))); FPOP();
    /* 0048e720: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e722: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e723: jb 0x48e6d5 */ if (fC) goto L_0048e6d5;
L_0048e725:; BB(0x0048e725);
    /* 0048e725: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048e729: fcomp dword ptr [0x901574] */ fx_compare(ST(0), R_F32((u32)(0x901574u))); FPOP();
    /* 0048e72f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e731: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e732: jbe 0x48e743 */ if ((fC||fZ)) goto L_0048e743;
L_0048e734:; BB(0x0048e734);
    /* 0048e734: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e736: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e73c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e73d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e73e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e73f: mov esp, ebx */ r_esp = r_ebx;
    /* 0048e741: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e742: ret  */ FN_RET(0x0048e630); r_esp += 4; return;
L_0048e743:; BB(0x0048e743);
    /* 0048e743: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0048e747: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0048e74b: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0048e74f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0048e753: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 0048e757: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0048e75b: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0048e75f: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0048e763: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48e768u); f_0082f9c4();
    /* 0048e768: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 0048e770: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0048e774: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48e779u); f_0083173c();
    /* 0048e779: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0048e77d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e781: fcomp dword ptr [0x9015c0] */ fx_compare(ST(0), R_F32((u32)(0x9015c0u))); FPOP();
    /* 0048e787: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e789: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e78a: jbe 0x48e972 */ if ((fC||fZ)) goto L_0048e972;
L_0048e790:; BB(0x0048e790);
    /* 0048e790: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e794: fcomp dword ptr [0x901574] */ fx_compare(ST(0), R_F32((u32)(0x901574u))); FPOP();
    /* 0048e79a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e79c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e79d: ja 0x48e972 */ if ((!fC&&!fZ)) goto L_0048e972;
L_0048e7a3:; BB(0x0048e7a3);
    /* 0048e7a3: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048e7a7: fsub dword ptr [ebx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xcu));
    /* 0048e7aa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e7ae: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048e7b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e7b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e7b3: jae 0x48e7c4 */ if (!fC) goto L_0048e7c4;
L_0048e7b5:; BB(0x0048e7b5);
    /* 0048e7b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e7b7: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e7bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e7be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e7bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e7c0: mov esp, ebx */ r_esp = r_ebx;
    /* 0048e7c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e7c3: ret  */ FN_RET(0x0048e630); r_esp += 4; return;
L_0048e7c4:; BB(0x0048e7c4);
    /* 0048e7c4: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0048e7c8: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 0048e7cc: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x48e7d1u); f_0082f9e0();
    /* 0048e7d1: fcomp dword ptr [0x9015c4] */ fx_compare(ST(0), R_F32((u32)(0x9015c4u))); FPOP();
    /* 0048e7d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e7d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e7da: ja 0x48e7eb */ if ((!fC&&!fZ)) goto L_0048e7eb;
L_0048e7dc:; BB(0x0048e7dc);
    /* 0048e7dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e7de: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e7e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e7e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e7e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e7e7: mov esp, ebx */ r_esp = r_ebx;
    /* 0048e7e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e7ea: ret  */ FN_RET(0x0048e630); r_esp += 4; return;
L_0048e7eb:; BB(0x0048e7eb);
    /* 0048e7eb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0048e7ef: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 0048e7f3: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 0048e7f7: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 0048e7fb: fchs  */ ST(0) = -ST(0);
    /* 0048e7fd: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0048e801: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048e803: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0048e807: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48e80cu); f_0082df08();
    /* 0048e80c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048e80e: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0048e812: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0048e815: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0048e819: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e81b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0048e81d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048e81f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e821: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0048e825: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0048e829: mov dword ptr [esp + 0x74], 0 */ W32((u32)(r_esp+0x74u), 0x0u);
    /* 0048e831: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 0048e835: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 0048e839: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 0048e83d: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0048e841: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48e846u); f_0082ebac();
    /* 0048e846: mov dword ptr [esp + 0x80], 0 */ W32((u32)(r_esp+0x80u), 0x0u);
    /* 0048e851: mov dword ptr [esp + 0x7c], esi */ W32((u32)(r_esp+0x7cu), r_esi);
    /* 0048e855: mov dword ptr [esp + 0x84], ebp */ W32((u32)(r_esp+0x84u), r_ebp);
    /* 0048e85c: lea ecx, [esp + 0x7c] */ r_ecx = (u32)(r_esp+0x7cu);
    /* 0048e860: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0048e864: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48e869u); f_0082f9c4();
    /* 0048e869: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0048e86d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0048e871: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0048e875: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 0048e879: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048e87b: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0048e87f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e881: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0048e885: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048e887: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0048e889: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e88b: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0048e88d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e88f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0048e891: fmul qword ptr [0x901588] */ ST(0) = ST(0) * R_F64((u32)(0x901588u));
    /* 0048e897: fdiv qword ptr [0x901580] */ ST(0) = ST(0) / R_F64((u32)(0x901580u));
    /* 0048e89d: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 0048e8a4: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 0048e8a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e8aa: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0048e8ad: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0048e8b1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e8b6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048e8ba: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048e8be: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048e8c2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0048e8c5: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0048e8c9: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 0048e8cd: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0048e8d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e8d3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0048e8d5: fmul qword ptr [0x901588] */ ST(0) = ST(0) * R_F64((u32)(0x901588u));
    /* 0048e8db: fdiv qword ptr [0x901580] */ ST(0) = ST(0) / R_F64((u32)(0x901580u));
    /* 0048e8e1: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048e8e5: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 0048e8e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e8eb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0048e8ee: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0048e8f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e8f7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048e8fb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048e8ff: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048e903: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0048e906: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048e90a: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 0048e90e: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0048e912: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048e914: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0048e916: fmul qword ptr [0x901588] */ ST(0) = ST(0) * R_F64((u32)(0x901588u));
    /* 0048e91c: fdiv qword ptr [0x901580] */ ST(0) = ST(0) / R_F64((u32)(0x901580u));
    /* 0048e922: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0048e925: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0048e929: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e92e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048e932: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048e936: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048e93a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0048e93d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0048e941: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048e943: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x48e948u); f_007a900c();
    /* 0048e948: mov ebp, eax */ r_ebp = r_eax;
    /* 0048e94a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e94b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048e94c: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x48e951u); f_007a900c();
    /* 0048e951: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048e954: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e956: jl 0x48e985 */ if ((fS!=fO)) goto L_0048e985;
L_0048e958:; BB(0x0048e958);
    /* 0048e958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e95a: jl 0x48e981 */ if ((fS!=fO)) goto L_0048e981;
L_0048e95c:; BB(0x0048e95c);
    /* 0048e95c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048e960: fadd dword ptr [ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xcu));
    /* 0048e963: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048e967: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048e969: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048e96b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048e96c: jae 0x48e6d5 */ if (!fC) goto L_0048e6d5;
L_0048e972:; BB(0x0048e972);
    /* 0048e972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e974: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e97a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e97b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e97c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e97d: mov esp, ebx */ r_esp = r_ebx;
    /* 0048e97f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e980: ret  */ FN_RET(0x0048e630); r_esp += 4; return;
L_0048e981:; BB(0x0048e981);
    /* 0048e981: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e983: jg 0x48e989 */ if ((!fZ&&fS==fO)) goto L_0048e989;
L_0048e985:; BB(0x0048e985);
    /* 0048e985: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e987: jle 0x48e95c */ if ((fZ||fS!=fO)) goto L_0048e95c;
L_0048e989:; BB(0x0048e989);
    /* 0048e989: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048e98b: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e992: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e993: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e994: mov esp, ebx */ r_esp = r_ebx;
    /* 0048e996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e997: ret  */ FN_RET(0x0048e630); r_esp += 4; return;
}

void f_0048e998(void) /* sub_48E998 */
{
    FN_ENTER(0x0048e998);
    /* 0048e998: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e99b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0048e99f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048e9a1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0048e9a4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048e9a7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048e9aa: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0048e9ae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048e9b2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048e9b5: mov edx, 0x90162c */ r_edx = 0x90162cu;
    /* 0048e9ba: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48e9bfu); f_0082f9c4();
    /* 0048e9bf: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048e9c7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048e9ca: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48e9cfu); f_0083173c();
    /* 0048e9cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e9d2: ret  */ FN_RET(0x0048e998); r_esp += 4; return;
}

void f_0048e9d4(void) /* sub_48E9D4 */
{
    FN_ENTER(0x0048e9d4);
    /* 0048e9d4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048e9d7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48e9dcu); f_008587a5();
    /* 0048e9dc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048e9df: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048e9e2: fdiv dword ptr [0x9015a8] */ ST(0) = ST(0) / R_F32((u32)(0x9015a8u));
    /* 0048e9e8: fmul dword ptr [0x9015ac] */ ST(0) = ST(0) * R_F32((u32)(0x9015acu));
    /* 0048e9ee: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048e9f2: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048e9f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048e9fc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048ea00: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048ea04: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048ea08: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048ea0c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0048ea10: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x48ea15u); f_0082dcbc();
    /* 0048ea15: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 0048ea19: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0048ea1d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0048ea21: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0048ea25: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048ea27: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0048ea2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048ea2e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048ea32: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048ea37: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048ea3c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048ea40: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048ea44: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048ea48: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048ea4c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0048ea50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ea53: jge 0x48ea57 */ if ((fS==fO)) goto L_0048ea57;
L_0048ea55:; BB(0x0048ea55);
    /* 0048ea55: mov eax, ecx */ r_eax = r_ecx;
L_0048ea57:; BB(0x0048ea57);
    /* 0048ea57: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048ea5a: ret  */ FN_RET(0x0048e9d4); r_esp += 4; return;
}

void f_0048ea5c(void) /* sub_48EA5C */
{
    FN_ENTER(0x0048ea5c);
    /* 0048ea5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ea5d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048ea62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048ea64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ea66: jle 0x48ea8d */ if ((fZ||fS!=fO)) goto L_0048ea8d;
L_0048ea68:; BB(0x0048ea68);
    /* 0048ea68: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0048ea6b: mov ebx, edx */ r_ebx = r_edx;
L_0048ea6d:; BB(0x0048ea6d);
    /* 0048ea6d: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048ea74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ea76: je 0x48ea83 */ if (fZ) goto L_0048ea83;
L_0048ea78:; BB(0x0048ea78);
    /* 0048ea78: mov edx, dword ptr [ecx + 0x3ec] */ r_edx = R32((u32)(r_ecx+0x3ecu));
    /* 0048ea7e: cmp edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ea81: je 0x48ea8f */ if (fZ) goto L_0048ea8f;
L_0048ea83:; BB(0x0048ea83);
    /* 0048ea83: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048ea86: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ea88: jl 0x48ea6d */ if ((fS!=fO)) goto L_0048ea6d;
L_0048ea8a:; BB(0x0048ea8a);
    /* 0048ea8a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0048ea8d:; BB(0x0048ea8d);
    /* 0048ea8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ea8e: ret  */ FN_RET(0x0048ea5c); r_esp += 4; return;
L_0048ea8f:; BB(0x0048ea8f);
    /* 0048ea8f: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x48ea94u); f_0069357c();
    /* 0048ea94: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048ea99: jmp 0x48ea83 */ goto L_0048ea83;
}

void f_0048ea9c(void) /* sub_48EA9C */
{
    FN_ENTER(0x0048ea9c);
    /* 0048ea9c: mov edx, dword ptr [0xa46f9c] */ r_edx = R32((u32)(0xa46f9cu));
    /* 0048eaa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048eaa4: mov eax, 0 */ r_eax = 0x0u;
    /* 0048eaa9: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0048eaac: ret  */ FN_RET(0x0048ea9c); r_esp += 4; return;
}

void f_0048eab0(void) /* sub_48EAB0 */
{
    FN_ENTER(0x0048eab0);
    /* 0048eab0: mov eax, dword ptr [0xa46f9c] */ r_eax = R32((u32)(0xa46f9cu));
    /* 0048eab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eab7: je 0x48eaca */ if (fZ) goto L_0048eaca;
L_0048eab9:; BB(0x0048eab9);
    /* 0048eab9: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 0048eabf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048eac2: jl 0x48eaca */ if ((fS!=fO)) goto L_0048eaca;
L_0048eac4:; BB(0x0048eac4);
    /* 0048eac4: mov eax, 1 */ r_eax = 0x1u;
    /* 0048eac9: ret  */ FN_RET(0x0048eab0); r_esp += 4; return;
L_0048eaca:; BB(0x0048eaca);
    /* 0048eaca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048eacc: ret  */ FN_RET(0x0048eab0); r_esp += 4; return;
}

void f_0048ead0(void) /* sub_48EAD0 */
{
    FN_ENTER(0x0048ead0);
    /* 0048ead0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ead1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ead2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048ead4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0048ead6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048ead8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048eada: jle 0x48eb1f */ if ((fZ||fS!=fO)) goto L_0048eb1f;
L_0048eadc:; BB(0x0048eadc);
    /* 0048eadc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0048eadf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0048eae2: mov esi, ecx */ r_esi = r_ecx;
L_0048eae4:; BB(0x0048eae4);
    /* 0048eae4: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0048eae7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eae9: je 0x48eb03 */ if (fZ) goto L_0048eb03;
L_0048eaeb:; BB(0x0048eaeb);
    /* 0048eaeb: je 0x48eaf7 */ if (fZ) goto L_0048eaf7;
L_0048eaed:; BB(0x0048eaed);
    /* 0048eaed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eaef: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x48eaf4u); f_0044bbac();
    /* 0048eaf4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
L_0048eaf7:; BB(0x0048eaf7);
    /* 0048eaf7: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
    /* 0048eafe: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0048eb00: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
L_0048eb03:; BB(0x0048eb03);
    /* 0048eb03: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048eb06: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048eb08: jl 0x48eae4 */ if ((fS!=fO)) goto L_0048eae4;
L_0048eb0a:; BB(0x0048eb0a);
    /* 0048eb0a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0048eb0d:; BB(0x0048eb0d);
    /* 0048eb0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb0e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x48eb13u); f_00857e98();
    /* 0048eb13: mov dword ptr [ebx + 0x10], 0 */ W32((u32)(r_ebx+0x10u), 0x0u);
    /* 0048eb1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048eb1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048eb1e: ret  */ FN_RET(0x0048ead0); r_esp += 4; return;
L_0048eb1f:; BB(0x0048eb1f);
    /* 0048eb1f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0048eb22: jmp 0x48eb0d */ goto L_0048eb0d;
}

void f_0048eb24(void) /* sub_48EB24 */
{
    FN_ENTER(0x0048eb24);
    /* 0048eb24: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048eb27: mov edx, ecx */ r_edx = r_ecx;
    /* 0048eb29: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048eb2d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0048eb31: add dword ptr [edx + 8], eax */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0048eb34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048eb36: add dword ptr [edx + 0xc], ecx */ { u32 ad = (u32)(r_edx+0xcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0048eb39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048eb3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048eb3d: jle 0x48eb73 */ if ((fZ||fS!=fO)) goto L_0048eb73;
L_0048eb3f:; BB(0x0048eb3f);
    /* 0048eb3f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0048eb43: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048eb45: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0048eb48: mov esi, edx */ r_esi = r_edx;
L_0048eb4a:; BB(0x0048eb4a);
    /* 0048eb4a: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0048eb4d: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0048eb50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048eb52: je 0x48eb65 */ if (fZ) goto L_0048eb65;
L_0048eb54:; BB(0x0048eb54);
    /* 0048eb54: movsx edx, word ptr [esi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 0048eb58: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 0048eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048eb5e: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x48eb63u); f_0052ddac();
    /* 0048eb63: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
L_0048eb65:; BB(0x0048eb65);
    /* 0048eb65: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048eb68: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048eb6a: jl 0x48eb4a */ if ((fS!=fO)) goto L_0048eb4a;
L_0048eb6c:; BB(0x0048eb6c);
    /* 0048eb6c: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0048eb70: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0048eb73:; BB(0x0048eb73);
    /* 0048eb73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048eb76: ret 8 */ FN_RET(0x0048eb24); r_esp += 12; return;
}

void f_0048ebc4(void) /* sub_48EBC4 */
{
    FN_ENTER(0x0048ebc4);
    /* 0048ebc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ebc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebc9: push 0x8cff94 */ { u32 v = 0x8cff94u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048ebd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ebd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048ebdc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ebdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048ebe2: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0048ebe5: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0048ebe8: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0048ebeb: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048ebee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048ebf1: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 0048ebf6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048ebf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ebfb: je 0x48ec08 */ if (fZ) goto L_0048ec08;
L_0048ebfd:; BB(0x0048ebfd);
    /* 0048ebfd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ec00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ec02: je 0x48ec08 */ if (fZ) goto L_0048ec08;
L_0048ec04:; BB(0x0048ec04);
    /* 0048ec04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ec06: jg 0x48ec18 */ if ((!fZ&&fS==fO)) goto L_0048ec18;
L_0048ec08:; BB(0x0048ec08);
    /* 0048ec08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ec0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048ec12: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ec14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ec15: ret 8 */ FN_RET(0x0048ebc4); r_esp += 12; return;
L_0048ec18:; BB(0x0048ec18);
    /* 0048ec18: mov eax, ecx */ r_eax = r_ecx;
    /* 0048ec1a: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0048ec21: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0048ec23: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0048ec26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ec28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ec29: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x48ec2eu); f_008581c5();
    /* 0048ec2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ec2f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ec32: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0048ec35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048ec37: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0048ec3a: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0048ec3d: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0048ec3f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048ec41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048ec43: jle 0x48ec5d */ if ((fZ||fS!=fO)) goto L_0048ec5d;
L_0048ec45:; BB(0x0048ec45);
    /* 0048ec45: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 0048ec4c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ec4f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0048ec51: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ec54: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ec56: jge 0x48ec5d */ if ((fS==fO)) goto L_0048ec5d;
L_0048ec58:; BB(0x0048ec58);
    /* 0048ec58: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0048ec5b: jmp 0x48ec45 */ goto L_0048ec45;
L_0048ec5d:; BB(0x0048ec5d);
    /* 0048ec5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ec5f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ec62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ec64: jle 0x48ed08 */ if ((fZ||fS!=fO)) goto L_0048ed08;
L_0048ec6a:; BB(0x0048ec6a);
    /* 0048ec6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048ec6d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0048ec70: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048ec73: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0048ec76: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ec78: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0048ec7b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048ec7d: push dword ptr [ebx + esi] */ { u32 v = R32((u32)(r_ebx+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0048ec80: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0048ec83: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48ec88u); f_005b8610();
    /* 0048ec88: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048ec8b: mov edx, ebx */ r_edx = r_ebx;
    /* 0048ec8d: push dword ptr [edx + ecx + 4] */ { u32 v = R32((u32)(r_edx+r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048ec91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ec92: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x48ec97u); f_0078e934();
    /* 0048ec97: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048ec9a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0048eca1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eca3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x48eca8u); f_008581c5();
    /* 0048eca8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048ecab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ecae: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0048ecb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ecb3: je 0x48ed21 */ if (fZ) goto L_0048ed21;
L_0048ecb5:; BB(0x0048ecb5);
    /* 0048ecb5: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0048ecbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ecc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048ecc6: mov eax, ebx */ r_eax = r_ebx;
    /* 0048ecc8: push dword ptr [eax + edx + 8] */ { u32 v = R32((u32)(r_eax+r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048eccc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048eccf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ecd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ecd3: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x48ecd8u); f_0052d584();
    /* 0048ecd8: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0048ecdf:; BB(0x0048ecdf);
    /* 0048ecdf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ece2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048ece5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048ece8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0048eceb: mov dword ptr [ecx + ebx*4], edx */ W32((u32)(r_ecx+r_ebx*4), r_edx);
    /* 0048ecee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048ecf5: mov eax, ebx */ r_eax = r_ebx;
    /* 0048ecf7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048ecfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ecfd: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ecff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ed02: jl 0x48ec6a */ if ((fS!=fO)) goto L_0048ec6a;
L_0048ed08:; BB(0x0048ed08);
    /* 0048ed08: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0048ed0b: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048ed0e: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048ed11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ed14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048ed1b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ed1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ed1e: ret 8 */ FN_RET(0x0048ebc4); r_esp += 12; return;
L_0048ed21:; BB(0x0048ed21);
    /* 0048ed21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ed23: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048ed26: jmp 0x48ecdf */ goto L_0048ecdf;
}

void f_0048ed28(void) /* sub_48ED28 */
{
    FN_ENTER(0x0048ed28);
    /* 0048ed28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed29: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ed2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed2d: push 0x8cffbc */ { u32 v = 0x8cffbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048ed38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048ed40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ed43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048ed46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048ed49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048ed4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048ed4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed54: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0048ed5b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x48ed60u); f_008581c5();
    /* 0048ed60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ed61: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048ed64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ed66: je 0x48edde */ if (fZ) goto L_0048edde;
L_0048ed68:; BB(0x0048ed68);
    /* 0048ed68: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0048ed6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ed76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ed79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ed7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed7e: push 0x9a6c3c */ { u32 v = 0x9a6c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed83: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ed85: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x48ed8au); f_005b7a84();
    /* 0048ed8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ed8d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048ed94:; BB(0x0048ed94);
    /* 0048ed94: mov dword ptr [0xa46fa0], eax */ W32((u32)(0xa46fa0u), r_eax);
    /* 0048ed99: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048eda0: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 0048eda5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048eda7: jne 0x48edb7 */ if (!fZ) goto L_0048edb7;
L_0048eda9:; BB(0x0048eda9);
    /* 0048eda9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048edb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0048edb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048edb6: ret  */ FN_RET(0x0048ed28); r_esp += 4; return;
L_0048edb7:; BB(0x0048edb7);
    /* 0048edb7: call 0x48caec */ r_esp -= 4; W32(r_esp, 0x48edbcu); f_0048caec();
    /* 0048edbc: call 0x48ce24 */ r_esp -= 4; W32(r_esp, 0x48edc1u); f_0048ce24();
    /* 0048edc1: call 0x490428 */ r_esp -= 4; W32(r_esp, 0x48edc6u); f_00490428();
    /* 0048edc6: call 0x492520 */ r_esp -= 4; W32(r_esp, 0x48edcbu); f_00492520();
    /* 0048edcb: call 0x67afcc */ r_esp -= 4; W32(r_esp, 0x48edd0u); f_0067afcc();
    /* 0048edd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048edd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048edda: mov esp, ebp */ r_esp = r_ebp;
    /* 0048eddc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048eddd: ret  */ FN_RET(0x0048ed28); r_esp += 4; return;
L_0048edde:; BB(0x0048edde);
    /* 0048edde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ede0: jmp 0x48ed94 */ goto L_0048ed94;
}

void f_0048ede4(void) /* sub_48EDE4 */
{
    FN_ENTER(0x0048ede4);
    /* 0048ede4: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0048edea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048edec: jne 0x48edef */ if (!fZ) goto L_0048edef;
L_0048edee:; BB(0x0048edee);
    /* 0048edee: ret  */ FN_RET(0x0048ede4); r_esp += 4; return;
L_0048edef:; BB(0x0048edef);
    /* 0048edef: call 0x492750 */ r_esp -= 4; W32(r_esp, 0x48edf4u); f_00492750();
    /* 0048edf4: ret  */ FN_RET(0x0048ede4); r_esp += 4; return;
}

void f_0048edf8(void) /* sub_48EDF8 */
{
    FN_ENTER(0x0048edf8);
    /* 0048edf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048edf9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048edfb: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0048ee01: cmp eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ee04: je 0x48ee21 */ if (fZ) goto L_0048ee21;
L_0048ee06:; BB(0x0048ee06);
    /* 0048ee06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ee09: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0048ee0f: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ee14: jle 0x48ee1f */ if ((fZ||fS!=fO)) goto L_0048ee1f;
L_0048ee16:; BB(0x0048ee16);
    /* 0048ee16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ee1a: call 0x48d6e0 */ r_esp -= 4; W32(r_esp, 0x48ee1fu); f_0048d6e0();
L_0048ee1f:; BB(0x0048ee1f);
    /* 0048ee1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ee20: ret  */ FN_RET(0x0048edf8); r_esp += 4; return;
L_0048ee21:; BB(0x0048ee21);
    /* 0048ee21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ee23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee26: push 0x3b4 */ { u32 v = 0x3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee2b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48ee30u); f_00814298();
    /* 0048ee30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ee33: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0048ee39: jmp 0x48ee06 */ goto L_0048ee06;
}

void f_0048ee3c(void) /* sub_48EE3C */
{
    FN_ENTER(0x0048ee3c);
    /* 0048ee3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee3d: mov edi, ecx */ r_edi = r_ecx;
    /* 0048ee3f: mov ecx, edi */ r_ecx = r_edi;
    /* 0048ee41: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48ee46u); f_006dc358();
    /* 0048ee46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ee48: je 0x48ee53 */ if (fZ) goto L_0048ee53;
L_0048ee4a:; BB(0x0048ee4a);
    /* 0048ee4a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0048ee4e: call 0x48d10c */ r_esp -= 4; W32(r_esp, 0x48ee53u); f_0048d10c();
L_0048ee53:; BB(0x0048ee53);
    /* 0048ee53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ee54: ret  */ FN_RET(0x0048ee3c); r_esp += 4; return;
}

void f_0048ee58(void) /* sub_48EE58 */
{
    FN_ENTER(0x0048ee58);
    /* 0048ee58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048ee5b: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48ee60u); f_0048ea5c();
    /* 0048ee60: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0048ee66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ee69: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0048ee6f: cmp eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ee74: jle 0x48ee7f */ if ((fZ||fS!=fO)) goto L_0048ee7f;
L_0048ee76:; BB(0x0048ee76);
    /* 0048ee76: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ee7a: call 0x48d6e0 */ r_esp -= 4; W32(r_esp, 0x48ee7fu); f_0048d6e0();
L_0048ee7f:; BB(0x0048ee7f);
    /* 0048ee7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ee80: ret  */ FN_RET(0x0048ee58); r_esp += 4; return;
}

void f_0048ee84(void)
{
    FN_ENTER(0x0048ee84);
    /* 0048ee84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee85: mov esi, ecx */ r_esi = r_ecx;
    /* 0048ee87: call 0x48e5a0 */ r_esp -= 4; W32(r_esp, 0x48ee8cu); f_0048e5a0();
    /* 0048ee8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ee8e: je 0x48ee9d */ if (fZ) goto L_0048ee9d;
L_0048ee90:; BB(0x0048ee90);
    /* 0048ee90: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ee92: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48ee97u); f_006dc358();
    /* 0048ee97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ee99: jne 0x48ee9d */ if (!fZ) goto L_0048ee9d;
L_0048ee9b:; BB(0x0048ee9b);
    /* 0048ee9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ee9c: ret  */ FN_RET(0x0048ee84); r_esp += 4; return;
L_0048ee9d:; BB(0x0048ee9d);
    /* 0048ee9d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ee9f: mov ecx, esi */ r_ecx = r_esi;
    /* 0048eea1: call 0x48d10c */ r_esp -= 4; W32(r_esp, 0x48eea6u); f_0048d10c();
    /* 0048eea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048eea7: ret  */ FN_RET(0x0048ee84); r_esp += 4; return;
}

void f_0048eea8(void)
{
    FN_ENTER(0x0048eea8);
    /* 0048eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048eea9: mov edi, ecx */ r_edi = r_ecx;
    /* 0048eeab: mov ecx, edi */ r_ecx = r_edi;
    /* 0048eead: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48eeb2u); f_006dc358();
    /* 0048eeb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048eeb4: je 0x48eebf */ if (fZ) goto L_0048eebf;
L_0048eeb6:; BB(0x0048eeb6);
    /* 0048eeb6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048eeb8: mov ecx, edi */ r_ecx = r_edi;
    /* 0048eeba: call 0x48d10c */ r_esp -= 4; W32(r_esp, 0x48eebfu); f_0048d10c();
L_0048eebf:; BB(0x0048eebf);
    /* 0048eebf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048eec0: ret  */ FN_RET(0x0048eea8); r_esp += 4; return;
}

void f_0048eec4(void) /* sub_48EEC4 */
{
    FN_ENTER(0x0048eec4);
    /* 0048eec4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048eec5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048eec8: mov esi, ecx */ r_esi = r_ecx;
    /* 0048eeca: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48eecfu); f_0048ea5c();
    /* 0048eecf: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0048eed5: cmp eax, 0xf7 */ {  u32 a = r_eax; u32 b = 0xf7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048eeda: jle 0x48ef1b */ if ((fZ||fS!=fO)) goto L_0048ef1b;
L_0048eedc:; BB(0x0048eedc);
    /* 0048eedc: fld dword ptr [0x901ebc] */ FPUSH(R_F32((u32)(0x901ebcu)));
    /* 0048eee2: add eax, 0xffffff09 */ {  u32 a = r_eax; u32 b = 0xffffff09u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048eee7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048eeea: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048eeed: fdiv dword ptr [0x901ec0] */ ST(0) = ST(0) / R_F32((u32)(0x901ec0u));
    /* 0048eef3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048eef6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048eef8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048eefa: mov ecx, esi */ r_ecx = r_esi;
    /* 0048eefc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048eefd: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0048ef04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048ef06: jbe 0x48ef0a */ if ((fC||fZ)) goto L_0048ef0a;
L_0048ef08:; BB(0x0048ef08);
    /* 0048ef08: fst st(1) */ ST(1) = ST(0);
L_0048ef0a:; BB(0x0048ef0a);
    /* 0048ef0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048ef0c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048ef10: call 0x48d464 */ r_esp -= 4; W32(r_esp, 0x48ef15u); f_0048d464();
    /* 0048ef15: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
L_0048ef1b:; BB(0x0048ef1b);
    /* 0048ef1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ef1e: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0048ef24: cmp eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ef29: jle 0x48ef34 */ if ((fZ||fS!=fO)) goto L_0048ef34;
L_0048ef2b:; BB(0x0048ef2b);
    /* 0048ef2b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef2d: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ef2f: call 0x48d6e0 */ r_esp -= 4; W32(r_esp, 0x48ef34u); f_0048d6e0();
L_0048ef34:; BB(0x0048ef34);
    /* 0048ef34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048ef37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ef38: ret  */ FN_RET(0x0048eec4); r_esp += 4; return;
}

void f_0048ef3c(void)
{
    FN_ENTER(0x0048ef3c);
    /* 0048ef3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef3d: mov esi, ecx */ r_esi = r_ecx;
    /* 0048ef3f: mov ecx, dword ptr [esi + 0x3e4] */ r_ecx = R32((u32)(r_esi+0x3e4u));
    /* 0048ef45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ef47: je 0x48ef5d */ if (fZ) goto L_0048ef5d;
L_0048ef49:; BB(0x0048ef49);
    /* 0048ef49: call 0x7a6d98 */ r_esp -= 4; W32(r_esp, 0x48ef4eu); f_007a6d98();
    /* 0048ef4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ef50: jne 0x48ef5f */ if (!fZ) goto L_0048ef5f;
L_0048ef52:; BB(0x0048ef52);
    /* 0048ef52: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ef54: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48ef59u); f_006dc358();
    /* 0048ef59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ef5b: jne 0x48ef5f */ if (!fZ) goto L_0048ef5f;
L_0048ef5d:; BB(0x0048ef5d);
    /* 0048ef5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ef5e: ret  */ FN_RET(0x0048ef3c); r_esp += 4; return;
L_0048ef5f:; BB(0x0048ef5f);
    /* 0048ef5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef61: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ef63: call 0x48d10c */ r_esp -= 4; W32(r_esp, 0x48ef68u); f_0048d10c();
    /* 0048ef68: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ef69: ret  */ FN_RET(0x0048ef3c); r_esp += 4; return;
}

void f_0048ef6c(void) /* sub_48EF6C */
{
    FN_ENTER(0x0048ef6c);
    /* 0048ef6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ef6d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ef70: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048ef72: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0048ef78: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ef7b: jle 0x48efb6 */ if ((fZ||fS!=fO)) goto L_0048efb6;
L_0048ef7d:; BB(0x0048ef7d);
    /* 0048ef7d: jle 0x48efca */ if ((fZ||fS!=fO)) goto L_0048efca;
L_0048ef7f:; BB(0x0048ef7f);
    /* 0048ef7f: cmp eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ef84: jge 0x48efca */ if ((fS==fO)) goto L_0048efca;
L_0048ef86:; BB(0x0048ef86);
    /* 0048ef86: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048ef88: add eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ef8d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048ef90: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048ef93: fdiv dword ptr [0x901eb8] */ ST(0) = ST(0) / R_F32((u32)(0x901eb8u));
    /* 0048ef99: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ef9c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048efa0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0048efa7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048efa9: call 0x48d464 */ r_esp -= 4; W32(r_esp, 0x48efaeu); f_0048d464();
    /* 0048efae: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0048efb4: jmp 0x48efca */ goto L_0048efca;
L_0048efb6:; BB(0x0048efb6);
    /* 0048efb6: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048efbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048efbd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048efbf: call 0x48d464 */ r_esp -= 4; W32(r_esp, 0x48efc4u); f_0048d464();
    /* 0048efc4: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
L_0048efca:; BB(0x0048efca);
    /* 0048efca: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048efcd: je 0x48efdd */ if (fZ) goto L_0048efdd;
L_0048efcf:; BB(0x0048efcf);
    /* 0048efcf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048efd2: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0048efd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048efdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048efdc: ret  */ FN_RET(0x0048ef6c); r_esp += 4; return;
L_0048efdd:; BB(0x0048efdd);
    /* 0048efdd: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x48efe2u); f_0044bf4c();
    /* 0048efe2: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0048efe8: jmp 0x48efcf */ goto L_0048efcf;
}

void f_0048efec(void)
{
    FN_ENTER(0x0048efec);
    /* 0048efec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048efed: mov edi, ecx */ r_edi = r_ecx;
    /* 0048efef: mov ecx, edi */ r_ecx = r_edi;
    /* 0048eff1: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48eff6u); f_006dc358();
    /* 0048eff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048eff8: je 0x48f003 */ if (fZ) goto L_0048f003;
L_0048effa:; BB(0x0048effa);
    /* 0048effa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048effc: mov ecx, edi */ r_ecx = r_edi;
    /* 0048effe: call 0x48d10c */ r_esp -= 4; W32(r_esp, 0x48f003u); f_0048d10c();
L_0048f003:; BB(0x0048f003);
    /* 0048f003: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048f004: ret  */ FN_RET(0x0048efec); r_esp += 4; return;
}

