#include "protos.h"

void f_0078e000(void) /* sub_78E000 */
{
    FN_ENTER(0x0078e000);
    /* 0078e000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e001: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e002: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078e007: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x78e00cu); f_006c1bd4();
    /* 0078e00c: mov ebx, eax */ r_ebx = r_eax;
    /* 0078e00e: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078e013: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078e017: lea edi, [ebx + 0x2668] */ r_edi = (u32)(r_ebx+0x2668u);
    /* 0078e01d: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x78e022u); f_00813a78();
    /* 0078e022: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0078e027: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078e02c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e02d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78e032u); f_00857dec();
    /* 0078e032: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078e034: mov word ptr [ebx + 0x27be], dx */ W16((u32)(r_ebx+0x27beu), (u16)r_edx);
    /* 0078e03b: mov eax, dword ptr [0xa9ca48] */ r_eax = R32((u32)(0xa9ca48u));
    /* 0078e040: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078e043: mov dword ptr [0xa9ca48], eax */ W32((u32)(0xa9ca48u), r_eax);
    /* 0078e048: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078e04b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e04c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e04d: ret  */ FN_RET(0x0078e000); r_esp += 4; return;
}

void f_0078e050(void) /* sub_78E050 */
{
    FN_ENTER(0x0078e050);
    /* 0078e050: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78e055u); f_006dc358();
    /* 0078e055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e057: je 0x78e05f */ if (fZ) goto L_0078e05f;
L_0078e059:; BB(0x0078e059);
    /* 0078e059: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 0078e05e: ret  */ FN_RET(0x0078e050); r_esp += 4; return;
L_0078e05f:; BB(0x0078e05f);
    /* 0078e05f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078e064: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x78e069u); f_006c1bd4();
    /* 0078e069: add eax, 0x2668 */ {  u32 a = r_eax; u32 b = 0x2668u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078e06e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e06f: ret  */ FN_RET(0x0078e050); r_esp += 4; return;
}

void f_0078e070(void) /* sub_78E070 */
{
    FN_ENTER(0x0078e070);
    /* 0078e070: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78e075u); f_006dc358();
    /* 0078e075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e077: jne 0x78e084 */ if (!fZ) goto L_0078e084;
L_0078e079:; BB(0x0078e079);
    /* 0078e079: mov edx, dword ptr [0xa9ca48] */ r_edx = R32((u32)(0xa9ca48u));
    /* 0078e07f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e082: jne 0x78e085 */ if (!fZ) goto L_0078e085;
L_0078e084:; BB(0x0078e084);
    /* 0078e084: ret  */ FN_RET(0x0078e070); r_esp += 4; return;
L_0078e085:; BB(0x0078e085);
    /* 0078e085: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 0078e08a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e08c: je 0x78e0a5 */ if (fZ) goto L_0078e0a5;
L_0078e08e:; BB(0x0078e08e);
    /* 0078e08e: call 0x78e050 */ r_esp -= 4; W32(r_esp, 0x78e093u); f_0078e050();
    /* 0078e093: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078e099: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078e09a: call 0x7d7aa4 */ r_esp -= 4; W32(r_esp, 0x78e09fu); f_007d7aa4();
    /* 0078e09f: mov edx, dword ptr [0xa9ca48] */ r_edx = R32((u32)(0xa9ca48u));
L_0078e0a5:; BB(0x0078e0a5);
    /* 0078e0a5: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e0a8: mov dword ptr [0xa9ca48], edx */ W32((u32)(0xa9ca48u), r_edx);
    /* 0078e0ae: ret  */ FN_RET(0x0078e070); r_esp += 4; return;
}

void f_0078e0b0(void) /* sub_78E0B0 */
{
    FN_ENTER(0x0078e0b0);
    /* 0078e0b0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78e0b5u); f_006dc358();
    /* 0078e0b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e0b7: jne 0x78e0ea */ if (!fZ) goto L_0078e0ea;
L_0078e0b9:; BB(0x0078e0b9);
    /* 0078e0b9: mov eax, dword ptr [0xa9ca44] */ r_eax = R32((u32)(0xa9ca44u));
    /* 0078e0be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e0c0: je 0x78e0c3 */ if (fZ) goto L_0078e0c3;
L_0078e0c2:; BB(0x0078e0c2);
    /* 0078e0c2: ret  */ FN_RET(0x0078e0b0); r_esp += 4; return;
L_0078e0c3:; BB(0x0078e0c3);
    /* 0078e0c3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078e0c7: mov edx, dword ptr [0xa9ca48] */ r_edx = R32((u32)(0xa9ca48u));
    /* 0078e0cd: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078e0d3: mov dword ptr [0xa9ca44], eax */ W32((u32)(0xa9ca44u), r_eax);
    /* 0078e0d8: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078e0db: mov dword ptr [0xa9ca48], edx */ W32((u32)(0xa9ca48u), r_edx);
    /* 0078e0e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e0e3: je 0x78e0ea */ if (fZ) goto L_0078e0ea;
L_0078e0e5:; BB(0x0078e0e5);
    /* 0078e0e5: call 0x7d79f4 */ r_esp -= 4; W32(r_esp, 0x78e0eau); f_007d79f4();
L_0078e0ea:; BB(0x0078e0ea);
    /* 0078e0ea: ret  */ FN_RET(0x0078e0b0); r_esp += 4; return;
}

void f_0078e0ec(void) /* sub_78E0EC */
{
    FN_ENTER(0x0078e0ec);
    /* 0078e0ec: mov eax, dword ptr [0xa9ca44] */ r_eax = R32((u32)(0xa9ca44u));
    /* 0078e0f1: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078e0f5: je 0x78e0f8 */ if (fZ) goto L_0078e0f8;
L_0078e0f7:; BB(0x0078e0f7);
    /* 0078e0f7: ret  */ FN_RET(0x0078e0ec); r_esp += 4; return;
L_0078e0f8:; BB(0x0078e0f8);
    /* 0078e0f8: mov dword ptr [0xa9ca44], 0 */ W32((u32)(0xa9ca44u), 0x0u);
    /* 0078e102: ret  */ FN_RET(0x0078e0ec); r_esp += 4; return;
}

void f_0078e104(void) /* sub_78E104 */
{
    FN_ENTER(0x0078e104);
    /* 0078e104: mov eax, dword ptr [0xa9ca48] */ r_eax = R32((u32)(0xa9ca48u));
    /* 0078e109: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078e10b: jne 0x78e110 */ if (!fZ) goto L_0078e110;
L_0078e10d:; BB(0x0078e10d);
    /* 0078e10d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e10f: ret  */ FN_RET(0x0078e104); r_esp += 4; return;
L_0078e110:; BB(0x0078e110);
    /* 0078e110: mov eax, dword ptr [0xa9ca44] */ r_eax = R32((u32)(0xa9ca44u));
    /* 0078e115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e117: je 0x78e10d */ if (fZ) goto L_0078e10d;
L_0078e119:; BB(0x0078e119);
    /* 0078e119: ret  */ FN_RET(0x0078e104); r_esp += 4; return;
}

void f_0078e11c(void) /* sub_78E11C */
{
    FN_ENTER(0x0078e11c);
    /* 0078e11c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e11d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e11e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78e123u); f_006dc358();
    /* 0078e123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e125: jne 0x78e157 */ if (!fZ) goto L_0078e157;
L_0078e127:; BB(0x0078e127);
    /* 0078e127: mov eax, dword ptr [0xa9ca48] */ r_eax = R32((u32)(0xa9ca48u));
    /* 0078e12c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e12e: jne 0x78e157 */ if (!fZ) goto L_0078e157;
L_0078e130:; BB(0x0078e130);
    /* 0078e130: mov edi, dword ptr [0xa9ca44] */ r_edi = R32((u32)(0xa9ca44u));
    /* 0078e136: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e138: je 0x78e157 */ if (fZ) goto L_0078e157;
L_0078e13a:; BB(0x0078e13a);
    /* 0078e13a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0078e13e: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078e141: mov dword ptr [0xa9ca48], eax */ W32((u32)(0xa9ca48u), r_eax);
    /* 0078e146: mov ecx, 0x11a8 */ r_ecx = 0x11a8u;
    /* 0078e14b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e14c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0078e14f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0078e151: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e152: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e155: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0078e157:; BB(0x0078e157);
    /* 0078e157: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e159: ret  */ FN_RET(0x0078e11c); r_esp += 4; return;
}

void f_0078e15c(void) /* sub_78E15C */
{
    FN_ENTER(0x0078e15c);
    /* 0078e15c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e15e: mov dword ptr [0xa9ca48], eax */ W32((u32)(0xa9ca48u), r_eax);
    /* 0078e163: mov dword ptr [0xa9ca44], eax */ W32((u32)(0xa9ca44u), r_eax);
    /* 0078e168: ret  */ FN_RET(0x0078e15c); r_esp += 4; return;
}

void f_0078e16c(void) /* sub_78E16C */
{
    FN_ENTER(0x0078e16c);
    /* 0078e16c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e16d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e16e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0078e172: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0078e175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e177: je 0x78e189 */ if (fZ) goto L_0078e189;
L_0078e179:; BB(0x0078e179);
    /* 0078e179: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e17c: je 0x78e191 */ if (fZ) goto L_0078e191;
L_0078e17e:; BB(0x0078e17e);
    /* 0078e17e: movsx eax, byte ptr [edi + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1u));
    /* 0078e182: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078e185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e187: jne 0x78e179 */ if (!fZ) goto L_0078e179;
L_0078e189:; BB(0x0078e189);
    /* 0078e189: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0078e18e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078e18f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e190: ret  */ FN_RET(0x0078e16c); r_esp += 4; return;
L_0078e191:; BB(0x0078e191);
    /* 0078e191: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0078e195: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0078e198:; BB(0x0078e198);
    /* 0078e198: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0078e19a: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078e19c: jne 0x78e1b8 */ if (!fZ) goto L_0078e1b8;
L_0078e19e:; BB(0x0078e19e);
    /* 0078e19e: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0078e1a0: je 0x78e1b4 */ if (fZ) goto L_0078e1b4;
L_0078e1a2:; BB(0x0078e1a2);
    /* 0078e1a2: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 0078e1a5: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078e1a8: jne 0x78e1b8 */ if (!fZ) goto L_0078e1b8;
L_0078e1aa:; BB(0x0078e1aa);
    /* 0078e1aa: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078e1ad: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078e1b0: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0078e1b2: jne 0x78e198 */ if (!fZ) goto L_0078e198;
L_0078e1b4:; BB(0x0078e1b4);
    /* 0078e1b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e1b6: jmp 0x78e1bd */ goto L_0078e1bd;
L_0078e1b8:; BB(0x0078e1b8);
    /* 0078e1b8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0078e1ba: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0078e1bd:; BB(0x0078e1bd);
    /* 0078e1bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078e1be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e1bf: ret  */ FN_RET(0x0078e16c); r_esp += 4; return;
}

void f_0078e1c0(void) /* sub_78E1C0 */
{
    FN_ENTER(0x0078e1c0);
    /* 0078e1c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e1c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e1c2: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078e1c5: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0078e1c9: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0078e1cd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e1cf: jne 0x78e1d3 */ if (!fZ) goto L_0078e1d3;
L_0078e1d1:; BB(0x0078e1d1);
    /* 0078e1d1: mov ebx, edx */ r_ebx = r_edx;
L_0078e1d3:; BB(0x0078e1d3);
    /* 0078e1d3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078e1d6: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0078e1d9: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e1db: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e1de: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e1e4:; BB(0x0078e1e4);
    /* 0078e1e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e1e6: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e1ec:; BB(0x0078e1ec);
    /* 0078e1ec: lea eax, [esp + 1] */ r_eax = (u32)(r_esp+0x1u);
    /* 0078e1f0: movsx ecx, byte ptr [edx + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0078e1f4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e1f6: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e1f9: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e1ff:; BB(0x0078e1ff);
    /* 0078e1ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e201: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e207:; BB(0x0078e207);
    /* 0078e207: lea eax, [esp + 2] */ r_eax = (u32)(r_esp+0x2u);
    /* 0078e20b: movsx ecx, byte ptr [edx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 0078e20f: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e211: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e214: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e21a:; BB(0x0078e21a);
    /* 0078e21a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e21c: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e222:; BB(0x0078e222);
    /* 0078e222: lea eax, [esp + 3] */ r_eax = (u32)(r_esp+0x3u);
    /* 0078e226: movsx ecx, byte ptr [edx + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 0078e22a: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e22c: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e22f: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e235:; BB(0x0078e235);
    /* 0078e235: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e237: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e23d:; BB(0x0078e23d);
    /* 0078e23d: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0078e241: movsx ecx, byte ptr [edx + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x4u));
    /* 0078e245: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e247: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e24a: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e250:; BB(0x0078e250);
    /* 0078e250: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e252: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e258:; BB(0x0078e258);
    /* 0078e258: lea eax, [esp + 5] */ r_eax = (u32)(r_esp+0x5u);
    /* 0078e25c: movsx ecx, byte ptr [edx + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x5u));
    /* 0078e260: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e262: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e265: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e26b:; BB(0x0078e26b);
    /* 0078e26b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e26d: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e273:; BB(0x0078e273);
    /* 0078e273: lea eax, [esp + 6] */ r_eax = (u32)(r_esp+0x6u);
    /* 0078e277: movsx ecx, byte ptr [edx + 6] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x6u));
    /* 0078e27b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e27d: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e280: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e286:; BB(0x0078e286);
    /* 0078e286: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e288: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e28e:; BB(0x0078e28e);
    /* 0078e28e: lea eax, [esp + 7] */ r_eax = (u32)(r_esp+0x7u);
    /* 0078e292: movsx ecx, byte ptr [edx + 7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x7u));
    /* 0078e296: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e298: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e29b: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2a1:; BB(0x0078e2a1);
    /* 0078e2a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2a3: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2a9:; BB(0x0078e2a9);
    /* 0078e2a9: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0078e2ad: movsx ecx, byte ptr [edx + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x8u));
    /* 0078e2b1: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e2b3: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2b6: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2bc:; BB(0x0078e2bc);
    /* 0078e2bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2be: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2c4:; BB(0x0078e2c4);
    /* 0078e2c4: lea eax, [esp + 9] */ r_eax = (u32)(r_esp+0x9u);
    /* 0078e2c8: movsx ecx, byte ptr [edx + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x9u));
    /* 0078e2cc: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e2ce: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2d1: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2d7:; BB(0x0078e2d7);
    /* 0078e2d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2d9: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2df:; BB(0x0078e2df);
    /* 0078e2df: lea eax, [esp + 0xa] */ r_eax = (u32)(r_esp+0xau);
    /* 0078e2e3: movsx ecx, byte ptr [edx + 0xa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xau));
    /* 0078e2e7: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e2e9: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2ec: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2f2:; BB(0x0078e2f2);
    /* 0078e2f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e2f4: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e2fa:; BB(0x0078e2fa);
    /* 0078e2fa: lea eax, [esp + 0xb] */ r_eax = (u32)(r_esp+0xbu);
    /* 0078e2fe: movsx ecx, byte ptr [edx + 0xb] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xbu));
    /* 0078e302: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e304: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e307: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e30d:; BB(0x0078e30d);
    /* 0078e30d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e30f: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e315:; BB(0x0078e315);
    /* 0078e315: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0078e319: movsx ecx, byte ptr [edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xcu));
    /* 0078e31d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e31f: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e322: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e328:; BB(0x0078e328);
    /* 0078e328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e32a: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e330:; BB(0x0078e330);
    /* 0078e330: lea eax, [esp + 0xd] */ r_eax = (u32)(r_esp+0xdu);
    /* 0078e334: movsx ecx, byte ptr [edx + 0xd] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xdu));
    /* 0078e338: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e33a: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e33d: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e343:; BB(0x0078e343);
    /* 0078e343: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e345: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e34b:; BB(0x0078e34b);
    /* 0078e34b: lea eax, [esp + 0xe] */ r_eax = (u32)(r_esp+0xeu);
    /* 0078e34f: movsx ecx, byte ptr [edx + 0xe] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xeu));
    /* 0078e353: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e355: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e358: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e35e:; BB(0x0078e35e);
    /* 0078e35e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e360: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e366:; BB(0x0078e366);
    /* 0078e366: lea eax, [esp + 0xf] */ r_eax = (u32)(r_esp+0xfu);
    /* 0078e36a: movsx ecx, byte ptr [edx + 0xf] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xfu));
    /* 0078e36e: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e370: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e373: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e379:; BB(0x0078e379);
    /* 0078e379: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e37b: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e381:; BB(0x0078e381);
    /* 0078e381: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0078e385: movsx ecx, byte ptr [edx + 0x10] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x10u));
    /* 0078e389: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e38b: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e38e: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e394:; BB(0x0078e394);
    /* 0078e394: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e396: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e39c:; BB(0x0078e39c);
    /* 0078e39c: lea eax, [esp + 0x11] */ r_eax = (u32)(r_esp+0x11u);
    /* 0078e3a0: movsx ecx, byte ptr [edx + 0x11] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x11u));
    /* 0078e3a4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e3a6: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3a9: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e3af:; BB(0x0078e3af);
    /* 0078e3af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3b1: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e3b7:; BB(0x0078e3b7);
    /* 0078e3b7: lea eax, [esp + 0x12] */ r_eax = (u32)(r_esp+0x12u);
    /* 0078e3bb: movsx ecx, byte ptr [edx + 0x12] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x12u));
    /* 0078e3bf: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e3c1: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3c4: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e3ca:; BB(0x0078e3ca);
    /* 0078e3ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3cc: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e3d2:; BB(0x0078e3d2);
    /* 0078e3d2: lea eax, [esp + 0x13] */ r_eax = (u32)(r_esp+0x13u);
    /* 0078e3d6: movsx ecx, byte ptr [edx + 0x13] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x13u));
    /* 0078e3da: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e3dc: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3df: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e3e5:; BB(0x0078e3e5);
    /* 0078e3e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3e7: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e3ed:; BB(0x0078e3ed);
    /* 0078e3ed: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0078e3f1: movsx ecx, byte ptr [edx + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0078e3f5: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e3f7: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e3fa: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e400:; BB(0x0078e400);
    /* 0078e400: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e402: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e408:; BB(0x0078e408);
    /* 0078e408: lea eax, [esp + 0x15] */ r_eax = (u32)(r_esp+0x15u);
    /* 0078e40c: movsx ecx, byte ptr [edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0078e410: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e412: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e415: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e41b:; BB(0x0078e41b);
    /* 0078e41b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e41d: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e423:; BB(0x0078e423);
    /* 0078e423: lea eax, [esp + 0x16] */ r_eax = (u32)(r_esp+0x16u);
    /* 0078e427: movsx ecx, byte ptr [edx + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 0078e42b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e42d: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e430: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e436:; BB(0x0078e436);
    /* 0078e436: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e438: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e43e:; BB(0x0078e43e);
    /* 0078e43e: lea eax, [esp + 0x17] */ r_eax = (u32)(r_esp+0x17u);
    /* 0078e442: movsx ecx, byte ptr [edx + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x17u));
    /* 0078e446: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e448: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e44b: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e451:; BB(0x0078e451);
    /* 0078e451: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e453: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e459:; BB(0x0078e459);
    /* 0078e459: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0078e45d: movsx ecx, byte ptr [edx + 0x18] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x18u));
    /* 0078e461: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e463: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e466: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e46c:; BB(0x0078e46c);
    /* 0078e46c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e46e: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e474:; BB(0x0078e474);
    /* 0078e474: lea eax, [esp + 0x19] */ r_eax = (u32)(r_esp+0x19u);
    /* 0078e478: movsx ecx, byte ptr [edx + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0078e47c: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e47e: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e481: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e487:; BB(0x0078e487);
    /* 0078e487: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e489: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e48f:; BB(0x0078e48f);
    /* 0078e48f: lea eax, [esp + 0x1a] */ r_eax = (u32)(r_esp+0x1au);
    /* 0078e493: movsx ecx, byte ptr [edx + 0x1a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1au));
    /* 0078e497: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e499: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e49c: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e49e:; BB(0x0078e49e);
    /* 0078e49e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4a0: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4a2:; BB(0x0078e4a2);
    /* 0078e4a2: lea eax, [esp + 0x1b] */ r_eax = (u32)(r_esp+0x1bu);
    /* 0078e4a6: movsx ecx, byte ptr [edx + 0x1b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1bu));
    /* 0078e4aa: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e4ac: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4af: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4b1:; BB(0x0078e4b1);
    /* 0078e4b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4b3: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4b5:; BB(0x0078e4b5);
    /* 0078e4b5: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0078e4b9: movsx ecx, byte ptr [edx + 0x1c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1cu));
    /* 0078e4bd: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e4bf: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4c2: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4c4:; BB(0x0078e4c4);
    /* 0078e4c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4c6: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4c8:; BB(0x0078e4c8);
    /* 0078e4c8: lea eax, [esp + 0x1d] */ r_eax = (u32)(r_esp+0x1du);
    /* 0078e4cc: movsx ecx, byte ptr [edx + 0x1d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1du));
    /* 0078e4d0: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e4d2: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4d5: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4d7:; BB(0x0078e4d7);
    /* 0078e4d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4d9: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4db:; BB(0x0078e4db);
    /* 0078e4db: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 0078e4df: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 0078e4e3: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e4e5: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4e8: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4ea:; BB(0x0078e4ea);
    /* 0078e4ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4ec: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4ee:; BB(0x0078e4ee);
    /* 0078e4ee: lea eax, [esp + 0x1f] */ r_eax = (u32)(r_esp+0x1fu);
    /* 0078e4f2: movsx edx, byte ptr [edx + 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x1fu));
    /* 0078e4f6: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0078e4f8: cmp edx, 0x2e */ {  u32 a = r_edx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4fb: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e4fd:; BB(0x0078e4fd);
    /* 0078e4fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e4ff: je 0x78e505 */ if (fZ) goto L_0078e505;
L_0078e501:; BB(0x0078e501);
    /* 0078e501: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
L_0078e505:; BB(0x0078e505);
    /* 0078e505: lea edx, [esp + 0x1b] */ r_edx = (u32)(r_esp+0x1bu);
    /* 0078e509: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078e50b: jbe 0x78e518 */ if ((fC||fZ)) goto L_0078e518;
L_0078e50d:; BB(0x0078e50d);
    /* 0078e50d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0078e512: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078e515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e517: ret  */ FN_RET(0x0078e1c0); r_esp += 4; return;
L_0078e518:; BB(0x0078e518);
    /* 0078e518: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0078e51b: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0078e51e: mov edx, 0x96b740 */ r_edx = 0x96b740u;
    /* 0078e523: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0078e528: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e52a: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0078e52c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0078e52f:; BB(0x0078e52f);
    /* 0078e52f: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0078e531: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078e534: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0078e536: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078e539: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078e53b: jne 0x78e52f */ if (!fZ) goto L_0078e52f;
L_0078e53d:; BB(0x0078e53d);
    /* 0078e53d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0078e541: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0078e544: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0078e549: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e54b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0078e54d: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0078e550:; BB(0x0078e550);
    /* 0078e550: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0078e552: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078e555: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0078e557: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078e55a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078e55c: jne 0x78e550 */ if (!fZ) goto L_0078e550;
L_0078e55e:; BB(0x0078e55e);
    /* 0078e55e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078e561: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0078e563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078e564: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e565: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x78e56au); f_00858900();
    /* 0078e56a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078e56c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078e56f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e570: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e571: ret  */ FN_RET(0x0078e1c0); r_esp += 4; return;
}

void f_0078e574(void) /* sub_78E574 */
{
    FN_ENTER(0x0078e574);
    /* 0078e574: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e575: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e576: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078e577: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e578: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078e57b: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0078e57f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078e581: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0078e585: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0078e589: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0078e58d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0078e590: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0078e594: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0078e598: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0078e59c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0078e5a0: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0078e5a4: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0078e5a8: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0078e5ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5ae: jne 0x78e5b2 */ if (!fZ) goto L_0078e5b2;
L_0078e5b0:; BB(0x0078e5b0);
    /* 0078e5b0: mov ebx, edx */ r_ebx = r_edx;
L_0078e5b2:; BB(0x0078e5b2);
    /* 0078e5b2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078e5b5: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0078e5b8: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5bb: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e5c1:; BB(0x0078e5c1);
    /* 0078e5c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5c3: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e5c9:; BB(0x0078e5c9);
    /* 0078e5c9: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e5cb: lea eax, [esp + 1] */ r_eax = (u32)(r_esp+0x1u);
    /* 0078e5cf: movsx ecx, byte ptr [edx + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0078e5d3: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5d6: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e5dc:; BB(0x0078e5dc);
    /* 0078e5dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5de: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e5e4:; BB(0x0078e5e4);
    /* 0078e5e4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e5e6: lea eax, [esp + 2] */ r_eax = (u32)(r_esp+0x2u);
    /* 0078e5ea: movsx ecx, byte ptr [edx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 0078e5ee: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5f1: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e5f7:; BB(0x0078e5f7);
    /* 0078e5f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e5f9: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e5ff:; BB(0x0078e5ff);
    /* 0078e5ff: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e601: lea eax, [esp + 3] */ r_eax = (u32)(r_esp+0x3u);
    /* 0078e605: movsx ecx, byte ptr [edx + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 0078e609: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e60c: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e612:; BB(0x0078e612);
    /* 0078e612: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e614: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e61a:; BB(0x0078e61a);
    /* 0078e61a: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e61c: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0078e620: movsx ecx, byte ptr [edx + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x4u));
    /* 0078e624: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e627: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e62d:; BB(0x0078e62d);
    /* 0078e62d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e62f: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e635:; BB(0x0078e635);
    /* 0078e635: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e637: lea eax, [esp + 5] */ r_eax = (u32)(r_esp+0x5u);
    /* 0078e63b: movsx ecx, byte ptr [edx + 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x5u));
    /* 0078e63f: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e642: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e648:; BB(0x0078e648);
    /* 0078e648: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e64a: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e650:; BB(0x0078e650);
    /* 0078e650: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e652: lea eax, [esp + 6] */ r_eax = (u32)(r_esp+0x6u);
    /* 0078e656: movsx ecx, byte ptr [edx + 6] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x6u));
    /* 0078e65a: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e65d: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e663:; BB(0x0078e663);
    /* 0078e663: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e665: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e66b:; BB(0x0078e66b);
    /* 0078e66b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e66d: lea eax, [esp + 7] */ r_eax = (u32)(r_esp+0x7u);
    /* 0078e671: movsx ecx, byte ptr [edx + 7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x7u));
    /* 0078e675: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e678: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e67e:; BB(0x0078e67e);
    /* 0078e67e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e680: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e686:; BB(0x0078e686);
    /* 0078e686: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e688: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0078e68c: movsx ecx, byte ptr [edx + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x8u));
    /* 0078e690: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e693: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e699:; BB(0x0078e699);
    /* 0078e699: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e69b: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6a1:; BB(0x0078e6a1);
    /* 0078e6a1: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e6a3: lea eax, [esp + 9] */ r_eax = (u32)(r_esp+0x9u);
    /* 0078e6a7: movsx ecx, byte ptr [edx + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x9u));
    /* 0078e6ab: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6ae: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6b4:; BB(0x0078e6b4);
    /* 0078e6b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6b6: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6bc:; BB(0x0078e6bc);
    /* 0078e6bc: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e6be: lea eax, [esp + 0xa] */ r_eax = (u32)(r_esp+0xau);
    /* 0078e6c2: movsx ecx, byte ptr [edx + 0xa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xau));
    /* 0078e6c6: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6c9: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6cf:; BB(0x0078e6cf);
    /* 0078e6cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6d1: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6d7:; BB(0x0078e6d7);
    /* 0078e6d7: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e6d9: lea eax, [esp + 0xb] */ r_eax = (u32)(r_esp+0xbu);
    /* 0078e6dd: movsx ecx, byte ptr [edx + 0xb] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xbu));
    /* 0078e6e1: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6e4: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6ea:; BB(0x0078e6ea);
    /* 0078e6ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6ec: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e6f2:; BB(0x0078e6f2);
    /* 0078e6f2: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e6f4: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0078e6f8: movsx ecx, byte ptr [edx + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xcu));
    /* 0078e6fc: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e6ff: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e705:; BB(0x0078e705);
    /* 0078e705: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e707: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e70d:; BB(0x0078e70d);
    /* 0078e70d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e70f: lea eax, [esp + 0xd] */ r_eax = (u32)(r_esp+0xdu);
    /* 0078e713: movsx ecx, byte ptr [edx + 0xd] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xdu));
    /* 0078e717: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e71a: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e720:; BB(0x0078e720);
    /* 0078e720: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e722: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e728:; BB(0x0078e728);
    /* 0078e728: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e72a: lea eax, [esp + 0xe] */ r_eax = (u32)(r_esp+0xeu);
    /* 0078e72e: movsx ecx, byte ptr [edx + 0xe] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xeu));
    /* 0078e732: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e735: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e73b:; BB(0x0078e73b);
    /* 0078e73b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e73d: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e743:; BB(0x0078e743);
    /* 0078e743: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e745: lea eax, [esp + 0xf] */ r_eax = (u32)(r_esp+0xfu);
    /* 0078e749: movsx ecx, byte ptr [edx + 0xf] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xfu));
    /* 0078e74d: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e750: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e756:; BB(0x0078e756);
    /* 0078e756: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e758: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e75e:; BB(0x0078e75e);
    /* 0078e75e: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e760: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0078e764: movsx ecx, byte ptr [edx + 0x10] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x10u));
    /* 0078e768: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e76b: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e771:; BB(0x0078e771);
    /* 0078e771: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e773: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e779:; BB(0x0078e779);
    /* 0078e779: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e77b: lea eax, [esp + 0x11] */ r_eax = (u32)(r_esp+0x11u);
    /* 0078e77f: movsx ecx, byte ptr [edx + 0x11] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x11u));
    /* 0078e783: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e786: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e78c:; BB(0x0078e78c);
    /* 0078e78c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e78e: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e794:; BB(0x0078e794);
    /* 0078e794: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e796: lea eax, [esp + 0x12] */ r_eax = (u32)(r_esp+0x12u);
    /* 0078e79a: movsx ecx, byte ptr [edx + 0x12] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x12u));
    /* 0078e79e: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7a1: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7a7:; BB(0x0078e7a7);
    /* 0078e7a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7a9: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7af:; BB(0x0078e7af);
    /* 0078e7af: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e7b1: lea eax, [esp + 0x13] */ r_eax = (u32)(r_esp+0x13u);
    /* 0078e7b5: movsx ecx, byte ptr [edx + 0x13] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x13u));
    /* 0078e7b9: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7bc: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7c2:; BB(0x0078e7c2);
    /* 0078e7c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7c4: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7ca:; BB(0x0078e7ca);
    /* 0078e7ca: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e7cc: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0078e7d0: movsx ecx, byte ptr [edx + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0078e7d4: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7d7: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7dd:; BB(0x0078e7dd);
    /* 0078e7dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7df: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7e5:; BB(0x0078e7e5);
    /* 0078e7e5: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e7e7: lea eax, [esp + 0x15] */ r_eax = (u32)(r_esp+0x15u);
    /* 0078e7eb: movsx ecx, byte ptr [edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0078e7ef: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7f2: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e7f8:; BB(0x0078e7f8);
    /* 0078e7f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e7fa: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e800:; BB(0x0078e800);
    /* 0078e800: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e802: lea eax, [esp + 0x16] */ r_eax = (u32)(r_esp+0x16u);
    /* 0078e806: movsx ecx, byte ptr [edx + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 0078e80a: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e80d: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e813:; BB(0x0078e813);
    /* 0078e813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e815: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e81b:; BB(0x0078e81b);
    /* 0078e81b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e81d: lea eax, [esp + 0x17] */ r_eax = (u32)(r_esp+0x17u);
    /* 0078e821: movsx ecx, byte ptr [edx + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x17u));
    /* 0078e825: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e828: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e82e:; BB(0x0078e82e);
    /* 0078e82e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e830: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e836:; BB(0x0078e836);
    /* 0078e836: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e838: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0078e83c: movsx ecx, byte ptr [edx + 0x18] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x18u));
    /* 0078e840: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e843: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e849:; BB(0x0078e849);
    /* 0078e849: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e84b: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e851:; BB(0x0078e851);
    /* 0078e851: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e853: lea eax, [esp + 0x19] */ r_eax = (u32)(r_esp+0x19u);
    /* 0078e857: movsx ecx, byte ptr [edx + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0078e85b: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e85e: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e864:; BB(0x0078e864);
    /* 0078e864: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e866: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e86c:; BB(0x0078e86c);
    /* 0078e86c: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e86e: lea eax, [esp + 0x1a] */ r_eax = (u32)(r_esp+0x1au);
    /* 0078e872: movsx ecx, byte ptr [edx + 0x1a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1au));
    /* 0078e876: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e879: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e87b:; BB(0x0078e87b);
    /* 0078e87b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e87d: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e87f:; BB(0x0078e87f);
    /* 0078e87f: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e881: lea eax, [esp + 0x1b] */ r_eax = (u32)(r_esp+0x1bu);
    /* 0078e885: movsx ecx, byte ptr [edx + 0x1b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1bu));
    /* 0078e889: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e88c: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e88e:; BB(0x0078e88e);
    /* 0078e88e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e890: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e892:; BB(0x0078e892);
    /* 0078e892: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e894: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0078e898: movsx ecx, byte ptr [edx + 0x1c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1cu));
    /* 0078e89c: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e89f: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8a1:; BB(0x0078e8a1);
    /* 0078e8a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8a3: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8a5:; BB(0x0078e8a5);
    /* 0078e8a5: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e8a7: lea eax, [esp + 0x1d] */ r_eax = (u32)(r_esp+0x1du);
    /* 0078e8ab: movsx ecx, byte ptr [edx + 0x1d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1du));
    /* 0078e8af: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8b2: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8b4:; BB(0x0078e8b4);
    /* 0078e8b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8b6: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8b8:; BB(0x0078e8b8);
    /* 0078e8b8: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e8ba: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 0078e8be: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 0078e8c2: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8c5: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8c7:; BB(0x0078e8c7);
    /* 0078e8c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8c9: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8cb:; BB(0x0078e8cb);
    /* 0078e8cb: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0078e8cd: lea eax, [esp + 0x1f] */ r_eax = (u32)(r_esp+0x1fu);
    /* 0078e8d1: movsx edx, byte ptr [edx + 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x1fu));
    /* 0078e8d5: cmp edx, 0x2e */ {  u32 a = r_edx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8d8: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8da:; BB(0x0078e8da);
    /* 0078e8da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e8dc: je 0x78e8e4 */ if (fZ) goto L_0078e8e4;
L_0078e8de:; BB(0x0078e8de);
    /* 0078e8de: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0078e8e0: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
L_0078e8e4:; BB(0x0078e8e4);
    /* 0078e8e4: lea edx, [esp + 0x1b] */ r_edx = (u32)(r_esp+0x1bu);
    /* 0078e8e8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078e8ea: jbe 0x78e8f9 */ if ((fC||fZ)) goto L_0078e8f9;
L_0078e8ec:; BB(0x0078e8ec);
    /* 0078e8ec: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0078e8f1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078e8f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e8f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078e8f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078e8f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e8f8: ret  */ FN_RET(0x0078e574); r_esp += 4; return;
L_0078e8f9:; BB(0x0078e8f9);
    /* 0078e8f9: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0078e8fd: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
    /* 0078e901: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0078e904: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0078e909: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e90b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0078e90d: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0078e910:; BB(0x0078e910);
    /* 0078e910: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0078e912: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078e915: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0078e917: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078e91a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078e91c: jne 0x78e910 */ if (!fZ) goto L_0078e910;
L_0078e91e:; BB(0x0078e91e);
    /* 0078e91e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078e921: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0078e923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078e924: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e925: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x78e92au); f_00858900();
    /* 0078e92a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078e92c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078e92f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e930: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078e931: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078e932: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078e933: ret  */ FN_RET(0x0078e574); r_esp += 4; return;
}

void f_0078e934(void) /* sub_78E934 */
{
    FN_ENTER(0x0078e934);
    /* 0078e934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e935: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078e939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e93b: je 0x78e961 */ if (fZ) goto L_0078e961;
L_0078e93d:; BB(0x0078e93d);
    /* 0078e93d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0078e941: mov dword ptr [0xa9ca70], edx */ W32((u32)(0xa9ca70u), r_edx);
    /* 0078e947: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078e949: mov dword ptr [0xa9ca6c], ecx */ W32((u32)(0xa9ca6cu), r_ecx);
    /* 0078e94f: mov dword ptr [0xa9ca74], ecx */ W32((u32)(0xa9ca74u), r_ecx);
    /* 0078e955: call 0x78e968 */ r_esp -= 4; W32(r_esp, 0x78e95au); f_0078e968();
    /* 0078e95a: mov eax, dword ptr [0xa9ca74] */ r_eax = R32((u32)(0xa9ca74u));
    /* 0078e95f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e960: ret  */ FN_RET(0x0078e934); r_esp += 4; return;
L_0078e961:; BB(0x0078e961);
    /* 0078e961: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e963: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e964: ret  */ FN_RET(0x0078e934); r_esp += 4; return;
}

void f_0078e968(void) /* sub_78E968 */
{
    FN_ENTER(0x0078e968);
    /* 0078e968: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e969: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e96a: mov ebx, eax */ r_ebx = r_eax;
L_0078e96c:; BB(0x0078e96c);
    /* 0078e96c: mov edx, dword ptr [0xa9ca6c] */ r_edx = R32((u32)(0xa9ca6cu));
    /* 0078e972: cmp edx, dword ptr [0xa9ca70] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9ca70u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e978: jne 0x78e984 */ if (!fZ) goto L_0078e984;
L_0078e97a:; BB(0x0078e97a);
    /* 0078e97a: mov dword ptr [0xa9ca74], ebx */ W32((u32)(0xa9ca74u), r_ebx);
    /* 0078e980: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078e982: jmp 0x78e98a */ goto L_0078e98a;
L_0078e984:; BB(0x0078e984);
    /* 0078e984: mov ecx, dword ptr [0xa9ca74] */ r_ecx = R32((u32)(0xa9ca74u));
L_0078e98a:; BB(0x0078e98a);
    /* 0078e98a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078e98d: mov dword ptr [0xa9ca6c], edx */ W32((u32)(0xa9ca6cu), r_edx);
    /* 0078e993: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e995: je 0x78e99a */ if (fZ) goto L_0078e99a;
L_0078e997:; BB(0x0078e997);
    /* 0078e997: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e998: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e999: ret  */ FN_RET(0x0078e968); r_esp += 4; return;
L_0078e99a:; BB(0x0078e99a);
    /* 0078e99a: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0078e99d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e99f: je 0x78e9a6 */ if (fZ) goto L_0078e9a6;
L_0078e9a1:; BB(0x0078e9a1);
    /* 0078e9a1: call 0x78e968 */ r_esp -= 4; W32(r_esp, 0x78e9a6u); f_0078e968();
L_0078e9a6:; BB(0x0078e9a6);
    /* 0078e9a6: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0078e9a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e9ab: jne 0x78e96c */ if (!fZ) goto L_0078e96c;
L_0078e9ad:; BB(0x0078e9ad);
    /* 0078e9ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e9ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078e9af: ret  */ FN_RET(0x0078e968); r_esp += 4; return;
}

void f_0078e9b0(void) /* sub_78E9B0 */
{
    FN_ENTER(0x0078e9b0);
    /* 0078e9b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e9b1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078e9b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e9b7: je 0x78e9dd */ if (fZ) goto L_0078e9dd;
L_0078e9b9:; BB(0x0078e9b9);
    /* 0078e9b9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0078e9bd: mov dword ptr [0xa9ca7c], edx */ W32((u32)(0xa9ca7cu), r_edx);
    /* 0078e9c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078e9c5: mov dword ptr [0xa9ca78], ecx */ W32((u32)(0xa9ca78u), r_ecx);
    /* 0078e9cb: mov dword ptr [0xa9ca80], ecx */ W32((u32)(0xa9ca80u), r_ecx);
    /* 0078e9d1: call 0x78e9e4 */ r_esp -= 4; W32(r_esp, 0x78e9d6u); f_0078e9e4();
    /* 0078e9d6: mov eax, dword ptr [0xa9ca80] */ r_eax = R32((u32)(0xa9ca80u));
    /* 0078e9db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e9dc: ret  */ FN_RET(0x0078e9b0); r_esp += 4; return;
L_0078e9dd:; BB(0x0078e9dd);
    /* 0078e9dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078e9df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078e9e0: ret  */ FN_RET(0x0078e9b0); r_esp += 4; return;
}

void f_0078e9e4(void) /* sub_78E9E4 */
{
    FN_ENTER(0x0078e9e4);
    /* 0078e9e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078e9e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078e9e6: mov ebx, eax */ r_ebx = r_eax;
L_0078e9e8:; BB(0x0078e9e8);
    /* 0078e9e8: mov edx, dword ptr [0xa9ca78] */ r_edx = R32((u32)(0xa9ca78u));
    /* 0078e9ee: cmp edx, dword ptr [0xa9ca7c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9ca7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078e9f4: jne 0x78ea00 */ if (!fZ) goto L_0078ea00;
L_0078e9f6:; BB(0x0078e9f6);
    /* 0078e9f6: mov dword ptr [0xa9ca80], ebx */ W32((u32)(0xa9ca80u), r_ebx);
    /* 0078e9fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078e9fe: jmp 0x78ea06 */ goto L_0078ea06;
L_0078ea00:; BB(0x0078ea00);
    /* 0078ea00: mov ecx, dword ptr [0xa9ca80] */ r_ecx = R32((u32)(0xa9ca80u));
L_0078ea06:; BB(0x0078ea06);
    /* 0078ea06: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078ea09: mov dword ptr [0xa9ca78], edx */ W32((u32)(0xa9ca78u), r_edx);
    /* 0078ea0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ea11: je 0x78ea16 */ if (fZ) goto L_0078ea16;
L_0078ea13:; BB(0x0078ea13);
    /* 0078ea13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078ea14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ea15: ret  */ FN_RET(0x0078e9e4); r_esp += 4; return;
L_0078ea16:; BB(0x0078ea16);
    /* 0078ea16: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0078ea19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ea1b: je 0x78ea22 */ if (fZ) goto L_0078ea22;
L_0078ea1d:; BB(0x0078ea1d);
    /* 0078ea1d: call 0x78e9e4 */ r_esp -= 4; W32(r_esp, 0x78ea22u); f_0078e9e4();
L_0078ea22:; BB(0x0078ea22);
    /* 0078ea22: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0078ea25: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ea27: jne 0x78e9e8 */ if (!fZ) goto L_0078e9e8;
L_0078ea29:; BB(0x0078ea29);
    /* 0078ea29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078ea2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ea2b: ret  */ FN_RET(0x0078e9e4); r_esp += 4; return;
}

void f_0078ea2c(void) /* sub_78EA2C */
{
    FN_ENTER(0x0078ea2c);
    /* 0078ea2c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078ea30: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0078ea34: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0078ea36: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0078ea38: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea3a: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0078ea3d: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 0078ea40: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea42: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078ea44: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0078ea47: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0078ea4a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea4c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078ea4e: ret  */ FN_RET(0x0078ea2c); r_esp += 4; return;
}

void f_0078ea50(void) /* sub_78EA50 */
{
    FN_ENTER(0x0078ea50);
    /* 0078ea50: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078ea54: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0078ea58: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0078ea5a: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0078ea5c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea5e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0078ea61: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0078ea64: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078ea68: ret  */ FN_RET(0x0078ea50); r_esp += 4; return;
}

void f_0078ea6c(void) /* sub_78EA6C */
{
    FN_ENTER(0x0078ea6c);
    /* 0078ea6c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078ea70: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0078ea74: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0078ea76: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 0078ea78: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea7a: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078ea7d: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 0078ea80: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078ea82: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078ea84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ea85: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078ea88: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78ea8du); f_0082dc9c();
    /* 0078ea8d: ret  */ FN_RET(0x0078ea6c); r_esp += 4; return;
}

void f_0078ea90(void) /* sub_78EA90 */
{
    FN_ENTER(0x0078ea90);
    /* 0078ea90: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0078ea94: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x78ea99u); f_0082def4();
    /* 0078ea99: fcom dword ptr [0x97ab68] */ fx_compare(ST(0), R_F32((u32)(0x97ab68u))); 
    /* 0078ea9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078eaa1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078eaa2: jbe 0x78ead6 */ if ((fC||fZ)) goto L_0078ead6;
L_0078eaa4:; BB(0x0078eaa4);
    /* 0078eaa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078eaa5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078eaa8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78eaadu); f_0082dc9c();
    /* 0078eaad: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0078eab1: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0078eab3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078eab7: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0078eab9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078eabb: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0078eabe: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0078eac1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078eac3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0078eac5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078eac7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078eac9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078eacb: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0078eacd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078eacf: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0078ead2: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0078ead5: ret  */ FN_RET(0x0078ea90); r_esp += 4; return;
L_0078ead6:; BB(0x0078ead6);
    /* 0078ead6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078ead8: fld dword ptr [0x97ab64] */ FPUSH(R_F32((u32)(0x97ab64u)));
    /* 0078eade: ret  */ FN_RET(0x0078ea90); r_esp += 4; return;
}

void f_0078eac0(void)
{
    FN_ENTER(0x0078eac0);
    /* 0078eac0: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078eac2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0078eac3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0078eac5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078eac7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078eac9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078eacb: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0078eacd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078eacf: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0078ead2: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0078ead5: ret  */ FN_RET(0x0078eac0); r_esp += 4; return;
}

void f_0078eae0(void) /* sub_78EAE0 */
{
    FN_ENTER(0x0078eae0);
    /* 0078eae0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078eae1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078eae5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0078eae8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078eaea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078eaec: jbe 0x78eb16 */ if ((fC||fZ)) goto L_0078eb16;
L_0078eaee:; BB(0x0078eaee);
    /* 0078eaee: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0078eaf1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0078eaf5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0078eaf8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078eafa: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0078eafd: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0078eaff:; BB(0x0078eaff);
    /* 0078eaff: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0078eb01: mov dword ptr [eax + ecx], 0xa9ca4c */ W32((u32)(r_eax+r_ecx), 0xa9ca4cu);
    /* 0078eb08: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078eb0b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078eb0e: cmp edx, dword ptr [ebx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078eb11: jb 0x78eaff */ if (fC) goto L_0078eaff;
L_0078eb13:; BB(0x0078eb13);
    /* 0078eb13: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0078eb16:; BB(0x0078eb16);
    /* 0078eb16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078eb17: ret  */ FN_RET(0x0078eae0); r_esp += 4; return;
}

void f_0078eb18(void) /* sub_78EB18 */
{
    FN_ENTER(0x0078eb18);
    /* 0078eb18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078eb19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078eb1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078eb1d: call 0x78eb3c */ r_esp -= 4; W32(r_esp, 0x78eb22u); f_0078eb3c();
    /* 0078eb22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078eb26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078eb28: jne 0x78eb2e */ if (!fZ) goto L_0078eb2e;
L_0078eb2a:; BB(0x0078eb2a);
    /* 0078eb2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078eb2b: ret 4 */ FN_RET(0x0078eb18); r_esp += 8; return;
L_0078eb2e:; BB(0x0078eb2e);
    /* 0078eb2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078eb2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78eb34u); f_005c2f74();
    /* 0078eb34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078eb35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078eb36: ret 4 */ FN_RET(0x0078eb18); r_esp += 8; return;
}

void f_0078eb3c(void) /* sub_78EB3C */
{
    FN_ENTER(0x0078eb3c);
    /* 0078eb3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078eb3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078eb3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078eb41: push 0x8f4ea4 */ { u32 v = 0x8f4ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078eb46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078eb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078eb4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078eb54: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078eb57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078eb5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078eb5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078eb60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078eb63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078eb66: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078eb6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078eb70: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0078eb73: mov dword ptr [eax], 0xb454d0 */ W32((u32)(r_eax), 0xb454d0u);
    /* 0078eb79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078eb7b: je 0x78eb85 */ if (fZ) goto L_0078eb85;
L_0078eb7d:; BB(0x0078eb7d);
    /* 0078eb7d: call 0x730e34 */ r_esp -= 4; W32(r_esp, 0x78eb82u); f_00730e34();
    /* 0078eb82: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0078eb85:; BB(0x0078eb85);
    /* 0078eb85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078eb8c: mov ecx, eax */ r_ecx = r_eax;
    /* 0078eb8e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78eb93u); f_008171e8();
    /* 0078eb93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078eb96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078eb9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078eb9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078eba0: ret  */ FN_RET(0x0078eb3c); r_esp += 4; return;
}

void f_0078eba4(void) /* sub_78EBA4 */
{
    FN_ENTER(0x0078eba4);
    /* 0078eba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078eba5: mov ebp, esp */ r_ebp = r_esp;
    /* 0078eba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078eba9: push 0x8f4eda */ { u32 v = 0x8f4edau; r_esp -= 4; W32(r_esp, v); }
    /* 0078ebae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078ebb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ebb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078ebbc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078ebbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078ebc2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0078ebc5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0078ebc8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0078ebcb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0078ebce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ebd1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0078ebd4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0078ebd7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0078ebda: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0078ebde: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0078ebe1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078ebe4: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0078ebe7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0078ebea: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78ebefu); f_008193cc();
    /* 0078ebef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078ebf6: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ebf9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078ebfc: mov dword ptr [ebx], 0xb454d0 */ W32((u32)(r_ebx), 0xb454d0u);
    /* 0078ec02: mov eax, dword ptr [0x9ff1e0] */ r_eax = R32((u32)(0x9ff1e0u));
    /* 0078ec07: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0078ec0a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078ec0c: mov word ptr [ebx + 0x1c], dx */ W16((u32)(r_ebx+0x1cu), (u16)r_edx);
    /* 0078ec10: mov word ptr [ebx + 0x1e], cx */ W16((u32)(r_ebx+0x1eu), (u16)r_ecx);
    /* 0078ec14: call 0x841300 */ r_esp -= 4; W32(r_esp, 0x78ec19u); f_00841300();
    /* 0078ec19: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0078ec20: push 0x624 */ { u32 v = 0x624u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ec25: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78ec2au); f_005caba4();
    /* 0078ec2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078ec2b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0078ec2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ec30: je 0x78ed0d */ if (fZ) goto L_0078ed0d;
L_0078ec36:; BB(0x0078ec36);
    /* 0078ec36: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0078ec3d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0078ec44: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0078ec47: call 0x72ebfc */ r_esp -= 4; W32(r_esp, 0x78ec4cu); f_0072ebfc();
    /* 0078ec4c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0078ec4f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0078ec56:; BB(0x0078ec56);
    /* 0078ec56: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ec59: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0078ec5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078ec63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078ec66: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078ec69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ec6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ec6b: call 0x731300 */ r_esp -= 4; W32(r_esp, 0x78ec70u); f_00731300();
    /* 0078ec70: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ec73: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0078ec76: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x78ec7bu); f_0061cdb0();
    /* 0078ec7b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ec7e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0078ec81: call 0x730e5c */ r_esp -= 4; W32(r_esp, 0x78ec86u); f_00730e5c();
    /* 0078ec86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078ec89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ec8b: je 0x78ecf3 */ if (fZ) goto L_0078ecf3;
L_0078ec8d:; BB(0x0078ec8d);
    /* 0078ec8d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ec90: je 0x78ecc0 */ if (fZ) goto L_0078ecc0;
L_0078ec92:; BB(0x0078ec92);
    /* 0078ec92: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ec95: jne 0x78eca9 */ if (!fZ) goto L_0078eca9;
L_0078ec97:; BB(0x0078ec97);
    /* 0078ec97: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ec9a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0078ec9e: or eax, 0xffff0012 */ {  u32 a = r_eax; u32 b = 0xffff0012u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078eca3: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 0078eca7: jmp 0x78ecd8 */ goto L_0078ecd8;
L_0078eca9:; BB(0x0078eca9);
    /* 0078eca9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ecac: jne 0x78ecd8 */ if (!fZ) goto L_0078ecd8;
L_0078ecae:; BB(0x0078ecae);
    /* 0078ecae: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ecb1: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0078ecb5: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078ecba: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 0078ecbe: jmp 0x78ecd8 */ goto L_0078ecd8;
L_0078ecc0:; BB(0x0078ecc0);
    /* 0078ecc0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ecc3: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0078ecc7: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0078ecca: or eax, 0xffff000a */ {  u32 a = r_eax; u32 b = 0xffff000au; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078eccf: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 0078ecd3: call 0x73122c */ r_esp -= 4; W32(r_esp, 0x78ecd8u); f_0073122c();
L_0078ecd8:; BB(0x0078ecd8);
    /* 0078ecd8: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x78ecddu); f_00841720();
    /* 0078ecdd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ece0: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0078ece3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078ece6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078eced: mov esp, ebp */ r_esp = r_ebp;
    /* 0078ecef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078ecf0: ret 0x14 */ FN_RET(0x0078eba4); r_esp += 24; return;
L_0078ecf3:; BB(0x0078ecf3);
    /* 0078ecf3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078ecf6: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0078ecfa: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0078ecfd: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078ed02: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 0078ed06: call 0x731210 */ r_esp -= 4; W32(r_esp, 0x78ed0bu); f_00731210();
    /* 0078ed0b: jmp 0x78ecd8 */ goto L_0078ecd8;
L_0078ed0d:; BB(0x0078ed0d);
    /* 0078ed0d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ed0f: jmp 0x78ec56 */ goto L_0078ec56;
}

void f_0078eccc(void)
{
    FN_ENTER(0x0078eccc);
    /* 0078eccc: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0078ecce: jmp dword ptr [esi - 0x77] */ { u32 t = R32((u32)(r_esi+0xffffff89u)); jmp_ind(t); return; }
}

void f_0078ed14(void) /* sub_78ED14 */
{
    FN_ENTER(0x0078ed14);
    /* 0078ed14: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ed17: call 0x730f7c */ r_esp -= 4; W32(r_esp, 0x78ed1cu); f_00730f7c();
    /* 0078ed1c: ret  */ FN_RET(0x0078ed14); r_esp += 4; return;
}

void f_0078ed20(void) /* sub_78ED20 */
{
    FN_ENTER(0x0078ed20);
    /* 0078ed20: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ed23: call 0x730f68 */ r_esp -= 4; W32(r_esp, 0x78ed28u); f_00730f68();
    /* 0078ed28: ret  */ FN_RET(0x0078ed20); r_esp += 4; return;
}

void f_0078ed2c(void) /* sub_78ED2C */
{
    FN_ENTER(0x0078ed2c);
    /* 0078ed2c: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ed2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ed31: je 0x78ed38 */ if (fZ) goto L_0078ed38;
L_0078ed33:; BB(0x0078ed33);
    /* 0078ed33: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x78ed38u); f_0061cdb0();
L_0078ed38:; BB(0x0078ed38);
    /* 0078ed38: ret  */ FN_RET(0x0078ed2c); r_esp += 4; return;
}

void f_0078ed3c(void) /* sub_78ED3C */
{
    FN_ENTER(0x0078ed3c);
    /* 0078ed3c: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ed3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ed41: je 0x78ed48 */ if (fZ) goto L_0078ed48;
L_0078ed43:; BB(0x0078ed43);
    /* 0078ed43: call 0x731278 */ r_esp -= 4; W32(r_esp, 0x78ed48u); f_00731278();
L_0078ed48:; BB(0x0078ed48);
    /* 0078ed48: ret  */ FN_RET(0x0078ed3c); r_esp += 4; return;
}

void f_0078ed4c(void) /* sub_78ED4C */
{
    FN_ENTER(0x0078ed4c);
    /* 0078ed4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078ed4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ed4e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078ed50: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 0078ed53: call 0x731080 */ r_esp -= 4; W32(r_esp, 0x78ed58u); f_00731080();
    /* 0078ed58: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078ed5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ed5b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x78ed60u); f_008581c5();
    /* 0078ed60: mov ebp, eax */ r_ebp = r_eax;
    /* 0078ed62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078ed65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078ed66: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 0078ed69: call 0x730f90 */ r_esp -= 4; W32(r_esp, 0x78ed6eu); f_00730f90();
    /* 0078ed6e: mov eax, ebp */ r_eax = r_ebp;
    /* 0078ed70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ed71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078ed72: ret  */ FN_RET(0x0078ed4c); r_esp += 4; return;
}

void f_0078ed74(void) /* sub_78ED74 */
{
    FN_ENTER(0x0078ed74);
    /* 0078ed74: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ed78: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ed7b: call 0x7310ec */ r_esp -= 4; W32(r_esp, 0x78ed80u); f_007310ec();
    /* 0078ed80: ret 4 */ FN_RET(0x0078ed74); r_esp += 8; return;
}

void f_0078ed84(void) /* sub_78ED84 */
{
    FN_ENTER(0x0078ed84);
    /* 0078ed84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ed85: mov esi, ecx */ r_esi = r_ecx;
    /* 0078ed87: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078ed8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078ed8e: fld dword ptr [0x97ab74] */ FPUSH(R_F32((u32)(0x97ab74u)));
    /* 0078ed94: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0078ed96: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0078ed98: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0078ed9b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078ed9d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078eda0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078eda3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078eda7: call 0x73128c */ r_esp -= 4; W32(r_esp, 0x78edacu); f_0073128c();
    /* 0078edac: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078edaf: call 0x731270 */ r_esp -= 4; W32(r_esp, 0x78edb4u); f_00731270();
    /* 0078edb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078edb5: ret 4 */ FN_RET(0x0078ed84); r_esp += 8; return;
}

void f_0078edb8(void) /* sub_78EDB8 */
{
    FN_ENTER(0x0078edb8);
    /* 0078edb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078edb9: mov esi, ecx */ r_esi = r_ecx;
    /* 0078edbb: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078edbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078edc2: fld dword ptr [0x97ab70] */ FPUSH(R_F32((u32)(0x97ab70u)));
    /* 0078edc8: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0078edca: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0078edcc: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0078edcf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078edd1: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078edd4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078edd7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078eddb: call 0x7312a0 */ r_esp -= 4; W32(r_esp, 0x78ede0u); f_007312a0();
    /* 0078ede0: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078ede3: call 0x72f210 */ r_esp -= 4; W32(r_esp, 0x78ede8u); f_0072f210();
    /* 0078ede8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ede9: ret 4 */ FN_RET(0x0078edb8); r_esp += 8; return;
}

void f_0078edec(void) /* sub_78EDEC */
{
    FN_ENTER(0x0078edec);
    /* 0078edec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078eded: mov esi, ecx */ r_esi = r_ecx;
    /* 0078edef: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078edf2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078edf6: fld dword ptr [0x97ab6c] */ FPUSH(R_F32((u32)(0x97ab6cu)));
    /* 0078edfc: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0078edfe: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0078ee00: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0078ee03: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078ee05: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078ee08: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078ee0b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078ee0f: call 0x73128c */ r_esp -= 4; W32(r_esp, 0x78ee14u); f_0073128c();
    /* 0078ee14: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ee16: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078ee19: call 0x7312c4 */ r_esp -= 4; W32(r_esp, 0x78ee1eu); f_007312c4();
    /* 0078ee1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ee1f: ret 4 */ FN_RET(0x0078edec); r_esp += 8; return;
}

void f_0078ee24(void) /* sub_78EE24 */
{
    FN_ENTER(0x0078ee24);
    /* 0078ee24: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ee28: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ee2b: call 0x731264 */ r_esp -= 4; W32(r_esp, 0x78ee30u); f_00731264();
    /* 0078ee30: ret 4 */ FN_RET(0x0078ee24); r_esp += 8; return;
}

void f_0078ee34(void) /* sub_78EE34 */
{
    FN_ENTER(0x0078ee34);
    /* 0078ee34: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0078ee38: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee3a: jne 0x78ee3d */ if (!fZ) goto L_0078ee3d;
L_0078ee3c:; BB(0x0078ee3c);
    /* 0078ee3c: ret  */ FN_RET(0x0078ee34); r_esp += 4; return;
L_0078ee3d:; BB(0x0078ee3d);
    /* 0078ee3d: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0078ee42: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 0078ee46: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ee49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee4b: je 0x78ee52 */ if (fZ) goto L_0078ee52;
L_0078ee4d:; BB(0x0078ee4d);
    /* 0078ee4d: call 0x730ea4 */ r_esp -= 4; W32(r_esp, 0x78ee52u); f_00730ea4();
L_0078ee52:; BB(0x0078ee52);
    /* 0078ee52: ret  */ FN_RET(0x0078ee34); r_esp += 4; return;
}

void f_0078ee54(void) /* sub_78EE54 */
{
    FN_ENTER(0x0078ee54);
    /* 0078ee54: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0078ee58: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee5a: jne 0x78ee71 */ if (!fZ) goto L_0078ee71;
L_0078ee5c:; BB(0x0078ee5c);
    /* 0078ee5c: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078ee61: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 0078ee65: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ee68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee6a: je 0x78ee71 */ if (fZ) goto L_0078ee71;
L_0078ee6c:; BB(0x0078ee6c);
    /* 0078ee6c: call 0x730e74 */ r_esp -= 4; W32(r_esp, 0x78ee71u); f_00730e74();
L_0078ee71:; BB(0x0078ee71);
    /* 0078ee71: ret  */ FN_RET(0x0078ee54); r_esp += 4; return;
}

void f_0078ee74(void) /* sub_78EE74 */
{
    FN_ENTER(0x0078ee74);
    /* 0078ee74: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0078ee78: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee7a: jne 0x78ee88 */ if (!fZ) goto L_0078ee88;
L_0078ee7c:; BB(0x0078ee7c);
    /* 0078ee7c: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ee7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee81: je 0x78ee88 */ if (fZ) goto L_0078ee88;
L_0078ee83:; BB(0x0078ee83);
    /* 0078ee83: call 0x730eec */ r_esp -= 4; W32(r_esp, 0x78ee88u); f_00730eec();
L_0078ee88:; BB(0x0078ee88);
    /* 0078ee88: ret  */ FN_RET(0x0078ee74); r_esp += 4; return;
}

void f_0078ee8c(void) /* sub_78EE8C */
{
    FN_ENTER(0x0078ee8c);
    /* 0078ee8c: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ee8f: call 0x731254 */ r_esp -= 4; W32(r_esp, 0x78ee94u); f_00731254();
    /* 0078ee94: ret  */ FN_RET(0x0078ee8c); r_esp += 4; return;
}

void f_0078ee98(void) /* sub_78EE98 */
{
    FN_ENTER(0x0078ee98);
    /* 0078ee98: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0078ee9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ee9d: je 0x78eea4 */ if (fZ) goto L_0078eea4;
L_0078ee9f:; BB(0x0078ee9f);
    /* 0078ee9f: call 0x7312dc */ r_esp -= 4; W32(r_esp, 0x78eea4u); f_007312dc();
L_0078eea4:; BB(0x0078eea4);
    /* 0078eea4: ret  */ FN_RET(0x0078ee98); r_esp += 4; return;
}

void f_0078eea8(void) /* sub_78EEA8 */
{
    FN_ENTER(0x0078eea8);
    /* 0078eea8: mov edx, 0xa9cb50 */ r_edx = 0xa9cb50u;
    /* 0078eead: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078eeaf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0078eeb1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0078eeb4: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0078eeb7: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0078eeba: mov eax, dword ptr [0xa9cb58] */ r_eax = R32((u32)(0xa9cb58u));
    /* 0078eebf: mov edx, dword ptr [0xa9cb5c] */ r_edx = R32((u32)(0xa9cb5cu));
    /* 0078eec5: or edx, 0x800002 */ {  u32 a = r_edx; u32 b = 0x800002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078eecb: mov dword ptr [0xa9cb5c], edx */ W32((u32)(0xa9cb5cu), r_edx);
    /* 0078eed1: or eax, 0x1fff */ {  u32 a = r_eax; u32 b = 0x1fffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078eed6: mov dword ptr [0xa9cb58], eax */ W32((u32)(0xa9cb58u), r_eax);
    /* 0078eedb: ret  */ FN_RET(0x0078eea8); r_esp += 4; return;
}

void f_0078eedc(void) /* sub_78EEDC */
{
    FN_ENTER(0x0078eedc);
    /* 0078eedc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078eedd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078eede: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078eedf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078eee0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078eee3: mov eax, ecx */ r_eax = r_ecx;
    /* 0078eee5: movsx edx, byte ptr [eax + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 0078eee9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078eeeb: jle 0x78f1f2 */ if ((fZ||fS!=fO)) goto L_0078f1f2;
L_0078eef1:; BB(0x0078eef1);
    /* 0078eef1: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0078eef4: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078eef7: jge 0x78f0ad */ if ((fS==fO)) goto L_0078f0ad;
L_0078eefd:; BB(0x0078eefd);
    /* 0078eefd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078eeff: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0078ef02: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078ef06: mov byte ptr [eax + 4], dl */ W8((u32)(r_eax+0x4u), (u8)r_edx);
    /* 0078ef09: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0078ef0d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078ef11: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0078ef14: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 0078ef18: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078ef1a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0078ef1c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078ef1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ef20: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0078ef22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078ef24: jle 0x78f1e7 */ if ((fZ||fS!=fO)) goto L_0078f1e7;
L_0078ef2a:; BB(0x0078ef2a);
    /* 0078ef2a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0078ef2e: lea edx, [eax + 0xa0] */ r_edx = (u32)(r_eax+0xa0u);
    /* 0078ef34: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0078ef38: lea esi, [edi + eax] */ r_esi = (u32)(r_edi+r_eax);
L_0078ef3b:; BB(0x0078ef3b);
    /* 0078ef3b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0078ef3f: movzx ebx, byte ptr [edi + eax + 5] */ r_ebx = (u32)R8((u32)(r_edi+r_eax+0x5u));
    /* 0078ef44: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ef46: je 0x78f021 */ if (fZ) goto L_0078f021;
L_0078ef4c:; BB(0x0078ef4c);
    /* 0078ef4c: mov eax, dword ptr [0x9ff1fc] */ r_eax = R32((u32)(0x9ff1fcu));
    /* 0078ef51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078ef53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0078ef55: jbe 0x78ef6e */ if ((fC||fZ)) goto L_0078ef6e;
L_0078ef57:; BB(0x0078ef57);
    /* 0078ef57: movzx ecx, byte ptr [edx*2 + 0x9ff1f4] */ r_ecx = (u32)R8((u32)(r_edx*2+0x9ff1f4u));
    /* 0078ef5f: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ef61: je 0x78f1cc */ if (fZ) goto L_0078f1cc;
L_0078ef67:; BB(0x0078ef67);
    /* 0078ef67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078ef6a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0078ef6c: jb 0x78ef57 */ if (fC) goto L_0078ef57;
L_0078ef6e:; BB(0x0078ef6e);
    /* 0078ef6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078ef70: and ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ef73: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078ef75: sar ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0078ef78: shr ebp, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0078ef7b: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078ef7d: sar ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0078ef80: mov edx, dword ptr [ebp*4 + 0x9ff1e4] */ r_edx = R32((u32)(r_ebp*4+0x9ff1e4u));
    /* 0078ef87: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0078ef8b: mov ebp, dword ptr [ebp*4 + 0xa9cb50] */ r_ebp = R32((u32)(r_ebp*4+0xa9cb50u));
    /* 0078ef92: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0078ef95: mov eax, 1 */ r_eax = 0x1u;
    /* 0078ef9a: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0078ef9c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0078efa0: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078efa2: and ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0078efa4: test ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078efaa: jne 0x78f021 */ if (!fZ) goto L_0078f021;
L_0078efac:; BB(0x0078efac);
    /* 0078efac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078efae: je 0x78f016 */ if (fZ) goto L_0078f016;
L_0078efb0:; BB(0x0078efb0);
    /* 0078efb0: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0078efb4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0078efb8: mov ecx, dword ptr [eax + edx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0078efbf: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078efc3: or ecx, dword ptr [esp + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+r_edx*4)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0078efc6: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078efc8: jne 0x78efd4 */ if (!fZ) goto L_0078efd4;
L_0078efca:; BB(0x0078efca);
    /* 0078efca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078efcb: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0078efcf: call 0x78f200 */ r_esp -= 4; W32(r_esp, 0x78efd4u); f_0078f200();
L_0078efd4:; BB(0x0078efd4);
    /* 0078efd4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078efd6: jne 0x78f016 */ if (!fZ) goto L_0078f016;
L_0078efd8:; BB(0x0078efd8);
    /* 0078efd8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078efdc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0078efe0: mov ecx, eax */ r_ecx = r_eax;
    /* 0078efe2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0078efe4:; BB(0x0078efe4);
    /* 0078efe4: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0078efe7: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078efe9: je 0x78f194 */ if (fZ) goto L_0078f194;
L_0078efef:; BB(0x0078efef);
    /* 0078efef: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078eff2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078eff5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078eff8: jl 0x78efe4 */ if ((fS!=fO)) goto L_0078efe4;
L_0078effa:; BB(0x0078effa);
    /* 0078effa: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0078effe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0078f000:; BB(0x0078f000);
    /* 0078f000: movzx ecx, byte ptr [edx] */ r_ecx = (u32)R8((u32)(r_edx));
    /* 0078f003: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f005: je 0x78f189 */ if (fZ) goto L_0078f189;
L_0078f00b:; BB(0x0078f00b);
    /* 0078f00b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078f00e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f011: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f014: jl 0x78f000 */ if ((fS!=fO)) goto L_0078f000;
L_0078f016:; BB(0x0078f016);
    /* 0078f016: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078f01a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0078f01e: or dword ptr [esp + edx*4], eax */ { u32 ad = (u32)(r_esp+r_edx*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0078f021:; BB(0x0078f021);
    /* 0078f021: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0078f025: mov byte ptr [esi + 5], 0 */ W8((u32)(r_esi+0x5u), 0x0u);
    /* 0078f029: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 0078f02d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078f030: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078f033: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f035: jl 0x78ef3b */ if ((fS!=fO)) goto L_0078ef3b;
L_0078f03b:; BB(0x0078f03b);
    /* 0078f03b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0078f03f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0078f042: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0078f046: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0078f04a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_0078f04e:; BB(0x0078f04e);
    /* 0078f04e: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 0078f052: mov dword ptr [eax + 0x90], esi */ W32((u32)(r_eax+0x90u), r_esi);
    /* 0078f058: mov dword ptr [eax + 0x94], ebp */ W32((u32)(r_eax+0x94u), r_ebp);
    /* 0078f05e: mov dword ptr [eax + 0x98], ebx */ W32((u32)(r_eax+0x98u), r_ebx);
    /* 0078f064: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 0078f06a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0078f06c:; BB(0x0078f06c);
    /* 0078f06c: movzx ecx, byte ptr [edx] */ r_ecx = (u32)R8((u32)(r_edx));
    /* 0078f06f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f071: je 0x78f09a */ if (fZ) goto L_0078f09a;
L_0078f073:; BB(0x0078f073);
    /* 0078f073: mov esi, ecx */ r_esi = r_ecx;
    /* 0078f075: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0078f078: shr esi, 0x1b */ { u32 c = (27u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0078f07b: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078f07d: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0078f080: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0078f083: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0078f088: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0078f08a: test dword ptr [eax + esi*4 + 0x90], ebp */ {  u32 a = R32((u32)(r_eax+r_esi*4+0x90u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f091: jne 0x78f09a */ if (!fZ) goto L_0078f09a;
L_0078f093:; BB(0x0078f093);
    /* 0078f093: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0078f096: mov byte ptr [edx + 1], 0x23 */ W8((u32)(r_edx+0x1u), 0x23u);
L_0078f09a:; BB(0x0078f09a);
    /* 0078f09a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078f09d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f0a0: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f0a3: jl 0x78f06c */ if ((fS!=fO)) goto L_0078f06c;
L_0078f0a5:; BB(0x0078f0a5);
    /* 0078f0a5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078f0a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f0a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f0aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f0ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f0ac: ret  */ FN_RET(0x0078eedc); r_esp += 4; return;
L_0078f0ad:; BB(0x0078f0ad);
    /* 0078f0ad: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f0af: mov byte ptr [eax + 2], bl */ W8((u32)(r_eax+0x2u), (u8)r_ebx);
    /* 0078f0b2: mov byte ptr [eax + 0x85], bl */ W8((u32)(r_eax+0x85u), (u8)r_ebx);
    /* 0078f0b8: mov byte ptr [eax + 0x86], bl */ W8((u32)(r_eax+0x86u), (u8)r_ebx);
    /* 0078f0be: mov byte ptr [eax + 0x87], bl */ W8((u32)(r_eax+0x87u), (u8)r_ebx);
    /* 0078f0c4: mov byte ptr [eax + 0x88], bl */ W8((u32)(r_eax+0x88u), (u8)r_ebx);
    /* 0078f0ca: mov byte ptr [eax + 0x89], bl */ W8((u32)(r_eax+0x89u), (u8)r_ebx);
    /* 0078f0d0: mov byte ptr [eax + 0x8a], bl */ W8((u32)(r_eax+0x8au), (u8)r_ebx);
    /* 0078f0d6: mov byte ptr [eax + 0x8b], bl */ W8((u32)(r_eax+0x8bu), (u8)r_ebx);
    /* 0078f0dc: mov byte ptr [eax + 0x8c], bl */ W8((u32)(r_eax+0x8cu), (u8)r_ebx);
    /* 0078f0e2: mov byte ptr [eax + 0xa0], bl */ W8((u32)(r_eax+0xa0u), (u8)r_ebx);
    /* 0078f0e8: mov edx, 0x23 */ r_edx = 0x23u;
    /* 0078f0ed: mov byte ptr [eax + 0xa1], dl */ W8((u32)(r_eax+0xa1u), (u8)r_edx);
    /* 0078f0f3: mov byte ptr [eax + 0xa2], bl */ W8((u32)(r_eax+0xa2u), (u8)r_ebx);
    /* 0078f0f9: mov byte ptr [eax + 0xa3], dl */ W8((u32)(r_eax+0xa3u), (u8)r_edx);
    /* 0078f0ff: mov byte ptr [eax + 0xa4], bl */ W8((u32)(r_eax+0xa4u), (u8)r_ebx);
    /* 0078f105: mov byte ptr [eax + 0xa5], dl */ W8((u32)(r_eax+0xa5u), (u8)r_edx);
    /* 0078f10b: mov byte ptr [eax + 0xa6], bl */ W8((u32)(r_eax+0xa6u), (u8)r_ebx);
    /* 0078f111: mov byte ptr [eax + 0xa7], dl */ W8((u32)(r_eax+0xa7u), (u8)r_edx);
    /* 0078f117: mov byte ptr [eax + 0xa8], bl */ W8((u32)(r_eax+0xa8u), (u8)r_ebx);
    /* 0078f11d: mov byte ptr [eax + 0xa9], dl */ W8((u32)(r_eax+0xa9u), (u8)r_edx);
    /* 0078f123: mov byte ptr [eax + 0xaa], bl */ W8((u32)(r_eax+0xaau), (u8)r_ebx);
    /* 0078f129: mov byte ptr [eax + 0xab], dl */ W8((u32)(r_eax+0xabu), (u8)r_edx);
    /* 0078f12f: mov byte ptr [eax + 0xac], bl */ W8((u32)(r_eax+0xacu), (u8)r_ebx);
    /* 0078f135: mov byte ptr [eax + 0xad], dl */ W8((u32)(r_eax+0xadu), (u8)r_edx);
    /* 0078f13b: mov byte ptr [eax + 0xae], bl */ W8((u32)(r_eax+0xaeu), (u8)r_ebx);
    /* 0078f141: mov byte ptr [eax + 0xaf], dl */ W8((u32)(r_eax+0xafu), (u8)r_edx);
    /* 0078f147: mov dword ptr [eax + 0x90], ebx */ W32((u32)(r_eax+0x90u), r_ebx);
    /* 0078f14d: mov dword ptr [eax + 0x94], ebx */ W32((u32)(r_eax+0x94u), r_ebx);
    /* 0078f153: mov dword ptr [eax + 0x98], ebx */ W32((u32)(r_eax+0x98u), r_ebx);
    /* 0078f159: mov dword ptr [eax + 0x9c], ebx */ W32((u32)(r_eax+0x9cu), r_ebx);
    /* 0078f15f: mov byte ptr [eax + 4], bl */ W8((u32)(r_eax+0x4u), (u8)r_ebx);
    /* 0078f162: mov byte ptr [eax + 3], bl */ W8((u32)(r_eax+0x3u), (u8)r_ebx);
    /* 0078f165: lea edx, [eax + 5] */ r_edx = (u32)(r_eax+0x5u);
    /* 0078f168: add eax, 0x85 */ {  u32 a = r_eax; u32 b = 0x85u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0078f16d:; BB(0x0078f16d);
    /* 0078f16d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f16f: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 0078f171: mov byte ptr [edx + 1], bl */ W8((u32)(r_edx+0x1u), (u8)r_ebx);
    /* 0078f174: mov byte ptr [edx + 2], bl */ W8((u32)(r_edx+0x2u), (u8)r_ebx);
    /* 0078f177: mov byte ptr [edx + 3], bl */ W8((u32)(r_edx+0x3u), (u8)r_ebx);
    /* 0078f17a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078f17d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078f17f: ja 0x78f16d */ if ((!fC&&!fZ)) goto L_0078f16d;
L_0078f181:; BB(0x0078f181);
    /* 0078f181: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078f184: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f186: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f187: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f188: ret  */ FN_RET(0x0078eedc); r_esp += 4; return;
L_0078f189:; BB(0x0078f189);
    /* 0078f189: mov byte ptr [edx + 1], 0x23 */ W8((u32)(r_edx+0x1u), 0x23u);
    /* 0078f18d: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 0078f18f: jmp 0x78f016 */ goto L_0078f016;
L_0078f194:; BB(0x0078f194);
    /* 0078f194: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0078f198: mov edx, ecx */ r_edx = r_ecx;
    /* 0078f19a: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0078f19e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f1a1: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 0078f1a4: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0078f1a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078f1a9: jg 0x78f016 */ if ((!fZ&&fS==fO)) goto L_0078f016;
L_0078f1af:; BB(0x0078f1af);
    /* 0078f1af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f1b0: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0078f1b4: call 0x78f200 */ r_esp -= 4; W32(r_esp, 0x78f1b9u); f_0078f200();
    /* 0078f1b9: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0078f1bd: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0078f1c1: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f1c4: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 0078f1c7: jmp 0x78f016 */ goto L_0078f016;
L_0078f1cc:; BB(0x0078f1cc);
    /* 0078f1cc: movzx edx, byte ptr [edx*2 + 0x9ff1f5] */ r_edx = (u32)R8((u32)(r_edx*2+0x9ff1f5u));
    /* 0078f1d4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078f1d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f1d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f1d9: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0078f1dd: call 0x78f220 */ r_esp -= 4; W32(r_esp, 0x78f1e2u); f_0078f220();
    /* 0078f1e2: jmp 0x78ef6e */ goto L_0078ef6e;
L_0078f1e7:; BB(0x0078f1e7);
    /* 0078f1e7: lea edx, [eax + 0xa0] */ r_edx = (u32)(r_eax+0xa0u);
    /* 0078f1ed: jmp 0x78f04e */ goto L_0078f04e;
L_0078f1f2:; BB(0x0078f1f2);
    /* 0078f1f2: mov byte ptr [eax + 2], 0 */ W8((u32)(r_eax+0x2u), 0x0u);
    /* 0078f1f6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078f1f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f1fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f1fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f1fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f1fd: ret  */ FN_RET(0x0078eedc); r_esp += 4; return;
}

