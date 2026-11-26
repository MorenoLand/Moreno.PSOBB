#include "protos.h"

void f_0048d004(void) /* sub_48D004 */
{
    FN_ENTER(0x0048d004);
    /* 0048d004: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048d005: mov esi, ecx */ r_esi = r_ecx;
    /* 0048d007: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x48d00cu); f_00520db8();
    /* 0048d00c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d00e: je 0x48d012 */ if (fZ) goto L_0048d012;
L_0048d010:; BB(0x0048d010);
    /* 0048d010: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048d011: ret  */ FN_RET(0x0048d004); r_esp += 4; return;
L_0048d012:; BB(0x0048d012);
    /* 0048d012: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d014: call 0x48d038 */ r_esp -= 4; W32(r_esp, 0x48d019u); f_0048d038();
    /* 0048d019: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0048d01f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d021: jne 0x48d02a */ if (!fZ) goto L_0048d02a;
L_0048d023:; BB(0x0048d023);
    /* 0048d023: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d025: call 0x48d05c */ r_esp -= 4; W32(r_esp, 0x48d02au); f_0048d05c();
L_0048d02a:; BB(0x0048d02a);
    /* 0048d02a: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d02c: call 0x48d074 */ r_esp -= 4; W32(r_esp, 0x48d031u); f_0048d074();
    /* 0048d031: call 0x491d74 */ r_esp -= 4; W32(r_esp, 0x48d036u); f_00491d74();
    /* 0048d036: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048d037: ret  */ FN_RET(0x0048d004); r_esp += 4; return;
}

void f_0048d038(void) /* sub_48D038 */
{
    FN_ENTER(0x0048d038);
    /* 0048d038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d039: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048d03b: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x48d040u); f_0052cf54();
    /* 0048d040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d042: je 0x48d050 */ if (fZ) goto L_0048d050;
L_0048d044:; BB(0x0048d044);
    /* 0048d044: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 0048d04e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d04f: ret  */ FN_RET(0x0048d038); r_esp += 4; return;
L_0048d050:; BB(0x0048d050);
    /* 0048d050: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 0048d05a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d05b: ret  */ FN_RET(0x0048d038); r_esp += 4; return;
}

void f_0048d05c(void) /* sub_48D05C */
{
    FN_ENTER(0x0048d05c);
    /* 0048d05c: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 0048d062: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0048d065: mov eax, dword ptr [edx*4 + 0x9a6c6c] */ r_eax = R32((u32)(r_edx*4+0x9a6c6cu));
    /* 0048d06c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d06e: je 0x48d072 */ if (fZ) goto L_0048d072;
L_0048d070:; BB(0x0048d070);
    /* 0048d070: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48d072u); call_ind(t); }
L_0048d072:; BB(0x0048d072);
    /* 0048d072: ret  */ FN_RET(0x0048d05c); r_esp += 4; return;
}

void f_0048d074(void) /* sub_48D074 */
{
    FN_ENTER(0x0048d074);
    /* 0048d074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048d075: mov esi, ecx */ r_esi = r_ecx;
    /* 0048d077: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 0048d07d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0048d080: mov eax, dword ptr [edx*4 + 0x9a6c70] */ r_eax = R32((u32)(r_edx*4+0x9a6c70u));
    /* 0048d087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d089: je 0x48d08f */ if (fZ) goto L_0048d08f;
L_0048d08b:; BB(0x0048d08b);
    /* 0048d08b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d08d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48d08fu); call_ind(t); }
L_0048d08f:; BB(0x0048d08f);
    /* 0048d08f: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d091: call 0x48d098 */ r_esp -= 4; W32(r_esp, 0x48d096u); f_0048d098();
    /* 0048d096: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048d097: ret  */ FN_RET(0x0048d074); r_esp += 4; return;
}

