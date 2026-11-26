#include "protos.h"

void f_0060103c(void) /* sub_60103C */
{
    FN_ENTER(0x0060103c);
    /* 0060103c: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 00601042: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601045: jne 0x601051 */ if (!fZ) goto L_00601051;
L_00601047:; BB(0x00601047);
    /* 00601047: mov dword ptr [ecx + 0x244], 0 */ W32((u32)(r_ecx+0x244u), 0x0u);
L_00601051:; BB(0x00601051);
    /* 00601051: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 00601058: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060105b: jne 0x601082 */ if (!fZ) goto L_00601082;
L_0060105d:; BB(0x0060105d);
    /* 0060105d: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 00601064: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601067: jne 0x601082 */ if (!fZ) goto L_00601082;
L_00601069:; BB(0x00601069);
    /* 00601069: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0060106e: push 0xbe4ccccd */ { u32 v = 0xbe4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00601073: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601079: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060107a: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x60107fu); f_005dd728();
    /* 0060107f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00601082:; BB(0x00601082);
    /* 00601082: ret  */ FN_RET(0x0060103c); r_esp += 4; return;
}

void f_00601084(void) /* sub_601084 */
{
    FN_ENTER(0x00601084);
    /* 00601084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601085: mov ebp, esp */ r_ebp = r_esp;
    /* 00601087: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601089: push 0x8deab4 */ { u32 v = 0x8deab4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060108e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601095: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060109c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060109f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006010a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006010a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006010a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006010ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006010ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006010b0: je 0x601107 */ if (fZ) goto L_00601107;
L_006010b2:; BB(0x006010b2);
    /* 006010b2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006010b9: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 006010be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6010c3u); f_005caba4();
    /* 006010c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006010c4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006010c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006010c9: je 0x601103 */ if (fZ) goto L_00601103;
L_006010cb:; BB(0x006010cb);
    /* 006010cb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006010d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006010d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006010dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006010df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006010e0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006010e6: call 0x601118 */ r_esp -= 4; W32(r_esp, 0x6010ebu); f_00601118();
    /* 006010eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006010ee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006010f5:; BB(0x006010f5);
    /* 006010f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006010f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006010ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00601101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601102: ret  */ FN_RET(0x00601084); r_esp += 4; return;
L_00601103:; BB(0x00601103);
    /* 00601103: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601105: jmp 0x6010f5 */ goto L_006010f5;
L_00601107:; BB(0x00601107);
    /* 00601107: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601109: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060110c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601113: mov esp, ebp */ r_esp = r_ebp;
    /* 00601115: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601116: ret  */ FN_RET(0x00601084); r_esp += 4; return;
}

void f_00601118(void) /* sub_601118 */
{
    FN_ENTER(0x00601118);
    /* 00601118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601119: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0060111b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060111f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601123: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00601125: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x60112au); f_005e959c();
    /* 0060112a: mov dword ptr [ebp], 0xb1cc80 */ W32((u32)(r_ebp), 0xb1cc80u);
    /* 00601131: mov eax, ebp */ r_eax = r_ebp;
    /* 00601133: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 0060113d: mov dword ptr [ebp + 0x244], 0 */ W32((u32)(r_ebp+0x244u), 0x0u);
    /* 00601147: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601148: ret 8 */ FN_RET(0x00601118); r_esp += 12; return;
}

void f_0060114c(void) /* sub_60114C */
{
    FN_ENTER(0x0060114c);
    /* 0060114c: mov dword ptr [0xa8e2e4], 0x3f800000 */ W32((u32)(0xa8e2e4u), 0x3f800000u);
    /* 00601156: mov dword ptr [0xa8e2e8], 0x41000000 */ W32((u32)(0xa8e2e8u), 0x41000000u);
    /* 00601160: mov dword ptr [0xa8e2ec], 0x3fc00000 */ W32((u32)(0xa8e2ecu), 0x3fc00000u);
    /* 0060116a: ret  */ FN_RET(0x0060114c); r_esp += 4; return;
}

void f_0060116c(void) /* sub_60116C */
{
    FN_ENTER(0x0060116c);
    /* 0060116c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060116d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060116f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00601171: call 0x601190 */ r_esp -= 4; W32(r_esp, 0x601176u); f_00601190();
    /* 00601176: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060117a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060117c: jne 0x601182 */ if (!fZ) goto L_00601182;
L_0060117e:; BB(0x0060117e);
    /* 0060117e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060117f: ret 4 */ FN_RET(0x0060116c); r_esp += 8; return;
L_00601182:; BB(0x00601182);
    /* 00601182: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601183: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x601188u); f_005c2f74();
    /* 00601188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601189: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060118a: ret 4 */ FN_RET(0x0060116c); r_esp += 8; return;
}

void f_00601190(void) /* sub_601190 */
{
    FN_ENTER(0x00601190);
    /* 00601190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601191: mov ebp, esp */ r_ebp = r_esp;
    /* 00601193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601195: push 0x8dead0 */ { u32 v = 0x8dead0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060119a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006011a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006011a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006011a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006011ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006011ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006011b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006011b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006011b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006011ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006011bd: mov dword ptr [ecx], 0xb1ce60 */ W32((u32)(r_ecx), 0xb1ce60u);
    /* 006011c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006011ca: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x6011cfu); f_005e61c8();
    /* 006011cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006011d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006011d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006011db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006011dc: ret  */ FN_RET(0x00601190); r_esp += 4; return;
}

void f_006011e0(void) /* sub_6011E0 */
{
    FN_ENTER(0x006011e0);
    /* 006011e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006011e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006011e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006011e5: push 0x8deb04 */ { u32 v = 0x8deb04u; r_esp -= 4; W32(r_esp, v); }
    /* 006011ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006011f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006011f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006011f8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006011fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006011fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00601201: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00601204: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00601207: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060120a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0060120d: mov eax, ecx */ r_eax = r_ecx;
    /* 0060120f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00601212: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 00601218: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060121f: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x601224u); f_005e3e40();
    /* 00601224: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601227: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601229: jne 0x60123b */ if (!fZ) goto L_0060123b;
L_0060122b:; BB(0x0060122b);
    /* 0060122b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060122e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601235: mov esp, ebp */ r_esp = r_ebp;
    /* 00601237: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601238: ret 4 */ FN_RET(0x006011e0); r_esp += 8; return;
L_0060123b:; BB(0x0060123b);
    /* 0060123b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060123e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060123f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x601244u); f_005c2f74();
    /* 00601244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601245: jmp 0x60122b */ goto L_0060122b;
}

void f_00601248(void) /* sub_601248 */
{
    FN_ENTER(0x00601248);
    /* 00601248: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0060124c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060124e: je 0x60125a */ if (fZ) goto L_0060125a;
L_00601250:; BB(0x00601250);
    /* 00601250: mov dword ptr [eax + 0x24c], 1 */ W32((u32)(r_eax+0x24cu), 0x1u);
L_0060125a:; BB(0x0060125a);
    /* 0060125a: ret  */ FN_RET(0x00601248); r_esp += 4; return;
}

void f_0060125c(void) /* sub_60125C */
{
    FN_ENTER(0x0060125c);
    /* 0060125c: mov edx, ecx */ r_edx = r_ecx;
    /* 0060125e: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00601263: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601266: je 0x601269 */ if (fZ) goto L_00601269;
L_00601268:; BB(0x00601268);
    /* 00601268: ret  */ FN_RET(0x0060125c); r_esp += 4; return;
L_00601269:; BB(0x00601269);
    /* 00601269: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 0060126f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00601271: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x601276u); f_0082e9e4();
    /* 00601276: ret  */ FN_RET(0x0060125c); r_esp += 4; return;
}

void f_00601278(void) /* sub_601278 */
{
    FN_ENTER(0x00601278);
    /* 00601278: push dword ptr [ecx + 0x244] */ { u32 v = R32((u32)(r_ecx+0x244u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060127e: lea eax, [ecx + 0x240] */ r_eax = (u32)(r_ecx+0x240u);
    /* 00601284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601285: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x60128au); f_005dd6d0();
    /* 0060128a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060128d: ret  */ FN_RET(0x00601278); r_esp += 4; return;
}

void f_00601290(void) /* sub_601290 */
{
    FN_ENTER(0x00601290);
    /* 00601290: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 00601296: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00601299: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 0060129f: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006012a1: jne 0x6012bb */ if (!fZ) goto L_006012bb;
L_006012a3:; BB(0x006012a3);
    /* 006012a3: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 006012a9: cmp eax, 0x3333 */ {  u32 a = r_eax; u32 b = 0x3333u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006012ae: jge 0x6012bb */ if ((fS==fO)) goto L_006012bb;
L_006012b0:; BB(0x006012b0);
    /* 006012b0: add eax, 0xb6 */ {  u32 a = r_eax; u32 b = 0xb6u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006012b5: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
L_006012bb:; BB(0x006012bb);
    /* 006012bb: ret  */ FN_RET(0x00601290); r_esp += 4; return;
}

void f_006012bc(void) /* sub_6012BC */
{
    FN_ENTER(0x006012bc);
    /* 006012bc: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 006012c2: cmp eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006012c7: jle 0x6012d4 */ if ((fZ||fS!=fO)) goto L_006012d4;
L_006012c9:; BB(0x006012c9);
    /* 006012c9: add eax, 0xffffff4a */ {  u32 a = r_eax; u32 b = 0xffffff4au; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006012ce: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
L_006012d4:; BB(0x006012d4);
    /* 006012d4: ret  */ FN_RET(0x006012bc); r_esp += 4; return;
}

void f_006012d8(void) /* sub_6012D8 */
{
    FN_ENTER(0x006012d8);
    /* 006012d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006012d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006012db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006012dd: push 0x8deb2c */ { u32 v = 0x8deb2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006012e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006012e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006012e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006012f0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006012f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006012f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006012f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006012fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006012ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00601302: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x601307u); f_005e90b0();
    /* 00601307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601309: je 0x601399 */ if (fZ) goto L_00601399;
L_0060130f:; BB(0x0060130f);
    /* 0060130f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00601312: lea eax, [ecx + 0x250] */ r_eax = (u32)(r_ecx+0x250u);
    /* 00601318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601319: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x60131eu); f_005e7534();
    /* 0060131e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00601321: mov edx, dword ptr [eax + 0x244] */ r_edx = R32((u32)(r_eax+0x244u));
    /* 00601327: cmp edx, 0x1999 */ {  u32 a = r_edx; u32 b = 0x1999u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060132d: jle 0x60138b */ if ((fZ||fS!=fO)) goto L_0060138b;
L_0060132f:; BB(0x0060132f);
    /* 0060132f: mov ecx, eax */ r_ecx = r_eax;
    /* 00601331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601333: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x601338u); f_005c36cc();
    /* 00601338: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060133b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060133d: je 0x60137c */ if (fZ) goto L_0060137c;
L_0060133f:; BB(0x0060133f);
    /* 0060133f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00601346: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00601348: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60134du); f_005caba4();
    /* 0060134d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060134e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00601351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601353: je 0x60137c */ if (fZ) goto L_0060137c;
L_00601355:; BB(0x00601355);
    /* 00601355: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060135c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601363: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00601366: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00601368: push 0x601248 */ { u32 v = 0x601248u; r_esp -= 4; W32(r_esp, v); }
    /* 0060136d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060136e: mov ecx, eax */ r_ecx = r_eax;
    /* 00601370: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x601375u); f_005e5b88();
    /* 00601375: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060137c:; BB(0x0060137c);
    /* 0060137c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060137f: mov dword ptr [eax + 0x24c], 0 */ W32((u32)(r_eax+0x24cu), 0x0u);
    /* 00601389: jmp 0x6013a1 */ goto L_006013a1;
L_0060138b:; BB(0x0060138b);
    /* 0060138b: push 0x43a20000 */ { u32 v = 0x43a20000u; r_esp -= 4; W32(r_esp, v); }
    /* 00601390: mov ecx, eax */ r_ecx = r_eax;
    /* 00601392: call 0x5e641c */ r_esp -= 4; W32(r_esp, 0x601397u); f_005e641c();
    /* 00601397: jmp 0x6013a1 */ goto L_006013a1;
L_00601399:; BB(0x00601399);
    /* 00601399: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060139c: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x6013a1u); f_005e90e8();
L_006013a1:; BB(0x006013a1);
    /* 006013a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006013a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006013ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006013ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006013ae: ret  */ FN_RET(0x006012d8); r_esp += 4; return;
}

void f_006013b0(void) /* sub_6013B0 */
{
    FN_ENTER(0x006013b0);
    /* 006013b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006013b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006013b2: mov esi, ecx */ r_esi = r_ecx;
    /* 006013b4: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 006013ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006013bc: je 0x6013f9 */ if (fZ) goto L_006013f9;
L_006013be:; BB(0x006013be);
    /* 006013be: mov ebp, dword ptr [esi + 0xfc] */ r_ebp = R32((u32)(r_esi+0xfcu));
    /* 006013c4: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006013c7: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006013ca: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 006013cd: mov eax, dword ptr [esi + 0x24c] */ r_eax = R32((u32)(r_esi+0x24cu));
    /* 006013d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006013d5: jne 0x6013db */ if (!fZ) goto L_006013db;
L_006013d7:; BB(0x006013d7);
    /* 006013d7: or dword ptr [ebp], 0x10 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006013db:; BB(0x006013db);
    /* 006013db: mov ecx, esi */ r_ecx = r_esi;
    /* 006013dd: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x6013e2u); f_005e84a8();
    /* 006013e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006013e4: mov ecx, esi */ r_ecx = r_esi;
    /* 006013e6: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x6013ebu); f_005e6254();
    /* 006013eb: mov eax, dword ptr [esi + 0x24c] */ r_eax = R32((u32)(r_esi+0x24cu));
    /* 006013f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006013f3: jne 0x6013f9 */ if (!fZ) goto L_006013f9;
L_006013f5:; BB(0x006013f5);
    /* 006013f5: and dword ptr [ebp], 0xffffffef */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006013f9:; BB(0x006013f9);
    /* 006013f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006013fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006013fb: ret  */ FN_RET(0x006013b0); r_esp += 4; return;
}

void f_006013fc(void) /* sub_6013FC */
{
    FN_ENTER(0x006013fc);
    /* 006013fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006013fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006013ff: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 00601405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601407: je 0x601432 */ if (fZ) goto L_00601432;
L_00601409:; BB(0x00601409);
    /* 00601409: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x60140eu); f_00807d60();
    /* 0060140e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601410: je 0x601432 */ if (fZ) goto L_00601432;
L_00601412:; BB(0x00601412);
    /* 00601412: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00601418: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 0060141e: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601424: jne 0x601432 */ if (!fZ) goto L_00601432;
L_00601426:; BB(0x00601426);
    /* 00601426: movsx edx, byte ptr [ebp + 0xf1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xf1u));
    /* 0060142d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601430: je 0x601436 */ if (fZ) goto L_00601436;
L_00601432:; BB(0x00601432);
    /* 00601432: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601433: ret 4 */ FN_RET(0x006013fc); r_esp += 8; return;
L_00601436:; BB(0x00601436);
    /* 00601436: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00601439: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060143b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060143c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060143d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060143e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00601440: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x601445u); f_00814298();
    /* 00601445: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601447: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0060144c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060144d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x601452u); f_00814664();
    /* 00601452: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601455: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601457: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0060145a: lea ecx, [ebp + 0x250] */ r_ecx = (u32)(r_ebp+0x250u);
    /* 00601460: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00601462: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601463: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601464: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601465: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00601467: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x60146du); call_ind(t); }
    /* 0060146d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060146e: ret 4 */ FN_RET(0x006013fc); r_esp += 8; return;
}

void f_00601474(void) /* sub_601474 */
{
    FN_ENTER(0x00601474);
    /* 00601474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601475: mov ebp, esp */ r_ebp = r_esp;
    /* 00601477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601479: push 0x8deb54 */ { u32 v = 0x8deb54u; r_esp -= 4; W32(r_esp, v); }
    /* 0060147e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601485: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060148c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060148f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00601492: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00601495: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00601498: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060149b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060149e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014a0: je 0x6014f7 */ if (fZ) goto L_006014f7;
L_006014a2:; BB(0x006014a2);
    /* 006014a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006014a9: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 006014ae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6014b3u); f_005caba4();
    /* 006014b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006014b4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006014b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006014b9: je 0x6014f3 */ if (fZ) goto L_006014f3;
L_006014bb:; BB(0x006014bb);
    /* 006014bb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006014c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006014c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006014cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006014cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006014d0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006014d6: call 0x601508 */ r_esp -= 4; W32(r_esp, 0x6014dbu); f_00601508();
    /* 006014db: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006014de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006014e5:; BB(0x006014e5);
    /* 006014e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006014e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006014ef: mov esp, ebp */ r_esp = r_ebp;
    /* 006014f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006014f2: ret  */ FN_RET(0x00601474); r_esp += 4; return;
L_006014f3:; BB(0x006014f3);
    /* 006014f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006014f5: jmp 0x6014e5 */ goto L_006014e5;
L_006014f7:; BB(0x006014f7);
    /* 006014f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006014f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006014fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601503: mov esp, ebp */ r_esp = r_ebp;
    /* 00601505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601506: ret  */ FN_RET(0x00601474); r_esp += 4; return;
}

void f_00601508(void) /* sub_601508 */
{
    FN_ENTER(0x00601508);
    /* 00601508: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00601509: mov edi, ecx */ r_edi = r_ecx;
    /* 0060150b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060150f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601513: mov ecx, edi */ r_ecx = r_edi;
    /* 00601515: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x60151au); f_005e959c();
    /* 0060151a: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 00601520: mov dword ptr [edi], 0xb1ce60 */ W32((u32)(r_edi), 0xb1ce60u);
    /* 00601526: or edx, 0x23 */ {  u32 a = r_edx; u32 b = 0x23u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00601529: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 0060152f: mov dword ptr [edi + 0x238], 0x601570 */ W32((u32)(r_edi+0x238u), 0x601570u);
    /* 00601539: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060153b: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 00601541: mov dword ptr [edi + 0x248], eax */ W32((u32)(r_edi+0x248u), r_eax);
    /* 00601547: mov dword ptr [edi + 0x244], 0xccc */ W32((u32)(r_edi+0x244u), 0xcccu);
    /* 00601551: mov eax, edi */ r_eax = r_edi;
    /* 00601553: mov dword ptr [edi + 0x24c], 1 */ W32((u32)(r_edi+0x24cu), 0x1u);
    /* 0060155d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060155e: ret 8 */ FN_RET(0x00601508); r_esp += 12; return;
}

void f_00601564(void) /* sub_601564 */
{
    FN_ENTER(0x00601564);
    /* 00601564: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00601567: add eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060156c: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0060156f: ret  */ FN_RET(0x00601564); r_esp += 4; return;
}

void f_00601570(void) /* sub_601570 */
{
    FN_ENTER(0x00601570);
    /* 00601570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601571: mov ebp, esp */ r_ebp = r_esp;
    /* 00601573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601575: push 0x8deb7c */ { u32 v = 0x8deb7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060157a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601581: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00601588: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060158b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060158e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00601591: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00601594: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00601597: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00601599: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060159c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060159e: je 0x6015e3 */ if (fZ) goto L_006015e3;
L_006015a0:; BB(0x006015a0);
    /* 006015a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006015a7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006015a9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6015aeu); f_005caba4();
    /* 006015ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006015af: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006015b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006015b4: je 0x6015f3 */ if (fZ) goto L_006015f3;
L_006015b6:; BB(0x006015b6);
    /* 006015b6: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006015bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006015c4: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006015c7: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006015ca: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006015cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006015d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006015d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006015d4: call 0x6015f8 */ r_esp -= 4; W32(r_esp, 0x6015d9u); f_006015f8();
    /* 006015d9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006015dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006015e3:; BB(0x006015e3);
    /* 006015e3: mov eax, edx */ r_eax = r_edx;
    /* 006015e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006015e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006015ef: mov esp, ebp */ r_esp = r_ebp;
    /* 006015f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006015f2: ret  */ FN_RET(0x00601570); r_esp += 4; return;
L_006015f3:; BB(0x006015f3);
    /* 006015f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006015f5: jmp 0x6015e3 */ goto L_006015e3;
}

void f_006015f8(void) /* sub_6015F8 */
{
    FN_ENTER(0x006015f8);
    /* 006015f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006015f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006015fb: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006015ff: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00601603: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00601607: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060160b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060160d: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x601612u); f_005e43e8();
    /* 00601612: mov dword ptr [ebp], 0xb1cf60 */ W32((u32)(r_ebp), 0xb1cf60u);
    /* 00601619: mov eax, ebp */ r_eax = r_ebp;
    /* 0060161b: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 00601622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601623: ret 0x10 */ FN_RET(0x006015f8); r_esp += 20; return;
}

void f_00601628(void) /* sub_601628 */
{
    FN_ENTER(0x00601628);
    /* 00601628: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00601629: mov esi, ecx */ r_esi = r_ecx;
    /* 0060162b: mov ecx, esi */ r_ecx = r_esi;
    /* 0060162d: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x601632u); f_005e45c0();
    /* 00601632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601634: je 0x60167b */ if (fZ) goto L_0060167b;
L_00601636:; BB(0x00601636);
    /* 00601636: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00601639: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060163b: je 0x60167b */ if (fZ) goto L_0060167b;
L_0060163d:; BB(0x0060163d);
    /* 0060163d: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 00601640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601642: je 0x60167b */ if (fZ) goto L_0060167b;
L_00601644:; BB(0x00601644);
    /* 00601644: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x601649u); f_0082d7b0();
    /* 00601649: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060164c: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x601651u); f_0081a9b8();
    /* 00601651: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601652: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 00601655: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x60165au); f_0082d838();
    /* 0060165a: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 0060165d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060165f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x601664u); f_0082d8bc();
    /* 00601664: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00601667: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00601669: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x60166eu); f_0082e9e4();
    /* 0060166e: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 00601671: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x601676u); f_00831758();
    /* 00601676: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x60167bu); f_0082da80();
L_0060167b:; BB(0x0060167b);
    /* 0060167b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060167c: ret  */ FN_RET(0x00601628); r_esp += 4; return;
}

void f_00601680(void) /* sub_601680 */
{
    FN_ENTER(0x00601680);
    /* 00601680: mov dword ptr [0xa8e2f0], 0x3f800000 */ W32((u32)(0xa8e2f0u), 0x3f800000u);
    /* 0060168a: mov dword ptr [0xa8e2f4], 0x41000000 */ W32((u32)(0xa8e2f4u), 0x41000000u);
    /* 00601694: mov dword ptr [0xa8e2f8], 0x3fc00000 */ W32((u32)(0xa8e2f8u), 0x3fc00000u);
    /* 0060169e: ret  */ FN_RET(0x00601680); r_esp += 4; return;
}

void f_006016a0(void) /* sub_6016A0 */
{
    FN_ENTER(0x006016a0);
    /* 006016a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006016a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006016a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006016a5: call 0x6016c4 */ r_esp -= 4; W32(r_esp, 0x6016aau); f_006016c4();
    /* 006016aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006016ae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006016b0: jne 0x6016b6 */ if (!fZ) goto L_006016b6;
L_006016b2:; BB(0x006016b2);
    /* 006016b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006016b3: ret 4 */ FN_RET(0x006016a0); r_esp += 8; return;
L_006016b6:; BB(0x006016b6);
    /* 006016b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006016b7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6016bcu); f_005c2f74();
    /* 006016bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006016bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006016be: ret 4 */ FN_RET(0x006016a0); r_esp += 8; return;
}

void f_006016c4(void) /* sub_6016C4 */
{
    FN_ENTER(0x006016c4);
    /* 006016c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006016c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006016c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006016c9: push 0x8deb98 */ { u32 v = 0x8deb98u; r_esp -= 4; W32(r_esp, v); }
    /* 006016ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006016d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006016d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006016dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006016df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006016e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006016e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006016e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006016eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006016ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006016f1: mov dword ptr [ecx], 0xb1cfe0 */ W32((u32)(r_ecx), 0xb1cfe0u);
    /* 006016f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006016fe: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x601703u); f_005e61c8();
    /* 00601703: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601706: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060170d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060170f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601710: ret  */ FN_RET(0x006016c4); r_esp += 4; return;
}

void f_00601714(void) /* sub_601714 */
{
    FN_ENTER(0x00601714);
    /* 00601714: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00601715: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601716: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601717: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060171a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0060171c: mov eax, dword ptr [ebp + 0x240] */ r_eax = R32((u32)(r_ebp+0x240u));
    /* 00601722: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601725: je 0x60186a */ if (fZ) goto L_0060186a;
L_0060172b:; BB(0x0060172b);
    /* 0060172b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060172e: jne 0x601772 */ if (!fZ) goto L_00601772;
L_00601730:; BB(0x00601730);
    /* 00601730: fld dword ptr [0x92e1c8] */ FPUSH(R_F32((u32)(0x92e1c8u)));
    /* 00601736: fadd dword ptr [ebp + 0x248] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x248u));
    /* 0060173c: fcom dword ptr [0x92e1c4] */ fx_compare(ST(0), R_F32((u32)(0x92e1c4u))); 
    /* 00601742: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601744: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601745: jb 0x601765 */ if (fC) goto L_00601765;
L_00601747:; BB(0x00601747);
    /* 00601747: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601749: mov dword ptr [ebp + 0x240], 3 */ W32((u32)(r_ebp+0x240u), 0x3u);
    /* 00601753: mov eax, 0x3f666666 */ r_eax = 0x3f666666u;
    /* 00601758: mov dword ptr [ebp + 0x248], eax */ W32((u32)(r_ebp+0x248u), r_eax);
    /* 0060175e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00601764: ret  */ FN_RET(0x00601714); r_esp += 4; return;
L_00601765:; BB(0x00601765);
    /* 00601765: fstp dword ptr [ebp + 0x248] */ W_F32((u32)(r_ebp+0x248u), ST(0)); FPOP();
    /* 0060176b: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060176e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060176f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601770: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00601771: ret  */ FN_RET(0x00601714); r_esp += 4; return;
L_00601772:; BB(0x00601772);
    /* 00601772: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601775: jne 0x6018a2 */ if (!fZ) goto L_006018a2;
L_0060177b:; BB(0x0060177b);
    /* 0060177b: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 00601781: mov dword ptr [ebp + 0x240], 1 */ W32((u32)(r_ebp+0x240u), 0x1u);
    /* 0060178b: lea ebx, [ebp + 0x268] */ r_ebx = (u32)(r_ebp+0x268u);
    /* 00601791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601793: je 0x6017f7 */ if (fZ) goto L_006017f7;
L_00601795:; BB(0x00601795);
    /* 00601795: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 00601798: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060179e: mov ecx, edi */ r_ecx = r_edi;
    /* 006017a0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6017a5u); f_0082dcbc();
    /* 006017a5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006017a8: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 006017b0: mov ecx, edi */ r_ecx = r_edi;
    /* 006017b2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6017b7u); f_0082ddd8();
    /* 006017b7: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 006017bd: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 006017c0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006017c4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006017c8: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 006017d0: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 006017d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006017db: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006017df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006017e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006017e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006017e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006017e3: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006017e9: call 0x5fed94 */ r_esp -= 4; W32(r_esp, 0x6017eeu); f_005fed94();
    /* 006017ee: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006017f1: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
L_006017f7:; BB(0x006017f7);
    /* 006017f7: lea ebx, [ebp + 0x274] */ r_ebx = (u32)(r_ebp+0x274u);
    /* 006017fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006017ff: je 0x6018a2 */ if (fZ) goto L_006018a2;
L_00601805:; BB(0x00601805);
    /* 00601805: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 00601808: add edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060180e: mov ecx, edi */ r_ecx = r_edi;
    /* 00601810: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x601815u); f_0082dcbc();
    /* 00601815: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00601819: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00601821: mov ecx, edi */ r_ecx = r_edi;
    /* 00601823: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x601828u); f_0082ddd8();
    /* 00601828: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 0060182e: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00601831: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00601835: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00601839: mov dword ptr [esp + 0x24], 0x4000 */ W32((u32)(r_esp+0x24u), 0x4000u);
    /* 00601841: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00601849: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0060184d: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00601851: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00601852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601853: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601855: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060185b: call 0x5fed94 */ r_esp -= 4; W32(r_esp, 0x601860u); f_005fed94();
    /* 00601860: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601863: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601866: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601867: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601868: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00601869: ret  */ FN_RET(0x00601714); r_esp += 4; return;
L_0060186a:; BB(0x0060186a);
    /* 0060186a: fld dword ptr [ebp + 0x248] */ FPUSH(R_F32((u32)(r_ebp+0x248u)));
    /* 00601870: fsub dword ptr [0x92e1c8] */ ST(0) = ST(0) - R_F32((u32)(0x92e1c8u));
    /* 00601876: fcom dword ptr [0x92e1c0] */ fx_compare(ST(0), R_F32((u32)(0x92e1c0u))); 
    /* 0060187c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060187e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0060187f: ja 0x60189c */ if ((!fC&&!fZ)) goto L_0060189c;
L_00601881:; BB(0x00601881);
    /* 00601881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601883: mov dword ptr [ebp + 0x240], 0 */ W32((u32)(r_ebp+0x240u), 0x0u);
    /* 0060188d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060188f: mov dword ptr [ebp + 0x248], eax */ W32((u32)(r_ebp+0x248u), r_eax);
    /* 00601895: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601898: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060189a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060189b: ret  */ FN_RET(0x00601714); r_esp += 4; return;
L_0060189c:; BB(0x0060189c);
    /* 0060189c: fstp dword ptr [ebp + 0x248] */ W_F32((u32)(r_ebp+0x248u), ST(0)); FPOP();
L_006018a2:; BB(0x006018a2);
    /* 006018a2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006018a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006018a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006018a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006018a8: ret  */ FN_RET(0x00601714); r_esp += 4; return;
}

void f_006018ac(void) /* sub_6018AC */
{
    FN_ENTER(0x006018ac);
    /* 006018ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006018ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006018ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006018af: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006018b1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006018b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006018b6: lea esi, [ebp + 0x250] */ r_esi = (u32)(r_ebp+0x250u);
    /* 006018bc: mov dword ptr [ebp + 0x240], 2 */ W32((u32)(r_ebp+0x240u), 0x2u);
    /* 006018c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006018c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006018ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006018cd: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x6018d3u); call_ind(t); }
    /* 006018d3: lea ebx, [ebp + 0x25c] */ r_ebx = (u32)(r_ebp+0x25cu);
    /* 006018d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006018db: je 0x6018f0 */ if (fZ) goto L_006018f0;
L_006018dd:; BB(0x006018dd);
    /* 006018dd: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006018e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006018e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006018e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006018e8: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x6018eeu); call_ind(t); }
    /* 006018ee: jmp 0x601902 */ goto L_00601902;
L_006018f0:; BB(0x006018f0);
    /* 006018f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006018f2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006018f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006018f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006018f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006018fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006018fc: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x601902u); call_ind(t); }
L_00601902:; BB(0x00601902);
    /* 00601902: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00601904: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00601905: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x60190au); f_0050b510();
    /* 0060190a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0060190c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060190d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x601912u); f_0050b510();
    /* 00601912: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601915: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601916: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601917: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00601918: ret  */ FN_RET(0x006018ac); r_esp += 4; return;
}

void f_0060191c(void) /* sub_60191C */
{
    FN_ENTER(0x0060191c);
    /* 0060191c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060191d: mov esi, ecx */ r_esi = r_ecx;
    /* 0060191f: mov ecx, esi */ r_ecx = r_esi;
    /* 00601921: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x601926u); f_005e84a8();
    /* 00601926: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 0060192c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060192d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0060192f: mov ecx, esi */ r_ecx = r_esi;
    /* 00601931: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x601936u); f_005e83c8();
    /* 00601936: lea eax, [esi + 0x268] */ r_eax = (u32)(r_esi+0x268u);
    /* 0060193c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060193d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060193f: mov ecx, esi */ r_ecx = r_esi;
    /* 00601941: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x601946u); f_005e83c8();
    /* 00601946: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00601948: mov ecx, esi */ r_ecx = r_esi;
    /* 0060194a: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x60194fu); f_005e6334();
    /* 0060194f: lea eax, [esi + 0x25c] */ r_eax = (u32)(r_esi+0x25cu);
    /* 00601955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601956: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601958: mov ecx, esi */ r_ecx = r_esi;
    /* 0060195a: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x60195fu); f_005e83c8();
    /* 0060195f: lea eax, [esi + 0x274] */ r_eax = (u32)(r_esi+0x274u);
    /* 00601965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601966: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601968: mov ecx, esi */ r_ecx = r_esi;
    /* 0060196a: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x60196fu); f_005e83c8();
    /* 0060196f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00601970: ret  */ FN_RET(0x0060191c); r_esp += 4; return;
}

void f_00601974(void) /* sub_601974 */
{
    FN_ENTER(0x00601974);
    /* 00601974: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00601979: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060197c: je 0x60197f */ if (fZ) goto L_0060197f;
L_0060197e:; BB(0x0060197e);
    /* 0060197e: ret  */ FN_RET(0x00601974); r_esp += 4; return;
L_0060197f:; BB(0x0060197f);
    /* 0060197f: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601985: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x60198au); f_0082d838();
    /* 0060198a: ret  */ FN_RET(0x00601974); r_esp += 4; return;
}

void f_0060198c(void) /* sub_60198C */
{
    FN_ENTER(0x0060198c);
    /* 0060198c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060198d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060198f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601991: push 0x8debc0 */ { u32 v = 0x8debc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060199c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060199d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006019a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006019a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006019aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006019ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006019b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006019b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006019b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006019b8: je 0x601a0f */ if (fZ) goto L_00601a0f;
L_006019ba:; BB(0x006019ba);
    /* 006019ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006019c1: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 006019c6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6019cbu); f_005caba4();
    /* 006019cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006019cc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006019cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006019d1: je 0x601a0b */ if (fZ) goto L_00601a0b;
L_006019d3:; BB(0x006019d3);
    /* 006019d3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006019da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006019e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006019e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006019e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006019e8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006019ee: call 0x601a20 */ r_esp -= 4; W32(r_esp, 0x6019f3u); f_00601a20();
    /* 006019f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006019f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006019fd:; BB(0x006019fd);
    /* 006019fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601a00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601a07: mov esp, ebp */ r_esp = r_ebp;
    /* 00601a09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601a0a: ret  */ FN_RET(0x0060198c); r_esp += 4; return;
L_00601a0b:; BB(0x00601a0b);
    /* 00601a0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601a0d: jmp 0x6019fd */ goto L_006019fd;
L_00601a0f:; BB(0x00601a0f);
    /* 00601a0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601a11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601a14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601a1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00601a1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601a1e: ret  */ FN_RET(0x0060198c); r_esp += 4; return;
}

void f_00601a20(void) /* sub_601A20 */
{
    FN_ENTER(0x00601a20);
    /* 00601a20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00601a21: mov edi, ecx */ r_edi = r_ecx;
    /* 00601a23: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601a27: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601a2b: mov ecx, edi */ r_ecx = r_edi;
    /* 00601a2d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x601a32u); f_005e959c();
    /* 00601a32: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 00601a38: mov dword ptr [edi], 0xb1cfe0 */ W32((u32)(r_edi), 0xb1cfe0u);
    /* 00601a3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601a40: mov dword ptr [edi + 0x238], eax */ W32((u32)(r_edi+0x238u), r_eax);
    /* 00601a46: mov byte ptr [edi + 0x1f4], 3 */ W8((u32)(r_edi+0x1f4u), 0x3u);
    /* 00601a4d: or edx, 0x203 */ {  u32 a = r_edx; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601a53: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 00601a59: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 00601a5f: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 00601a69: mov eax, edi */ r_eax = r_edi;
    /* 00601a6b: mov dword ptr [edi + 0x208], 0x41a00000 */ W32((u32)(r_edi+0x208u), 0x41a00000u);
    /* 00601a75: mov dword ptr [edi + 0x24c], 0 */ W32((u32)(r_edi+0x24cu), 0x0u);
    /* 00601a7f: mov dword ptr [edi + 0x248], 0 */ W32((u32)(r_edi+0x248u), 0x0u);
    /* 00601a89: mov dword ptr [edi + 0x244], 0 */ W32((u32)(r_edi+0x244u), 0x0u);
    /* 00601a93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00601a94: ret 8 */ FN_RET(0x00601a20); r_esp += 12; return;
}

void f_00601a98(void) /* sub_601A98 */
{
    FN_ENTER(0x00601a98);
    /* 00601a98: mov dword ptr [0xa8e2fc], 0x3f800000 */ W32((u32)(0xa8e2fcu), 0x3f800000u);
    /* 00601aa2: mov dword ptr [0xa8e300], 0x41000000 */ W32((u32)(0xa8e300u), 0x41000000u);
    /* 00601aac: mov dword ptr [0xa8e304], 0x3fc00000 */ W32((u32)(0xa8e304u), 0x3fc00000u);
    /* 00601ab6: ret  */ FN_RET(0x00601a98); r_esp += 4; return;
}

void f_00601ab8(void) /* sub_601AB8 */
{
    FN_ENTER(0x00601ab8);
    /* 00601ab8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ab9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00601abb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00601abd: call 0x601adc */ r_esp -= 4; W32(r_esp, 0x601ac2u); f_00601adc();
    /* 00601ac2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00601ac6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601ac8: jne 0x601ace */ if (!fZ) goto L_00601ace;
L_00601aca:; BB(0x00601aca);
    /* 00601aca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601acb: ret 4 */ FN_RET(0x00601ab8); r_esp += 8; return;
L_00601ace:; BB(0x00601ace);
    /* 00601ace: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601acf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x601ad4u); f_005c2f74();
    /* 00601ad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601ad5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601ad6: ret 4 */ FN_RET(0x00601ab8); r_esp += 8; return;
}

void f_00601adc(void) /* sub_601ADC */
{
    FN_ENTER(0x00601adc);
    /* 00601adc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601add: mov ebp, esp */ r_ebp = r_esp;
    /* 00601adf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601ae1: push 0x8debdc */ { u32 v = 0x8debdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00601ae6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601aed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00601af4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601af7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00601afa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00601afd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00601b00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00601b03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00601b06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00601b09: mov dword ptr [ecx], 0xb1d140 */ W32((u32)(r_ecx), 0xb1d140u);
    /* 00601b0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00601b16: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x601b1bu); f_005e61c8();
    /* 00601b1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601b1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601b25: mov esp, ebp */ r_esp = r_ebp;
    /* 00601b27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601b28: ret  */ FN_RET(0x00601adc); r_esp += 4; return;
}

void f_00601b2c(void) /* sub_601B2C */
{
    FN_ENTER(0x00601b2c);
    /* 00601b2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00601b2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601b2e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601b31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00601b33: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00601b39: mov dword ptr [ebx + 0x24c], 2 */ W32((u32)(r_ebx+0x24cu), 0x2u);
    /* 00601b43: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 00601b46: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00601b4c: mov ecx, edi */ r_ecx = r_edi;
    /* 00601b4e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x601b53u); f_0082dcbc();
    /* 00601b53: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00601b56: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00601b5e: mov ecx, edi */ r_ecx = r_edi;
    /* 00601b60: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x601b65u); f_0082ddd8();
    /* 00601b65: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00601b6b: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00601b6e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00601b72: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00601b76: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 00601b7e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00601b86: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00601b89: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 00601b8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00601b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601b8f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601b91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601b92: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601b98: call 0x5fec70 */ r_esp -= 4; W32(r_esp, 0x601b9du); f_005fec70();
    /* 00601b9d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601ba0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00601ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601ba5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ba7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00601ba9: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x601baeu); f_005e83c8();
    /* 00601bae: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00601bb2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00601bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601bb5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x601bbau); f_0050b510();
    /* 00601bba: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601bbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601bbe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00601bbf: ret  */ FN_RET(0x00601b2c); r_esp += 4; return;
}

void f_00601bc0(void) /* sub_601BC0 */
{
    FN_ENTER(0x00601bc0);
    /* 00601bc0: mov eax, dword ptr [ecx + 0x24c] */ r_eax = R32((u32)(r_ecx+0x24cu));
    /* 00601bc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601bc9: je 0x601c27 */ if (fZ) goto L_00601c27;
L_00601bcb:; BB(0x00601bcb);
    /* 00601bcb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601bce: jne 0x601c17 */ if (!fZ) goto L_00601c17;
L_00601bd0:; BB(0x00601bd0);
    /* 00601bd0: fld dword ptr [0x92e1f0] */ FPUSH(R_F32((u32)(0x92e1f0u)));
    /* 00601bd6: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 00601bdc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00601bde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601be0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601be1: jae 0x601c69 */ if (!fC) goto L_00601c69;
L_00601be7:; BB(0x00601be7);
    /* 00601be7: fld dword ptr [0x92e1ec] */ FPUSH(R_F32((u32)(0x92e1ecu)));
    /* 00601bed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00601bef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00601bf1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00601bf3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601bf5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601bf6: ja 0x601c10 */ if ((!fC&&!fZ)) goto L_00601c10;
L_00601bf8:; BB(0x00601bf8);
    /* 00601bf8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601bfa: mov dword ptr [ecx + 0x24c], 3 */ W32((u32)(r_ecx+0x24cu), 0x3u);
    /* 00601c04: mov eax, 0x3fb33333 */ r_eax = 0x3fb33333u;
    /* 00601c09: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 00601c0f: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
L_00601c10:; BB(0x00601c10);
    /* 00601c10: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
    /* 00601c16: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
L_00601c17:; BB(0x00601c17);
    /* 00601c17: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601c1a: jne 0x601c68 */ if (!fZ) goto L_00601c68;
L_00601c1c:; BB(0x00601c1c);
    /* 00601c1c: mov dword ptr [ecx + 0x24c], 1 */ W32((u32)(r_ecx+0x24cu), 0x1u);
    /* 00601c26: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
L_00601c27:; BB(0x00601c27);
    /* 00601c27: fld dword ptr [0x92e1e8] */ FPUSH(R_F32((u32)(0x92e1e8u)));
    /* 00601c2d: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 00601c33: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00601c35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601c37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601c38: jbe 0x601c6e */ if ((fC||fZ)) goto L_00601c6e;
L_00601c3a:; BB(0x00601c3a);
    /* 00601c3a: fld dword ptr [0x92e1ec] */ FPUSH(R_F32((u32)(0x92e1ecu)));
    /* 00601c40: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00601c42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00601c44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00601c46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601c48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601c4a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601c4b: ja 0x601c62 */ if ((!fC&&!fZ)) goto L_00601c62;
L_00601c4d:; BB(0x00601c4d);
    /* 00601c4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601c4f: mov dword ptr [ecx + 0x24c], 0 */ W32((u32)(r_ecx+0x24cu), 0x0u);
    /* 00601c59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601c5b: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 00601c61: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
L_00601c62:; BB(0x00601c62);
    /* 00601c62: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
L_00601c68:; BB(0x00601c68);
    /* 00601c68: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
L_00601c69:; BB(0x00601c69);
    /* 00601c69: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00601c6b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601c6d: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
L_00601c6e:; BB(0x00601c6e);
    /* 00601c6e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00601c70: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601c72: ret  */ FN_RET(0x00601bc0); r_esp += 4; return;
}

void f_00601c74(void) /* sub_601C74 */
{
    FN_ENTER(0x00601c74);
    /* 00601c74: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00601c79: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601c7c: je 0x601c7f */ if (fZ) goto L_00601c7f;
L_00601c7e:; BB(0x00601c7e);
    /* 00601c7e: ret  */ FN_RET(0x00601c74); r_esp += 4; return;
L_00601c7f:; BB(0x00601c7f);
    /* 00601c7f: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601c85: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x601c8au); f_0082d838();
    /* 00601c8a: ret  */ FN_RET(0x00601c74); r_esp += 4; return;
}

void f_00601c8c(void) /* sub_601C8C */
{
    FN_ENTER(0x00601c8c);
    /* 00601c8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601c8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00601c8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601c91: push 0x8dec04 */ { u32 v = 0x8dec04u; r_esp -= 4; W32(r_esp, v); }
    /* 00601c96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601c9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601c9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00601ca4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601ca7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00601caa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00601cad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00601cb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00601cb3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601cb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601cb8: je 0x601d0f */ if (fZ) goto L_00601d0f;
L_00601cba:; BB(0x00601cba);
    /* 00601cba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00601cc1: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 00601cc6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x601ccbu); f_005caba4();
    /* 00601ccb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601ccc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00601ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601cd1: je 0x601d0b */ if (fZ) goto L_00601d0b;
L_00601cd3:; BB(0x00601cd3);
    /* 00601cd3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00601cda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601ce1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601ce4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00601ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601ce8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601cee: call 0x601d20 */ r_esp -= 4; W32(r_esp, 0x601cf3u); f_00601d20();
    /* 00601cf3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00601cf6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00601cfd:; BB(0x00601cfd);
    /* 00601cfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601d00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601d07: mov esp, ebp */ r_esp = r_ebp;
    /* 00601d09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601d0a: ret  */ FN_RET(0x00601c8c); r_esp += 4; return;
L_00601d0b:; BB(0x00601d0b);
    /* 00601d0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601d0d: jmp 0x601cfd */ goto L_00601cfd;
L_00601d0f:; BB(0x00601d0f);
    /* 00601d0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601d11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601d14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601d1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00601d1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601d1e: ret  */ FN_RET(0x00601c8c); r_esp += 4; return;
}

void f_00601d20(void) /* sub_601D20 */
{
    FN_ENTER(0x00601d20);
    /* 00601d20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601d21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00601d23: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601d27: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601d2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00601d2d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x601d32u); f_005e959c();
    /* 00601d32: mov dword ptr [ebx], 0xb1d140 */ W32((u32)(r_ebx), 0xb1d140u);
    /* 00601d38: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601d3a: mov dword ptr [ebx + 0x238], edx */ W32((u32)(r_ebx+0x238u), r_edx);
    /* 00601d40: mov dword ptr [ebx + 0x24c], edx */ W32((u32)(r_ebx+0x24cu), r_edx);
    /* 00601d46: mov dword ptr [ebx + 0x234], 0x5cf288 */ W32((u32)(r_ebx+0x234u), 0x5cf288u);
    /* 00601d50: mov eax, ebx */ r_eax = r_ebx;
    /* 00601d52: mov dword ptr [ebx + 0x208], 0x41a00000 */ W32((u32)(r_ebx+0x208u), 0x41a00000u);
    /* 00601d5c: mov dword ptr [ebx + 0x248], 0 */ W32((u32)(r_ebx+0x248u), 0x0u);
    /* 00601d66: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 00601d70: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 00601d7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601d7b: ret 8 */ FN_RET(0x00601d20); r_esp += 12; return;
}

void f_00601d80(void) /* sub_601D80 */
{
    FN_ENTER(0x00601d80);
    /* 00601d80: mov dword ptr [0xa8e308], 0x3f800000 */ W32((u32)(0xa8e308u), 0x3f800000u);
    /* 00601d8a: mov dword ptr [0xa8e30c], 0x41000000 */ W32((u32)(0xa8e30cu), 0x41000000u);
    /* 00601d94: mov dword ptr [0xa8e310], 0x3fc00000 */ W32((u32)(0xa8e310u), 0x3fc00000u);
    /* 00601d9e: ret  */ FN_RET(0x00601d80); r_esp += 4; return;
}

void f_00601da0(void) /* sub_601DA0 */
{
    FN_ENTER(0x00601da0);
    /* 00601da0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601da1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00601da3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00601da5: call 0x601dc4 */ r_esp -= 4; W32(r_esp, 0x601daau); f_00601dc4();
    /* 00601daa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00601dae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601db0: jne 0x601db6 */ if (!fZ) goto L_00601db6;
L_00601db2:; BB(0x00601db2);
    /* 00601db2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601db3: ret 4 */ FN_RET(0x00601da0); r_esp += 8; return;
L_00601db6:; BB(0x00601db6);
    /* 00601db6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601db7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x601dbcu); f_005c2f74();
    /* 00601dbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601dbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601dbe: ret 4 */ FN_RET(0x00601da0); r_esp += 8; return;
}

void f_00601dc4(void) /* sub_601DC4 */
{
    FN_ENTER(0x00601dc4);
    /* 00601dc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601dc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00601dc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601dc9: push 0x8dec20 */ { u32 v = 0x8dec20u; r_esp -= 4; W32(r_esp, v); }
    /* 00601dce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601dd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00601ddc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601ddf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00601de2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00601de5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00601de8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00601deb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00601dee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00601df1: mov dword ptr [ecx], 0xb1d2a0 */ W32((u32)(r_ecx), 0xb1d2a0u);
    /* 00601df7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00601dfe: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x601e03u); f_005e61c8();
    /* 00601e03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601e06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601e0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00601e0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601e10: ret  */ FN_RET(0x00601dc4); r_esp += 4; return;
}

void f_00601e14(void) /* sub_601E14 */
{
    FN_ENTER(0x00601e14);
    /* 00601e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601e15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601e16: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601e19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00601e1b: mov eax, dword ptr [ebx + 0x250] */ r_eax = R32((u32)(r_ebx+0x250u));
    /* 00601e21: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601e24: je 0x601eeb */ if (fZ) goto L_00601eeb;
L_00601e2a:; BB(0x00601e2a);
    /* 00601e2a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601e2d: jne 0x601e6f */ if (!fZ) goto L_00601e6f;
L_00601e2f:; BB(0x00601e2f);
    /* 00601e2f: fld dword ptr [0x92e220] */ FPUSH(R_F32((u32)(0x92e220u)));
    /* 00601e35: fadd dword ptr [ebx + 0x258] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x258u));
    /* 00601e3b: fcom dword ptr [0x92e21c] */ fx_compare(ST(0), R_F32((u32)(0x92e21cu))); 
    /* 00601e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601e44: jb 0x601e63 */ if (fC) goto L_00601e63;
L_00601e46:; BB(0x00601e46);
    /* 00601e46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601e48: mov dword ptr [ebx + 0x250], 3 */ W32((u32)(r_ebx+0x250u), 0x3u);
    /* 00601e52: mov eax, 0x3fb33333 */ r_eax = 0x3fb33333u;
    /* 00601e57: mov dword ptr [ebx + 0x258], eax */ W32((u32)(r_ebx+0x258u), r_eax);
    /* 00601e5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601e60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601e61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601e62: ret  */ FN_RET(0x00601e14); r_esp += 4; return;
L_00601e63:; BB(0x00601e63);
    /* 00601e63: fstp dword ptr [ebx + 0x258] */ W_F32((u32)(r_ebx+0x258u), ST(0)); FPOP();
    /* 00601e69: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601e6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601e6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601e6e: ret  */ FN_RET(0x00601e14); r_esp += 4; return;
L_00601e6f:; BB(0x00601e6f);
    /* 00601e6f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601e72: jne 0x601f22 */ if (!fZ) goto L_00601f22;
L_00601e78:; BB(0x00601e78);
    /* 00601e78: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00601e7e: mov dword ptr [ebx + 0x250], 1 */ W32((u32)(r_ebx+0x250u), 0x1u);
    /* 00601e88: mov ebp, dword ptr [eax + 0x60] */ r_ebp = R32((u32)(r_eax+0x60u));
    /* 00601e8b: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00601e91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00601e93: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x601e98u); f_0082dcbc();
    /* 00601e98: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00601e9b: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00601ea3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00601ea5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x601eaau); f_0082ddd8();
    /* 00601eaa: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00601eb0: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00601eb3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00601eb7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00601ebb: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 00601ec3: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00601ecb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00601ece: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 00601ed2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601ed4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ed6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ed7: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00601edd: call 0x5fec70 */ r_esp -= 4; W32(r_esp, 0x601ee2u); f_005fec70();
    /* 00601ee2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601ee5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601ee8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601ee9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601eea: ret  */ FN_RET(0x00601e14); r_esp += 4; return;
L_00601eeb:; BB(0x00601eeb);
    /* 00601eeb: fld dword ptr [ebx + 0x258] */ FPUSH(R_F32((u32)(r_ebx+0x258u)));
    /* 00601ef1: fsub dword ptr [0x92e220] */ ST(0) = ST(0) - R_F32((u32)(0x92e220u));
    /* 00601ef7: fcom dword ptr [0x92e218] */ fx_compare(ST(0), R_F32((u32)(0x92e218u))); 
    /* 00601efd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00601eff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00601f00: ja 0x601f1c */ if ((!fC&&!fZ)) goto L_00601f1c;
L_00601f02:; BB(0x00601f02);
    /* 00601f02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00601f04: mov dword ptr [ebx + 0x250], 0 */ W32((u32)(r_ebx+0x250u), 0x0u);
    /* 00601f0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601f10: mov dword ptr [ebx + 0x258], eax */ W32((u32)(r_ebx+0x258u), r_eax);
    /* 00601f16: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601f19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601f1b: ret  */ FN_RET(0x00601e14); r_esp += 4; return;
L_00601f1c:; BB(0x00601f1c);
    /* 00601f1c: fstp dword ptr [ebx + 0x258] */ W_F32((u32)(r_ebx+0x258u), ST(0)); FPOP();
L_00601f22:; BB(0x00601f22);
    /* 00601f22: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601f25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00601f26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601f27: ret  */ FN_RET(0x00601e14); r_esp += 4; return;
}

void f_00601f28(void) /* sub_601F28 */
{
    FN_ENTER(0x00601f28);
    /* 00601f28: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 00601f2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601f30: jne 0x601f5e */ if (!fZ) goto L_00601f5e;
L_00601f32:; BB(0x00601f32);
    /* 00601f32: mov dword ptr [ecx + 0x24c], 0x3f800000 */ W32((u32)(r_ecx+0x24cu), 0x3f800000u);
    /* 00601f3c: mov eax, 0 */ r_eax = 0x0u;
    /* 00601f41: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00601f44: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 00601f4a: mov dword ptr [ecx + 0x248], 0x3f800000 */ W32((u32)(r_ecx+0x248u), 0x3f800000u);
    /* 00601f54: mov dword ptr [ecx + 0x244], 0x3f800000 */ W32((u32)(r_ecx+0x244u), 0x3f800000u);
L_00601f5e:; BB(0x00601f5e);
    /* 00601f5e: ret  */ FN_RET(0x00601f28); r_esp += 4; return;
}

void f_00601f60(void) /* sub_601F60 */
{
    FN_ENTER(0x00601f60);
    /* 00601f60: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 00601f66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601f69: jne 0x601f99 */ if (!fZ) goto L_00601f99;
L_00601f6b:; BB(0x00601f6b);
    /* 00601f6b: mov dword ptr [ecx + 0x24c], 0x3727c5ac */ W32((u32)(r_ecx+0x24cu), 0x3727c5acu);
    /* 00601f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00601f77: mov eax, 0 */ r_eax = 0x0u;
    /* 00601f7c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00601f7f: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 00601f85: mov dword ptr [ecx + 0x248], 0x3727c5ac */ W32((u32)(r_ecx+0x248u), 0x3727c5acu);
    /* 00601f8f: mov dword ptr [ecx + 0x244], 0x3727c5ac */ W32((u32)(r_ecx+0x244u), 0x3727c5acu);
L_00601f99:; BB(0x00601f99);
    /* 00601f99: ret  */ FN_RET(0x00601f60); r_esp += 4; return;
}

void f_00601f9c(void) /* sub_601F9C */
{
    FN_ENTER(0x00601f9c);
    /* 00601f9c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601f9f: mov dword ptr [ecx + 0x250], 2 */ W32((u32)(r_ecx+0x250u), 0x2u);
    /* 00601fa9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00601fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601fad: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x601fb2u); f_005e7534();
    /* 00601fb2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00601fb5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00601fb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601fb8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x601fbdu); f_0050b510();
    /* 00601fbd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00601fc0: ret  */ FN_RET(0x00601f9c); r_esp += 4; return;
}

void f_00601fc4(void) /* sub_601FC4 */
{
    FN_ENTER(0x00601fc4);
    /* 00601fc4: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00601fc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601fcc: jne 0x601fda */ if (!fZ) goto L_00601fda;
L_00601fce:; BB(0x00601fce);
    /* 00601fce: add ecx, 0x254 */ {  u32 a = r_ecx; u32 b = 0x254u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601fd4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x601fd9u); f_0082d838();
    /* 00601fd9: ret  */ FN_RET(0x00601fc4); r_esp += 4; return;
L_00601fda:; BB(0x00601fda);
    /* 00601fda: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601fdd: jne 0x601fea */ if (!fZ) goto L_00601fea;
L_00601fdf:; BB(0x00601fdf);
    /* 00601fdf: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00601fe5: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x601feau); f_00831290();
L_00601fea:; BB(0x00601fea);
    /* 00601fea: ret  */ FN_RET(0x00601fc4); r_esp += 4; return;
}

void f_00601fec(void) /* sub_601FEC */
{
    FN_ENTER(0x00601fec);
    /* 00601fec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601fed: mov ebp, esp */ r_ebp = r_esp;
    /* 00601fef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601ff1: push 0x8dec48 */ { u32 v = 0x8dec48u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ff6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601ffd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602004: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602007: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060200a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060200d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00602010: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00602013: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602016: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602018: je 0x60206f */ if (fZ) goto L_0060206f;
L_0060201a:; BB(0x0060201a);
    /* 0060201a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00602021: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00602026: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60202bu); f_005caba4();
    /* 0060202b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060202c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060202f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602031: je 0x60206b */ if (fZ) goto L_0060206b;
L_00602033:; BB(0x00602033);
    /* 00602033: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060203a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602041: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602044: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602048: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060204e: call 0x602080 */ r_esp -= 4; W32(r_esp, 0x602053u); f_00602080();
    /* 00602053: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602056: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060205d:; BB(0x0060205d);
    /* 0060205d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602060: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602067: mov esp, ebp */ r_esp = r_ebp;
    /* 00602069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060206a: ret  */ FN_RET(0x00601fec); r_esp += 4; return;
L_0060206b:; BB(0x0060206b);
    /* 0060206b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060206d: jmp 0x60205d */ goto L_0060205d;
L_0060206f:; BB(0x0060206f);
    /* 0060206f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060207b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060207d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060207e: ret  */ FN_RET(0x00601fec); r_esp += 4; return;
}

