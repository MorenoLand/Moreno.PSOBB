#include "protos.h"

void f_005de008(void) /* sub_5DE008 */
{
    FN_ENTER(0x005de008);
    /* 005de008: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005de00e: movsx eax, word ptr [ecx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005de015: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de016: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5de01bu); f_007773d4();
    /* 005de01b: ret  */ FN_RET(0x005de008); r_esp += 4; return;
}

void f_005de01c(void) /* sub_5DE01C */
{
    FN_ENTER(0x005de01c);
    /* 005de01c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de01f: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005de025: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de027: je 0x5de04d */ if (fZ) goto L_005de04d;
L_005de029:; BB(0x005de029);
    /* 005de029: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de02b: mov dword ptr [esp], 0xf */ W32((u32)(r_esp), 0xfu);
    /* 005de032: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de037: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005de03f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de041: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de045: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005de047: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de048: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5de04bu); call_ind(t); }
    /* 005de04b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005de04d:; BB(0x005de04d);
    /* 005de04d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de050: ret  */ FN_RET(0x005de01c); r_esp += 4; return;
}

void f_005de054(void) /* sub_5DE054 */
{
    FN_ENTER(0x005de054);
    /* 005de054: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de057: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005de05d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de05f: je 0x5de085 */ if (fZ) goto L_005de085;
L_005de061:; BB(0x005de061);
    /* 005de061: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de063: mov dword ptr [esp], 0x10 */ W32((u32)(r_esp), 0x10u);
    /* 005de06a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de06f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005de077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de079: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de07b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de07d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005de07f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de080: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5de083u); call_ind(t); }
    /* 005de083: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005de085:; BB(0x005de085);
    /* 005de085: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de088: ret  */ FN_RET(0x005de054); r_esp += 4; return;
}

void f_005de08c(void) /* sub_5DE08C */
{
    FN_ENTER(0x005de08c);
    /* 005de08c: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005de092: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005de099: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de09c: jne 0x5de0a6 */ if (!fZ) goto L_005de0a6;
L_005de09e:; BB(0x005de09e);
    /* 005de09e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005de0a0: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5de0a6u); call_ind(t); }
L_005de0a6:; BB(0x005de0a6);
    /* 005de0a6: ret  */ FN_RET(0x005de08c); r_esp += 4; return;
}

void f_005de0a8(void) /* sub_5DE0A8 */
{
    FN_ENTER(0x005de0a8);
    /* 005de0a8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de0ab: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005de0b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de0b3: je 0x5de0d9 */ if (fZ) goto L_005de0d9;
L_005de0b5:; BB(0x005de0b5);
    /* 005de0b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de0b7: mov dword ptr [esp], 0x11 */ W32((u32)(r_esp), 0x11u);
    /* 005de0be: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de0c3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005de0cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de0cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de0cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de0d1: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005de0d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de0d4: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5de0d7u); call_ind(t); }
    /* 005de0d7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005de0d9:; BB(0x005de0d9);
    /* 005de0d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de0dc: ret  */ FN_RET(0x005de0a8); r_esp += 4; return;
}

void f_005de0e0(void) /* sub_5DE0E0 */
{
    FN_ENTER(0x005de0e0);
    /* 005de0e0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de0e3: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005de0e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de0eb: je 0x5de111 */ if (fZ) goto L_005de111;
L_005de0ed:; BB(0x005de0ed);
    /* 005de0ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de0ef: mov dword ptr [esp], 0x12 */ W32((u32)(r_esp), 0x12u);
    /* 005de0f6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de0fb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005de103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de105: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de109: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005de10b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de10c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5de10fu); call_ind(t); }
    /* 005de10f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005de111:; BB(0x005de111);
    /* 005de111: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de114: ret  */ FN_RET(0x005de0e0); r_esp += 4; return;
}

void f_005de118(void) /* sub_5DE118 */
{
    FN_ENTER(0x005de118);
    /* 005de118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de119: mov ebp, esp */ r_ebp = r_esp;
    /* 005de11b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de11d: push 0x8daccc */ { u32 v = 0x8dacccu; r_esp -= 4; W32(r_esp, v); }
    /* 005de122: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de129: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005de130: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de133: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005de136: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005de139: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005de13c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005de13f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de142: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de144: je 0x5de19b */ if (fZ) goto L_005de19b;
L_005de146:; BB(0x005de146);
    /* 005de146: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005de14d: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005de152: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5de157u); f_005caba4();
    /* 005de157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de158: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005de15b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de15d: je 0x5de197 */ if (fZ) goto L_005de197;
L_005de15f:; BB(0x005de15f);
    /* 005de15f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005de166: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de16d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de170: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de174: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de17a: call 0x5de1ac */ r_esp -= 4; W32(r_esp, 0x5de17fu); f_005de1ac();
    /* 005de17f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de182: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005de189:; BB(0x005de189);
    /* 005de189: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de18c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de193: mov esp, ebp */ r_esp = r_ebp;
    /* 005de195: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de196: ret  */ FN_RET(0x005de118); r_esp += 4; return;
L_005de197:; BB(0x005de197);
    /* 005de197: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de199: jmp 0x5de189 */ goto L_005de189;
L_005de19b:; BB(0x005de19b);
    /* 005de19b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de19d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de1a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de1a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005de1a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de1aa: ret  */ FN_RET(0x005de118); r_esp += 4; return;
}

void f_005de1ac(void) /* sub_5DE1AC */
{
    FN_ENTER(0x005de1ac);
    /* 005de1ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de1ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005de1af: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de1b3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de1b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005de1b9: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5de1beu); f_005de2d8();
    /* 005de1be: mov dword ptr [ebp], 0xb0dfe0 */ W32((u32)(r_ebp), 0xb0dfe0u);
    /* 005de1c5: mov eax, ebp */ r_eax = r_ebp;
    /* 005de1c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de1c8: ret 8 */ FN_RET(0x005de1ac); r_esp += 12; return;
}

void f_005de1cc(void) /* sub_5DE1CC */
{
    FN_ENTER(0x005de1cc);
    /* 005de1cc: mov dword ptr [0xa8db18], 0x3f800000 */ W32((u32)(0xa8db18u), 0x3f800000u);
    /* 005de1d6: mov dword ptr [0xa8db1c], 0x41000000 */ W32((u32)(0xa8db1cu), 0x41000000u);
    /* 005de1e0: mov dword ptr [0xa8db20], 0x3fc00000 */ W32((u32)(0xa8db20u), 0x3fc00000u);
    /* 005de1ea: ret  */ FN_RET(0x005de1cc); r_esp += 4; return;
}

void f_005de1ec(void) /* sub_5DE1EC */
{
    FN_ENTER(0x005de1ec);
    /* 005de1ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005de1ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de1ee: mov edi, ecx */ r_edi = r_ecx;
    /* 005de1f0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005de1f2: mov ecx, edi */ r_ecx = r_edi;
    /* 005de1f4: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x5de1fau); call_ind(t); }
    /* 005de1fa: mov esi, eax */ r_esi = r_eax;
    /* 005de1fc: mov ecx, edi */ r_ecx = r_edi;
    /* 005de1fe: call 0x5c5064 */ r_esp -= 4; W32(r_esp, 0x5de203u); f_005c5064();
    /* 005de203: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de205: jle 0x5de20e */ if ((fZ||fS!=fO)) goto L_005de20e;
L_005de207:; BB(0x005de207);
    /* 005de207: mov ecx, edi */ r_ecx = r_edi;
    /* 005de209: call 0x5c3550 */ r_esp -= 4; W32(r_esp, 0x5de20eu); f_005c3550();
L_005de20e:; BB(0x005de20e);
    /* 005de20e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de20f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005de210: ret  */ FN_RET(0x005de1ec); r_esp += 4; return;
}

