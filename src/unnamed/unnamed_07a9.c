#include "protos.h"

void f_007a900c(void) /* sub_7A900C */
{
    FN_ENTER(0x007a900c);
    /* 007a900c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a9010: sub edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a9014: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007a9017: ret  */ FN_RET(0x007a900c); r_esp += 4; return;
}

void f_007a9018(void) /* sub_7A9018 */
{
    FN_ENTER(0x007a9018);
    /* 007a9018: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a901c: sub ecx, dword ptr [esp + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007a9020: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007a9023: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007a9024: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a9026: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a9028: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a902b: ret  */ FN_RET(0x007a9018); r_esp += 4; return;
}

void f_007a902c(void) /* sub_7A902C */
{
    FN_ENTER(0x007a902c);
    /* 007a902c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a902e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9030: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a9035u); f_0082acfc();
    /* 007a9035: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007a9037: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9039: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a903eu); f_0082acfc();
    /* 007a903e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9041: ret  */ FN_RET(0x007a902c); r_esp += 4; return;
}

void f_007a9044(void) /* sub_7A9044 */
{
    FN_ENTER(0x007a9044);
    /* 007a9044: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9048: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a904du); f_0082acfc();
    /* 007a904d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a904f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9051: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a9056u); f_0082acfc();
    /* 007a9056: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9059: ret  */ FN_RET(0x007a9044); r_esp += 4; return;
}

void f_007a905c(void) /* sub_7A905C */
{
    FN_ENTER(0x007a905c);
    /* 007a905c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a905e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9060: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a9065u); f_0082acfc();
    /* 007a9065: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9067: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9069: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a906eu); f_0082acfc();
    /* 007a906e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9071: ret  */ FN_RET(0x007a905c); r_esp += 4; return;
}

void f_007a9074(void) /* sub_7A9074 */
{
    FN_ENTER(0x007a9074);
    /* 007a9074: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9078: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a907du); f_0082acfc();
    /* 007a907d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a907f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9081: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x7a9086u); f_0082acfc();
    /* 007a9086: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9089: ret  */ FN_RET(0x007a9074); r_esp += 4; return;
}

void f_007a908c(void) /* sub_7A908C */
{
    FN_ENTER(0x007a908c);
    /* 007a908c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a908d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a9091: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a9094: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007a9097: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a9098: ret  */ FN_RET(0x007a908c); r_esp += 4; return;
}

void f_007a909c(void) /* sub_7A909C */
{
    FN_ENTER(0x007a909c);
    /* 007a909c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a909d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a90a1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a90a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a90a5: ret  */ FN_RET(0x007a909c); r_esp += 4; return;
}

void f_007a90a8(void) /* sub_7A90A8 */
{
    FN_ENTER(0x007a90a8);
    /* 007a90a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a90ab: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007a90af: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a90b3: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007a90b5: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 007a90b7: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007a90ba: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 007a90bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a90bf: fmul qword ptr [0x97d8b8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8b8u));
    /* 007a90c5: fdiv qword ptr [0x97d8b0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8b0u));
    /* 007a90cb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a90ce: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a90d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a90d7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a90db: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a90df: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007a90e3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a90e6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a90ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a90ed: ret  */ FN_RET(0x007a90a8); r_esp += 4; return;
}

void f_007a90f0(void) /* sub_7A90F0 */
{
    FN_ENTER(0x007a90f0);
    /* 007a90f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a90f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a90f2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a90f6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 007a90fa: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007a90fe: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a9103u); f_0082dcbc();
    /* 007a9103: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 007a9107: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 007a9109: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a910d: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 007a9110: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 007a9113: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007a9116: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a911bu); f_0082ddd8();
    /* 007a911b: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 007a911f: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 007a9122: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 007a9125: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a9126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a9127: ret  */ FN_RET(0x007a90f0); r_esp += 4; return;
}

void f_007a9128(void) /* sub_7A9128 */
{
    FN_ENTER(0x007a9128);
    /* 007a9128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9129: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a912d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007a9131: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a9136u); f_0082dcbc();
    /* 007a9136: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 007a913a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a913e: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 007a9141: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 007a9148: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a914du); f_0082ddd8();
    /* 007a914d: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 007a9151: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 007a9154: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a9155: ret  */ FN_RET(0x007a9128); r_esp += 4; return;
}

void f_007a9158(void) /* sub_7A9158 */
{
    FN_ENTER(0x007a9158);
    /* 007a9158: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a915c: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x7a9161u); f_0082def4();
    /* 007a9161: fcomp dword ptr [0x97d930] */ fx_compare(ST(0), R_F32((u32)(0x97d930u))); FPOP();
    /* 007a9167: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a9169: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a916a: jae 0x7a916f */ if (!fC) goto L_007a916f;
L_007a916c:; BB(0x007a916c);
    /* 007a916c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a916e: ret  */ FN_RET(0x007a9158); r_esp += 4; return;
L_007a916f:; BB(0x007a916f);
    /* 007a916f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a9173: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7a9178u); f_0082df08();
    /* 007a9178: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a917a: mov eax, 1 */ r_eax = 0x1u;
    /* 007a917f: ret  */ FN_RET(0x007a9158); r_esp += 4; return;
}

void f_007a9180(void) /* sub_7A9180 */
{
    FN_ENTER(0x007a9180);
    /* 007a9180: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a9184: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a9188: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007a918a: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 007a918c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a918e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 007a9191: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 007a9194: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a9196: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a9198: ret  */ FN_RET(0x007a9180); r_esp += 4; return;
}

void f_007a919c(void) /* sub_7A919C */
{
    FN_ENTER(0x007a919c);
    /* 007a919c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a919d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a91a0: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 007a91a4: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 007a91a8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007a91ac: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007a91ad: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x007a91ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007a91ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007a91af: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a91b1: jl 0x7a92f3 */ if ((fS!=fO)) goto L_007a92f3;
L_007a91b7:; BB(0x007a91b7);
    /* 007a91b7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007a91bb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a91bd: jg 0x7a92f3 */ if ((!fZ&&fS==fO)) goto L_007a92f3;
L_007a91c3:; BB(0x007a91c3);
    /* 007a91c3: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007a91c7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a91c9: jge 0x7a91e5 */ if ((fS==fO)) goto L_007a91e5;
L_007a91cb:; BB(0x007a91cb);
    /* 007a91cb: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a91cd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a91d0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007a91d3: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007a91d7: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a91d9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007a91dd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a91e1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007a91e3: jmp 0x7a9209 */ goto L_007a9209;
L_007a91e5:; BB(0x007a91e5);
    /* 007a91e5: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007a91e9: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a91ed: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a91ef: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a91f1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007a91f5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a91f9: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007a91fd: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007a91ff: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007a9203: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a9207: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_007a9209:; BB(0x007a9209);
    /* 007a9209: movzx eax, byte ptr [esp + 0x30] */ r_eax = (u32)R8((u32)(r_esp+0x30u));
    /* 007a920e: movzx edi, byte ptr [esp + 0x30] */ r_edi = (u32)R8((u32)(r_esp+0x30u));
    /* 007a9213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a9217: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a921b: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007a921d: add edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a9223: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007a9227: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a922b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007a922d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a922f: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007a9233: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007a9238: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a923d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007a9241: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007a9245: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 007a9249: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007a924d: movzx eax, byte ptr [esp + 0x34] */ r_eax = (u32)R8((u32)(r_esp+0x34u));
    /* 007a9252: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007a9256: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a925a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a925e: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007a9261: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a9267: movzx eax, byte ptr [esp + 0x34] */ r_eax = (u32)R8((u32)(r_esp+0x34u));
    /* 007a926c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a926e: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a9273: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a9277: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a927b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007a927d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a927f: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007a9283: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007a9288: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a928d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007a9291: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007a9295: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 007a9299: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007a929d: movzx eax, byte ptr [esp + 0x38] */ r_eax = (u32)R8((u32)(r_esp+0x38u));
    /* 007a92a2: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 007a92a7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a92ab: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a92af: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a92b1: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a92b6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a92ba: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007a92be: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007a92c1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007a92c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a92c5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007a92c9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007a92ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a92d3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007a92d7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007a92db: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 007a92df: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007a92e3: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a92e5: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 007a92ea: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a92ec: mov eax, ecx */ r_eax = r_ecx;
    /* 007a92ee: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a92f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a92f2: ret  */ FN_RET(0x007a919c); r_esp += 4; return;
L_007a92f3:; BB(0x007a92f3);
    /* 007a92f3: movzx eax, byte ptr [esp + 0x30] */ r_eax = (u32)R8((u32)(r_esp+0x30u));
    /* 007a92f8: movzx edx, byte ptr [esp + 0x34] */ r_edx = (u32)R8((u32)(r_esp+0x34u));
    /* 007a92fd: movzx ecx, byte ptr [esp + 0x38] */ r_ecx = (u32)R8((u32)(r_esp+0x38u));
    /* 007a9302: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007a9305: or eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a930a: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007a930d: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a930f: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a9311: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9314: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a9315: ret  */ FN_RET(0x007a919c); r_esp += 4; return;
}

