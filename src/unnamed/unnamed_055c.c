#include "protos.h"

void f_0055c014(void) /* sub_55C014 */
{
    FN_ENTER(0x0055c014);
    /* 0055c014: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055c018: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055c01a: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0055c01d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055c020: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0055c023: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0055c026: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0055c029: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055c02d: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0055c030: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055c034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c036: je 0x55c045 */ if (fZ) goto L_0055c045;
L_0055c038:; BB(0x0055c038);
    /* 0055c038: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 0055c03e: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c043: jmp 0x55c050 */ goto L_0055c050;
L_0055c045:; BB(0x0055c045);
    /* 0055c045: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 0055c04b: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0055c050:; BB(0x0055c050);
    /* 0055c050: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c053: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0055c059: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055c05b: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x55c061u); call_ind(t); }
    /* 0055c061: ret 0xc */ FN_RET(0x0055c014); r_esp += 16; return;
}

void f_0055c064(void) /* sub_55C064 */
{
    FN_ENTER(0x0055c064);
    /* 0055c064: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 0055c06a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055c06c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c06f: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0055c075: call dword ptr [edx + 0xe4] */ { u32 t = R32((u32)(r_edx+0xe4u)); r_esp -= 4; W32(r_esp, 0x55c07bu); call_ind(t); }
    /* 0055c07b: ret  */ FN_RET(0x0055c064); r_esp += 4; return;
}

void f_0055c07c(void) /* sub_55C07C */
{
    FN_ENTER(0x0055c07c);
    /* 0055c07c: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 0055c082: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055c084: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c087: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0055c08d: call dword ptr [edx + 0xe4] */ { u32 t = R32((u32)(r_edx+0xe4u)); r_esp -= 4; W32(r_esp, 0x55c093u); call_ind(t); }
    /* 0055c093: ret  */ FN_RET(0x0055c07c); r_esp += 4; return;
}

void f_0055c094(void) /* sub_55C094 */
{
    FN_ENTER(0x0055c094);
    /* 0055c094: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 0055c09a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055c09c: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c09f: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0055c0a5: mov dword ptr [ecx + 0x454], 0 */ W32((u32)(r_ecx+0x454u), 0x0u);
    /* 0055c0af: call dword ptr [edx + 0xe4] */ { u32 t = R32((u32)(r_edx+0xe4u)); r_esp -= 4; W32(r_esp, 0x55c0b5u); call_ind(t); }
    /* 0055c0b5: ret  */ FN_RET(0x0055c094); r_esp += 4; return;
}

void f_0055c0b8(void) /* sub_55C0B8 */
{
    FN_ENTER(0x0055c0b8);
    /* 0055c0b8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0055c0bb: test eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c0c0: jne 0x55c0d4 */ if (!fZ) goto L_0055c0d4;
L_0055c0c2:; BB(0x0055c0c2);
    /* 0055c0c2: mov eax, dword ptr [ecx + 0x474] */ r_eax = R32((u32)(r_ecx+0x474u));
    /* 0055c0c8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055c0ca: jne 0x55c0d4 */ if (!fZ) goto L_0055c0d4;
L_0055c0cc:; BB(0x0055c0cc);
    /* 0055c0cc: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055c0ce: jne 0x55c0d4 */ if (!fZ) goto L_0055c0d4;
L_0055c0d0:; BB(0x0055c0d0);
    /* 0055c0d0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c0d2: jne 0x55c0d7 */ if (!fZ) goto L_0055c0d7;
L_0055c0d4:; BB(0x0055c0d4);
    /* 0055c0d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c0d6: ret  */ FN_RET(0x0055c0b8); r_esp += 4; return;
L_0055c0d7:; BB(0x0055c0d7);
    /* 0055c0d7: mov eax, 1 */ r_eax = 0x1u;
    /* 0055c0dc: ret  */ FN_RET(0x0055c0b8); r_esp += 4; return;
}

void f_0055c0e0(void) /* sub_55C0E0 */
{
    FN_ENTER(0x0055c0e0);
    /* 0055c0e0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0055c0e3: test eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c0e8: jne 0x55c0f6 */ if (!fZ) goto L_0055c0f6;
L_0055c0ea:; BB(0x0055c0ea);
    /* 0055c0ea: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0055c0f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c0f4: je 0x55c0f9 */ if (fZ) goto L_0055c0f9;
L_0055c0f6:; BB(0x0055c0f6);
    /* 0055c0f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c0f8: ret  */ FN_RET(0x0055c0e0); r_esp += 4; return;
L_0055c0f9:; BB(0x0055c0f9);
    /* 0055c0f9: mov edx, dword ptr [ecx + 0x474] */ r_edx = R32((u32)(r_ecx+0x474u));
    /* 0055c0ff: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c105: mov eax, 0 */ r_eax = 0x0u;
    /* 0055c10a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0055c10d: ret  */ FN_RET(0x0055c0e0); r_esp += 4; return;
}

void f_0055c110(void) /* sub_55C110 */
{
    FN_ENTER(0x0055c110);
    /* 0055c110: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0055c113: test eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c118: je 0x55c11d */ if (fZ) goto L_0055c11d;
L_0055c11a:; BB(0x0055c11a);
    /* 0055c11a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c11c: ret  */ FN_RET(0x0055c110); r_esp += 4; return;
L_0055c11d:; BB(0x0055c11d);
    /* 0055c11d: mov edx, dword ptr [ecx + 0x474] */ r_edx = R32((u32)(r_ecx+0x474u));
    /* 0055c123: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c126: mov eax, 0 */ r_eax = 0x0u;
    /* 0055c12b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0055c12e: ret  */ FN_RET(0x0055c110); r_esp += 4; return;
}

void f_0055c178(void) /* sub_55C178 */
{
    FN_ENTER(0x0055c178);
    /* 0055c178: mov edx, dword ptr [ecx + 0x474] */ r_edx = R32((u32)(r_ecx+0x474u));
    /* 0055c17e: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c184: mov eax, 0 */ r_eax = 0x0u;
    /* 0055c189: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0055c18c: ret  */ FN_RET(0x0055c178); r_esp += 4; return;
}