void f_005de214(void) /* sub_5DE214 */
{
    FN_ENTER(0x005de214);
    /* 005de214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de215: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005de217: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005de219: call 0x5c441c */ r_esp -= 4; W32(r_esp, 0x5de21eu); f_005c441c();
    /* 005de21e: mov byte ptr [ebp + 0x109], 1 */ W8((u32)(r_ebp+0x109u), 0x1u);
    /* 005de225: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de226: ret  */ FN_RET(0x005de214); r_esp += 4; return;
}

void f_005de228(void) /* sub_5DE228 */
{
    FN_ENTER(0x005de228);
    /* 005de228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005de229: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005de22d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de22f: je 0x5de23f */ if (fZ) goto L_005de23f;
L_005de231:; BB(0x005de231);
    /* 005de231: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005de232: call 0x5caa50 */ r_esp -= 4; W32(r_esp, 0x5de237u); f_005caa50();
    /* 005de237: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005de238: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de23au); call_ind(t); }
    /* 005de23a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de23d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005de23e: ret  */ FN_RET(0x005de228); r_esp += 4; return;
L_005de23f:; BB(0x005de23f);
    /* 005de23f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de241: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005de242: ret  */ FN_RET(0x005de228); r_esp += 4; return;
}

void f_005de244(void) /* sub_5DE244 */
{
    FN_ENTER(0x005de244);
    /* 005de244: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de245: mov ebp, esp */ r_ebp = r_esp;
    /* 005de247: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de249: push 0x8dacf4 */ { u32 v = 0x8dacf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005de24e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de255: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005de25c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de25f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005de262: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005de265: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005de268: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005de26b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de26e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de270: je 0x5de2c7 */ if (fZ) goto L_005de2c7;
L_005de272:; BB(0x005de272);
    /* 005de272: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005de279: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005de27e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5de283u); f_005caba4();
    /* 005de283: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de284: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005de287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de289: je 0x5de2c3 */ if (fZ) goto L_005de2c3;
L_005de28b:; BB(0x005de28b);
    /* 005de28b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005de292: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de29c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de2a0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de2a6: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5de2abu); f_005de2d8();
    /* 005de2ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de2ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005de2b5:; BB(0x005de2b5);
    /* 005de2b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de2bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005de2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de2c2: ret  */ FN_RET(0x005de244); r_esp += 4; return;
L_005de2c3:; BB(0x005de2c3);
    /* 005de2c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de2c5: jmp 0x5de2b5 */ goto L_005de2b5;
L_005de2c7:; BB(0x005de2c7);
    /* 005de2c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de2c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de2d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005de2d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de2d6: ret  */ FN_RET(0x005de244); r_esp += 4; return;
}

void f_005de2d8(void) /* sub_5DE2D8 */
{
    FN_ENTER(0x005de2d8);
    /* 005de2d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de2d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005de2db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de2dd: push 0x8dad10 */ { u32 v = 0x8dad10u; r_esp -= 4; W32(r_esp, v); }
    /* 005de2e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de2e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005de2f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de2f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005de2f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005de2f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005de2fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005de2ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005de302: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005de305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de306: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005de309: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005de30c: call 0x5c3a94 */ r_esp -= 4; W32(r_esp, 0x5de311u); f_005c3a94();
    /* 005de311: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de318: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005de31b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de31e: mov dword ptr [edx], 0xb0dc40 */ W32((u32)(r_edx), 0xb0dc40u);
    /* 005de324: mov eax, dword ptr [0x9c2810] */ r_eax = R32((u32)(0x9c2810u));
    /* 005de329: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005de32c: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5de331u); f_005d2890();
    /* 005de331: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005de334: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de337: mov dword ptr [edx + 0x100], eax */ W32((u32)(r_edx+0x100u), r_eax);
    /* 005de33d: movzx eax, byte ptr [ecx + 4] */ r_eax = (u32)R8((u32)(r_ecx+0x4u));
    /* 005de341: mov byte ptr [edx + 0x108], al */ W8((u32)(r_edx+0x108u), (u8)r_eax);
    /* 005de347: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x5de34cu); f_005d29b0();
    /* 005de34c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005de34f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de350: call 0x5de3b0 */ r_esp -= 4; W32(r_esp, 0x5de355u); f_005de3b0();
    /* 005de355: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005de358: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 005de35e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005de361: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005de364: je 0x5de377 */ if (fZ) goto L_005de377;
L_005de366:; BB(0x005de366);
    /* 005de366: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005de36c: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005de36f: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 005de375: jmp 0x5de386 */ goto L_005de386;
L_005de377:; BB(0x005de377);
    /* 005de377: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005de37d: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005de380: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
L_005de386:; BB(0x005de386);
    /* 005de386: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 005de38a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de38c: je 0x5de39f */ if (fZ) goto L_005de39f;
L_005de38e:; BB(0x005de38e);
    /* 005de38e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de391: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005de394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de395: mov ecx, eax */ r_ecx = r_eax;
    /* 005de397: call 0x5c3e3c */ r_esp -= 4; W32(r_esp, 0x5de39cu); f_005c3e3c();
    /* 005de39c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_005de39f:; BB(0x005de39f);
    /* 005de39f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de3a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de3a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005de3ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de3ac: ret 8 */ FN_RET(0x005de2d8); r_esp += 12; return;
}

void f_005de3b0(void) /* sub_5DE3B0 */
{
    FN_ENTER(0x005de3b0);
    /* 005de3b0: lea eax, [ecx + 0x104] */ r_eax = (u32)(r_ecx+0x104u);
    /* 005de3b6: xor eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de3ba: mov dword ptr [ecx + 0x104], eax */ W32((u32)(r_ecx+0x104u), r_eax);
    /* 005de3c0: ret 4 */ FN_RET(0x005de3b0); r_esp += 8; return;
}

void f_005de3c4(void) /* sub_5DE3C4 */
{
    FN_ENTER(0x005de3c4);
    /* 005de3c4: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005de3cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de3ce: je 0x5de3d5 */ if (fZ) goto L_005de3d5;
L_005de3d0:; BB(0x005de3d0);
    /* 005de3d0: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de3d3: jne 0x5de3e3 */ if (!fZ) goto L_005de3e3;
L_005de3d5:; BB(0x005de3d5);
    /* 005de3d5: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005de3d9: movzx eax, byte ptr [ecx + 0x108] */ r_eax = (u32)R8((u32)(r_ecx+0x108u));
    /* 005de3e0: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
L_005de3e3:; BB(0x005de3e3);
    /* 005de3e3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005de3e5: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x5de3ebu); call_ind(t); }
    /* 005de3eb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005de3ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de3ef: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005de3f3: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x5de3f8u); f_005d2484();
    /* 005de3f8: ret 4 */ FN_RET(0x005de3c4); r_esp += 8; return;
}

void f_005de3fc(void) /* sub_5DE3FC */
{
    FN_ENTER(0x005de3fc);
    /* 005de3fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de3fd: mov esi, ecx */ r_esi = r_ecx;
    /* 005de3ff: mov ecx, esi */ r_ecx = r_esi;
    /* 005de401: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x5de406u); f_005c443c();
    /* 005de406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de408: jne 0x5de460 */ if (!fZ) goto L_005de460;
L_005de40a:; BB(0x005de40a);
    /* 005de40a: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005de410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de412: je 0x5de467 */ if (fZ) goto L_005de467;
L_005de414:; BB(0x005de414);
    /* 005de414: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005de416: mov byte ptr [esi + 0x109], 0 */ W8((u32)(r_esi+0x109u), 0x0u);
    /* 005de41d: mov ecx, esi */ r_ecx = r_esi;
    /* 005de41f: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x5de425u); call_ind(t); }
    /* 005de425: movzx eax, byte ptr [esi + 0x109] */ r_eax = (u32)R8((u32)(r_esi+0x109u));
    /* 005de42c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de42e: jne 0x5de448 */ if (!fZ) goto L_005de448;
L_005de430:; BB(0x005de430);
    /* 005de430: push 0x1af */ { u32 v = 0x1afu; r_esp -= 4; W32(r_esp, v); }
    /* 005de435: mov ecx, esi */ r_ecx = r_esi;
    /* 005de437: call 0x5c3724 */ r_esp -= 4; W32(r_esp, 0x5de43cu); f_005c3724();
    /* 005de43c: push 0x580 */ { u32 v = 0x580u; r_esp -= 4; W32(r_esp, v); }
    /* 005de441: mov ecx, esi */ r_ecx = r_esi;
    /* 005de443: call 0x5c376c */ r_esp -= 4; W32(r_esp, 0x5de448u); f_005c376c();
L_005de448:; BB(0x005de448);
    /* 005de448: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 005de44e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de450: je 0x5de467 */ if (fZ) goto L_005de467;
L_005de452:; BB(0x005de452);
    /* 005de452: push dword ptr [esi + 0xd8] */ { u32 v = R32((u32)(r_esi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005de458: call 0x5c46f8 */ r_esp -= 4; W32(r_esp, 0x5de45du); f_005c46f8();
    /* 005de45d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de45e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de45f: ret  */ FN_RET(0x005de3fc); r_esp += 4; return;
L_005de460:; BB(0x005de460);
    /* 005de460: mov ecx, esi */ r_ecx = r_esi;
    /* 005de462: call 0x5c4860 */ r_esp -= 4; W32(r_esp, 0x5de467u); f_005c4860();
L_005de467:; BB(0x005de467);
    /* 005de467: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de468: ret  */ FN_RET(0x005de3fc); r_esp += 4; return;
}

void f_005de46c(void) /* sub_5DE46C */
{
    FN_ENTER(0x005de46c);
    /* 005de46c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de46d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005de46f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005de472: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005de474: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x5de47au); call_ind(t); }
    /* 005de47a: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005de47e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de480: jg 0x5de497 */ if ((!fZ&&fS==fO)) goto L_005de497;
L_005de482:; BB(0x005de482);
    /* 005de482: sub eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de487: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005de489: call 0x5de3b0 */ r_esp -= 4; W32(r_esp, 0x5de48eu); f_005de3b0();
    /* 005de48e: mov eax, 1 */ r_eax = 0x1u;
    /* 005de493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de494: ret 4 */ FN_RET(0x005de46c); r_esp += 8; return;
L_005de497:; BB(0x005de497);
    /* 005de497: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de49a: ret 4 */ FN_RET(0x005de46c); r_esp += 8; return;
}

void f_005de4a0(void) /* sub_5DE4A0 */
{
    FN_ENTER(0x005de4a0);
    /* 005de4a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005de4a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de4a2: mov edi, ecx */ r_edi = r_ecx;
    /* 005de4a4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005de4a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005de4a8: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x5de4aeu); call_ind(t); }
    /* 005de4ae: mov ebp, eax */ r_ebp = r_eax;
    /* 005de4b0: add ebp, dword ptr [esp + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005de4b4: mov ecx, edi */ r_ecx = r_edi;
    /* 005de4b6: call 0x5c5064 */ r_esp -= 4; W32(r_esp, 0x5de4bbu); f_005c5064();
    /* 005de4bb: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de4bd: jg 0x5de4d1 */ if ((!fZ&&fS==fO)) goto L_005de4d1;
L_005de4bf:; BB(0x005de4bf);
    /* 005de4bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de4c0: mov ecx, edi */ r_ecx = r_edi;
    /* 005de4c2: call 0x5de3b0 */ r_esp -= 4; W32(r_esp, 0x5de4c7u); f_005de3b0();
    /* 005de4c7: mov eax, 1 */ r_eax = 0x1u;
    /* 005de4cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de4cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005de4ce: ret 4 */ FN_RET(0x005de4a0); r_esp += 8; return;
L_005de4d1:; BB(0x005de4d1);
    /* 005de4d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de4d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de4d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005de4d5: ret 4 */ FN_RET(0x005de4a0); r_esp += 8; return;
}

void f_005de4d8(void) /* sub_5DE4D8 */
{
    FN_ENTER(0x005de4d8);
    /* 005de4d8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005de4dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de4de: je 0x5de567 */ if (fZ) goto L_005de567;
L_005de4e4:; BB(0x005de4e4);
    /* 005de4e4: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005de4eb: movzx ecx, byte ptr [eax + 0xf4] */ r_ecx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005de4f2: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de4f5: ja 0x5de567 */ if ((!fC&&!fZ)) goto L_005de567;
L_005de4f7:; BB(0x005de4f7);
    /* 005de4f7: mov eax, dword ptr [edx*4 + 0x92cd90] */ r_eax = R32((u32)(r_edx*4+0x92cd90u));
    /* 005de4fe: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005de567:; BB(0x005de567);
    /* 005de567: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de56c: ret  */ FN_RET(0x005de4d8); r_esp += 4; return;
}

void f_005de500(void)
{
    FN_ENTER(0x005de500);
    /* 005de500: mov eax, 0xc */ r_eax = 0xcu;
    /* 005de505: ret  */ FN_RET(0x005de500); r_esp += 4; return;
}

void f_005de506(void)
{
    FN_ENTER(0x005de506);
    /* 005de506: mov eax, 0xb */ r_eax = 0xbu;
    /* 005de50b: ret  */ FN_RET(0x005de506); r_esp += 4; return;
}

void f_005de50c(void)
{
    FN_ENTER(0x005de50c);
    /* 005de50c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de50e: jne 0x5de516 */ if (!fZ) goto L_005de516;
L_005de510:; BB(0x005de510);
    /* 005de510: mov eax, 6 */ r_eax = 0x6u;
    /* 005de515: ret  */ FN_RET(0x005de50c); r_esp += 4; return;
L_005de516:; BB(0x005de516);
    /* 005de516: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de519: jne 0x5de567 */ if (!fZ) goto L_005de567;
L_005de51b:; BB(0x005de51b);
    /* 005de51b: mov eax, 7 */ r_eax = 0x7u;
    /* 005de520: ret  */ FN_RET(0x005de50c); r_esp += 4; return;
L_005de567:; BB(0x005de567);
    /* 005de567: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de56c: ret  */ FN_RET(0x005de50c); r_esp += 4; return;
}

void f_005de521(void)
{
    FN_ENTER(0x005de521);
    /* 005de521: mov eax, 0xa */ r_eax = 0xau;
    /* 005de526: ret  */ FN_RET(0x005de521); r_esp += 4; return;
}

void f_005de527(void)
{
    FN_ENTER(0x005de527);
    /* 005de527: mov eax, 9 */ r_eax = 0x9u;
    /* 005de52c: ret  */ FN_RET(0x005de527); r_esp += 4; return;
}

void f_005de52d(void)
{
    FN_ENTER(0x005de52d);
    /* 005de52d: mov eax, 8 */ r_eax = 0x8u;
    /* 005de532: ret  */ FN_RET(0x005de52d); r_esp += 4; return;
}

void f_005de533(void)
{
    FN_ENTER(0x005de533);
    /* 005de533: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de535: je 0x5de54d */ if (fZ) goto L_005de54d;
L_005de537:; BB(0x005de537);
    /* 005de537: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de53a: jne 0x5de542 */ if (!fZ) goto L_005de542;
L_005de53c:; BB(0x005de53c);
    /* 005de53c: mov eax, 4 */ r_eax = 0x4u;
    /* 005de541: ret  */ FN_RET(0x005de533); r_esp += 4; return;
L_005de542:; BB(0x005de542);
    /* 005de542: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de545: jne 0x5de567 */ if (!fZ) goto L_005de567;
L_005de547:; BB(0x005de547);
    /* 005de547: mov eax, 5 */ r_eax = 0x5u;
    /* 005de54c: ret  */ FN_RET(0x005de533); r_esp += 4; return;
L_005de54d:; BB(0x005de54d);
    /* 005de54d: mov eax, 3 */ r_eax = 0x3u;
    /* 005de552: ret  */ FN_RET(0x005de533); r_esp += 4; return;
L_005de567:; BB(0x005de567);
    /* 005de567: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de56c: ret  */ FN_RET(0x005de533); r_esp += 4; return;
}

void f_005de553(void)
{
    FN_ENTER(0x005de553);
    /* 005de553: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de555: je 0x5de573 */ if (fZ) goto L_005de573;
L_005de557:; BB(0x005de557);
    /* 005de557: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de55a: jne 0x5de562 */ if (!fZ) goto L_005de562;
L_005de55c:; BB(0x005de55c);
    /* 005de55c: mov eax, 1 */ r_eax = 0x1u;
    /* 005de561: ret  */ FN_RET(0x005de553); r_esp += 4; return;
L_005de562:; BB(0x005de562);
    /* 005de562: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005de565: je 0x5de56d */ if (fZ) goto L_005de56d;
L_005de567:; BB(0x005de567);
    /* 005de567: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de56c: ret  */ FN_RET(0x005de553); r_esp += 4; return;
L_005de56d:; BB(0x005de56d);
    /* 005de56d: mov eax, 2 */ r_eax = 0x2u;
    /* 005de572: ret  */ FN_RET(0x005de553); r_esp += 4; return;
L_005de573:; BB(0x005de573);
    /* 005de573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de575: ret  */ FN_RET(0x005de553); r_esp += 4; return;
}

void f_005de567(void)
{
    FN_ENTER(0x005de567);
    /* 005de567: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de56c: ret  */ FN_RET(0x005de567); r_esp += 4; return;
}

void f_005de578(void) /* sub_5DE578 */
{
    FN_ENTER(0x005de578);
    /* 005de578: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 005de57e: movzx eax, word ptr [edx + 0xc] */ r_eax = (u32)R16((u32)(r_edx+0xcu));
    /* 005de582: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005de585: ret  */ FN_RET(0x005de578); r_esp += 4; return;
}

void f_005de588(void) /* sub_5DE588 */
{
    FN_ENTER(0x005de588);
    /* 005de588: movzx eax, byte ptr [ecx + 0x108] */ r_eax = (u32)R8((u32)(r_ecx+0x108u));
    /* 005de58f: ret  */ FN_RET(0x005de588); r_esp += 4; return;
}

void f_005de590(void) /* sub_5DE590 */
{
    FN_ENTER(0x005de590);
    /* 005de590: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005de596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de598: je 0x5de59e */ if (fZ) goto L_005de59e;
L_005de59a:; BB(0x005de59a);
    /* 005de59a: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de59d: ret  */ FN_RET(0x005de590); r_esp += 4; return;
L_005de59e:; BB(0x005de59e);
    /* 005de59e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de5a1: mov eax, ecx */ r_eax = r_ecx;
    /* 005de5a3: ret  */ FN_RET(0x005de590); r_esp += 4; return;
}

void f_005de5a4(void) /* sub_5DE5A4 */
{
    FN_ENTER(0x005de5a4);
    /* 005de5a4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de5a7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005de5ab: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 005de5af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5b0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5de5b5u); f_0068d5a8();
    /* 005de5b5: mov edx, eax */ r_edx = r_eax;
    /* 005de5b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de5ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de5bc: je 0x5de65d */ if (fZ) goto L_005de65d;
L_005de5c2:; BB(0x005de5c2);
    /* 005de5c2: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005de5c6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005de5ca: mov esi, edx */ r_esi = r_edx;
    /* 005de5cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de5ce: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005de5d2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005de5d6: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005de5d9: mov ebp, eax */ r_ebp = r_eax;
L_005de5db:; BB(0x005de5db);
    /* 005de5db: movsx ecx, word ptr [edi + ebp*2 + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+r_ebp*2+0x4u));
    /* 005de5e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5e1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5de5e6u); f_0068d5a8();
    /* 005de5e6: mov ebx, eax */ r_ebx = r_eax;
    /* 005de5e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de5eb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de5ed: je 0x5de646 */ if (fZ) goto L_005de646;
L_005de5ef:; BB(0x005de5ef);
    /* 005de5ef: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005de5f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005de5f3: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x5de5f9u); call_ind(t); }
    /* 005de5f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de5fb: jne 0x5de646 */ if (!fZ) goto L_005de646;
L_005de5fd:; BB(0x005de5fd);
    /* 005de5fd: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 005de603: cmp eax, dword ptr [ebx + 0x3f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de609: jne 0x5de646 */ if (!fZ) goto L_005de646;
L_005de60b:; BB(0x005de60b);
    /* 005de60b: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 005de612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de613: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005de615: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x5de61au); f_00770b58();
    /* 005de61a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5de61fu); f_00807d60();
    /* 005de61f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de621: je 0x5de646 */ if (fZ) goto L_005de646;
L_005de623:; BB(0x005de623);
    /* 005de623: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005de629: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de62b: jne 0x5de638 */ if (!fZ) goto L_005de638;
L_005de62d:; BB(0x005de62d);
    /* 005de62d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005de62f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de630: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5de635u); f_0050b510();
    /* 005de635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005de638:; BB(0x005de638);
    /* 005de638: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 005de63d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de63e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5de643u); f_0050b510();
    /* 005de643: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005de646:; BB(0x005de646);
    /* 005de646: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005de649: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de64c: jl 0x5de5db */ if ((fS!=fO)) goto L_005de5db;
L_005de64e:; BB(0x005de64e);
    /* 005de64e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005de652: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005de656: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005de65a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005de65d:; BB(0x005de65d);
    /* 005de65d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de660: ret  */ FN_RET(0x005de5a4); r_esp += 4; return;
}

void f_005de664(void) /* sub_5DE664 */
{
    FN_ENTER(0x005de664);
    /* 005de664: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005de665: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de668: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005de66c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de66e: je 0x5de6d0 */ if (fZ) goto L_005de6d0;
L_005de670:; BB(0x005de670);
    /* 005de670: mov ecx, edi */ r_ecx = r_edi;
    /* 005de672: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x5de677u); f_007ba9d8();
    /* 005de677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de679: je 0x5de6d0 */ if (fZ) goto L_005de6d0;
L_005de67b:; BB(0x005de67b);
    /* 005de67b: mov ecx, dword ptr [edi + 0x45c] */ r_ecx = R32((u32)(r_edi+0x45cu));
    /* 005de681: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de683: je 0x5de6d0 */ if (fZ) goto L_005de6d0;
L_005de685:; BB(0x005de685);
    /* 005de685: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005de687: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005de689: call 0x7a401c */ r_esp -= 4; W32(r_esp, 0x5de68eu); f_007a401c();
    /* 005de68e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de690: je 0x5de6d0 */ if (fZ) goto L_005de6d0;
L_005de692:; BB(0x005de692);
    /* 005de692: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005de696: mov byte ptr [esp], 0x66 */ W8((u32)(r_esp), 0x66u);
    /* 005de69a: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005de69f: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 005de6a4: movzx edi, word ptr [eax + 0xa0] */ r_edi = (u32)R16((u32)(r_eax+0xa0u));
    /* 005de6ab: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 005de6b0: movzx ecx, word ptr [eax + 0xac] */ r_ecx = (u32)R16((u32)(r_eax+0xacu));
    /* 005de6b7: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 005de6bc: movzx eax, word ptr [eax + 0xb8] */ r_eax = (u32)R16((u32)(r_eax+0xb8u));
    /* 005de6c3: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 005de6c8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005de6cb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x5de6d0u); f_008003e0();
L_005de6d0:; BB(0x005de6d0);
    /* 005de6d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de6d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005de6d4: ret  */ FN_RET(0x005de664); r_esp += 4; return;
}

void f_005de6d8(void) /* sub_5DE6D8 */
{
    FN_ENTER(0x005de6d8);
    /* 005de6d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de6d9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de6dc: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005de6e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de6e2: je 0x5de7a3 */ if (fZ) goto L_005de7a3;
L_005de6e8:; BB(0x005de6e8);
    /* 005de6e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005de6ea: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x5de6efu); f_007ba9d8();
    /* 005de6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de6f1: je 0x5de7a3 */ if (fZ) goto L_005de7a3;
L_005de6f7:; BB(0x005de6f7);
    /* 005de6f7: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 005de6fb: mov byte ptr [esp], 0x66 */ W8((u32)(r_esp), 0x66u);
    /* 005de6ff: mov edx, 1 */ r_edx = 0x1u;
    /* 005de704: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005de706: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 005de70b: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 005de710: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de712: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 005de716: mov esi, ebx */ r_esi = r_ebx;
    /* 005de718: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005de71c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 005de720: mov ebp, edx */ r_ebp = r_edx;
    /* 005de722: mov ebx, ecx */ r_ebx = r_ecx;
L_005de724:; BB(0x005de724);
    /* 005de724: movsx edi, word ptr [esp + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 005de729: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de72b: je 0x5de785 */ if (fZ) goto L_005de785;
L_005de72d:; BB(0x005de72d);
    /* 005de72d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de72e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5de733u); f_0068d5a8();
    /* 005de733: mov edi, eax */ r_edi = r_eax;
    /* 005de735: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de738: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de73a: je 0x5de776 */ if (fZ) goto L_005de776;
L_005de73c:; BB(0x005de73c);
    /* 005de73c: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005de73f: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005de742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de743: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de744: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5de749u); f_007a9180();
    /* 005de749: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de74c: fcomp dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); FPOP();
    /* 005de750: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005de752: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005de753: jb 0x5de766 */ if (fC) goto L_005de766;
L_005de755:; BB(0x005de755);
    /* 005de755: mov edi, ebp */ r_edi = r_ebp;
    /* 005de757: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005de75a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de75f: mov word ptr [esp + edi*2 + 4], ax */ W16((u32)(r_esp+r_edi*2+0x4u), (u16)r_eax);
    /* 005de764: jmp 0x5de785 */ goto L_005de785;
L_005de766:; BB(0x005de766);
    /* 005de766: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005de76a: mov edi, ebp */ r_edi = r_ebp;
    /* 005de76c: mov word ptr [esp + edi*2 + 4], ax */ W16((u32)(r_esp+r_edi*2+0x4u), (u16)r_eax);
    /* 005de771: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005de774: jmp 0x5de785 */ goto L_005de785;
L_005de776:; BB(0x005de776);
    /* 005de776: mov edi, ebp */ r_edi = r_ebp;
    /* 005de778: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005de77b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005de780: mov word ptr [esp + edi*2 + 4], ax */ W16((u32)(r_esp+r_edi*2+0x4u), (u16)r_eax);
L_005de785:; BB(0x005de785);
    /* 005de785: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005de788: mov eax, ebx */ r_eax = r_ebx;
    /* 005de78a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de78d: jl 0x5de724 */ if ((fS!=fO)) goto L_005de724;
L_005de78f:; BB(0x005de78f);
    /* 005de78f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005de793: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005de797: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005de79b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005de79e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x5de7a3u); f_008003e0();
L_005de7a3:; BB(0x005de7a3);
    /* 005de7a3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005de7a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005de7a7: ret  */ FN_RET(0x005de6d8); r_esp += 4; return;
}

void f_005de7d4(void) /* sub_5DE7D4 */
{
    FN_ENTER(0x005de7d4);
    /* 005de7d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005de7d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005de7d9: call 0x5de7f8 */ r_esp -= 4; W32(r_esp, 0x5de7deu); f_005de7f8();
    /* 005de7de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005de7e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de7e4: jne 0x5de7ea */ if (!fZ) goto L_005de7ea;
L_005de7e6:; BB(0x005de7e6);
    /* 005de7e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005de7e7: ret 4 */ FN_RET(0x005de7d4); r_esp += 8; return;
L_005de7ea:; BB(0x005de7ea);
    /* 005de7ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5de7f0u); f_005c2f74();
    /* 005de7f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de7f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005de7f2: ret 4 */ FN_RET(0x005de7d4); r_esp += 8; return;
}

void f_005de7f8(void) /* sub_5DE7F8 */
{
    FN_ENTER(0x005de7f8);
    /* 005de7f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de7f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005de7fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de7fd: push 0x8dad3a */ { u32 v = 0x8dad3au; r_esp -= 4; W32(r_esp, v); }
    /* 005de802: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de809: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005de810: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de813: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005de816: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005de819: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005de81c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005de81f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005de822: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de825: mov dword ptr [eax], 0xb0e160 */ W32((u32)(r_eax), 0xb0e160u);
    /* 005de82b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005de82e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de831: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005de837: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005de83e: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5de843u); f_005c2e50();
    /* 005de843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de846: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de84d: mov esp, ebp */ r_esp = r_ebp;
    /* 005de84f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de850: ret  */ FN_RET(0x005de7f8); r_esp += 4; return;
}

void f_005de854(void) /* sub_5DE854 */
{
    FN_ENTER(0x005de854);
    /* 005de854: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de855: mov esi, ecx */ r_esi = r_ecx;
    /* 005de857: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005de85e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de861: je 0x5de88b */ if (fZ) goto L_005de88b;
L_005de863:; BB(0x005de863);
    /* 005de863: mov ecx, esi */ r_ecx = r_esi;
    /* 005de865: call 0x5de578 */ r_esp -= 4; W32(r_esp, 0x5de86au); f_005de578();
    /* 005de86a: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005de870: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005de873: mov edx, eax */ r_edx = r_eax;
    /* 005de875: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005de877: imul edx, dword ptr [0xa9cd68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(0xa9cd68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005de87e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de880: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005de883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de884: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5de889u); f_007773d4();
    /* 005de889: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de88a: ret  */ FN_RET(0x005de854); r_esp += 4; return;
L_005de88b:; BB(0x005de88b);
    /* 005de88b: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005de891: movsx eax, word ptr [ecx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005de898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de899: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5de89eu); f_007773d4();
    /* 005de89e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de89f: ret  */ FN_RET(0x005de854); r_esp += 4; return;
}

void f_005de8a0(void) /* sub_5DE8A0 */
{
    FN_ENTER(0x005de8a0);
    /* 005de8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005de8a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de8a5: push 0x8dad60 */ { u32 v = 0x8dad60u; r_esp -= 4; W32(r_esp, v); }
    /* 005de8aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de8b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005de8b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de8bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005de8be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005de8c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005de8c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005de8c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de8ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de8cc: je 0x5de923 */ if (fZ) goto L_005de923;
L_005de8ce:; BB(0x005de8ce);
    /* 005de8ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005de8d5: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005de8da: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5de8dfu); f_005caba4();
    /* 005de8df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de8e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005de8e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de8e5: je 0x5de91f */ if (fZ) goto L_005de91f;
L_005de8e7:; BB(0x005de8e7);
    /* 005de8e7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005de8ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de8f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de8f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de8fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de8fc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de902: call 0x5de934 */ r_esp -= 4; W32(r_esp, 0x5de907u); f_005de934();
    /* 005de907: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de90a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005de911:; BB(0x005de911);
    /* 005de911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de91b: mov esp, ebp */ r_esp = r_ebp;
    /* 005de91d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de91e: ret  */ FN_RET(0x005de8a0); r_esp += 4; return;
L_005de91f:; BB(0x005de91f);
    /* 005de91f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de921: jmp 0x5de911 */ goto L_005de911;
L_005de923:; BB(0x005de923);
    /* 005de923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de925: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de928: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de92f: mov esp, ebp */ r_esp = r_ebp;
    /* 005de931: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de932: ret  */ FN_RET(0x005de8a0); r_esp += 4; return;
}

void f_005de934(void) /* sub_5DE934 */
{
    FN_ENTER(0x005de934);
    /* 005de934: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de935: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005de937: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de93b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005de93f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005de941: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5de946u); f_005de2d8();
    /* 005de946: mov dword ptr [ebp], 0xb0e160 */ W32((u32)(r_ebp), 0xb0e160u);
    /* 005de94d: mov eax, ebp */ r_eax = r_ebp;
    /* 005de94f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de950: ret 8 */ FN_RET(0x005de934); r_esp += 12; return;
}

void f_005de954(void) /* sub_5DE954 */
{
    FN_ENTER(0x005de954);
    /* 005de954: mov dword ptr [0xa8db38], 0x3f800000 */ W32((u32)(0xa8db38u), 0x3f800000u);
    /* 005de95e: mov dword ptr [0xa8db3c], 0x41000000 */ W32((u32)(0xa8db3cu), 0x41000000u);
    /* 005de968: mov dword ptr [0xa8db40], 0x3fc00000 */ W32((u32)(0xa8db40u), 0x3fc00000u);
    /* 005de972: ret  */ FN_RET(0x005de954); r_esp += 4; return;
}

void f_005de974(void) /* sub_5DE974 */
{
    FN_ENTER(0x005de974);
    /* 005de974: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de975: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005de977: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005de979: call 0x5de998 */ r_esp -= 4; W32(r_esp, 0x5de97eu); f_005de998();
    /* 005de97e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005de982: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005de984: jne 0x5de98a */ if (!fZ) goto L_005de98a;
L_005de986:; BB(0x005de986);
    /* 005de986: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005de987: ret 4 */ FN_RET(0x005de974); r_esp += 8; return;
L_005de98a:; BB(0x005de98a);
    /* 005de98a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005de98b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5de990u); f_005c2f74();
    /* 005de990: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de991: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005de992: ret 4 */ FN_RET(0x005de974); r_esp += 8; return;
}

void f_005de998(void) /* sub_5DE998 */
{
    FN_ENTER(0x005de998);
    /* 005de998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de999: mov ebp, esp */ r_ebp = r_esp;
    /* 005de99b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de99d: push 0x8dad8a */ { u32 v = 0x8dad8au; r_esp -= 4; W32(r_esp, v); }
    /* 005de9a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de9a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005de9b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de9b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005de9b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005de9b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005de9bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005de9bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005de9c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de9c5: mov dword ptr [eax], 0xb0e280 */ W32((u32)(r_eax), 0xb0e280u);
    /* 005de9cb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005de9ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de9d1: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005de9d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005de9de: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5de9e3u); f_005c2e50();
    /* 005de9e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de9e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de9ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005de9ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de9f0: ret  */ FN_RET(0x005de998); r_esp += 4; return;
}

void f_005de9f4(void) /* sub_5DE9F4 */
{
    FN_ENTER(0x005de9f4);
    /* 005de9f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de9f5: mov esi, ecx */ r_esi = r_ecx;
    /* 005de9f7: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005de9fd: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dea03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dea05: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5dea0au); f_0069792c();
    /* 005dea0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dea0c: je 0x5dea1d */ if (fZ) goto L_005dea1d;
L_005dea0e:; BB(0x005dea0e);
    /* 005dea0e: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005dea15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dea16: mov ecx, eax */ r_ecx = r_eax;
    /* 005dea18: call 0x5db28c */ r_esp -= 4; W32(r_esp, 0x5dea1du); f_005db28c();
L_005dea1d:; BB(0x005dea1d);
    /* 005dea1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dea1e: ret  */ FN_RET(0x005de9f4); r_esp += 4; return;
}

void f_005dea20(void) /* sub_5DEA20 */
{
    FN_ENTER(0x005dea20);
    /* 005dea20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dea21: mov ebp, esp */ r_ebp = r_esp;
    /* 005dea23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dea25: push 0x8dadb0 */ { u32 v = 0x8dadb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dea2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dea30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dea31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dea38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dea3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dea3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dea41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dea44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dea47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dea4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dea4c: je 0x5deaa3 */ if (fZ) goto L_005deaa3;
L_005dea4e:; BB(0x005dea4e);
    /* 005dea4e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dea55: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dea5a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dea5fu); f_005caba4();
    /* 005dea5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dea60: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dea63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dea65: je 0x5dea9f */ if (fZ) goto L_005dea9f;
L_005dea67:; BB(0x005dea67);
    /* 005dea67: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dea6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dea75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dea78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dea7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dea7c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dea82: call 0x5deab4 */ r_esp -= 4; W32(r_esp, 0x5dea87u); f_005deab4();
    /* 005dea87: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dea8a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dea91:; BB(0x005dea91);
    /* 005dea91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dea94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dea9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005dea9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dea9e: ret  */ FN_RET(0x005dea20); r_esp += 4; return;
L_005dea9f:; BB(0x005dea9f);
    /* 005dea9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deaa1: jmp 0x5dea91 */ goto L_005dea91;
L_005deaa3:; BB(0x005deaa3);
    /* 005deaa3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deaa5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005deaa8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005deaaf: mov esp, ebp */ r_esp = r_ebp;
    /* 005deab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deab2: ret  */ FN_RET(0x005dea20); r_esp += 4; return;
}

void f_005deab4(void) /* sub_5DEAB4 */
{
    FN_ENTER(0x005deab4);
    /* 005deab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deab5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005deab7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005deabb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005deabf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005deac1: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5deac6u); f_005de2d8();
    /* 005deac6: mov dword ptr [ebp], 0xb0e280 */ W32((u32)(r_ebp), 0xb0e280u);
    /* 005deacd: mov eax, ebp */ r_eax = r_ebp;
    /* 005deacf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dead0: ret 8 */ FN_RET(0x005deab4); r_esp += 12; return;
}

void f_005dead4(void) /* sub_5DEAD4 */
{
    FN_ENTER(0x005dead4);
    /* 005dead4: mov dword ptr [0xa8db44], 0x3f800000 */ W32((u32)(0xa8db44u), 0x3f800000u);
    /* 005deade: mov dword ptr [0xa8db48], 0x41000000 */ W32((u32)(0xa8db48u), 0x41000000u);
    /* 005deae8: mov dword ptr [0xa8db4c], 0x3fc00000 */ W32((u32)(0xa8db4cu), 0x3fc00000u);
    /* 005deaf2: ret  */ FN_RET(0x005dead4); r_esp += 4; return;
}

void f_005deaf4(void) /* sub_5DEAF4 */
{
    FN_ENTER(0x005deaf4);
    /* 005deaf4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005deaf5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005deaf7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005deaf9: call 0x5deb18 */ r_esp -= 4; W32(r_esp, 0x5deafeu); f_005deb18();
    /* 005deafe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005deb02: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deb04: jne 0x5deb0a */ if (!fZ) goto L_005deb0a;
L_005deb06:; BB(0x005deb06);
    /* 005deb06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005deb07: ret 4 */ FN_RET(0x005deaf4); r_esp += 8; return;
L_005deb0a:; BB(0x005deb0a);
    /* 005deb0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005deb0b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5deb10u); f_005c2f74();
    /* 005deb10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005deb11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005deb12: ret 4 */ FN_RET(0x005deaf4); r_esp += 8; return;
}

void f_005deb18(void) /* sub_5DEB18 */
{
    FN_ENTER(0x005deb18);
    /* 005deb18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deb19: mov ebp, esp */ r_ebp = r_esp;
    /* 005deb1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005deb1d: push 0x8dadda */ { u32 v = 0x8daddau; r_esp -= 4; W32(r_esp, v); }
    /* 005deb22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005deb28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deb29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005deb30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005deb33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005deb36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005deb39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005deb3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005deb3f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005deb42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deb45: mov dword ptr [eax], 0xb0e3a0 */ W32((u32)(r_eax), 0xb0e3a0u);
    /* 005deb4b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005deb4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deb51: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005deb57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005deb5e: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5deb63u); f_005c2e50();
    /* 005deb63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005deb66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005deb6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005deb6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deb70: ret  */ FN_RET(0x005deb18); r_esp += 4; return;
}

void f_005deb74(void) /* sub_5DEB74 */
{
    FN_ENTER(0x005deb74);
    /* 005deb74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deb75: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005deb77: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005deb7d: call 0x7ba9d8 */ r_esp -= 4; W32(r_esp, 0x5deb82u); f_007ba9d8();
    /* 005deb82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deb84: je 0x5debc6 */ if (fZ) goto L_005debc6;
L_005deb86:; BB(0x005deb86);
    /* 005deb86: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005deb8c: mov ecx, dword ptr [eax + 0x45c] */ r_ecx = R32((u32)(r_eax+0x45cu));
    /* 005deb92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deb94: je 0x5debc6 */ if (fZ) goto L_005debc6;
L_005deb96:; BB(0x005deb96);
    /* 005deb96: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb98: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb9a: call 0x7a401c */ r_esp -= 4; W32(r_esp, 0x5deb9fu); f_007a401c();
    /* 005deb9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deba1: je 0x5debc6 */ if (fZ) goto L_005debc6;
L_005deba3:; BB(0x005deba3);
    /* 005deba3: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 005debaa: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005debb0: je 0x5debc6 */ if (fZ) goto L_005debc6;
L_005debb2:; BB(0x005debb2);
    /* 005debb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005debb3: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005debb9: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005debbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005debbe: call 0x69a18c */ r_esp -= 4; W32(r_esp, 0x5debc3u); f_0069a18c();
    /* 005debc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005debc6:; BB(0x005debc6);
    /* 005debc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005debc7: ret  */ FN_RET(0x005deb74); r_esp += 4; return;
}

void f_005debc8(void) /* sub_5DEBC8 */
{
    FN_ENTER(0x005debc8);
    /* 005debc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005debc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005debcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005debcd: push 0x8dae00 */ { u32 v = 0x8dae00u; r_esp -= 4; W32(r_esp, v); }
    /* 005debd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005debd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005debd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005debe0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005debe3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005debe6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005debe9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005debec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005debef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005debf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005debf4: je 0x5dec4b */ if (fZ) goto L_005dec4b;
L_005debf6:; BB(0x005debf6);
    /* 005debf6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005debfd: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dec02: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dec07u); f_005caba4();
    /* 005dec07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dec08: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dec0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dec0d: je 0x5dec47 */ if (fZ) goto L_005dec47;
L_005dec0f:; BB(0x005dec0f);
    /* 005dec0f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dec16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dec1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dec20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dec23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dec24: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dec2a: call 0x5dec5c */ r_esp -= 4; W32(r_esp, 0x5dec2fu); f_005dec5c();
    /* 005dec2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dec32: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dec39:; BB(0x005dec39);
    /* 005dec39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dec43: mov esp, ebp */ r_esp = r_ebp;
    /* 005dec45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dec46: ret  */ FN_RET(0x005debc8); r_esp += 4; return;
L_005dec47:; BB(0x005dec47);
    /* 005dec47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dec49: jmp 0x5dec39 */ goto L_005dec39;
L_005dec4b:; BB(0x005dec4b);
    /* 005dec4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dec4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dec57: mov esp, ebp */ r_esp = r_ebp;
    /* 005dec59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dec5a: ret  */ FN_RET(0x005debc8); r_esp += 4; return;
}

void f_005dec5c(void) /* sub_5DEC5C */
{
    FN_ENTER(0x005dec5c);
    /* 005dec5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dec5d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dec5f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dec63: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dec67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dec69: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5dec6eu); f_005de2d8();
    /* 005dec6e: mov dword ptr [ebp], 0xb0e3a0 */ W32((u32)(r_ebp), 0xb0e3a0u);
    /* 005dec75: mov eax, ebp */ r_eax = r_ebp;
    /* 005dec77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dec78: ret 8 */ FN_RET(0x005dec5c); r_esp += 12; return;
}

void f_005deca8(void) /* sub_5DECA8 */
{
    FN_ENTER(0x005deca8);
    /* 005deca8: mov dword ptr [0xa8db60], 0x3f800000 */ W32((u32)(0xa8db60u), 0x3f800000u);
    /* 005decb2: mov dword ptr [0xa8db64], 0x41000000 */ W32((u32)(0xa8db64u), 0x41000000u);
    /* 005decbc: mov dword ptr [0xa8db68], 0x3fc00000 */ W32((u32)(0xa8db68u), 0x3fc00000u);
    /* 005decc6: ret  */ FN_RET(0x005deca8); r_esp += 4; return;
}

void f_005decc8(void) /* sub_5DECC8 */
{
    FN_ENTER(0x005decc8);
    /* 005decc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005decc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005deccb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005deccd: call 0x5decec */ r_esp -= 4; W32(r_esp, 0x5decd2u); f_005decec();
    /* 005decd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005decd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005decd8: jne 0x5decde */ if (!fZ) goto L_005decde;
L_005decda:; BB(0x005decda);
    /* 005decda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005decdb: ret 4 */ FN_RET(0x005decc8); r_esp += 8; return;
L_005decde:; BB(0x005decde);
    /* 005decde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005decdf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dece4u); f_005c2f74();
    /* 005dece4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dece5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dece6: ret 4 */ FN_RET(0x005decc8); r_esp += 8; return;
}

void f_005decec(void) /* sub_5DECEC */
{
    FN_ENTER(0x005decec);
    /* 005decec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deced: mov ebp, esp */ r_ebp = r_esp;
    /* 005decef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005decf1: push 0x8dae2a */ { u32 v = 0x8dae2au; r_esp -= 4; W32(r_esp, v); }
    /* 005decf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005decfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005decfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ded04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ded07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ded0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ded0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ded10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ded13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ded16: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ded19: mov dword ptr [eax], 0xb0e4c0 */ W32((u32)(r_eax), 0xb0e4c0u);
    /* 005ded1f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ded22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ded25: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005ded2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ded32: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5ded37u); f_005c2e50();
    /* 005ded37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ded3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ded41: mov esp, ebp */ r_esp = r_ebp;
    /* 005ded43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ded44: ret  */ FN_RET(0x005decec); r_esp += 4; return;
}

void f_005ded48(void) /* sub_5DED48 */
{
    FN_ENTER(0x005ded48);
    /* 005ded48: push dword ptr [ecx + 0xd8] */ { u32 v = R32((u32)(r_ecx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ded4e: call 0x5c46f8 */ r_esp -= 4; W32(r_esp, 0x5ded53u); f_005c46f8();
    /* 005ded53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ded54: ret  */ FN_RET(0x005ded48); r_esp += 4; return;
}

void f_005ded58(void) /* sub_5DED58 */
{
    FN_ENTER(0x005ded58);
    /* 005ded58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ded59: mov ebp, esp */ r_ebp = r_esp;
    /* 005ded5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ded5d: push 0x8dae50 */ { u32 v = 0x8dae50u; r_esp -= 4; W32(r_esp, v); }
    /* 005ded62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ded68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ded70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ded73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ded76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ded79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ded7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ded7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ded82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded84: je 0x5deddb */ if (fZ) goto L_005deddb;
L_005ded86:; BB(0x005ded86);
    /* 005ded86: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ded8d: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ded92: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ded97u); f_005caba4();
    /* 005ded97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ded98: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ded9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded9d: je 0x5dedd7 */ if (fZ) goto L_005dedd7;
L_005ded9f:; BB(0x005ded9f);
    /* 005ded9f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005deda6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dedad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dedb0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dedb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dedb4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dedba: call 0x5dedec */ r_esp -= 4; W32(r_esp, 0x5dedbfu); f_005dedec();
    /* 005dedbf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dedc2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dedc9:; BB(0x005dedc9);
    /* 005dedc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dedcc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dedd3: mov esp, ebp */ r_esp = r_ebp;
    /* 005dedd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dedd6: ret  */ FN_RET(0x005ded58); r_esp += 4; return;
L_005dedd7:; BB(0x005dedd7);
    /* 005dedd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dedd9: jmp 0x5dedc9 */ goto L_005dedc9;
L_005deddb:; BB(0x005deddb);
    /* 005deddb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005deddd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dede0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dede7: mov esp, ebp */ r_esp = r_ebp;
    /* 005dede9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dedea: ret  */ FN_RET(0x005ded58); r_esp += 4; return;
}

void f_005dedec(void) /* sub_5DEDEC */
{
    FN_ENTER(0x005dedec);
    /* 005dedec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005deded: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dedef: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dedf3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dedf7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dedf9: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5dedfeu); f_005de2d8();
    /* 005dedfe: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 005dee04: mov dword ptr [ebx], 0xb0e4c0 */ W32((u32)(r_ebx), 0xb0e4c0u);
    /* 005dee0a: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dee0d: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 005dee13: mov eax, ebx */ r_eax = r_ebx;
    /* 005dee15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dee16: ret 8 */ FN_RET(0x005dedec); r_esp += 12; return;
}

void f_005dee1c(void) /* sub_5DEE1C */
{
    FN_ENTER(0x005dee1c);
    /* 005dee1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dee1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dee21: call 0x5dee40 */ r_esp -= 4; W32(r_esp, 0x5dee26u); f_005dee40();
    /* 005dee26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dee2a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dee2c: jne 0x5dee32 */ if (!fZ) goto L_005dee32;
L_005dee2e:; BB(0x005dee2e);
    /* 005dee2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dee2f: ret 4 */ FN_RET(0x005dee1c); r_esp += 8; return;
L_005dee32:; BB(0x005dee32);
    /* 005dee32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee33: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dee38u); f_005c2f74();
    /* 005dee38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dee39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dee3a: ret 4 */ FN_RET(0x005dee1c); r_esp += 8; return;
}

void f_005dee40(void) /* sub_5DEE40 */
{
    FN_ENTER(0x005dee40);
    /* 005dee40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dee41: mov ebp, esp */ r_ebp = r_esp;
    /* 005dee43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dee45: push 0x8dae7a */ { u32 v = 0x8dae7au; r_esp -= 4; W32(r_esp, v); }
    /* 005dee4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dee50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dee51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dee58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dee5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dee5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dee61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dee64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dee67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dee6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dee6d: mov dword ptr [eax], 0xb0e5e0 */ W32((u32)(r_eax), 0xb0e5e0u);
    /* 005dee73: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dee76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dee79: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005dee7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dee86: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5dee8bu); f_005c2e50();
    /* 005dee8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dee8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dee95: mov esp, ebp */ r_esp = r_ebp;
    /* 005dee97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dee98: ret  */ FN_RET(0x005dee40); r_esp += 4; return;
}

void f_005dee9c(void) /* sub_5DEE9C */
{
    FN_ENTER(0x005dee9c);
    /* 005dee9c: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005deea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deea5: jne 0x5deeb6 */ if (!fZ) goto L_005deeb6;
L_005deea7:; BB(0x005deea7);
    /* 005deea7: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005deead: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005deeaf: call dword ptr [eax + 0xdc] */ { u32 t = R32((u32)(r_eax+0xdcu)); r_esp -= 4; W32(r_esp, 0x5deeb5u); call_ind(t); }
    /* 005deeb5: ret  */ FN_RET(0x005dee9c); r_esp += 4; return;
L_005deeb6:; BB(0x005deeb6);
    /* 005deeb6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005deeb9: jne 0x5deec9 */ if (!fZ) goto L_005deec9;
L_005deebb:; BB(0x005deebb);
    /* 005deebb: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005deec1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005deec3: call dword ptr [eax + 0xe0] */ { u32 t = R32((u32)(r_eax+0xe0u)); r_esp -= 4; W32(r_esp, 0x5deec9u); call_ind(t); }
L_005deec9:; BB(0x005deec9);
    /* 005deec9: ret  */ FN_RET(0x005dee9c); r_esp += 4; return;
}

void f_005deecc(void) /* sub_5DEECC */
{
    FN_ENTER(0x005deecc);
    /* 005deecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deecd: mov ebp, esp */ r_ebp = r_esp;
    /* 005deecf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005deed1: push 0x8daea0 */ { u32 v = 0x8daea0u; r_esp -= 4; W32(r_esp, v); }
    /* 005deed6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005deedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deedd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005deee4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005deee7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005deeea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005deeed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005deef0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005deef3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005deef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deef8: je 0x5def4f */ if (fZ) goto L_005def4f;
L_005deefa:; BB(0x005deefa);
    /* 005deefa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005def01: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005def06: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5def0bu); f_005caba4();
    /* 005def0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005def0c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005def0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005def11: je 0x5def4b */ if (fZ) goto L_005def4b;
L_005def13:; BB(0x005def13);
    /* 005def13: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005def1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005def21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005def24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005def27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005def28: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005def2e: call 0x5def60 */ r_esp -= 4; W32(r_esp, 0x5def33u); f_005def60();
    /* 005def33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005def36: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005def3d:; BB(0x005def3d);
    /* 005def3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005def40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005def47: mov esp, ebp */ r_esp = r_ebp;
    /* 005def49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def4a: ret  */ FN_RET(0x005deecc); r_esp += 4; return;
L_005def4b:; BB(0x005def4b);
    /* 005def4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005def4d: jmp 0x5def3d */ goto L_005def3d;
L_005def4f:; BB(0x005def4f);
    /* 005def4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005def51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005def54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005def5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005def5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def5e: ret  */ FN_RET(0x005deecc); r_esp += 4; return;
}

void f_005def60(void) /* sub_5DEF60 */
{
    FN_ENTER(0x005def60);
    /* 005def60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def61: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005def63: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005def67: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005def6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005def6d: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5def72u); f_005de2d8();
    /* 005def72: mov dword ptr [ebp], 0xb0e5e0 */ W32((u32)(r_ebp), 0xb0e5e0u);
    /* 005def79: mov eax, ebp */ r_eax = r_ebp;
    /* 005def7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def7c: ret 8 */ FN_RET(0x005def60); r_esp += 12; return;
}

void f_005def80(void) /* sub_5DEF80 */
{
    FN_ENTER(0x005def80);
    /* 005def80: mov dword ptr [0xa8db6c], 0x3f800000 */ W32((u32)(0xa8db6cu), 0x3f800000u);
    /* 005def8a: mov dword ptr [0xa8db70], 0x41000000 */ W32((u32)(0xa8db70u), 0x41000000u);
    /* 005def94: mov dword ptr [0xa8db74], 0x3fc00000 */ W32((u32)(0xa8db74u), 0x3fc00000u);
    /* 005def9e: ret  */ FN_RET(0x005def80); r_esp += 4; return;
}

void f_005defa0(void) /* sub_5DEFA0 */
{
    FN_ENTER(0x005defa0);
    /* 005defa0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005defa1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005defa3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005defa5: call 0x5defc4 */ r_esp -= 4; W32(r_esp, 0x5defaau); f_005defc4();
    /* 005defaa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005defae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005defb0: jne 0x5defb6 */ if (!fZ) goto L_005defb6;
L_005defb2:; BB(0x005defb2);
    /* 005defb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005defb3: ret 4 */ FN_RET(0x005defa0); r_esp += 8; return;
L_005defb6:; BB(0x005defb6);
    /* 005defb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005defb7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5defbcu); f_005c2f74();
    /* 005defbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005defbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005defbe: ret 4 */ FN_RET(0x005defa0); r_esp += 8; return;
}

void f_005defc4(void) /* sub_5DEFC4 */
{
    FN_ENTER(0x005defc4);
    /* 005defc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005defc5: mov ebp, esp */ r_ebp = r_esp;
    /* 005defc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005defc9: push 0x8daeca */ { u32 v = 0x8daecau; r_esp -= 4; W32(r_esp, v); }
    /* 005defce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005defd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005defd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005defdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005defdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005defe2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005defe5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005defe8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005defeb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005defee: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deff1: mov dword ptr [eax], 0xb0e700 */ W32((u32)(r_eax), 0xb0e700u);
    /* 005deff7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005deffa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deffd: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df003: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df00a: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df00fu); f_005c2e50();
    /* 005df00f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df012: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df019: mov esp, ebp */ r_esp = r_ebp;
    /* 005df01b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df01c: ret  */ FN_RET(0x005defc4); r_esp += 4; return;
}