void f_007a9318(void) /* sub_7A9318 */
{
    FN_ENTER(0x007a9318);
    /* 007a9318: mov eax, dword ptr [0xaab45c] */ r_eax = R32((u32)(0xaab45cu));
    /* 007a931d: mov edx, dword ptr [0xaab460] */ r_edx = R32((u32)(0xaab460u));
    /* 007a9323: mov ecx, dword ptr [0xaab464] */ r_ecx = R32((u32)(0xaab464u));
    /* 007a9329: mov dword ptr [0xaab47c], eax */ W32((u32)(0xaab47cu), r_eax);
    /* 007a932e: mov eax, dword ptr [0xaab468] */ r_eax = R32((u32)(0xaab468u));
    /* 007a9333: mov dword ptr [0xaab480], edx */ W32((u32)(0xaab480u), r_edx);
    /* 007a9339: mov dword ptr [0xaab484], ecx */ W32((u32)(0xaab484u), r_ecx);
    /* 007a933f: mov dword ptr [0xaab488], eax */ W32((u32)(0xaab488u), r_eax);
    /* 007a9344: mov ecx, 0xaab47c */ r_ecx = 0xaab47cu;
    /* 007a9349: call 0x836500 */ r_esp -= 4; W32(r_esp, 0x7a934eu); f_00836500();
    /* 007a934e: ret  */ FN_RET(0x007a9318); r_esp += 4; return;
}

void f_007a9350(void) /* sub_7A9350 */
{
    FN_ENTER(0x007a9350);
    /* 007a9350: mov dword ptr [0xaab47c], 2 */ W32((u32)(0xaab47cu), 0x2u);
    /* 007a935a: mov eax, 1 */ r_eax = 0x1u;
    /* 007a935f: mov ecx, 0xaab47c */ r_ecx = 0xaab47cu;
    /* 007a9364: mov dword ptr [0xaab484], 0xbf */ W32((u32)(0xaab484u), 0xbfu);
    /* 007a936e: mov dword ptr [0xaab480], eax */ W32((u32)(0xaab480u), r_eax);
    /* 007a9373: mov dword ptr [0xaab488], eax */ W32((u32)(0xaab488u), r_eax);
    /* 007a9378: call 0x836500 */ r_esp -= 4; W32(r_esp, 0x7a937du); f_00836500();
    /* 007a937d: ret  */ FN_RET(0x007a9350); r_esp += 4; return;
}

void f_007a9380(void) /* sub_7A9380 */
{
    FN_ENTER(0x007a9380);
    /* 007a9380: mov edx, 2 */ r_edx = 0x2u;
    /* 007a9385: mov dword ptr [0xaab47c], edx */ W32((u32)(0xaab47cu), r_edx);
    /* 007a938b: mov dword ptr [0xaab488], edx */ W32((u32)(0xaab488u), r_edx);
    /* 007a9391: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a9393: mov ecx, 0xaab47c */ r_ecx = 0xaab47cu;
    /* 007a9398: mov dword ptr [0xaab480], eax */ W32((u32)(0xaab480u), r_eax);
    /* 007a939d: mov dword ptr [0xaab484], eax */ W32((u32)(0xaab484u), r_eax);
    /* 007a93a2: call 0x836500 */ r_esp -= 4; W32(r_esp, 0x7a93a7u); f_00836500();
    /* 007a93a7: ret  */ FN_RET(0x007a9380); r_esp += 4; return;
}

void f_007a93a8(void) /* sub_7A93A8 */
{
    FN_ENTER(0x007a93a8);
    /* 007a93a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a93ac: mov dword ptr [0xaab480], 1 */ W32((u32)(0xaab480u), 0x1u);
    /* 007a93b6: mov edx, 2 */ r_edx = 0x2u;
    /* 007a93bb: mov dword ptr [0xaab47c], edx */ W32((u32)(0xaab47cu), r_edx);
    /* 007a93c1: mov dword ptr [0xaab484], eax */ W32((u32)(0xaab484u), r_eax);
    /* 007a93c6: mov dword ptr [0xaab488], edx */ W32((u32)(0xaab488u), r_edx);
    /* 007a93cc: mov ecx, 0xaab47c */ r_ecx = 0xaab47cu;
    /* 007a93d1: call 0x836500 */ r_esp -= 4; W32(r_esp, 0x7a93d6u); f_00836500();
    /* 007a93d6: ret  */ FN_RET(0x007a93a8); r_esp += 4; return;
}

void f_007a93d8(void) /* sub_7A93D8 */
{
    FN_ENTER(0x007a93d8);
    /* 007a93d8: mov dword ptr [0xaab47c], 7 */ W32((u32)(0xaab47cu), 0x7u);
    /* 007a93e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a93e4: mov ecx, 0xaab47c */ r_ecx = 0xaab47cu;
    /* 007a93e9: mov dword ptr [0xaab488], 2 */ W32((u32)(0xaab488u), 0x2u);
    /* 007a93f3: mov dword ptr [0xaab480], eax */ W32((u32)(0xaab480u), r_eax);
    /* 007a93f8: mov dword ptr [0xaab484], eax */ W32((u32)(0xaab484u), r_eax);
    /* 007a93fd: call 0x836500 */ r_esp -= 4; W32(r_esp, 0x7a9402u); f_00836500();
    /* 007a9402: ret  */ FN_RET(0x007a93d8); r_esp += 4; return;
}

void f_007a9404(void) /* sub_7A9404 */
{
    FN_ENTER(0x007a9404);
    /* 007a9404: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 007a9409: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a940e: mov dword ptr [0xaab484], edx */ W32((u32)(0xaab484u), r_edx);
    /* 007a9414: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a9417: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a941c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a941d: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x7a9422u); f_00830b08();
    /* 007a9422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a9423: ret  */ FN_RET(0x007a9404); r_esp += 4; return;
}

