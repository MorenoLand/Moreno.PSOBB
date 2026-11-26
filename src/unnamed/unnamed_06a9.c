#include "protos.h"

void f_006a9020(void) /* sub_6A9020 */
{
    FN_ENTER(0x006a9020);
    /* 006a9020: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9021: movsx ebx, word ptr [ecx + 0x14] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x14u));
    /* 006a9025: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9027: jl 0x6a9032 */ if ((fS!=fO)) goto L_006a9032;
L_006a9029:; BB(0x006a9029);
    /* 006a9029: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6a902eu); f_006931f8();
    /* 006a902e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9030: jge 0x6a9034 */ if ((fS==fO)) goto L_006a9034;
L_006a9032:; BB(0x006a9032);
    /* 006a9032: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a9034:; BB(0x006a9034);
    /* 006a9034: mov eax, ebx */ r_eax = r_ebx;
    /* 006a9036: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9037: ret  */ FN_RET(0x006a9020); r_esp += 4; return;
}

void f_006a9038(void) /* sub_6A9038 */
{
    FN_ENTER(0x006a9038);
    /* 006a9038: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a903c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a903e: jl 0x6a9047 */ if ((fS!=fO)) goto L_006a9047;
L_006a9040:; BB(0x006a9040);
    /* 006a9040: cmp eax, 0x278d0 */ {  u32 a = r_eax; u32 b = 0x278d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9045: jle 0x6a9049 */ if ((fZ||fS!=fO)) goto L_006a9049;
L_006a9047:; BB(0x006a9047);
    /* 006a9047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a9049:; BB(0x006a9049);
    /* 006a9049: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006a904c: ret 4 */ FN_RET(0x006a9038); r_esp += 8; return;
}

void f_006a9050(void) /* sub_6A9050 */
{
    FN_ENTER(0x006a9050);
    /* 006a9050: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a9054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9056: jl 0x6a905d */ if ((fS!=fO)) goto L_006a905d;
L_006a9058:; BB(0x006a9058);
    /* 006a9058: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a905b: jle 0x6a905f */ if ((fZ||fS!=fO)) goto L_006a905f;
L_006a905d:; BB(0x006a905d);
    /* 006a905d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a905f:; BB(0x006a905f);
    /* 006a905f: mov byte ptr [ecx + 0x13], al */ W8((u32)(r_ecx+0x13u), (u8)r_eax);
    /* 006a9062: ret 4 */ FN_RET(0x006a9050); r_esp += 8; return;
}

void f_006a9068(void) /* sub_6A9068 */
{
    FN_ENTER(0x006a9068);
    /* 006a9068: movsx eax, byte ptr [ecx + 0x13] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x13u));
    /* 006a906c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a906e: jl 0x6a9075 */ if ((fS!=fO)) goto L_006a9075;
L_006a9070:; BB(0x006a9070);
    /* 006a9070: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9073: jle 0x6a9077 */ if ((fZ||fS!=fO)) goto L_006a9077;
L_006a9075:; BB(0x006a9075);
    /* 006a9075: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a9077:; BB(0x006a9077);
    /* 006a9077: ret  */ FN_RET(0x006a9068); r_esp += 4; return;
}

void f_006a9078(void) /* sub_6A9078 */
{
    FN_ENTER(0x006a9078);
    /* 006a9078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9079: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a907c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a907e: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 006a9082: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 006a9085: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006a9089: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 006a908c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a908d: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a9091: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9093: call 0x6a90c4 */ r_esp -= 4; W32(r_esp, 0x6a9098u); f_006a90c4();
    /* 006a9098: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 006a909a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006a909c: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 006a909e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006a90a1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006a90a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a90aa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006a90ae: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006a90b2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006a90b6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006a90b9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a90bd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a90c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a90c1: ret 8 */ FN_RET(0x006a9078); r_esp += 12; return;
}

void f_006a90c4(void) /* sub_6A90C4 */
{
    FN_ENTER(0x006a90c4);
    /* 006a90c4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a90c8: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 006a90cb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a90cf: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006a90d2: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a90d8: je 0x6a90df */ if (fZ) goto L_006a90df;
L_006a90da:; BB(0x006a90da);
    /* 006a90da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a90dc: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
L_006a90df:; BB(0x006a90df);
    /* 006a90df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a90e1: ret 8 */ FN_RET(0x006a90c4); r_esp += 12; return;
}

void f_006a90e4(void) /* sub_6A90E4 */
{
    FN_ENTER(0x006a90e4);
    /* 006a90e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a90e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a90e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a90e9: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 006a90ec: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 006a90f3: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 006a90f6: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 006a90f9: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 006a90fc: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 006a9103: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 006a9106: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 006a9109: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006a910c: mov dword ptr [ebx + 0x10], 0x3f800000 */ W32((u32)(r_ebx+0x10u), 0x3f800000u);
    /* 006a9113: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9115: mov dword ptr [ebx + 0x14], 0x3f800000 */ W32((u32)(r_ebx+0x14u), 0x3f800000u);
    /* 006a911c: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 006a9123: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 006a912a: mov dword ptr [ebx + 0x20], 0x3f800000 */ W32((u32)(r_ebx+0x20u), 0x3f800000u);
    /* 006a9131: mov dword ptr [ebx + 0x24], 0x3f800000 */ W32((u32)(r_ebx+0x24u), 0x3f800000u);
    /* 006a9138: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
    /* 006a913f: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006a9146: mov dword ptr [ebx + 0x30], 0x3f800000 */ W32((u32)(r_ebx+0x30u), 0x3f800000u);
    /* 006a914d: mov dword ptr [ebx + 0x34], 0x3f800000 */ W32((u32)(r_ebx+0x34u), 0x3f800000u);
    /* 006a9154: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 006a915b: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 006a9162: mov dword ptr [ebx + 0x40], 0x3f800000 */ W32((u32)(r_ebx+0x40u), 0x3f800000u);
    /* 006a9169: mov dword ptr [ebx + 0x44], 0x3f800000 */ W32((u32)(r_ebx+0x44u), 0x3f800000u);
    /* 006a9170: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 006a9177: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
    /* 006a917e: mov dword ptr [ebx + 0x50], 0x3f800000 */ W32((u32)(r_ebx+0x50u), 0x3f800000u);
    /* 006a9185: mov dword ptr [ebx + 0x54], 0x3f800000 */ W32((u32)(r_ebx+0x54u), 0x3f800000u);
    /* 006a918c: call 0x6a9198 */ r_esp -= 4; W32(r_esp, 0x6a9191u); f_006a9198();
    /* 006a9191: mov eax, ebx */ r_eax = r_ebx;
    /* 006a9193: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9194: ret  */ FN_RET(0x006a90e4); r_esp += 4; return;
}

void f_006a9198(void) /* sub_6A9198 */
{
    FN_ENTER(0x006a9198);
    /* 006a9198: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006a919e: call 0x6a91a4 */ r_esp -= 4; W32(r_esp, 0x6a91a3u); f_006a91a4();
    /* 006a91a3: ret  */ FN_RET(0x006a9198); r_esp += 4; return;
}

void f_006a91a4(void) /* sub_6A91A4 */
{
    FN_ENTER(0x006a91a4);
    /* 006a91a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a91a5: mov edi, ecx */ r_edi = r_ecx;
    /* 006a91a7: mov ecx, edi */ r_ecx = r_edi;
    /* 006a91a9: call 0x6a91cc */ r_esp -= 4; W32(r_esp, 0x6a91aeu); f_006a91cc();
    /* 006a91ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a91b0: je 0x6a91c9 */ if (fZ) goto L_006a91c9;
L_006a91b2:; BB(0x006a91b2);
    /* 006a91b2: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 006a91b5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006a91b9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a91be: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006a91c2: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
L_006a91c9:; BB(0x006a91c9);
    /* 006a91c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a91ca: ret  */ FN_RET(0x006a91a4); r_esp += 4; return;
}

void f_006a91cc(void) /* sub_6A91CC */
{
    FN_ENTER(0x006a91cc);
    /* 006a91cc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006a91cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a91d1: je 0x6a91e7 */ if (fZ) goto L_006a91e7;
L_006a91d3:; BB(0x006a91d3);
    /* 006a91d3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006a91d6: cmp eax, dword ptr [0x9ba90c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9ba90cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a91dc: je 0x6a91e7 */ if (fZ) goto L_006a91e7;
L_006a91de:; BB(0x006a91de);
    /* 006a91de: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006a91e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a91e7:; BB(0x006a91e7);
    /* 006a91e7: mov eax, edx */ r_eax = r_edx;
    /* 006a91e9: ret  */ FN_RET(0x006a91cc); r_esp += 4; return;
}

void f_006a91ec(void) /* sub_6A91EC */
{
    FN_ENTER(0x006a91ec);
    /* 006a91ec: call 0x6a91a4 */ r_esp -= 4; W32(r_esp, 0x6a91f1u); f_006a91a4();
    /* 006a91f1: ret  */ FN_RET(0x006a91ec); r_esp += 4; return;
}

void f_006a91f4(void) /* sub_6A91F4 */
{
    FN_ENTER(0x006a91f4);
    /* 006a91f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a91f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a91f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a91f9: call 0x6a9198 */ r_esp -= 4; W32(r_esp, 0x6a91feu); f_006a9198();
    /* 006a91fe: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 006a9205: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 006a920c: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 006a9213: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 006a921a: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 006a9221: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006a9228: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 006a922f: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006a9236: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
    /* 006a923d: mov dword ptr [ebp + 0x4c], 0 */ W32((u32)(r_ebp+0x4cu), 0x0u);
    /* 006a9244: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9245: ret  */ FN_RET(0x006a91f4); r_esp += 4; return;
}

void f_006a9248(void) /* sub_6A9248 */
{
    FN_ENTER(0x006a9248);
    /* 006a9248: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a924a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a924d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a924f: jl 0x6a9259 */ if ((fS!=fO)) goto L_006a9259;
L_006a9251:; BB(0x006a9251);
    /* 006a9251: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006a9253: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9258: ret  */ FN_RET(0x006a9248); r_esp += 4; return;
L_006a9259:; BB(0x006a9259);
    /* 006a9259: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006a925f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9261: ret  */ FN_RET(0x006a9248); r_esp += 4; return;
}

void f_006a9264(void) /* sub_6A9264 */
{
    FN_ENTER(0x006a9264);
    /* 006a9264: mov dword ptr [0xa947cc], 0x3f800000 */ W32((u32)(0xa947ccu), 0x3f800000u);
    /* 006a926e: mov dword ptr [0xa947d0], 0x41000000 */ W32((u32)(0xa947d0u), 0x41000000u);
    /* 006a9278: mov dword ptr [0xa947d4], 0x3fc00000 */ W32((u32)(0xa947d4u), 0x3fc00000u);
    /* 006a9282: ret  */ FN_RET(0x006a9264); r_esp += 4; return;
}

void f_006a9284(void) /* sub_6A9284 */
{
    FN_ENTER(0x006a9284);
    /* 006a9284: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a9288: movsx edx, byte ptr [eax + ecx + 0x20] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx+0x20u));
    /* 006a928d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a928f: jl 0x6a9296 */ if ((fS!=fO)) goto L_006a9296;
L_006a9291:; BB(0x006a9291);
    /* 006a9291: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9294: jle 0x6a929d */ if ((fZ||fS!=fO)) goto L_006a929d;
L_006a9296:; BB(0x006a9296);
    /* 006a9296: mov byte ptr [eax + ecx + 0x20], 0 */ W8((u32)(r_eax+r_ecx+0x20u), 0x0u);
    /* 006a929b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a929d:; BB(0x006a929d);
    /* 006a929d: mov eax, edx */ r_eax = r_edx;
    /* 006a929f: ret 4 */ FN_RET(0x006a9284); r_esp += 8; return;
}

void f_006a92a4(void) /* sub_6A92A4 */
{
    FN_ENTER(0x006a92a4);
    /* 006a92a4: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 006a92a9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a92ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a92af: jl 0x6a92b6 */ if ((fS!=fO)) goto L_006a92b6;
L_006a92b1:; BB(0x006a92b1);
    /* 006a92b1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a92b4: jle 0x6a92bb */ if ((fZ||fS!=fO)) goto L_006a92bb;
L_006a92b6:; BB(0x006a92b6);
    /* 006a92b6: mov eax, 0x14 */ r_eax = 0x14u;
L_006a92bb:; BB(0x006a92bb);
    /* 006a92bb: mov byte ptr [edx + ecx + 0x20], al */ W8((u32)(r_edx+r_ecx+0x20u), (u8)r_eax);
    /* 006a92bf: ret 8 */ FN_RET(0x006a92a4); r_esp += 12; return;
}

void f_006a92c4(void) /* sub_6A92C4 */
{
    FN_ENTER(0x006a92c4);
    /* 006a92c4: movzx eax, byte ptr [ecx + 5] */ r_eax = (u32)R8((u32)(r_ecx+0x5u));
    /* 006a92c8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a92cb: jge 0x6a92ce */ if ((fS==fO)) goto L_006a92ce;
L_006a92cd:; BB(0x006a92cd);
    /* 006a92cd: ret  */ FN_RET(0x006a92c4); r_esp += 4; return;
L_006a92ce:; BB(0x006a92ce);
    /* 006a92ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a92d0: ret  */ FN_RET(0x006a92c4); r_esp += 4; return;
}

void f_006a92d4(void) /* sub_6A92D4 */
{
    FN_ENTER(0x006a92d4);
    /* 006a92d4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a92d9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a92dc: jge 0x6a92e4 */ if ((fS==fO)) goto L_006a92e4;
L_006a92de:; BB(0x006a92de);
    /* 006a92de: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 006a92e1: ret 4 */ FN_RET(0x006a92d4); r_esp += 8; return;
L_006a92e4:; BB(0x006a92e4);
    /* 006a92e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a92e6: jmp 0x6a92de */ goto L_006a92de;
}

void f_006a92e8(void) /* sub_6A92E8 */
{
    FN_ENTER(0x006a92e8);
    /* 006a92e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a92e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a92ea: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a92ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a92ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a92ef: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 006a92f2: mov byte ptr [ebp + 1], al */ W8((u32)(r_ebp+0x1u), (u8)r_eax);
    /* 006a92f5: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 006a92f8: mov byte ptr [ebp + 3], al */ W8((u32)(r_ebp+0x3u), (u8)r_eax);
    /* 006a92fb: mov byte ptr [ebp + 4], al */ W8((u32)(r_ebp+0x4u), (u8)r_eax);
    /* 006a92fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a9300: call 0x6a92d4 */ r_esp -= 4; W32(r_esp, 0x6a9305u); f_006a92d4();
    /* 006a9305: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a930a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a930c: mov byte ptr [ebp + 6], al */ W8((u32)(r_ebp+0x6u), (u8)r_eax);
    /* 006a930f: mov byte ptr [ebp + 7], al */ W8((u32)(r_ebp+0x7u), (u8)r_eax);
    /* 006a9312: mov byte ptr [ebp + 8], al */ W8((u32)(r_ebp+0x8u), (u8)r_eax);
    /* 006a9315: mov byte ptr [ebp + 9], al */ W8((u32)(r_ebp+0x9u), (u8)r_eax);
    /* 006a9318: mov byte ptr [ebp + 0xa], al */ W8((u32)(r_ebp+0xau), (u8)r_eax);
    /* 006a931b: mov byte ptr [ebp + 0xb], al */ W8((u32)(r_ebp+0xbu), (u8)r_eax);
    /* 006a931e: mov byte ptr [ebp + 0xc], al */ W8((u32)(r_ebp+0xcu), (u8)r_eax);
    /* 006a9321: mov byte ptr [ebp + 0xd], al */ W8((u32)(r_ebp+0xdu), (u8)r_eax);
    /* 006a9324: mov byte ptr [ebp + 0xe], al */ W8((u32)(r_ebp+0xeu), (u8)r_eax);
    /* 006a9327: mov byte ptr [ebp + 0x10], al */ W8((u32)(r_ebp+0x10u), (u8)r_eax);
    /* 006a932a: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 006a932f: call 0x6ad1cc */ r_esp -= 4; W32(r_esp, 0x6a9334u); f_006ad1cc();
    /* 006a9334: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9337: jne 0x6a933b */ if (!fZ) goto L_006a933b;
L_006a9339:; BB(0x006a9339);
    /* 006a9339: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006a933b:; BB(0x006a933b);
    /* 006a933b: mov byte ptr [ebp + 0x11], bl */ W8((u32)(r_ebp+0x11u), (u8)r_ebx);
    /* 006a933e: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6a9343u); f_006931f8();
    /* 006a9343: mov dword ptr [ebp + 0x1c], 0xa */ W32((u32)(r_ebp+0x1cu), 0xau);
    /* 006a934a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a934c: mov word ptr [ebp + 0x14], dx */ W16((u32)(r_ebp+0x14u), (u16)r_edx);
    /* 006a9350: mov byte ptr [ebp + 0x12], dl */ W8((u32)(r_ebp+0x12u), (u8)r_edx);
    /* 006a9353: mov eax, 0x14 */ r_eax = 0x14u;
    /* 006a9358: mov byte ptr [ebp + 0x20], al */ W8((u32)(r_ebp+0x20u), (u8)r_eax);
    /* 006a935b: mov byte ptr [ebp + 0x21], al */ W8((u32)(r_ebp+0x21u), (u8)r_eax);
    /* 006a935e: mov byte ptr [ebp + 0x22], al */ W8((u32)(r_ebp+0x22u), (u8)r_eax);
    /* 006a9361: mov byte ptr [ebp + 0x23], al */ W8((u32)(r_ebp+0x23u), (u8)r_eax);
    /* 006a9364: mov byte ptr [ebp + 0xf], dl */ W8((u32)(r_ebp+0xfu), (u8)r_edx);
    /* 006a9367: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9369: ret  */ FN_RET(0x006a92e8); r_esp += 4; return;
}

void f_006a936c(void) /* sub_6A936C */
{
    FN_ENTER(0x006a936c);
    /* 006a936c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a936d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a936f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9371: call 0x6a9390 */ r_esp -= 4; W32(r_esp, 0x6a9376u); f_006a9390();
    /* 006a9376: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a937a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a937c: jne 0x6a9382 */ if (!fZ) goto L_006a9382;
L_006a937e:; BB(0x006a937e);
    /* 006a937e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a937f: ret 4 */ FN_RET(0x006a936c); r_esp += 8; return;
L_006a9382:; BB(0x006a9382);
    /* 006a9382: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9383: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a9388u); f_005c2f74();
    /* 006a9388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9389: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a938a: ret 4 */ FN_RET(0x006a936c); r_esp += 8; return;
}

void f_006a9390(void) /* sub_6A9390 */
{
    FN_ENTER(0x006a9390);
    /* 006a9390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a9391: mov ebp, esp */ r_ebp = r_esp;
    /* 006a9393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a9395: push 0x8eba60 */ { u32 v = 0x8eba60u; r_esp -= 4; W32(r_esp, v); }
    /* 006a939a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a93a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a93a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a93a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a93ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a93ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a93b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a93b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a93b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a93ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a93bd: mov dword ptr [ecx], 0xb3a2f0 */ W32((u32)(r_ecx), 0xb3a2f0u);
    /* 006a93c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a93ca: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x6a93cfu); f_004f7078();
    /* 006a93cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a93d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a93d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006a93db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a93dc: ret  */ FN_RET(0x006a9390); r_esp += 4; return;
}

void f_006a93e0(void)
{
    FN_ENTER(0x006a93e0);
    /* 006a93e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a93e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006a93e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a93e5: push 0x8eba88 */ { u32 v = 0x8eba88u; r_esp -= 4; W32(r_esp, v); }
    /* 006a93ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a93f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a93f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a93f8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a93fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a93fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a9401: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a9404: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a9407: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006a9409: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006a9410: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a9415u); f_005caba4();
    /* 006a9415: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a9418: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a941b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006a941e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9420: je 0x6a94bc */ if (fZ) goto L_006a94bc;
L_006a9426:; BB(0x006a9426);
    /* 006a9426: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006a942d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a9434: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a943a: mov ecx, eax */ r_ecx = r_eax;
    /* 006a943c: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x6a9441u); f_004f7330();
    /* 006a9441: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a9444: mov dword ptr [edx], 0xb3a2f0 */ W32((u32)(r_edx), 0xb3a2f0u);
    /* 006a944a: mov eax, dword ptr [0x9cc0d0] */ r_eax = R32((u32)(0x9cc0d0u));
    /* 006a944f: mov byte ptr [edx + 0x38], 0 */ W8((u32)(r_edx+0x38u), 0x0u);
    /* 006a9453: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006a9456: mov byte ptr [edx + 0x39], 0xf */ W8((u32)(r_edx+0x39u), 0xfu);
    /* 006a945a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a945c:; BB(0x006a945c);
    /* 006a945c: mov ebx, dword ptr [edx*8 + 0x966824] */ r_ebx = R32((u32)(r_edx*8+0x966824u));
    /* 006a9463: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006a9465:; BB(0x006a9465);
    /* 006a9465: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006a9467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9469: je 0x6a94a1 */ if (fZ) goto L_006a94a1;
L_006a946b:; BB(0x006a946b);
    /* 006a946b: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 006a946e: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 006a9471: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a9474: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9476: je 0x6a94a1 */ if (fZ) goto L_006a94a1;
L_006a9478:; BB(0x006a9478);
    /* 006a9478: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006a947b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a947e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9480: je 0x6a94a1 */ if (fZ) goto L_006a94a1;
L_006a9482:; BB(0x006a9482);
    /* 006a9482: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006a9485: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a9488: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a948a: je 0x6a94a1 */ if (fZ) goto L_006a94a1;
L_006a948c:; BB(0x006a948c);
    /* 006a948c: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 006a948f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a9492: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9494: je 0x6a94a1 */ if (fZ) goto L_006a94a1;
L_006a9496:; BB(0x006a9496);
    /* 006a9496: lea ebx, [eax + 0x10] */ r_ebx = (u32)(r_eax+0x10u);
    /* 006a9499: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a949c: cmp ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a949f: jl 0x6a9465 */ if ((fS!=fO)) goto L_006a9465;
L_006a94a1:; BB(0x006a94a1);
    /* 006a94a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a94a4: mov byte ptr [edx + eax + 0x3a], 0 */ W8((u32)(r_edx+r_eax+0x3au), 0x0u);
    /* 006a94a9: mov byte ptr [edx + eax + 0x49], cl */ W8((u32)(r_edx+r_eax+0x49u), (u8)r_ecx);
    /* 006a94ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a94b0: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a94b3: jl 0x6a945c */ if ((fS!=fO)) goto L_006a945c;
L_006a94b5:; BB(0x006a94b5);
    /* 006a94b5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006a94bc:; BB(0x006a94bc);
    /* 006a94bc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a94bf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a94c2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a94c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a94c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a94cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006a94d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a94d2: ret  */ FN_RET(0x006a93e0); r_esp += 4; return;
}

void f_006a94d4(void) /* sub_6A94D4 */
{
    FN_ENTER(0x006a94d4);
    /* 006a94d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a94d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a94d6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a94d9: mov esi, ecx */ r_esi = r_ecx;
    /* 006a94db: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x6a94e0u); f_007c0424();
    /* 006a94e0: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6a94e5u); f_007becd4();
    /* 006a94e5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a94e7: call 0x6a9570 */ r_esp -= 4; W32(r_esp, 0x6a94ecu); f_006a9570();
    /* 006a94ec: mov ecx, esi */ r_ecx = r_esi;
    /* 006a94ee: call 0x6a95f4 */ r_esp -= 4; W32(r_esp, 0x6a94f3u); f_006a95f4();
    /* 006a94f3: movsx ecx, byte ptr [esi + 0x39] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x39u));
    /* 006a94f7: mov edx, 0x966820 */ r_edx = 0x966820u;
    /* 006a94fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a94fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9500: jle 0x6a9565 */ if ((fZ||fS!=fO)) goto L_006a9565;
L_006a9502:; BB(0x006a9502);
    /* 006a9502: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006a9506: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006a950a: mov edi, esi */ r_edi = r_esi;
    /* 006a950c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006a950f: lea ebx, [eax + 0xa] */ r_ebx = (u32)(r_eax+0xau);
    /* 006a9512: mov esi, eax */ r_esi = r_eax;
    /* 006a9514: mov ebp, edx */ r_ebp = r_edx;
L_006a9516:; BB(0x006a9516);
    /* 006a9516: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 006a9519: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 006a951e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9520: or ecx, 0xa0000 */ {  u32 a = r_ecx; u32 b = 0xa0000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006a9526: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9527: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6a952cu); f_0061cdb0();
    /* 006a952c: movsx eax, byte ptr [edi + esi + 0x3a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+r_esi+0x3au));
    /* 006a9531: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 006a9534: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006a9537: mov edx, ebx */ r_edx = r_ebx;
    /* 006a9539: or edx, 0x180000 */ {  u32 a = r_edx; u32 b = 0x180000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a953f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 006a9544: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9545: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6a954au); f_0061cdb0();
    /* 006a954a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a954d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006a9551: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a9554: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a9557: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a955a: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a955c: jl 0x6a9516 */ if ((fS!=fO)) goto L_006a9516;
L_006a955e:; BB(0x006a955e);
    /* 006a955e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a9562: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006a9565:; BB(0x006a9565);
    /* 006a9565: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x6a956au); f_007c0368();
    /* 006a956a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a956d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a956e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a956f: ret  */ FN_RET(0x006a94d4); r_esp += 4; return;
}

void f_006a9570(void) /* sub_6A9570 */
{
    FN_ENTER(0x006a9570);
    /* 006a9570: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9571: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a9572: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9573: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9574: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a9576: movsx eax, byte ptr [ebp + 0x39] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x39u));
    /* 006a957a: movsx ebx, byte ptr [ebp + 0x38] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0x38u));
    /* 006a957e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006a9581: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006a9584: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a958a: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 006a958d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a958f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a9591: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a9593: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006a959a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6a959fu); f_007c1160();
    /* 006a959f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a95a1: je 0x6a95b8 */ if (fZ) goto L_006a95b8;
L_006a95a3:; BB(0x006a95a3);
    /* 006a95a3: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a95a6: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 006a95a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a95ab: jge 0x6a95e9 */ if ((fS==fO)) goto L_006a95e9;
L_006a95ad:; BB(0x006a95ad);
    /* 006a95ad: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006a95b0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a95b3: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 006a95b6: jmp 0x6a95e9 */ goto L_006a95e9;
L_006a95b8:; BB(0x006a95b8);
    /* 006a95b8: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a95be: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a95c1: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006a95c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a95c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a95c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a95ca: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006a95d1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6a95d6u); f_007c1160();
    /* 006a95d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a95d8: je 0x6a95e9 */ if (fZ) goto L_006a95e9;
L_006a95da:; BB(0x006a95da);
    /* 006a95da: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006a95dd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a95e0: movsx esi, bl */ r_esi = (u32)(i32)(i8)(u8)r_ebx;
    /* 006a95e3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a95e5: jl 0x6a95e9 */ if ((fS!=fO)) goto L_006a95e9;
L_006a95e7:; BB(0x006a95e7);
    /* 006a95e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a95e9:; BB(0x006a95e9);
    /* 006a95e9: mov byte ptr [ebp + 0x38], bl */ W8((u32)(r_ebp+0x38u), (u8)r_ebx);
    /* 006a95ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a95ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a95ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a95ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a95f0: ret  */ FN_RET(0x006a9570); r_esp += 4; return;
}

void f_006a95f4(void) /* sub_6A95F4 */
{
    FN_ENTER(0x006a95f4);
    /* 006a95f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a95f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a95f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a95f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a95f8: mov esi, ecx */ r_esi = r_ecx;
    /* 006a95fa: movsx edx, byte ptr [esi + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x38u));
    /* 006a95fe: movsx eax, byte ptr [edx + esi + 0x49] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_esi+0x49u));
    /* 006a9603: movsx ebx, byte ptr [edx + esi + 0x3a] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+r_esi+0x3au));
    /* 006a9608: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006a960b: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a9611: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006a9614: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006a9617: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a9619: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a961b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a961d: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006a9624: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6a9629u); f_007c1160();
    /* 006a9629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a962b: je 0x6a9642 */ if (fZ) goto L_006a9642;
L_006a962d:; BB(0x006a962d);
    /* 006a962d: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a9630: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 006a9633: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9635: jge 0x6a9673 */ if ((fS==fO)) goto L_006a9673;
L_006a9637:; BB(0x006a9637);
    /* 006a9637: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006a963a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a963d: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 006a9640: jmp 0x6a9673 */ goto L_006a9673;
L_006a9642:; BB(0x006a9642);
    /* 006a9642: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a9648: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006a964b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006a964e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a9650: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a9652: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a9654: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006a965b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6a9660u); f_007c1160();
    /* 006a9660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9662: je 0x6a9673 */ if (fZ) goto L_006a9673;
L_006a9664:; BB(0x006a9664);
    /* 006a9664: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006a9667: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a966a: movsx edi, bl */ r_edi = (u32)(i32)(i8)(u8)r_ebx;
    /* 006a966d: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a966f: jl 0x6a9673 */ if ((fS!=fO)) goto L_006a9673;
L_006a9671:; BB(0x006a9671);
    /* 006a9671: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a9673:; BB(0x006a9673);
    /* 006a9673: movsx eax, byte ptr [esi + 0x38] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x38u));
    /* 006a9677: mov byte ptr [eax + esi + 0x3a], bl */ W8((u32)(r_eax+r_esi+0x3au), (u8)r_ebx);
    /* 006a967b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a967c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a967d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a967e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a967f: ret  */ FN_RET(0x006a95f4); r_esp += 4; return;
}

void f_006a9680(void) /* sub_6A9680 */
{
    FN_ENTER(0x006a9680);
    /* 006a9680: mov dword ptr [0xa947d8], 0x3f800000 */ W32((u32)(0xa947d8u), 0x3f800000u);
    /* 006a968a: mov dword ptr [0xa947dc], 0x41000000 */ W32((u32)(0xa947dcu), 0x41000000u);
    /* 006a9694: mov dword ptr [0xa947e0], 0x3fc00000 */ W32((u32)(0xa947e0u), 0x3fc00000u);
    /* 006a969e: ret  */ FN_RET(0x006a9680); r_esp += 4; return;
}

void f_006a96a0(void) /* sub_6A96A0 */
{
    FN_ENTER(0x006a96a0);
    /* 006a96a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a96a1: mov edi, ecx */ r_edi = r_ecx;
    /* 006a96a3: movzx eax, byte ptr [edi + 0x3a] */ r_eax = (u32)R8((u32)(r_edi+0x3au));
    /* 006a96a7: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a96ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a96ad: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6a96b2u); f_006a8d68();
    /* 006a96b2: movzx eax, byte ptr [edi + 0x3b] */ r_eax = (u32)R8((u32)(r_edi+0x3bu));
    /* 006a96b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a96b7: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a96bc: call 0x6a8d7c */ r_esp -= 4; W32(r_esp, 0x6a96c1u); f_006a8d7c();
    /* 006a96c1: movzx eax, byte ptr [edi + 0x3c] */ r_eax = (u32)R8((u32)(r_edi+0x3cu));
    /* 006a96c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a96c6: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a96cb: call 0x6a8d90 */ r_esp -= 4; W32(r_esp, 0x6a96d0u); f_006a8d90();
    /* 006a96d0: movzx eax, byte ptr [edi + 0x3d] */ r_eax = (u32)R8((u32)(r_edi+0x3du));
    /* 006a96d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a96d5: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a96da: call 0x6a8da4 */ r_esp -= 4; W32(r_esp, 0x6a96dfu); f_006a8da4();
    /* 006a96df: movzx eax, byte ptr [edi + 0x3e] */ r_eax = (u32)R8((u32)(r_edi+0x3eu));
    /* 006a96e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a96e4: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a96e9: call 0x6a8db8 */ r_esp -= 4; W32(r_esp, 0x6a96eeu); f_006a8db8();
    /* 006a96ee: movzx eax, byte ptr [edi + 0x3f] */ r_eax = (u32)R8((u32)(r_edi+0x3fu));
    /* 006a96f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a96f3: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a96f8: call 0x6a92d4 */ r_esp -= 4; W32(r_esp, 0x6a96fdu); f_006a92d4();
    /* 006a96fd: movzx eax, byte ptr [edi + 0x40] */ r_eax = (u32)R8((u32)(r_edi+0x40u));
    /* 006a9701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9702: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9707: call 0x6a8dcc */ r_esp -= 4; W32(r_esp, 0x6a970cu); f_006a8dcc();
    /* 006a970c: movzx eax, byte ptr [edi + 0x41] */ r_eax = (u32)R8((u32)(r_edi+0x41u));
    /* 006a9710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9711: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9716: call 0x6a8de0 */ r_esp -= 4; W32(r_esp, 0x6a971bu); f_006a8de0();
    /* 006a971b: movzx eax, byte ptr [edi + 0x42] */ r_eax = (u32)R8((u32)(r_edi+0x42u));
    /* 006a971f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9720: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9725: call 0x6a8df4 */ r_esp -= 4; W32(r_esp, 0x6a972au); f_006a8df4();
    /* 006a972a: movzx eax, byte ptr [edi + 0x43] */ r_eax = (u32)R8((u32)(r_edi+0x43u));
    /* 006a972e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a972f: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9734: call 0x6a8e08 */ r_esp -= 4; W32(r_esp, 0x6a9739u); f_006a8e08();
    /* 006a9739: movzx eax, byte ptr [edi + 0x44] */ r_eax = (u32)R8((u32)(r_edi+0x44u));
    /* 006a973d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a973e: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9743: call 0x6a8e1c */ r_esp -= 4; W32(r_esp, 0x6a9748u); f_006a8e1c();
    /* 006a9748: movzx eax, byte ptr [edi + 0x45] */ r_eax = (u32)R8((u32)(r_edi+0x45u));
    /* 006a974c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a974d: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9752: call 0x6a8e30 */ r_esp -= 4; W32(r_esp, 0x6a9757u); f_006a8e30();
    /* 006a9757: movzx eax, byte ptr [edi + 0x46] */ r_eax = (u32)R8((u32)(r_edi+0x46u));
    /* 006a975b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a975c: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9761: call 0x6a8e44 */ r_esp -= 4; W32(r_esp, 0x6a9766u); f_006a8e44();
    /* 006a9766: movsx eax, byte ptr [edi + 0x47] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x47u));
    /* 006a976a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a976b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a9770: call 0x6a8e80 */ r_esp -= 4; W32(r_esp, 0x6a9775u); f_006a8e80();
    /* 006a9775: movzx eax, byte ptr [edi + 0x48] */ r_eax = (u32)R8((u32)(r_edi+0x48u));
    /* 006a9779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a977a: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006a977f: call 0x6a8e58 */ r_esp -= 4; W32(r_esp, 0x6a9784u); f_006a8e58();
    /* 006a9784: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a978a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a978fu); f_0068d5a8();
    /* 006a978f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9792: je 0x6a9799 */ if (fZ) goto L_006a9799;
L_006a9794:; BB(0x006a9794);
    /* 006a9794: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6a9799u); f_00690674();
L_006a9799:; BB(0x006a9799);
    /* 006a9799: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a979a: ret  */ FN_RET(0x006a96a0); r_esp += 4; return;
}

void f_006a979c(void) /* sub_6A979C */
{
    FN_ENTER(0x006a979c);
    /* 006a979c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a979d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a979f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a97a1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a97a6u); f_006a97c0();
    /* 006a97a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a97a8: je 0x6a97b3 */ if (fZ) goto L_006a97b3;
L_006a97aa:; BB(0x006a97aa);
    /* 006a97aa: movzx eax, byte ptr [esi + 4] */ r_eax = (u32)R8((u32)(r_esi+0x4u));
    /* 006a97ae: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a97b1: jle 0x6a97b7 */ if ((fZ||fS!=fO)) goto L_006a97b7;
L_006a97b3:; BB(0x006a97b3);
    /* 006a97b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a97b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a97b6: ret  */ FN_RET(0x006a979c); r_esp += 4; return;
L_006a97b7:; BB(0x006a97b7);
    /* 006a97b7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a97bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a97bd: ret  */ FN_RET(0x006a979c); r_esp += 4; return;
}

void f_006a97c0(void) /* sub_6A97C0 */
{
    FN_ENTER(0x006a97c0);
    /* 006a97c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a97c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a97c3: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 006a97c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a97c8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a97cdu); f_007b4d18();
    /* 006a97cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a97ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a97d0: je 0x6a97f4 */ if (fZ) goto L_006a97f4;
L_006a97d2:; BB(0x006a97d2);
    /* 006a97d2: mov eax, dword ptr [0xaaecf0] */ r_eax = R32((u32)(0xaaecf0u));
    /* 006a97d7: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006a97db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a97dd: jne 0x6a97ee */ if (!fZ) goto L_006a97ee;
L_006a97df:; BB(0x006a97df);
    /* 006a97df: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a97e5: jne 0x6a97ee */ if (!fZ) goto L_006a97ee;
L_006a97e7:; BB(0x006a97e7);
    /* 006a97e7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a97ec: jmp 0x6a97f0 */ goto L_006a97f0;
L_006a97ee:; BB(0x006a97ee);
    /* 006a97ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a97f0:; BB(0x006a97f0);
    /* 006a97f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a97f2: je 0x6a97f8 */ if (fZ) goto L_006a97f8;
L_006a97f4:; BB(0x006a97f4);
    /* 006a97f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a97f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a97f7: ret  */ FN_RET(0x006a97c0); r_esp += 4; return;
L_006a97f8:; BB(0x006a97f8);
    /* 006a97f8: mov eax, 1 */ r_eax = 0x1u;
    /* 006a97fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a97fe: ret  */ FN_RET(0x006a97c0); r_esp += 4; return;
}

void f_006a9800(void) /* sub_6A9800 */
{
    FN_ENTER(0x006a9800);
    /* 006a9800: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9801: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9803: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 006a9807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9808: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a980du); f_007b4d18();
    /* 006a980d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a980e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9810: je 0x6a9821 */ if (fZ) goto L_006a9821;
L_006a9812:; BB(0x006a9812);
    /* 006a9812: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 006a9816: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9818: jl 0x6a9821 */ if ((fS!=fO)) goto L_006a9821;
L_006a981a:; BB(0x006a981a);
    /* 006a981a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a981f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9820: ret  */ FN_RET(0x006a9800); r_esp += 4; return;
L_006a9821:; BB(0x006a9821);
    /* 006a9821: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9823: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9824: ret  */ FN_RET(0x006a9800); r_esp += 4; return;
}

void f_006a9828(void) /* sub_6A9828 */
{
    FN_ENTER(0x006a9828);
    /* 006a9828: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9829: mov esi, ecx */ r_esi = r_ecx;
    /* 006a982b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a982d: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9832u); f_006a97c0();
    /* 006a9832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9834: je 0x6a9842 */ if (fZ) goto L_006a9842;
L_006a9836:; BB(0x006a9836);
    /* 006a9836: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a9839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a983b: jl 0x6a9842 */ if ((fS!=fO)) goto L_006a9842;
L_006a983d:; BB(0x006a983d);
    /* 006a983d: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9840: jl 0x6a9846 */ if ((fS!=fO)) goto L_006a9846;
L_006a9842:; BB(0x006a9842);
    /* 006a9842: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9844: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9845: ret  */ FN_RET(0x006a9828); r_esp += 4; return;
L_006a9846:; BB(0x006a9846);
    /* 006a9846: mov eax, 1 */ r_eax = 0x1u;
    /* 006a984b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a984c: ret  */ FN_RET(0x006a9828); r_esp += 4; return;
}

void f_006a9850(void) /* sub_6A9850 */
{
    FN_ENTER(0x006a9850);
    /* 006a9850: mov eax, dword ptr [0xaaecf0] */ r_eax = R32((u32)(0xaaecf0u));
    /* 006a9855: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 006a9859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a985b: jne 0x6a986c */ if (!fZ) goto L_006a986c;
L_006a985d:; BB(0x006a985d);
    /* 006a985d: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9863: jne 0x6a986c */ if (!fZ) goto L_006a986c;
L_006a9865:; BB(0x006a9865);
    /* 006a9865: mov eax, 1 */ r_eax = 0x1u;
    /* 006a986a: jmp 0x6a986e */ goto L_006a986e;
L_006a986c:; BB(0x006a986c);
    /* 006a986c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a986e:; BB(0x006a986e);
    /* 006a986e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9870: jne 0x6a987e */ if (!fZ) goto L_006a987e;
L_006a9872:; BB(0x006a9872);
    /* 006a9872: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006a9875: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9877: jl 0x6a987e */ if ((fS!=fO)) goto L_006a987e;
L_006a9879:; BB(0x006a9879);
    /* 006a9879: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a987c: jle 0x6a9881 */ if ((fZ||fS!=fO)) goto L_006a9881;
L_006a987e:; BB(0x006a987e);
    /* 006a987e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9880: ret  */ FN_RET(0x006a9850); r_esp += 4; return;
L_006a9881:; BB(0x006a9881);
    /* 006a9881: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9886: ret  */ FN_RET(0x006a9850); r_esp += 4; return;
}

void f_006a9888(void) /* sub_6A9888 */
{
    FN_ENTER(0x006a9888);
    /* 006a9888: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9889: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a988b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a988d: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9892u); f_006a97c0();
    /* 006a9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9894: je 0x6a98b4 */ if (fZ) goto L_006a98b4;
L_006a9896:; BB(0x006a9896);
    /* 006a9896: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a9899: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a989b: jl 0x6a98a2 */ if ((fS!=fO)) goto L_006a98a2;
L_006a989d:; BB(0x006a989d);
    /* 006a989d: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a98a0: jle 0x6a98a6 */ if ((fZ||fS!=fO)) goto L_006a98a6;
L_006a98a2:; BB(0x006a98a2);
    /* 006a98a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a98a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a98a5: ret  */ FN_RET(0x006a9888); r_esp += 4; return;
L_006a98a6:; BB(0x006a98a6);
    /* 006a98a6: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a98a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a98aa: call 0x7a8ba0 */ r_esp -= 4; W32(r_esp, 0x6a98afu); f_007a8ba0();
    /* 006a98af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a98b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a98b2: je 0x6a98b8 */ if (fZ) goto L_006a98b8;
L_006a98b4:; BB(0x006a98b4);
    /* 006a98b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a98b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a98b7: ret  */ FN_RET(0x006a9888); r_esp += 4; return;
L_006a98b8:; BB(0x006a98b8);
    /* 006a98b8: mov eax, 1 */ r_eax = 0x1u;
    /* 006a98bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a98be: ret  */ FN_RET(0x006a9888); r_esp += 4; return;
}

void f_006a98c0(void) /* sub_6A98C0 */
{
    FN_ENTER(0x006a98c0);
    /* 006a98c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a98c1: mov esi, ecx */ r_esi = r_ecx;
    /* 006a98c3: mov ecx, esi */ r_ecx = r_esi;
    /* 006a98c5: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a98cau); f_006a97c0();
    /* 006a98ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a98cc: je 0x6a98da */ if (fZ) goto L_006a98da;
L_006a98ce:; BB(0x006a98ce);
    /* 006a98ce: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a98d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a98d3: jl 0x6a98da */ if ((fS!=fO)) goto L_006a98da;
L_006a98d5:; BB(0x006a98d5);
    /* 006a98d5: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a98d8: jle 0x6a98de */ if ((fZ||fS!=fO)) goto L_006a98de;
L_006a98da:; BB(0x006a98da);
    /* 006a98da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a98dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a98dd: ret  */ FN_RET(0x006a98c0); r_esp += 4; return;
L_006a98de:; BB(0x006a98de);
    /* 006a98de: mov eax, 1 */ r_eax = 0x1u;
    /* 006a98e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a98e4: ret  */ FN_RET(0x006a98c0); r_esp += 4; return;
}

void f_006a98e8(void) /* sub_6A98E8 */
{
    FN_ENTER(0x006a98e8);
    /* 006a98e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a98e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a98ea: mov esi, ecx */ r_esi = r_ecx;
    /* 006a98ec: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 006a98f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a98f1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a98f6u); f_0068d5a8();
    /* 006a98f6: mov ebp, eax */ r_ebp = r_eax;
    /* 006a98f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a98fb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a98fd: je 0x6a995f */ if (fZ) goto L_006a995f;
L_006a98ff:; BB(0x006a98ff);
    /* 006a98ff: mov edx, dword ptr [0xaaecf0] */ r_edx = R32((u32)(0xaaecf0u));
    /* 006a9905: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 006a9909: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a990b: jne 0x6a991c */ if (!fZ) goto L_006a991c;
L_006a990d:; BB(0x006a990d);
    /* 006a990d: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9913: jne 0x6a991c */ if (!fZ) goto L_006a991c;
L_006a9915:; BB(0x006a9915);
    /* 006a9915: mov edx, 1 */ r_edx = 0x1u;
    /* 006a991a: jmp 0x6a991e */ goto L_006a991e;
L_006a991c:; BB(0x006a991c);
    /* 006a991c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a991e:; BB(0x006a991e);
    /* 006a991e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9920: je 0x6a9927 */ if (fZ) goto L_006a9927;
L_006a9922:; BB(0x006a9922);
    /* 006a9922: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9924: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9925: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9926: ret  */ FN_RET(0x006a98e8); r_esp += 4; return;
L_006a9927:; BB(0x006a9927);
    /* 006a9927: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 006a992b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a992e: je 0x6a9934 */ if (fZ) goto L_006a9934;
L_006a9930:; BB(0x006a9930);
    /* 006a9930: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9932: jl 0x6a995f */ if ((fS!=fO)) goto L_006a995f;
L_006a9934:; BB(0x006a9934);
    /* 006a9934: call 0x6a70ec */ r_esp -= 4; W32(r_esp, 0x6a9939u); f_006a70ec();
    /* 006a9939: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 006a993d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a993f: jge 0x6a995f */ if ((fS==fO)) goto L_006a995f;
L_006a9941:; BB(0x006a9941);
    /* 006a9941: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 006a9944: fcomp dword ptr [0x9669b8] */ fx_compare(ST(0), R_F32((u32)(0x9669b8u))); FPOP();
    /* 006a994a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a994c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a994d: jb 0x6a995f */ if (fC) goto L_006a995f;
L_006a994f:; BB(0x006a994f);
    /* 006a994f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9950: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a9952: call 0x7aac0c */ r_esp -= 4; W32(r_esp, 0x6a9957u); f_007aac0c();
    /* 006a9957: fcomp dword ptr [esi + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xcu))); FPOP();
    /* 006a995a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a995c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a995d: ja 0x6a9964 */ if ((!fC&&!fZ)) goto L_006a9964;
L_006a995f:; BB(0x006a995f);
    /* 006a995f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9962: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9963: ret  */ FN_RET(0x006a98e8); r_esp += 4; return;
L_006a9964:; BB(0x006a9964);
    /* 006a9964: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a996a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a996b: ret  */ FN_RET(0x006a98e8); r_esp += 4; return;
}

void f_006a996c(void) /* sub_6A996C */
{
    FN_ENTER(0x006a996c);
    /* 006a996c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a996d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a996f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a9971: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9976u); f_006a97c0();
    /* 006a9976: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9978: je 0x6a9986 */ if (fZ) goto L_006a9986;
L_006a997a:; BB(0x006a997a);
    /* 006a997a: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006a997d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a997f: jl 0x6a9986 */ if ((fS!=fO)) goto L_006a9986;
L_006a9981:; BB(0x006a9981);
    /* 006a9981: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9984: jl 0x6a998a */ if ((fS!=fO)) goto L_006a998a;
L_006a9986:; BB(0x006a9986);
    /* 006a9986: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9988: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9989: ret  */ FN_RET(0x006a996c); r_esp += 4; return;
L_006a998a:; BB(0x006a998a);
    /* 006a998a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a998f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9990: ret  */ FN_RET(0x006a996c); r_esp += 4; return;
}

void f_006a9994(void) /* sub_6A9994 */
{
    FN_ENTER(0x006a9994);
    /* 006a9994: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9995: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9997: mov ecx, esi */ r_ecx = r_esi;
    /* 006a9999: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a999eu); f_006a97c0();
    /* 006a999e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a99a0: je 0x6a99ae */ if (fZ) goto L_006a99ae;
L_006a99a2:; BB(0x006a99a2);
    /* 006a99a2: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a99a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a99a7: jl 0x6a99ae */ if ((fS!=fO)) goto L_006a99ae;
L_006a99a9:; BB(0x006a99a9);
    /* 006a99a9: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a99ac: jle 0x6a99b2 */ if ((fZ||fS!=fO)) goto L_006a99b2;
L_006a99ae:; BB(0x006a99ae);
    /* 006a99ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a99b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a99b1: ret  */ FN_RET(0x006a9994); r_esp += 4; return;
L_006a99b2:; BB(0x006a99b2);
    /* 006a99b2: mov eax, 1 */ r_eax = 0x1u;
    /* 006a99b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a99b8: ret  */ FN_RET(0x006a9994); r_esp += 4; return;
}

void f_006a99bc(void) /* sub_6A99BC */
{
    FN_ENTER(0x006a99bc);
    /* 006a99bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a99bd: mov edi, ecx */ r_edi = r_ecx;
    /* 006a99bf: mov ecx, edi */ r_ecx = r_edi;
    /* 006a99c1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a99c6u); f_006a97c0();
    /* 006a99c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a99c8: je 0x6a99f1 */ if (fZ) goto L_006a99f1;
L_006a99ca:; BB(0x006a99ca);
    /* 006a99ca: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 006a99ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a99d0: jl 0x6a99f1 */ if ((fS!=fO)) goto L_006a99f1;
L_006a99d2:; BB(0x006a99d2);
    /* 006a99d2: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 006a99d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a99d8: jl 0x6a99df */ if ((fS!=fO)) goto L_006a99df;
L_006a99da:; BB(0x006a99da);
    /* 006a99da: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a99dd: jle 0x6a99e3 */ if ((fZ||fS!=fO)) goto L_006a99e3;
L_006a99df:; BB(0x006a99df);
    /* 006a99df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a99e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a99e2: ret  */ FN_RET(0x006a99bc); r_esp += 4; return;
L_006a99e3:; BB(0x006a99e3);
    /* 006a99e3: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a99e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a99e7: call 0x7a8ba0 */ r_esp -= 4; W32(r_esp, 0x6a99ecu); f_007a8ba0();
    /* 006a99ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a99ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a99ef: je 0x6a99f5 */ if (fZ) goto L_006a99f5;
L_006a99f1:; BB(0x006a99f1);
    /* 006a99f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a99f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a99f4: ret  */ FN_RET(0x006a99bc); r_esp += 4; return;
L_006a99f5:; BB(0x006a99f5);
    /* 006a99f5: mov eax, 1 */ r_eax = 0x1u;
    /* 006a99fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a99fb: ret  */ FN_RET(0x006a99bc); r_esp += 4; return;
}

void f_006a99fc(void) /* sub_6A99FC */
{
    FN_ENTER(0x006a99fc);
    /* 006a99fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a99fd: mov edi, ecx */ r_edi = r_ecx;
    /* 006a99ff: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9a01: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9a06u); f_006a97c0();
    /* 006a9a06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9a08: jne 0x6a9a0e */ if (!fZ) goto L_006a9a0e;
L_006a9a0a:; BB(0x006a9a0a);
    /* 006a9a0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9a0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9a0d: ret  */ FN_RET(0x006a99fc); r_esp += 4; return;
L_006a9a0e:; BB(0x006a9a0e);
    /* 006a9a0e: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 006a9a11: call 0x78b26c */ r_esp -= 4; W32(r_esp, 0x6a9a16u); f_0078b26c();
    /* 006a9a16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 006a9a18: jne 0x6a9a28 */ if (!fZ) goto L_006a9a28;
L_006a9a1a:; BB(0x006a9a1a);
    /* 006a9a1a: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 006a9a1d: fcomp dword ptr [0x9669b4] */ fx_compare(ST(0), R_F32((u32)(0x9669b4u))); FPOP();
    /* 006a9a23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a9a25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a9a26: jae 0x6a9a2c */ if (!fC) goto L_006a9a2c;
L_006a9a28:; BB(0x006a9a28);
    /* 006a9a28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9a2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9a2b: ret  */ FN_RET(0x006a99fc); r_esp += 4; return;
L_006a9a2c:; BB(0x006a9a2c);
    /* 006a9a2c: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9a31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9a32: ret  */ FN_RET(0x006a99fc); r_esp += 4; return;
}

void f_006a9a34(void) /* sub_6A9A34 */
{
    FN_ENTER(0x006a9a34);
    /* 006a9a34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9a35: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9a37: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a9a3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9a3c: jl 0x6a9a6c */ if ((fS!=fO)) goto L_006a9a6c;
L_006a9a3e:; BB(0x006a9a3e);
    /* 006a9a3e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9a41: jge 0x6a9a6c */ if ((fS==fO)) goto L_006a9a6c;
L_006a9a43:; BB(0x006a9a43);
    /* 006a9a43: movsx eax, word ptr [esi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 006a9a47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9a49: jl 0x6a9a6c */ if ((fS!=fO)) goto L_006a9a6c;
L_006a9a4b:; BB(0x006a9a4b);
    /* 006a9a4b: movzx eax, word ptr [esi + 0xa] */ r_eax = (u32)R16((u32)(r_esi+0xau));
    /* 006a9a4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9a50: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a9a55u); f_007b4d18();
    /* 006a9a55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9a56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9a58: je 0x6a9a6c */ if (fZ) goto L_006a9a6c;
L_006a9a5a:; BB(0x006a9a5a);
    /* 006a9a5a: movzx eax, word ptr [esi + 0xa] */ r_eax = (u32)R16((u32)(r_esi+0xau));
    /* 006a9a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9a5f: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x6a9a64u); f_007ba9ec();
    /* 006a9a64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9a65: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a9a68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9a6a: je 0x6a9a70 */ if (fZ) goto L_006a9a70;
L_006a9a6c:; BB(0x006a9a6c);
    /* 006a9a6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9a6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9a6f: ret  */ FN_RET(0x006a9a34); r_esp += 4; return;
L_006a9a70:; BB(0x006a9a70);
    /* 006a9a70: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9a75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9a76: ret  */ FN_RET(0x006a9a34); r_esp += 4; return;
}

void f_006a9a78(void) /* sub_6A9A78 */
{
    FN_ENTER(0x006a9a78);
    /* 006a9a78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a9a79: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a9a7b: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 006a9a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9a80: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a9a85u); f_007b4d18();
    /* 006a9a85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9a88: je 0x6a9acf */ if (fZ) goto L_006a9acf;
L_006a9a8a:; BB(0x006a9a8a);
    /* 006a9a8a: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 006a9a8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9a90: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9a92:; BB(0x006a9a92);
    /* 006a9a92: movsx eax, word ptr [ebp + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 006a9a96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9a98: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9a9a:; BB(0x006a9a9a);
    /* 006a9a9a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 006a9a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9aa0: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9aa2:; BB(0x006a9aa2);
    /* 006a9aa2: movsx eax, word ptr [ebp + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 006a9aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9aa8: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9aaa:; BB(0x006a9aaa);
    /* 006a9aaa: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 006a9aae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9ab0: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9ab2:; BB(0x006a9ab2);
    /* 006a9ab2: movsx eax, word ptr [ebp + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xeu));
    /* 006a9ab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9ab8: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9aba:; BB(0x006a9aba);
    /* 006a9aba: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 006a9abe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9ac0: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9ac2:; BB(0x006a9ac2);
    /* 006a9ac2: movsx eax, word ptr [ebp + 0x12] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x12u));
    /* 006a9ac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9ac8: jl 0x6a9acf */ if ((fS!=fO)) goto L_006a9acf;
L_006a9aca:; BB(0x006a9aca);
    /* 006a9aca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9acd: jl 0x6a9ad3 */ if ((fS!=fO)) goto L_006a9ad3;
L_006a9acf:; BB(0x006a9acf);
    /* 006a9acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ad1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9ad2: ret  */ FN_RET(0x006a9a78); r_esp += 4; return;
L_006a9ad3:; BB(0x006a9ad3);
    /* 006a9ad3: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9ad9: ret  */ FN_RET(0x006a9a78); r_esp += 4; return;
}

void f_006a9adc(void) /* sub_6A9ADC */
{
    FN_ENTER(0x006a9adc);
    /* 006a9adc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9add: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9adf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a9ae1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9ae6u); f_006a97c0();
    /* 006a9ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9ae8: jne 0x6a9aee */ if (!fZ) goto L_006a9aee;
L_006a9aea:; BB(0x006a9aea);
    /* 006a9aea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9aec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9aed: ret  */ FN_RET(0x006a9adc); r_esp += 4; return;
L_006a9aee:; BB(0x006a9aee);
    /* 006a9aee: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 006a9af2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9af3: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x6a9af8u); f_007ba9ec();
    /* 006a9af8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9af9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a9afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9afe: je 0x6a9b04 */ if (fZ) goto L_006a9b04;
L_006a9b00:; BB(0x006a9b00);
    /* 006a9b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9b02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9b03: ret  */ FN_RET(0x006a9adc); r_esp += 4; return;
L_006a9b04:; BB(0x006a9b04);
    /* 006a9b04: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9b09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9b0a: ret  */ FN_RET(0x006a9adc); r_esp += 4; return;
}

void f_006a9b0c(void) /* sub_6A9B0C */
{
    FN_ENTER(0x006a9b0c);
    /* 006a9b0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9b0d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9b0f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a9b11: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9b16u); f_006a97c0();
    /* 006a9b16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9b18: je 0x6a9b29 */ if (fZ) goto L_006a9b29;
L_006a9b1a:; BB(0x006a9b1a);
    /* 006a9b1a: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 006a9b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9b20: jl 0x6a9b29 */ if ((fS!=fO)) goto L_006a9b29;
L_006a9b22:; BB(0x006a9b22);
    /* 006a9b22: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9b27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9b28: ret  */ FN_RET(0x006a9b0c); r_esp += 4; return;
L_006a9b29:; BB(0x006a9b29);
    /* 006a9b29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9b2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9b2c: ret  */ FN_RET(0x006a9b0c); r_esp += 4; return;
}

void f_006a9b30(void) /* sub_6A9B30 */
{
    FN_ENTER(0x006a9b30);
    /* 006a9b30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9b31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a9b33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9b35: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9b3au); f_006a97c0();
    /* 006a9b3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 006a9b3c: je 0x6a9b5b */ if (fZ) goto L_006a9b5b;
L_006a9b3e:; BB(0x006a9b3e);
    /* 006a9b3e: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 006a9b41: fcom dword ptr [0x9669b0] */ fx_compare(ST(0), R_F32((u32)(0x9669b0u))); 
    /* 006a9b47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a9b49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a9b4a: jae 0x6a9b50 */ if (!fC) goto L_006a9b50;
L_006a9b4c:; BB(0x006a9b4c);
    /* 006a9b4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a9b4e: jmp 0x6a9b5b */ goto L_006a9b5b;
L_006a9b50:; BB(0x006a9b50);
    /* 006a9b50: fcomp dword ptr [0x9669ac] */ fx_compare(ST(0), R_F32((u32)(0x9669acu))); FPOP();
    /* 006a9b56: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a9b58: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a9b59: jbe 0x6a9b5f */ if ((fC||fZ)) goto L_006a9b5f;
L_006a9b5b:; BB(0x006a9b5b);
    /* 006a9b5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9b5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9b5e: ret  */ FN_RET(0x006a9b30); r_esp += 4; return;
L_006a9b5f:; BB(0x006a9b5f);
    /* 006a9b5f: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9b64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9b65: ret  */ FN_RET(0x006a9b30); r_esp += 4; return;
}

void f_006a9b68(void) /* sub_6A9B68 */
{
    FN_ENTER(0x006a9b68);
    /* 006a9b68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9b69: mov edi, ecx */ r_edi = r_ecx;
    /* 006a9b6b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9b6d: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9b72u); f_006a97c0();
    /* 006a9b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9b74: je 0x6a9b9e */ if (fZ) goto L_006a9b9e;
L_006a9b76:; BB(0x006a9b76);
    /* 006a9b76: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 006a9b7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9b7c: jl 0x6a9b9e */ if ((fS!=fO)) goto L_006a9b9e;
L_006a9b7e:; BB(0x006a9b7e);
    /* 006a9b7e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9b81: jge 0x6a9b9e */ if ((fS==fO)) goto L_006a9b9e;
L_006a9b83:; BB(0x006a9b83);
    /* 006a9b83: movsx eax, word ptr [edi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 006a9b87: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9b8a: jle 0x6a9b90 */ if ((fZ||fS!=fO)) goto L_006a9b90;
L_006a9b8c:; BB(0x006a9b8c);
    /* 006a9b8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9b8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9b8f: ret  */ FN_RET(0x006a9b68); r_esp += 4; return;
L_006a9b90:; BB(0x006a9b90);
    /* 006a9b90: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a9b93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9b94: call 0x7a8ba0 */ r_esp -= 4; W32(r_esp, 0x6a9b99u); f_007a8ba0();
    /* 006a9b99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9b9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9b9c: je 0x6a9ba2 */ if (fZ) goto L_006a9ba2;
L_006a9b9e:; BB(0x006a9b9e);
    /* 006a9b9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ba0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9ba1: ret  */ FN_RET(0x006a9b68); r_esp += 4; return;
L_006a9ba2:; BB(0x006a9ba2);
    /* 006a9ba2: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9ba7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9ba8: ret  */ FN_RET(0x006a9b68); r_esp += 4; return;
}

void f_006a9bac(void) /* sub_6A9BAC */
{
    FN_ENTER(0x006a9bac);
    /* 006a9bac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9bad: mov edi, ecx */ r_edi = r_ecx;
    /* 006a9baf: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9bb1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9bb6u); f_006a97c0();
    /* 006a9bb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9bb8: jne 0x6a9bbe */ if (!fZ) goto L_006a9bbe;
L_006a9bba:; BB(0x006a9bba);
    /* 006a9bba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9bbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9bbd: ret  */ FN_RET(0x006a9bac); r_esp += 4; return;
L_006a9bbe:; BB(0x006a9bbe);
    /* 006a9bbe: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a9bc1: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9bc3: call 0x78b26c */ r_esp -= 4; W32(r_esp, 0x6a9bc8u); f_0078b26c();
    /* 006a9bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9bca: je 0x6a9bd0 */ if (fZ) goto L_006a9bd0;
L_006a9bcc:; BB(0x006a9bcc);
    /* 006a9bcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9bce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9bcf: ret  */ FN_RET(0x006a9bac); r_esp += 4; return;
L_006a9bd0:; BB(0x006a9bd0);
    /* 006a9bd0: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9bd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9bd6: ret  */ FN_RET(0x006a9bac); r_esp += 4; return;
}

void f_006a9bd8(void) /* sub_6A9BD8 */
{
    FN_ENTER(0x006a9bd8);
    /* 006a9bd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9bd9: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9bdb: mov ecx, esi */ r_ecx = r_esi;
    /* 006a9bdd: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9be2u); f_006a97c0();
    /* 006a9be2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9be4: je 0x6a9bf3 */ if (fZ) goto L_006a9bf3;
L_006a9be6:; BB(0x006a9be6);
    /* 006a9be6: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 006a9bea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9bec: jl 0x6a9bf3 */ if ((fS!=fO)) goto L_006a9bf3;
L_006a9bee:; BB(0x006a9bee);
    /* 006a9bee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9bf1: jl 0x6a9bf7 */ if ((fS!=fO)) goto L_006a9bf7;
L_006a9bf3:; BB(0x006a9bf3);
    /* 006a9bf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9bf5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9bf6: ret  */ FN_RET(0x006a9bd8); r_esp += 4; return;
L_006a9bf7:; BB(0x006a9bf7);
    /* 006a9bf7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9bfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9bfd: ret  */ FN_RET(0x006a9bd8); r_esp += 4; return;
}

void f_006a9c00(void) /* sub_6A9C00 */
{
    FN_ENTER(0x006a9c00);
    /* 006a9c00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9c01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a9c03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9c05: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9c0au); f_006a97c0();
    /* 006a9c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9c0c: jne 0x6a9c12 */ if (!fZ) goto L_006a9c12;
L_006a9c0e:; BB(0x006a9c0e);
    /* 006a9c0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9c10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9c11: ret  */ FN_RET(0x006a9c00); r_esp += 4; return;
L_006a9c12:; BB(0x006a9c12);
    /* 006a9c12: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a9c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9c17: jl 0x6a9c25 */ if ((fS!=fO)) goto L_006a9c25;
L_006a9c19:; BB(0x006a9c19);
    /* 006a9c19: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9c1c: jg 0x6a9c25 */ if ((!fZ&&fS==fO)) goto L_006a9c25;
L_006a9c1e:; BB(0x006a9c1e);
    /* 006a9c1e: mov edx, 1 */ r_edx = 0x1u;
    /* 006a9c23: jmp 0x6a9c27 */ goto L_006a9c27;
L_006a9c25:; BB(0x006a9c25);
    /* 006a9c25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a9c27:; BB(0x006a9c27);
    /* 006a9c27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9c29: je 0x6a9c0e */ if (fZ) goto L_006a9c0e;
L_006a9c2b:; BB(0x006a9c2b);
    /* 006a9c2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a9c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9c2f: jle 0x6a9c41 */ if ((fZ||fS!=fO)) goto L_006a9c41;
L_006a9c31:; BB(0x006a9c31);
    /* 006a9c31: movsx ecx, word ptr [ebx + edx*4 + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_edx*4+0xau));
    /* 006a9c36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a9c39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9c3b: jl 0x6a9c0e */ if ((fS!=fO)) goto L_006a9c0e;
L_006a9c3d:; BB(0x006a9c3d);
    /* 006a9c3d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9c3f: jl 0x6a9c31 */ if ((fS!=fO)) goto L_006a9c31;
L_006a9c41:; BB(0x006a9c41);
    /* 006a9c41: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9c46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9c47: ret  */ FN_RET(0x006a9c00); r_esp += 4; return;
}

void f_006a9c48(void) /* sub_6A9C48 */
{
    FN_ENTER(0x006a9c48);
    /* 006a9c48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9c49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a9c4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9c4d: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9c52u); f_006a97c0();
    /* 006a9c52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9c54: jne 0x6a9c5a */ if (!fZ) goto L_006a9c5a;
L_006a9c56:; BB(0x006a9c56);
    /* 006a9c56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9c58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9c59: ret  */ FN_RET(0x006a9c48); r_esp += 4; return;
L_006a9c5a:; BB(0x006a9c5a);
    /* 006a9c5a: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 006a9c5d: call 0x6a9c8c */ r_esp -= 4; W32(r_esp, 0x6a9c62u); f_006a9c8c();
    /* 006a9c62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9c64: je 0x6a9c56 */ if (fZ) goto L_006a9c56;
L_006a9c66:; BB(0x006a9c66);
    /* 006a9c66: movsx eax, byte ptr [ebx + 7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x7u));
    /* 006a9c6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a9c6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9c6e: jle 0x6a9c80 */ if ((fZ||fS!=fO)) goto L_006a9c80;
L_006a9c70:; BB(0x006a9c70);
    /* 006a9c70: movsx ecx, word ptr [ebx + edx*4 + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_edx*4+0xau));
    /* 006a9c75: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a9c78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9c7a: jl 0x6a9c87 */ if ((fS!=fO)) goto L_006a9c87;
L_006a9c7c:; BB(0x006a9c7c);
    /* 006a9c7c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9c7e: jl 0x6a9c70 */ if ((fS!=fO)) goto L_006a9c70;
L_006a9c80:; BB(0x006a9c80);
    /* 006a9c80: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9c85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9c86: ret  */ FN_RET(0x006a9c48); r_esp += 4; return;
L_006a9c87:; BB(0x006a9c87);
    /* 006a9c87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9c89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9c8a: ret  */ FN_RET(0x006a9c48); r_esp += 4; return;
}

void f_006a9c8c(void) /* sub_6A9C8C */
{
    FN_ENTER(0x006a9c8c);
    /* 006a9c8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a9c8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a9c8f: movsx eax, byte ptr [ebp] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 006a9c93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9c94: call 0x6acf48 */ r_esp -= 4; W32(r_esp, 0x6a9c99u); f_006acf48();
    /* 006a9c99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9c9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9c9c: je 0x6a9cb3 */ if (fZ) goto L_006a9cb3;
L_006a9c9e:; BB(0x006a9c9e);
    /* 006a9c9e: movsx eax, byte ptr [ebp + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 006a9ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9ca4: jl 0x6a9cb3 */ if ((fS!=fO)) goto L_006a9cb3;
L_006a9ca6:; BB(0x006a9ca6);
    /* 006a9ca6: movsx eax, byte ptr [ebp + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x3u));
    /* 006a9caa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9cac: jl 0x6a9cb3 */ if ((fS!=fO)) goto L_006a9cb3;
L_006a9cae:; BB(0x006a9cae);
    /* 006a9cae: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9cb1: jle 0x6a9cb7 */ if ((fZ||fS!=fO)) goto L_006a9cb7;
L_006a9cb3:; BB(0x006a9cb3);
    /* 006a9cb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9cb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9cb6: ret  */ FN_RET(0x006a9c8c); r_esp += 4; return;
L_006a9cb7:; BB(0x006a9cb7);
    /* 006a9cb7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9cbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9cbd: ret  */ FN_RET(0x006a9c8c); r_esp += 4; return;
}

void f_006a9cc0(void) /* sub_6A9CC0 */
{
    FN_ENTER(0x006a9cc0);
    /* 006a9cc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9cc1: mov edi, ecx */ r_edi = r_ecx;
    /* 006a9cc3: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9cc5: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9ccau); f_006a97c0();
    /* 006a9cca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9ccc: jne 0x6a9cd2 */ if (!fZ) goto L_006a9cd2;
L_006a9cce:; BB(0x006a9cce);
    /* 006a9cce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9cd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9cd1: ret  */ FN_RET(0x006a9cc0); r_esp += 4; return;
L_006a9cd2:; BB(0x006a9cd2);
    /* 006a9cd2: movzx eax, byte ptr [edi + 4] */ r_eax = (u32)R8((u32)(r_edi+0x4u));
    /* 006a9cd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9cd7: call 0x6ad144 */ r_esp -= 4; W32(r_esp, 0x6a9cdcu); f_006ad144();
    /* 006a9cdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9cdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9cdf: jne 0x6a9ce5 */ if (!fZ) goto L_006a9ce5;
L_006a9ce1:; BB(0x006a9ce1);
    /* 006a9ce1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ce3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9ce4: ret  */ FN_RET(0x006a9cc0); r_esp += 4; return;
L_006a9ce5:; BB(0x006a9ce5);
    /* 006a9ce5: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9cea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9ceb: ret  */ FN_RET(0x006a9cc0); r_esp += 4; return;
}

void f_006a9cec(void) /* sub_6A9CEC */
{
    FN_ENTER(0x006a9cec);
    /* 006a9cec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9ced: mov edi, ecx */ r_edi = r_ecx;
    /* 006a9cef: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9cf1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9cf6u); f_006a97c0();
    /* 006a9cf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9cf8: jne 0x6a9cfe */ if (!fZ) goto L_006a9cfe;
L_006a9cfa:; BB(0x006a9cfa);
    /* 006a9cfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9cfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9cfd: ret  */ FN_RET(0x006a9cec); r_esp += 4; return;
L_006a9cfe:; BB(0x006a9cfe);
    /* 006a9cfe: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 006a9d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9d03: call 0x6acf48 */ r_esp -= 4; W32(r_esp, 0x6a9d08u); f_006acf48();
    /* 006a9d08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9d09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d0b: jne 0x6a9d11 */ if (!fZ) goto L_006a9d11;
L_006a9d0d:; BB(0x006a9d0d);
    /* 006a9d0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9d10: ret  */ FN_RET(0x006a9cec); r_esp += 4; return;
L_006a9d11:; BB(0x006a9d11);
    /* 006a9d11: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9d16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9d17: ret  */ FN_RET(0x006a9cec); r_esp += 4; return;
}

void f_006a9d18(void) /* sub_6A9D18 */
{
    FN_ENTER(0x006a9d18);
    /* 006a9d18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9d19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a9d1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9d1d: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9d22u); f_006a97c0();
    /* 006a9d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9d24: jne 0x6a9d2a */ if (!fZ) goto L_006a9d2a;
L_006a9d26:; BB(0x006a9d26);
    /* 006a9d26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9d29: ret  */ FN_RET(0x006a9d18); r_esp += 4; return;
L_006a9d2a:; BB(0x006a9d2a);
    /* 006a9d2a: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 006a9d2d: call 0x6a9d5c */ r_esp -= 4; W32(r_esp, 0x6a9d32u); f_006a9d5c();
    /* 006a9d32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9d34: je 0x6a9d26 */ if (fZ) goto L_006a9d26;
L_006a9d36:; BB(0x006a9d36);
    /* 006a9d36: movsx eax, word ptr [ebx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 006a9d3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a9d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d3e: jle 0x6a9d50 */ if ((fZ||fS!=fO)) goto L_006a9d50;
L_006a9d40:; BB(0x006a9d40);
    /* 006a9d40: movsx ecx, word ptr [ebx + edx*4 + 0xe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_edx*4+0xeu));
    /* 006a9d45: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a9d48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9d4a: jl 0x6a9d57 */ if ((fS!=fO)) goto L_006a9d57;
L_006a9d4c:; BB(0x006a9d4c);
    /* 006a9d4c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9d4e: jl 0x6a9d40 */ if ((fS!=fO)) goto L_006a9d40;
L_006a9d50:; BB(0x006a9d50);
    /* 006a9d50: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9d55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9d56: ret  */ FN_RET(0x006a9d18); r_esp += 4; return;
L_006a9d57:; BB(0x006a9d57);
    /* 006a9d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9d5a: ret  */ FN_RET(0x006a9d18); r_esp += 4; return;
}

void f_006a9d5c(void) /* sub_6A9D5C */
{
    FN_ENTER(0x006a9d5c);
    /* 006a9d5c: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 006a9d5f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9d62: je 0x6a9d68 */ if (fZ) goto L_006a9d68;
L_006a9d64:; BB(0x006a9d64);
    /* 006a9d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9d66: jl 0x6a9d98 */ if ((fS!=fO)) goto L_006a9d98;
L_006a9d68:; BB(0x006a9d68);
    /* 006a9d68: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9d6b: jge 0x6a9d98 */ if ((fS==fO)) goto L_006a9d98;
L_006a9d6d:; BB(0x006a9d6d);
    /* 006a9d6d: movsx eax, byte ptr [ecx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 006a9d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9d73: jl 0x6a9d98 */ if ((fS!=fO)) goto L_006a9d98;
L_006a9d75:; BB(0x006a9d75);
    /* 006a9d75: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 006a9d79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9d7b: jl 0x6a9d98 */ if ((fS!=fO)) goto L_006a9d98;
L_006a9d7d:; BB(0x006a9d7d);
    /* 006a9d7d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9d80: jg 0x6a9d98 */ if ((!fZ&&fS==fO)) goto L_006a9d98;
L_006a9d82:; BB(0x006a9d82);
    /* 006a9d82: movsx eax, word ptr [ecx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 006a9d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9d88: jl 0x6a9d98 */ if ((fS!=fO)) goto L_006a9d98;
L_006a9d8a:; BB(0x006a9d8a);
    /* 006a9d8a: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 006a9d8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d90: jl 0x6a9d98 */ if ((fS!=fO)) goto L_006a9d98;
L_006a9d92:; BB(0x006a9d92);
    /* 006a9d92: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9d97: ret  */ FN_RET(0x006a9d5c); r_esp += 4; return;
L_006a9d98:; BB(0x006a9d98);
    /* 006a9d98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9d9a: ret  */ FN_RET(0x006a9d5c); r_esp += 4; return;
}

void f_006a9d9c(void) /* sub_6A9D9C */
{
    FN_ENTER(0x006a9d9c);
    /* 006a9d9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9d9d: mov edi, ecx */ r_edi = r_ecx;
    /* 006a9d9f: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9da1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9da6u); f_006a97c0();
    /* 006a9da6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9da8: je 0x6a9dc0 */ if (fZ) goto L_006a9dc0;
L_006a9daa:; BB(0x006a9daa);
    /* 006a9daa: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 006a9dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9db0: jl 0x6a9dc0 */ if ((fS!=fO)) goto L_006a9dc0;
L_006a9db2:; BB(0x006a9db2);
    /* 006a9db2: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a9db5: mov ecx, edi */ r_ecx = r_edi;
    /* 006a9db7: call 0x78b26c */ r_esp -= 4; W32(r_esp, 0x6a9dbcu); f_0078b26c();
    /* 006a9dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9dbe: je 0x6a9dc4 */ if (fZ) goto L_006a9dc4;
L_006a9dc0:; BB(0x006a9dc0);
    /* 006a9dc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9dc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9dc3: ret  */ FN_RET(0x006a9d9c); r_esp += 4; return;
L_006a9dc4:; BB(0x006a9dc4);
    /* 006a9dc4: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9dc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a9dca: ret  */ FN_RET(0x006a9d9c); r_esp += 4; return;
}

void f_006a9dcc(void) /* sub_6A9DCC */
{
    FN_ENTER(0x006a9dcc);
    /* 006a9dcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9dcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a9dcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9dd1: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9dd6u); f_006a97c0();
    /* 006a9dd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9dd8: jne 0x6a9dde */ if (!fZ) goto L_006a9dde;
L_006a9dda:; BB(0x006a9dda);
    /* 006a9dda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ddc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9ddd: ret  */ FN_RET(0x006a9dcc); r_esp += 4; return;
L_006a9dde:; BB(0x006a9dde);
    /* 006a9dde: movsx eax, word ptr [ebx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 006a9de2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9de5: je 0x6a9deb */ if (fZ) goto L_006a9deb;
L_006a9de7:; BB(0x006a9de7);
    /* 006a9de7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9de9: jl 0x6a9df8 */ if ((fS!=fO)) goto L_006a9df8;
L_006a9deb:; BB(0x006a9deb);
    /* 006a9deb: call 0x6a70ec */ r_esp -= 4; W32(r_esp, 0x6a9df0u); f_006a70ec();
    /* 006a9df0: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 006a9df4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9df6: jl 0x6a9dfc */ if ((fS!=fO)) goto L_006a9dfc;
L_006a9df8:; BB(0x006a9df8);
    /* 006a9df8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9dfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9dfb: ret  */ FN_RET(0x006a9dcc); r_esp += 4; return;
L_006a9dfc:; BB(0x006a9dfc);
    /* 006a9dfc: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9e01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9e02: ret  */ FN_RET(0x006a9dcc); r_esp += 4; return;
}

void f_006a9e04(void) /* sub_6A9E04 */
{
    FN_ENTER(0x006a9e04);
    /* 006a9e04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9e05: mov esi, ecx */ r_esi = r_ecx;
    /* 006a9e07: mov ecx, esi */ r_ecx = r_esi;
    /* 006a9e09: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9e0eu); f_006a97c0();
    /* 006a9e0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9e10: jne 0x6a9e16 */ if (!fZ) goto L_006a9e16;
L_006a9e12:; BB(0x006a9e12);
    /* 006a9e12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9e15: ret  */ FN_RET(0x006a9e04); r_esp += 4; return;
L_006a9e16:; BB(0x006a9e16);
    /* 006a9e16: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006a9e19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a9e1a: call 0x7a8ba0 */ r_esp -= 4; W32(r_esp, 0x6a9e1fu); f_007a8ba0();
    /* 006a9e1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9e20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9e22: je 0x6a9e28 */ if (fZ) goto L_006a9e28;
L_006a9e24:; BB(0x006a9e24);
    /* 006a9e24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9e27: ret  */ FN_RET(0x006a9e04); r_esp += 4; return;
L_006a9e28:; BB(0x006a9e28);
    /* 006a9e28: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a9e2b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9e2c: call 0x7a8ba0 */ r_esp -= 4; W32(r_esp, 0x6a9e31u); f_007a8ba0();
    /* 006a9e31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9e32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e34: je 0x6a9e3a */ if (fZ) goto L_006a9e3a;
L_006a9e36:; BB(0x006a9e36);
    /* 006a9e36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9e39: ret  */ FN_RET(0x006a9e04); r_esp += 4; return;
L_006a9e3a:; BB(0x006a9e3a);
    /* 006a9e3a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9e3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a9e40: ret  */ FN_RET(0x006a9e04); r_esp += 4; return;
}

void f_006a9e44(void) /* sub_6A9E44 */
{
    FN_ENTER(0x006a9e44);
    /* 006a9e44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9e45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a9e47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a9e49: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9e4eu); f_006a97c0();
    /* 006a9e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9e50: jne 0x6a9e56 */ if (!fZ) goto L_006a9e56;
L_006a9e52:; BB(0x006a9e52);
    /* 006a9e52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9e55: ret  */ FN_RET(0x006a9e44); r_esp += 4; return;
L_006a9e56:; BB(0x006a9e56);
    /* 006a9e56: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a9e59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9e5a: call 0x7a8ba0 */ r_esp -= 4; W32(r_esp, 0x6a9e5fu); f_007a8ba0();
    /* 006a9e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9e60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e62: je 0x6a9e68 */ if (fZ) goto L_006a9e68;
L_006a9e64:; BB(0x006a9e64);
    /* 006a9e64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9e67: ret  */ FN_RET(0x006a9e44); r_esp += 4; return;
L_006a9e68:; BB(0x006a9e68);
    /* 006a9e68: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9e6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9e6e: ret  */ FN_RET(0x006a9e44); r_esp += 4; return;
}

void f_006a9e70(void) /* sub_6A9E70 */
{
    FN_ENTER(0x006a9e70);
    /* 006a9e70: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9e75u); f_006a97c0();
    /* 006a9e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e77: jne 0x6a9e7c */ if (!fZ) goto L_006a9e7c;
L_006a9e79:; BB(0x006a9e79);
    /* 006a9e79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9e7b: ret  */ FN_RET(0x006a9e70); r_esp += 4; return;
L_006a9e7c:; BB(0x006a9e7c);
    /* 006a9e7c: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9e81: ret  */ FN_RET(0x006a9e70); r_esp += 4; return;
}

void f_006a9e84(void) /* sub_6A9E84 */
{
    FN_ENTER(0x006a9e84);
    /* 006a9e84: mov dword ptr [0xa947e8], 0x3f800000 */ W32((u32)(0xa947e8u), 0x3f800000u);
    /* 006a9e8e: mov dword ptr [0xa947ec], 0x41000000 */ W32((u32)(0xa947ecu), 0x41000000u);
    /* 006a9e98: mov dword ptr [0xa947f0], 0x3fc00000 */ W32((u32)(0xa947f0u), 0x3fc00000u);
    /* 006a9ea2: ret  */ FN_RET(0x006a9e84); r_esp += 4; return;
}

void f_006a9ea4(void) /* sub_6A9EA4 */
{
    FN_ENTER(0x006a9ea4);
    /* 006a9ea4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a9ea5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a9ea7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a9ea9: call 0x6a97c0 */ r_esp -= 4; W32(r_esp, 0x6a9eaeu); f_006a97c0();
    /* 006a9eae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9eb0: je 0x6a9ece */ if (fZ) goto L_006a9ece;
L_006a9eb2:; BB(0x006a9eb2);
    /* 006a9eb2: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 006a9eb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9eb8: jl 0x6a9ece */ if ((fS!=fO)) goto L_006a9ece;
L_006a9eba:; BB(0x006a9eba);
    /* 006a9eba: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a9ebd: jge 0x6a9ece */ if ((fS==fO)) goto L_006a9ece;
L_006a9ebf:; BB(0x006a9ebf);
    /* 006a9ebf: movsx eax, word ptr [ebp + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 006a9ec3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ec5: jl 0x6a9ece */ if ((fS!=fO)) goto L_006a9ece;
L_006a9ec7:; BB(0x006a9ec7);
    /* 006a9ec7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9ecc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9ecd: ret  */ FN_RET(0x006a9ea4); r_esp += 4; return;
L_006a9ece:; BB(0x006a9ece);
    /* 006a9ece: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ed0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a9ed1: ret  */ FN_RET(0x006a9ea4); r_esp += 4; return;
}

void f_006a9ed4(void) /* sub_6A9ED4 */
{
    FN_ENTER(0x006a9ed4);
    /* 006a9ed4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ed6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006a9ed8: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006a9edb: mov eax, ecx */ r_eax = r_ecx;
    /* 006a9edd: ret  */ FN_RET(0x006a9ed4); r_esp += 4; return;
}

void f_006a9ee0(void) /* sub_6A9EE0 */
{
    FN_ENTER(0x006a9ee0);
    /* 006a9ee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9ee1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9ee6: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6a9eebu); f_006a9f11();
    /* 006a9eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9eed: je 0x6a9f0a */ if (fZ) goto L_006a9f0a;
L_006a9eef:; BB(0x006a9eef);
    /* 006a9eef: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9ef4: mov edx, dword ptr [eax*8 + 0xa94800] */ r_edx = R32((u32)(r_eax*8+0xa94800u));
    /* 006a9efb: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f00: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f03: mov dword ptr [ecx*8 + 0xa94800], edx */ W32((u32)(r_ecx*8+0xa94800u), r_edx);
L_006a9f0a:; BB(0x006a9f0a);
    /* 006a9f0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f0b: ret  */ FN_RET(0x006a9ee0); r_esp += 4; return;
}

void f_006a9f0c(void) /* sub_6A9F0C */
{
    FN_ENTER(0x006a9f0c);
    /* 006a9f0c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006a9f11: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006a9f14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9f15: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a9f1au); f_0068d5a8();
    /* 006a9f1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9f1d: je 0x6a9f31 */ if (fZ) goto L_006a9f31;
L_006a9f1f:; BB(0x006a9f1f);
    /* 006a9f1f: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006a9f26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9f29: jne 0x6a9f31 */ if (!fZ) goto L_006a9f31;
L_006a9f2b:; BB(0x006a9f2b);
    /* 006a9f2b: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9f30: ret  */ FN_RET(0x006a9f0c); r_esp += 4; return;
L_006a9f31:; BB(0x006a9f31);
    /* 006a9f31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f33: ret  */ FN_RET(0x006a9f0c); r_esp += 4; return;
}

void f_006a9f11(void) /* sub_6A9F11 */
{
    FN_ENTER(0x006a9f11);
    /* 006a9f11: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006a9f14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a9f15: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a9f1au); f_0068d5a8();
    /* 006a9f1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9f1d: je 0x6a9f31 */ if (fZ) goto L_006a9f31;
L_006a9f1f:; BB(0x006a9f1f);
    /* 006a9f1f: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006a9f26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9f29: jne 0x6a9f31 */ if (!fZ) goto L_006a9f31;
L_006a9f2b:; BB(0x006a9f2b);
    /* 006a9f2b: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9f30: ret  */ FN_RET(0x006a9f11); r_esp += 4; return;
L_006a9f31:; BB(0x006a9f31);
    /* 006a9f31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f33: ret  */ FN_RET(0x006a9f11); r_esp += 4; return;
}

void f_006a9f34(void) /* sub_6A9F34 */
{
    FN_ENTER(0x006a9f34);
    /* 006a9f34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9f35: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f3a: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6a9f3fu); f_006a9f11();
    /* 006a9f3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f41: je 0x6a9f5e */ if (fZ) goto L_006a9f5e;
L_006a9f43:; BB(0x006a9f43);
    /* 006a9f43: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f48: mov edx, dword ptr [eax*8 + 0xa94800] */ r_edx = R32((u32)(r_eax*8+0xa94800u));
    /* 006a9f4f: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f54: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f57: mov dword ptr [ecx*8 + 0xa94800], edx */ W32((u32)(r_ecx*8+0xa94800u), r_edx);
L_006a9f5e:; BB(0x006a9f5e);
    /* 006a9f5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f5f: ret  */ FN_RET(0x006a9f34); r_esp += 4; return;
}

void f_006a9f60(void) /* sub_6A9F60 */
{
    FN_ENTER(0x006a9f60);
    /* 006a9f60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9f61: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f66: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6a9f6bu); f_006a9f11();
    /* 006a9f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9f6d: jne 0x6a9f73 */ if (!fZ) goto L_006a9f73;
L_006a9f6f:; BB(0x006a9f6f);
    /* 006a9f6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f72: ret  */ FN_RET(0x006a9f60); r_esp += 4; return;
L_006a9f73:; BB(0x006a9f73);
    /* 006a9f73: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f78: mov edx, dword ptr [eax*8 + 0xa94800] */ r_edx = R32((u32)(r_eax*8+0xa94800u));
    /* 006a9f7f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f82: je 0x6a9f8b */ if (fZ) goto L_006a9f8b;
L_006a9f84:; BB(0x006a9f84);
    /* 006a9f84: mov eax, 1 */ r_eax = 0x1u;
    /* 006a9f89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f8a: ret  */ FN_RET(0x006a9f60); r_esp += 4; return;
L_006a9f8b:; BB(0x006a9f8b);
    /* 006a9f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9f8e: ret  */ FN_RET(0x006a9f60); r_esp += 4; return;
}

void f_006a9f90(void) /* sub_6A9F90 */
{
    FN_ENTER(0x006a9f90);
    /* 006a9f90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9f91: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9f96: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6a9f9bu); f_006a9f11();
    /* 006a9f9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9f9d: je 0x6a9fba */ if (fZ) goto L_006a9fba;
L_006a9f9f:; BB(0x006a9f9f);
    /* 006a9f9f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9fa4: mov edx, dword ptr [eax*8 + 0xa94800] */ r_edx = R32((u32)(r_eax*8+0xa94800u));
    /* 006a9fab: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9fb0: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9fb3: mov dword ptr [ecx*8 + 0xa94800], edx */ W32((u32)(r_ecx*8+0xa94800u), r_edx);
L_006a9fba:; BB(0x006a9fba);
    /* 006a9fba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9fbb: ret  */ FN_RET(0x006a9f90); r_esp += 4; return;
}

void f_006a9fbc(void) /* sub_6A9FBC */
{
    FN_ENTER(0x006a9fbc);
    /* 006a9fbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9fbd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9fc2: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6a9fc7u); f_006a9f11();
    /* 006a9fc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9fc9: je 0x6a9fe6 */ if (fZ) goto L_006a9fe6;
L_006a9fcb:; BB(0x006a9fcb);
    /* 006a9fcb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9fd0: mov edx, dword ptr [eax*8 + 0xa94800] */ r_edx = R32((u32)(r_eax*8+0xa94800u));
    /* 006a9fd7: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9fdc: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9fdf: mov dword ptr [ecx*8 + 0xa94800], edx */ W32((u32)(r_ecx*8+0xa94800u), r_edx);
L_006a9fe6:; BB(0x006a9fe6);
    /* 006a9fe6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9fe7: ret  */ FN_RET(0x006a9fbc); r_esp += 4; return;
}

void f_006a9fe8(void) /* sub_6A9FE8 */
{
    FN_ENTER(0x006a9fe8);
    /* 006a9fe8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a9fe9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006a9fee: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6a9ff3u); f_006a9f11();
    /* 006a9ff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a9ff5: jne 0x6a9ffb */ if (!fZ) goto L_006a9ffb;
L_006a9ff7:; BB(0x006a9ff7);
    /* 006a9ff7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a9ff9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a9ffa: ret  */ FN_RET(0x006a9fe8); r_esp += 4; return;
L_006a9ffb:; BB(0x006a9ffb);
    /* 006a9ffb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006aa000: mov edx, dword ptr [eax*8 + 0xa94800] */ r_edx = R32((u32)(r_eax*8+0xa94800u));
    /* 006aa007: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006aa00a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aa00d: jne 0x6aa016 */ if (!fZ) goto L_006aa016;
L_006aa00f:; BB(0x006aa00f);
    /* 006aa00f: mov eax, 1 */ r_eax = 0x1u;
    /* 006aa014: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa015: ret  */ FN_RET(0x006a9fe8); r_esp += 4; return;
L_006aa016:; BB(0x006aa016);
    /* 006aa016: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aa018: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa019: ret  */ FN_RET(0x006a9fe8); r_esp += 4; return;
}