void f_0048d098(void) /* sub_48D098 */
{
    FN_ENTER(0x0048d098);
    /* 0048d098: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d099: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d09c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048d09e: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 0048d0a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d0a6: je 0x48d0bb */ if (fZ) goto L_0048d0bb;
L_0048d0a8:; BB(0x0048d0a8);
    /* 0048d0a8: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0048d0ae: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d0b1: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 0048d0b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d0b9: jl 0x48d0c0 */ if ((fS!=fO)) goto L_0048d0c0;
L_0048d0bb:; BB(0x0048d0bb);
    /* 0048d0bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d0be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d0bf: ret  */ FN_RET(0x0048d098); r_esp += 4; return;
L_0048d0c0:; BB(0x0048d0c0);
    /* 0048d0c0: push dword ptr [ebp + 0x3e0] */ { u32 v = R32((u32)(r_ebp+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048d0c6: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x48d0cbu); f_004d4288();
    /* 0048d0cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048d0cc: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48d0d1u); f_008587a5();
    /* 0048d0d1: fld dword ptr [0x901658] */ FPUSH(R_F32((u32)(0x901658u)));
    /* 0048d0d7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048d0da: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048d0dd: fdiv dword ptr [0x901654] */ ST(0) = ST(0) / R_F32((u32)(0x901654u));
    /* 0048d0e3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048d0e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048d0e7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048d0eb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048d0f0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048d0f5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048d0f9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048d0fd: fistp dword ptr [ebp + 0x3dc] */ W32((u32)(r_ebp+0x3dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0048d103: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048d107: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d10a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d10b: ret  */ FN_RET(0x0048d098); r_esp += 4; return;
}

void f_0048d10c(void) /* sub_48D10C */
{
    FN_ENTER(0x0048d10c);
    /* 0048d10c: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d10f: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0048d115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d117: je 0x48d11f */ if (fZ) goto L_0048d11f;
L_0048d119:; BB(0x0048d119);
    /* 0048d119: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d11c: ret 4 */ FN_RET(0x0048d10c); r_esp += 8; return;
L_0048d11f:; BB(0x0048d11f);
    /* 0048d11f: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0048d123: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0048d127: mov byte ptr [esp], 0xa3 */ W8((u32)(r_esp), 0xa3u);
    /* 0048d12b: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0048d130: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0048d135: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 0048d139: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48d13eu); f_008587a5();
    /* 0048d13e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048d142: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0048d146: fdiv dword ptr [0x90164c] */ ST(0) = ST(0) / R_F32((u32)(0x90164cu));
    /* 0048d14c: fmul dword ptr [0x901650] */ ST(0) = ST(0) * R_F32((u32)(0x901650u));
    /* 0048d152: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048d155: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0048d159: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0048d15e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048d163: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048d167: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0048d16b: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0048d16f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0048d173: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0048d177: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 0048d17b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x48d180u); f_008003e0();
    /* 0048d180: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d183: ret 4 */ FN_RET(0x0048d10c); r_esp += 8; return;
}

void f_0048d188(void) /* sub_48D188 */
{
    FN_ENTER(0x0048d188);
    /* 0048d188: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d18b: mov eax, dword ptr [0xa46f98] */ r_eax = R32((u32)(0xa46f98u));
    /* 0048d190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d192: je 0x48d198 */ if (fZ) goto L_0048d198;
L_0048d194:; BB(0x0048d194);
    /* 0048d194: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d197: ret  */ FN_RET(0x0048d188); r_esp += 4; return;
L_0048d198:; BB(0x0048d198);
    /* 0048d198: movzx eax, byte ptr [ecx + 0x384] */ r_eax = (u32)R8((u32)(r_ecx+0x384u));
    /* 0048d19f: movzx edx, word ptr [ecx + 0x392] */ r_edx = (u32)R16((u32)(r_ecx+0x392u));
    /* 0048d1a6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0048d1a9: mov byte ptr [esp + 0x44], al */ W8((u32)(r_esp+0x44u), (u8)r_eax);
    /* 0048d1ad: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 0048d1b4: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0048d1b9: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0048d1be: movzx eax, word ptr [ecx + 0x398] */ r_eax = (u32)R16((u32)(r_ecx+0x398u));
    /* 0048d1c5: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0048d1ca: movzx eax, word ptr [ecx + 0x39a] */ r_eax = (u32)R16((u32)(r_ecx+0x39au));
    /* 0048d1d1: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0048d1d6: movzx eax, word ptr [ecx + 0x39c] */ r_eax = (u32)R16((u32)(r_ecx+0x39cu));
    /* 0048d1dd: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0048d1e2: movzx eax, word ptr [ecx + 0x39e] */ r_eax = (u32)R16((u32)(r_ecx+0x39eu));
    /* 0048d1e9: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0048d1ee: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0048d1f4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048d1f8: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 0048d1fe: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048d202: mov eax, dword ptr [ecx + 0x3a8] */ r_eax = R32((u32)(r_ecx+0x3a8u));
    /* 0048d208: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048d20c: mov eax, dword ptr [ecx + 0x3ac] */ r_eax = R32((u32)(r_ecx+0x3acu));
    /* 0048d212: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048d216: mov eax, dword ptr [ecx + 0x3b0] */ r_eax = R32((u32)(r_ecx+0x3b0u));
    /* 0048d21c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048d220: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 0048d226: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048d22a: mov eax, dword ptr [ecx + 0x3b8] */ r_eax = R32((u32)(r_ecx+0x3b8u));
    /* 0048d230: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0048d234: mov eax, dword ptr [ecx + 0x3bc] */ r_eax = R32((u32)(r_ecx+0x3bcu));
    /* 0048d23a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0048d23e: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0048d244: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0048d248: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 0048d24e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0048d252: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0048d258: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0048d25c: movzx eax, word ptr [ecx + 0x3cc] */ r_eax = (u32)R16((u32)(r_ecx+0x3ccu));
    /* 0048d263: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 0048d268: movzx eax, word ptr [ecx + 0x3ce] */ r_eax = (u32)R16((u32)(r_ecx+0x3ceu));
    /* 0048d26f: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0048d274: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 0048d278: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0048d27c: add eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d281: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0048d286: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048d289: add ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d28f: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0048d294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d295: call 0x4974d0 */ r_esp -= 4; W32(r_esp, 0x48d29au); f_004974d0();
    /* 0048d29a: mov dword ptr [0xa46f98], eax */ W32((u32)(0xa46f98u), r_eax);
    /* 0048d29f: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d2a2: ret  */ FN_RET(0x0048d188); r_esp += 4; return;
}

void f_0048d2a4(void) /* sub_48D2A4 */
{
    FN_ENTER(0x0048d2a4);
    /* 0048d2a4: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d2a7: mov eax, dword ptr [0xa46f94] */ r_eax = R32((u32)(0xa46f94u));
    /* 0048d2ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d2ae: je 0x48d2b4 */ if (fZ) goto L_0048d2b4;
L_0048d2b0:; BB(0x0048d2b0);
    /* 0048d2b0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d2b3: ret  */ FN_RET(0x0048d2a4); r_esp += 4; return;
L_0048d2b4:; BB(0x0048d2b4);
    /* 0048d2b4: movzx eax, byte ptr [ecx + 0x384] */ r_eax = (u32)R8((u32)(r_ecx+0x384u));
    /* 0048d2bb: movzx edx, word ptr [ecx + 0x392] */ r_edx = (u32)R16((u32)(r_ecx+0x392u));
    /* 0048d2c2: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0048d2c5: mov byte ptr [esp + 0x44], al */ W8((u32)(r_esp+0x44u), (u8)r_eax);
    /* 0048d2c9: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 0048d2d0: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0048d2d5: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0048d2da: movzx eax, word ptr [ecx + 0x39a] */ r_eax = (u32)R16((u32)(r_ecx+0x39au));
    /* 0048d2e1: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0048d2e6: movzx eax, word ptr [ecx + 0x39c] */ r_eax = (u32)R16((u32)(r_ecx+0x39cu));
    /* 0048d2ed: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0048d2f2: movzx eax, word ptr [ecx + 0x39e] */ r_eax = (u32)R16((u32)(r_ecx+0x39eu));
    /* 0048d2f9: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0048d2fe: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0048d304: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048d308: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 0048d30e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048d312: mov eax, dword ptr [ecx + 0x3a8] */ r_eax = R32((u32)(r_ecx+0x3a8u));
    /* 0048d318: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048d31c: mov eax, dword ptr [ecx + 0x3ac] */ r_eax = R32((u32)(r_ecx+0x3acu));
    /* 0048d322: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048d326: mov eax, dword ptr [ecx + 0x3b0] */ r_eax = R32((u32)(r_ecx+0x3b0u));
    /* 0048d32c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048d330: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 0048d336: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048d33a: mov eax, dword ptr [ecx + 0x3b8] */ r_eax = R32((u32)(r_ecx+0x3b8u));
    /* 0048d340: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0048d344: mov eax, dword ptr [ecx + 0x3bc] */ r_eax = R32((u32)(r_ecx+0x3bcu));
    /* 0048d34a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0048d34e: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0048d354: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0048d358: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 0048d35e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0048d362: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0048d368: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0048d36c: movzx eax, word ptr [ecx + 0x3cc] */ r_eax = (u32)R16((u32)(r_ecx+0x3ccu));
    /* 0048d373: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 0048d378: movzx eax, word ptr [ecx + 0x3ce] */ r_eax = (u32)R16((u32)(r_ecx+0x3ceu));
    /* 0048d37f: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0048d384: mov eax, 1 */ r_eax = 0x1u;
    /* 0048d389: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0048d38e: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 0048d392: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0048d396: add eax, 0x1ff */ {  u32 a = r_eax; u32 b = 0x1ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d39b: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0048d3a0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048d3a3: add ecx, 0x1ff */ {  u32 a = r_ecx; u32 b = 0x1ffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048d3a9: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0048d3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d3af: call 0x49d234 */ r_esp -= 4; W32(r_esp, 0x48d3b4u); f_0049d234();
    /* 0048d3b4: mov dword ptr [0xa46f94], eax */ W32((u32)(0xa46f94u), r_eax);
    /* 0048d3b9: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d3bc: ret  */ FN_RET(0x0048d2a4); r_esp += 4; return;
}

void f_0048d3c0(void) /* sub_48D3C0 */
{
    FN_ENTER(0x0048d3c0);
    /* 0048d3c0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0048d3c4: mov eax, dword ptr [0xa46f98] */ r_eax = R32((u32)(0xa46f98u));
    /* 0048d3c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d3cb: je 0x48d3e6 */ if (fZ) goto L_0048d3e6;
L_0048d3cd:; BB(0x0048d3cd);
    /* 0048d3cd: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0048d3d0: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048d3d2: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0048d3d5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0048d3d8: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0048d3db: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0048d3de: mov eax, 1 */ r_eax = 0x1u;
    /* 0048d3e3: ret 4 */ FN_RET(0x0048d3c0); r_esp += 8; return;
L_0048d3e6:; BB(0x0048d3e6);
    /* 0048d3e6: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0048d3ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d3ee: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0048d3f5: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0048d3fc: ret 4 */ FN_RET(0x0048d3c0); r_esp += 8; return;
}

void f_0048d400(void) /* sub_48D400 */
{
    FN_ENTER(0x0048d400);
    /* 0048d400: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0048d404: mov eax, dword ptr [0xa46f94] */ r_eax = R32((u32)(0xa46f94u));
    /* 0048d409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d40b: je 0x48d426 */ if (fZ) goto L_0048d426;
L_0048d40d:; BB(0x0048d40d);
    /* 0048d40d: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0048d410: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0048d412: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0048d415: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0048d418: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0048d41b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0048d41e: mov eax, 1 */ r_eax = 0x1u;
    /* 0048d423: ret 4 */ FN_RET(0x0048d400); r_esp += 8; return;
L_0048d426:; BB(0x0048d426);
    /* 0048d426: mov dword ptr [edx], 0xc61c4000 */ W32((u32)(r_edx), 0xc61c4000u);
    /* 0048d42c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d42e: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0048d435: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0048d43c: ret 4 */ FN_RET(0x0048d400); r_esp += 8; return;
}

void f_0048d440(void) /* sub_48D440 */
{
    FN_ENTER(0x0048d440);
    /* 0048d440: mov edx, dword ptr [ecx + 0x38c] */ r_edx = R32((u32)(r_ecx+0x38cu));
    /* 0048d446: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d448: je 0x48d462 */ if (fZ) goto L_0048d462;
L_0048d44a:; BB(0x0048d44a);
    /* 0048d44a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0048d44e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d453: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0048d457: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
    /* 0048d461: ret  */ FN_RET(0x0048d440); r_esp += 4; return;
L_0048d462:; BB(0x0048d462);
    /* 0048d462: ret  */ FN_RET(0x0048d440); r_esp += 4; return;
}

void f_0048d464(void) /* sub_48D464 */
{
    FN_ENTER(0x0048d464);
    /* 0048d464: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0048d468: mov ecx, dword ptr [ecx + 0x388] */ r_ecx = R32((u32)(r_ecx+0x388u));
    /* 0048d46e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d470: je 0x48d4ab */ if (fZ) goto L_0048d4ab;
L_0048d472:; BB(0x0048d472);
    /* 0048d472: fcom dword ptr [0x901628] */ fx_compare(ST(0), R_F32((u32)(0x901628u))); 
    /* 0048d478: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048d47a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048d47b: jbe 0x48d4a6 */ if ((fC||fZ)) goto L_0048d4a6;
L_0048d47d:; BB(0x0048d47d);
    /* 0048d47d: fld dword ptr [0x901624] */ FPUSH(R_F32((u32)(0x901624u)));
    /* 0048d483: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048d485: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048d487: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d48a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0048d48e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0048d491: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048d492: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048d494: jb 0x48d498 */ if (fC) goto L_0048d498;
L_0048d496:; BB(0x0048d496);
    /* 0048d496: fst st(1) */ ST(1) = ST(0);
L_0048d498:; BB(0x0048d498);
    /* 0048d498: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048d49a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048d49e: call 0x4538cc */ r_esp -= 4; W32(r_esp, 0x48d4a3u); f_004538cc();
    /* 0048d4a3: ret 8 */ FN_RET(0x0048d464); r_esp += 12; return;
L_0048d4a6:; BB(0x0048d4a6);
    /* 0048d4a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048d4a8: ret 8 */ FN_RET(0x0048d464); r_esp += 12; return;
L_0048d4ab:; BB(0x0048d4ab);
    /* 0048d4ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048d4ad: ret 8 */ FN_RET(0x0048d464); r_esp += 12; return;
}

void f_0048d4b0(void) /* sub_48D4B0 */
{
    FN_ENTER(0x0048d4b0);
    /* 0048d4b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4b4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d4b7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048d4b9: call 0x491d74 */ r_esp -= 4; W32(r_esp, 0x48d4beu); f_00491d74();
    /* 0048d4be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d4c0: je 0x48d500 */ if (fZ) goto L_0048d500;
L_0048d4c2:; BB(0x0048d4c2);
    /* 0048d4c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048d4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4c7: push 0x3e5 */ { u32 v = 0x3e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d4cc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48d4d1u); f_00814298();
    /* 0048d4d1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d4d4: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048d4d9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0048d4db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d4dd: jle 0x48d500 */ if ((fZ||fS!=fO)) goto L_0048d500;
L_0048d4df:; BB(0x0048d4df);
    /* 0048d4df: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0048d4e6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d4e8: je 0x48d4f9 */ if (fZ) goto L_0048d4f9;
L_0048d4ea:; BB(0x0048d4ea);
    /* 0048d4ea: mov edx, dword ptr [esi + 0x3ec] */ r_edx = R32((u32)(r_esi+0x3ecu));
    /* 0048d4f0: cmp edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d4f3: je 0x48d64a */ if (fZ) goto L_0048d64a;
L_0048d4f9:; BB(0x0048d4f9);
    /* 0048d4f9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048d4fc: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d4fe: jl 0x48d4df */ if ((fS!=fO)) goto L_0048d4df;
L_0048d500:; BB(0x0048d500);
    /* 0048d500: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0048d507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d508: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x48d50du); f_0068d5a8();
    /* 0048d50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048d50e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d510: je 0x48d5d7 */ if (fZ) goto L_0048d5d7;
L_0048d516:; BB(0x0048d516);
    /* 0048d516: mov edi, dword ptr [ebx + 0x300] */ r_edi = R32((u32)(r_ebx+0x300u));
    /* 0048d51c: mov ebp, dword ptr [ebx + 0x304] */ r_ebp = R32((u32)(r_ebx+0x304u));
    /* 0048d522: mov esi, dword ptr [ebx + 0x308] */ r_esi = R32((u32)(r_ebx+0x308u));
    /* 0048d528: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 0048d52e: mov dword ptr [ebx + 0x300], edx */ W32((u32)(r_ebx+0x300u), r_edx);
    /* 0048d534: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 0048d53a: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0048d53e: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 0048d541: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0048d545: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0048d548: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0048d54e: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0048d554: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 0048d55b: mov dword ptr [ebx + 0x308], eax */ W32((u32)(r_ebx+0x308u), r_eax);
    /* 0048d561: mov eax, dword ptr [ebx + 0x378] */ r_eax = R32((u32)(r_ebx+0x378u));
    /* 0048d567: mov dword ptr [ebx + 0x378], 0x4e */ W32((u32)(r_ebx+0x378u), 0x4eu);
    /* 0048d571: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 0048d574: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048d576: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048d57a: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048d57d: mov dword ptr [ebx + 0x38], 0xc61c4000 */ W32((u32)(r_ebx+0x38u), 0xc61c4000u);
    /* 0048d584: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048d588: movzx eax, word ptr [ebx + 0x28] */ r_eax = (u32)R16((u32)(r_ebx+0x28u));
    /* 0048d58c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048d590: mov eax, 1 */ r_eax = 0x1u;
    /* 0048d595: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0048d599: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x48d59eu); f_00787534();
    /* 0048d59e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0048d5a2: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0048d5a6: mov dword ptr [ebx + 0x300], edi */ W32((u32)(r_ebx+0x300u), r_edi);
    /* 0048d5ac: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0048d5b0: mov dword ptr [ebx + 0x304], eax */ W32((u32)(r_ebx+0x304u), r_eax);
    /* 0048d5b6: mov dword ptr [ebx + 0x308], edx */ W32((u32)(r_ebx+0x308u), r_edx);
    /* 0048d5bc: mov dword ptr [ebx + 0x38], edi */ W32((u32)(r_ebx+0x38u), r_edi);
    /* 0048d5bf: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 0048d5c2: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0048d5c6: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 0048d5c9: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0048d5cd: mov word ptr [ebx + 0x28], bp */ W16((u32)(r_ebx+0x28u), (u16)r_ebp);
    /* 0048d5d1: mov dword ptr [ebx + 0x378], esi */ W32((u32)(r_ebx+0x378u), r_esi);
L_0048d5d7:; BB(0x0048d5d7);
    /* 0048d5d7: mov dword ptr [esp + 0xc], 0x800 */ W32((u32)(r_esp+0xcu), 0x800u);
    /* 0048d5df: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0048d5e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048d5e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d5e6: call 0x787710 */ r_esp -= 4; W32(r_esp, 0x48d5ebu); f_00787710();
    /* 0048d5eb: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0048d5ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d5f1: jl 0x48d620 */ if ((fS!=fO)) goto L_0048d620;
L_0048d5f3:; BB(0x0048d5f3);
    /* 0048d5f3: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d5f8: jg 0x48d620 */ if ((!fZ&&fS==fO)) goto L_0048d620;
L_0048d5fa:; BB(0x0048d5fa);
    /* 0048d5fa: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 0048d600: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d602: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d604: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0048d607: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048d609: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048d60d: mov dword ptr [esi + edi], eax */ W32((u32)(r_esi+r_edi), r_eax);
    /* 0048d610: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0048d614: mov dword ptr [esi + edi + 4], edx */ W32((u32)(r_esi+r_edi+0x4u), r_edx);
    /* 0048d618: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0048d61c: mov dword ptr [esi + edi + 8], ebp */ W32((u32)(r_esi+r_edi+0x8u), r_ebp);
L_0048d620:; BB(0x0048d620);
    /* 0048d620: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0048d624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d625: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0048d627: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048d629: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x48d62fu); call_ind(t); }
    /* 0048d62f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d630: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x48d635u); f_008113e4();
    /* 0048d635: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0048d639: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048d63e: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0048d642: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d645: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048d646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d647: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048d648: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048d649: ret  */ FN_RET(0x0048d4b0); r_esp += 4; return;
L_0048d64a:; BB(0x0048d64a);
    /* 0048d64a: fld dword ptr [0x901620] */ FPUSH(R_F32((u32)(0x901620u)));
    /* 0048d650: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0048d653: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0048d656: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0048d659: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048d65d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048d660: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0048d664: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0048d667: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d669: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048d66a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x48d66fu); f_0050b510();
    /* 0048d66f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048d672: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048d677: jmp 0x48d4f9 */ goto L_0048d4f9;
}

void f_0048d67c(void) /* sub_48D67C */
{
    FN_ENTER(0x0048d67c);
    /* 0048d67c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d67d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048d67f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048d681: call 0x48d6c4 */ r_esp -= 4; W32(r_esp, 0x48d686u); f_0048d6c4();
    /* 0048d686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d688: jg 0x48d690 */ if ((!fZ&&fS==fO)) goto L_0048d690;
L_0048d68a:; BB(0x0048d68a);
    /* 0048d68a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d68c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048d68d: ret 8 */ FN_RET(0x0048d67c); r_esp += 12; return;
L_0048d690:; BB(0x0048d690);
    /* 0048d690: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048d694: movzx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 0048d698: add edx, dword ptr [ebx + 0x3d0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x3d0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048d69e: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0048d6a1: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0048d6a5: add eax, dword ptr [ebx + 0x3d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3d0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d6ab: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0048d6af: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0048d6b2: mov eax, 1 */ r_eax = 0x1u;
    /* 0048d6b7: add dword ptr [ebx + 0x3d0], 1 */ { u32 ad = (u32)(r_ebx+0x3d0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d6be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048d6bf: ret 8 */ FN_RET(0x0048d67c); r_esp += 12; return;
}

void f_0048d6c4(void) /* sub_48D6C4 */
{
    FN_ENTER(0x0048d6c4);
    /* 0048d6c4: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0048d6ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d6cc: jle 0x48d6dd */ if ((fZ||fS!=fO)) goto L_0048d6dd;
L_0048d6ce:; BB(0x0048d6ce);
    /* 0048d6ce: cmp eax, 0x1fd */ {  u32 a = r_eax; u32 b = 0x1fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d6d3: jg 0x48d6dd */ if ((!fZ&&fS==fO)) goto L_0048d6dd;
L_0048d6d5:; BB(0x0048d6d5);
    /* 0048d6d5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048d6d7: add eax, 0x1fd */ {  u32 a = r_eax; u32 b = 0x1fdu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048d6dc: ret  */ FN_RET(0x0048d6c4); r_esp += 4; return;
L_0048d6dd:; BB(0x0048d6dd);
    /* 0048d6dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d6df: ret  */ FN_RET(0x0048d6c4); r_esp += 4; return;
}

void f_0048d6e0(void) /* sub_48D6E0 */
{
    FN_ENTER(0x0048d6e0);
    /* 0048d6e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d6e2: mov esi, ecx */ r_esi = r_ecx;
    /* 0048d6e4: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0048d6e8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d6ea: jl 0x48d727 */ if ((fS!=fO)) goto L_0048d727;
L_0048d6ec:; BB(0x0048d6ec);
    /* 0048d6ec: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048d6ef: jge 0x48d727 */ if ((fS==fO)) goto L_0048d727;
L_0048d6f1:; BB(0x0048d6f1);
    /* 0048d6f1: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 0048d6f7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d6fa: je 0x48d70e */ if (fZ) goto L_0048d70e;
L_0048d6fc:; BB(0x0048d6fc);
    /* 0048d6fc: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0048d6ff: mov eax, dword ptr [eax*4 + 0x9a6c68] */ r_eax = R32((u32)(r_eax*4+0x9a6c68u));
    /* 0048d706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d708: je 0x48d70e */ if (fZ) goto L_0048d70e;
L_0048d70a:; BB(0x0048d70a);
    /* 0048d70a: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d70c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48d70eu); call_ind(t); }
L_0048d70e:; BB(0x0048d70e);
    /* 0048d70e: mov dword ptr [esi + 0x380], ebp */ W32((u32)(r_esi+0x380u), r_ebp);
    /* 0048d714: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0048d718: mov eax, dword ptr [eax*4 + 0x9a6c64] */ r_eax = R32((u32)(r_eax*4+0x9a6c64u));
    /* 0048d71f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d721: je 0x48d727 */ if (fZ) goto L_0048d727;
L_0048d723:; BB(0x0048d723);
    /* 0048d723: mov ecx, esi */ r_ecx = r_esi;
    /* 0048d725: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48d727u); call_ind(t); }
L_0048d727:; BB(0x0048d727);
    /* 0048d727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d728: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048d729: ret 4 */ FN_RET(0x0048d6e0); r_esp += 8; return;
}

void f_0048d72c(void) /* sub_48D72C */
{
    FN_ENTER(0x0048d72c);
    /* 0048d72c: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0048d732: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d734: je 0x48d73b */ if (fZ) goto L_0048d73b;
L_0048d736:; BB(0x0048d736);
    /* 0048d736: call 0x492320 */ r_esp -= 4; W32(r_esp, 0x48d73bu); f_00492320();
L_0048d73b:; BB(0x0048d73b);
    /* 0048d73b: ret  */ FN_RET(0x0048d72c); r_esp += 4; return;
}

void f_0048d73c(void) /* sub_48D73C */
{
    FN_ENTER(0x0048d73c);
    /* 0048d73c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d73e: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 0048d744: mov dword ptr [ecx + 0x3e0], eax */ W32((u32)(r_ecx+0x3e0u), r_eax);
    /* 0048d74a: ret  */ FN_RET(0x0048d73c); r_esp += 4; return;
}

void f_0048d74c(void) /* sub_48D74C */
{
    FN_ENTER(0x0048d74c);
    /* 0048d74c: mov dword ptr [ecx + 0x3dc], 0 */ W32((u32)(r_ecx+0x3dcu), 0x0u);
    /* 0048d756: mov dword ptr [ecx + 0x3e0], 2 */ W32((u32)(r_ecx+0x3e0u), 0x2u);
    /* 0048d760: ret  */ FN_RET(0x0048d74c); r_esp += 4; return;
}

void f_0048d764(void)
{
    FN_ENTER(0x0048d764);
    /* 0048d764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d765: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d767: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d769: push 0x8cff52 */ { u32 v = 0x8cff52u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d76e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048d774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d775: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048d77c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d77f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048d782: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048d785: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048d788: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048d78b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048d78d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048d790: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048d793: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d798: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48d79du); f_005caba4();
    /* 0048d79d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048d79e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048d7a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d7a3: je 0x48d810 */ if (fZ) goto L_0048d810;
L_0048d7a5:; BB(0x0048d7a5);
    /* 0048d7a5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0048d7ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048d7b3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048d7b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48d7bau); f_005caba4();
    /* 0048d7ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048d7bb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048d7be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048d7c0: je 0x48d80c */ if (fZ) goto L_0048d80c;
L_0048d7c2:; BB(0x0048d7c2);
    /* 0048d7c2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048d7c9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048d7d0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048d7d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048d7d9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x48d7deu); f_00787a4c();
    /* 0048d7de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048d7e1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0048d7e8:; BB(0x0048d7e8);
    /* 0048d7e8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048d7eb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d7ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d7ef: call 0x48d814 */ r_esp -= 4; W32(r_esp, 0x48d7f4u); f_0048d814();
    /* 0048d7f4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d7f7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048d7fe:; BB(0x0048d7fe);
    /* 0048d7fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048d801: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048d808: mov esp, ebp */ r_esp = r_ebp;
    /* 0048d80a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048d80b: ret  */ FN_RET(0x0048d764); r_esp += 4; return;
L_0048d80c:; BB(0x0048d80c);
    /* 0048d80c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048d80e: jmp 0x48d7e8 */ goto L_0048d7e8;
L_0048d810:; BB(0x0048d810);
    /* 0048d810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048d812: jmp 0x48d7fe */ goto L_0048d7fe;
}

void f_0048d814(void) /* sub_48D814 */
{
    FN_ENTER(0x0048d814);
    /* 0048d814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048d815: mov ebp, esp */ r_ebp = r_esp;
    /* 0048d817: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d819: push 0x8cff6c */ { u32 v = 0x8cff6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d81e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048d824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048d825: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048d82c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048d82f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048d832: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0048d835: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048d838: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048d83b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048d83e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048d841: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048d844: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048d847: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x48d84cu); f_007865e8();
    /* 0048d84c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048d853: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d856: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048d859: mov dword ptr [ecx], 0xaf9240 */ W32((u32)(r_ecx), 0xaf9240u);
    /* 0048d85f: mov eax, dword ptr [0x9a6c4c] */ r_eax = R32((u32)(0x9a6c4cu));
    /* 0048d864: mov dword ptr [0xa46f9c], ecx */ W32((u32)(0xa46f9cu), r_ecx);
    /* 0048d86a: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0048d86c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0048d86f: mov dword ptr [ecx + 0x3d0], 1 */ W32((u32)(r_ecx+0x3d0u), 0x1u);
    /* 0048d879: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048d87a: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x48d880u); call_ind(t); }
    /* 0048d880: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d883: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048d886: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0048d889: mov word ptr [eax + 0x390], dx */ W16((u32)(r_eax+0x390u), (u16)r_edx);
    /* 0048d890: movzx ecx, word ptr [ebx + 2] */ r_ecx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0048d894: mov word ptr [eax + 0x392], cx */ W16((u32)(r_eax+0x392u), (u16)r_ecx);
    /* 0048d89b: movzx esi, word ptr [ebx + 4] */ r_esi = (u32)R16((u32)(r_ebx+0x4u));
    /* 0048d89f: mov word ptr [eax + 0x394], si */ W16((u32)(r_eax+0x394u), (u16)r_esi);
    /* 0048d8a6: movzx edi, word ptr [ebx + 6] */ r_edi = (u32)R16((u32)(r_ebx+0x6u));
    /* 0048d8aa: mov word ptr [eax + 0x396], di */ W16((u32)(r_eax+0x396u), (u16)r_edi);
    /* 0048d8b1: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0048d8b5: mov word ptr [eax + 0x398], dx */ W16((u32)(r_eax+0x398u), (u16)r_edx);
    /* 0048d8bc: movzx edx, word ptr [ebx + 0xa] */ r_edx = (u32)R16((u32)(r_ebx+0xau));
    /* 0048d8c0: mov word ptr [eax + 0x39a], dx */ W16((u32)(r_eax+0x39au), (u16)r_edx);
    /* 0048d8c7: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 0048d8cb: mov word ptr [eax + 0x39c], dx */ W16((u32)(r_eax+0x39cu), (u16)r_edx);
    /* 0048d8d2: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 0048d8d6: mov word ptr [eax + 0x39e], dx */ W16((u32)(r_eax+0x39eu), (u16)r_edx);
    /* 0048d8dd: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0048d8e0: mov dword ptr [eax + 0x3a0], edx */ W32((u32)(r_eax+0x3a0u), r_edx);
    /* 0048d8e6: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0048d8e9: mov dword ptr [eax + 0x3a4], edx */ W32((u32)(r_eax+0x3a4u), r_edx);
    /* 0048d8ef: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0048d8f2: mov dword ptr [eax + 0x3a8], edx */ W32((u32)(r_eax+0x3a8u), r_edx);
    /* 0048d8f8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0048d8fb: mov dword ptr [eax + 0x3ac], edx */ W32((u32)(r_eax+0x3acu), r_edx);
    /* 0048d901: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0048d904: mov dword ptr [eax + 0x3b0], edx */ W32((u32)(r_eax+0x3b0u), r_edx);
    /* 0048d90a: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0048d90d: mov dword ptr [eax + 0x3b4], edx */ W32((u32)(r_eax+0x3b4u), r_edx);
    /* 0048d913: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0048d916: mov dword ptr [eax + 0x3b8], edx */ W32((u32)(r_eax+0x3b8u), r_edx);
    /* 0048d91c: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0048d91f: mov dword ptr [eax + 0x3bc], edx */ W32((u32)(r_eax+0x3bcu), r_edx);
    /* 0048d925: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0048d928: mov dword ptr [eax + 0x3c0], edx */ W32((u32)(r_eax+0x3c0u), r_edx);
    /* 0048d92e: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0048d931: mov dword ptr [eax + 0x3c4], edx */ W32((u32)(r_eax+0x3c4u), r_edx);
    /* 0048d937: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0048d93a: mov dword ptr [eax + 0x3c8], edx */ W32((u32)(r_eax+0x3c8u), r_edx);
    /* 0048d940: movzx edx, word ptr [ebx + 0x3c] */ r_edx = (u32)R16((u32)(r_ebx+0x3cu));
    /* 0048d944: mov word ptr [eax + 0x3cc], dx */ W16((u32)(r_eax+0x3ccu), (u16)r_edx);
    /* 0048d94b: movzx edx, word ptr [ebx + 0x3e] */ r_edx = (u32)R16((u32)(r_ebx+0x3eu));
    /* 0048d94f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d952: mov word ptr [eax + 0x3ce], dx */ W16((u32)(r_eax+0x3ceu), (u16)r_edx);
    /* 0048d959: movsx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0048d95d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048d95f: mov word ptr [ebx + 0x392], ax */ W16((u32)(r_ebx+0x392u), (u16)r_eax);
    /* 0048d966: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d968: jl 0x48d9a9 */ if ((fS!=fO)) goto L_0048d9a9;
L_0048d96a:; BB(0x0048d96a);
    /* 0048d96a: cmp ecx, 0xb4f */ {  u32 a = r_ecx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d970: jg 0x48d9a9 */ if ((!fZ&&fS==fO)) goto L_0048d9a9;
L_0048d972:; BB(0x0048d972);
    /* 0048d972: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 0048d978: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0048d97b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048d97d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0048d980: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048d982: mov edi, dword ptr [eax + edx + 8] */ r_edi = R32((u32)(r_eax+r_edx+0x8u));
    /* 0048d986: movzx esi, word ptr [eax + edx + 4] */ r_esi = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 0048d98b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048d98d: jl 0x48d9a9 */ if ((fS!=fO)) goto L_0048d9a9;
L_0048d98f:; BB(0x0048d98f);
    /* 0048d98f: cmp ecx, 0xb4f */ {  u32 a = r_ecx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048d995: jg 0x48d9a9 */ if ((!fZ&&fS==fO)) goto L_0048d9a9;
L_0048d997:; BB(0x0048d997);
    /* 0048d997: mov dword ptr [eax + edx], 0 */ W32((u32)(r_eax+r_edx), 0x0u);
    /* 0048d99e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d9a1: mov dword ptr [eax + edx + 4], esi */ W32((u32)(r_eax+r_edx+0x4u), r_esi);
    /* 0048d9a5: mov dword ptr [eax + edx + 8], edi */ W32((u32)(r_eax+r_edx+0x8u), r_edi);
L_0048d9a9:; BB(0x0048d9a9);
    /* 0048d9a9: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048d9ab: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048d9ae: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0048d9b1: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0048d9b4: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0048d9b7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d9ba: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 0048d9bd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d9c0: mov dword ptr [ebx + 0x7c], ecx */ W32((u32)(r_ebx+0x7cu), r_ecx);
    /* 0048d9c3: mov ebx, dword ptr [eax + 0x74] */ r_ebx = R32((u32)(r_eax+0x74u));
    /* 0048d9c6: mov esi, dword ptr [eax + 0x78] */ r_esi = R32((u32)(r_eax+0x78u));
    /* 0048d9c9: mov edi, dword ptr [eax + 0x7c] */ r_edi = R32((u32)(r_eax+0x7cu));
    /* 0048d9cc: mov dword ptr [eax + 0x50], ebx */ W32((u32)(r_eax+0x50u), r_ebx);
    /* 0048d9cf: mov dword ptr [eax + 0x54], esi */ W32((u32)(r_eax+0x54u), r_esi);
    /* 0048d9d2: mov dword ptr [eax + 0x58], edi */ W32((u32)(r_eax+0x58u), r_edi);
    /* 0048d9d5: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0048d9d8: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0048d9db: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0048d9de: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0048d9e1: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0048d9e4: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0048d9e7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048d9ea: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0048d9ed: mov dword ptr [edx + 0x300], eax */ W32((u32)(r_edx+0x300u), r_eax);
    /* 0048d9f3: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0048d9f6: mov dword ptr [edx + 0x304], eax */ W32((u32)(r_edx+0x304u), r_eax);
    /* 0048d9fc: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0048d9ff: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0048da05: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048da08: mov dword ptr [eax + 0x314], 0 */ W32((u32)(r_eax+0x314u), 0x0u);
    /* 0048da12: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
    /* 0048da1c: mov dword ptr [eax + 0x30c], 0 */ W32((u32)(r_eax+0x30cu), 0x0u);
    /* 0048da26: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x48da2bu); f_0077a684();
    /* 0048da2b: mov esi, eax */ r_esi = r_eax;
    /* 0048da2d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048da2f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x48da34u); f_0077a698();
    /* 0048da34: mov ebx, eax */ r_ebx = r_eax;
    /* 0048da36: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048da38: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x48da3du); f_0077a6b4();
    /* 0048da3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048da40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048da43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048da44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048da45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048da46: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x48da4bu); f_007868f8();
    /* 0048da4b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048da4e: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x48da53u); f_007b4d98();
    /* 0048da53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048da54: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048da57: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0048da5a: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048da5f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0048da62: call 0x48d038 */ r_esp -= 4; W32(r_esp, 0x48da67u); f_0048d038();
    /* 0048da67: call 0x48dafc */ r_esp -= 4; W32(r_esp, 0x48da6cu); f_0048dafc();
    /* 0048da6c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048da6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048da71: mov dword ptr [edx + 0x3d4], eax */ W32((u32)(r_edx+0x3d4u), r_eax);
    /* 0048da77: mov dword ptr [edx + 0x3d8], eax */ W32((u32)(r_edx+0x3d8u), r_eax);
    /* 0048da7d: mov dword ptr [edx + 0x3dc], eax */ W32((u32)(r_edx+0x3dcu), r_eax);
    /* 0048da83: mov dword ptr [edx + 0x3e0], eax */ W32((u32)(r_edx+0x3e0u), r_eax);
    /* 0048da89: call 0x45390c */ r_esp -= 4; W32(r_esp, 0x48da8eu); f_0045390c();
    /* 0048da8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048da91: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
    /* 0048da9b: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0048daa1: call 0x48db1c */ r_esp -= 4; W32(r_esp, 0x48daa6u); f_0048db1c();
    /* 0048daa6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048daa9: mov dword ptr [0xa46f90], 0xbf800000 */ W32((u32)(0xa46f90u), 0xbf800000u);
    /* 0048dab3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048dab5: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 0048dabb: mov dword ptr [0xa46f98], eax */ W32((u32)(0xa46f98u), r_eax);
    /* 0048dac0: mov dword ptr [0xa46f94], eax */ W32((u32)(0xa46f94u), r_eax);
    /* 0048dac5: mov byte ptr [ecx + 0x384], al */ W8((u32)(r_ecx+0x384u), (u8)r_eax);
    /* 0048dacb: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0048dad1: mov eax, dword ptr [0x9a6c64] */ r_eax = R32((u32)(0x9a6c64u));
    /* 0048dad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048dad8: je 0x48dadf */ if (fZ) goto L_0048dadf;
L_0048dada:; BB(0x0048dada);
    /* 0048dada: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48dadcu); call_ind(t); }
    /* 0048dadc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_0048dadf:; BB(0x0048dadf);
    /* 0048dadf: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048dae2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048dae5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048dae8: mov eax, ecx */ r_eax = r_ecx;
    /* 0048daea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048daed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048daf4: mov esp, ebp */ r_esp = r_ebp;
    /* 0048daf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048daf7: ret 8 */ FN_RET(0x0048d814); r_esp += 12; return;
}

void f_0048dafc(void) /* sub_48DAFC */
{
    FN_ENTER(0x0048dafc);
    /* 0048dafc: mov dword ptr [0xa46f8c], 0 */ W32((u32)(0xa46f8cu), 0x0u);
    /* 0048db06: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x48db0bu); f_007a61a4();
    /* 0048db0b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048db0e: jne 0x48db1a */ if (!fZ) goto L_0048db1a;
L_0048db10:; BB(0x0048db10);
    /* 0048db10: mov dword ptr [0xa46f8c], 1 */ W32((u32)(0xa46f8cu), 0x1u);
L_0048db1a:; BB(0x0048db1a);
    /* 0048db1a: ret  */ FN_RET(0x0048dafc); r_esp += 4; return;
}

void f_0048db1c(void) /* sub_48DB1C */
{
    FN_ENTER(0x0048db1c);
    /* 0048db1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048db1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048db1f: mov eax, dword ptr [ebx + 0x38c] */ r_eax = R32((u32)(r_ebx+0x38cu));
    /* 0048db25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048db27: je 0x48db2b */ if (fZ) goto L_0048db2b;
L_0048db29:; BB(0x0048db29);
    /* 0048db29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048db2a: ret  */ FN_RET(0x0048db1c); r_esp += 4; return;
L_0048db2b:; BB(0x0048db2b);
    /* 0048db2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048db2c: call 0x49233c */ r_esp -= 4; W32(r_esp, 0x48db31u); f_0049233c();
    /* 0048db31: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0048db37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048db38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048db39: ret  */ FN_RET(0x0048db1c); r_esp += 4; return;
}

void f_0048db3c(void) /* sub_48DB3C */
{
    FN_ENTER(0x0048db3c);
    /* 0048db3c: call 0x67ab60 */ r_esp -= 4; W32(r_esp, 0x48db41u); f_0067ab60();
    /* 0048db41: call 0x4923f0 */ r_esp -= 4; W32(r_esp, 0x48db46u); f_004923f0();
    /* 0048db46: call 0x48ff40 */ r_esp -= 4; W32(r_esp, 0x48db4bu); f_0048ff40();
    /* 0048db4b: call 0x48cb04 */ r_esp -= 4; W32(r_esp, 0x48db50u); f_0048cb04();
    /* 0048db50: mov ecx, dword ptr [0xa46fa0] */ r_ecx = R32((u32)(0xa46fa0u));
    /* 0048db56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048db58: je 0x48db61 */ if (fZ) goto L_0048db61;
L_0048db5a:; BB(0x0048db5a);
    /* 0048db5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048db5c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x48db61u); f_004066a8();
L_0048db61:; BB(0x0048db61);
    /* 0048db61: mov dword ptr [0xa46fa0], 0 */ W32((u32)(0xa46fa0u), 0x0u);
    /* 0048db6b: ret  */ FN_RET(0x0048db3c); r_esp += 4; return;
}

void f_0048db6c(void) /* sub_48DB6C */
{
    FN_ENTER(0x0048db6c);
    /* 0048db6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048db6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048db6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048db6f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0048db73: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0048db77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048db78: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x48db7du); f_00786b3c();
    /* 0048db7d: mov esi, eax */ r_esi = r_eax;
    /* 0048db7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048db82: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048db84: je 0x48dbef */ if (fZ) goto L_0048dbef;
L_0048db86:; BB(0x0048db86);
    /* 0048db86: cmp esi, dword ptr [0xa46f9c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa46f9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048db8c: je 0x48db92 */ if (fZ) goto L_0048db92;
L_0048db8e:; BB(0x0048db8e);
    /* 0048db8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048db8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048db90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048db91: ret  */ FN_RET(0x0048db6c); r_esp += 4; return;
L_0048db92:; BB(0x0048db92);
    /* 0048db92: movsx ebx, byte ptr [edi + 4] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edi+0x4u));
    /* 0048db96: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048db98: jl 0x48dbe1 */ if ((fS!=fO)) goto L_0048dbe1;
L_0048db9a:; BB(0x0048db9a);
    /* 0048db9a: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048db9d: jge 0x48dbe1 */ if ((fS==fO)) goto L_0048dbe1;
L_0048db9f:; BB(0x0048db9f);
    /* 0048db9f: mov edx, dword ptr [esi + 0x380] */ r_edx = R32((u32)(r_esi+0x380u));
    /* 0048dba5: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dba7: je 0x48dbe1 */ if (fZ) goto L_0048dbe1;
L_0048dba9:; BB(0x0048dba9);
    /* 0048dba9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048dbab: jl 0x48dbe1 */ if ((fS!=fO)) goto L_0048dbe1;
L_0048dbad:; BB(0x0048dbad);
    /* 0048dbad: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dbb0: jge 0x48dbe1 */ if ((fS==fO)) goto L_0048dbe1;
L_0048dbb2:; BB(0x0048dbb2);
    /* 0048dbb2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dbb5: je 0x48dbc9 */ if (fZ) goto L_0048dbc9;
L_0048dbb7:; BB(0x0048dbb7);
    /* 0048dbb7: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0048dbba: mov edx, dword ptr [edx*4 + 0x9a6c68] */ r_edx = R32((u32)(r_edx*4+0x9a6c68u));
    /* 0048dbc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dbc3: je 0x48dbc9 */ if (fZ) goto L_0048dbc9;
L_0048dbc5:; BB(0x0048dbc5);
    /* 0048dbc5: mov ecx, esi */ r_ecx = r_esi;
    /* 0048dbc7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x48dbc9u); call_ind(t); }
L_0048dbc9:; BB(0x0048dbc9);
    /* 0048dbc9: mov dword ptr [esi + 0x380], ebx */ W32((u32)(r_esi+0x380u), r_ebx);
    /* 0048dbcf: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 0048dbd2: mov edx, dword ptr [edx*4 + 0x9a6c64] */ r_edx = R32((u32)(r_edx*4+0x9a6c64u));
    /* 0048dbd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dbdb: je 0x48dbe1 */ if (fZ) goto L_0048dbe1;
L_0048dbdd:; BB(0x0048dbdd);
    /* 0048dbdd: mov ecx, esi */ r_ecx = r_esi;
    /* 0048dbdf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x48dbe1u); call_ind(t); }
L_0048dbe1:; BB(0x0048dbe1);
    /* 0048dbe1: movsx edx, byte ptr [edi + 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x5u));
    /* 0048dbe5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048dbe7: jl 0x48dbef */ if ((fS!=fO)) goto L_0048dbef;
L_0048dbe9:; BB(0x0048dbe9);
    /* 0048dbe9: mov byte ptr [esi + 0x384], dl */ W8((u32)(r_esi+0x384u), (u8)r_edx);
L_0048dbef:; BB(0x0048dbef);
    /* 0048dbef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048dbf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048dbf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048dbf2: ret  */ FN_RET(0x0048db6c); r_esp += 4; return;
}

void f_0048dbf4(void) /* sub_48DBF4 */
{
    FN_ENTER(0x0048dbf4);
    /* 0048dbf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048dbf5: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0048dbf9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048dbfb: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0048dbff: je 0x48dc38 */ if (fZ) goto L_0048dc38;
L_0048dc01:; BB(0x0048dc01);
    /* 0048dc01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048dc03: je 0x48dc38 */ if (fZ) goto L_0048dc38;
L_0048dc05:; BB(0x0048dc05);
    /* 0048dc05: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048dc0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048dc0c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0048dc0e: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0048dc11: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048dc14: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0048dc17: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0048dc1a: mov dword ptr [ebp + 0x40], ecx */ W32((u32)(r_ebp+0x40u), r_ecx);
    /* 0048dc1d: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0048dc20: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0048dc23: mov dword ptr [ebp + 0x4c], ecx */ W32((u32)(r_ebp+0x4cu), r_ecx);
    /* 0048dc26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048dc28: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x48dc2du); f_007b52c4();
    /* 0048dc2d: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0048dc30: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048dc33: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0048dc36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048dc37: ret  */ FN_RET(0x0048dbf4); r_esp += 4; return;
L_0048dc38:; BB(0x0048dc38);
    /* 0048dc38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048dc39: ret  */ FN_RET(0x0048dbf4); r_esp += 4; return;
}

void f_0048dc3c(void) /* sub_48DC3C */
{
    FN_ENTER(0x0048dc3c);
    /* 0048dc3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048dc3d: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x48dc42u); f_00717f74();
    /* 0048dc42: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048dc47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048dc49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048dc4b: jle 0x48dc71 */ if ((fZ||fS!=fO)) goto L_0048dc71;
L_0048dc4d:; BB(0x0048dc4d);
    /* 0048dc4d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0048dc50: mov ebx, edx */ r_ebx = r_edx;
L_0048dc52:; BB(0x0048dc52);
    /* 0048dc52: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048dc59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dc5b: je 0x48dc67 */ if (fZ) goto L_0048dc67;
L_0048dc5d:; BB(0x0048dc5d);
    /* 0048dc5d: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x48dc62u); f_00685550();
    /* 0048dc62: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0048dc67:; BB(0x0048dc67);
    /* 0048dc67: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048dc6a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048dc6c: jl 0x48dc52 */ if ((fS!=fO)) goto L_0048dc52;
L_0048dc6e:; BB(0x0048dc6e);
    /* 0048dc6e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0048dc71:; BB(0x0048dc71);
    /* 0048dc71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048dc72: ret  */ FN_RET(0x0048dc3c); r_esp += 4; return;
}

void f_0048dc74(void) /* sub_48DC74 */
{
    FN_ENTER(0x0048dc74);
    /* 0048dc74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048dc75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048dc76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048dc77: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048dc7a: movzx eax, byte ptr [0xa46f5c] */ r_eax = (u32)R8((u32)(0xa46f5cu));
    /* 0048dc81: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048dc83: jne 0x48dcad */ if (!fZ) goto L_0048dcad;
L_0048dc85:; BB(0x0048dc85);
    /* 0048dc85: mov dword ptr [0xa46f60], 0xc61c4000 */ W32((u32)(0xa46f60u), 0xc61c4000u);
    /* 0048dc8f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048dc94: mov byte ptr [0xa46f5c], al */ W8((u32)(0xa46f5cu), (u8)r_eax);
    /* 0048dc99: mov dword ptr [0xa46f64], 0x41200000 */ W32((u32)(0xa46f64u), 0x41200000u);
    /* 0048dca3: mov dword ptr [0xa46f68], 0 */ W32((u32)(0xa46f68u), 0x0u);
L_0048dcad:; BB(0x0048dcad);
    /* 0048dcad: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0048dcb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048dcb5: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dcb8: jg 0x48dcc1 */ if ((!fZ&&fS==fO)) goto L_0048dcc1;
L_0048dcba:; BB(0x0048dcba);
    /* 0048dcba: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 0048dcbf: jmp 0x48dccd */ goto L_0048dccd;
L_0048dcc1:; BB(0x0048dcc1);
    /* 0048dcc1: lea ebx, [esi - 1] */ r_ebx = (u32)(r_esi+0xffffffffu);
    /* 0048dcc4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048dcc6: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 0048dccb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0048dccb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0048dccb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_0048dccd:; BB(0x0048dccd);
    /* 0048dccd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048dccf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048dcd1: jle 0x48dd02 */ if ((fZ||fS!=fO)) goto L_0048dd02;
L_0048dcd3:; BB(0x0048dcd3);
    /* 0048dcd3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048dcd7: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0048dcdb: mov ebp, ecx */ r_ebp = r_ecx;
L_0048dcdd:; BB(0x0048dcdd);
    /* 0048dcdd: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048dce4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dce6: je 0x48dcf7 */ if (fZ) goto L_0048dcf7;
L_0048dce8:; BB(0x0048dce8);
    /* 0048dce8: mov eax, dword ptr [edi + 0x3ec] */ r_eax = R32((u32)(r_edi+0x3ecu));
    /* 0048dcee: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dcf1: je 0x48ddf1 */ if (fZ) goto L_0048ddf1;
L_0048dcf7:; BB(0x0048dcf7);
    /* 0048dcf7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048dcfa: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dcfc: jl 0x48dcdd */ if ((fS!=fO)) goto L_0048dcdd;
L_0048dcfe:; BB(0x0048dcfe);
    /* 0048dcfe: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0048dd02:; BB(0x0048dd02);
    /* 0048dd02: add esi, dword ptr [0xaae164] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048dd08: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0048dd0d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dd0f: jge 0x48dde5 */ if ((fS==fO)) goto L_0048dde5;
L_0048dd15:; BB(0x0048dd15);
    /* 0048dd15: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 0048dd1c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dd1e: je 0x48ddda */ if (fZ) goto L_0048ddda;
L_0048dd24:; BB(0x0048dd24);
    /* 0048dd24: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0048dd2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dd2c: je 0x48ddda */ if (fZ) goto L_0048ddda;
L_0048dd32:; BB(0x0048dd32);
    /* 0048dd32: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0048dd35: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dd3b: je 0x48ddda */ if (fZ) goto L_0048ddda;
L_0048dd41:; BB(0x0048dd41);
    /* 0048dd41: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0048dd44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048dd45: push 0x90155c */ { u32 v = 0x90155cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048dd4a: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x48dd4fu); f_00836208();
    /* 0048dd4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048dd52: fcomp dword ptr [0x901558] */ fx_compare(ST(0), R_F32((u32)(0x901558u))); FPOP();
    /* 0048dd58: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048dd5a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048dd5b: jbe 0x48dd64 */ if ((fC||fZ)) goto L_0048dd64;
L_0048dd5d:; BB(0x0048dd5d);
    /* 0048dd5d: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0048dd62: jmp 0x48ddda */ goto L_0048ddda;
L_0048dd64:; BB(0x0048dd64);
    /* 0048dd64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048dd65: push 0x90162c */ { u32 v = 0x90162cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048dd6a: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x48dd6fu); f_00836208();
    /* 0048dd6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048dd72: fcomp dword ptr [0x901554] */ fx_compare(ST(0), R_F32((u32)(0x901554u))); FPOP();
    /* 0048dd78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048dd7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048dd7b: ja 0x48dd84 */ if ((!fC&&!fZ)) goto L_0048dd84;
L_0048dd7d:; BB(0x0048dd7d);
    /* 0048dd7d: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0048dd82: jmp 0x48ddda */ goto L_0048ddda;
L_0048dd84:; BB(0x0048dd84);
    /* 0048dd84: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048dd87: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048dd8a: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0048dd8d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048dd90: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0048dd93: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0048dd97: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048dd9b: mov edx, 0x90155c */ r_edx = 0x90155cu;
    /* 0048dda0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48dda5u); f_0082f9c4();
    /* 0048dda5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048dda8: mov edx, 0x90162c */ r_edx = 0x90162cu;
    /* 0048ddad: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48ddb2u); f_0082ebac();
    /* 0048ddb2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0048ddb5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0048ddb9: mov dword ptr [esp + 4], 0x40f00000 */ W32((u32)(r_esp+0x4u), 0x40f00000u);
    /* 0048ddc1: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0048ddc4: mov dword ptr [ebx + 0x3c], 0x40f00000 */ W32((u32)(r_ebx+0x3cu), 0x40f00000u);
    /* 0048ddcb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ddcc: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0048ddcf: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x48ddd4u); f_007b999c();
    /* 0048ddd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ddd5: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_0048ddda:; BB(0x0048ddda);
    /* 0048ddda: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048dddd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dddf: jl 0x48dd15 */ if ((fS!=fO)) goto L_0048dd15;
L_0048dde5:; BB(0x0048dde5);
    /* 0048dde5: call 0x505a28 */ r_esp -= 4; W32(r_esp, 0x48ddeau); f_00505a28();
    /* 0048ddea: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048dded: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ddee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ddef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ddf0: ret  */ FN_RET(0x0048dc74); r_esp += 4; return;
L_0048ddf1:; BB(0x0048ddf1);
    /* 0048ddf1: fld dword ptr [0xa46f60] */ FPUSH(R_F32((u32)(0xa46f60u)));
    /* 0048ddf7: mov esi, dword ptr [0xa46f64] */ r_esi = R32((u32)(0xa46f64u));
    /* 0048ddfd: fld dword ptr [0xa46f68] */ FPUSH(R_F32((u32)(0xa46f68u)));
    /* 0048de03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048de05: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0048de09: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0048de0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048de0f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x48de14u); f_0082dcbc();
    /* 0048de14: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0048de18: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048de1c: fmul dword ptr [0x90163c] */ ST(0) = ST(0) * R_F32((u32)(0x90163cu));
    /* 0048de22: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0048de26: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0048de2a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048de2c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x48de31u); f_0082ddd8();
    /* 0048de31: fmul dword ptr [0x90163c] */ ST(0) = ST(0) * R_F32((u32)(0x90163cu));
    /* 0048de37: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048de3b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048de3f: fst dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0));
    /* 0048de42: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 0048de45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048de47: fst dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0));
    /* 0048de4a: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 0048de4d: lea eax, [ebp + 0x8000] */ r_eax = (u32)(r_ebp+0x8000u);
    /* 0048de53: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 0048de56: mov dword ptr [edi + 0x48], esi */ W32((u32)(r_edi+0x48u), r_esi);
    /* 0048de59: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0048de5c: mov ecx, edi */ r_ecx = r_edi;
    /* 0048de5e: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x48de63u); f_0069357c();
    /* 0048de63: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0048de6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048de6d: jne 0x48de76 */ if (!fZ) goto L_0048de76;
L_0048de6f:; BB(0x0048de6f);
    /* 0048de6f: mov eax, 1 */ r_eax = 0x1u;
    /* 0048de74: jmp 0x48de78 */ goto L_0048de78;
L_0048de76:; BB(0x0048de76);
    /* 0048de76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0048de78:; BB(0x0048de78);
    /* 0048de78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048de7a: je 0x48de87 */ if (fZ) goto L_0048de87;
L_0048de7c:; BB(0x0048de7c);
    /* 0048de7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048de7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048de7f: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x48de84u); f_004d2fb4();
    /* 0048de84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048de87:; BB(0x0048de87);
    /* 0048de87: add ebp, dword ptr [esp + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048de8b: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0048de91: jmp 0x48dcf7 */ goto L_0048dcf7;
}

void f_0048de98(void) /* sub_48DE98 */
{
    FN_ENTER(0x0048de98);
    /* 0048de98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048de99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048de9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048de9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048de9c: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048de9f: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048dea4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048dea6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048dea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048deaa: jle 0x48dee8 */ if ((fZ||fS!=fO)) goto L_0048dee8;
L_0048deac:; BB(0x0048deac);
    /* 0048deac: mov ebp, eax */ r_ebp = r_eax;
    /* 0048deae: mov esi, edx */ r_esi = r_edx;
L_0048deb0:; BB(0x0048deb0);
    /* 0048deb0: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0048deb7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048deb9: je 0x48dedd */ if (fZ) goto L_0048dedd;
L_0048debb:; BB(0x0048debb);
    /* 0048debb: mov eax, edi */ r_eax = r_edi;
    /* 0048debd: call 0x48df4c */ r_esp -= 4; W32(r_esp, 0x48dec2u); f_0048df4c();
    /* 0048dec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dec4: je 0x48dedd */ if (fZ) goto L_0048dedd;
L_0048dec6:; BB(0x0048dec6);
    /* 0048dec6: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0048dec9: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048decf: jne 0x48dedd */ if (!fZ) goto L_0048dedd;
L_0048ded1:; BB(0x0048ded1);
    /* 0048ded1: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0048ded5: mov word ptr [esp + ebx*2 + 4], cx */ W16((u32)(r_esp+r_ebx*2+0x4u), (u16)r_ecx);
    /* 0048deda: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0048dedd:; BB(0x0048dedd);
    /* 0048dedd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048dee0: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dee2: jl 0x48deb0 */ if ((fS!=fO)) goto L_0048deb0;
L_0048dee4:; BB(0x0048dee4);
    /* 0048dee4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dee6: jne 0x48def5 */ if (!fZ) goto L_0048def5;
L_0048dee8:; BB(0x0048dee8);
    /* 0048dee8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0048deed: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048def0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048def1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048def2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048def3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048def4: ret  */ FN_RET(0x0048de98); r_esp += 4; return;
L_0048def5:; BB(0x0048def5);
    /* 0048def5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48defau); f_008587a5();
    /* 0048defa: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0048defe: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0048df02: fadd dword ptr [0x901608] */ ST(0) = ST(0) + R_F32((u32)(0x901608u));
    /* 0048df08: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048df0c: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0048df10: fdiv dword ptr [0x901604] */ ST(0) = ST(0) / R_F32((u32)(0x901604u));
    /* 0048df16: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048df18: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0048df1c: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0048df21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048df26: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048df2a: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0048df2e: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0048df32: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0048df36: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0048df3a: movzx eax, word ptr [esp + edx*2 + 4] */ r_eax = (u32)R16((u32)(r_esp+r_edx*2+0x4u));
    /* 0048df3f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048df42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048df43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048df44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048df45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048df46: ret  */ FN_RET(0x0048de98); r_esp += 4; return;
}

void f_0048df48(void) /* sub_48DF48 */
{
    FN_ENTER(0x0048df48);
    /* 0048df48: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048df4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048df4e: je 0x48df5b */ if (fZ) goto L_0048df5b;
L_0048df50:; BB(0x0048df50);
    /* 0048df50: mov eax, dword ptr [eax + 0x3ec] */ r_eax = R32((u32)(r_eax+0x3ecu));
    /* 0048df56: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048df59: je 0x48df5e */ if (fZ) goto L_0048df5e;
L_0048df5b:; BB(0x0048df5b);
    /* 0048df5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048df5d: ret  */ FN_RET(0x0048df48); r_esp += 4; return;
L_0048df5e:; BB(0x0048df5e);
    /* 0048df5e: mov eax, 1 */ r_eax = 0x1u;
    /* 0048df63: ret  */ FN_RET(0x0048df48); r_esp += 4; return;
}

void f_0048df4c(void) /* sub_48DF4C */
{
    FN_ENTER(0x0048df4c);
    /* 0048df4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048df4e: je 0x48df5b */ if (fZ) goto L_0048df5b;
L_0048df50:; BB(0x0048df50);
    /* 0048df50: mov eax, dword ptr [eax + 0x3ec] */ r_eax = R32((u32)(r_eax+0x3ecu));
    /* 0048df56: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048df59: je 0x48df5e */ if (fZ) goto L_0048df5e;
L_0048df5b:; BB(0x0048df5b);
    /* 0048df5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048df5d: ret  */ FN_RET(0x0048df4c); r_esp += 4; return;
L_0048df5e:; BB(0x0048df5e);
    /* 0048df5e: mov eax, 1 */ r_eax = 0x1u;
    /* 0048df63: ret  */ FN_RET(0x0048df4c); r_esp += 4; return;
}

void f_0048df64(void) /* sub_48DF64 */
{
    FN_ENTER(0x0048df64);
    /* 0048df64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048df65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048df66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048df67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048df68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048df6b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0048df70: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0048df75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048df77: mov word ptr [0xa46f84], ax */ W16((u32)(0xa46f84u), (u16)r_eax);
    /* 0048df7d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0048df81: mov word ptr [0xa46f86], ax */ W16((u32)(0xa46f86u), (u16)r_eax);
    /* 0048df87: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0048df8b: mov word ptr [0xa46f88], ax */ W16((u32)(0xa46f88u), (u16)r_eax);
    /* 0048df91: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0048df95: mov word ptr [0xa46f8a], ax */ W16((u32)(0xa46f8au), (u16)r_eax);
    /* 0048df9b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048dfa0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0048dfa4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048dfa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048dfa8: jle 0x48dff7 */ if ((fZ||fS!=fO)) goto L_0048dff7;
L_0048dfaa:; BB(0x0048dfaa);
    /* 0048dfaa: mov ebp, eax */ r_ebp = r_eax;
    /* 0048dfac: mov ebx, edx */ r_ebx = r_edx;
    /* 0048dfae: mov esi, ecx */ r_esi = r_ecx;
L_0048dfb0:; BB(0x0048dfb0);
    /* 0048dfb0: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0048dfb7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dfb9: je 0x48dfee */ if (fZ) goto L_0048dfee;
L_0048dfbb:; BB(0x0048dfbb);
    /* 0048dfbb: mov eax, edi */ r_eax = r_edi;
    /* 0048dfbd: call 0x48df4c */ r_esp -= 4; W32(r_esp, 0x48dfc2u); f_0048df4c();
    /* 0048dfc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dfc4: je 0x48dfee */ if (fZ) goto L_0048dfee;
L_0048dfc6:; BB(0x0048dfc6);
    /* 0048dfc6: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0048dfc9: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dfce: jne 0x48dfee */ if (!fZ) goto L_0048dfee;
L_0048dfd0:; BB(0x0048dfd0);
    /* 0048dfd0: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0048dfd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048dfd9: je 0x48dfee */ if (fZ) goto L_0048dfee;
L_0048dfdb:; BB(0x0048dfdb);
    /* 0048dfdb: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 0048dfdf: mov word ptr [ebx*2 + 0xa46f84], di */ W16((u32)(r_ebx*2+0xa46f84u), (u16)r_edi);
    /* 0048dfe7: mov dword ptr [esp + ebx*4 + 4], eax */ W32((u32)(r_esp+r_ebx*4+0x4u), r_eax);
    /* 0048dfeb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0048dfee:; BB(0x0048dfee);
    /* 0048dfee: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048dff1: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048dff3: jl 0x48dfb0 */ if ((fS!=fO)) goto L_0048dfb0;
L_0048dff5:; BB(0x0048dff5);
    /* 0048dff5: mov edx, ebx */ r_edx = r_ebx;
L_0048dff7:; BB(0x0048dff7);
    /* 0048dff7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0048dffb: mov eax, 2 */ r_eax = 0x2u;
L_0048e000:; BB(0x0048e000);
    /* 0048e000: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048e002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e004: jl 0x48e043 */ if ((fS!=fO)) goto L_0048e043;
L_0048e006:; BB(0x0048e006);
    /* 0048e006: mov esi, dword ptr [esp + edx*4 + 4] */ r_esi = R32((u32)(r_esp+r_edx*4+0x4u));
    /* 0048e00a: mov ebx, dword ptr [esp + edx*4 + 8] */ r_ebx = R32((u32)(r_esp+r_edx*4+0x8u));
    /* 0048e00e: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 0048e011: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e013: jge 0x48e03d */ if ((fS==fO)) goto L_0048e03d;
L_0048e015:; BB(0x0048e015);
    /* 0048e015: movzx ebp, word ptr [edx*2 + 0xa46f84] */ r_ebp = (u32)R16((u32)(r_edx*2+0xa46f84u));
    /* 0048e01d: movzx ecx, word ptr [edi*2 + 0xa46f84] */ r_ecx = (u32)R16((u32)(r_edi*2+0xa46f84u));
    /* 0048e025: mov word ptr [edx*2 + 0xa46f84], cx */ W16((u32)(r_edx*2+0xa46f84u), (u16)r_ecx);
    /* 0048e02d: mov dword ptr [esp + edx*4 + 4], ebx */ W32((u32)(r_esp+r_edx*4+0x4u), r_ebx);
    /* 0048e031: mov word ptr [edi*2 + 0xa46f84], bp */ W16((u32)(r_edi*2+0xa46f84u), (u16)r_ebp);
    /* 0048e039: mov dword ptr [esp + edi*4 + 4], esi */ W32((u32)(r_esp+r_edi*4+0x4u), r_esi);
L_0048e03d:; BB(0x0048e03d);
    /* 0048e03d: mov edx, edi */ r_edx = r_edi;
    /* 0048e03f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048e041: jle 0x48e006 */ if ((fZ||fS!=fO)) goto L_0048e006;
L_0048e043:; BB(0x0048e043);
    /* 0048e043: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048e046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048e048: jge 0x48e000 */ if ((fS==fO)) goto L_0048e000;
L_0048e04a:; BB(0x0048e04a);
    /* 0048e04a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0048e04e: mov eax, edx */ r_eax = r_edx;
    /* 0048e050: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048e053: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048e054: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048e055: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048e056: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048e057: ret  */ FN_RET(0x0048df64); r_esp += 4; return;
}

