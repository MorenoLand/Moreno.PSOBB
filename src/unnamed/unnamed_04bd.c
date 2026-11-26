#include "protos.h"

void f_004bd17c(void) /* sub_4BD17C */
{
    FN_ENTER(0x004bd17c);
    /* 004bd17c: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bd17f: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd182: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bd185: mov dword ptr [ecx + 0x34], 1 */ W32((u32)(r_ecx+0x34u), 0x1u);
    /* 004bd18c: ret  */ FN_RET(0x004bd17c); r_esp += 4; return;
}

void f_004bd190(void) /* sub_4BD190 */
{
    FN_ENTER(0x004bd190);
    /* 004bd190: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004bd194: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004bd198: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004bd19a: jle 0x4bd1a4 */ if ((fZ||fS!=fO)) goto L_004bd1a4;
L_004bd19c:; BB(0x004bd19c);
    /* 004bd19c: cmp edx, 0x258 */ {  u32 a = r_edx; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bd1a2: jl 0x4bd1a9 */ if ((fS!=fO)) goto L_004bd1a9;
L_004bd1a4:; BB(0x004bd1a4);
    /* 004bd1a4: mov edx, 0x78 */ r_edx = 0x78u;
L_004bd1a9:; BB(0x004bd1a9);
    /* 004bd1a9: mov dword ptr [ecx + 0x168], edx */ W32((u32)(r_ecx+0x168u), r_edx);
    /* 004bd1af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004bd1b1: mov dword ptr [ecx + 0x14c], edx */ W32((u32)(r_ecx+0x14cu), r_edx);
    /* 004bd1b7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bd1ba: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 004bd1c0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004bd1c3: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
    /* 004bd1c9: call 0x4bd1d4 */ r_esp -= 4; W32(r_esp, 0x4bd1ceu); f_004bd1d4();
    /* 004bd1ce: ret 8 */ FN_RET(0x004bd190); r_esp += 12; return;
}

void f_004bd1d4(void) /* sub_4BD1D4 */
{
    FN_ENTER(0x004bd1d4);
    /* 004bd1d4: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bd1d7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd1da: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bd1dd: mov dword ptr [ecx + 0x34], 2 */ W32((u32)(r_ecx+0x34u), 0x2u);
    /* 004bd1e4: ret  */ FN_RET(0x004bd1d4); r_esp += 4; return;
}

void f_004bd1e8(void) /* sub_4BD1E8 */
{
    FN_ENTER(0x004bd1e8);
    /* 004bd1e8: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bd1eb: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd1ee: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bd1f1: mov dword ptr [ecx + 0x34], 5 */ W32((u32)(r_ecx+0x34u), 0x5u);
    /* 004bd1f8: ret  */ FN_RET(0x004bd1e8); r_esp += 4; return;
}

void f_004bd1fc(void) /* sub_4BD1FC */
{
    FN_ENTER(0x004bd1fc);
    /* 004bd1fc: mov eax, dword ptr [0xa47f24] */ r_eax = R32((u32)(0xa47f24u));
    /* 004bd201: mov dword ptr [ecx + 0x138], eax */ W32((u32)(r_ecx+0x138u), r_eax);
    /* 004bd207: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd209: mov dword ptr [ecx + 0x140], edx */ W32((u32)(r_ecx+0x140u), r_edx);
    /* 004bd20f: mov dword ptr [ecx + 0x144], 0xbde */ W32((u32)(r_ecx+0x144u), 0xbdeu);
    /* 004bd219: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004bd21c: ret  */ FN_RET(0x004bd1fc); r_esp += 4; return;
}

void f_004bd220(void) /* sub_4BD220 */
{
    FN_ENTER(0x004bd220);
    /* 004bd220: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004bd223: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004bd226: mov eax, 0 */ r_eax = 0x0u;
    /* 004bd22b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004bd22e: ret  */ FN_RET(0x004bd220); r_esp += 4; return;
}

void f_004bd230(void) /* sub_4BD230 */
{
    FN_ENTER(0x004bd230);
    /* 004bd230: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bd233: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd236: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bd239: ret  */ FN_RET(0x004bd230); r_esp += 4; return;
}

void f_004bd23c(void) /* sub_4BD23C */
{
    FN_ENTER(0x004bd23c);
    /* 004bd23c: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bd23f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd242: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bd245: ret  */ FN_RET(0x004bd23c); r_esp += 4; return;
}

void f_004bd248(void) /* sub_4BD248 */
{
    FN_ENTER(0x004bd248);
    /* 004bd248: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd24a: mov dword ptr [0xa47f40], eax */ W32((u32)(0xa47f40u), r_eax);
    /* 004bd24f: mov dword ptr [0xa47f34], eax */ W32((u32)(0xa47f34u), r_eax);
    /* 004bd254: mov dword ptr [0xa47f38], eax */ W32((u32)(0xa47f38u), r_eax);
    /* 004bd259: mov dword ptr [0xa47f3c], eax */ W32((u32)(0xa47f3cu), r_eax);
    /* 004bd25e: ret  */ FN_RET(0x004bd248); r_esp += 4; return;
}

void f_004bd260(void) /* sub_4BD260 */
{
    FN_ENTER(0x004bd260);
    /* 004bd260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bd261: mov ebp, esp */ r_ebp = r_esp;
    /* 004bd263: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd265: push 0x8d106c */ { u32 v = 0x8d106cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd26a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bd270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd271: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bd278: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bd27b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bd27e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004bd281: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004bd284: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004bd287: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004bd28a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd28d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 004bd290: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004bd293: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bd298u); f_008193cc();
    /* 004bd298: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bd29f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004bd2a2: mov dword ptr [edx], 0xafb250 */ W32((u32)(r_edx), 0xafb250u);
    /* 004bd2a8: mov eax, dword ptr [0x9abce8] */ r_eax = R32((u32)(0x9abce8u));
    /* 004bd2ad: mov dword ptr [edx + 0x34], 0x3727c5ac */ W32((u32)(r_edx+0x34u), 0x3727c5acu);
    /* 004bd2b4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004bd2b7: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 004bd2be: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bd2c3u); f_008587a5();
    /* 004bd2c3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004bd2c6: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 004bd2cd: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004bd2d0: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004bd2d3: fdiv dword ptr [0x907360] */ ST(0) = ST(0) / R_F32((u32)(0x907360u));
    /* 004bd2d9: fmul dword ptr [0x907364] */ ST(0) = ST(0) * R_F32((u32)(0x907364u));
    /* 004bd2df: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 004bd2e2: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 004bd2e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bd2eb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004bd2ee: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 004bd2f1: fistp dword ptr [edx + 0x2c] */ W32((u32)(r_edx+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004bd2f4: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004bd2f7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bd2fcu); f_008587a5();
    /* 004bd2fc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004bd2ff: fld dword ptr [0x90735c] */ FPUSH(R_F32((u32)(0x90735cu)));
    /* 004bd305: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bd308: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004bd30a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004bd30d: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004bd310: fdiv dword ptr [0x907360] */ ST(0) = ST(0) / R_F32((u32)(0x907360u));
    /* 004bd316: fmul dword ptr [0x907358] */ ST(0) = ST(0) * R_F32((u32)(0x907358u));
    /* 004bd31c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bd31e: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 004bd321: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd324: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004bd327: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bd32cu); f_008587a5();
    /* 004bd32c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004bd32f: fld dword ptr [0x90735c] */ FPUSH(R_F32((u32)(0x90735cu)));
    /* 004bd335: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004bd338: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 004bd33b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004bd33e: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004bd341: fdiv dword ptr [0x907360] */ ST(0) = ST(0) / R_F32((u32)(0x907360u));
    /* 004bd347: fmul dword ptr [0x907358] */ ST(0) = ST(0) * R_F32((u32)(0x907358u));
    /* 004bd34d: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd352: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bd354: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 004bd357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bd359: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004bd35c: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004bd35f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 004bd361: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 004bd364: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 004bd367: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004bd36a: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 004bd36d: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 004bd370: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 004bd373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd374: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4bd379u); f_00509590();
    /* 004bd379: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd37c: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004bd37f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bd382: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bd385: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 004bd388: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd38a: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004bd38d: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
    /* 004bd394: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004bd397: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004bd39a: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 004bd39d: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 004bd3a0: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 004bd3a3: mov dword ptr [ebx + 0x5c], edx */ W32((u32)(r_ebx+0x5cu), r_edx);
    /* 004bd3a6: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 004bd3a9: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 004bd3ac: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 004bd3af: mov dword ptr [ebx + 0x6c], edx */ W32((u32)(r_ebx+0x6cu), r_edx);
    /* 004bd3b2: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 004bd3b5: mov ecx, dword ptr [0xa47f34] */ r_ecx = R32((u32)(0xa47f34u));
    /* 004bd3bb: mov dword ptr [ebx + 0x78], ecx */ W32((u32)(r_ebx+0x78u), r_ecx);
    /* 004bd3be: mov eax, ebx */ r_eax = r_ebx;
    /* 004bd3c0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bd3c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bd3c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bd3cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004bd3cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bd3d0: ret 8 */ FN_RET(0x004bd260); r_esp += 12; return;
}

void f_004bd3d4(void) /* sub_4BD3D4 */
{
    FN_ENTER(0x004bd3d4);
    /* 004bd3d4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bd3d7: mov edx, ecx */ r_edx = r_ecx;
    /* 004bd3d9: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004bd3dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd3de: je 0x4bd56f */ if (fZ) goto L_004bd56f;
L_004bd3e4:; BB(0x004bd3e4);
    /* 004bd3e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd3e7: je 0x4bd545 */ if (fZ) goto L_004bd545;
L_004bd3ed:; BB(0x004bd3ed);
    /* 004bd3ed: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd3f0: jne 0x4bd537 */ if (!fZ) goto L_004bd537;
L_004bd3f6:; BB(0x004bd3f6);
    /* 004bd3f6: fld dword ptr [0x90734c] */ FPUSH(R_F32((u32)(0x90734cu)));
    /* 004bd3fc: fadd dword ptr [edx + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x74u));
    /* 004bd3ff: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004bd402: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 004bd405: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004bd408: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004bd40b: fadd dword ptr [ecx*4 + 0x9072a0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x9072a0u));
    /* 004bd412: fadd dword ptr [0x907350] */ ST(0) = ST(0) + R_F32((u32)(0x907350u));
    /* 004bd418: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bd41a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bd41c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bd41d: ja 0x4bd426 */ if ((!fC&&!fZ)) goto L_004bd426;
L_004bd41f:; BB(0x004bd41f);
    /* 004bd41f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004bd421: fstp dword ptr [edx + 0x74] */ W_F32((u32)(r_edx+0x74u), ST(0)); FPOP();
    /* 004bd424: jmp 0x4bd42b */ goto L_004bd42b;
L_004bd426:; BB(0x004bd426);
    /* 004bd426: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bd428: fstp dword ptr [edx + 0x74] */ W_F32((u32)(r_edx+0x74u), ST(0)); FPOP();
L_004bd42b:; BB(0x004bd42b);
    /* 004bd42b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004bd42f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004bd433: mov esi, edx */ r_esi = r_edx;
    /* 004bd435: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bd437: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bd439: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004bd43d: mov ebx, eax */ r_ebx = r_eax;
    /* 004bd43f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004bd442: mov ebp, ecx */ r_ebp = r_ecx;
L_004bd444:; BB(0x004bd444);
    /* 004bd444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd445: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4bd44au); f_0068d5a8();
    /* 004bd44a: mov edi, eax */ r_edi = r_eax;
    /* 004bd44c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd44f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd451: je 0x4bd508 */ if (fZ) goto L_004bd508;
L_004bd457:; BB(0x004bd457);
    /* 004bd457: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004bd45a: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004bd45d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd45e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd45f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4bd464u); f_007a9180();
    /* 004bd464: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd467: fcomp dword ptr [0x907348] */ fx_compare(ST(0), R_F32((u32)(0x907348u))); FPOP();
    /* 004bd46d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bd46f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bd470: jae 0x4bd508 */ if (!fC) goto L_004bd508;
L_004bd476:; BB(0x004bd476);
    /* 004bd476: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004bd479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd47b: jne 0x4bd4a3 */ if (!fZ) goto L_004bd4a3;
L_004bd47d:; BB(0x004bd47d);
    /* 004bd47d: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd482: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd484: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004bd486: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd489: mov ecx, edi */ r_ecx = r_edi;
    /* 004bd48b: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x4bd48eu); call_ind(t); }
    /* 004bd48e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd490: je 0x4bd4a3 */ if (fZ) goto L_004bd4a3;
L_004bd492:; BB(0x004bd492);
    /* 004bd492: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd497: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd49a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004bd49c: mov ecx, edi */ r_ecx = r_edi;
    /* 004bd49e: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x4bd4a1u); call_ind(t); }
    /* 004bd4a1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004bd4a3:; BB(0x004bd4a3);
    /* 004bd4a3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004bd4a6: test eax, 0x801 */ {  u32 a = r_eax; u32 b = 0x801u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd4ab: jne 0x4bd508 */ if (!fZ) goto L_004bd508;
L_004bd4ad:; BB(0x004bd4ad);
    /* 004bd4ad: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004bd4af: mov dword ptr [esp + 0x14], 0xf */ W32((u32)(r_esp+0x14u), 0xfu);
    /* 004bd4b7: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004bd4bc: mov ecx, edi */ r_ecx = r_edi;
    /* 004bd4be: mov dword ptr [esp + 0x18], 0x42c80000 */ W32((u32)(r_esp+0x18u), 0x42c80000u);
    /* 004bd4c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4ca: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4cf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4d1: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd4d4: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4bd4d7u); call_ind(t); }
    /* 004bd4d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bd4d9: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004bd4dc: mov ebx, dword ptr [esi + ebx*4 + 0x44] */ r_ebx = R32((u32)(r_esi+r_ebx*4+0x44u));
    /* 004bd4e0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004bd4e4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd4e6: jne 0x4bd508 */ if (!fZ) goto L_004bd508;
L_004bd4e8:; BB(0x004bd4e8);
    /* 004bd4e8: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4ed: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004bd4f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bd4f4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4bd4f9u); f_0050b510();
    /* 004bd4f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd4fc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004bd500: mov dword ptr [esi + eax*2 + 0x44], 1 */ W32((u32)(r_esi+r_eax*2+0x44u), 0x1u);
L_004bd508:; BB(0x004bd508);
    /* 004bd508: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004bd50b: mov ebx, ebp */ r_ebx = r_ebp;
    /* 004bd50d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bd510: jl 0x4bd444 */ if ((fS!=fO)) goto L_004bd444;
L_004bd516:; BB(0x004bd516);
    /* 004bd516: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004bd51a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004bd51e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004bd521: mov edx, esi */ r_edx = r_esi;
    /* 004bd523: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004bd526: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd529: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004bd52d: je 0x4bd550 */ if (fZ) goto L_004bd550;
L_004bd52f:; BB(0x004bd52f);
    /* 004bd52f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bd532: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004bd535: jmp 0x4bd54c */ goto L_004bd54c;
L_004bd537:; BB(0x004bd537);
    /* 004bd537: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd53a: jne 0x4bd54c */ if (!fZ) goto L_004bd54c;
L_004bd53c:; BB(0x004bd53c);
    /* 004bd53c: mov ecx, edx */ r_ecx = r_edx;
    /* 004bd53e: call 0x4bd578 */ r_esp -= 4; W32(r_esp, 0x4bd543u); f_004bd578();
    /* 004bd543: jmp 0x4bd54c */ goto L_004bd54c;
L_004bd545:; BB(0x004bd545);
    /* 004bd545: mov ecx, edx */ r_ecx = r_edx;
    /* 004bd547: call 0x4bd5c0 */ r_esp -= 4; W32(r_esp, 0x4bd54cu); f_004bd5c0();
L_004bd54c:; BB(0x004bd54c);
    /* 004bd54c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bd54f: ret  */ FN_RET(0x004bd3d4); r_esp += 4; return;
L_004bd550:; BB(0x004bd550);
    /* 004bd550: mov eax, dword ptr [0xa47f3c] */ r_eax = R32((u32)(0xa47f3cu));
    /* 004bd555: mov dword ptr [edx + 0x38], 3 */ W32((u32)(r_edx+0x38u), 0x3u);
    /* 004bd55c: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 004bd55f: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 004bd566: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 004bd56d: jmp 0x4bd54c */ goto L_004bd54c;
L_004bd56f:; BB(0x004bd56f);
    /* 004bd56f: mov ecx, edx */ r_ecx = r_edx;
    /* 004bd571: call 0x4bd6b4 */ r_esp -= 4; W32(r_esp, 0x4bd576u); f_004bd6b4();
    /* 004bd576: jmp 0x4bd54c */ goto L_004bd54c;
}

void f_004bd578(void) /* sub_4BD578 */
{
    FN_ENTER(0x004bd578);
    /* 004bd578: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 004bd57b: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004bd57e: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 004bd581: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd584: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fO = (a >> 31) & 1; } }
    /* 004bd587: fadd dword ptr [eax*4 + 0x907298] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x907298u));
    /* 004bd58e: fadd dword ptr [0x907338] */ ST(0) = ST(0) + R_F32((u32)(0x907338u));
    /* 004bd594: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004bd596: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bd598: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bd599: jbe 0x4bd5a7 */ if ((fC||fZ)) goto L_004bd5a7;
L_004bd59b:; BB(0x004bd59b);
    /* 004bd59b: fld dword ptr [0x907330] */ FPUSH(R_F32((u32)(0x907330u)));
    /* 004bd5a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bd5a3: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 004bd5a6: ret  */ FN_RET(0x004bd578); r_esp += 4; return;
L_004bd5a7:; BB(0x004bd5a7);
    /* 004bd5a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bd5a9: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004bd5ad: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 004bd5b4: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bd5b9: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004bd5bd: ret  */ FN_RET(0x004bd578); r_esp += 4; return;
}

void f_004bd5c0(void) /* sub_4BD5C0 */
{
    FN_ENTER(0x004bd5c0);
    /* 004bd5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bd5c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004bd5c3: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
    /* 004bd5c6: fcom dword ptr [0x90732c] */ fx_compare(ST(0), R_F32((u32)(0x90732cu))); 
    /* 004bd5cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bd5ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bd5cf: jbe 0x4bd5e8 */ if ((fC||fZ)) goto L_004bd5e8;
L_004bd5d1:; BB(0x004bd5d1);
    /* 004bd5d1: fcom dword ptr [0x907328] */ fx_compare(ST(0), R_F32((u32)(0x907328u))); 
    /* 004bd5d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bd5d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bd5da: ja 0x4bd5e8 */ if ((!fC&&!fZ)) goto L_004bd5e8;
L_004bd5dc:; BB(0x004bd5dc);
    /* 004bd5dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bd5de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bd5e0: call 0x4bd634 */ r_esp -= 4; W32(r_esp, 0x4bd5e5u); f_004bd634();
    /* 004bd5e5: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
L_004bd5e8:; BB(0x004bd5e8);
    /* 004bd5e8: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 004bd5eb: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 004bd5ee: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bd5f1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fO = (a >> 31) & 1; } }
    /* 004bd5f4: fadd dword ptr [eax*4 + 0x907290] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x907290u));
    /* 004bd5fb: fadd dword ptr [0x907324] */ ST(0) = ST(0) + R_F32((u32)(0x907324u));
    /* 004bd601: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004bd603: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bd605: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bd606: jbe 0x4bd613 */ if ((fC||fZ)) goto L_004bd613;
L_004bd608:; BB(0x004bd608);
    /* 004bd608: fadd dword ptr [0x90731c] */ ST(0) = ST(0) + R_F32((u32)(0x90731cu));
    /* 004bd60e: fstp dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0)); FPOP();
    /* 004bd611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bd612: ret  */ FN_RET(0x004bd5c0); r_esp += 4; return;
L_004bd613:; BB(0x004bd613);
    /* 004bd613: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bd615: mov eax, dword ptr [0xa47f38] */ r_eax = R32((u32)(0xa47f38u));
    /* 004bd61a: mov dword ptr [ebp + 0x38], 2 */ W32((u32)(r_ebp+0x38u), 0x2u);
    /* 004bd621: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 004bd624: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 004bd62b: mov dword ptr [ebp + 0x74], 0 */ W32((u32)(r_ebp+0x74u), 0x0u);
    /* 004bd632: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bd633: ret  */ FN_RET(0x004bd5c0); r_esp += 4; return;
}

void f_004bd634(void) /* sub_4BD634 */
{
    FN_ENTER(0x004bd634);
    /* 004bd634: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bd635: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bd636: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bd637: mov edi, ecx */ r_edi = r_ecx;
    /* 004bd639: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004bd63c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd63e: je 0x4bd654 */ if (fZ) goto L_004bd654;
L_004bd640:; BB(0x004bd640);
    /* 004bd640: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bd644: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bd649: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bd64d: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_004bd654:; BB(0x004bd654);
    /* 004bd654: push 0x215 */ { u32 v = 0x215u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd659: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004bd65c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bd65d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4bd662u); f_0050b510();
    /* 004bd662: mov esi, eax */ r_esi = r_eax;
    /* 004bd664: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd667: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bd669: je 0x4bd69e */ if (fZ) goto L_004bd69e;
L_004bd66b:; BB(0x004bd66b);
    /* 004bd66b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd66d: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4bd672u); f_004b9970();
    /* 004bd672: mov ebp, eax */ r_ebp = r_eax;
    /* 004bd674: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd677: call 0x4b9990 */ r_esp -= 4; W32(r_esp, 0x4bd67cu); f_004b9990();
    /* 004bd67c: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 004bd680: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 004bd687: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 004bd68a: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 004bd68d: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 004bd694: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004bd69a: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
L_004bd69e:; BB(0x004bd69e);
    /* 004bd69e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bd6a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6a3: push 0x3f0 */ { u32 v = 0x3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6a8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4bd6adu); f_00814298();
    /* 004bd6ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bd6b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bd6b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bd6b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bd6b3: ret  */ FN_RET(0x004bd634); r_esp += 4; return;
}

void f_004bd6b4(void) /* sub_4BD6B4 */
{
    FN_ENTER(0x004bd6b4);
    /* 004bd6b4: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004bd6b7: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004bd6ba: je 0x4bd6c3 */ if (fZ) goto L_004bd6c3;
L_004bd6bc:; BB(0x004bd6bc);
    /* 004bd6bc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bd6bf: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004bd6c2: ret  */ FN_RET(0x004bd6b4); r_esp += 4; return;
L_004bd6c3:; BB(0x004bd6c3);
    /* 004bd6c3: mov dword ptr [ecx + 0x38], 1 */ W32((u32)(r_ecx+0x38u), 0x1u);
    /* 004bd6ca: mov dword ptr [ecx + 0x74], 0x41600000 */ W32((u32)(r_ecx+0x74u), 0x41600000u);
    /* 004bd6d1: ret  */ FN_RET(0x004bd6b4); r_esp += 4; return;
}

void f_004bd6d4(void) /* sub_4BD6D4 */
{
    FN_ENTER(0x004bd6d4);
    /* 004bd6d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd6d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bd6d7: call 0x4b9450 */ r_esp -= 4; W32(r_esp, 0x4bd6dcu); f_004b9450();
    /* 004bd6dc: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4bd6e1u); f_0082fa9c();
    /* 004bd6e1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4bd6e6u); f_0082d7b0();
    /* 004bd6e6: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 004bd6e9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4bd6eeu); f_0082d838();
    /* 004bd6ee: lea ecx, [ebx + 0x28] */ r_ecx = (u32)(r_ebx+0x28u);
    /* 004bd6f1: mov edx, 1 */ r_edx = 0x1u;
    /* 004bd6f6: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4bd6fbu); f_00830df8();
    /* 004bd6fb: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd6fe: push dword ptr [ebx + 0x78] */ { u32 v = R32((u32)(r_ebx+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd701: push dword ptr [0xa47f40] */ { u32 v = R32((u32)(0xa47f40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bd707: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4bd70cu); f_0083046c();
    /* 004bd70c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd70f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4bd714u); f_0082da80();
    /* 004bd714: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4bd719u); f_0082faac();
    /* 004bd719: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bd71a: ret  */ FN_RET(0x004bd6d4); r_esp += 4; return;
}

void f_004bd778(void) /* sub_4BD778 */
{
    FN_ENTER(0x004bd778);
    /* 004bd778: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd77a: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4bd77fu); f_004b9970();
    /* 004bd77f: mov dword ptr [0xa47f40], eax */ W32((u32)(0xa47f40u), r_eax);
    /* 004bd784: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd786: call 0x4b9980 */ r_esp -= 4; W32(r_esp, 0x4bd78bu); f_004b9980();
    /* 004bd78b: mov dword ptr [0xa47f34], eax */ W32((u32)(0xa47f34u), r_eax);
    /* 004bd790: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd792: call 0x4b9980 */ r_esp -= 4; W32(r_esp, 0x4bd797u); f_004b9980();
    /* 004bd797: mov dword ptr [0xa47f38], eax */ W32((u32)(0xa47f38u), r_eax);
    /* 004bd79c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd79e: call 0x4b9980 */ r_esp -= 4; W32(r_esp, 0x4bd7a3u); f_004b9980();
    /* 004bd7a3: mov dword ptr [0xa47f3c], eax */ W32((u32)(0xa47f3cu), r_eax);
    /* 004bd7a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bd7ab: ret  */ FN_RET(0x004bd778); r_esp += 4; return;
}

void f_004bd7ac(void) /* sub_4BD7AC */
{
    FN_ENTER(0x004bd7ac);
    /* 004bd7ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7af: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4bd7b4u); f_004b9970();
    /* 004bd7b4: mov ebx, eax */ r_ebx = r_eax;
    /* 004bd7b6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004bd7b8: call 0x4b9980 */ r_esp -= 4; W32(r_esp, 0x4bd7bdu); f_004b9980();
    /* 004bd7bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bd7c0: mov ecx, 0xa47c00 */ r_ecx = 0xa47c00u;
    /* 004bd7c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004bd7c7:; BB(0x004bd7c7);
    /* 004bd7c7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004bd7c9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004bd7cb: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004bd7ce: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004bd7d1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004bd7d4: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 004bd7d7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 004bd7da: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004bd7dd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 004bd7e0: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 004bd7e3: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 004bd7e6: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 004bd7e9: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 004bd7ec: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 004bd7ef: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004bd7f2: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004bd7f5: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004bd7f8: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004bd7fb: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004bd7fe: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004bd801: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004bd804: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 004bd807: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 004bd80a: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004bd80d: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004bd810: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004bd813: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 004bd816: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 004bd819: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 004bd81c: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004bd81f: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 004bd822: mov ecx, eax */ r_ecx = r_eax;
    /* 004bd824: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004bd827: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bd82a: jl 0x4bd7c7 */ if ((fS!=fO)) goto L_004bd7c7;
L_004bd82c:; BB(0x004bd82c);
    /* 004bd82c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004bd82e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004bd830: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004bd833: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004bd836: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004bd839: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004bd83c: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004bd83f: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 004bd842: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004bd845: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 004bd848: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004bd84b: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 004bd84e: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004bd851: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 004bd854: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004bd857: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004bd85a: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004bd85d: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004bd860: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004bd863: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004bd866: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004bd869: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004bd86c: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004bd86f: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004bd872: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004bd875: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 004bd878: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004bd87b: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 004bd87e: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004bd881: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 004bd884: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004bd887: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004bd889: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 004bd88c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004bd88f: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 004bd892: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004bd895: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 004bd898: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004bd89b: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004bd89e: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004bd8a1: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 004bd8a4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004bd8a7: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004bd8aa: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004bd8ad: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004bd8b0: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004bd8b3: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 004bd8b6: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004bd8b9: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 004bd8bc: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004bd8bf: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 004bd8c2: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004bd8c5: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 004bd8c8: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004bd8cb: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 004bd8ce: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004bd8d1: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 004bd8d4: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 004bd8d7: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004bd8da: mov eax, dword ptr [0xa47c00] */ r_eax = R32((u32)(0xa47c00u));
    /* 004bd8df: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bd8e2: mov dword ptr [0xa47c00], eax */ W32((u32)(0xa47c00u), r_eax);
    /* 004bd8e7: mov eax, dword ptr [0xa47c08] */ r_eax = R32((u32)(0xa47c08u));
    /* 004bd8ec: mov dword ptr [0xa47b40], eax */ W32((u32)(0xa47b40u), r_eax);
    /* 004bd8f1: mov eax, dword ptr [0xa47c0c] */ r_eax = R32((u32)(0xa47c0cu));
    /* 004bd8f6: mov dword ptr [0xa47b44], eax */ W32((u32)(0xa47b44u), r_eax);
    /* 004bd8fb: mov eax, dword ptr [0xa47c10] */ r_eax = R32((u32)(0xa47c10u));
    /* 004bd900: mov dword ptr [0xa47b48], eax */ W32((u32)(0xa47b48u), r_eax);
    /* 004bd905: mov eax, dword ptr [0xa47c1c] */ r_eax = R32((u32)(0xa47c1cu));
    /* 004bd90a: mov dword ptr [0xa47f44], eax */ W32((u32)(0xa47f44u), r_eax);
    /* 004bd90f: mov eax, dword ptr [0xa47c38] */ r_eax = R32((u32)(0xa47c38u));
    /* 004bd914: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bd917: mov dword ptr [0xa47c38], eax */ W32((u32)(0xa47c38u), r_eax);
    /* 004bd91c: mov eax, dword ptr [0xa47c40] */ r_eax = R32((u32)(0xa47c40u));
    /* 004bd921: mov dword ptr [0xa47b4c], eax */ W32((u32)(0xa47b4cu), r_eax);
    /* 004bd926: mov eax, dword ptr [0xa47c44] */ r_eax = R32((u32)(0xa47c44u));
    /* 004bd92b: mov dword ptr [0xa47b50], eax */ W32((u32)(0xa47b50u), r_eax);
    /* 004bd930: mov eax, dword ptr [0xa47c48] */ r_eax = R32((u32)(0xa47c48u));
    /* 004bd935: mov dword ptr [0xa47b54], eax */ W32((u32)(0xa47b54u), r_eax);
    /* 004bd93a: mov eax, dword ptr [0xa47c54] */ r_eax = R32((u32)(0xa47c54u));
    /* 004bd93f: mov dword ptr [0xa47f48], eax */ W32((u32)(0xa47f48u), r_eax);
    /* 004bd944: mov eax, dword ptr [0xa47c70] */ r_eax = R32((u32)(0xa47c70u));
    /* 004bd949: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bd94c: mov dword ptr [0xa47c70], eax */ W32((u32)(0xa47c70u), r_eax);
    /* 004bd951: mov eax, dword ptr [0xa47c78] */ r_eax = R32((u32)(0xa47c78u));
    /* 004bd956: mov dword ptr [0xa47b58], eax */ W32((u32)(0xa47b58u), r_eax);
    /* 004bd95b: mov eax, dword ptr [0xa47c7c] */ r_eax = R32((u32)(0xa47c7cu));
    /* 004bd960: mov dword ptr [0xa47b5c], eax */ W32((u32)(0xa47b5cu), r_eax);
    /* 004bd965: mov eax, dword ptr [0xa47c80] */ r_eax = R32((u32)(0xa47c80u));
    /* 004bd96a: mov dword ptr [0xa47b60], eax */ W32((u32)(0xa47b60u), r_eax);
    /* 004bd96f: mov eax, dword ptr [0xa47c8c] */ r_eax = R32((u32)(0xa47c8cu));
    /* 004bd974: mov dword ptr [0xa47f4c], eax */ W32((u32)(0xa47f4cu), r_eax);
    /* 004bd979: mov eax, dword ptr [0xa47ca8] */ r_eax = R32((u32)(0xa47ca8u));
    /* 004bd97e: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bd981: mov dword ptr [0xa47ca8], eax */ W32((u32)(0xa47ca8u), r_eax);
    /* 004bd986: mov eax, dword ptr [0xa47cb0] */ r_eax = R32((u32)(0xa47cb0u));
    /* 004bd98b: mov dword ptr [0xa47b64], eax */ W32((u32)(0xa47b64u), r_eax);
    /* 004bd990: mov eax, dword ptr [0xa47cb4] */ r_eax = R32((u32)(0xa47cb4u));
    /* 004bd995: mov dword ptr [0xa47b68], eax */ W32((u32)(0xa47b68u), r_eax);
    /* 004bd99a: mov eax, dword ptr [0xa47cb8] */ r_eax = R32((u32)(0xa47cb8u));
    /* 004bd99f: mov dword ptr [0xa47b6c], eax */ W32((u32)(0xa47b6cu), r_eax);
    /* 004bd9a4: mov eax, dword ptr [0xa47cc4] */ r_eax = R32((u32)(0xa47cc4u));
    /* 004bd9a9: mov dword ptr [0xa47f50], eax */ W32((u32)(0xa47f50u), r_eax);
    /* 004bd9ae: mov eax, dword ptr [0xa47ce0] */ r_eax = R32((u32)(0xa47ce0u));
    /* 004bd9b3: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bd9b6: mov dword ptr [0xa47ce0], eax */ W32((u32)(0xa47ce0u), r_eax);
    /* 004bd9bb: mov eax, dword ptr [0xa47ce8] */ r_eax = R32((u32)(0xa47ce8u));
    /* 004bd9c0: mov dword ptr [0xa47b70], eax */ W32((u32)(0xa47b70u), r_eax);
    /* 004bd9c5: mov eax, dword ptr [0xa47cec] */ r_eax = R32((u32)(0xa47cecu));
    /* 004bd9ca: mov dword ptr [0xa47b74], eax */ W32((u32)(0xa47b74u), r_eax);
    /* 004bd9cf: mov eax, dword ptr [0xa47cf0] */ r_eax = R32((u32)(0xa47cf0u));
    /* 004bd9d4: mov dword ptr [0xa47b78], eax */ W32((u32)(0xa47b78u), r_eax);
    /* 004bd9d9: mov eax, dword ptr [0xa47cfc] */ r_eax = R32((u32)(0xa47cfcu));
    /* 004bd9de: mov dword ptr [0xa47f54], eax */ W32((u32)(0xa47f54u), r_eax);
    /* 004bd9e3: mov eax, dword ptr [0xa47d18] */ r_eax = R32((u32)(0xa47d18u));
    /* 004bd9e8: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bd9eb: mov dword ptr [0xa47d18], eax */ W32((u32)(0xa47d18u), r_eax);
    /* 004bd9f0: mov eax, dword ptr [0xa47d20] */ r_eax = R32((u32)(0xa47d20u));
    /* 004bd9f5: mov dword ptr [0xa47b7c], eax */ W32((u32)(0xa47b7cu), r_eax);
    /* 004bd9fa: mov eax, dword ptr [0xa47d24] */ r_eax = R32((u32)(0xa47d24u));
    /* 004bd9ff: mov dword ptr [0xa47b80], eax */ W32((u32)(0xa47b80u), r_eax);
    /* 004bda04: mov eax, dword ptr [0xa47d28] */ r_eax = R32((u32)(0xa47d28u));
    /* 004bda09: mov dword ptr [0xa47b84], eax */ W32((u32)(0xa47b84u), r_eax);
    /* 004bda0e: mov eax, dword ptr [0xa47d34] */ r_eax = R32((u32)(0xa47d34u));
    /* 004bda13: mov dword ptr [0xa47f58], eax */ W32((u32)(0xa47f58u), r_eax);
    /* 004bda18: mov eax, dword ptr [0xa47d50] */ r_eax = R32((u32)(0xa47d50u));
    /* 004bda1d: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bda20: mov dword ptr [0xa47d50], eax */ W32((u32)(0xa47d50u), r_eax);
    /* 004bda25: mov eax, dword ptr [0xa47d58] */ r_eax = R32((u32)(0xa47d58u));
    /* 004bda2a: mov dword ptr [0xa47b88], eax */ W32((u32)(0xa47b88u), r_eax);
    /* 004bda2f: mov eax, dword ptr [0xa47d5c] */ r_eax = R32((u32)(0xa47d5cu));
    /* 004bda34: mov dword ptr [0xa47b8c], eax */ W32((u32)(0xa47b8cu), r_eax);
    /* 004bda39: mov eax, dword ptr [0xa47d60] */ r_eax = R32((u32)(0xa47d60u));
    /* 004bda3e: mov dword ptr [0xa47b90], eax */ W32((u32)(0xa47b90u), r_eax);
    /* 004bda43: mov eax, dword ptr [0xa47d6c] */ r_eax = R32((u32)(0xa47d6cu));
    /* 004bda48: mov dword ptr [0xa47f5c], eax */ W32((u32)(0xa47f5cu), r_eax);
    /* 004bda4d: mov eax, dword ptr [0xa47d88] */ r_eax = R32((u32)(0xa47d88u));
    /* 004bda52: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bda55: mov dword ptr [0xa47d88], eax */ W32((u32)(0xa47d88u), r_eax);
    /* 004bda5a: mov eax, dword ptr [0xa47d90] */ r_eax = R32((u32)(0xa47d90u));
    /* 004bda5f: mov dword ptr [0xa47b94], eax */ W32((u32)(0xa47b94u), r_eax);
    /* 004bda64: mov eax, dword ptr [0xa47d94] */ r_eax = R32((u32)(0xa47d94u));
    /* 004bda69: mov dword ptr [0xa47b98], eax */ W32((u32)(0xa47b98u), r_eax);
    /* 004bda6e: mov eax, dword ptr [0xa47d98] */ r_eax = R32((u32)(0xa47d98u));
    /* 004bda73: mov dword ptr [0xa47b9c], eax */ W32((u32)(0xa47b9cu), r_eax);
    /* 004bda78: mov eax, dword ptr [0xa47da4] */ r_eax = R32((u32)(0xa47da4u));
    /* 004bda7d: mov dword ptr [0xa47f60], eax */ W32((u32)(0xa47f60u), r_eax);
    /* 004bda82: mov eax, dword ptr [0xa47dc0] */ r_eax = R32((u32)(0xa47dc0u));
    /* 004bda87: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bda8a: mov dword ptr [0xa47dc0], eax */ W32((u32)(0xa47dc0u), r_eax);
    /* 004bda8f: mov eax, dword ptr [0xa47dc8] */ r_eax = R32((u32)(0xa47dc8u));
    /* 004bda94: mov dword ptr [0xa47ba0], eax */ W32((u32)(0xa47ba0u), r_eax);
    /* 004bda99: mov eax, dword ptr [0xa47dcc] */ r_eax = R32((u32)(0xa47dccu));
    /* 004bda9e: mov dword ptr [0xa47ba4], eax */ W32((u32)(0xa47ba4u), r_eax);
    /* 004bdaa3: mov eax, dword ptr [0xa47dd0] */ r_eax = R32((u32)(0xa47dd0u));
    /* 004bdaa8: mov dword ptr [0xa47ba8], eax */ W32((u32)(0xa47ba8u), r_eax);
    /* 004bdaad: mov eax, dword ptr [0xa47ddc] */ r_eax = R32((u32)(0xa47ddcu));
    /* 004bdab2: mov dword ptr [0xa47f64], eax */ W32((u32)(0xa47f64u), r_eax);
    /* 004bdab7: mov eax, dword ptr [0xa47df8] */ r_eax = R32((u32)(0xa47df8u));
    /* 004bdabc: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bdabf: mov dword ptr [0xa47df8], eax */ W32((u32)(0xa47df8u), r_eax);
    /* 004bdac4: mov eax, dword ptr [0xa47e00] */ r_eax = R32((u32)(0xa47e00u));
    /* 004bdac9: mov dword ptr [0xa47bac], eax */ W32((u32)(0xa47bacu), r_eax);
    /* 004bdace: mov eax, dword ptr [0xa47e04] */ r_eax = R32((u32)(0xa47e04u));
    /* 004bdad3: mov dword ptr [0xa47bb0], eax */ W32((u32)(0xa47bb0u), r_eax);
    /* 004bdad8: mov eax, dword ptr [0xa47e08] */ r_eax = R32((u32)(0xa47e08u));
    /* 004bdadd: mov dword ptr [0xa47bb4], eax */ W32((u32)(0xa47bb4u), r_eax);
    /* 004bdae2: mov eax, dword ptr [0xa47e14] */ r_eax = R32((u32)(0xa47e14u));
    /* 004bdae7: mov dword ptr [0xa47f68], eax */ W32((u32)(0xa47f68u), r_eax);
    /* 004bdaec: mov eax, dword ptr [0xa47e30] */ r_eax = R32((u32)(0xa47e30u));
    /* 004bdaf1: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bdaf4: mov dword ptr [0xa47e30], eax */ W32((u32)(0xa47e30u), r_eax);
    /* 004bdaf9: mov eax, dword ptr [0xa47e38] */ r_eax = R32((u32)(0xa47e38u));
    /* 004bdafe: mov dword ptr [0xa47bb8], eax */ W32((u32)(0xa47bb8u), r_eax);
    /* 004bdb03: mov eax, dword ptr [0xa47e3c] */ r_eax = R32((u32)(0xa47e3cu));
    /* 004bdb08: mov dword ptr [0xa47bbc], eax */ W32((u32)(0xa47bbcu), r_eax);
    /* 004bdb0d: mov eax, dword ptr [0xa47e40] */ r_eax = R32((u32)(0xa47e40u));
    /* 004bdb12: mov dword ptr [0xa47bc0], eax */ W32((u32)(0xa47bc0u), r_eax);
    /* 004bdb17: mov eax, dword ptr [0xa47e4c] */ r_eax = R32((u32)(0xa47e4cu));
    /* 004bdb1c: mov dword ptr [0xa47f6c], eax */ W32((u32)(0xa47f6cu), r_eax);
    /* 004bdb21: mov eax, dword ptr [0xa47e68] */ r_eax = R32((u32)(0xa47e68u));
    /* 004bdb26: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bdb29: mov dword ptr [0xa47e68], eax */ W32((u32)(0xa47e68u), r_eax);
    /* 004bdb2e: mov eax, dword ptr [0xa47e70] */ r_eax = R32((u32)(0xa47e70u));
    /* 004bdb33: mov dword ptr [0xa47bc4], eax */ W32((u32)(0xa47bc4u), r_eax);
    /* 004bdb38: mov eax, dword ptr [0xa47e74] */ r_eax = R32((u32)(0xa47e74u));
    /* 004bdb3d: mov dword ptr [0xa47bc8], eax */ W32((u32)(0xa47bc8u), r_eax);
    /* 004bdb42: mov eax, dword ptr [0xa47e78] */ r_eax = R32((u32)(0xa47e78u));
    /* 004bdb47: mov dword ptr [0xa47bcc], eax */ W32((u32)(0xa47bccu), r_eax);
    /* 004bdb4c: mov eax, dword ptr [0xa47e84] */ r_eax = R32((u32)(0xa47e84u));
    /* 004bdb51: mov dword ptr [0xa47f70], eax */ W32((u32)(0xa47f70u), r_eax);
    /* 004bdb56: mov eax, dword ptr [0xa47ea0] */ r_eax = R32((u32)(0xa47ea0u));
    /* 004bdb5b: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bdb5e: mov dword ptr [0xa47ea0], eax */ W32((u32)(0xa47ea0u), r_eax);
    /* 004bdb63: mov eax, dword ptr [0xa47ea8] */ r_eax = R32((u32)(0xa47ea8u));
    /* 004bdb68: mov dword ptr [0xa47bd0], eax */ W32((u32)(0xa47bd0u), r_eax);
    /* 004bdb6d: mov eax, dword ptr [0xa47eac] */ r_eax = R32((u32)(0xa47eacu));
    /* 004bdb72: mov dword ptr [0xa47bd4], eax */ W32((u32)(0xa47bd4u), r_eax);
    /* 004bdb77: mov eax, dword ptr [0xa47eb0] */ r_eax = R32((u32)(0xa47eb0u));
    /* 004bdb7c: mov dword ptr [0xa47bd8], eax */ W32((u32)(0xa47bd8u), r_eax);
    /* 004bdb81: mov eax, dword ptr [0xa47ebc] */ r_eax = R32((u32)(0xa47ebcu));
    /* 004bdb86: mov dword ptr [0xa47f74], eax */ W32((u32)(0xa47f74u), r_eax);
    /* 004bdb8b: mov eax, dword ptr [0xa47ed8] */ r_eax = R32((u32)(0xa47ed8u));
    /* 004bdb90: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bdb93: mov dword ptr [0xa47ed8], eax */ W32((u32)(0xa47ed8u), r_eax);
    /* 004bdb98: mov eax, dword ptr [0xa47ee0] */ r_eax = R32((u32)(0xa47ee0u));
    /* 004bdb9d: mov dword ptr [0xa47bdc], eax */ W32((u32)(0xa47bdcu), r_eax);
    /* 004bdba2: mov eax, dword ptr [0xa47ee4] */ r_eax = R32((u32)(0xa47ee4u));
    /* 004bdba7: mov dword ptr [0xa47be0], eax */ W32((u32)(0xa47be0u), r_eax);
    /* 004bdbac: mov eax, dword ptr [0xa47ee8] */ r_eax = R32((u32)(0xa47ee8u));
    /* 004bdbb1: mov dword ptr [0xa47be4], eax */ W32((u32)(0xa47be4u), r_eax);
    /* 004bdbb6: mov eax, dword ptr [0xa47ef4] */ r_eax = R32((u32)(0xa47ef4u));
    /* 004bdbbb: mov dword ptr [0xa47f78], eax */ W32((u32)(0xa47f78u), r_eax);
    /* 004bdbc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bdbc1: ret  */ FN_RET(0x004bd7ac); r_esp += 4; return;
}

void f_004bdbc4(void) /* sub_4BDBC4 */
{
    FN_ENTER(0x004bdbc4);
    /* 004bdbc4: mov dword ptr [ecx + 0x158], 0x41a00000 */ W32((u32)(r_ecx+0x158u), 0x41a00000u);
    /* 004bdbce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bdbd0: mov dword ptr [ecx + 0x15c], 0 */ W32((u32)(r_ecx+0x15cu), 0x0u);
    /* 004bdbda: mov dword ptr [ecx + 0x13c], eax */ W32((u32)(r_ecx+0x13cu), r_eax);
    /* 004bdbe0: mov dword ptr [ecx + 0x140], eax */ W32((u32)(r_ecx+0x140u), r_eax);
    /* 004bdbe6: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 004bdbe9: mov edx, dword ptr [0xa47b40] */ r_edx = R32((u32)(0xa47b40u));
    /* 004bdbef: mov dword ptr [ecx + 0x160], 0x3f800000 */ W32((u32)(r_ecx+0x160u), 0x3f800000u);
    /* 004bdbf9: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 004bdbfc: mov edx, dword ptr [0xa47b44] */ r_edx = R32((u32)(0xa47b44u));
    /* 004bdc02: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 004bdc05: mov edx, dword ptr [0xa47b48] */ r_edx = R32((u32)(0xa47b48u));
    /* 004bdc0b: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 004bdc0e: mov edx, dword ptr [0xa47f44] */ r_edx = R32((u32)(0xa47f44u));
    /* 004bdc14: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 004bdc1a: mov edx, dword ptr [0xa47b4c] */ r_edx = R32((u32)(0xa47b4cu));
    /* 004bdc20: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 004bdc23: mov edx, dword ptr [0xa47b50] */ r_edx = R32((u32)(0xa47b50u));
    /* 004bdc29: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 004bdc2c: mov edx, dword ptr [0xa47b54] */ r_edx = R32((u32)(0xa47b54u));
    /* 004bdc32: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 004bdc35: mov edx, dword ptr [0xa47f48] */ r_edx = R32((u32)(0xa47f48u));
    /* 004bdc3b: mov dword ptr [ecx + 0xfc], edx */ W32((u32)(r_ecx+0xfcu), r_edx);
    /* 004bdc41: mov edx, dword ptr [0xa47b58] */ r_edx = R32((u32)(0xa47b58u));
    /* 004bdc47: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 004bdc4a: mov edx, dword ptr [0xa47b5c] */ r_edx = R32((u32)(0xa47b5cu));
    /* 004bdc50: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 004bdc53: mov edx, dword ptr [0xa47b60] */ r_edx = R32((u32)(0xa47b60u));
    /* 004bdc59: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 004bdc5c: mov edx, dword ptr [0xa47f4c] */ r_edx = R32((u32)(0xa47f4cu));
    /* 004bdc62: mov dword ptr [ecx + 0x100], edx */ W32((u32)(r_ecx+0x100u), r_edx);
    /* 004bdc68: mov edx, dword ptr [0xa47b64] */ r_edx = R32((u32)(0xa47b64u));
    /* 004bdc6e: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 004bdc71: mov edx, dword ptr [0xa47b68] */ r_edx = R32((u32)(0xa47b68u));
    /* 004bdc77: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 004bdc7a: mov edx, dword ptr [0xa47b6c] */ r_edx = R32((u32)(0xa47b6cu));
    /* 004bdc80: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 004bdc83: mov edx, dword ptr [0xa47f50] */ r_edx = R32((u32)(0xa47f50u));
    /* 004bdc89: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
    /* 004bdc8f: mov edx, dword ptr [0xa47b70] */ r_edx = R32((u32)(0xa47b70u));
    /* 004bdc95: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 004bdc9b: mov edx, dword ptr [0xa47b74] */ r_edx = R32((u32)(0xa47b74u));
    /* 004bdca1: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 004bdca7: mov edx, dword ptr [0xa47b78] */ r_edx = R32((u32)(0xa47b78u));
    /* 004bdcad: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 004bdcb3: mov edx, dword ptr [0xa47f54] */ r_edx = R32((u32)(0xa47f54u));
    /* 004bdcb9: mov dword ptr [ecx + 0x108], edx */ W32((u32)(r_ecx+0x108u), r_edx);
    /* 004bdcbf: mov edx, dword ptr [0xa47b7c] */ r_edx = R32((u32)(0xa47b7cu));
    /* 004bdcc5: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 004bdccb: mov edx, dword ptr [0xa47b80] */ r_edx = R32((u32)(0xa47b80u));
    /* 004bdcd1: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 004bdcd7: mov edx, dword ptr [0xa47b84] */ r_edx = R32((u32)(0xa47b84u));
    /* 004bdcdd: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 004bdce3: mov edx, dword ptr [0xa47f58] */ r_edx = R32((u32)(0xa47f58u));
    /* 004bdce9: mov dword ptr [ecx + 0x10c], edx */ W32((u32)(r_ecx+0x10cu), r_edx);
    /* 004bdcef: mov edx, dword ptr [0xa47b88] */ r_edx = R32((u32)(0xa47b88u));
    /* 004bdcf5: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 004bdcfb: mov edx, dword ptr [0xa47b8c] */ r_edx = R32((u32)(0xa47b8cu));
    /* 004bdd01: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 004bdd07: mov edx, dword ptr [0xa47b90] */ r_edx = R32((u32)(0xa47b90u));
    /* 004bdd0d: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 004bdd13: mov edx, dword ptr [0xa47f5c] */ r_edx = R32((u32)(0xa47f5cu));
    /* 004bdd19: mov dword ptr [ecx + 0x110], edx */ W32((u32)(r_ecx+0x110u), r_edx);
    /* 004bdd1f: mov edx, dword ptr [0xa47b94] */ r_edx = R32((u32)(0xa47b94u));
    /* 004bdd25: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 004bdd2b: mov edx, dword ptr [0xa47b98] */ r_edx = R32((u32)(0xa47b98u));
    /* 004bdd31: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 004bdd37: mov edx, dword ptr [0xa47b9c] */ r_edx = R32((u32)(0xa47b9cu));
    /* 004bdd3d: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 004bdd43: mov edx, dword ptr [0xa47f60] */ r_edx = R32((u32)(0xa47f60u));
    /* 004bdd49: mov dword ptr [ecx + 0x114], edx */ W32((u32)(r_ecx+0x114u), r_edx);
    /* 004bdd4f: mov edx, dword ptr [0xa47ba0] */ r_edx = R32((u32)(0xa47ba0u));
    /* 004bdd55: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 004bdd5b: mov edx, dword ptr [0xa47ba4] */ r_edx = R32((u32)(0xa47ba4u));
    /* 004bdd61: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 004bdd67: mov edx, dword ptr [0xa47ba8] */ r_edx = R32((u32)(0xa47ba8u));
    /* 004bdd6d: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 004bdd73: mov edx, dword ptr [0xa47f64] */ r_edx = R32((u32)(0xa47f64u));
    /* 004bdd79: mov dword ptr [ecx + 0x118], edx */ W32((u32)(r_ecx+0x118u), r_edx);
    /* 004bdd7f: mov edx, dword ptr [0xa47bac] */ r_edx = R32((u32)(0xa47bacu));
    /* 004bdd85: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 004bdd8b: mov edx, dword ptr [0xa47bb0] */ r_edx = R32((u32)(0xa47bb0u));
    /* 004bdd91: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 004bdd97: mov edx, dword ptr [0xa47bb4] */ r_edx = R32((u32)(0xa47bb4u));
    /* 004bdd9d: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 004bdda3: mov edx, dword ptr [0xa47f68] */ r_edx = R32((u32)(0xa47f68u));
    /* 004bdda9: mov dword ptr [ecx + 0x11c], edx */ W32((u32)(r_ecx+0x11cu), r_edx);
    /* 004bddaf: mov edx, dword ptr [0xa47bb8] */ r_edx = R32((u32)(0xa47bb8u));
    /* 004bddb5: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 004bddbb: mov edx, dword ptr [0xa47bbc] */ r_edx = R32((u32)(0xa47bbcu));
    /* 004bddc1: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 004bddc7: mov edx, dword ptr [0xa47bc0] */ r_edx = R32((u32)(0xa47bc0u));
    /* 004bddcd: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 004bddd3: mov edx, dword ptr [0xa47f6c] */ r_edx = R32((u32)(0xa47f6cu));
    /* 004bddd9: mov dword ptr [ecx + 0x120], edx */ W32((u32)(r_ecx+0x120u), r_edx);
    /* 004bdddf: mov edx, dword ptr [0xa47bc4] */ r_edx = R32((u32)(0xa47bc4u));
    /* 004bdde5: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 004bddeb: mov edx, dword ptr [0xa47bc8] */ r_edx = R32((u32)(0xa47bc8u));
    /* 004bddf1: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 004bddf7: mov edx, dword ptr [0xa47bcc] */ r_edx = R32((u32)(0xa47bccu));
    /* 004bddfd: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 004bde03: mov edx, dword ptr [0xa47f70] */ r_edx = R32((u32)(0xa47f70u));
    /* 004bde09: mov dword ptr [ecx + 0x124], edx */ W32((u32)(r_ecx+0x124u), r_edx);
    /* 004bde0f: mov edx, dword ptr [0xa47bd0] */ r_edx = R32((u32)(0xa47bd0u));
    /* 004bde15: mov dword ptr [ecx + 0xe0], edx */ W32((u32)(r_ecx+0xe0u), r_edx);
    /* 004bde1b: mov edx, dword ptr [0xa47bd4] */ r_edx = R32((u32)(0xa47bd4u));
    /* 004bde21: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 004bde27: mov edx, dword ptr [0xa47bd8] */ r_edx = R32((u32)(0xa47bd8u));
    /* 004bde2d: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 004bde33: mov edx, dword ptr [0xa47f74] */ r_edx = R32((u32)(0xa47f74u));
    /* 004bde39: mov dword ptr [ecx + 0x128], edx */ W32((u32)(r_ecx+0x128u), r_edx);
    /* 004bde3f: mov edx, dword ptr [0xa47bdc] */ r_edx = R32((u32)(0xa47bdcu));
    /* 004bde45: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 004bde4b: mov edx, dword ptr [0xa47be0] */ r_edx = R32((u32)(0xa47be0u));
    /* 004bde51: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 004bde57: mov edx, dword ptr [0xa47be4] */ r_edx = R32((u32)(0xa47be4u));
    /* 004bde5d: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 004bde63: mov edx, dword ptr [0xa47f78] */ r_edx = R32((u32)(0xa47f78u));
    /* 004bde69: mov dword ptr [ecx + 0x12c], edx */ W32((u32)(r_ecx+0x12cu), r_edx);
    /* 004bde6f: mov dword ptr [ecx + 0x164], eax */ W32((u32)(r_ecx+0x164u), r_eax);
    /* 004bde75: ret  */ FN_RET(0x004bdbc4); r_esp += 4; return;
}

void f_004bde78(void) /* sub_4BDE78 */
{
    FN_ENTER(0x004bde78);
    /* 004bde78: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 004bde7b: mov edx, dword ptr [eax*4 + 0x9073bc] */ r_edx = R32((u32)(r_eax*4+0x9073bcu));
    /* 004bde82: mov dword ptr [ecx + 0x13c], edx */ W32((u32)(r_ecx+0x13cu), r_edx);
    /* 004bde88: mov dword ptr [ecx + 0x140], 0x4000 */ W32((u32)(r_ecx+0x140u), 0x4000u);
    /* 004bde92: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 004bde99: ret  */ FN_RET(0x004bde78); r_esp += 4; return;
}

void f_004bde9c(void) /* sub_4BDE9C */
{
    FN_ENTER(0x004bde9c);
    /* 004bde9c: mov dword ptr [ecx + 0x13c], 0 */ W32((u32)(r_ecx+0x13cu), 0x0u);
    /* 004bdea6: mov dword ptr [ecx + 0x140], 0x4000 */ W32((u32)(r_ecx+0x140u), 0x4000u);
    /* 004bdeb0: ret  */ FN_RET(0x004bde9c); r_esp += 4; return;
}

void f_004bdeb4(void) /* sub_4BDEB4 */
{
    FN_ENTER(0x004bdeb4);
    /* 004bdeb4: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 004bdeb7: mov edx, dword ptr [eax*4 + 0x9073bc] */ r_edx = R32((u32)(r_eax*4+0x9073bcu));
    /* 004bdebe: mov dword ptr [ecx + 0x13c], edx */ W32((u32)(r_ecx+0x13cu), r_edx);
    /* 004bdec4: mov dword ptr [ecx + 0x140], 0 */ W32((u32)(r_ecx+0x140u), 0x0u);
    /* 004bdece: ret  */ FN_RET(0x004bdeb4); r_esp += 4; return;
}

void f_004bded0(void) /* sub_4BDED0 */
{
    FN_ENTER(0x004bded0);
    /* 004bded0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bded2: mov dword ptr [ecx + 0x140], eax */ W32((u32)(r_ecx+0x140u), r_eax);
    /* 004bded8: mov dword ptr [ecx + 0x13c], eax */ W32((u32)(r_ecx+0x13cu), r_eax);
    /* 004bdede: ret  */ FN_RET(0x004bded0); r_esp += 4; return;
}

void f_004bdee0(void) /* sub_4BDEE0 */
{
    FN_ENTER(0x004bdee0);
    /* 004bdee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bdee1: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bdee7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdee9: je 0x4bdf12 */ if (fZ) goto L_004bdf12;
L_004bdeeb:; BB(0x004bdeeb);
    /* 004bdeeb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004bdeee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bdef0: mov ebx, eax */ r_ebx = r_eax;
    /* 004bdef2: jmp 0x4bdefa */ goto L_004bdefa;
L_004bdef4:; BB(0x004bdef4);
    /* 004bdef4: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
L_004bdefa:; BB(0x004bdefa);
    /* 004bdefa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bdefb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4bdf00u); f_005b8610();
    /* 004bdf00: mov ecx, eax */ r_ecx = r_eax;
    /* 004bdf02: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x4bdf07u); f_00834f64();
    /* 004bdf07: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004bdf0a: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004bdf0d: jb 0x4bdef4 */ if (fC) goto L_004bdef4;
L_004bdf0f:; BB(0x004bdf0f);
    /* 004bdf0f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_004bdf12:; BB(0x004bdf12);
    /* 004bdf12: call 0x508a50 */ r_esp -= 4; W32(r_esp, 0x4bdf17u); f_00508a50();
    /* 004bdf17: mov ecx, dword ptr [0xa47fbc] */ r_ecx = R32((u32)(0xa47fbcu));
    /* 004bdf1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bdf1f: mov dword ptr [0xa47fa0], eax */ W32((u32)(0xa47fa0u), r_eax);
    /* 004bdf24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdf26: mov dword ptr [0xa47fa4], eax */ W32((u32)(0xa47fa4u), r_eax);
    /* 004bdf2b: mov dword ptr [0xa47fa8], eax */ W32((u32)(0xa47fa8u), r_eax);
    /* 004bdf30: mov dword ptr [0xa47fac], eax */ W32((u32)(0xa47facu), r_eax);
    /* 004bdf35: mov dword ptr [0xa47fb0], eax */ W32((u32)(0xa47fb0u), r_eax);
    /* 004bdf3a: mov dword ptr [0xa47fb4], eax */ W32((u32)(0xa47fb4u), r_eax);
    /* 004bdf3f: mov dword ptr [0xa47fb8], eax */ W32((u32)(0xa47fb8u), r_eax);
    /* 004bdf44: je 0x4bdf55 */ if (fZ) goto L_004bdf55;
L_004bdf46:; BB(0x004bdf46);
    /* 004bdf46: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4bdf4bu); f_00829de0();
    /* 004bdf4b: mov dword ptr [0xa47fbc], 0 */ W32((u32)(0xa47fbcu), 0x0u);
L_004bdf55:; BB(0x004bdf55);
    /* 004bdf55: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bdf5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bdf5d: je 0x4bdf66 */ if (fZ) goto L_004bdf66;
L_004bdf5f:; BB(0x004bdf5f);
    /* 004bdf5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf61: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4bdf66u); f_004066a8();
L_004bdf66:; BB(0x004bdf66);
    /* 004bdf66: mov dword ptr [0xa47fc0], 0 */ W32((u32)(0xa47fc0u), 0x0u);
    /* 004bdf70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bdf71: ret  */ FN_RET(0x004bdee0); r_esp += 4; return;
}

void f_004bdf74(void) /* sub_4BDF74 */
{
    FN_ENTER(0x004bdf74);
    /* 004bdf74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf75: mov ebp, esp */ r_ebp = r_esp;
    /* 004bdf77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf79: push 0x8d1094 */ { u32 v = 0x8d1094u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bdf84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdf85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bdf8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bdf8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bdf92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bdf95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bdf98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bdf9b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfa0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004bdfa7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4bdfacu); f_008581c5();
    /* 004bdfac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bdfad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004bdfb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bdfb2: je 0x4be057 */ if (fZ) goto L_004be057;
L_004bdfb8:; BB(0x004bdfb8);
    /* 004bdfb8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004bdfbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bdfc6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bdfc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bdfcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfce: push 0x9abd64 */ { u32 v = 0x9abd64u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfd3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004bdfd5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4bdfdau); f_005b7a84();
    /* 004bdfda: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bdfdd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004bdfe4:; BB(0x004bdfe4);
    /* 004bdfe4: mov dword ptr [0xa47fc0], eax */ W32((u32)(0xa47fc0u), r_eax);
    /* 004bdfe9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bdff0: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 004bdff6: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004bdff9: mov dword ptr [0xa47fbc], edx */ W32((u32)(0xa47fbcu), r_edx);
    /* 004bdfff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004be000: push 0x9076b4 */ { u32 v = 0x9076b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004be005: call 0x800bc0 */ r_esp -= 4; W32(r_esp, 0x4be00au); f_00800bc0();
    /* 004be00a: push 0x50000 */ { u32 v = 0x50000u; r_esp -= 4; W32(r_esp, v); }
    /* 004be00f: call 0x508a70 */ r_esp -= 4; W32(r_esp, 0x4be014u); f_00508a70();
    /* 004be014: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004be017: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004be01d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004be01f: je 0x4be040 */ if (fZ) goto L_004be040;
L_004be021:; BB(0x004be021);
    /* 004be021: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004be023:; BB(0x004be023);
    /* 004be023: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004be024: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4be029u); f_005b8610();
    /* 004be029: mov ecx, eax */ r_ecx = r_eax;
    /* 004be02b: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x4be030u); f_00834c58();
    /* 004be030: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004be033: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004be036: jae 0x4be040 */ if (!fC) goto L_004be040;
L_004be038:; BB(0x004be038);
    /* 004be038: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004be03e: jmp 0x4be023 */ goto L_004be023;
L_004be040:; BB(0x004be040);
    /* 004be040: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004be043: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004be046: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004be049: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004be04c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004be053: mov esp, ebp */ r_esp = r_ebp;
    /* 004be055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004be056: ret  */ FN_RET(0x004bdf74); r_esp += 4; return;
L_004be057:; BB(0x004be057);
    /* 004be057: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004be059: jmp 0x4bdfe4 */ goto L_004bdfe4;
}