void f_0055c190(void) /* sub_55C190 */
{
    FN_ENTER(0x0055c190);
    /* 0055c190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055c191: mov ebp, esp */ r_ebp = r_esp;
    /* 0055c193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c195: push 0x8d659c */ { u32 v = 0x8d659cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c19a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055c1a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055c1a8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055c1ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055c1ae: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0055c1b1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0055c1b4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0055c1b7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055c1ba: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x55c1bfu); f_00521840();
    /* 0055c1bf: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055c1c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55c1ccu); f_005b8610();
    /* 0055c1cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c1cf: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055c1d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1d7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0055c1da: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x55c1dfu); f_005b8624();
    /* 0055c1df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c1e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1e4: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0055c1e7: push 0x9bdee0 */ { u32 v = 0x9bdee0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1ec: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x55c1f1u); f_0051ff3c();
    /* 0055c1f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c1f4: mov eax, dword ptr [0xa73b90] */ r_eax = R32((u32)(0xa73b90u));
    /* 0055c1f9: mov dword ptr [ecx + 0xd8], 0x9bdf58 */ W32((u32)(r_ecx+0xd8u), 0x9bdf58u);
    /* 0055c203: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055c209: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0055c20f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0055c211: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c212: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 0055c219: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x55c21eu); f_007aa4c8();
    /* 0055c21e: push dword ptr [0xa73c0c] */ { u32 v = R32((u32)(0xa73c0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c224: push dword ptr [0xa73c10] */ { u32 v = R32((u32)(0xa73c10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c22a: push dword ptr [0xa73c14] */ { u32 v = R32((u32)(0xa73c14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c230: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c233: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0055c23a: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0055c241: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x55c246u); f_00520c70();
    /* 0055c246: push 0x80020 */ { u32 v = 0x80020u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c24b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c24e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c250: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x55c255u); f_007b52c4();
    /* 0055c255: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c258: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x55c25du); f_00520370();
    /* 0055c25d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c260: mov dword ptr [ecx + 0x358], 0x9bdf3c */ W32((u32)(r_ecx+0x358u), 0x9bdf3cu);
    /* 0055c26a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c26c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x55c271u); f_00520390();
    /* 0055c271: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c274: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0055c277: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0055c27a: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0055c27d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0055c27f: mov dword ptr [ecx + 0x468], eax */ W32((u32)(r_ecx+0x468u), r_eax);
    /* 0055c285: mov dword ptr [ecx + 0x474], 0x10 */ W32((u32)(r_ecx+0x474u), 0x10u);
    /* 0055c28f: mov dword ptr [ecx + 0x46c], edx */ W32((u32)(r_ecx+0x46cu), r_edx);
    /* 0055c295: mov dword ptr [ecx + 0x470], ebx */ W32((u32)(r_ecx+0x470u), r_ebx);
    /* 0055c29b: call dword ptr [esi + 0x184] */ { u32 t = R32((u32)(r_esi+0x184u)); r_esp -= 4; W32(r_esp, 0x55c2a1u); call_ind(t); }
    /* 0055c2a1: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055c2a7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2a9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55c2aeu); f_005b8610();
    /* 0055c2ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c2b1: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055c2b7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2b9: mov dword ptr [edx + 0x44c], eax */ W32((u32)(r_edx+0x44cu), r_eax);
    /* 0055c2bf: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x55c2c4u); f_005b8638();
    /* 0055c2c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c2c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055c2c9: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
    /* 0055c2d3: mov dword ptr [ecx + 0x450], eax */ W32((u32)(r_ecx+0x450u), r_eax);
    /* 0055c2d9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2de: mov dword ptr [ecx + 0x458], eax */ W32((u32)(r_ecx+0x458u), r_eax);
    /* 0055c2e4: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
    /* 0055c2ea: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 0055c2f0: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 0055c2f6: mov dword ptr [ecx + 0x444], eax */ W32((u32)(r_ecx+0x444u), r_eax);
    /* 0055c2fc: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0055c303: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x55c309u); call_ind(t); }
    /* 0055c309: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0055c310: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c315: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x55c31au); f_005caba4();
    /* 0055c31a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055c31d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c320: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0055c323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c325: je 0x55c39a */ if (fZ) goto L_0055c39a;
L_0055c327:; BB(0x0055c327);
    /* 0055c327: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0055c32e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055c335: mov ecx, eax */ r_ecx = r_eax;
    /* 0055c337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c339: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x55c33eu); f_007b4b48();
    /* 0055c33e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0055c345:; BB(0x0055c345);
    /* 0055c345: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055c348: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c34b: mov dword ptr [edx + 0x464], eax */ W32((u32)(r_edx+0x464u), r_eax);
    /* 0055c351: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055c358: mov ecx, eax */ r_ecx = r_eax;
    /* 0055c35a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c35c: push 0x9bdf0c */ { u32 v = 0x9bdf0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c361: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x55c366u); f_007b9a88();
    /* 0055c366: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c369: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055c36c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055c36f: movzx eax, word ptr [edx + 0x11c] */ r_eax = (u32)R16((u32)(r_edx+0x11cu));
    /* 0055c376: or eax, 0xffff003f */ {  u32 a = r_eax; u32 b = 0xffff003fu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c37b: mov dword ptr [edx + 0x448], 0 */ W32((u32)(r_edx+0x448u), 0x0u);
    /* 0055c385: mov word ptr [edx + 0x11c], ax */ W16((u32)(r_edx+0x11cu), (u16)r_eax);
    /* 0055c38c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c38f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055c396: mov esp, ebp */ r_esp = r_ebp;
    /* 0055c398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c399: ret  */ FN_RET(0x0055c190); r_esp += 4; return;
L_0055c39a:; BB(0x0055c39a);
    /* 0055c39a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c39c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055c39f: jmp 0x55c345 */ goto L_0055c345;
}

void f_0055c260(void)
{
    FN_ENTER(0x0055c260);
    /* 0055c260: mov dword ptr [ecx + 0x358], 0x9bdf3c */ W32((u32)(r_ecx+0x358u), 0x9bdf3cu);
    /* 0055c26a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c26c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x55c271u); f_00520390();
    /* 0055c271: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c274: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0055c277: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0055c27a: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0055c27d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0055c27f: mov dword ptr [ecx + 0x468], eax */ W32((u32)(r_ecx+0x468u), r_eax);
    /* 0055c285: mov dword ptr [ecx + 0x474], 0x10 */ W32((u32)(r_ecx+0x474u), 0x10u);
    /* 0055c28f: mov dword ptr [ecx + 0x46c], edx */ W32((u32)(r_ecx+0x46cu), r_edx);
    /* 0055c295: mov dword ptr [ecx + 0x470], ebx */ W32((u32)(r_ecx+0x470u), r_ebx);
    /* 0055c29b: call dword ptr [esi + 0x184] */ { u32 t = R32((u32)(r_esi+0x184u)); r_esp -= 4; W32(r_esp, 0x55c2a1u); call_ind(t); }
    /* 0055c2a1: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055c2a7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2a9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55c2aeu); f_005b8610();
    /* 0055c2ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c2b1: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055c2b7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2b9: mov dword ptr [edx + 0x44c], eax */ W32((u32)(r_edx+0x44cu), r_eax);
    /* 0055c2bf: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x55c2c4u); f_005b8638();
    /* 0055c2c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c2c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055c2c9: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
    /* 0055c2d3: mov dword ptr [ecx + 0x450], eax */ W32((u32)(r_ecx+0x450u), r_eax);
    /* 0055c2d9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2de: mov dword ptr [ecx + 0x458], eax */ W32((u32)(r_ecx+0x458u), r_eax);
    /* 0055c2e4: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
    /* 0055c2ea: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 0055c2f0: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 0055c2f6: mov dword ptr [ecx + 0x444], eax */ W32((u32)(r_ecx+0x444u), r_eax);
    /* 0055c2fc: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0055c303: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x55c309u); call_ind(t); }
    /* 0055c309: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0055c310: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c315: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x55c31au); f_005caba4();
    /* 0055c31a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055c31d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c320: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0055c323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c325: je 0x55c39a */ if (fZ) goto L_0055c39a;
L_0055c327:; BB(0x0055c327);
    /* 0055c327: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0055c32e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055c335: mov ecx, eax */ r_ecx = r_eax;
    /* 0055c337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c339: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x55c33eu); f_007b4b48();
    /* 0055c33e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0055c345:; BB(0x0055c345);
    /* 0055c345: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055c348: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c34b: mov dword ptr [edx + 0x464], eax */ W32((u32)(r_edx+0x464u), r_eax);
    /* 0055c351: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055c358: mov ecx, eax */ r_ecx = r_eax;
    /* 0055c35a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c35c: push 0x9bdf0c */ { u32 v = 0x9bdf0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c361: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x55c366u); f_007b9a88();
    /* 0055c366: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c369: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055c36c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055c36f: movzx eax, word ptr [edx + 0x11c] */ r_eax = (u32)R16((u32)(r_edx+0x11cu));
    /* 0055c376: or eax, 0xffff003f */ {  u32 a = r_eax; u32 b = 0xffff003fu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c37b: mov dword ptr [edx + 0x448], 0 */ W32((u32)(r_edx+0x448u), 0x0u);
    /* 0055c385: mov word ptr [edx + 0x11c], ax */ W16((u32)(r_edx+0x11cu), (u16)r_eax);
    /* 0055c38c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c38f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055c396: mov esp, ebp */ r_esp = r_ebp;
    /* 0055c398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c399: ret  */ FN_RET(0x0055c260); r_esp += 4; return;
L_0055c39a:; BB(0x0055c39a);
    /* 0055c39a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c39c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055c39f: jmp 0x55c345 */ goto L_0055c345;
}

void f_0055c3a4(void) /* sub_55C3A4 */
{
    FN_ENTER(0x0055c3a4);
    /* 0055c3a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055c3a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c3a9: call 0x55c3c8 */ r_esp -= 4; W32(r_esp, 0x55c3aeu); f_0055c3c8();
    /* 0055c3ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055c3b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c3b4: jne 0x55c3ba */ if (!fZ) goto L_0055c3ba;
L_0055c3b6:; BB(0x0055c3b6);
    /* 0055c3b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c3b7: ret 4 */ FN_RET(0x0055c3a4); r_esp += 8; return;
L_0055c3ba:; BB(0x0055c3ba);
    /* 0055c3ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x55c3c0u); f_005c2f74();
    /* 0055c3c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055c3c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c3c2: ret 4 */ FN_RET(0x0055c3a4); r_esp += 8; return;
}

void f_0055c3c8(void) /* sub_55C3C8 */
{
    FN_ENTER(0x0055c3c8);
    /* 0055c3c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0055c3cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3cd: push 0x8d65dc */ { u32 v = 0x8d65dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055c3d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055c3e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055c3e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055c3e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0055c3e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0055c3ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055c3ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0055c3f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055c3f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055c3fc: mov edx, dword ptr [ecx + 0x46c] */ r_edx = R32((u32)(r_ecx+0x46cu));
    /* 0055c402: mov dword ptr [ecx], 0xb051c0 */ W32((u32)(r_ecx), 0xb051c0u);
    /* 0055c408: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c40a: je 0x55c426 */ if (fZ) goto L_0055c426;
L_0055c40c:; BB(0x0055c40c);
    /* 0055c40c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055c40f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055c413: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c418: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055c41c: mov dword ptr [ecx + 0x46c], 0 */ W32((u32)(r_ecx+0x46cu), 0x0u);
L_0055c426:; BB(0x0055c426);
    /* 0055c426: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x55c42bu); f_007b9c8c();
    /* 0055c42b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055c432: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055c435: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c43b: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x55c440u); f_005769f8();
    /* 0055c440: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055c447: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055c44a: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x55c44fu); f_0051f4fc();
    /* 0055c44f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c452: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055c459: mov esp, ebp */ r_esp = r_ebp;
    /* 0055c45b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c45c: ret  */ FN_RET(0x0055c3c8); r_esp += 4; return;
}

void f_0055c460(void) /* sub_55C460 */
{
    FN_ENTER(0x0055c460);
    /* 0055c460: mov eax, dword ptr [0xa73c90] */ r_eax = R32((u32)(0xa73c90u));
    /* 0055c465: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c468: jne 0x55c48d */ if (!fZ) goto L_0055c48d;
L_0055c46a:; BB(0x0055c46a);
    /* 0055c46a: mov edx, dword ptr [0xa73c8c] */ r_edx = R32((u32)(0xa73c8cu));
    /* 0055c470: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c471: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 0055c474: mov dword ptr [0xa73c8c], eax */ W32((u32)(0xa73c8cu), r_eax);
    /* 0055c479: push 0xa73c24 */ { u32 v = 0xa73c24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c47e: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x55c483u); f_00520c5c();
    /* 0055c483: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c486: mov eax, dword ptr [0xa73c90] */ r_eax = R32((u32)(0xa73c90u));
    /* 0055c48b: jmp 0x55c4b3 */ goto L_0055c4b3;
L_0055c48d:; BB(0x0055c48d);
    /* 0055c48d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c490: jne 0x55c4b3 */ if (!fZ) goto L_0055c4b3;
L_0055c492:; BB(0x0055c492);
    /* 0055c492: mov edx, dword ptr [0xa73c8c] */ r_edx = R32((u32)(0xa73c8cu));
    /* 0055c498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c499: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 0055c49c: mov dword ptr [0xa73c8c], eax */ W32((u32)(0xa73c8cu), r_eax);
    /* 0055c4a1: push 0xa73c24 */ { u32 v = 0xa73c24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4a6: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x55c4abu); f_00520c5c();
    /* 0055c4ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c4ae: mov eax, dword ptr [0xa73c90] */ r_eax = R32((u32)(0xa73c90u));
L_0055c4b3:; BB(0x0055c4b3);
    /* 0055c4b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055c4b6: mov dword ptr [0xa73c90], eax */ W32((u32)(0xa73c90u), r_eax);
    /* 0055c4bb: ret  */ FN_RET(0x0055c460); r_esp += 4; return;
}

void f_0055c4bc(void) /* sub_55C4BC */
{
    FN_ENTER(0x0055c4bc);
    /* 0055c4bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055c4bf: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0055c4c5: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c4ca: jne 0x55c513 */ if (!fZ) goto L_0055c513;
L_0055c4cc:; BB(0x0055c4cc);
    /* 0055c4cc: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0055c4d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c4d4: jne 0x55c508 */ if (!fZ) goto L_0055c508;
L_0055c4d6:; BB(0x0055c4d6);
    /* 0055c4d6: mov eax, dword ptr [ebx + 0x438] */ r_eax = R32((u32)(r_ebx+0x438u));
    /* 0055c4dc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c4df: jge 0x55c4f3 */ if ((fS==fO)) goto L_0055c4f3;
L_0055c4e1:; BB(0x0055c4e1);
    /* 0055c4e1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c4e5: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c4eau); f_0051f62c();
    /* 0055c4ea: add dword ptr [ebx + 0x438], 1 */ { u32 ad = (u32)(r_ebx+0x438u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055c4f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c4f2: ret  */ FN_RET(0x0055c4bc); r_esp += 4; return;
L_0055c4f3:; BB(0x0055c4f3);
    /* 0055c4f3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c4f7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c4fcu); f_0051f62c();
    /* 0055c4fc: mov dword ptr [ebx + 0x438], 0 */ W32((u32)(r_ebx+0x438u), 0x0u);
    /* 0055c506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c507: ret  */ FN_RET(0x0055c4bc); r_esp += 4; return;
L_0055c508:; BB(0x0055c508);
    /* 0055c508: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c50a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c50c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c511u); f_0051f62c();
    /* 0055c511: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c512: ret  */ FN_RET(0x0055c4bc); r_esp += 4; return;
L_0055c513:; BB(0x0055c513);
    /* 0055c513: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c515: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c517: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c51cu); f_0051f62c();
    /* 0055c51c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c51d: ret  */ FN_RET(0x0055c4bc); r_esp += 4; return;
}

void f_0055c520(void) /* sub_55C520 */
{
    FN_ENTER(0x0055c520);
    /* 0055c520: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055c525: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055c52b: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0055c52e: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0055c531: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0055c537: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0055c53a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0055c53d: ret  */ FN_RET(0x0055c520); r_esp += 4; return;
}

void f_0055c540(void) /* sub_55C540 */
{
    FN_ENTER(0x0055c540);
    /* 0055c540: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055c546: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055c548: je 0x55c560 */ if (fZ) goto L_0055c560;
L_0055c54a:; BB(0x0055c54a);
    /* 0055c54a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c54c: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055c54f: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055c555: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c55au); f_0051f62c();
    /* 0055c55a: mov eax, 1 */ r_eax = 0x1u;
    /* 0055c55f: ret  */ FN_RET(0x0055c540); r_esp += 4; return;
L_0055c560:; BB(0x0055c560);
    /* 0055c560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c562: ret  */ FN_RET(0x0055c540); r_esp += 4; return;
}

void f_0055c564(void) /* sub_55C564 */
{
    FN_ENTER(0x0055c564);
    /* 0055c564: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c565: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055c567: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c56b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c56d: call 0x520638 */ r_esp -= 4; W32(r_esp, 0x55c572u); f_00520638();
    /* 0055c572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c574: je 0x55c58c */ if (fZ) goto L_0055c58c;
L_0055c576:; BB(0x0055c576);
    /* 0055c576: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0055c57c: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c582: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0055c588: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c589: ret 4 */ FN_RET(0x0055c564); r_esp += 8; return;
L_0055c58c:; BB(0x0055c58c);
    /* 0055c58c: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0055c592: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c598: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0055c59e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c59f: ret 4 */ FN_RET(0x0055c564); r_esp += 8; return;
}

void f_0055c5a4(void) /* sub_55C5A4 */
{
    FN_ENTER(0x0055c5a4);
    /* 0055c5a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055c5a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055c5a7: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 0055c5ad: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0055c5b0: fcom dword ptr [0x9257cc] */ fx_compare(ST(0), R_F32((u32)(0x9257ccu))); 
    /* 0055c5b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055c5b8: fstp dword ptr [ebp + 0x3fc] */ W_F32((u32)(r_ebp+0x3fcu), ST(0)); FPOP();
    /* 0055c5be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055c5bf: jae 0x55c5ce */ if (!fC) goto L_0055c5ce;
L_0055c5c1:; BB(0x0055c5c1);
    /* 0055c5c1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055c5c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c5c6: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x55c5ccu); call_ind(t); }
    /* 0055c5cc: jmp 0x55c5d9 */ goto L_0055c5d9;
L_0055c5ce:; BB(0x0055c5ce);
    /* 0055c5ce: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055c5d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c5d3: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x55c5d9u); call_ind(t); }
L_0055c5d9:; BB(0x0055c5d9);
    /* 0055c5d9: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0055c5df: mov eax, dword ptr [ebp + 0x3fc] */ r_eax = R32((u32)(r_ebp+0x3fcu));
    /* 0055c5e5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055c5e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c5e9: ret  */ FN_RET(0x0055c5a4); r_esp += 4; return;
}

void f_0055c5ec(void) /* sub_55C5EC */
{
    FN_ENTER(0x0055c5ec);
    /* 0055c5ec: call 0x520220 */ r_esp -= 4; W32(r_esp, 0x55c5f1u); f_00520220();
    /* 0055c5f1: ret  */ FN_RET(0x0055c5ec); r_esp += 4; return;
}

void f_0055c5f4(void) /* sub_55C5F4 */
{
    FN_ENTER(0x0055c5f4);
    /* 0055c5f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055c5f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055c5f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055c5fb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c5fe: je 0x55c72c */ if (fZ) goto L_0055c72c;
L_0055c604:; BB(0x0055c604);
    /* 0055c604: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055c607: je 0x55c71b */ if (fZ) goto L_0055c71b;
L_0055c60d:; BB(0x0055c60d);
    /* 0055c60d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c610: je 0x55c6e5 */ if (fZ) goto L_0055c6e5;
L_0055c616:; BB(0x0055c616);
    /* 0055c616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c618: jne 0x55c6d1 */ if (!fZ) goto L_0055c6d1;
L_0055c61e:; BB(0x0055c61e);
    /* 0055c61e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c620: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55c625u); f_007aa094();
    /* 0055c625: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c62a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c62c: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55c631u); f_00520ea0();
    /* 0055c631: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055c637: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c639: je 0x55c694 */ if (fZ) goto L_0055c694;
L_0055c63b:; BB(0x0055c63b);
    /* 0055c63b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c63e: jne 0x55c686 */ if (!fZ) goto L_0055c686;
L_0055c640:; BB(0x0055c640);
    /* 0055c640: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 0055c646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c648: jne 0x55c67d */ if (!fZ) goto L_0055c67d;
L_0055c64a:; BB(0x0055c64a);
    /* 0055c64a: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055c650: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c655: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055c65b: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0055c661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c663: jne 0x55c66e */ if (!fZ) goto L_0055c66e;
L_0055c665:; BB(0x0055c665);
    /* 0055c665: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c667: call 0x53e538 */ r_esp -= 4; W32(r_esp, 0x55c66cu); f_0053e538();
    /* 0055c66c: jmp 0x55c673 */ goto L_0055c673;
L_0055c66e:; BB(0x0055c66e);
    /* 0055c66e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c671: jne 0x55c67d */ if (!fZ) goto L_0055c67d;
L_0055c673:; BB(0x0055c673);
    /* 0055c673: mov dword ptr [ebp + 0x43c], 3 */ W32((u32)(r_ebp+0x43cu), 0x3u);
L_0055c67d:; BB(0x0055c67d);
    /* 0055c67d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c67f: call 0x55edbc */ r_esp -= 4; W32(r_esp, 0x55c684u); f_0055edbc();
    /* 0055c684: jmp 0x55c6bb */ goto L_0055c6bb;
L_0055c686:; BB(0x0055c686);
    /* 0055c686: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c689: jne 0x55c6bb */ if (!fZ) goto L_0055c6bb;
L_0055c68b:; BB(0x0055c68b);
    /* 0055c68b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c68d: call 0x55edbc */ r_esp -= 4; W32(r_esp, 0x55c692u); f_0055edbc();
    /* 0055c692: jmp 0x55c6bb */ goto L_0055c6bb;
L_0055c694:; BB(0x0055c694);
    /* 0055c694: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0055c69a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c69d: mov dword ptr [ebp + 0x40c], eax */ W32((u32)(r_ebp+0x40cu), r_eax);
    /* 0055c6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055c6a5: jg 0x55c6bb */ if ((!fZ&&fS==fO)) goto L_0055c6bb;
L_0055c6a7:; BB(0x0055c6a7);
    /* 0055c6a7: mov dword ptr [ebp + 0x484], 2 */ W32((u32)(r_ebp+0x484u), 0x2u);
    /* 0055c6b1: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
L_0055c6bb:; BB(0x0055c6bb);
    /* 0055c6bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c6bd: call 0x55fb70 */ r_esp -= 4; W32(r_esp, 0x55c6c2u); f_0055fb70();
    /* 0055c6c2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055c6c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c6c7: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55c6cdu); call_ind(t); }
    /* 0055c6cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c6ce: ret 4 */ FN_RET(0x0055c5f4); r_esp += 8; return;
L_0055c6d1:; BB(0x0055c6d1);
    /* 0055c6d1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055c6d4: jne 0x55c71b */ if (!fZ) goto L_0055c71b;
L_0055c6d6:; BB(0x0055c6d6);
    /* 0055c6d6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055c6d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c6db: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x55c6e1u); call_ind(t); }
    /* 0055c6e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c6e2: ret 4 */ FN_RET(0x0055c5f4); r_esp += 8; return;
L_0055c6e5:; BB(0x0055c6e5);
    /* 0055c6e5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055c6e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c6ea: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55c6f0u); call_ind(t); }
    /* 0055c6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c6f2: jne 0x55c71b */ if (!fZ) goto L_0055c71b;
L_0055c6f4:; BB(0x0055c6f4);
    /* 0055c6f4: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055c6fa: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c6fc: je 0x55c71b */ if (fZ) goto L_0055c71b;
L_0055c6fe:; BB(0x0055c6fe);
    /* 0055c6fe: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055c701: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055c707: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0055c70d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c710: je 0x55c71f */ if (fZ) goto L_0055c71f;
L_0055c712:; BB(0x0055c712);
    /* 0055c712: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c714: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c716: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c71bu); f_0051f62c();
L_0055c71b:; BB(0x0055c71b);
    /* 0055c71b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c71c: ret 4 */ FN_RET(0x0055c5f4); r_esp += 8; return;
L_0055c71f:; BB(0x0055c71f);
    /* 0055c71f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c721: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c723: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55c728u); f_0051f62c();
    /* 0055c728: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c729: ret 4 */ FN_RET(0x0055c5f4); r_esp += 8; return;
L_0055c72c:; BB(0x0055c72c);
    /* 0055c72c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c72e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c730: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055c737: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c739: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55c73eu); f_0051f664();
    /* 0055c73e: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055c744: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055c747: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055c74c: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055c752: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c754: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55c75au); call_ind(t); }
    /* 0055c75a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0055c75d: mov dword ptr [ebp + 0x474], 0 */ W32((u32)(r_ebp+0x474u), 0x0u);
    /* 0055c767: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055c76c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0055c76f: mov dword ptr [ebp + 0x478], 0x3e4ccccd */ W32((u32)(r_ebp+0x478u), 0x3e4ccccdu);
    /* 0055c779: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055c77b: mov dword ptr [ebp + 0x47c], 0x3f800000 */ W32((u32)(r_ebp+0x47cu), 0x3f800000u);
    /* 0055c785: call 0x55cd60 */ r_esp -= 4; W32(r_esp, 0x55c78au); f_0055cd60();
    /* 0055c78a: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 0055c794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c795: ret 4 */ FN_RET(0x0055c5f4); r_esp += 8; return;
}

void f_0055c798(void) /* sub_55C798 */
{
    FN_ENTER(0x0055c798);
    /* 0055c798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055c799: mov edi, ecx */ r_edi = r_ecx;
    /* 0055c79b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055c79f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c7a2: je 0x55c801 */ if (fZ) goto L_0055c801;
L_0055c7a4:; BB(0x0055c7a4);
    /* 0055c7a4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c7a7: je 0x55c7dc */ if (fZ) goto L_0055c7dc;
L_0055c7a9:; BB(0x0055c7a9);
    /* 0055c7a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c7ab: jne 0x55c7fd */ if (!fZ) goto L_0055c7fd;
L_0055c7ad:; BB(0x0055c7ad);
    /* 0055c7ad: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c7af: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55c7b4u); f_007aa094();
    /* 0055c7b4: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7b9: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c7bb: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55c7c0u); f_00520ea0();
    /* 0055c7c0: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c7c2: call 0x55edbc */ r_esp -= 4; W32(r_esp, 0x55c7c7u); f_0055edbc();
    /* 0055c7c7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c7c9: call 0x55fb5c */ r_esp -= 4; W32(r_esp, 0x55c7ceu); f_0055fb5c();
    /* 0055c7ce: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055c7d0: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c7d2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55c7d8u); call_ind(t); }
    /* 0055c7d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055c7d9: ret 4 */ FN_RET(0x0055c798); r_esp += 8; return;
L_0055c7dc:; BB(0x0055c7dc);
    /* 0055c7dc: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055c7e2: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c7e7: je 0x55c7fd */ if (fZ) goto L_0055c7fd;
L_0055c7e9:; BB(0x0055c7e9);
    /* 0055c7e9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055c7eb: mov dword ptr [edi + 0x410], 0 */ W32((u32)(r_edi+0x410u), 0x0u);
    /* 0055c7f5: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c7f7: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x55c7fdu); call_ind(t); }
L_0055c7fd:; BB(0x0055c7fd);
    /* 0055c7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055c7fe: ret 4 */ FN_RET(0x0055c798); r_esp += 8; return;
L_0055c801:; BB(0x0055c801);
    /* 0055c801: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c805: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055c80c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c80e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55c813u); f_0051f664();
    /* 0055c813: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055c819: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0055c81b: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055c820: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055c826: mov ecx, edi */ r_ecx = r_edi;
    /* 0055c828: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55c82eu); call_ind(t); }
    /* 0055c82e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0055c831: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c836: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0055c839: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055c83a: ret 4 */ FN_RET(0x0055c798); r_esp += 8; return;
}

void f_0055c840(void) /* sub_55C840 */
{
    FN_ENTER(0x0055c840);
    /* 0055c840: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c841: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055c843: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055c847: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c84a: je 0x55c866 */ if (fZ) goto L_0055c866;
L_0055c84c:; BB(0x0055c84c);
    /* 0055c84c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055c84f: je 0x55c862 */ if (fZ) goto L_0055c862;
L_0055c851:; BB(0x0055c851);
    /* 0055c851: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c853: jne 0x55c862 */ if (!fZ) goto L_0055c862;
L_0055c855:; BB(0x0055c855);
    /* 0055c855: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0055c859: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c85e: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_0055c862:; BB(0x0055c862);
    /* 0055c862: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c863: ret 4 */ FN_RET(0x0055c840); r_esp += 8; return;
L_0055c866:; BB(0x0055c866);
    /* 0055c866: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0055c86c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c86f: je 0x55c8dd */ if (fZ) goto L_0055c8dd;
L_0055c871:; BB(0x0055c871);
    /* 0055c871: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c874: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0055c87a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c87b: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c87e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c880: push dword ptr [0xa73c80] */ { u32 v = R32((u32)(0xa73c80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055c886: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x55c88bu); f_00578aa0();
    /* 0055c88b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c88e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x55c893u); f_00807ac0();
    /* 0055c893: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c896: je 0x55c8d6 */ if (fZ) goto L_0055c8d6;
L_0055c898:; BB(0x0055c898);
    /* 0055c898: mov ecx, 0x250 */ r_ecx = 0x250u;
L_0055c89d:; BB(0x0055c89d);
    /* 0055c89d: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0055c8a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055c8a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8a6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55c8abu); f_00814298();
    /* 0055c8ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c8ae: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0055c8b4: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055c8b9: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0055c8bc: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0055c8c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055c8c4: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055c8ca: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0055c8cd: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x55c8d2u); f_0051f894();
    /* 0055c8d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055c8d3: ret 4 */ FN_RET(0x0055c840); r_esp += 8; return;
L_0055c8d6:; BB(0x0055c8d6);
    /* 0055c8d6: mov ecx, 0x2f3 */ r_ecx = 0x2f3u;
    /* 0055c8db: jmp 0x55c89d */ goto L_0055c89d;
L_0055c8dd:; BB(0x0055c8dd);
    /* 0055c8dd: movzx eax, word ptr [ebx + 0x494] */ r_eax = (u32)R16((u32)(r_ebx+0x494u));
    /* 0055c8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8e5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55c8eau); f_007b4d18();
    /* 0055c8ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055c8eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8ec: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0055c8f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055c8f4: mov ecx, eax */ r_ecx = r_eax;
    /* 0055c8f6: call dword ptr [edx + 0x1dc] */ { u32 t = R32((u32)(r_edx+0x1dcu)); r_esp -= 4; W32(r_esp, 0x55c8fcu); call_ind(t); }
    /* 0055c8fc: jmp 0x55c871 */ goto L_0055c871;
}

void f_0055c904(void) /* sub_55C904 */
{
    FN_ENTER(0x0055c904);
    /* 0055c904: mov edx, dword ptr [0xa73c7c] */ r_edx = R32((u32)(0xa73c7cu));
    /* 0055c90a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c90c: je 0x55c916 */ if (fZ) goto L_0055c916;
L_0055c90e:; BB(0x0055c90e);
    /* 0055c90e: mov eax, dword ptr [ecx + 0x480] */ r_eax = R32((u32)(r_ecx+0x480u));
    /* 0055c914: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0055c916:; BB(0x0055c916);
    /* 0055c916: ret  */ FN_RET(0x0055c904); r_esp += 4; return;
}

void f_0055c918(void)
{
    FN_ENTER(0x0055c918);
    /* 0055c918: mov ecx, dword ptr [0xa73c80] */ r_ecx = R32((u32)(0xa73c80u));
    /* 0055c91e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c920: je 0x55c934 */ if (fZ) goto L_0055c934;
L_0055c922:; BB(0x0055c922);
    /* 0055c922: je 0x55c92a */ if (fZ) goto L_0055c92a;
L_0055c924:; BB(0x0055c924);
    /* 0055c924: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c926: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055c928: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x55c92au); call_ind(t); }
L_0055c92a:; BB(0x0055c92a);
    /* 0055c92a: mov dword ptr [0xa73c80], 0 */ W32((u32)(0xa73c80u), 0x0u);
L_0055c934:; BB(0x0055c934);
    /* 0055c934: mov ecx, dword ptr [0xa73c84] */ r_ecx = R32((u32)(0xa73c84u));
    /* 0055c93a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c93c: je 0x55c950 */ if (fZ) goto L_0055c950;
L_0055c93e:; BB(0x0055c93e);
    /* 0055c93e: je 0x55c946 */ if (fZ) goto L_0055c946;
L_0055c940:; BB(0x0055c940);
    /* 0055c940: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c942: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055c944: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x55c946u); call_ind(t); }
L_0055c946:; BB(0x0055c946);
    /* 0055c946: mov dword ptr [0xa73c84], 0 */ W32((u32)(0xa73c84u), 0x0u);
L_0055c950:; BB(0x0055c950);
    /* 0055c950: mov ecx, dword ptr [0xa73c48] */ r_ecx = R32((u32)(0xa73c48u));
    /* 0055c956: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c958: je 0x55c96d */ if (fZ) goto L_0055c96d;
L_0055c95a:; BB(0x0055c95a);
    /* 0055c95a: je 0x55c963 */ if (fZ) goto L_0055c963;
L_0055c95c:; BB(0x0055c95c);
    /* 0055c95c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c95e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x55c963u); f_004066a8();
L_0055c963:; BB(0x0055c963);
    /* 0055c963: mov dword ptr [0xa73c48], 0 */ W32((u32)(0xa73c48u), 0x0u);
L_0055c96d:; BB(0x0055c96d);
    /* 0055c96d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x55c972u); f_0061cdb0();
    /* 0055c972: ret  */ FN_RET(0x0055c918); r_esp += 4; return;
}

void f_0055c974(void)
{
    FN_ENTER(0x0055c974);
    /* 0055c974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055c975: mov ebp, esp */ r_ebp = r_esp;
    /* 0055c977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c979: push 0x8d6628 */ { u32 v = 0x8d6628u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c97e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055c984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c985: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055c98c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055c98f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055c992: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0055c995: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0055c998: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0055c99b: push 0x498 */ { u32 v = 0x498u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9a0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0055c9a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x55c9acu); f_005caba4();
    /* 0055c9ac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055c9af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c9b2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0055c9b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c9b7: je 0x55ca55 */ if (fZ) goto L_0055ca55;
L_0055c9bd:; BB(0x0055c9bd);
    /* 0055c9bd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0055c9c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055c9cb: mov ecx, eax */ r_ecx = r_eax;
    /* 0055c9cd: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 0055c9d2: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0055c9d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9d6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055c9d9: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x55c9deu); f_005216f4();
    /* 0055c9de: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055c9e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c9e8: mov dword ptr [eax], 0xb051c0 */ W32((u32)(r_eax), 0xb051c0u);
    /* 0055c9ee: lea ecx, [eax + 0x3d4] */ r_ecx = (u32)(r_eax+0x3d4u);
    /* 0055c9f4: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x55c9f9u); f_00576a48();
    /* 0055c9f9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055ca00: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055ca03: mov eax, dword ptr [0x9be020] */ r_eax = R32((u32)(0x9be020u));
    /* 0055ca08: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ca0b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0055ca0e: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x55ca13u); f_0051f750();
    /* 0055ca13: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ca16: mov dword ptr [ecx + 0x3d0], 0 */ W32((u32)(r_ecx+0x3d0u), 0x0u);
    /* 0055ca20: call 0x55ca5c */ r_esp -= 4; W32(r_esp, 0x55ca25u); f_0055ca5c();
    /* 0055ca25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ca28: mov dword ptr [ecx + 0x3cc], 0 */ W32((u32)(r_ecx+0x3ccu), 0x0u);
    /* 0055ca32: mov dword ptr [ecx + 0x3c8], ecx */ W32((u32)(r_ecx+0x3c8u), r_ecx);
    /* 0055ca38: call 0x55fbc4 */ r_esp -= 4; W32(r_esp, 0x55ca3du); f_0055fbc4();
    /* 0055ca3d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0055ca44:; BB(0x0055ca44);
    /* 0055ca44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ca47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055ca51: mov esp, ebp */ r_esp = r_ebp;
    /* 0055ca53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ca54: ret  */ FN_RET(0x0055c974); r_esp += 4; return;
L_0055ca55:; BB(0x0055ca55);
    /* 0055ca55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ca57: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055ca5a: jmp 0x55ca44 */ goto L_0055ca44;
}

void f_0055ca5c(void) /* sub_55CA5C */
{
    FN_ENTER(0x0055ca5c);
    /* 0055ca5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ca5d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ca60: mov esi, ecx */ r_esi = r_ecx;
    /* 0055ca62: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 0055ca68: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055ca6b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055ca6f: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ca74: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ca79: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055ca7d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055ca81: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055ca85: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055ca88: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055ca8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ca8e: jne 0x55ca99 */ if (!fZ) goto L_0055ca99;
L_0055ca90:; BB(0x0055ca90);
    /* 0055ca90: mov ecx, esi */ r_ecx = r_esi;
    /* 0055ca92: call 0x53e8b4 */ r_esp -= 4; W32(r_esp, 0x55ca97u); f_0053e8b4();
    /* 0055ca97: jmp 0x55caa0 */ goto L_0055caa0;
L_0055ca99:; BB(0x0055ca99);
    /* 0055ca99: mov ecx, esi */ r_ecx = r_esi;
    /* 0055ca9b: call 0x53e89c */ r_esp -= 4; W32(r_esp, 0x55caa0u); f_0053e89c();
L_0055caa0:; BB(0x0055caa0);
    /* 0055caa0: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 0055caa6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055caa9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055caad: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055cab2: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055cab7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055cabb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055cabf: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055cac3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055cac6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055caca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cacc: jne 0x55cad7 */ if (!fZ) goto L_0055cad7;
L_0055cace:; BB(0x0055cace);
    /* 0055cace: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cad0: call 0x55cb44 */ r_esp -= 4; W32(r_esp, 0x55cad5u); f_0055cb44();
    /* 0055cad5: jmp 0x55cade */ goto L_0055cade;
L_0055cad7:; BB(0x0055cad7);
    /* 0055cad7: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cad9: call 0x55cb2c */ r_esp -= 4; W32(r_esp, 0x55cadeu); f_0055cb2c();
L_0055cade:; BB(0x0055cade);
    /* 0055cade: fld dword ptr [0x9257a0] */ FPUSH(R_F32((u32)(0x9257a0u)));
    /* 0055cae4: fadd dword ptr [esi + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x368u));
    /* 0055caea: fld dword ptr [0x92579c] */ FPUSH(R_F32((u32)(0x92579cu)));
    /* 0055caf0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055caf2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055caf4: fld dword ptr [esi + 0x364] */ FPUSH(R_F32((u32)(r_esi+0x364u)));
    /* 0055cafa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055cafb: fld dword ptr [0x925798] */ FPUSH(R_F32((u32)(0x925798u)));
    /* 0055cb01: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0055cb03: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055cb05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055cb07: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055cb09: jb 0x55cb0d */ if (fC) goto L_0055cb0d;
L_0055cb0b:; BB(0x0055cb0b);
    /* 0055cb0b: fst st(3) */ ST(3) = ST(0);
L_0055cb0d:; BB(0x0055cb0d);
    /* 0055cb0d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055cb0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055cb11: fstp dword ptr [esi + 0x404] */ W_F32((u32)(r_esi+0x404u), ST(0)); FPOP();
    /* 0055cb17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055cb18: jb 0x55cb1c */ if (fC) goto L_0055cb1c;
L_0055cb1a:; BB(0x0055cb1a);
    /* 0055cb1a: fst st(1) */ ST(1) = ST(0);
L_0055cb1c:; BB(0x0055cb1c);
    /* 0055cb1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055cb1e: fstp dword ptr [esi + 0x408] */ W_F32((u32)(r_esi+0x408u), ST(0)); FPOP();
    /* 0055cb24: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055cb27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055cb28: ret  */ FN_RET(0x0055ca5c); r_esp += 4; return;
}

void f_0055cb2c(void) /* sub_55CB2C */
{
    FN_ENTER(0x0055cb2c);
    /* 0055cb2c: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055cb32: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055cb37: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055cb3c: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055cb42: ret  */ FN_RET(0x0055cb2c); r_esp += 4; return;
}

void f_0055cb44(void) /* sub_55CB44 */
{
    FN_ENTER(0x0055cb44);
    /* 0055cb44: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055cb4a: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055cb4f: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055cb54: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055cb5a: ret  */ FN_RET(0x0055cb44); r_esp += 4; return;
}

void f_0055cb5c(void) /* sub_55CB5C */
{
    FN_ENTER(0x0055cb5c);
    /* 0055cb5c: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055cb61: ret  */ FN_RET(0x0055cb5c); r_esp += 4; return;
}

void f_0055cb64(void) /* sub_55CB64 */
{
    FN_ENTER(0x0055cb64);
    /* 0055cb64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb65: mov esi, ecx */ r_esi = r_ecx;
    /* 0055cb67: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x55cb6cu); f_004f7c84();
    /* 0055cb6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cb6e: jne 0x55cbb5 */ if (!fZ) goto L_0055cbb5;
L_0055cb70:; BB(0x0055cb70);
    /* 0055cb70: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0055cb76: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cb79: je 0x55cbc1 */ if (fZ) goto L_0055cbc1;
L_0055cb7b:; BB(0x0055cb7b);
    /* 0055cb7b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055cb7d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cb7f: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x55cb85u); call_ind(t); }
    /* 0055cb85: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cb88: je 0x55cb9b */ if (fZ) goto L_0055cb9b;
L_0055cb8a:; BB(0x0055cb8a);
    /* 0055cb8a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055cb8c: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cb8e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x55cb94u); call_ind(t); }
    /* 0055cb94: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cb96: call 0x55cbf4 */ r_esp -= 4; W32(r_esp, 0x55cb9bu); f_0055cbf4();
L_0055cb9b:; BB(0x0055cb9b);
    /* 0055cb9b: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cb9d: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55cba2u); f_0055ce28();
    /* 0055cba2: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cba4: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55cba9u); f_006401f0();
    /* 0055cba9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055cbab: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cbad: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55cbb3u); call_ind(t); }
    /* 0055cbb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055cbb4: ret  */ FN_RET(0x0055cb64); r_esp += 4; return;
L_0055cbb5:; BB(0x0055cbb5);
    /* 0055cbb5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055cbb7: mov ecx, esi */ r_ecx = r_esi;
    /* 0055cbb9: call dword ptr [eax + 0x1d0] */ { u32 t = R32((u32)(r_eax+0x1d0u)); r_esp -= 4; W32(r_esp, 0x55cbbfu); call_ind(t); }
    /* 0055cbbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055cbc0: ret  */ FN_RET(0x0055cb64); r_esp += 4; return;
L_0055cbc1:; BB(0x0055cbc1);
    /* 0055cbc1: movzx eax, word ptr [esi + 0x494] */ r_eax = (u32)R16((u32)(r_esi+0x494u));
    /* 0055cbc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbc9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55cbceu); f_007b4d18();
    /* 0055cbce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055cbcf: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0055cbd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cbd7: je 0x55cbe4 */ if (fZ) goto L_0055cbe4;
L_0055cbd9:; BB(0x0055cbd9);
    /* 0055cbd9: mov ecx, eax */ r_ecx = r_eax;
    /* 0055cbdb: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x55cbe0u); f_008173b4();
    /* 0055cbe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cbe2: jne 0x55cb7b */ if (!fZ) goto L_0055cb7b;
L_0055cbe4:; BB(0x0055cbe4);
    /* 0055cbe4: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0055cbe8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055cbed: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0055cbf1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055cbf2: ret  */ FN_RET(0x0055cb64); r_esp += 4; return;
}

void f_0055cbf4(void) /* sub_55CBF4 */
{
    FN_ENTER(0x0055cbf4);
    /* 0055cbf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbf6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055cbf9: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 0055cbff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc01: je 0x55cd5a */ if (fZ) goto L_0055cd5a;
L_0055cc07:; BB(0x0055cc07);
    /* 0055cc07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc0a: je 0x55cd20 */ if (fZ) goto L_0055cd20;
L_0055cc10:; BB(0x0055cc10);
    /* 0055cc10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc13: jne 0x55cc58 */ if (!fZ) goto L_0055cc58;
L_0055cc15:; BB(0x0055cc15);
    /* 0055cc15: fld dword ptr [ecx + 0x470] */ FPUSH(R_F32((u32)(r_ecx+0x470u)));
    /* 0055cc1b: fcom dword ptr [0x925794] */ fx_compare(ST(0), R_F32((u32)(0x925794u))); 
    /* 0055cc21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055cc23: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055cc24: jae 0x55cc36 */ if (!fC) goto L_0055cc36;
L_0055cc26:; BB(0x0055cc26);
    /* 0055cc26: fld dword ptr [0x925788] */ FPUSH(R_F32((u32)(0x925788u)));
    /* 0055cc2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055cc2e: fstp dword ptr [ecx + 0x470] */ W_F32((u32)(r_ecx+0x470u), ST(0)); FPOP();
    /* 0055cc34: jmp 0x55cc4d */ goto L_0055cc4d;
L_0055cc36:; BB(0x0055cc36);
    /* 0055cc36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055cc38: mov dword ptr [ecx + 0x484], 0 */ W32((u32)(r_ecx+0x484u), 0x0u);
    /* 0055cc42: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0055cc47: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
L_0055cc4d:; BB(0x0055cc4d);
    /* 0055cc4d: call 0x55cd60 */ r_esp -= 4; W32(r_esp, 0x55cc52u); f_0055cd60();
    /* 0055cc52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055cc55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055cc56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055cc57: ret  */ FN_RET(0x0055cbf4); r_esp += 4; return;
L_0055cc58:; BB(0x0055cc58);
    /* 0055cc58: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc5b: jne 0x55cd5a */ if (!fZ) goto L_0055cd5a;
L_0055cc61:; BB(0x0055cc61);
    /* 0055cc61: mov edx, dword ptr [ecx + 0x48c] */ r_edx = R32((u32)(r_ecx+0x48cu));
    /* 0055cc67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cc6a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0055cc6d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0055cc70: fcomp dword ptr [0x92578c] */ fx_compare(ST(0), R_F32((u32)(0x92578cu))); FPOP();
    /* 0055cc76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055cc78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055cc79: jb 0x55cd14 */ if (fC) goto L_0055cd14;
L_0055cc7f:; BB(0x0055cc7f);
    /* 0055cc7f: mov ebp, dword ptr [ecx + 0x490] */ r_ebp = R32((u32)(r_ecx+0x490u));
    /* 0055cc85: mov edx, dword ptr [ecx + 0x488] */ r_edx = R32((u32)(r_ecx+0x488u));
    /* 0055cc8b: mov ebx, dword ptr [edx*4 + 0x9be098] */ r_ebx = R32((u32)(r_edx*4+0x9be098u));
    /* 0055cc92: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 0055cc95: mov dword ptr [ecx + 0x490], eax */ W32((u32)(r_ecx+0x490u), r_eax);
    /* 0055cc9b: mov dword ptr [ecx + 0x48c], 0 */ W32((u32)(r_ecx+0x48cu), 0x0u);
    /* 0055cca5: movsx eax, byte ptr [ebx + ebp] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp));
    /* 0055cca9: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ccac: je 0x55ccff */ if (fZ) goto L_0055ccff;
L_0055ccae:; BB(0x0055ccae);
    /* 0055ccae: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ccb1: jne 0x55ccee */ if (!fZ) goto L_0055ccee;
L_0055ccb3:; BB(0x0055ccb3);
    /* 0055ccb3: mov dword ptr [ecx + 0x484], 0 */ W32((u32)(r_ecx+0x484u), 0x0u);
    /* 0055ccbd: mov eax, dword ptr [0x9257b8] */ r_eax = R32((u32)(0x9257b8u));
    /* 0055ccc2: mov edx, dword ptr [0x9257bc] */ r_edx = R32((u32)(0x9257bcu));
    /* 0055ccc8: mov ebx, dword ptr [0x9257c0] */ r_ebx = R32((u32)(0x9257c0u));
    /* 0055ccce: mov ebp, dword ptr [0x9257c4] */ r_ebp = R32((u32)(0x9257c4u));
    /* 0055ccd4: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
    /* 0055ccda: mov dword ptr [ecx + 0x474], edx */ W32((u32)(r_ecx+0x474u), r_edx);
    /* 0055cce0: mov dword ptr [ecx + 0x478], ebx */ W32((u32)(r_ecx+0x478u), r_ebx);
    /* 0055cce6: mov dword ptr [ecx + 0x47c], ebp */ W32((u32)(r_ecx+0x47cu), r_ebp);
    /* 0055ccec: jmp 0x55cd09 */ goto L_0055cd09;
L_0055ccee:; BB(0x0055ccee);
    /* 0055ccee: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ccf1: jne 0x55cd09 */ if (!fZ) goto L_0055cd09;
L_0055ccf3:; BB(0x0055ccf3);
    /* 0055ccf3: mov dword ptr [ecx + 0x470], 0x3f800000 */ W32((u32)(r_ecx+0x470u), 0x3f800000u);
    /* 0055ccfd: jmp 0x55cd09 */ goto L_0055cd09;
L_0055ccff:; BB(0x0055ccff);
    /* 0055ccff: mov dword ptr [ecx + 0x470], 0 */ W32((u32)(r_ecx+0x470u), 0x0u);
L_0055cd09:; BB(0x0055cd09);
    /* 0055cd09: call 0x55cd60 */ r_esp -= 4; W32(r_esp, 0x55cd0eu); f_0055cd60();
    /* 0055cd0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055cd11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055cd12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055cd13: ret  */ FN_RET(0x0055cbf4); r_esp += 4; return;
L_0055cd14:; BB(0x0055cd14);
    /* 0055cd14: mov dword ptr [ecx + 0x48c], edx */ W32((u32)(r_ecx+0x48cu), r_edx);
    /* 0055cd1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055cd1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055cd1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055cd1f: ret  */ FN_RET(0x0055cbf4); r_esp += 4; return;
L_0055cd20:; BB(0x0055cd20);
    /* 0055cd20: fld dword ptr [ecx + 0x470] */ FPUSH(R_F32((u32)(r_ecx+0x470u)));
    /* 0055cd26: fcom dword ptr [0x925790] */ fx_compare(ST(0), R_F32((u32)(0x925790u))); 
    /* 0055cd2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055cd2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055cd2f: jbe 0x55cd41 */ if ((fC||fZ)) goto L_0055cd41;
L_0055cd31:; BB(0x0055cd31);
    /* 0055cd31: fld dword ptr [0x925788] */ FPUSH(R_F32((u32)(0x925788u)));
    /* 0055cd37: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0055cd39: fstp dword ptr [ecx + 0x470] */ W_F32((u32)(r_ecx+0x470u), ST(0)); FPOP();
    /* 0055cd3f: jmp 0x55cd55 */ goto L_0055cd55;
L_0055cd41:; BB(0x0055cd41);
    /* 0055cd41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055cd43: mov dword ptr [ecx + 0x484], 0 */ W32((u32)(r_ecx+0x484u), 0x0u);
    /* 0055cd4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055cd4f: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
L_0055cd55:; BB(0x0055cd55);
    /* 0055cd55: call 0x55cd60 */ r_esp -= 4; W32(r_esp, 0x55cd5au); f_0055cd60();
L_0055cd5a:; BB(0x0055cd5a);
    /* 0055cd5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055cd5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055cd5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055cd5f: ret  */ FN_RET(0x0055cbf4); r_esp += 4; return;
}

void f_0055cd60(void) /* sub_55CD60 */
{
    FN_ENTER(0x0055cd60);
    /* 0055cd60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055cd63: fld dword ptr [0x925784] */ FPUSH(R_F32((u32)(0x925784u)));
    /* 0055cd69: fld dword ptr [ecx + 0x47c] */ FPUSH(R_F32((u32)(r_ecx+0x47cu)));
    /* 0055cd6f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055cd71: fmul dword ptr [0x925780] */ ST(0) = ST(0) * R_F32((u32)(0x925780u));
    /* 0055cd77: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055cd7a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055cd7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055cd83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055cd87: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055cd8b: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0055cd8f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055cd92: fld dword ptr [ecx + 0x478] */ FPUSH(R_F32((u32)(r_ecx+0x478u)));
    /* 0055cd98: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055cd9a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0055cd9e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055cda1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055cda5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055cdaa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055cdae: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055cdb2: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0055cdb6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055cdb9: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0055cdbe: fld dword ptr [ecx + 0x474] */ FPUSH(R_F32((u32)(r_ecx+0x474u)));
    /* 0055cdc4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055cdc6: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0055cdc9: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0055cdcc: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055cdce: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055cdd1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055cdd5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055cdda: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055cdde: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055cde2: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0055cde6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055cde9: fld dword ptr [ecx + 0x470] */ FPUSH(R_F32((u32)(r_ecx+0x470u)));
    /* 0055cdef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055cdf1: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0055cdf6: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0055cdf9: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055cdfb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055cdfe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055ce02: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ce07: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055ce0b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055ce0f: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0055ce13: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055ce16: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0055ce1b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055ce1d: mov dword ptr [ecx + 0x480], edx */ W32((u32)(r_ecx+0x480u), r_edx);
    /* 0055ce23: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ce26: ret  */ FN_RET(0x0055cd60); r_esp += 4; return;
}

void f_0055ce28(void) /* sub_55CE28 */
{
    FN_ENTER(0x0055ce28);
    /* 0055ce28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce29: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0055ce2c: mov edx, dword ptr [ecx + 0x400] */ r_edx = R32((u32)(r_ecx+0x400u));
    /* 0055ce32: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 0055ce35: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0055ce3b: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 0055ce41: mov dword ptr [ecx + 0x308], edi */ W32((u32)(r_ecx+0x308u), r_edi);
    /* 0055ce47: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0055ce4a: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0055ce4d: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 0055ce50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ce51: ret  */ FN_RET(0x0055ce28); r_esp += 4; return;
}

void f_0055ce54(void) /* sub_55CE54 */
{
    FN_ENTER(0x0055ce54);
    /* 0055ce54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce56: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ce58: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x55ce5du); f_004f7c84();
    /* 0055ce5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ce5f: jne 0x55d00a */ if (!fZ) goto L_0055d00a;
L_0055ce65:; BB(0x0055ce65);
    /* 0055ce65: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055ce6b: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ce70: jne 0x55cfd1 */ if (!fZ) goto L_0055cfd1;
L_0055ce76:; BB(0x0055ce76);
    /* 0055ce76: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x55ce7bu); f_00694cc8();
    /* 0055ce7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ce7d: je 0x55cea2 */ if (fZ) goto L_0055cea2;
L_0055ce7f:; BB(0x0055ce7f);
    /* 0055ce7f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce84: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ce86: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ce88: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055ce8e: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055ce94: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x55ce97u); call_ind(t); }
    /* 0055ce97: mov ebp, eax */ r_ebp = r_eax;
    /* 0055ce99: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ce9b: jne 0x55cec0 */ if (!fZ) goto L_0055cec0;
L_0055ce9d:; BB(0x0055ce9d);
    /* 0055ce9d: jmp 0x55cfd1 */ goto L_0055cfd1;
L_0055cea2:; BB(0x0055cea2);
    /* 0055cea2: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cea7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055cea9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ceab: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ceb0: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x55ceb3u); call_ind(t); }
    /* 0055ceb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ceb5: je 0x55cfd1 */ if (fZ) goto L_0055cfd1;
L_0055cebb:; BB(0x0055cebb);
    /* 0055cebb: mov ebp, 1 */ r_ebp = 0x1u;
L_0055cec0:; BB(0x0055cec0);
    /* 0055cec0: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0055cec6: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cecc: je 0x55ced9 */ if (fZ) goto L_0055ced9;
L_0055cece:; BB(0x0055cece);
    /* 0055cece: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055ced0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ced1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ced2: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ced4: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x55ced9u); f_00520cf8();
L_0055ced9:; BB(0x0055ced9);
    /* 0055ced9: mov ecx, edi */ r_ecx = r_edi;
    /* 0055cedb: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x55cee0u); f_00520608();
    /* 0055cee0: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0055cee3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55cee8u); f_00829cc8();
    /* 0055cee8: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0055ceee: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0055cef4: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x55cef9u); f_00520d08();
    /* 0055cef9: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55cefeu); f_00578b38();
    /* 0055cefe: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0055cf00: mov ecx, edi */ r_ecx = r_edi;
    /* 0055cf02: call dword ptr [edx + 0x1cc] */ { u32 t = R32((u32)(r_edx+0x1ccu)); r_esp -= 4; W32(r_esp, 0x55cf08u); call_ind(t); }
    /* 0055cf08: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55cf0du); f_0082d7b0();
    /* 0055cf0d: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055cf10: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55cf15u); f_0082d838();
    /* 0055cf15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf17: push dword ptr [edi + 0x3fc] */ { u32 v = R32((u32)(r_edi+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055cf1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cf1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf21: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x55cf26u); f_00830b74();
    /* 0055cf26: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0055cf29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cf2b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55cf30u); f_0082d8bc();
    /* 0055cf30: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055cf37: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf3a: je 0x55d071 */ if (fZ) goto L_0055d071;
L_0055cf40:; BB(0x0055cf40);
    /* 0055cf40: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf43: je 0x55d071 */ if (fZ) goto L_0055d071;
L_0055cf49:; BB(0x0055cf49);
    /* 0055cf49: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf4c: je 0x55d02d */ if (fZ) goto L_0055d02d;
L_0055cf52:; BB(0x0055cf52);
    /* 0055cf52: mov dword ptr [0xa73c90], 0 */ W32((u32)(0xa73c90u), 0x0u);
    /* 0055cf5c: lea edx, [edi + 0x41c] */ r_edx = (u32)(r_edi+0x41cu);
    /* 0055cf62: mov ecx, 0x55c460 */ r_ecx = 0x55c460u;
    /* 0055cf67: mov dword ptr [0xa73c8c], edx */ W32((u32)(0xa73c8cu), r_edx);
    /* 0055cf6d: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55cf72u); f_0082fac4();
    /* 0055cf72: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf75: je 0x55d017 */ if (fZ) goto L_0055d017;
L_0055cf7b:; BB(0x0055cf7b);
    /* 0055cf7b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x55cf80u); f_0082fa9c();
    /* 0055cf80: mov ecx, edi */ r_ecx = r_edi;
    /* 0055cf82: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x55cf87u); f_007aa7b8();
    /* 0055cf87: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x55cf8cu); f_0082faac();
L_0055cf8c:; BB(0x0055cf8c);
    /* 0055cf8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cf8e: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55cf93u); f_0082fac4();
L_0055cf93:; BB(0x0055cf93);
    /* 0055cf93: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055cf9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf9d: je 0x55cfa4 */ if (fZ) goto L_0055cfa4;
L_0055cf9f:; BB(0x0055cf9f);
    /* 0055cf9f: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cfa2: jne 0x55cfb3 */ if (!fZ) goto L_0055cfb3;
L_0055cfa4:; BB(0x0055cfa4);
    /* 0055cfa4: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0055cfaa: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0055cfb0: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55cfb3u); call_ind(t); }
L_0055cfb3:; BB(0x0055cfb3);
    /* 0055cfb3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55cfb8u); f_0082da80();
    /* 0055cfb8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x55cfbdu); f_0082dab0();
    /* 0055cfbd: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055cfc2: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055cfc7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055cfc9: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x55cfceu); f_00520610();
    /* 0055cfce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055cfcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055cfd0: ret  */ FN_RET(0x0055ce54); r_esp += 4; return;
L_0055cfd1:; BB(0x0055cfd1);
    /* 0055cfd1: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0055cfd7: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0055cfdd: mov ebp, dword ptr [edi + 0x308] */ r_ebp = R32((u32)(r_edi+0x308u));
    /* 0055cfe3: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 0055cfe9: mov dword ptr [edi + 0x420], edx */ W32((u32)(r_edi+0x420u), r_edx);
    /* 0055cfef: mov dword ptr [edi + 0x424], ebp */ W32((u32)(r_edi+0x424u), r_ebp);
    /* 0055cff5: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 0055cffb: mov dword ptr [edi + 0x42c], edx */ W32((u32)(r_edi+0x42cu), r_edx);
    /* 0055d001: mov dword ptr [edi + 0x430], ebp */ W32((u32)(r_edi+0x430u), r_ebp);
    /* 0055d007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d008: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d009: ret  */ FN_RET(0x0055ce54); r_esp += 4; return;
L_0055d00a:; BB(0x0055d00a);
    /* 0055d00a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055d00c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d00e: call dword ptr [eax + 0x1d4] */ { u32 t = R32((u32)(r_eax+0x1d4u)); r_esp -= 4; W32(r_esp, 0x55d014u); call_ind(t); }
    /* 0055d014: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d015: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055d016: ret  */ FN_RET(0x0055ce54); r_esp += 4; return;
L_0055d017:; BB(0x0055d017);
    /* 0055d017: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x55d01cu); f_0082fa9c();
    /* 0055d01c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d01e: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x55d023u); f_007aa668();
    /* 0055d023: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x55d028u); f_0082faac();
    /* 0055d028: jmp 0x55cf8c */ goto L_0055cf8c;
L_0055d02d:; BB(0x0055d02d);
    /* 0055d02d: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0055d030: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d032: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x55d037u); f_00830c04();
    /* 0055d037: mov dword ptr [0xa73c90], 0xffffffff */ W32((u32)(0xa73c90u), 0xffffffffu);
    /* 0055d041: lea eax, [edi + 0x41c] */ r_eax = (u32)(r_edi+0x41cu);
    /* 0055d047: mov ecx, 0x55c460 */ r_ecx = 0x55c460u;
    /* 0055d04c: mov dword ptr [0xa73c8c], eax */ W32((u32)(0xa73c8cu), r_eax);
    /* 0055d051: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55d056u); f_0082fac4();
    /* 0055d056: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055d05c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055d05d: call 0x52d2b0 */ r_esp -= 4; W32(r_esp, 0x55d062u); f_0052d2b0();
    /* 0055d062: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d065: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d067: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55d06cu); f_0082fac4();
    /* 0055d06c: jmp 0x55cf93 */ goto L_0055cf93;
L_0055d071:; BB(0x0055d071);
    /* 0055d071: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0055d077: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0055d07d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x55d080u); call_ind(t); }
    /* 0055d080: mov ecx, edi */ r_ecx = r_edi;
    /* 0055d082: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x55d087u); f_008173d0();
    /* 0055d087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d089: jne 0x55cf93 */ if (!fZ) goto L_0055cf93;
L_0055d08f:; BB(0x0055d08f);
    /* 0055d08f: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055d096: jmp 0x55cf49 */ goto L_0055cf49;
}