void f_007a9424(void) /* sub_7A9424 */
{
    FN_ENTER(0x007a9424);
    /* 007a9424: push dword ptr [0xaab464] */ { u32 v = R32((u32)(0xaab464u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a942a: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a942f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a9432: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a9437: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x7a943cu); f_00830b08();
    /* 007a943c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a943d: ret  */ FN_RET(0x007a9424); r_esp += 4; return;
}

void f_007a9440(void) /* sub_7A9440 */
{
    FN_ENTER(0x007a9440);
    /* 007a9440: mov eax, dword ptr [0xaab47c] */ r_eax = R32((u32)(0xaab47cu));
    /* 007a9445: mov edx, dword ptr [0xaab480] */ r_edx = R32((u32)(0xaab480u));
    /* 007a944b: mov ecx, dword ptr [0xaab484] */ r_ecx = R32((u32)(0xaab484u));
    /* 007a9451: mov dword ptr [0xaab45c], eax */ W32((u32)(0xaab45cu), r_eax);
    /* 007a9456: mov eax, dword ptr [0xaab488] */ r_eax = R32((u32)(0xaab488u));
    /* 007a945b: mov dword ptr [0xaab460], edx */ W32((u32)(0xaab460u), r_edx);
    /* 007a9461: mov dword ptr [0xaab464], ecx */ W32((u32)(0xaab464u), r_ecx);
    /* 007a9467: mov dword ptr [0xaab468], eax */ W32((u32)(0xaab468u), r_eax);
    /* 007a946c: ret  */ FN_RET(0x007a9440); r_esp += 4; return;
}

void f_007a9470(void) /* sub_7A9470 */
{
    FN_ENTER(0x007a9470);
    /* 007a9470: mov eax, dword ptr [0xaab45c] */ r_eax = R32((u32)(0xaab45cu));
    /* 007a9475: mov edx, dword ptr [0xaab460] */ r_edx = R32((u32)(0xaab460u));
    /* 007a947b: mov ecx, dword ptr [0xaab464] */ r_ecx = R32((u32)(0xaab464u));
    /* 007a9481: mov dword ptr [0xaab47c], eax */ W32((u32)(0xaab47cu), r_eax);
    /* 007a9486: mov eax, dword ptr [0xaab468] */ r_eax = R32((u32)(0xaab468u));
    /* 007a948b: mov dword ptr [0xaab480], edx */ W32((u32)(0xaab480u), r_edx);
    /* 007a9491: mov dword ptr [0xaab484], ecx */ W32((u32)(0xaab484u), r_ecx);
    /* 007a9497: mov dword ptr [0xaab488], eax */ W32((u32)(0xaab488u), r_eax);
    /* 007a949c: ret  */ FN_RET(0x007a9470); r_esp += 4; return;
}

void f_007a94a0(void) /* sub_7A94A0 */
{
    FN_ENTER(0x007a94a0);
    /* 007a94a0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a94a4: mov dword ptr [0xaab488], ecx */ W32((u32)(0xaab488u), r_ecx);
    /* 007a94aa: call 0x83dc1c */ r_esp -= 4; W32(r_esp, 0x7a94afu); f_0083dc1c();
    /* 007a94af: ret  */ FN_RET(0x007a94a0); r_esp += 4; return;
}

void f_007a94b0(void) /* sub_7A94B0 */
{
    FN_ENTER(0x007a94b0);
    /* 007a94b0: mov ecx, dword ptr [0xaab468] */ r_ecx = R32((u32)(0xaab468u));
    /* 007a94b6: call 0x83dc1c */ r_esp -= 4; W32(r_esp, 0x7a94bbu); f_0083dc1c();
    /* 007a94bb: ret  */ FN_RET(0x007a94b0); r_esp += 4; return;
}

void f_007a94bc(void) /* sub_7A94BC */
{
    FN_ENTER(0x007a94bc);
    /* 007a94bc: mov edx, 1 */ r_edx = 0x1u;
    /* 007a94c1: mov dword ptr [0xaab47c], edx */ W32((u32)(0xaab47cu), r_edx);
    /* 007a94c7: mov dword ptr [0xaab480], edx */ W32((u32)(0xaab480u), r_edx);
    /* 007a94cd: mov eax, 0xbf */ r_eax = 0xbfu;
    /* 007a94d2: mov dword ptr [0xaab484], eax */ W32((u32)(0xaab484u), r_eax);
    /* 007a94d7: mov dword ptr [0xaab488], edx */ W32((u32)(0xaab488u), r_edx);
    /* 007a94dd: mov dword ptr [0xaab46c], edx */ W32((u32)(0xaab46cu), r_edx);
    /* 007a94e3: mov dword ptr [0xaab470], edx */ W32((u32)(0xaab470u), r_edx);
    /* 007a94e9: mov dword ptr [0xaab474], eax */ W32((u32)(0xaab474u), r_eax);
    /* 007a94ee: mov dword ptr [0xaab478], edx */ W32((u32)(0xaab478u), r_edx);
    /* 007a94f4: mov dword ptr [0xaab45c], edx */ W32((u32)(0xaab45cu), r_edx);
    /* 007a94fa: mov dword ptr [0xaab460], edx */ W32((u32)(0xaab460u), r_edx);
    /* 007a9500: mov dword ptr [0xaab464], eax */ W32((u32)(0xaab464u), r_eax);
    /* 007a9505: mov dword ptr [0xaab468], edx */ W32((u32)(0xaab468u), r_edx);
    /* 007a950b: ret  */ FN_RET(0x007a94bc); r_esp += 4; return;
}

void f_007a950c(void) /* sub_7A950C */
{
    FN_ENTER(0x007a950c);
    /* 007a950c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a950f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007a9517: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a951a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 007a9522: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 007a952a: mov dword ptr [esp], 0x3f266666 */ W32((u32)(r_esp), 0x3f266666u);
    /* 007a9531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a9532: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x7a9537u); f_0082d710();
    /* 007a9537: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a953c: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a9541: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a9546: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9549: ret  */ FN_RET(0x007a950c); r_esp += 4; return;
}

void f_007a954c(void) /* sub_7A954C */
{
    FN_ENTER(0x007a954c);
    /* 007a954c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a954e: call 0x830b24 */ r_esp -= 4; W32(r_esp, 0x7a9553u); f_00830b24();
    /* 007a9553: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a9554: ret  */ FN_RET(0x007a954c); r_esp += 4; return;
}

void f_007a9558(void) /* sub_7A9558 */
{
    FN_ENTER(0x007a9558);
    /* 007a9558: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a955a: call 0x830b24 */ r_esp -= 4; W32(r_esp, 0x7a955fu); f_00830b24();
    /* 007a955f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a9560: ret  */ FN_RET(0x007a9558); r_esp += 4; return;
}

void f_007a9564(void) /* sub_7A9564 */
{
    FN_ENTER(0x007a9564);
    /* 007a9564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9566: call 0x830b24 */ r_esp -= 4; W32(r_esp, 0x7a956bu); f_00830b24();
    /* 007a956b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a956c: ret  */ FN_RET(0x007a9564); r_esp += 4; return;
}

void f_007a9570(void) /* sub_7A9570 */
{
    FN_ENTER(0x007a9570);
    /* 007a9570: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a9573: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 007a9578: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a957b: jge 0x7a95e6 */ if ((fS==fO)) goto L_007a95e6;
L_007a957d:; BB(0x007a957d);
    /* 007a957d: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 007a9582: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a9585: jge 0x7a95e6 */ if ((fS==fO)) goto L_007a95e6;
L_007a9587:; BB(0x007a9587);
    /* 007a9587: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 007a958c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a958f: jge 0x7a95e6 */ if ((fS==fO)) goto L_007a95e6;
L_007a9591:; BB(0x007a9591);
    /* 007a9591: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 007a9596: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007a959d: mov eax, 1 */ r_eax = 0x1u;
    /* 007a95a2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007a95a6: mov dword ptr [esp + 8], 2 */ W32((u32)(r_esp+0x8u), 0x2u);
    /* 007a95ae: mov dword ptr [esp + 0xc], 3 */ W32((u32)(r_esp+0xcu), 0x3u);
    /* 007a95b6: push dword ptr [esp + ecx*4] */ { u32 v = R32((u32)(r_esp+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 007a95b9: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 007a95be: push dword ptr [esp + ecx*4 + 4] */ { u32 v = R32((u32)(r_esp+r_ecx*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a95c2: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 007a95c7: push dword ptr [esp + ecx*4 + 8] */ { u32 v = R32((u32)(r_esp+r_ecx*4+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a95cb: push dword ptr [esp + edx*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_edx*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a95cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95d0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a95d5u); f_0061cdb0();
    /* 007a95d5: mov eax, 1 */ r_eax = 0x1u;
    /* 007a95da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a95de: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a95e3u); f_0061cdb0();
    /* 007a95e3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007a95e6:; BB(0x007a95e6);
    /* 007a95e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a95e9: ret  */ FN_RET(0x007a9570); r_esp += 4; return;
}

void f_007a95ec(void) /* sub_7A95EC */
{
    FN_ENTER(0x007a95ec);
    /* 007a95ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a95ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a95f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a95f5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a95fau); f_0061cdb0();
    /* 007a95fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a95fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a95ff: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a9604u); f_0061cdb0();
    /* 007a9604: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9607: ret  */ FN_RET(0x007a95ec); r_esp += 4; return;
}

void f_007a9608(void) /* sub_7A9608 */
{
    FN_ENTER(0x007a9608);
    /* 007a9608: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 007a960d: imul eax, dword ptr [esp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007a9612: add eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9616: ret  */ FN_RET(0x007a9608); r_esp += 4; return;
}

void f_007a9618(void) /* sub_7A9618 */
{
    FN_ENTER(0x007a9618);
    /* 007a9618: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a961b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a961f: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007a9621: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007a9624: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007a9626: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007a9629: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007a962c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007a962e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 007a9631: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 007a9634: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007a9636: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 007a9639: fsubrp st(6) */ ST(6) = ST(0) - ST(6); FPOP();
    /* 007a963b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007a963d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a963f: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007a9641: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 007a9644: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 007a9646: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a9648: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 007a964a: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 007a964d: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 007a964f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 007a9651: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 007a9653: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 007a9655: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007a9657: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 007a9659: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 007a965b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007a965d: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 007a965f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a9661: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 007a9663: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007a9665: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007a9669: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007a966b: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 007a966d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a966f: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 007a9673: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a9675: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 007a9677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a9679: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 007a967d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a967f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a9681: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007a9683: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a9685: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a9687: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a9689: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a968b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007a968d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a968f: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 007a9693: call 0x7a96dc */ r_esp -= 4; W32(r_esp, 0x7a9698u); f_007a96dc();
    /* 007a9698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a969a: je 0x7a96a2 */ if (fZ) goto L_007a96a2;
L_007a969c:; BB(0x007a969c);
    /* 007a969c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a969e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a96a1: ret  */ FN_RET(0x007a9618); r_esp += 4; return;
L_007a96a2:; BB(0x007a96a2);
    /* 007a96a2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007a96a6: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 007a96a8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007a96ac: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007a96ae: mov eax, 1 */ r_eax = 0x1u;
    /* 007a96b3: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007a96b7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 007a96bb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007a96bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a96c1: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 007a96c3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a96c5: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007a96c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a96c9: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 007a96cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a96cd: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 007a96d0: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 007a96d3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a96d6: ret  */ FN_RET(0x007a9618); r_esp += 4; return;
}

void f_007a96dc(void) /* sub_7A96DC */
{
    FN_ENTER(0x007a96dc);
    /* 007a96dc: fcom dword ptr [0x97d908] */ fx_compare(ST(0), R_F32((u32)(0x97d908u))); 
    /* 007a96e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a96e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a96e5: jbe 0x7a96fa */ if ((fC||fZ)) goto L_007a96fa;
L_007a96e7:; BB(0x007a96e7);
    /* 007a96e7: fcom dword ptr [0x97d904] */ fx_compare(ST(0), R_F32((u32)(0x97d904u))); 
    /* 007a96ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a96ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a96f0: jae 0x7a96fa */ if (!fC) goto L_007a96fa;
L_007a96f2:; BB(0x007a96f2);
    /* 007a96f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a96f4: mov eax, 1 */ r_eax = 0x1u;
    /* 007a96f9: ret  */ FN_RET(0x007a96dc); r_esp += 4; return;
L_007a96fa:; BB(0x007a96fa);
    /* 007a96fa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a96fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a96fe: ret  */ FN_RET(0x007a96dc); r_esp += 4; return;
}

void f_007a970c(void) /* sub_7A970C */
{
    FN_ENTER(0x007a970c);
    /* 007a970c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a9711: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 007a9717: mov dword ptr [0xaab458], eax */ W32((u32)(0xaab458u), r_eax);
    /* 007a971c: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 007a9721: mov dword ptr [0xaab440], edx */ W32((u32)(0xaab440u), r_edx);
    /* 007a9727: mov dword ptr [0xaab444], eax */ W32((u32)(0xaab444u), r_eax);
    /* 007a972c: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 007a9731: mov dword ptr [0xaab448], eax */ W32((u32)(0xaab448u), r_eax);
    /* 007a9736: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 007a973b: mov dword ptr [0xaab44c], eax */ W32((u32)(0xaab44cu), r_eax);
    /* 007a9740: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 007a9745: mov dword ptr [0xaab454], eax */ W32((u32)(0xaab454u), r_eax);
    /* 007a974a: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 007a974f: mov dword ptr [0xaab450], eax */ W32((u32)(0xaab450u), r_eax);
    /* 007a9754: ret  */ FN_RET(0x007a970c); r_esp += 4; return;
}

void f_007a9758(void) /* sub_7A9758 */
{
    FN_ENTER(0x007a9758);
    /* 007a9758: mov eax, dword ptr [0xaab454] */ r_eax = R32((u32)(0xaab454u));
    /* 007a975d: mov edx, dword ptr [0xaab450] */ r_edx = R32((u32)(0xaab450u));
    /* 007a9763: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 007a9768: mov eax, dword ptr [0xaab440] */ r_eax = R32((u32)(0xaab440u));
    /* 007a976d: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 007a9773: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 007a9778: mov eax, dword ptr [0xaab444] */ r_eax = R32((u32)(0xaab444u));
    /* 007a977d: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 007a9782: mov eax, dword ptr [0xaab448] */ r_eax = R32((u32)(0xaab448u));
    /* 007a9787: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 007a978c: mov eax, dword ptr [0xaab44c] */ r_eax = R32((u32)(0xaab44cu));
    /* 007a9791: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 007a9796: mov eax, dword ptr [0xaab458] */ r_eax = R32((u32)(0xaab458u));
    /* 007a979b: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a97a0: ret  */ FN_RET(0x007a9758); r_esp += 4; return;
}

void f_007a97a4(void) /* sub_7A97A4 */
{
    FN_ENTER(0x007a97a4);
    /* 007a97a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a97a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a97a7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a97ac: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007a97b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a97b3: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a97b8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a97bd: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x7a97c2u); f_0082d6fc();
    /* 007a97c2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a97c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a97c6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x7a97cbu); f_0082d710();
    /* 007a97cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a97ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a97cf: ret  */ FN_RET(0x007a97a4); r_esp += 4; return;
}

void f_007a97b5(void)
{
    FN_ENTER(0x007a97b5);
    /* 007a97b5: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 007a97b7: add byte ptr [ebx + 0xaf034c], ah */ { u32 ad = (u32)(r_ebx+0xaf034cu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a97bd: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x7a97c2u); f_0082d6fc();
    /* 007a97c2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a97c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a97c6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x7a97cbu); f_0082d710();
    /* 007a97cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a97ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a97cf: ret  */ FN_RET(0x007a97b5); r_esp += 4; return;
}

void f_007a97d0(void) /* sub_7A97D0 */
{
    FN_ENTER(0x007a97d0);
    /* 007a97d0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a97d5: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007a97da: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a97df: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a97e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a97e6: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x7a97ebu); f_0082d6fc();
    /* 007a97eb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a97ef: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x7a97f4u); f_0082d710();
    /* 007a97f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a97f7: ret 4 */ FN_RET(0x007a97d0); r_esp += 8; return;
}

void f_007a97fc(void) /* sub_7A97FC */
{
    FN_ENTER(0x007a97fc);
    /* 007a97fc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a97ff: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007a9803: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a9807: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a980b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a980e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007a9812: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 007a9816: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007a981a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007a981e: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 007a9823: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a9828: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 007a982d: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9832: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a9834: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x7a9839u); f_0082d6fc();
    /* 007a9839: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007a983d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a983e: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x7a9843u); f_0082d710();
    /* 007a9843: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9846: ret 0x10 */ FN_RET(0x007a97fc); r_esp += 20; return;
}

void f_007a984c(void) /* sub_7A984C */
{
    FN_ENTER(0x007a984c);
    /* 007a984c: mov dword ptr [0xaab434], 0x3f800000 */ W32((u32)(0xaab434u), 0x3f800000u);
    /* 007a9856: mov dword ptr [0xaab438], 0x41000000 */ W32((u32)(0xaab438u), 0x41000000u);
    /* 007a9860: mov dword ptr [0xaab43c], 0x3fc00000 */ W32((u32)(0xaab43cu), 0x3fc00000u);
    /* 007a986a: ret  */ FN_RET(0x007a984c); r_esp += 4; return;
}

void f_007a986c(void)
{
    FN_ENTER(0x007a986c);
    /* 007a986c: mov edx, 1 */ r_edx = 0x1u;
    /* 007a9871: mov dword ptr [0xaab47c], edx */ W32((u32)(0xaab47cu), r_edx);
    /* 007a9877: mov dword ptr [0xaab480], edx */ W32((u32)(0xaab480u), r_edx);
    /* 007a987d: mov eax, 0xbf */ r_eax = 0xbfu;
    /* 007a9882: mov ecx, 0x7a9318 */ r_ecx = 0x7a9318u;
    /* 007a9887: mov dword ptr [0xaab484], eax */ W32((u32)(0xaab484u), r_eax);
    /* 007a988c: mov dword ptr [0xaab488], edx */ W32((u32)(0xaab488u), r_edx);
    /* 007a9892: mov dword ptr [0xaab46c], edx */ W32((u32)(0xaab46cu), r_edx);
    /* 007a9898: mov dword ptr [0xaab470], edx */ W32((u32)(0xaab470u), r_edx);
    /* 007a989e: mov dword ptr [0xaab474], eax */ W32((u32)(0xaab474u), r_eax);
    /* 007a98a3: mov dword ptr [0xaab478], edx */ W32((u32)(0xaab478u), r_edx);
    /* 007a98a9: mov dword ptr [0xaab45c], edx */ W32((u32)(0xaab45cu), r_edx);
    /* 007a98af: mov dword ptr [0xaab460], edx */ W32((u32)(0xaab460u), r_edx);
    /* 007a98b5: mov dword ptr [0xaab464], eax */ W32((u32)(0xaab464u), r_eax);
    /* 007a98ba: mov dword ptr [0xaab468], edx */ W32((u32)(0xaab468u), r_edx);
    /* 007a98c0: call 0x82e1e0 */ r_esp -= 4; W32(r_esp, 0x7a98c5u); f_0082e1e0();
    /* 007a98c5: mov ecx, 0x7a9318 */ r_ecx = 0x7a9318u;
    /* 007a98ca: call 0x83dc2c */ r_esp -= 4; W32(r_esp, 0x7a98cfu); f_0083dc2c();
    /* 007a98cf: ret  */ FN_RET(0x007a986c); r_esp += 4; return;
}

void f_007a98d0(void) /* sub_7A98D0 */
{
    FN_ENTER(0x007a98d0);
    /* 007a98d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a98d1: mov ebp, esp */ r_ebp = r_esp;
    /* 007a98d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a98d4: mov eax, ecx */ r_eax = r_ecx;
    /* 007a98d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a98d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a98dc: mov ecx, eax */ r_ecx = r_eax;
    /* 007a98de: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x7a98e3u); f_007a9f38();
    /* 007a98e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007a98e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a98e8: je 0x7a98f7 */ if (fZ) goto L_007a98f7;
L_007a98ea:; BB(0x007a98ea);
    /* 007a98ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a98eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a98ee: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a98f1: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a98f6u); f_005c2f74();
    /* 007a98f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a98f7:; BB(0x007a98f7);
    /* 007a98f7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a98f8: ret 4 */ FN_RET(0x007a98d0); r_esp += 8; return;
}

void f_007a98fc(void) /* sub_7A98FC */
{
    FN_ENTER(0x007a98fc);
    /* 007a98fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a98fd: mov ebp, esp */ r_ebp = r_esp;
    /* 007a98ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9900: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9902: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9905: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9908: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007a990e: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 007a9912: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a9917: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a991a: mov edx, dword ptr [edx + 0xf8] */ r_edx = R32((u32)(r_edx+0xf8u));
    /* 007a9920: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 007a9924: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9925: ret  */ FN_RET(0x007a98fc); r_esp += 4; return;
}

void f_007a9928(void) /* sub_7A9928 */
{
    FN_ENTER(0x007a9928);
    /* 007a9928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9929: mov ebp, esp */ r_ebp = r_esp;
    /* 007a992b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a992c: mov eax, ecx */ r_eax = r_ecx;
    /* 007a992e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9931: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9934: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a993a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a993d: test edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a993f: mov eax, 0 */ r_eax = 0x0u;
    /* 007a9944: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007a9947: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9948: ret 4 */ FN_RET(0x007a9928); r_esp += 8; return;
}

void f_007a994c(void) /* sub_7A994C */
{
    FN_ENTER(0x007a994c);
    /* 007a994c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a994d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a994f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9950: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9952: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9955: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9958: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a995b: not edx */ r_edx = ~r_edx;
    /* 007a995d: and edx, dword ptr [eax + 0xb0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xb0u)); u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a9963: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9966: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 007a996c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a996d: ret 4 */ FN_RET(0x007a994c); r_esp += 8; return;
}

void f_007a9970(void) /* sub_7A9970 */
{
    FN_ENTER(0x007a9970);
    /* 007a9970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9971: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9973: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9974: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9976: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9979: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a997c: movzx eax, word ptr [eax + 0xb8] */ r_eax = (u32)R16((u32)(r_eax+0xb8u));
    /* 007a9983: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007a9986: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9989: movzx edx, word ptr [edx + 0xba] */ r_edx = (u32)R16((u32)(r_edx+0xbau));
    /* 007a9990: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007a9993: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a9995: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a9997: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007a999a: mov eax, ecx */ r_eax = r_ecx;
    /* 007a999c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a999d: ret  */ FN_RET(0x007a9970); r_esp += 4; return;
}

void f_007a99a0(void) /* sub_7A99A0 */
{
    FN_ENTER(0x007a99a0);
    /* 007a99a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a99a1: mov ebp, esp */ r_ebp = r_esp;
    /* 007a99a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a99a4: mov eax, ecx */ r_eax = r_ecx;
    /* 007a99a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a99a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a99ac: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007a99b2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a99b3: ret  */ FN_RET(0x007a99a0); r_esp += 4; return;
}

void f_007a99b4(void) /* sub_7A99B4 */
{
    FN_ENTER(0x007a99b4);
    /* 007a99b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a99b5: mov ebp, esp */ r_ebp = r_esp;
    /* 007a99b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a99b8: mov eax, ecx */ r_eax = r_ecx;
    /* 007a99ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a99bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a99c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a99c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a99c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a99c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a99c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a99cb: add edx, dword ptr [eax + 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a99d1: mov eax, edx */ r_eax = r_edx;
    /* 007a99d3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a99d4: ret 4 */ FN_RET(0x007a99b4); r_esp += 8; return;
}

void f_007a99d8(void) /* sub_7A99D8 */
{
    FN_ENTER(0x007a99d8);
    /* 007a99d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a99d9: mov ebp, esp */ r_ebp = r_esp;
    /* 007a99db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a99dc: mov eax, ecx */ r_eax = r_ecx;
    /* 007a99de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a99e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a99e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a99e7: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 007a99ed: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a99ee: ret 4 */ FN_RET(0x007a99d8); r_esp += 8; return;
}

void f_007a99f4(void) /* sub_7A99F4 */
{
    FN_ENTER(0x007a99f4);
    /* 007a99f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a99f5: mov ebp, esp */ r_ebp = r_esp;
    /* 007a99f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a99f8: mov eax, ecx */ r_eax = r_ecx;
    /* 007a99fa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a99fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9a00: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a9a03: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 007a9a09: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9a0a: ret 4 */ FN_RET(0x007a99f4); r_esp += 8; return;
}

void f_007a9a10(void) /* sub_7A9A10 */
{
    FN_ENTER(0x007a9a10);
    /* 007a9a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a11: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9a13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a14: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9a16: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9a19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9a1c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007a9a1f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9a20: ret  */ FN_RET(0x007a9a10); r_esp += 4; return;
}

void f_007a9a24(void) /* sub_7A9A24 */
{
    FN_ENTER(0x007a9a24);
    /* 007a9a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a25: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9a27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a28: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9a2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9a2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9a30: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007a9a33: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9a34: ret  */ FN_RET(0x007a9a24); r_esp += 4; return;
}

void f_007a9a38(void) /* sub_7A9A38 */
{
    FN_ENTER(0x007a9a38);
    /* 007a9a38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a39: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9a3b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a3c: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9a3e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9a41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9a44: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007a9a47: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9a48: ret  */ FN_RET(0x007a9a38); r_esp += 4; return;
}

void f_007a9a4c(void) /* sub_7A9A4C */
{
    FN_ENTER(0x007a9a4c);
    /* 007a9a4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a4d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9a4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a50: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9a52: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9a55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9a58: mov dword ptr [eax + 0x18], 1 */ W32((u32)(r_eax+0x18u), 0x1u);
    /* 007a9a5f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9a60: ret  */ FN_RET(0x007a9a4c); r_esp += 4; return;
}

void f_007a9a64(void) /* sub_7A9A64 */
{
    FN_ENTER(0x007a9a64);
    /* 007a9a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a65: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9a67: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9a68: ret  */ FN_RET(0x007a9a64); r_esp += 4; return;
}

void f_007a9a6c(void) /* sub_7A9A6C */
{
    FN_ENTER(0x007a9a6c);
    /* 007a9a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9a6d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9a6f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a9a72: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9a74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007a9a77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9a7a: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007a9a7e: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007a9a81: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a9a83: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a9a85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a9a87: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a9a89: add edx, dword ptr [eax + 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a9a8f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 007a9a92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9a95: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a9a9b: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a9a9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9aa1: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007a9aa7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9aaa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9aad: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007a9ab0: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 007a9ab6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9ab9: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a9abf: test eax, 0x81 */ {  u32 a = r_eax; u32 b = 0x81u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a9ac4: jne 0x7a9afd */ if (!fZ) goto L_007a9afd;
L_007a9ac6:; BB(0x007a9ac6);
    /* 007a9ac6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9ac9: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 007a9acf: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a9ad4: jne 0x7a9afd */ if (!fZ) goto L_007a9afd;
L_007a9ad6:; BB(0x007a9ad6);
    /* 007a9ad6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9ad9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9adc: movzx edx, word ptr [edx + 0xba] */ r_edx = (u32)R16((u32)(r_edx+0xbau));
    /* 007a9ae3: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007a9ae6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a9ae8: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 007a9aee: mov eax, dword ptr [eax + edx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 007a9af2: test eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a9af7: je 0x7a9c70 */ if (fZ) goto L_007a9c70;
L_007a9afd:; BB(0x007a9afd);
    /* 007a9afd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b00: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a9b06: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a9b09: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b0c: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007a9b12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9b13: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b16: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007a9b1a: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007a9b1d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a9b20: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9b22: call 0x7a9e24 */ r_esp -= 4; W32(r_esp, 0x7a9b27u); f_007a9e24();
    /* 007a9b27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9b28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b2b: mov dword ptr [esp], 0x100 */ W32((u32)(r_esp), 0x100u);
    /* 007a9b32: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9b34: call 0x7a9928 */ r_esp -= 4; W32(r_esp, 0x7a9b39u); f_007a9928();
    /* 007a9b39: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007a9b3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007a9b3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a9b41: je 0x7a9b69 */ if (fZ) goto L_007a9b69;
L_007a9b43:; BB(0x007a9b43);
    /* 007a9b43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9b44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b47: mov dword ptr [esp], 0x100 */ W32((u32)(r_esp), 0x100u);
    /* 007a9b4e: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9b50: call 0x7a994c */ r_esp -= 4; W32(r_esp, 0x7a9b55u); f_007a994c();
    /* 007a9b55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b58: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b5b: fld dword ptr [eax + 0xd0] */ FPUSH(R_F32((u32)(r_eax+0xd0u)));
    /* 007a9b61: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
    /* 007a9b67: jmp 0x7a9b78 */ goto L_007a9b78;
L_007a9b69:; BB(0x007a9b69);
    /* 007a9b69: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9b6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b6f: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007a9b72: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
L_007a9b78:; BB(0x007a9b78);
    /* 007a9b78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9b7b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b7e: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 007a9b81: mov word ptr [edx + 0xf4], ax */ W16((u32)(r_edx+0xf4u), (u16)r_eax);
    /* 007a9b88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9b8b: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007a9b91: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007a9b94: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007a9b97: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007a9b9a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a9b9d: fld dword ptr [eax*4 + 0x97d968] */ FPUSH(R_F32((u32)(r_eax*4+0x97d968u)));
    /* 007a9ba4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a9ba6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9ba9: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 007a9baf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9bb2: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 007a9bb8: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a9bbd: je 0x7a9bc9 */ if (fZ) goto L_007a9bc9;
L_007a9bbf:; BB(0x007a9bbf);
    /* 007a9bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9bc2: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9bc4: call 0x7a98fc */ r_esp -= 4; W32(r_esp, 0x7a9bc9u); f_007a98fc();
L_007a9bc9:; BB(0x007a9bc9);
    /* 007a9bc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9bcc: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a9bd2: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a9bd7: je 0x7a9c5c */ if (fZ) goto L_007a9c5c;
L_007a9bdd:; BB(0x007a9bdd);
    /* 007a9bdd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9be0: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a9be6: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 007a9beb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9bee: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007a9bf4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9bf7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9bfa: fld dword ptr [eax + 0xec] */ FPUSH(R_F32((u32)(r_eax+0xecu)));
    /* 007a9c00: fstp dword ptr [edx + 0xc0] */ W_F32((u32)(r_edx+0xc0u), ST(0)); FPOP();
    /* 007a9c06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c09: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007a9c0f: fld dword ptr [0x97d964] */ FPUSH(R_F32((u32)(0x97d964u)));
    /* 007a9c15: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a9c17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c1a: fld dword ptr [eax + 0xc4] */ FPUSH(R_F32((u32)(r_eax+0xc4u)));
    /* 007a9c20: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a9c22: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007a9c25: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007a9c28: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007a9c2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a9c2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a9c2d: jp 0x7a9dfa */ if (fP) goto L_007a9dfa;
L_007a9c33:; BB(0x007a9c33);
    /* 007a9c33: jae 0x7a9c3a */ if (!fC) goto L_007a9c3a;
L_007a9c35:; BB(0x007a9c35);
    /* 007a9c35: jmp 0x7a9dfa */ goto L_007a9dfa;
L_007a9c3a:; BB(0x007a9c3a);
    /* 007a9c3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c40: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007a9c46: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 007a9c4c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007a9c4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c51: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007a9c57: jmp 0x7a9dfa */ goto L_007a9dfa;
L_007a9c5c:; BB(0x007a9c5c);
    /* 007a9c5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c5f: fld dword ptr [0x97d960] */ FPUSH(R_F32((u32)(0x97d960u)));
    /* 007a9c65: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007a9c6b: jmp 0x7a9dfa */ goto L_007a9dfa;
L_007a9c70:; BB(0x007a9c70);
    /* 007a9c70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9c76: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 007a9c7c: fld dword ptr [0x97d964] */ FPUSH(R_F32((u32)(0x97d964u)));
    /* 007a9c82: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007a9c84: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007a9c8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a9c8c: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007a9c8f: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007a9c92: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007a9c94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a9c96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a9c97: jp 0x7a9cb7 */ if (fP) goto L_007a9cb7;
L_007a9c99:; BB(0x007a9c99);
    /* 007a9c99: jbe 0x7a9c9d */ if ((fC||fZ)) goto L_007a9c9d;
L_007a9c9b:; BB(0x007a9c9b);
    /* 007a9c9b: jmp 0x7a9cb7 */ goto L_007a9cb7;
L_007a9c9d:; BB(0x007a9c9d);
    /* 007a9c9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9ca0: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007a9ca6: fld dword ptr [0x97d964] */ FPUSH(R_F32((u32)(0x97d964u)));
    /* 007a9cac: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007a9cae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cb1: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
L_007a9cb7:; BB(0x007a9cb7);
    /* 007a9cb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cba: mov word ptr [eax + 0xf4], 4 */ W16((u32)(r_eax+0xf4u), 0x4u);
    /* 007a9cc3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cc6: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007a9ccc: or eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a9ccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cd2: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007a9cd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cdb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cde: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007a9ce4: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 007a9cea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9ced: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cf0: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007a9cf6: fstp dword ptr [edx + 0xec] */ W_F32((u32)(r_edx+0xecu), ST(0)); FPOP();
    /* 007a9cfc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9cff: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d02: movzx eax, word ptr [eax + 0xba] */ r_eax = (u32)R16((u32)(r_eax+0xbau));
    /* 007a9d09: mov word ptr [edx + 0xbc], ax */ W16((u32)(r_edx+0xbcu), (u16)r_eax);
    /* 007a9d10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9d11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d14: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007a9d18: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007a9d1b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a9d1e: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9d20: call 0x7a9e24 */ r_esp -= 4; W32(r_esp, 0x7a9d25u); f_007a9e24();
    /* 007a9d25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d2b: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007a9d31: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 007a9d37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d3a: fld dword ptr [0x97d960] */ FPUSH(R_F32((u32)(0x97d960u)));
    /* 007a9d40: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 007a9d46: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9d49: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d4c: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 007a9d4f: mov word ptr [edx + 0xf6], ax */ W16((u32)(r_edx+0xf6u), (u16)r_eax);
    /* 007a9d56: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d59: fld dword ptr [0x97d960] */ FPUSH(R_F32((u32)(0x97d960u)));
    /* 007a9d5f: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007a9d65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d68: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007a9d6e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007a9d71: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007a9d74: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007a9d77: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007a9d7a: fld dword ptr [eax*4 + 0x97d968] */ FPUSH(R_F32((u32)(r_eax*4+0x97d968u)));
    /* 007a9d81: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a9d83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d86: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 007a9d8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9d8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9d90: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 007a9d97: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9d99: call 0x7a9928 */ r_esp -= 4; W32(r_esp, 0x7a9d9eu); f_007a9928();
    /* 007a9d9e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 007a9da1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a9da4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a9da6: je 0x7a9dce */ if (fZ) goto L_007a9dce;
L_007a9da8:; BB(0x007a9da8);
    /* 007a9da8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9da9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9dac: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 007a9db3: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9db5: call 0x7a994c */ r_esp -= 4; W32(r_esp, 0x7a9dbau); f_007a994c();
    /* 007a9dba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9dbd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9dc0: fld dword ptr [eax + 0xd4] */ FPUSH(R_F32((u32)(r_eax+0xd4u)));
    /* 007a9dc6: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
    /* 007a9dcc: jmp 0x7a9de0 */ goto L_007a9de0;
L_007a9dce:; BB(0x007a9dce);
    /* 007a9dce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9dd1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9dd4: fld dword ptr [eax + 0xcc] */ FPUSH(R_F32((u32)(r_eax+0xccu)));
    /* 007a9dda: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
L_007a9de0:; BB(0x007a9de0);
    /* 007a9de0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9de3: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 007a9de9: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a9dee: je 0x7a9dfa */ if (fZ) goto L_007a9dfa;
L_007a9df0:; BB(0x007a9df0);
    /* 007a9df0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9df3: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9df5: call 0x7a98fc */ r_esp -= 4; W32(r_esp, 0x7a9dfau); f_007a98fc();
L_007a9dfa:; BB(0x007a9dfa);
    /* 007a9dfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9dfd: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007a9e01: mov word ptr [eax + 0xba], dx */ W16((u32)(r_eax+0xbau), (u16)r_edx);
    /* 007a9e08: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9e09: ret 4 */ FN_RET(0x007a9a6c); r_esp += 8; return;
}

void f_007a9e0c(void) /* sub_7A9E0C */
{
    FN_ENTER(0x007a9e0c);
    /* 007a9e0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e0d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9e0f: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 007a9e14: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9e16: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x7a9e1bu); f_00831650();
    /* 007a9e1b: add dword ptr [0xaab530], 0x40 */ { u32 ad = (u32)(0xaab530u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9e22: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9e23: ret  */ FN_RET(0x007a9e0c); r_esp += 4; return;
}

void f_007a9e24(void) /* sub_7A9E24 */
{
    FN_ENTER(0x007a9e24);
    /* 007a9e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e25: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9e27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e28: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9e2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9e2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9e30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9e33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 007a9e36: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9e38: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 007a9e3e: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 007a9e42: mov eax, dword ptr [eax + 0xdc] */ r_eax = R32((u32)(r_eax+0xdcu));
    /* 007a9e48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9e4b: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 007a9e4f: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 007a9e55: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9e56: ret 4 */ FN_RET(0x007a9e24); r_esp += 8; return;
}

void f_007a9e5c(void) /* sub_7A9E5C */
{
    FN_ENTER(0x007a9e5c);
    /* 007a9e5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e5d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9e5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e61: push 0x7a9f2c */ { u32 v = 0x7a9f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a9e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a9e74: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a9e77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a9e7a: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 007a9e7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a9e80: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007a9e83: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9e85: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007a9e88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9e89: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9e8c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a9e8f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a9e92: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9e94: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7a9e99u); f_007b4b48();
    /* 007a9e99: jmp 0x7a9eb6 */ goto L_007a9eb6;
L_007a9eb6:; BB(0x007a9eb6);
    /* 007a9eb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a9ebd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9ec0: mov dword ptr [eax], 0xb462d8 */ W32((u32)(r_eax), 0xb462d8u);
    /* 007a9ec6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9ec9: mov edx, dword ptr [0x9ffa7c] */ r_edx = R32((u32)(0x9ffa7cu));
    /* 007a9ecf: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007a9ed2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9ed5: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9ed7: call 0x7a9fc4 */ r_esp -= 4; W32(r_esp, 0x7a9edcu); f_007a9fc4();
    /* 007a9edc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9edf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a9ee1: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 007a9ee7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9eea: mov dword ptr [eax + 0xf8], edx */ W32((u32)(r_eax+0xf8u), r_edx);
    /* 007a9ef0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9ef3: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 007a9ef9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9efc: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 007a9f02: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9f05: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 007a9f0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a9f12: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9f15: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a9f18: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9f1b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9f1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a9f21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a9f28: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9f29: ret 4 */ FN_RET(0x007a9e5c); r_esp += 8; return;
}

void f_007a9e9b(void)
{
    FN_ENTER(0x007a9e9b);
    /* 007a9e9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a9ea2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9ea5: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9ea7: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x7a9eacu); f_007b4aec();
    /* 007a9eac: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a9eaf: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9eb2: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9eb5: ret  */ FN_RET(0x007a9e9b); r_esp += 4; return;
}

void f_007a9f2c(void)
{
    FN_ENTER(0x007a9f2c);
    /* 007a9f2c: mov eax, 0xb46288 */ r_eax = 0xb46288u;
    /* 007a9f31: jmp 0x857a43 */ f_00857a43(); return;
}

void f_007a9f38(void) /* sub_7A9F38 */
{
    FN_ENTER(0x007a9f38);
    /* 007a9f38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9f39: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9f3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a9f3d: push 0x7a9fb8 */ { u32 v = 0x7a9fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a9f42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a9f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a9f49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a9f50: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a9f53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a9f56: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 007a9f59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a9f5c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007a9f5f: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9f61: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007a9f64: jmp 0x7a9f81 */ goto L_007a9f81;
L_007a9f81:; BB(0x007a9f81);
    /* 007a9f81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a9f88: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9f8b: mov dword ptr [eax], 0xb462d8 */ W32((u32)(r_eax), 0xb462d8u);
    /* 007a9f91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a9f98: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9f9b: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9f9d: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x7a9fa2u); f_007b4aec();
    /* 007a9fa2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a9fa5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9fa8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9fab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a9fae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a9fb5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007a9fb6: ret  */ FN_RET(0x007a9f38); r_esp += 4; return;
}

void f_007a9f66(void)
{
    FN_ENTER(0x007a9f66);
    /* 007a9f66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a9f6d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a9f70: mov ecx, eax */ r_ecx = r_eax;
    /* 007a9f72: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x7a9f77u); f_007b4aec();
    /* 007a9f77: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a9f7a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a9f7d: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007a9f80: ret  */ FN_RET(0x007a9f66); r_esp += 4; return;
}

void f_007a9fb8(void)
{
    FN_ENTER(0x007a9fb8);
    /* 007a9fb8: mov eax, 0xb462b0 */ r_eax = 0xb462b0u;
    /* 007a9fbd: jmp 0x857a43 */ f_00857a43(); return;
}

void f_007a9fc4(void) /* sub_7A9FC4 */
{
    FN_ENTER(0x007a9fc4);
    /* 007a9fc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a9fc5: mov ebp, esp */ r_ebp = r_esp;
    /* 007a9fc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a9fc8: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9fca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007a9fcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9fd0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a9fd2: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 007a9fd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9fdb: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 007a9fe1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9fe4: mov word ptr [eax + 0xba], dx */ W16((u32)(r_eax+0xbau), (u16)r_edx);
    /* 007a9feb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9fee: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 007a9ff5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007a9ff8: mov word ptr [eax + 0xbc], dx */ W16((u32)(r_eax+0xbcu), (u16)r_edx);
    /* 007a9fff: fld dword ptr [0x97d974] */ FPUSH(R_F32((u32)(0x97d974u)));
    /* 007aa005: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa008: fst dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0));
    /* 007aa00e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa011: fst dword ptr [eax + 0xc8] */ W_F32((u32)(r_eax+0xc8u), ST(0));
    /* 007aa017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa01a: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa020: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa023: fld dword ptr [0x97d970] */ FPUSH(R_F32((u32)(0x97d970u)));
    /* 007aa029: fstp dword ptr [eax + 0xcc] */ W_F32((u32)(r_eax+0xccu), ST(0)); FPOP();
    /* 007aa02f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa032: fld dword ptr [0x97d974] */ FPUSH(R_F32((u32)(0x97d974u)));
    /* 007aa038: fstp dword ptr [eax + 0xd0] */ W_F32((u32)(r_eax+0xd0u), ST(0)); FPOP();
    /* 007aa03e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa041: fld dword ptr [0x97d974] */ FPUSH(R_F32((u32)(0x97d974u)));
    /* 007aa047: fstp dword ptr [eax + 0xd4] */ W_F32((u32)(r_eax+0xd4u), ST(0)); FPOP();
    /* 007aa04d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa050: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 007aa056: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa059: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 007aa05f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa062: fld dword ptr [0x97d974] */ FPUSH(R_F32((u32)(0x97d974u)));
    /* 007aa068: fstp dword ptr [eax + 0xec] */ W_F32((u32)(r_eax+0xecu), ST(0)); FPOP();
    /* 007aa06e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa071: fld dword ptr [0x97d974] */ FPUSH(R_F32((u32)(0x97d974u)));
    /* 007aa077: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 007aa07d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa080: mov word ptr [eax + 0xf6], dx */ W16((u32)(r_eax+0xf6u), (u16)r_edx);
    /* 007aa087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa08a: mov word ptr [eax + 0xf4], dx */ W16((u32)(r_eax+0xf4u), (u16)r_edx);
    /* 007aa091: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa092: ret  */ FN_RET(0x007a9fc4); r_esp += 4; return;
}

