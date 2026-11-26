#include "protos.h"

void f_005ec008(void) /* sub_5EC008 */
{
    FN_ENTER(0x005ec008);
    /* 005ec008: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec009: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ec00b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ec00d: call 0x5ec02c */ r_esp -= 4; W32(r_esp, 0x5ec012u); f_005ec02c();
    /* 005ec012: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ec016: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec018: jne 0x5ec01e */ if (!fZ) goto L_005ec01e;
L_005ec01a:; BB(0x005ec01a);
    /* 005ec01a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec01b: ret 4 */ FN_RET(0x005ec008); r_esp += 8; return;
L_005ec01e:; BB(0x005ec01e);
    /* 005ec01e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec01f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ec024u); f_005c2f74();
    /* 005ec024: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec025: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec026: ret 4 */ FN_RET(0x005ec008); r_esp += 8; return;
}

void f_005ec02c(void) /* sub_5EC02C */
{
    FN_ENTER(0x005ec02c);
    /* 005ec02c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec02d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec02f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec031: push 0x8dc140 */ { u32 v = 0x8dc140u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec036: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec03c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec03d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec044: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec047: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec04a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec04d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec050: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec053: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ec056: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec059: mov dword ptr [ecx], 0xb117c0 */ W32((u32)(r_ecx), 0xb117c0u);
    /* 005ec05f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ec066: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ec06bu); f_005e61c8();
    /* 005ec06b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec06e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec075: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec077: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec078: ret  */ FN_RET(0x005ec02c); r_esp += 4; return;
}

void f_005ec07c(void) /* sub_5EC07C */
{
    FN_ENTER(0x005ec07c);
    /* 005ec07c: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ec081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec084: je 0x5ec087 */ if (fZ) goto L_005ec087;
L_005ec086:; BB(0x005ec086);
    /* 005ec086: ret  */ FN_RET(0x005ec07c); r_esp += 4; return;
L_005ec087:; BB(0x005ec087);
    /* 005ec087: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec08d: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5ec092u); f_00831290();
    /* 005ec092: ret  */ FN_RET(0x005ec07c); r_esp += 4; return;
}

void f_005ec094(void) /* sub_5EC094 */
{
    FN_ENTER(0x005ec094);
    /* 005ec094: fld dword ptr [0x92d780] */ FPUSH(R_F32((u32)(0x92d780u)));
    /* 005ec09a: fld dword ptr [ecx + 0x244] */ FPUSH(R_F32((u32)(r_ecx+0x244u)));
    /* 005ec0a0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ec0a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ec0a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ec0a5: jae 0x5ec0cd */ if (!fC) goto L_005ec0cd;
L_005ec0a7:; BB(0x005ec0a7);
    /* 005ec0a7: fld dword ptr [0x92d77c] */ FPUSH(R_F32((u32)(0x92d77cu)));
    /* 005ec0ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005ec0af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ec0b1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005ec0b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ec0b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ec0b6: ja 0x5ec0c6 */ if ((!fC&&!fZ)) goto L_005ec0c6;
L_005ec0b8:; BB(0x005ec0b8);
    /* 005ec0b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ec0ba: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005ec0bf: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005ec0c5: ret  */ FN_RET(0x005ec094); r_esp += 4; return;
L_005ec0c6:; BB(0x005ec0c6);
    /* 005ec0c6: fstp dword ptr [ecx + 0x244] */ W_F32((u32)(r_ecx+0x244u), ST(0)); FPOP();
    /* 005ec0cc: ret  */ FN_RET(0x005ec094); r_esp += 4; return;
L_005ec0cd:; BB(0x005ec0cd);
    /* 005ec0cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ec0cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ec0d1: ret  */ FN_RET(0x005ec094); r_esp += 4; return;
}

void f_005ec0d4(void) /* sub_5EC0D4 */
{
    FN_ENTER(0x005ec0d4);
    /* 005ec0d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec0d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0d9: push 0x8dc168 */ { u32 v = 0x8dc168u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec0e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec0ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec0ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec0f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec0f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec0f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec0fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec0fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec100: je 0x5ec157 */ if (fZ) goto L_005ec157;
L_005ec102:; BB(0x005ec102);
    /* 005ec102: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ec109: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec10e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ec113u); f_005caba4();
    /* 005ec113: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec114: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ec117: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec119: je 0x5ec153 */ if (fZ) goto L_005ec153;
L_005ec11b:; BB(0x005ec11b);
    /* 005ec11b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ec122: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ec129: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec12c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec130: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec136: call 0x5ec168 */ r_esp -= 4; W32(r_esp, 0x5ec13bu); f_005ec168();
    /* 005ec13b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec13e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ec145:; BB(0x005ec145);
    /* 005ec145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec148: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec14f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec152: ret  */ FN_RET(0x005ec0d4); r_esp += 4; return;
L_005ec153:; BB(0x005ec153);
    /* 005ec153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec155: jmp 0x5ec145 */ goto L_005ec145;
L_005ec157:; BB(0x005ec157);
    /* 005ec157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec159: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec15c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec163: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec165: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec166: ret  */ FN_RET(0x005ec0d4); r_esp += 4; return;
}

void f_005ec168(void) /* sub_5EC168 */
{
    FN_ENTER(0x005ec168);
    /* 005ec168: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec169: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ec16b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec16f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec173: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec175: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ec17au); f_005e959c();
    /* 005ec17a: mov dword ptr [ebp], 0xb117c0 */ W32((u32)(r_ebp), 0xb117c0u);
    /* 005ec181: mov eax, ebp */ r_eax = r_ebp;
    /* 005ec183: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005ec18d: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005ec197: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005ec1a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec1a2: ret 8 */ FN_RET(0x005ec168); r_esp += 12; return;
}

void f_005ec1a8(void) /* sub_5EC1A8 */
{
    FN_ENTER(0x005ec1a8);
    /* 005ec1a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ec1ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ec1ad: call 0x5ec1cc */ r_esp -= 4; W32(r_esp, 0x5ec1b2u); f_005ec1cc();
    /* 005ec1b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ec1b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec1b8: jne 0x5ec1be */ if (!fZ) goto L_005ec1be;
L_005ec1ba:; BB(0x005ec1ba);
    /* 005ec1ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec1bb: ret 4 */ FN_RET(0x005ec1a8); r_esp += 8; return;
L_005ec1be:; BB(0x005ec1be);
    /* 005ec1be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ec1c4u); f_005c2f74();
    /* 005ec1c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec1c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec1c6: ret 4 */ FN_RET(0x005ec1a8); r_esp += 8; return;
}

void f_005ec1cc(void) /* sub_5EC1CC */
{
    FN_ENTER(0x005ec1cc);
    /* 005ec1cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec1cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1d1: push 0x8dc184 */ { u32 v = 0x8dc184u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec1dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec1dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec1e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec1e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec1ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec1ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec1f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec1f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ec1f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec1f9: mov dword ptr [ecx], 0xb11920 */ W32((u32)(r_ecx), 0xb11920u);
    /* 005ec1ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ec206: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ec20bu); f_005e61c8();
    /* 005ec20b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec20e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec215: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec217: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec218: ret  */ FN_RET(0x005ec1cc); r_esp += 4; return;
}

void f_005ec21c(void) /* sub_5EC21C */
{
    FN_ENTER(0x005ec21c);
    /* 005ec21c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ec21d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec21e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ec220: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec222: mov esi, dword ptr [ebp + 0xfc] */ r_esi = R32((u32)(r_ebp+0xfcu));
    /* 005ec228: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec22a: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ec22fu); f_005e6334();
    /* 005ec22f: movzx eax, byte ptr [ebp + 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005ec236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec238: jne 0x5ec278 */ if (!fZ) goto L_005ec278;
L_005ec23a:; BB(0x005ec23a);
    /* 005ec23a: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005ec240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec241: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec243: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec245: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ec24au); f_005e83c8();
    /* 005ec24a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec24c: mov eax, dword ptr [ebp + 0x198] */ r_eax = R32((u32)(r_ebp+0x198u));
    /* 005ec252: mov dword ptr [ebp + 0xfc], eax */ W32((u32)(r_ebp+0xfcu), r_eax);
    /* 005ec258: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec25a: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ec25fu); f_005e6334();
    /* 005ec25f: lea eax, [ebp + 0x24c] */ r_eax = (u32)(r_ebp+0x24cu);
    /* 005ec265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec266: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec268: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec26a: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ec26fu); f_005e83c8();
    /* 005ec26f: mov dword ptr [ebp + 0xfc], esi */ W32((u32)(r_ebp+0xfcu), r_esi);
    /* 005ec275: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec276: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ec277: ret  */ FN_RET(0x005ec21c); r_esp += 4; return;
L_005ec278:; BB(0x005ec278);
    /* 005ec278: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec27b: jne 0x5ec2b8 */ if (!fZ) goto L_005ec2b8;
L_005ec27d:; BB(0x005ec27d);
    /* 005ec27d: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005ec283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec284: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec286: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec288: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ec28du); f_005e83c8();
    /* 005ec28d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec28f: mov eax, dword ptr [ebp + 0x1ac] */ r_eax = R32((u32)(r_ebp+0x1acu));
    /* 005ec295: mov dword ptr [ebp + 0xfc], eax */ W32((u32)(r_ebp+0xfcu), r_eax);
    /* 005ec29b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec29d: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5ec2a2u); f_005e6334();
    /* 005ec2a2: lea eax, [ebp + 0x24c] */ r_eax = (u32)(r_ebp+0x24cu);
    /* 005ec2a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ec2ad: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ec2b2u); f_005e83c8();
    /* 005ec2b2: mov dword ptr [ebp + 0xfc], esi */ W32((u32)(r_ebp+0xfcu), r_esi);
L_005ec2b8:; BB(0x005ec2b8);
    /* 005ec2b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec2b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ec2ba: ret  */ FN_RET(0x005ec21c); r_esp += 4; return;
}

void f_005ec2bc(void) /* sub_5EC2BC */
{
    FN_ENTER(0x005ec2bc);
    /* 005ec2bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2bd: mov edi, ecx */ r_edi = r_ecx;
    /* 005ec2bf: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005ec2c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec2c8: jne 0x5ec301 */ if (!fZ) goto L_005ec301;
L_005ec2ca:; BB(0x005ec2ca);
    /* 005ec2ca: mov ecx, edi */ r_ecx = r_edi;
    /* 005ec2cc: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ec2d1u); f_005e90b0();
    /* 005ec2d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec2d3: je 0x5ec2eb */ if (fZ) goto L_005ec2eb;
L_005ec2d5:; BB(0x005ec2d5);
    /* 005ec2d5: mov dword ptr [edi + 0x238], 0x5e4990 */ W32((u32)(r_edi+0x238u), 0x5e4990u);
    /* 005ec2df: mov dword ptr [edi + 0x234], 0 */ W32((u32)(r_edi+0x234u), 0x0u);
    /* 005ec2e9: jmp 0x5ec30b */ goto L_005ec30b;
L_005ec2eb:; BB(0x005ec2eb);
    /* 005ec2eb: mov dword ptr [edi + 0x238], 0x5e4678 */ W32((u32)(r_edi+0x238u), 0x5e4678u);
    /* 005ec2f5: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 005ec2ff: jmp 0x5ec30b */ goto L_005ec30b;
L_005ec301:; BB(0x005ec301);
    /* 005ec301: mov dword ptr [edi + 0x238], 0x5e4678 */ W32((u32)(r_edi+0x238u), 0x5e4678u);
L_005ec30b:; BB(0x005ec30b);
    /* 005ec30b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec30d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005ec30f: lea ecx, [edi + 0x240] */ r_ecx = (u32)(r_edi+0x240u);
    /* 005ec315: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ec317: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec318: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec319: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec31a: mov ecx, edi */ r_ecx = r_edi;
    /* 005ec31c: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5ec322u); call_ind(t); }
    /* 005ec322: lea edx, [edi + 0x24c] */ r_edx = (u32)(r_edi+0x24cu);
    /* 005ec328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec32a: je 0x5ec33e */ if (fZ) goto L_005ec33e;
L_005ec32c:; BB(0x005ec32c);
    /* 005ec32c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005ec32e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec332: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec333: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec334: mov ecx, edi */ r_ecx = r_edi;
    /* 005ec336: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5ec33cu); call_ind(t); }
    /* 005ec33c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ec33d: ret  */ FN_RET(0x005ec2bc); r_esp += 4; return;
L_005ec33e:; BB(0x005ec33e);
    /* 005ec33e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec340: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005ec342: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec344: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec345: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec346: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec347: mov ecx, edi */ r_ecx = r_edi;
    /* 005ec349: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5ec34fu); call_ind(t); }
    /* 005ec34f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ec350: ret  */ FN_RET(0x005ec2bc); r_esp += 4; return;
}

void f_005ec354(void) /* sub_5EC354 */
{
    FN_ENTER(0x005ec354);
    /* 005ec354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec355: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec357: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec359: push 0x8dc1ac */ { u32 v = 0x8dc1acu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec35e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec365: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec36c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec36f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec372: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec375: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec378: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec37b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec37e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec380: je 0x5ec3d7 */ if (fZ) goto L_005ec3d7;
L_005ec382:; BB(0x005ec382);
    /* 005ec382: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ec389: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec38e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ec393u); f_005caba4();
    /* 005ec393: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec394: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ec397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec399: je 0x5ec3d3 */ if (fZ) goto L_005ec3d3;
L_005ec39b:; BB(0x005ec39b);
    /* 005ec39b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ec3a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ec3a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec3ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec3af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec3b0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec3b6: call 0x5ec3e8 */ r_esp -= 4; W32(r_esp, 0x5ec3bbu); f_005ec3e8();
    /* 005ec3bb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec3be: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ec3c5:; BB(0x005ec3c5);
    /* 005ec3c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec3c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec3cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec3d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec3d2: ret  */ FN_RET(0x005ec354); r_esp += 4; return;
L_005ec3d3:; BB(0x005ec3d3);
    /* 005ec3d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec3d5: jmp 0x5ec3c5 */ goto L_005ec3c5;
L_005ec3d7:; BB(0x005ec3d7);
    /* 005ec3d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec3d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec3dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec3e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec3e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec3e6: ret  */ FN_RET(0x005ec354); r_esp += 4; return;
}

void f_005ec3e8(void) /* sub_5EC3E8 */
{
    FN_ENTER(0x005ec3e8);
    /* 005ec3e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ec3e9: mov edi, ecx */ r_edi = r_ecx;
    /* 005ec3eb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec3ef: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec3f3: mov ecx, edi */ r_ecx = r_edi;
    /* 005ec3f5: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ec3fau); f_005e959c();
    /* 005ec3fa: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005ec400: mov dword ptr [edi], 0xb11920 */ W32((u32)(r_edi), 0xb11920u);
    /* 005ec406: or eax, 0x203 */ {  u32 a = r_eax; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ec40b: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005ec411: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005ec418: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 005ec422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec424: jl 0x5ec432 */ if ((fS!=fO)) goto L_005ec432;
L_005ec426:; BB(0x005ec426);
    /* 005ec426: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec429: jg 0x5ec432 */ if ((!fZ&&fS==fO)) goto L_005ec432;
L_005ec42b:; BB(0x005ec42b);
    /* 005ec42b: mov byte ptr [edi + 0x1f4], 3 */ W8((u32)(r_edi+0x1f4u), 0x3u);
L_005ec432:; BB(0x005ec432);
    /* 005ec432: mov eax, edi */ r_eax = r_edi;
    /* 005ec434: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ec435: ret 8 */ FN_RET(0x005ec3e8); r_esp += 12; return;
}

void f_005ec438(void) /* sub_5EC438 */
{
    FN_ENTER(0x005ec438);
    /* 005ec438: mov dword ptr [0xa8dd74], 0x3f800000 */ W32((u32)(0xa8dd74u), 0x3f800000u);
    /* 005ec442: mov dword ptr [0xa8dd78], 0x41000000 */ W32((u32)(0xa8dd78u), 0x41000000u);
    /* 005ec44c: mov dword ptr [0xa8dd7c], 0x3fc00000 */ W32((u32)(0xa8dd7cu), 0x3fc00000u);
    /* 005ec456: ret  */ FN_RET(0x005ec438); r_esp += 4; return;
}

void f_005ec458(void) /* sub_5EC458 */
{
    FN_ENTER(0x005ec458);
    /* 005ec458: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec459: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec45b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec45d: push 0x8dc1c8 */ { u32 v = 0x8dc1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec462: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec469: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec470: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec473: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec476: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ec479: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ec47c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ec47f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ec482: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ec485: mov eax, ecx */ r_eax = r_ecx;
    /* 005ec487: mov dword ptr [eax], 0xb11aa0 */ W32((u32)(r_eax), 0xb11aa0u);
    /* 005ec48d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ec494: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ec499u); f_005e61c8();
    /* 005ec499: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec49c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec49e: jne 0x5ec4b0 */ if (!fZ) goto L_005ec4b0;
L_005ec4a0:; BB(0x005ec4a0);
    /* 005ec4a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec4a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec4aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec4ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec4ad: ret 4 */ FN_RET(0x005ec458); r_esp += 8; return;
L_005ec4b0:; BB(0x005ec4b0);
    /* 005ec4b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4b4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ec4b9u); f_005c2f74();
    /* 005ec4b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec4ba: jmp 0x5ec4a0 */ goto L_005ec4a0;
}

void f_005ec4bc(void) /* sub_5EC4BC */
{
    FN_ENTER(0x005ec4bc);
    /* 005ec4bc: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ec4c3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec4c6: je 0x5ec50e */ if (fZ) goto L_005ec50e;
L_005ec4c8:; BB(0x005ec4c8);
    /* 005ec4c8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec4cb: jne 0x5ec4ec */ if (!fZ) goto L_005ec4ec;
L_005ec4cd:; BB(0x005ec4cd);
    /* 005ec4cd: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ec4d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec4d5: jne 0x5ec531 */ if (!fZ) goto L_005ec531;
L_005ec4d7:; BB(0x005ec4d7);
    /* 005ec4d7: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005ec4dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec4e1: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4e6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5ec4ebu); f_0082fa0c();
    /* 005ec4eb: ret  */ FN_RET(0x005ec4bc); r_esp += 4; return;
L_005ec4ec:; BB(0x005ec4ec);
    /* 005ec4ec: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec4ef: jne 0x5ec531 */ if (!fZ) goto L_005ec531;
L_005ec4f1:; BB(0x005ec4f1);
    /* 005ec4f1: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ec4f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec4f8: jne 0x5ec531 */ if (!fZ) goto L_005ec531;
L_005ec4fa:; BB(0x005ec4fa);
    /* 005ec4fa: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec501: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec503: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 005ec508: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x5ec50du); f_0083a314();
    /* 005ec50d: ret  */ FN_RET(0x005ec4bc); r_esp += 4; return;
L_005ec50e:; BB(0x005ec50e);
    /* 005ec50e: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ec513: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec516: jl 0x5ec531 */ if ((fS!=fO)) goto L_005ec531;
L_005ec518:; BB(0x005ec518);
    /* 005ec518: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec51b: jg 0x5ec531 */ if ((!fZ&&fS==fO)) goto L_005ec531;
L_005ec51d:; BB(0x005ec51d);
    /* 005ec51d: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005ec523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec525: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec527: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec52c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5ec531u); f_0082fa0c();
L_005ec531:; BB(0x005ec531);
    /* 005ec531: ret  */ FN_RET(0x005ec4bc); r_esp += 4; return;
}

void f_005ec534(void) /* sub_5EC534 */
{
    FN_ENTER(0x005ec534);
    /* 005ec534: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ec53b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec53e: je 0x5ec545 */ if (fZ) goto L_005ec545;
L_005ec540:; BB(0x005ec540);
    /* 005ec540: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec543: jne 0x5ec55e */ if (!fZ) goto L_005ec55e;
L_005ec545:; BB(0x005ec545);
    /* 005ec545: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec54a: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec54f: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec556: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5ec55bu); f_005dd728();
    /* 005ec55b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ec55e:; BB(0x005ec55e);
    /* 005ec55e: ret  */ FN_RET(0x005ec534); r_esp += 4; return;
}

void f_005ec560(void) /* sub_5EC560 */
{
    FN_ENTER(0x005ec560);
    /* 005ec560: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ec567: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec56a: je 0x5ec571 */ if (fZ) goto L_005ec571;
L_005ec56c:; BB(0x005ec56c);
    /* 005ec56c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec56f: jne 0x5ec587 */ if (!fZ) goto L_005ec587;
L_005ec571:; BB(0x005ec571);
    /* 005ec571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec573: push 0xbe4ccccd */ { u32 v = 0xbe4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec578: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec57e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec57f: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5ec584u); f_005dd728();
    /* 005ec584: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ec587:; BB(0x005ec587);
    /* 005ec587: ret  */ FN_RET(0x005ec560); r_esp += 4; return;
}

void f_005ec588(void) /* sub_5EC588 */
{
    FN_ENTER(0x005ec588);
    /* 005ec588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec589: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ec58b: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005ec592: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec595: jne 0x5ec5cd */ if (!fZ) goto L_005ec5cd;
L_005ec597:; BB(0x005ec597);
    /* 005ec597: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005ec59e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec5a1: jne 0x5ec5cd */ if (!fZ) goto L_005ec5cd;
L_005ec5a3:; BB(0x005ec5a3);
    /* 005ec5a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ec5a5: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ec5aau); f_005e90b0();
    /* 005ec5aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec5ac: je 0x5ec5c6 */ if (fZ) goto L_005ec5c6;
L_005ec5ae:; BB(0x005ec5ae);
    /* 005ec5ae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5b0: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005ec5b6: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 005ec5b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5bc: call 0x6f1eb0 */ r_esp -= 4; W32(r_esp, 0x5ec5c1u); f_006f1eb0();
    /* 005ec5c1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ec5c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec5c5: ret  */ FN_RET(0x005ec588); r_esp += 4; return;
L_005ec5c6:; BB(0x005ec5c6);
    /* 005ec5c6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ec5c8: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ec5cdu); f_005e90e8();
L_005ec5cd:; BB(0x005ec5cd);
    /* 005ec5cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec5ce: ret  */ FN_RET(0x005ec588); r_esp += 4; return;
}

void f_005ec5d0(void) /* sub_5EC5D0 */
{
    FN_ENTER(0x005ec5d0);
    /* 005ec5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec5d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5d5: push 0x8dc1f0 */ { u32 v = 0x8dc1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec5e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec5e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec5eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec5ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec5f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec5f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec5f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec5fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec5fc: je 0x5ec653 */ if (fZ) goto L_005ec653;
L_005ec5fe:; BB(0x005ec5fe);
    /* 005ec5fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ec605: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec60a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ec60fu); f_005caba4();
    /* 005ec60f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec610: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ec613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec615: je 0x5ec64f */ if (fZ) goto L_005ec64f;
L_005ec617:; BB(0x005ec617);
    /* 005ec617: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ec61e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ec625: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec628: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec62b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec62c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec632: call 0x5ec664 */ r_esp -= 4; W32(r_esp, 0x5ec637u); f_005ec664();
    /* 005ec637: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec63a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ec641:; BB(0x005ec641);
    /* 005ec641: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec644: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec64b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec64d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec64e: ret  */ FN_RET(0x005ec5d0); r_esp += 4; return;
L_005ec64f:; BB(0x005ec64f);
    /* 005ec64f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec651: jmp 0x5ec641 */ goto L_005ec641;
L_005ec653:; BB(0x005ec653);
    /* 005ec653: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec655: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec658: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec65f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec662: ret  */ FN_RET(0x005ec5d0); r_esp += 4; return;
}

void f_005ec664(void) /* sub_5EC664 */
{
    FN_ENTER(0x005ec664);
    /* 005ec664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec665: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec669: push 0x8dc20c */ { u32 v = 0x8dc20cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec66e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec67c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec67f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec682: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec685: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec688: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec68b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec68e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec691: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ec694: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ec699u); f_005e959c();
    /* 005ec699: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ec6a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec6a3: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 005ec6a9: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005ec6b0: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ec6b6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec6b9: mov dword ptr [ecx], 0xb11aa0 */ W32((u32)(r_ecx), 0xb11aa0u);
    /* 005ec6bf: mov dword ptr [ecx + 0x240], 0x3f800000 */ W32((u32)(r_ecx+0x240u), 0x3f800000u);
    /* 005ec6c9: jne 0x5ec6f4 */ if (!fZ) goto L_005ec6f4;
L_005ec6cb:; BB(0x005ec6cb);
    /* 005ec6cb: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ec6d2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec6d5: jne 0x5ec6ec */ if (!fZ) goto L_005ec6ec;
L_005ec6d7:; BB(0x005ec6d7);
    /* 005ec6d7: mov dword ptr [ecx + 0x1a0], 0x3e4ccccd */ W32((u32)(r_ecx+0x1a0u), 0x3e4ccccdu);
    /* 005ec6e1: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ec6e4: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005ec6ea: jmp 0x5ec6fa */ goto L_005ec6fa;
L_005ec6ec:; BB(0x005ec6ec);
    /* 005ec6ec: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005ec6f2: jmp 0x5ec6fa */ goto L_005ec6fa;
L_005ec6f4:; BB(0x005ec6f4);
    /* 005ec6f4: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
L_005ec6fa:; BB(0x005ec6fa);
    /* 005ec6fa: call 0x6a76d4 */ r_esp -= 4; W32(r_esp, 0x5ec6ffu); f_006a76d4();
    /* 005ec6ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec702: mov byte ptr [edx + 0x210], al */ W8((u32)(r_edx+0x210u), (u8)r_eax);
    /* 005ec708: mov eax, edx */ r_eax = r_edx;
    /* 005ec70a: mov dword ptr [edx + 0x214], 0xbf800000 */ W32((u32)(r_edx+0x214u), 0xbf800000u);
    /* 005ec714: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec717: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec71e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec720: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec721: ret 8 */ FN_RET(0x005ec664); r_esp += 12; return;
}

void f_005ec724(void) /* sub_5EC724 */
{
    FN_ENTER(0x005ec724);
    /* 005ec724: mov dword ptr [0xa8dd80], 0x3f800000 */ W32((u32)(0xa8dd80u), 0x3f800000u);
    /* 005ec72e: mov dword ptr [0xa8dd84], 0x41000000 */ W32((u32)(0xa8dd84u), 0x41000000u);
    /* 005ec738: mov dword ptr [0xa8dd88], 0x3fc00000 */ W32((u32)(0xa8dd88u), 0x3fc00000u);
    /* 005ec742: ret  */ FN_RET(0x005ec724); r_esp += 4; return;
}

void f_005ec744(void) /* sub_5EC744 */
{
    FN_ENTER(0x005ec744);
    /* 005ec744: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec745: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ec747: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ec749: call 0x5ec768 */ r_esp -= 4; W32(r_esp, 0x5ec74eu); f_005ec768();
    /* 005ec74e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ec752: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec754: jne 0x5ec75a */ if (!fZ) goto L_005ec75a;
L_005ec756:; BB(0x005ec756);
    /* 005ec756: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec757: ret 4 */ FN_RET(0x005ec744); r_esp += 8; return;
L_005ec75a:; BB(0x005ec75a);
    /* 005ec75a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec75b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ec760u); f_005c2f74();
    /* 005ec760: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec762: ret 4 */ FN_RET(0x005ec744); r_esp += 8; return;
}

void f_005ec768(void) /* sub_5EC768 */
{
    FN_ENTER(0x005ec768);
    /* 005ec768: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec769: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec76b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec76d: push 0x8dc228 */ { u32 v = 0x8dc228u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec772: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec779: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec780: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec783: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec786: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec789: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec78c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec78f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ec792: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec795: mov dword ptr [ecx], 0xb11c00 */ W32((u32)(r_ecx), 0xb11c00u);
    /* 005ec79b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ec7a2: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ec7a7u); f_005e61c8();
    /* 005ec7a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec7aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec7b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec7b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec7b4: ret  */ FN_RET(0x005ec768); r_esp += 4; return;
}

void f_005ec7b8(void) /* sub_5EC7B8 */
{
    FN_ENTER(0x005ec7b8);
    /* 005ec7b8: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005ec7be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec7c1: je 0x5ec7c7 */ if (fZ) goto L_005ec7c7;
L_005ec7c3:; BB(0x005ec7c3);
    /* 005ec7c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec7c5: jne 0x5ec7d1 */ if (!fZ) goto L_005ec7d1;
L_005ec7c7:; BB(0x005ec7c7);
    /* 005ec7c7: mov dword ptr [ecx + 0x244], 2 */ W32((u32)(r_ecx+0x244u), 0x2u);
L_005ec7d1:; BB(0x005ec7d1);
    /* 005ec7d1: ret  */ FN_RET(0x005ec7b8); r_esp += 4; return;
}

void f_005ec7d4(void) /* sub_5EC7D4 */
{
    FN_ENTER(0x005ec7d4);
    /* 005ec7d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7d5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec7d8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ec7da: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 005ec7e0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec7e3: jne 0x5ec7f4 */ if (!fZ) goto L_005ec7f4;
L_005ec7e5:; BB(0x005ec7e5);
    /* 005ec7e5: mov dword ptr [ebx + 0x244], 1 */ W32((u32)(r_ebx+0x244u), 0x1u);
    /* 005ec7ef: mov eax, 1 */ r_eax = 0x1u;
L_005ec7f4:; BB(0x005ec7f4);
    /* 005ec7f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec7f6: jne 0x5ec81e */ if (!fZ) goto L_005ec81e;
L_005ec7f8:; BB(0x005ec7f8);
    /* 005ec7f8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5ec7fdu); f_008587a5();
    /* 005ec7fd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ec800: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005ec803: fdiv dword ptr [0x92d7d0] */ ST(0) = ST(0) / R_F32((u32)(0x92d7d0u));
    /* 005ec809: fcomp dword ptr [0x92d7cc] */ fx_compare(ST(0), R_F32((u32)(0x92d7ccu))); FPOP();
    /* 005ec80f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ec811: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ec812: jae 0x5ec81e */ if (!fC) goto L_005ec81e;
L_005ec814:; BB(0x005ec814);
    /* 005ec814: mov dword ptr [ebx + 0x244], 2 */ W32((u32)(r_ebx+0x244u), 0x2u);
L_005ec81e:; BB(0x005ec81e);
    /* 005ec81e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ec821: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec822: ret  */ FN_RET(0x005ec7d4); r_esp += 4; return;
}

void f_005ec824(void) /* sub_5EC824 */
{
    FN_ENTER(0x005ec824);
    /* 005ec824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ec825: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec828: mov esi, ecx */ r_esi = r_ecx;
    /* 005ec82a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ec82c: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ec831u); f_005e90b0();
    /* 005ec831: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec833: je 0x5ec86e */ if (fZ) goto L_005ec86e;
L_005ec835:; BB(0x005ec835);
    /* 005ec835: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ec838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec839: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec83b: mov ecx, esi */ r_ecx = r_esi;
    /* 005ec83d: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ec842u); f_005e83c8();
    /* 005ec842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec844: je 0x5ec875 */ if (fZ) goto L_005ec875;
L_005ec846:; BB(0x005ec846);
    /* 005ec846: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ec849: push dword ptr [esi + 0x1e4] */ { u32 v = R32((u32)(r_esi+0x1e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec84f: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005ec855: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec859: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec85a: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x5ec85fu); f_006e38e0();
    /* 005ec85f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec862: mov ecx, esi */ r_ecx = r_esi;
    /* 005ec864: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5ec869u); f_005e7480();
    /* 005ec869: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ec86c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ec86d: ret  */ FN_RET(0x005ec824); r_esp += 4; return;
L_005ec86e:; BB(0x005ec86e);
    /* 005ec86e: mov ecx, esi */ r_ecx = r_esi;
    /* 005ec870: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ec875u); f_005e90e8();
L_005ec875:; BB(0x005ec875);
    /* 005ec875: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ec878: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ec879: ret  */ FN_RET(0x005ec824); r_esp += 4; return;
}

void f_005ec87c(void) /* sub_5EC87C */
{
    FN_ENTER(0x005ec87c);
    /* 005ec87c: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005ec882: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec885: je 0x5ec8b6 */ if (fZ) goto L_005ec8b6;
L_005ec887:; BB(0x005ec887);
    /* 005ec887: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec88a: je 0x5ec88d */ if (fZ) goto L_005ec88d;
L_005ec88c:; BB(0x005ec88c);
    /* 005ec88c: ret  */ FN_RET(0x005ec87c); r_esp += 4; return;
L_005ec88d:; BB(0x005ec88d);
    /* 005ec88d: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005ec893: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec895: jle 0x5ec88c */ if ((fZ||fS!=fO)) goto L_005ec88c;
L_005ec897:; BB(0x005ec897);
    /* 005ec897: add eax, 0xfffffbbc */ {  u32 a = r_eax; u32 b = 0xfffffbbcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec89c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec89e: jle 0x5ec8a7 */ if ((fZ||fS!=fO)) goto L_005ec8a7;
L_005ec8a0:; BB(0x005ec8a0);
    /* 005ec8a0: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005ec8a6: ret  */ FN_RET(0x005ec87c); r_esp += 4; return;
L_005ec8a7:; BB(0x005ec8a7);
    /* 005ec8a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec8a9: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005ec8af: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005ec8b5: ret  */ FN_RET(0x005ec87c); r_esp += 4; return;
L_005ec8b6:; BB(0x005ec8b6);
    /* 005ec8b6: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005ec8bc: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec8c1: jge 0x5ec88c */ if ((fS==fO)) goto L_005ec88c;
L_005ec8c3:; BB(0x005ec8c3);
    /* 005ec8c3: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec8c8: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ec8cd: jge 0x5ec8d6 */ if ((fS==fO)) goto L_005ec8d6;
L_005ec8cf:; BB(0x005ec8cf);
    /* 005ec8cf: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005ec8d5: ret  */ FN_RET(0x005ec87c); r_esp += 4; return;
L_005ec8d6:; BB(0x005ec8d6);
    /* 005ec8d6: mov dword ptr [ecx + 0x240], 0x2aaa */ W32((u32)(r_ecx+0x240u), 0x2aaau);
    /* 005ec8e0: mov dword ptr [ecx + 0x244], 3 */ W32((u32)(r_ecx+0x244u), 0x3u);
    /* 005ec8ea: ret  */ FN_RET(0x005ec87c); r_esp += 4; return;
}

void f_005ec8ec(void) /* sub_5EC8EC */
{
    FN_ENTER(0x005ec8ec);
    /* 005ec8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec8ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8f1: push 0x8dc250 */ { u32 v = 0x8dc250u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ec904: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ec90a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ec90d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ec910: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ec913: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec918: je 0x5ec96f */ if (fZ) goto L_005ec96f;
L_005ec91a:; BB(0x005ec91a);
    /* 005ec91a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ec921: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec926: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ec92bu); f_005caba4();
    /* 005ec92b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec92c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ec92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec931: je 0x5ec96b */ if (fZ) goto L_005ec96b;
L_005ec933:; BB(0x005ec933);
    /* 005ec933: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ec93a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ec941: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec944: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec948: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec94e: call 0x5ec980 */ r_esp -= 4; W32(r_esp, 0x5ec953u); f_005ec980();
    /* 005ec953: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec956: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ec95d:; BB(0x005ec95d);
    /* 005ec95d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec960: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec967: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec96a: ret  */ FN_RET(0x005ec8ec); r_esp += 4; return;
L_005ec96b:; BB(0x005ec96b);
    /* 005ec96b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec96d: jmp 0x5ec95d */ goto L_005ec95d;
L_005ec96f:; BB(0x005ec96f);
    /* 005ec96f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec971: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec974: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec97b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec97d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec97e: ret  */ FN_RET(0x005ec8ec); r_esp += 4; return;
}

void f_005ec980(void) /* sub_5EC980 */
{
    FN_ENTER(0x005ec980);
    /* 005ec980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ec981: mov edi, ecx */ r_edi = r_ecx;
    /* 005ec983: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec987: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ec98b: mov ecx, edi */ r_ecx = r_edi;
    /* 005ec98d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ec992u); f_005e959c();
    /* 005ec992: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 005ec998: mov dword ptr [edi], 0xb11c00 */ W32((u32)(r_edi), 0xb11c00u);
    /* 005ec99e: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ec9a1: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 005ec9a7: mov dword ptr [edi + 0x1e8], 0xa */ W32((u32)(r_edi+0x1e8u), 0xau);
    /* 005ec9b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec9b3: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 005ec9b9: mov dword ptr [edi + 0x244], eax */ W32((u32)(r_edi+0x244u), r_eax);
    /* 005ec9bf: mov eax, edi */ r_eax = r_edi;
    /* 005ec9c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ec9c2: ret 8 */ FN_RET(0x005ec980); r_esp += 12; return;
}

void f_005ec9c8(void) /* sub_5EC9C8 */
{
    FN_ENTER(0x005ec9c8);
    /* 005ec9c8: mov dword ptr [0xa8dd8c], 0x3f800000 */ W32((u32)(0xa8dd8cu), 0x3f800000u);
    /* 005ec9d2: mov dword ptr [0xa8dd90], 0x41000000 */ W32((u32)(0xa8dd90u), 0x41000000u);
    /* 005ec9dc: mov dword ptr [0xa8dd94], 0x3fc00000 */ W32((u32)(0xa8dd94u), 0x3fc00000u);
    /* 005ec9e6: ret  */ FN_RET(0x005ec9c8); r_esp += 4; return;
}

void f_005ec9e8(void) /* sub_5EC9E8 */
{
    FN_ENTER(0x005ec9e8);
    /* 005ec9e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ec9eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ec9ed: call 0x5eca0c */ r_esp -= 4; W32(r_esp, 0x5ec9f2u); f_005eca0c();
    /* 005ec9f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ec9f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ec9f8: jne 0x5ec9fe */ if (!fZ) goto L_005ec9fe;
L_005ec9fa:; BB(0x005ec9fa);
    /* 005ec9fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ec9fb: ret 4 */ FN_RET(0x005ec9e8); r_esp += 8; return;
L_005ec9fe:; BB(0x005ec9fe);
    /* 005ec9fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec9ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eca04u); f_005c2f74();
    /* 005eca04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eca05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005eca06: ret 4 */ FN_RET(0x005ec9e8); r_esp += 8; return;
}

void f_005eca0c(void) /* sub_5ECA0C */
{
    FN_ENTER(0x005eca0c);
    /* 005eca0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eca0d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eca0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eca11: push 0x8dc26c */ { u32 v = 0x8dc26cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eca16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eca1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eca24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eca27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eca2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eca2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005eca30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005eca33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eca36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eca39: mov dword ptr [ecx], 0xb11d60 */ W32((u32)(r_ecx), 0xb11d60u);
    /* 005eca3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eca46: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eca4bu); f_005e61c8();
    /* 005eca4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eca4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eca55: mov esp, ebp */ r_esp = r_ebp;
    /* 005eca57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eca58: ret  */ FN_RET(0x005eca0c); r_esp += 4; return;
}

void f_005eca5c(void) /* sub_5ECA5C */
{
    FN_ENTER(0x005eca5c);
    /* 005eca5c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eca5f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eca62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eca65: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5eca6au); f_005e83c8();
    /* 005eca6a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eca6d: push 0xc1 */ { u32 v = 0xc1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eca72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca73: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5eca78u); f_0050b510();
    /* 005eca78: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005eca7b: ret  */ FN_RET(0x005eca5c); r_esp += 4; return;
}

void f_005eca7c(void) /* sub_5ECA7C */
{
    FN_ENTER(0x005eca7c);
    /* 005eca7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eca7d: mov ebp, esp */ r_ebp = r_esp;
    /* 005eca7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eca81: push 0x8dc294 */ { u32 v = 0x8dc294u; r_esp -= 4; W32(r_esp, v); }
    /* 005eca86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eca8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eca8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005eca94: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eca97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005eca9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005eca9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ecaa0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ecaa3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecaa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecaa8: je 0x5ecaff */ if (fZ) goto L_005ecaff;
L_005ecaaa:; BB(0x005ecaaa);
    /* 005ecaaa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ecab1: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecab6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ecabbu); f_005caba4();
    /* 005ecabb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ecabc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ecabf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecac1: je 0x5ecafb */ if (fZ) goto L_005ecafb;
L_005ecac3:; BB(0x005ecac3);
    /* 005ecac3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ecaca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ecad1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecad4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ecad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecad8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecade: call 0x5ecb10 */ r_esp -= 4; W32(r_esp, 0x5ecae3u); f_005ecb10();
    /* 005ecae3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ecae6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ecaed:; BB(0x005ecaed);
    /* 005ecaed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecaf0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ecaf7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecaf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecafa: ret  */ FN_RET(0x005eca7c); r_esp += 4; return;
L_005ecafb:; BB(0x005ecafb);
    /* 005ecafb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecafd: jmp 0x5ecaed */ goto L_005ecaed;
L_005ecaff:; BB(0x005ecaff);
    /* 005ecaff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecb01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecb04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ecb0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecb0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecb0e: ret  */ FN_RET(0x005eca7c); r_esp += 4; return;
}

void f_005ecb10(void) /* sub_5ECB10 */
{
    FN_ENTER(0x005ecb10);
    /* 005ecb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ecb13: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecb17: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecb1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ecb1d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ecb22u); f_005e959c();
    /* 005ecb22: mov dword ptr [ebp], 0xb11d60 */ W32((u32)(r_ebp), 0xb11d60u);
    /* 005ecb29: mov eax, ebp */ r_eax = r_ebp;
    /* 005ecb2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecb2c: ret 8 */ FN_RET(0x005ecb10); r_esp += 12; return;
}

void f_005ecb30(void) /* sub_5ECB30 */
{
    FN_ENTER(0x005ecb30);
    /* 005ecb30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ecb33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ecb35: call 0x5ecb54 */ r_esp -= 4; W32(r_esp, 0x5ecb3au); f_005ecb54();
    /* 005ecb3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ecb3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecb40: jne 0x5ecb46 */ if (!fZ) goto L_005ecb46;
L_005ecb42:; BB(0x005ecb42);
    /* 005ecb42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ecb43: ret 4 */ FN_RET(0x005ecb30); r_esp += 8; return;
L_005ecb46:; BB(0x005ecb46);
    /* 005ecb46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ecb4cu); f_005c2f74();
    /* 005ecb4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ecb4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ecb4e: ret 4 */ FN_RET(0x005ecb30); r_esp += 8; return;
}

void f_005ecb54(void) /* sub_5ECB54 */
{
    FN_ENTER(0x005ecb54);
    /* 005ecb54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb55: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecb57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb59: push 0x8dc2b0 */ { u32 v = 0x8dc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ecb64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecb65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ecb6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecb6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ecb72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ecb75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ecb78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ecb7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ecb7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ecb81: mov dword ptr [ecx], 0xb11ec0 */ W32((u32)(r_ecx), 0xb11ec0u);
    /* 005ecb87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ecb8e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ecb93u); f_005e61c8();
    /* 005ecb93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecb96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ecb9d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecb9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecba0: ret  */ FN_RET(0x005ecb54); r_esp += 4; return;
}

void f_005ecba4(void) /* sub_5ECBA4 */
{
    FN_ENTER(0x005ecba4);
    /* 005ecba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecba5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecba9: push 0x8dc2d8 */ { u32 v = 0x8dc2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecbae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ecbb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecbb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ecbbc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecbbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ecbc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ecbc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ecbc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ecbcb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecbce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecbd0: je 0x5ecc27 */ if (fZ) goto L_005ecc27;
L_005ecbd2:; BB(0x005ecbd2);
    /* 005ecbd2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ecbd9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecbde: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ecbe3u); f_005caba4();
    /* 005ecbe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ecbe4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ecbe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecbe9: je 0x5ecc23 */ if (fZ) goto L_005ecc23;
L_005ecbeb:; BB(0x005ecbeb);
    /* 005ecbeb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ecbf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ecbf9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecbfc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ecbff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc00: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecc06: call 0x5ecc38 */ r_esp -= 4; W32(r_esp, 0x5ecc0bu); f_005ecc38();
    /* 005ecc0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ecc0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ecc15:; BB(0x005ecc15);
    /* 005ecc15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecc18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ecc1f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecc21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecc22: ret  */ FN_RET(0x005ecba4); r_esp += 4; return;
L_005ecc23:; BB(0x005ecc23);
    /* 005ecc23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecc25: jmp 0x5ecc15 */ goto L_005ecc15;
L_005ecc27:; BB(0x005ecc27);
    /* 005ecc27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecc29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ecc2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ecc33: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecc35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecc36: ret  */ FN_RET(0x005ecba4); r_esp += 4; return;
}

void f_005ecc38(void) /* sub_5ECC38 */
{
    FN_ENTER(0x005ecc38);
    /* 005ecc38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc39: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ecc3b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecc3f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecc43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ecc45: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ecc4au); f_005e959c();
    /* 005ecc4a: mov dword ptr [ebp], 0xb11ec0 */ W32((u32)(r_ebp), 0xb11ec0u);
    /* 005ecc51: mov eax, ebp */ r_eax = r_ebp;
    /* 005ecc53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecc54: ret 8 */ FN_RET(0x005ecc38); r_esp += 12; return;
}

void f_005ecc58(void) /* sub_5ECC58 */
{
    FN_ENTER(0x005ecc58);
    /* 005ecc58: mov dword ptr [0xa8dd98], 0x3f800000 */ W32((u32)(0xa8dd98u), 0x3f800000u);
    /* 005ecc62: mov dword ptr [0xa8dd9c], 0x41000000 */ W32((u32)(0xa8dd9cu), 0x41000000u);
    /* 005ecc6c: mov dword ptr [0xa8dda0], 0x3fc00000 */ W32((u32)(0xa8dda0u), 0x3fc00000u);
    /* 005ecc76: ret  */ FN_RET(0x005ecc58); r_esp += 4; return;
}

void f_005ecc78(void) /* sub_5ECC78 */
{
    FN_ENTER(0x005ecc78);
    /* 005ecc78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc79: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecc7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc7d: push 0x8dc2f4 */ { u32 v = 0x8dc2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ecc88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ecc90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecc93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ecc96: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ecc99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ecc9c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ecc9f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ecca2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ecca5: mov eax, ecx */ r_eax = r_ecx;
    /* 005ecca7: mov dword ptr [eax], 0xb12020 */ W32((u32)(r_eax), 0xb12020u);
    /* 005eccad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eccb4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5eccb9u); f_005e61c8();
    /* 005eccb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eccbc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005eccbe: jne 0x5eccd0 */ if (!fZ) goto L_005eccd0;
L_005eccc0:; BB(0x005eccc0);
    /* 005eccc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eccc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eccca: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecccd: ret 4 */ FN_RET(0x005ecc78); r_esp += 8; return;
L_005eccd0:; BB(0x005eccd0);
    /* 005eccd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eccd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eccd4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5eccd9u); f_005c2f74();
    /* 005eccd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eccda: jmp 0x5eccc0 */ goto L_005eccc0;
}

void f_005eccdc(void) /* sub_5ECCDC */
{
    FN_ENTER(0x005eccdc);
    /* 005eccdc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eccdd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecce0: mov esi, ecx */ r_esi = r_ecx;
    /* 005ecce2: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005ecce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecceb: jne 0x5ecd3f */ if (!fZ) goto L_005ecd3f;
L_005ecced:; BB(0x005ecced);
    /* 005ecced: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eccf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eccf1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005eccf3: mov ecx, esi */ r_ecx = r_esi;
    /* 005eccf5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5eccfau); f_005e83c8();
    /* 005eccfa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005eccfd: push 0x1bf */ { u32 v = 0x1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd03: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ecd08u); f_0050b510();
    /* 005ecd08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd0b: mov ecx, esi */ r_ecx = r_esi;
    /* 005ecd0d: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ecd12u); f_005e90b0();
    /* 005ecd12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd14: je 0x5ecd33 */ if (fZ) goto L_005ecd33;
L_005ecd16:; BB(0x005ecd16);
    /* 005ecd16: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ecd19: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd1b: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005ecd21: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecd24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd26: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5ecd2bu); f_006e2f20();
    /* 005ecd2b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ecd31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ecd32: ret  */ FN_RET(0x005eccdc); r_esp += 4; return;
L_005ecd33:; BB(0x005ecd33);
    /* 005ecd33: mov ecx, esi */ r_ecx = r_esi;
    /* 005ecd35: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ecd3au); f_005e90e8();
    /* 005ecd3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ecd3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ecd3e: ret  */ FN_RET(0x005eccdc); r_esp += 4; return;
L_005ecd3f:; BB(0x005ecd3f);
    /* 005ecd3f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd42: jne 0x5ecd92 */ if (!fZ) goto L_005ecd92;
L_005ecd44:; BB(0x005ecd44);
    /* 005ecd44: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ecd47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd48: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd4a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ecd4c: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5ecd51u); f_005e83c8();
    /* 005ecd51: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ecd54: push 0x1bf */ { u32 v = 0x1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd5a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ecd5fu); f_0050b510();
    /* 005ecd5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd62: mov ecx, esi */ r_ecx = r_esi;
    /* 005ecd64: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5ecd69u); f_005e90b0();
    /* 005ecd69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd6b: je 0x5ecd86 */ if (fZ) goto L_005ecd86;
L_005ecd6d:; BB(0x005ecd6d);
    /* 005ecd6d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ecd70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd73: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecd79: call 0x6e46ac */ r_esp -= 4; W32(r_esp, 0x5ecd7eu); f_006e46ac();
    /* 005ecd7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ecd84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ecd85: ret  */ FN_RET(0x005eccdc); r_esp += 4; return;
L_005ecd86:; BB(0x005ecd86);
    /* 005ecd86: mov ecx, esi */ r_ecx = r_esi;
    /* 005ecd88: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ecd8du); f_005e90e8();
    /* 005ecd8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ecd90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ecd91: ret  */ FN_RET(0x005eccdc); r_esp += 4; return;
L_005ecd92:; BB(0x005ecd92);
    /* 005ecd92: mov ecx, esi */ r_ecx = r_esi;
    /* 005ecd94: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5ecd99u); f_005e90e8();
    /* 005ecd99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ecd9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ecd9d: ret  */ FN_RET(0x005eccdc); r_esp += 4; return;
}

void f_005ecda0(void) /* sub_5ECDA0 */
{
    FN_ENTER(0x005ecda0);
    /* 005ecda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecda1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecda3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecda5: push 0x8dc31c */ { u32 v = 0x8dc31cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ecdb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ecdb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecdbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ecdbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ecdc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ecdc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ecdc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecdcc: je 0x5ece23 */ if (fZ) goto L_005ece23;
L_005ecdce:; BB(0x005ecdce);
    /* 005ecdce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ecdd5: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdda: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ecddfu); f_005caba4();
    /* 005ecddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ecde0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ecde3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecde5: je 0x5ece1f */ if (fZ) goto L_005ece1f;
L_005ecde7:; BB(0x005ecde7);
    /* 005ecde7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ecdee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ecdf5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecdf8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ecdfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecdfc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ece02: call 0x5ece34 */ r_esp -= 4; W32(r_esp, 0x5ece07u); f_005ece34();
    /* 005ece07: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ece0a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ece11:; BB(0x005ece11);
    /* 005ece11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ece14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ece1b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ece1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ece1e: ret  */ FN_RET(0x005ecda0); r_esp += 4; return;
L_005ece1f:; BB(0x005ece1f);
    /* 005ece1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ece21: jmp 0x5ece11 */ goto L_005ece11;
L_005ece23:; BB(0x005ece23);
    /* 005ece23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ece25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ece28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ece2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ece31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ece32: ret  */ FN_RET(0x005ecda0); r_esp += 4; return;
}

void f_005ece34(void) /* sub_5ECE34 */
{
    FN_ENTER(0x005ece34);
    /* 005ece34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ece37: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ece3b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ece3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ece41: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5ece46u); f_005e959c();
    /* 005ece46: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005ece4c: mov dword ptr [ebx], 0xb12020 */ W32((u32)(r_ebx), 0xb12020u);
    /* 005ece52: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ece55: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005ece5b: mov eax, ebx */ r_eax = r_ebx;
    /* 005ece5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ece5e: ret 8 */ FN_RET(0x005ece34); r_esp += 12; return;
}

void f_005ece64(void) /* sub_5ECE64 */
{
    FN_ENTER(0x005ece64);
    /* 005ece64: mov dword ptr [0xa8dda4], 0x3f800000 */ W32((u32)(0xa8dda4u), 0x3f800000u);
    /* 005ece6e: mov dword ptr [0xa8dda8], 0x41000000 */ W32((u32)(0xa8dda8u), 0x41000000u);
    /* 005ece78: mov dword ptr [0xa8ddac], 0x3fc00000 */ W32((u32)(0xa8ddacu), 0x3fc00000u);
    /* 005ece82: ret  */ FN_RET(0x005ece64); r_esp += 4; return;
}

void f_005ece84(void) /* sub_5ECE84 */
{
    FN_ENTER(0x005ece84);
    /* 005ece84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ece85: mov ebp, esp */ r_ebp = r_esp;
    /* 005ece87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ece89: push 0x8dc338 */ { u32 v = 0x8dc338u; r_esp -= 4; W32(r_esp, v); }
    /* 005ece8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ece94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ece95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ece9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ece9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ecea2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ecea5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ecea8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005eceab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eceae: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005eceb1: mov eax, ecx */ r_eax = r_ecx;
    /* 005eceb3: mov dword ptr [eax], 0xb12180 */ W32((u32)(r_eax), 0xb12180u);
    /* 005eceb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ecec0: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5ecec5u); f_005e61c8();
    /* 005ecec5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecec8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ececa: jne 0x5ecedc */ if (!fZ) goto L_005ecedc;
L_005ececc:; BB(0x005ececc);
    /* 005ececc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ececf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eced6: mov esp, ebp */ r_esp = r_ebp;
    /* 005eced8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eced9: ret 4 */ FN_RET(0x005ece84); r_esp += 8; return;
L_005ecedc:; BB(0x005ecedc);
    /* 005ecedc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ecedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecee0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ecee5u); f_005c2f74();
    /* 005ecee5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ecee6: jmp 0x5ececc */ goto L_005ececc;
}

void f_005ecee8(void) /* sub_5ECEE8 */
{
    FN_ENTER(0x005ecee8);
    /* 005ecee8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ecee9: mov edi, ecx */ r_edi = r_ecx;
    /* 005eceeb: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005ecef2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ecef5: jl 0x5ecf0e */ if ((fS!=fO)) goto L_005ecf0e;
L_005ecef7:; BB(0x005ecef7);
    /* 005ecef7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ecefa: jle 0x5ecf2c */ if ((fZ||fS!=fO)) goto L_005ecf2c;
L_005ecefc:; BB(0x005ecefc);
    /* 005ecefc: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eceff: jne 0x5ecf0e */ if (!fZ) goto L_005ecf0e;
L_005ecf01:; BB(0x005ecf01);
    /* 005ecf01: mov ecx, edi */ r_ecx = r_edi;
    /* 005ecf03: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ecf08u); f_005e7f6c();
    /* 005ecf08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecf0a: jne 0x5ecf2c */ if (!fZ) goto L_005ecf2c;
L_005ecf0c:; BB(0x005ecf0c);
    /* 005ecf0c: jmp 0x5ecf2e */ goto L_005ecf2e;
L_005ecf0e:; BB(0x005ecf0e);
    /* 005ecf0e: mov ecx, edi */ r_ecx = r_edi;
    /* 005ecf10: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5ecf15u); f_005e7f6c();
    /* 005ecf15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ecf17: jne 0x5ecf2c */ if (!fZ) goto L_005ecf2c;
L_005ecf19:; BB(0x005ecf19);
    /* 005ecf19: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf1e: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecf24: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5ecf29u); f_005cc3b0();
    /* 005ecf29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ecf2c:; BB(0x005ecf2c);
    /* 005ecf2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ecf2d: ret  */ FN_RET(0x005ecee8); r_esp += 4; return;
L_005ecf2e:; BB(0x005ecf2e);
    /* 005ecf2e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf33: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ecf39: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5ecf3eu); f_005cc3b0();
    /* 005ecf3e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ecf41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ecf42: ret  */ FN_RET(0x005ecee8); r_esp += 4; return;
}

void f_005ecf44(void) /* sub_5ECF44 */
{
    FN_ENTER(0x005ecf44);
    /* 005ecf44: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ecf4b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ecf4e: jne 0x5ecf69 */ if (!fZ) goto L_005ecf69;
L_005ecf50:; BB(0x005ecf50);
    /* 005ecf50: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf55: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf5a: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ecf60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf61: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5ecf66u); f_005dd728();
    /* 005ecf66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ecf69:; BB(0x005ecf69);
    /* 005ecf69: ret  */ FN_RET(0x005ecf44); r_esp += 4; return;
}

void f_005ecf6c(void) /* sub_5ECF6C */
{
    FN_ENTER(0x005ecf6c);
    /* 005ecf6c: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ecf73: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ecf76: jne 0x5ecf8e */ if (!fZ) goto L_005ecf8e;
L_005ecf78:; BB(0x005ecf78);
    /* 005ecf78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf7a: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf7f: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ecf85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf86: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5ecf8bu); f_005dd728();
    /* 005ecf8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ecf8e:; BB(0x005ecf8e);
    /* 005ecf8e: ret  */ FN_RET(0x005ecf6c); r_esp += 4; return;
}

void f_005ecf90(void) /* sub_5ECF90 */
{
    FN_ENTER(0x005ecf90);
    /* 005ecf90: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ecf97: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ecf9a: jne 0x5ecfbf */ if (!fZ) goto L_005ecfbf;
L_005ecf9c:; BB(0x005ecf9c);
    /* 005ecf9c: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005ecfa1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecfa4: je 0x5ecfab */ if (fZ) goto L_005ecfab;
L_005ecfa6:; BB(0x005ecfa6);
    /* 005ecfa6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ecfa9: jne 0x5ecfbf */ if (!fZ) goto L_005ecfbf;
L_005ecfab:; BB(0x005ecfab);
    /* 005ecfab: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005ecfb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ecfb5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfba: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5ecfbfu); f_0082fa0c();
L_005ecfbf:; BB(0x005ecfbf);
    /* 005ecfbf: ret  */ FN_RET(0x005ecf90); r_esp += 4; return;
}

void f_005ecfc0(void) /* sub_5ECFC0 */
{
    FN_ENTER(0x005ecfc0);
    /* 005ecfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecfc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfc5: push 0x8dc360 */ { u32 v = 0x8dc360u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ecfd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ecfd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecfdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ecfde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ecfe1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ecfe4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ecfe7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecfea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecfec: je 0x5ed043 */ if (fZ) goto L_005ed043;
L_005ecfee:; BB(0x005ecfee);
    /* 005ecfee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ecff5: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecffa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ecfffu); f_005caba4();
    /* 005ecfff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ed000: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ed003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed005: je 0x5ed03f */ if (fZ) goto L_005ed03f;
L_005ed007:; BB(0x005ed007);
    /* 005ed007: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ed00e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ed015: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ed018: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ed01b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed01c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ed022: call 0x5ed054 */ r_esp -= 4; W32(r_esp, 0x5ed027u); f_005ed054();
    /* 005ed027: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ed02a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ed031:; BB(0x005ed031);
    /* 005ed031: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed034: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed03b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed03d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed03e: ret  */ FN_RET(0x005ecfc0); r_esp += 4; return;
L_005ed03f:; BB(0x005ed03f);
    /* 005ed03f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed041: jmp 0x5ed031 */ goto L_005ed031;
L_005ed043:; BB(0x005ed043);
    /* 005ed043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ed045: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ed048: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ed04f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ed051: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ed052: ret  */ FN_RET(0x005ecfc0); r_esp += 4; return;
}

