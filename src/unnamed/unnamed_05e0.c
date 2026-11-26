#include "protos.h"

void f_005e0000(void)
{
    FN_ENTER(0x005e0000);
    goto L_005e0000;
L_005dffec:; BB(0x005dffec);
    /* 005dffec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dffef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfff6: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfff9: ret 4 */ FN_RET(0x005e0000); r_esp += 8; return;
L_005e0000:; BB(0x005e0000);
    /* 005e0000: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0005u); f_005c2f74();
    /* 005e0005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0006: jmp 0x5dffec */ goto L_005dffec;
}

void f_005e0008(void) /* sub_5E0008 */
{
    FN_ENTER(0x005e0008);
    /* 005e0008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0009: mov ebp, esp */ r_ebp = r_esp;
    /* 005e000b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e000d: push 0x8db208 */ { u32 v = 0x8db208u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0012: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0019: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0020: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0023: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0026: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e0029: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e002c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e002f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0032: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e0035: mov eax, ecx */ r_eax = r_ecx;
    /* 005e0037: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005e003d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e0044: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e0049u); f_005e5c50();
    /* 005e0049: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e004c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e004e: jne 0x5e0060 */ if (!fZ) goto L_005e0060;
L_005e0050:; BB(0x005e0050);
    /* 005e0050: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0053: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e005a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e005c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e005d: ret 4 */ FN_RET(0x005e0008); r_esp += 8; return;
L_005e0060:; BB(0x005e0060);
    /* 005e0060: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0064: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0069u); f_005c2f74();
    /* 005e0069: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e006a: jmp 0x5e0050 */ goto L_005e0050;
}

void f_005e0025(void)
{
    FN_ENTER(0x005e0025);
}

void f_005e003e(void)
{
    FN_ENTER(0x005e003e);
    /* 005e003e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e003f: cld  */ rt_df = 0;
    UNSUP(0x005e0040, "falls out of decoded code");
}

void f_005e006c(void) /* sub_5E006C */
{
    FN_ENTER(0x005e006c);
    /* 005e006c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e006d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e006f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0071: push 0x8db224 */ { u32 v = 0x8db224u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0076: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e007c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e007d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0084: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0087: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e008a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e008d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e0090: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e0093: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0096: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e0099: mov eax, ecx */ r_eax = r_ecx;
    /* 005e009b: mov dword ptr [eax], 0xb0f2f0 */ W32((u32)(r_eax), 0xb0f2f0u);
    /* 005e00a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e00a8: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e00adu); f_005e5c50();
    /* 005e00ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e00b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e00b2: jne 0x5e00c4 */ if (!fZ) goto L_005e00c4;
L_005e00b4:; BB(0x005e00b4);
    /* 005e00b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e00b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e00be: mov esp, ebp */ r_esp = r_ebp;
    /* 005e00c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e00c1: ret 4 */ FN_RET(0x005e006c); r_esp += 8; return;
L_005e00c4:; BB(0x005e00c4);
    /* 005e00c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e00c8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e00cdu); f_005c2f74();
    /* 005e00cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e00ce: jmp 0x5e00b4 */ goto L_005e00b4;
}

void f_005e00d0(void) /* sub_5E00D0 */
{
    FN_ENTER(0x005e00d0);
    /* 005e00d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e00d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e00d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e00d5: push 0x8db240 */ { u32 v = 0x8db240u; r_esp -= 4; W32(r_esp, v); }
    /* 005e00da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e00e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e00e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e00e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e00eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e00ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e00f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e00f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e00f7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e00fa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e00fd: mov eax, ecx */ r_eax = r_ecx;
    /* 005e00ff: mov dword ptr [eax], 0xb0f320 */ W32((u32)(r_eax), 0xb0f320u);
    /* 005e0105: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e010c: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e0111u); f_005d1654();
    /* 005e0111: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0114: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0116: jne 0x5e0128 */ if (!fZ) goto L_005e0128;
L_005e0118:; BB(0x005e0118);
    /* 005e0118: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e011b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0122: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0124: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0125: ret 4 */ FN_RET(0x005e00d0); r_esp += 8; return;
L_005e0128:; BB(0x005e0128);
    /* 005e0128: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e012b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e012c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0131u); f_005c2f74();
    /* 005e0131: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0132: jmp 0x5e0118 */ goto L_005e0118;
}

void f_005e0134(void) /* sub_5E0134 */
{
    FN_ENTER(0x005e0134);
    /* 005e0134: movzx eax, byte ptr [ecx + 0x1bb] */ r_eax = (u32)R8((u32)(r_ecx+0x1bbu));
    /* 005e013b: movzx edx, byte ptr [ecx + 0x1b9] */ r_edx = (u32)R8((u32)(r_ecx+0x1b9u));
    /* 005e0142: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0144: jge 0x5e014d */ if ((fS==fO)) goto L_005e014d;
L_005e0146:; BB(0x005e0146);
    /* 005e0146: mov byte ptr [ecx + 0x1b9], 0 */ W8((u32)(r_ecx+0x1b9u), 0x0u);
L_005e014d:; BB(0x005e014d);
    /* 005e014d: movzx eax, byte ptr [ecx + 0x1bc] */ r_eax = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 005e0154: movzx edx, byte ptr [ecx + 0x1ba] */ r_edx = (u32)R8((u32)(r_ecx+0x1bau));
    /* 005e015b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e015d: jge 0x5e0166 */ if ((fS==fO)) goto L_005e0166;
L_005e015f:; BB(0x005e015f);
    /* 005e015f: mov byte ptr [ecx + 0x1ba], 0 */ W8((u32)(r_ecx+0x1bau), 0x0u);
L_005e0166:; BB(0x005e0166);
    /* 005e0166: ret  */ FN_RET(0x005e0134); r_esp += 4; return;
}

void f_005e0168(void) /* sub_5E0168 */
{
    FN_ENTER(0x005e0168);
    /* 005e0168: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005e016e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0170: jne 0x5e0183 */ if (!fZ) goto L_005e0183;
L_005e0172:; BB(0x005e0172);
    /* 005e0172: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e0178: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005e017c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e017d: call 0x5cbb04 */ r_esp -= 4; W32(r_esp, 0x5e0182u); f_005cbb04();
    /* 005e0182: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005e0183:; BB(0x005e0183);
    /* 005e0183: ret  */ FN_RET(0x005e0168); r_esp += 4; return;
}

void f_005e0184(void) /* sub_5E0184 */
{
    FN_ENTER(0x005e0184);
    /* 005e0184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0185: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0189: push 0x8db324 */ { u32 v = 0x8db324u; r_esp -= 4; W32(r_esp, v); }
    /* 005e018e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0195: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e019c: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e019f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e01a2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005e01a5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005e01a8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005e01ab: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005e01b1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e01b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e01b6: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e01bc:; BB(0x005e01bc);
    /* 005e01bc: mov eax, ecx */ r_eax = r_ecx;
    /* 005e01be: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005e01c5: lea edx, [eax - 0x1b] */ r_edx = (u32)(r_eax+0xffffffe5u);
    /* 005e01c8: cmp edx, 0x31 */ {  u32 a = r_edx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e01cb: ja 0x5e049f */ if ((!fC&&!fZ)) goto L_005e049f;
L_005e01d1:; BB(0x005e01d1);
    /* 005e01d1: mov eax, dword ptr [eax*4 + 0x92ce14] */ r_eax = R32((u32)(r_eax*4+0x92ce14u));
    /* 005e01d8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e0184); r_esp += 4; return;
}

void f_005e01da(void)
{
    FN_ENTER(0x005e01da);
    /* 005e01da: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e01e1: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e01e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e01e8u); f_005caba4();
    /* 005e01e8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e01eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e01ee: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e01f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e01f3: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e01f9:; BB(0x005e01f9);
    /* 005e01f9: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005e0200: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005e0207: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e020a: mov ecx, eax */ r_ecx = r_eax;
    /* 005e020c: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0211: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e0218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0219: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e021f: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e0224u); f_005e5cac();
    /* 005e0224: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0227: mov dword ptr [eax], 0xb0f2c0 */ W32((u32)(r_eax), 0xb0f2c0u);
    /* 005e022d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e0234: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e01da); r_esp += 4; return;
}

void f_005e0239(void)
{
    FN_ENTER(0x005e0239);
    /* 005e0239: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e0240: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0242: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0247u); f_005caba4();
    /* 005e0247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0248: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e024b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e024d: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e0253:; BB(0x005e0253);
    /* 005e0253: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e025a: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005e0261: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0264: movzx edx, word ptr [ebx + 0xe4] */ r_edx = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005e026b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e026c: mov ecx, eax */ r_ecx = r_eax;
    /* 005e026e: push dword ptr [ebx + 0x18c] */ { u32 v = R32((u32)(r_ebx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0274: call 0x5cbf28 */ r_esp -= 4; W32(r_esp, 0x5e0279u); f_005cbf28();
    /* 005e0279: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e0280: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e0239); r_esp += 4; return;
}

void f_005e0285(void)
{
    FN_ENTER(0x005e0285);
    /* 005e0285: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005e028c: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e028e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0293u); f_005caba4();
    /* 005e0293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0294: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e0297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0299: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e029f:; BB(0x005e029f);
    /* 005e029f: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005e02a6: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005e02ad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e02b0: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e02b3: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005e02b8: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e02bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e02c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e02c2: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e02c8: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e02cdu); f_005e5cac();
    /* 005e02cd: mov dword ptr [ebx], 0xb0d8e0 */ W32((u32)(r_ebx), 0xb0d8e0u);
    /* 005e02d3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005e02da: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e0285); r_esp += 4; return;
}

void f_005e02df(void)
{
    FN_ENTER(0x005e02df);
    /* 005e02df: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e02e6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e02e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e02edu); f_005caba4();
    /* 005e02ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e02ee: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e02f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e02f3: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e02f9:; BB(0x005e02f9);
    /* 005e02f9: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005e0300: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005e0307: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e030a: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e030d: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0312: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e0319: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e031b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e031c: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0322: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e0327u); f_005e5cac();
    /* 005e0327: mov dword ptr [ebx], 0xb0d8e0 */ W32((u32)(r_ebx), 0xb0d8e0u);
    /* 005e032d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e0334: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e02df); r_esp += 4; return;
}

void f_005e0339(void)
{
    FN_ENTER(0x005e0339);
    /* 005e0339: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005e0340: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0342: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0347u); f_005caba4();
    /* 005e0347: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0348: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e034b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e034d: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e0353:; BB(0x005e0353);
    /* 005e0353: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005e035a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e0361: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0364: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e0367: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e036c: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e0373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e0375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0376: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e037c: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e0381u); f_005e5cac();
    /* 005e0381: mov dword ptr [ebx], 0xb0d8e0 */ W32((u32)(r_ebx), 0xb0d8e0u);
    /* 005e0387: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005e038e: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e0339); r_esp += 4; return;
}

void f_005e0393(void)
{
    FN_ENTER(0x005e0393);
    /* 005e0393: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005e039a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e039c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e03a1u); f_005caba4();
    /* 005e03a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e03a2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e03a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e03a7: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e03ad:; BB(0x005e03ad);
    /* 005e03ad: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005e03b4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e03bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e03be: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e03c1: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e03c6: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e03cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e03cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e03d0: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e03d6: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e03dbu); f_005e5cac();
    /* 005e03db: mov dword ptr [ebx], 0xb0d8e0 */ W32((u32)(r_ebx), 0xb0d8e0u);
    /* 005e03e1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005e03e8: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e0393); r_esp += 4; return;
}

void f_005e03ed(void)
{
    FN_ENTER(0x005e03ed);
    /* 005e03ed: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005e03f4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e03f6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e03fbu); f_005caba4();
    /* 005e03fb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e03fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0401: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005e0404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0406: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e040c:; BB(0x005e040c);
    /* 005e040c: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005e0413: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e041a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e041d: mov ecx, eax */ r_ecx = r_eax;
    /* 005e041f: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0424: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e042b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e042c: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0432: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e0437u); f_005e5cac();
    /* 005e0437: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e043a: mov dword ptr [eax], 0xb0f2f0 */ W32((u32)(r_eax), 0xb0f2f0u);
    /* 005e0440: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005e0447: jmp 0x5e049f */ goto L_005e049f;
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e03ed); r_esp += 4; return;
}

void f_005e0449(void)
{
    FN_ENTER(0x005e0449);
    /* 005e0449: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005e0450: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0452: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0457u); f_005caba4();
    /* 005e0457: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e045a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e045d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005e0460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0462: je 0x5e049f */ if (fZ) goto L_005e049f;
L_005e0464:; BB(0x005e0464);
    /* 005e0464: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005e046b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0472: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0475: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0477: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005e047c: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e0483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0484: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e048a: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e048fu); f_005e5cac();
    /* 005e048f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0492: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005e0498: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005e049f:; BB(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e0449); r_esp += 4; return;
}

void f_005e049f(void)
{
    FN_ENTER(0x005e049f);
    /* 005e049f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e04a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e04a5: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e04ab: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e04b2: mov word ptr [ecx + 0x1be], dx */ W16((u32)(r_ecx+0x1beu), (u16)r_edx);
    /* 005e04b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e04bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e04c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e04c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e04c6: ret  */ FN_RET(0x005e049f); r_esp += 4; return;
}

void f_005e04c8(void) /* sub_5E04C8 */
{
    FN_ENTER(0x005e04c8);
    /* 005e04c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e04c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e04cb: movzx edx, byte ptr [ebp + 0xf4] */ r_edx = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005e04d2: lea eax, [edx - 0x3c] */ r_eax = (u32)(r_edx+0xffffffc4u);
    /* 005e04d5: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e04d8: ja 0x5e0506 */ if ((!fC&&!fZ)) goto L_005e0506;
L_005e04da:; BB(0x005e04da);
    /* 005e04da: mov eax, dword ptr [edx*4 + 0x92ce70] */ r_eax = R32((u32)(r_edx*4+0x92ce70u));
    /* 005e04e1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005e0506:; BB(0x005e0506);
    /* 005e0506: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e050b: mov word ptr [ebp + 0x1be], ax */ W16((u32)(r_ebp+0x1beu), (u16)r_eax);
    /* 005e0512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0513: ret  */ FN_RET(0x005e04c8); r_esp += 4; return;
}

void f_005e04e3(void)
{
    FN_ENTER(0x005e04e3);
    /* 005e04e3: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e04e9: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x5e04eeu); f_00688e9c();
    /* 005e04ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e04f0: je 0x5e0506 */ if (fZ) goto L_005e0506;
L_005e04f2:; BB(0x005e04f2);
    /* 005e04f2: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e04f8: call 0x688eb4 */ r_esp -= 4; W32(r_esp, 0x5e04fdu); f_00688eb4();
    /* 005e04fd: jmp 0x5e0506 */ goto L_005e0506;
L_005e0506:; BB(0x005e0506);
    /* 005e0506: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e050b: mov word ptr [ebp + 0x1be], ax */ W16((u32)(r_ebp+0x1beu), (u16)r_eax);
    /* 005e0512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0513: ret  */ FN_RET(0x005e04e3); r_esp += 4; return;
}

void f_005e04ff(void)
{
    FN_ENTER(0x005e04ff);
    /* 005e04ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0501: call 0x5d1978 */ r_esp -= 4; W32(r_esp, 0x5e0506u); f_005d1978();
    /* 005e0506: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e050b: mov word ptr [ebp + 0x1be], ax */ W16((u32)(r_ebp+0x1beu), (u16)r_eax);
    /* 005e0512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0513: ret  */ FN_RET(0x005e04ff); r_esp += 4; return;
}

void f_005e0506(void)
{
    FN_ENTER(0x005e0506);
    /* 005e0506: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e050b: mov word ptr [ebp + 0x1be], ax */ W16((u32)(r_ebp+0x1beu), (u16)r_eax);
    /* 005e0512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0513: ret  */ FN_RET(0x005e0506); r_esp += 4; return;
}

void f_005e0514(void) /* sub_5E0514 */
{
    FN_ENTER(0x005e0514);
    /* 005e0514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0515: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0517: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0519: push 0x8db382 */ { u32 v = 0x8db382u; r_esp -= 4; W32(r_esp, v); }
    /* 005e051e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0525: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e052c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e052f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0532: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e0535: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e0538: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e053b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e053e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0540: je 0x5e06ea */ if (fZ) goto L_005e06ea;
L_005e0546:; BB(0x005e0546);
    /* 005e0546: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0549: movzx esi, byte ptr [eax + 2] */ r_esi = (u32)R8((u32)(r_eax+0x2u));
    /* 005e054d: cmp esi, 0x36 */ {  u32 a = r_esi; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0550: jne 0x5e05b3 */ if (!fZ) goto L_005e05b3;
L_005e0552:; BB(0x005e0552);
    /* 005e0552: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0555: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e0556: movzx ebx, byte ptr [eax + 1] */ r_ebx = (u32)R8((u32)(r_eax+0x1u));
    /* 005e055a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e055b: call 0x5e53b8 */ r_esp -= 4; W32(r_esp, 0x5e0560u); f_005e53b8();
    /* 005e0560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0563: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0565: je 0x5e0610 */ if (fZ) goto L_005e0610;
L_005e056b:; BB(0x005e056b);
    /* 005e056b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e056d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005e0570: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005e0573: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005e0576: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 005e0579: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 005e057c: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e057f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005e0582: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005e0585: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005e0588: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005e058b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005e058e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005e0591: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005e0594: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005e0597: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e059a: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 005e059f: mov word ptr [ebp - 0x3e], ax */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_eax);
    /* 005e05a3: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 005e05a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e05a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e05a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e05a9: call 0x5e4d2c */ r_esp -= 4; W32(r_esp, 0x5e05aeu); f_005e4d2c();
    /* 005e05ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e05b1: jmp 0x5e0610 */ goto L_005e0610;
L_005e05b3:; BB(0x005e05b3);
    /* 005e05b3: cmp esi, 0x3e */ {  u32 a = r_esi; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e05b6: jne 0x5e0610 */ if (!fZ) goto L_005e0610;
L_005e05b8:; BB(0x005e05b8);
    /* 005e05b8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005e05bf: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005e05c4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e05c9u); f_005caba4();
    /* 005e05c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e05ca: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005e05cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e05cf: je 0x5e0703 */ if (fZ) goto L_005e0703;
L_005e05d5:; BB(0x005e05d5);
    /* 005e05d5: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 005e05dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e05e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e05e6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005e05e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e05ea: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e05f0: call 0x5e0fe8 */ r_esp -= 4; W32(r_esp, 0x5e05f5u); f_005e0fe8();
    /* 005e05f5: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005e05f8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005e05ff:; BB(0x005e05ff);
    /* 005e05ff: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0602: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0605: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e060c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e060e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e060f: ret  */ FN_RET(0x005e0514); r_esp += 4; return;
L_005e0610:; BB(0x005e0610);
    /* 005e0610: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0613: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5e0618u); f_005d2890();
    /* 005e0618: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e061c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e061e: jl 0x5e06ea */ if ((fS!=fO)) goto L_005e06ea;
L_005e0624:; BB(0x005e0624);
    /* 005e0624: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0627: jle 0x5e0690 */ if ((fZ||fS!=fO)) goto L_005e0690;
L_005e0629:; BB(0x005e0629);
    /* 005e0629: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e062c: jne 0x5e06ea */ if (!fZ) goto L_005e06ea;
L_005e0632:; BB(0x005e0632);
    /* 005e0632: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e0639: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005e063e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0643u); f_005caba4();
    /* 005e0643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0644: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e0647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0649: je 0x5e070a */ if (fZ) goto L_005e070a;
L_005e064f:; BB(0x005e064f);
    /* 005e064f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e0656: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e065d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0660: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e0663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0664: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e066a: call 0x5e0fe8 */ r_esp -= 4; W32(r_esp, 0x5e066fu); f_005e0fe8();
    /* 005e066f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e0672: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e0679:; BB(0x005e0679);
    /* 005e0679: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e067c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e067f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0682: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0685: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e068c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e068e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e068f: ret  */ FN_RET(0x005e0514); r_esp += 4; return;
L_005e0690:; BB(0x005e0690);
    /* 005e0690: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e0697: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e069c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e06a1u); f_005caba4();
    /* 005e06a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e06a2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e06a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e06a7: je 0x5e0711 */ if (fZ) goto L_005e0711;
L_005e06a9:; BB(0x005e06a9);
    /* 005e06a9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e06b0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e06b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e06ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e06bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e06be: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e06c4: call 0x5e0718 */ r_esp -= 4; W32(r_esp, 0x5e06c9u); f_005e0718();
    /* 005e06c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e06cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e06d3:; BB(0x005e06d3);
    /* 005e06d3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e06d6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e06d9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e06dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e06e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e06e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e06e9: ret  */ FN_RET(0x005e0514); r_esp += 4; return;
L_005e06ea:; BB(0x005e06ea);
    /* 005e06ea: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e06ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e06f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e06f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e06f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e06f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e06ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0701: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0702: ret  */ FN_RET(0x005e0514); r_esp += 4; return;
L_005e0703:; BB(0x005e0703);
    /* 005e0703: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0705: jmp 0x5e05ff */ goto L_005e05ff;
L_005e070a:; BB(0x005e070a);
    /* 005e070a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e070c: jmp 0x5e0679 */ goto L_005e0679;
L_005e0711:; BB(0x005e0711);
    /* 005e0711: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0713: jmp 0x5e06d3 */ goto L_005e06d3;
}

void f_005e0718(void) /* sub_5E0718 */
{
    FN_ENTER(0x005e0718);
    /* 005e0718: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0719: mov ebp, esp */ r_ebp = r_esp;
    /* 005e071b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e071d: push 0x8db39c */ { u32 v = 0x8db39cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0722: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0729: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0730: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0733: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0736: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e0739: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e073c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e073f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e0742: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e0745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0746: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0749: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e074c: call 0x5d1b50 */ r_esp -= 4; W32(r_esp, 0x5e0751u); f_005d1b50();
    /* 005e0751: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0758: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e075b: mov dword ptr [ecx], 0xb0f320 */ W32((u32)(r_ecx), 0xb0f320u);
    /* 005e0761: mov eax, dword ptr [0x9c2814] */ r_eax = R32((u32)(0x9c2814u));
    /* 005e0766: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0768: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005e076b: call dword ptr [0xb0f364] */ { u32 t = R32((u32)(0xb0f364u)); r_esp -= 4; W32(r_esp, 0x5e0771u); call_ind(t); }
    /* 005e0771: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e0774: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0777: movzx eax, byte ptr [ecx + 5] */ r_eax = (u32)R8((u32)(r_ecx+0x5u));
    /* 005e077b: mov byte ptr [edx + 0x1b8], al */ W8((u32)(r_edx+0x1b8u), (u8)r_eax);
    /* 005e0781: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5e0786u); f_005d2880();
    /* 005e0786: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e0789: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e078c: mov byte ptr [edx + 0x1b9], al */ W8((u32)(r_edx+0x1b9u), (u8)r_eax);
    /* 005e0792: call 0x5d2888 */ r_esp -= 4; W32(r_esp, 0x5e0797u); f_005d2888();
    /* 005e0797: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e079a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e079d: mov byte ptr [edx + 0x1ba], al */ W8((u32)(r_edx+0x1bau), (u8)r_eax);
    /* 005e07a3: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5e07a8u); f_005d2890();
    /* 005e07a8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e07ab: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 005e07b1: movzx eax, byte ptr [eax + 0x1d] */ r_eax = (u32)R8((u32)(r_eax+0x1du));
    /* 005e07b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e07b6: call 0x5e5370 */ r_esp -= 4; W32(r_esp, 0x5e07bbu); f_005e5370();
    /* 005e07bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e07bc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e07bf: mov esi, dword ptr [ecx + 0x1b0] */ r_esi = R32((u32)(r_ecx+0x1b0u));
    /* 005e07c5: mov dword ptr [ecx + 0x1b4], eax */ W32((u32)(r_ecx+0x1b4u), r_eax);
    /* 005e07cb: movzx eax, byte ptr [esi + 0x1a] */ r_eax = (u32)R8((u32)(r_esi+0x1au));
    /* 005e07cf: mov byte ptr [ecx + 0x1bb], al */ W8((u32)(r_ecx+0x1bbu), (u8)r_eax);
    /* 005e07d5: movzx edx, byte ptr [esi + 0x1b] */ r_edx = (u32)R8((u32)(r_esi+0x1bu));
    /* 005e07d9: movzx eax, byte ptr [ecx + 0x1b8] */ r_eax = (u32)R8((u32)(r_ecx+0x1b8u));
    /* 005e07e0: mov byte ptr [ecx + 0x1bc], dl */ W8((u32)(r_ecx+0x1bcu), (u8)r_edx);
    /* 005e07e6: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 005e07eb: mov word ptr [ecx + 0x1be], di */ W16((u32)(r_ecx+0x1beu), (u16)r_edi);
    /* 005e07f2: mov ebx, 4 */ r_ebx = 0x4u;
    /* 005e07f7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e07fa: jl 0x5e07fe */ if ((fS!=fO)) goto L_005e07fe;
L_005e07fc:; BB(0x005e07fc);
    /* 005e07fc: mov eax, ebx */ r_eax = r_ebx;
L_005e07fe:; BB(0x005e07fe);
    /* 005e07fe: mov byte ptr [ecx + 0x1b8], al */ W8((u32)(r_ecx+0x1b8u), (u8)r_eax);
    /* 005e0804: call 0x5e0828 */ r_esp -= 4; W32(r_esp, 0x5e0809u); f_005e0828();
    /* 005e0809: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e080c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e080f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e0812: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0815: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0818: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e081f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0821: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0822: ret 8 */ FN_RET(0x005e0718); r_esp += 12; return;
}

void f_005e0828(void) /* sub_5E0828 */
{
    FN_ENTER(0x005e0828);
    /* 005e0828: movzx edx, byte ptr [ecx + 0xf4] */ r_edx = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e082f: lea eax, [edx - 0x23] */ r_eax = (u32)(r_edx+0xffffffddu);
    /* 005e0832: cmp eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e0835: ja 0x5e089e */ if ((!fC&&!fZ)) goto L_005e089e;
L_005e0837:; BB(0x005e0837);
    /* 005e0837: mov eax, dword ptr [edx*4 + 0x92cf54] */ r_eax = R32((u32)(r_edx*4+0x92cf54u));
    /* 005e083e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e0828); r_esp += 4; return;
}

void f_005e0840(void)
{
    FN_ENTER(0x005e0840);
    /* 005e0840: mov dword ptr [ecx + 0x1a0], 0x3e4ccccd */ W32((u32)(r_ecx+0x1a0u), 0x3e4ccccdu);
    /* 005e084a: jmp 0x5e089e */ goto L_005e089e;
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e0840); r_esp += 4; return;
}

void f_005e084c(void)
{
    FN_ENTER(0x005e084c);
    /* 005e084c: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
    /* 005e0856: jmp 0x5e089e */ goto L_005e089e;
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e084c); r_esp += 4; return;
}

void f_005e0858(void)
{
    FN_ENTER(0x005e0858);
    /* 005e0858: mov dword ptr [ecx + 0x1a0], 0x3e99999a */ W32((u32)(r_ecx+0x1a0u), 0x3e99999au);
    /* 005e0862: jmp 0x5e089e */ goto L_005e089e;
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e0858); r_esp += 4; return;
}

void f_005e0864(void)
{
    FN_ENTER(0x005e0864);
    /* 005e0864: mov dword ptr [ecx + 0x1a0], 0x3e4ccccd */ W32((u32)(r_ecx+0x1a0u), 0x3e4ccccdu);
    /* 005e086e: jmp 0x5e089e */ goto L_005e089e;
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e0864); r_esp += 4; return;
}

void f_005e0870(void)
{
    FN_ENTER(0x005e0870);
    /* 005e0870: mov dword ptr [ecx + 0x1a0], 0x3dcccccd */ W32((u32)(r_ecx+0x1a0u), 0x3dcccccdu);
    /* 005e087a: jmp 0x5e089e */ goto L_005e089e;
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e0870); r_esp += 4; return;
}

void f_005e087c(void)
{
    FN_ENTER(0x005e087c);
    /* 005e087c: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e0882: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0887: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e088d: jmp 0x5e089e */ goto L_005e089e;
L_005e089e:; BB(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e087c); r_esp += 4; return;
}

void f_005e088f(void)
{
    FN_ENTER(0x005e088f);
    /* 005e088f: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e0895: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0898: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e089e: ret  */ FN_RET(0x005e088f); r_esp += 4; return;
}

void f_005e089e(void)
{
    FN_ENTER(0x005e089e);
    /* 005e089e: ret  */ FN_RET(0x005e089e); r_esp += 4; return;
}

void f_005e08a0(void) /* sub_5E08A0 */
{
    FN_ENTER(0x005e08a0);
    /* 005e08a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e08a1: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e08a4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e08a6: movzx edx, byte ptr [ebp + 0xf4] */ r_edx = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005e08ad: lea eax, [edx - 0x3c] */ r_eax = (u32)(r_edx+0xffffffc4u);
    /* 005e08b0: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e08b3: ja 0x5e0b11 */ if ((!fC&&!fZ)) goto L_005e0b11;
L_005e08b9:; BB(0x005e08b9);
    /* 005e08b9: mov eax, dword ptr [edx*4 + 0x92cfd0] */ r_eax = R32((u32)(r_edx*4+0x92cfd0u));
    /* 005e08c0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005e0b11:; BB(0x005e0b11);
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e08a0); r_esp += 4; return;
}

void f_005e08c2(void)
{
    FN_ENTER(0x005e08c2);
    /* 005e08c2: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5e08c7u); f_00807d60();
    /* 005e08c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e08c9: je 0x5e0b11 */ if (fZ) goto L_005e0b11;
L_005e08cf:; BB(0x005e08cf);
    /* 005e08cf: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e08d5: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x5e08dau); f_00688e9c();
    /* 005e08da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e08dc: jne 0x5e0b11 */ if (!fZ) goto L_005e0b11;
L_005e08e2:; BB(0x005e08e2);
    /* 005e08e2: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e08e8: call 0x693258 */ r_esp -= 4; W32(r_esp, 0x5e08edu); f_00693258();
    /* 005e08ed: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0b11:; BB(0x005e0b11);
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e08c2); r_esp += 4; return;
}

void f_005e08f2(void)
{
    FN_ENTER(0x005e08f2);
    /* 005e08f2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e08f7u); f_008587a5();
    /* 005e08f7: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005e08fb: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 005e08ff: fdiv dword ptr [0x92d16c] */ ST(0) = ST(0) / R_F32((u32)(0x92d16cu));
    /* 005e0905: fcomp dword ptr [0x92d168] */ fx_compare(ST(0), R_F32((u32)(0x92d168u))); FPOP();
    /* 005e090b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e090d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e090e: jae 0x5e0949 */ if (!fC) goto L_005e0949;
L_005e0910:; BB(0x005e0910);
    /* 005e0910: mov eax, dword ptr [0x92d130] */ r_eax = R32((u32)(0x92d130u));
    /* 005e0915: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005e0919: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e091b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005e091f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e0921: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005e0925: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005e0929: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 005e092d: mov byte ptr [esp + 0x30], 9 */ W8((u32)(r_esp+0x30u), 0x9u);
    /* 005e0932: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005e0936: mov dword ptr [esp + 0x34], 0x3dccccd0 */ W32((u32)(r_esp+0x34u), 0x3dccccd0u);
    /* 005e093e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e093f: call 0x5d189c */ r_esp -= 4; W32(r_esp, 0x5e0944u); f_005d189c();
    /* 005e0944: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0949:; BB(0x005e0949);
    /* 005e0949: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e094b: call 0x5d1978 */ r_esp -= 4; W32(r_esp, 0x5e0950u); f_005d1978();
    /* 005e0950: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0b11:; BB(0x005e0b11);
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e08f2); r_esp += 4; return;
}

void f_005e0955(void)
{
    FN_ENTER(0x005e0955);
    /* 005e0955: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5e095au); f_00807d60();
    /* 005e095a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e095c: je 0x5e09ce */ if (fZ) goto L_005e09ce;
L_005e095e:; BB(0x005e095e);
    /* 005e095e: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e0964: movsx edx, word ptr [ecx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 005e096b: movsx eax, word ptr [ebp + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1beu));
    /* 005e0972: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e0974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e0976: jle 0x5e09c5 */ if ((fZ||fS!=fO)) goto L_005e09c5;
L_005e0978:; BB(0x005e0978);
    /* 005e0978: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005e097c: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 005e0980: fmul dword ptr [0x92d160] */ ST(0) = ST(0) * R_F32((u32)(0x92d160u));
    /* 005e0986: fnstcw word ptr [esp + 0x58] */ W16((u32)(r_esp+0x58u), fcw);
    /* 005e098a: movzx eax, word ptr [esp + 0x58] */ r_eax = (u32)R16((u32)(r_esp+0x58u));
    /* 005e098f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e0994: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 005e0998: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 005e099c: fistp dword ptr [esp + 0x68] */ W32((u32)(r_esp+0x68u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e09a0: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 005e09a4: movsx eax, word ptr [esp + 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x68u));
    /* 005e09a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e09aa: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5e09afu); f_00777368();
    /* 005e09af: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005e09b5: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e09bc: mov word ptr [ebp + 0x1be], dx */ W16((u32)(r_ebp+0x1beu), (u16)r_edx);
    /* 005e09c3: jmp 0x5e09ce */ goto L_005e09ce;
L_005e09c5:; BB(0x005e09c5);
    /* 005e09c5: jge 0x5e09ce */ if ((fS==fO)) goto L_005e09ce;
L_005e09c7:; BB(0x005e09c7);
    /* 005e09c7: mov word ptr [ebp + 0x1be], dx */ W16((u32)(r_ebp+0x1beu), (u16)r_edx);
L_005e09ce:; BB(0x005e09ce);
    /* 005e09ce: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e09d3u); f_008587a5();
    /* 005e09d3: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005e09d7: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 005e09db: fdiv dword ptr [0x92d16c] */ ST(0) = ST(0) / R_F32((u32)(0x92d16cu));
    /* 005e09e1: fcomp dword ptr [0x92d15c] */ fx_compare(ST(0), R_F32((u32)(0x92d15cu))); FPOP();
    /* 005e09e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e09e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e09ea: jae 0x5e0a22 */ if (!fC) goto L_005e0a22;
L_005e09ec:; BB(0x005e09ec);
    /* 005e09ec: mov eax, dword ptr [0x92d140] */ r_eax = R32((u32)(0x92d140u));
    /* 005e09f1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e09f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e09f6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e09fa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e09fc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005e0a00: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005e0a04: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005e0a08: mov byte ptr [esp], 9 */ W8((u32)(r_esp), 0x9u);
    /* 005e0a0c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e0a0f: mov dword ptr [esp + 4], 0x3e999998 */ W32((u32)(r_esp+0x4u), 0x3e999998u);
    /* 005e0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a18: call 0x5d189c */ r_esp -= 4; W32(r_esp, 0x5e0a1du); f_005d189c();
    /* 005e0a1d: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0a22:; BB(0x005e0a22);
    /* 005e0a22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0a24: call 0x5d1978 */ r_esp -= 4; W32(r_esp, 0x5e0a29u); f_005d1978();
    /* 005e0a29: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0b11:; BB(0x005e0b11);
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e0955); r_esp += 4; return;
}

void f_005e0a2e(void)
{
    FN_ENTER(0x005e0a2e);
    /* 005e0a2e: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5e0a33u); f_00807d60();
    /* 005e0a33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0a35: je 0x5e0aa7 */ if (fZ) goto L_005e0aa7;
L_005e0a37:; BB(0x005e0a37);
    /* 005e0a37: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e0a3d: movsx edx, word ptr [ecx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 005e0a44: movsx eax, word ptr [ebp + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1beu));
    /* 005e0a4b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e0a4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e0a4f: jle 0x5e0a9e */ if ((fZ||fS!=fO)) goto L_005e0a9e;
L_005e0a51:; BB(0x005e0a51);
    /* 005e0a51: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005e0a55: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 005e0a59: fmul dword ptr [0x92d160] */ ST(0) = ST(0) * R_F32((u32)(0x92d160u));
    /* 005e0a5f: fnstcw word ptr [esp + 0x58] */ W16((u32)(r_esp+0x58u), fcw);
    /* 005e0a63: movzx eax, word ptr [esp + 0x58] */ r_eax = (u32)R16((u32)(r_esp+0x58u));
    /* 005e0a68: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e0a6d: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 005e0a71: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 005e0a75: fistp dword ptr [esp + 0x68] */ W32((u32)(r_esp+0x68u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e0a79: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 005e0a7d: movsx eax, word ptr [esp + 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x68u));
    /* 005e0a82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a83: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5e0a88u); f_00777368();
    /* 005e0a88: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005e0a8e: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e0a95: mov word ptr [ebp + 0x1be], dx */ W16((u32)(r_ebp+0x1beu), (u16)r_edx);
    /* 005e0a9c: jmp 0x5e0aa7 */ goto L_005e0aa7;
L_005e0a9e:; BB(0x005e0a9e);
    /* 005e0a9e: jge 0x5e0aa7 */ if ((fS==fO)) goto L_005e0aa7;
L_005e0aa0:; BB(0x005e0aa0);
    /* 005e0aa0: mov word ptr [ebp + 0x1be], dx */ W16((u32)(r_ebp+0x1beu), (u16)r_edx);
L_005e0aa7:; BB(0x005e0aa7);
    /* 005e0aa7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e0aacu); f_008587a5();
    /* 005e0aac: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005e0ab0: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 005e0ab4: fdiv dword ptr [0x92d16c] */ ST(0) = ST(0) / R_F32((u32)(0x92d16cu));
    /* 005e0aba: fcomp dword ptr [0x92d154] */ fx_compare(ST(0), R_F32((u32)(0x92d154u))); FPOP();
    /* 005e0ac0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e0ac2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e0ac3: jae 0x5e0afb */ if (!fC) goto L_005e0afb;
L_005e0ac5:; BB(0x005e0ac5);
    /* 005e0ac5: mov eax, dword ptr [0x92d138] */ r_eax = R32((u32)(0x92d138u));
    /* 005e0aca: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e0ace: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0ad0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005e0ad4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e0ad6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005e0ada: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005e0ade: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005e0ae2: mov byte ptr [esp + 0x18], 9 */ W8((u32)(r_esp+0x18u), 0x9u);
    /* 005e0ae7: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005e0aeb: mov dword ptr [esp + 0x1c], 0x3dccccd0 */ W32((u32)(r_esp+0x1cu), 0x3dccccd0u);
    /* 005e0af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0af4: call 0x5d189c */ r_esp -= 4; W32(r_esp, 0x5e0af9u); f_005d189c();
    /* 005e0af9: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0afb:; BB(0x005e0afb);
    /* 005e0afb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0afd: call 0x5d1978 */ r_esp -= 4; W32(r_esp, 0x5e0b02u); f_005d1978();
    /* 005e0b02: jmp 0x5e0b11 */ goto L_005e0b11;
L_005e0b11:; BB(0x005e0b11);
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e0a2e); r_esp += 4; return;
}

void f_005e0b04(void)
{
    FN_ENTER(0x005e0b04);
    /* 005e0b04: push dword ptr [ebp + 0x1b4] */ { u32 v = R32((u32)(r_ebp+0x1b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0b0a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b0c: call 0x5d189c */ r_esp -= 4; W32(r_esp, 0x5e0b11u); f_005d189c();
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e0b04); r_esp += 4; return;
}

void f_005e0b11(void)
{
    FN_ENTER(0x005e0b11);
    /* 005e0b11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b13: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0b18u); f_005c42f4();
    /* 005e0b18: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b1c: ret  */ FN_RET(0x005e0b11); r_esp += 4; return;
}

void f_005e0b20(void) /* sub_5E0B20 */
{
    FN_ENTER(0x005e0b20);
    /* 005e0b20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b22: mov esi, ecx */ r_esi = r_ecx;
    /* 005e0b24: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005e0b28: movzx eax, byte ptr [esi + 0x1b8] */ r_eax = (u32)R8((u32)(r_esi+0x1b8u));
    /* 005e0b2f: mov byte ptr [ebp + 5], al */ W8((u32)(r_ebp+0x5u), (u8)r_eax);
    /* 005e0b32: movzx edx, byte ptr [esi + 0x1b9] */ r_edx = (u32)R8((u32)(r_esi+0x1b9u));
    /* 005e0b39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b3c: call 0x5d24c4 */ r_esp -= 4; W32(r_esp, 0x5e0b41u); f_005d24c4();
    /* 005e0b41: movzx eax, byte ptr [esi + 0x1ba] */ r_eax = (u32)R8((u32)(r_esi+0x1bau));
    /* 005e0b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e0b4b: call 0x5d24d0 */ r_esp -= 4; W32(r_esp, 0x5e0b50u); f_005d24d0();
    /* 005e0b50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e0b52: ret 4 */ FN_RET(0x005e0b20); r_esp += 8; return;
}

void f_005e0b58(void) /* sub_5E0B58 */
{
    FN_ENTER(0x005e0b58);
    /* 005e0b58: movzx eax, byte ptr [ecx + 0x1b8] */ r_eax = (u32)R8((u32)(r_ecx+0x1b8u));
    /* 005e0b5f: ret  */ FN_RET(0x005e0b58); r_esp += 4; return;
}

void f_005e0b60(void) /* sub_5E0B60 */
{
    FN_ENTER(0x005e0b60);
    /* 005e0b60: movzx eax, byte ptr [ecx + 0x1b8] */ r_eax = (u32)R8((u32)(r_ecx+0x1b8u));
    /* 005e0b67: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e0b6a: jge 0x5e0b75 */ if ((fS==fO)) goto L_005e0b75;
L_005e0b6c:; BB(0x005e0b6c);
    /* 005e0b6c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e0b6f: mov byte ptr [ecx + 0x1b8], al */ W8((u32)(r_ecx+0x1b8u), (u8)r_eax);
L_005e0b75:; BB(0x005e0b75);
    /* 005e0b75: ret  */ FN_RET(0x005e0b60); r_esp += 4; return;
}

void f_005e0b78(void) /* sub_5E0B78 */
{
    FN_ENTER(0x005e0b78);
    /* 005e0b78: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005e0b7c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e0b80: movzx edx, byte ptr [eax + 0x1b8] */ r_edx = (u32)R8((u32)(r_eax+0x1b8u));
    /* 005e0b87: mov byte ptr [ecx + 5], dl */ W8((u32)(r_ecx+0x5u), (u8)r_edx);
    /* 005e0b8a: ret  */ FN_RET(0x005e0b78); r_esp += 4; return;
}

void f_005e0b8c(void) /* sub_5E0B8C */
{
    FN_ENTER(0x005e0b8c);
    /* 005e0b8c: mov dword ptr [0xa8dbcc], 0x3f800000 */ W32((u32)(0xa8dbccu), 0x3f800000u);
    /* 005e0b96: mov dword ptr [0xa8dbd0], 0x41000000 */ W32((u32)(0xa8dbd0u), 0x41000000u);
    /* 005e0ba0: mov dword ptr [0xa8dbd4], 0x3fc00000 */ W32((u32)(0xa8dbd4u), 0x3fc00000u);
    /* 005e0baa: ret  */ FN_RET(0x005e0b8c); r_esp += 4; return;
}

void f_005e0bac(void) /* sub_5E0BAC */
{
    FN_ENTER(0x005e0bac);
    /* 005e0bac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0bad: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0baf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0bb1: push 0x8db3b8 */ { u32 v = 0x8db3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0bb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0bbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0bc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0bc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0bca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e0bcd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e0bd0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e0bd3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0bd6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e0bd9: mov eax, ecx */ r_eax = r_ecx;
    /* 005e0bdb: mov dword ptr [eax], 0xb0f520 */ W32((u32)(r_eax), 0xb0f520u);
    /* 005e0be1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e0be8: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e0bedu); f_005e5c50();
    /* 005e0bed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0bf0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0bf2: jne 0x5e0c04 */ if (!fZ) goto L_005e0c04;
L_005e0bf4:; BB(0x005e0bf4);
    /* 005e0bf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0bf7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0bfe: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0c01: ret 4 */ FN_RET(0x005e0bac); r_esp += 8; return;
L_005e0c04:; BB(0x005e0c04);
    /* 005e0c04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c08: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0c0du); f_005c2f74();
    /* 005e0c0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0c0e: jmp 0x5e0bf4 */ goto L_005e0bf4;
}

void f_005e0c10(void) /* sub_5E0C10 */
{
    FN_ENTER(0x005e0c10);
    /* 005e0c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c11: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c15: push 0x8db3ec */ { u32 v = 0x8db3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0c28: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0c2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0c2e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e0c31: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e0c34: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e0c37: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0c3a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e0c3d: mov eax, ecx */ r_eax = r_ecx;
    /* 005e0c3f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e0c42: mov dword ptr [eax], 0xb0f320 */ W32((u32)(r_eax), 0xb0f320u);
    /* 005e0c48: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e0c4f: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e0c54u); f_005d1654();
    /* 005e0c54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0c57: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0c59: jne 0x5e0c6b */ if (!fZ) goto L_005e0c6b;
L_005e0c5b:; BB(0x005e0c5b);
    /* 005e0c5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0c5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0c65: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0c67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0c68: ret 4 */ FN_RET(0x005e0c10); r_esp += 8; return;
L_005e0c6b:; BB(0x005e0c6b);
    /* 005e0c6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0c74u); f_005c2f74();
    /* 005e0c74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0c75: jmp 0x5e0c5b */ goto L_005e0c5b;
}

void f_005e0cc8(void) /* sub_5E0CC8 */
{
    FN_ENTER(0x005e0cc8);
    /* 005e0cc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e0ccb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e0ccd: call 0x5e0cec */ r_esp -= 4; W32(r_esp, 0x5e0cd2u); f_005e0cec();
    /* 005e0cd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e0cd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0cd8: jne 0x5e0cde */ if (!fZ) goto L_005e0cde;
L_005e0cda:; BB(0x005e0cda);
    /* 005e0cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e0cdb: ret 4 */ FN_RET(0x005e0cc8); r_esp += 8; return;
L_005e0cde:; BB(0x005e0cde);
    /* 005e0cde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cdf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0ce4u); f_005c2f74();
    /* 005e0ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e0ce6: ret 4 */ FN_RET(0x005e0cc8); r_esp += 8; return;
}

void f_005e0cec(void) /* sub_5E0CEC */
{
    FN_ENTER(0x005e0cec);
    /* 005e0cec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ced: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0cef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cf1: push 0x8db424 */ { u32 v = 0x8db424u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0cfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0d04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0d07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0d0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e0d0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e0d10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e0d13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e0d16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e0d19: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005e0d1c: mov dword ptr [ecx], 0xb0f620 */ W32((u32)(r_ecx), 0xb0f620u);
    /* 005e0d22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0d24: je 0x5e0d3d */ if (fZ) goto L_005e0d3d;
L_005e0d26:; BB(0x005e0d26);
    /* 005e0d26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e0d29: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005e0d2d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e0d32: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005e0d36: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_005e0d3d:; BB(0x005e0d3d);
    /* 005e0d3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e0d44: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5e0d49u); f_008171e8();
    /* 005e0d49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0d4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0d53: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0d55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0d56: ret  */ FN_RET(0x005e0cec); r_esp += 4; return;
}

void f_005e0d58(void) /* sub_5E0D58 */
{
    FN_ENTER(0x005e0d58);
    /* 005e0d58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d59: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0d5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d5d: push 0x8db44c */ { u32 v = 0x8db44cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0d70: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0d73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0d76: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005e0d79: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005e0d7c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005e0d7f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0d82: call 0x5e0184 */ r_esp -= 4; W32(r_esp, 0x5e0d87u); f_005e0184();
    /* 005e0d87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0d8a: mov edx, dword ptr [eax + 0x1c8] */ r_edx = R32((u32)(r_eax+0x1c8u));
    /* 005e0d90: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e0d93: jne 0x5e0dfb */ if (!fZ) goto L_005e0dfb;
L_005e0d95:; BB(0x005e0d95);
    /* 005e0d95: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005e0d9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0d9d: je 0x5e0dfb */ if (fZ) goto L_005e0dfb;
L_005e0d9f:; BB(0x005e0d9f);
    /* 005e0d9f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e0da6: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0da8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0dadu); f_005caba4();
    /* 005e0dad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e0db0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0db3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e0db6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0db8: je 0x5e0dfb */ if (fZ) goto L_005e0dfb;
L_005e0dba:; BB(0x005e0dba);
    /* 005e0dba: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e0dc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0dc8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0dcb: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0dcd: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0dcf: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e0dd6: mov ebx, dword ptr [edx + 0x1c4] */ r_ebx = R32((u32)(r_edx+0x1c4u));
    /* 005e0ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ddd: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0de3: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e0de8u); f_005e5cac();
    /* 005e0de8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0deb: mov dword ptr [eax], 0xb0f520 */ W32((u32)(r_eax), 0xb0f520u);
    /* 005e0df1: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 005e0df4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e0dfb:; BB(0x005e0dfb);
    /* 005e0dfb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e0dfe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0e01: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0e08: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0e0b: ret  */ FN_RET(0x005e0d58); r_esp += 4; return;
}

void f_005e0e0c(void) /* sub_5E0E0C */
{
    FN_ENTER(0x005e0e0c);
    /* 005e0e0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e0d: mov edi, ecx */ r_edi = r_ecx;
    /* 005e0e0f: mov eax, dword ptr [edi + 0x1c8] */ r_eax = R32((u32)(r_edi+0x1c8u));
    /* 005e0e15: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e18: je 0x5e0e23 */ if (fZ) goto L_005e0e23;
L_005e0e1a:; BB(0x005e0e1a);
    /* 005e0e1a: mov ecx, edi */ r_ecx = r_edi;
    /* 005e0e1c: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e0e21u); f_005c42f4();
    /* 005e0e21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e0e22: ret  */ FN_RET(0x005e0e0c); r_esp += 4; return;
L_005e0e23:; BB(0x005e0e23);
    /* 005e0e23: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 005e0e28: cmp eax, dword ptr [edi + 0x1c0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1c0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e2e: je 0x5e0e1a */ if (fZ) goto L_005e0e1a;
L_005e0e30:; BB(0x005e0e30);
    /* 005e0e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e31: mov dword ptr [edi + 0x1c0], eax */ W32((u32)(r_edi+0x1c0u), r_eax);
    /* 005e0e37: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e0e3cu); f_00807d8c();
    /* 005e0e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0e3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e3f: je 0x5e0e1a */ if (fZ) goto L_005e0e1a;
L_005e0e41:; BB(0x005e0e41);
    /* 005e0e41: push dword ptr [edi + 0x1c4] */ { u32 v = R32((u32)(r_edi+0x1c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0e47: movzx eax, word ptr [edi + 0xe4] */ r_eax = (u32)R16((u32)(r_edi+0xe4u));
    /* 005e0e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e4f: push dword ptr [edi + 0xd8] */ { u32 v = R32((u32)(r_edi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0e55: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0e5b: call 0x5e0e68 */ r_esp -= 4; W32(r_esp, 0x5e0e60u); f_005e0e68();
    /* 005e0e60: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e63: jmp 0x5e0e1a */ goto L_005e0e1a;
}

void f_005e0e68(void) /* sub_5E0E68 */
{
    FN_ENTER(0x005e0e68);
    /* 005e0e68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e69: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0e6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e6d: push 0x8db474 */ { u32 v = 0x8db474u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0e80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0e86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e0e89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e0e8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e0e8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0e94: je 0x5e0ed8 */ if (fZ) goto L_005e0ed8;
L_005e0e96:; BB(0x005e0e96);
    /* 005e0e96: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e0e9d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e0ea4u); f_005caba4();
    /* 005e0ea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0ea5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e0ea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0eaa: je 0x5e0ed8 */ if (fZ) goto L_005e0ed8;
L_005e0eac:; BB(0x005e0eac);
    /* 005e0eac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e0eb3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0eba: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0ebd: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 005e0ec1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0ec4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e0ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ec8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0ecb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ecc: call 0x5e0ee8 */ r_esp -= 4; W32(r_esp, 0x5e0ed1u); f_005e0ee8();
    /* 005e0ed1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e0ed8:; BB(0x005e0ed8);
    /* 005e0ed8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0edb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0ee2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0ee5: ret  */ FN_RET(0x005e0e68); r_esp += 4; return;
}

void f_005e0ee8(void) /* sub_5E0EE8 */
{
    FN_ENTER(0x005e0ee8);
    /* 005e0ee8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ee9: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0eeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0eed: push 0x8db490 */ { u32 v = 0x8db490u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ef2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e0ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ef9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e0f00: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0f03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e0f06: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005e0f09: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005e0f0c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005e0f0f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e0f12: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0f15: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 005e0f19: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e0f1c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e0f1f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e0f22: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005e0f25: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e0f28: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5e0f2du); f_008193cc();
    /* 005e0f2d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0f34: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0f37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0f3a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0f3d: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 005e0f41: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e0f47: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 005e0f4b: mov dword ptr [esi], 0xb0f620 */ W32((u32)(r_esi), 0xb0f620u);
    /* 005e0f51: mov eax, dword ptr [0x9c281c] */ r_eax = R32((u32)(0x9c281cu));
    /* 005e0f56: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 005e0f59: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 005e0f5c: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 005e0f60: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5e0f65u); f_005c3a8c();
    /* 005e0f65: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0f68: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005e0f6b: mov eax, ebx */ r_eax = r_ebx;
    /* 005e0f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f6e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e0f73u); f_0068d5a8();
    /* 005e0f73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0f76: je 0x5e0fa9 */ if (fZ) goto L_005e0fa9;
L_005e0f78:; BB(0x005e0f78);
    /* 005e0f78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0f7a: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0f7c: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5e0f7fu); call_ind(t); }
    /* 005e0f7f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e0f82: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f86: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5e0f8bu); f_0050981c();
    /* 005e0f8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0f8e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0f91: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005e0f94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e0f96: je 0x5e0fb3 */ if (fZ) goto L_005e0fb3;
L_005e0f98:; BB(0x005e0f98);
    /* 005e0f98: movzx edx, word ptr [edx + 0x24] */ r_edx = (u32)R16((u32)(r_edx+0x24u));
    /* 005e0f9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f9d: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0f9f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x5e0fa4u); f_00508f14();
    /* 005e0fa4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0fa7: jmp 0x5e0fb3 */ goto L_005e0fb3;
L_005e0fa9:; BB(0x005e0fa9);
    /* 005e0fa9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e0fac: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_005e0fb3:; BB(0x005e0fb3);
    /* 005e0fb3: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e0fb6: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e0fb9: mov eax, edx */ r_eax = r_edx;
    /* 005e0fbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0fbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e0fc5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0fc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0fc8: ret 0x10 */ FN_RET(0x005e0ee8); r_esp += 20; return;
}

void f_005e0fcc(void) /* sub_5E0FCC */
{
    FN_ENTER(0x005e0fcc);
    /* 005e0fcc: mov eax, dword ptr [ecx + 0x1c8] */ r_eax = R32((u32)(r_ecx+0x1c8u));
    /* 005e0fd2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0fd5: jne 0x5e0fe1 */ if (!fZ) goto L_005e0fe1;
L_005e0fd7:; BB(0x005e0fd7);
    /* 005e0fd7: mov dword ptr [ecx + 0x1c0], 0xffffffff */ W32((u32)(r_ecx+0x1c0u), 0xffffffffu);
L_005e0fe1:; BB(0x005e0fe1);
    /* 005e0fe1: call 0x5e04c8 */ r_esp -= 4; W32(r_esp, 0x5e0fe6u); f_005e04c8();
    /* 005e0fe6: ret  */ FN_RET(0x005e0fcc); r_esp += 4; return;
}

void f_005e0fe8(void) /* sub_5E0FE8 */
{
    FN_ENTER(0x005e0fe8);
    /* 005e0fe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0fe9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e0feb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0fef: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e0ff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e0ff5: call 0x5e0718 */ r_esp -= 4; W32(r_esp, 0x5e0ffau); f_005e0718();
    /* 005e0ffa: mov dword ptr [ebx], 0xb0f540 */ W32((u32)(r_ebx), 0xb0f540u);
    /* 005e1000: mov eax, dword ptr [0x9c2818] */ r_eax = R32((u32)(0x9c2818u));
    /* 005e1005: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005e1008: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005e100f: mov dword ptr [ebx + 0x1c0], 0xffffffff */ W32((u32)(r_ebx+0x1c0u), 0xffffffffu);
    /* 005e1019: lea edx, [eax - 0x29] */ r_edx = (u32)(r_eax+0xffffffd7u);
    /* 005e101c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005e101f: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005e1022: jae 0x5e104e */ if (!fC) goto L_005e104e;
L_005e1024:; BB(0x005e1024);
    /* 005e1024: mov eax, dword ptr [edx*4 + 0x92d1c4] */ r_eax = R32((u32)(r_edx*4+0x92d1c4u));
    /* 005e102b: mov dword ptr [ebx + 0x1c4], eax */ W32((u32)(r_ebx+0x1c4u), r_eax);
    /* 005e1031: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1034: jge 0x5e1042 */ if ((fS==fO)) goto L_005e1042;
L_005e1036:; BB(0x005e1036);
    /* 005e1036: mov dword ptr [ebx + 0x1c8], 1 */ W32((u32)(r_ebx+0x1c8u), 0x1u);
    /* 005e1040: jmp 0x5e107b */ goto L_005e107b;
L_005e1042:; BB(0x005e1042);
    /* 005e1042: mov dword ptr [ebx + 0x1c8], 2 */ W32((u32)(r_ebx+0x1c8u), 0x2u);
    /* 005e104c: jmp 0x5e107b */ goto L_005e107b;
L_005e104e:; BB(0x005e104e);
    /* 005e104e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e1050: mov dword ptr [ebx + 0x1c4], edx */ W32((u32)(r_ebx+0x1c4u), r_edx);
    /* 005e1056: mov dword ptr [ebx + 0x1c8], edx */ W32((u32)(r_ebx+0x1c8u), r_edx);
    /* 005e105c: cmp eax, dword ptr [0x92d1a0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x92d1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1062: jne 0x5e107b */ if (!fZ) goto L_005e107b;
L_005e1064:; BB(0x005e1064);
    /* 005e1064: mov eax, dword ptr [0x92d1a4] */ r_eax = R32((u32)(0x92d1a4u));
    /* 005e1069: mov dword ptr [ebx + 0x1c4], eax */ W32((u32)(r_ebx+0x1c4u), r_eax);
    /* 005e106f: mov edx, dword ptr [0x92d1a8] */ r_edx = R32((u32)(0x92d1a8u));
    /* 005e1075: mov dword ptr [ebx + 0x1c8], edx */ W32((u32)(r_ebx+0x1c8u), r_edx);
L_005e107b:; BB(0x005e107b);
    /* 005e107b: mov eax, ebx */ r_eax = r_ebx;
    /* 005e107d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e107e: ret 8 */ FN_RET(0x005e0fe8); r_esp += 12; return;
}

void f_005e0ff6(void)
{
    FN_ENTER(0x005e0ff6);
    /* 005e0ff6: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ff7: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x005e0ff7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e0ff7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e0ff9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e0ffb: add eax, dword ptr [eax - 0xb] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax+0xfffffff5u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0ffe: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 005e1000: mov eax, dword ptr [0x9c2818] */ r_eax = R32((u32)(0x9c2818u));
    /* 005e1005: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005e1008: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005e100f: mov dword ptr [ebx + 0x1c0], 0xffffffff */ W32((u32)(r_ebx+0x1c0u), 0xffffffffu);
    /* 005e1019: lea edx, [eax - 0x29] */ r_edx = (u32)(r_eax+0xffffffd7u);
    /* 005e101c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005e101f: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005e1022: jae 0x5e104e */ if (!fC) goto L_005e104e;
L_005e1024:; BB(0x005e1024);
    /* 005e1024: mov eax, dword ptr [edx*4 + 0x92d1c4] */ r_eax = R32((u32)(r_edx*4+0x92d1c4u));
    /* 005e102b: mov dword ptr [ebx + 0x1c4], eax */ W32((u32)(r_ebx+0x1c4u), r_eax);
    /* 005e1031: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1034: jge 0x5e1042 */ if ((fS==fO)) goto L_005e1042;
L_005e1036:; BB(0x005e1036);
    /* 005e1036: mov dword ptr [ebx + 0x1c8], 1 */ W32((u32)(r_ebx+0x1c8u), 0x1u);
    /* 005e1040: jmp 0x5e107b */ goto L_005e107b;
L_005e1042:; BB(0x005e1042);
    /* 005e1042: mov dword ptr [ebx + 0x1c8], 2 */ W32((u32)(r_ebx+0x1c8u), 0x2u);
    /* 005e104c: jmp 0x5e107b */ goto L_005e107b;
L_005e104e:; BB(0x005e104e);
    /* 005e104e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e1050: mov dword ptr [ebx + 0x1c4], edx */ W32((u32)(r_ebx+0x1c4u), r_edx);
    /* 005e1056: mov dword ptr [ebx + 0x1c8], edx */ W32((u32)(r_ebx+0x1c8u), r_edx);
    /* 005e105c: cmp eax, dword ptr [0x92d1a0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x92d1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1062: jne 0x5e107b */ if (!fZ) goto L_005e107b;
L_005e1064:; BB(0x005e1064);
    /* 005e1064: mov eax, dword ptr [0x92d1a4] */ r_eax = R32((u32)(0x92d1a4u));
    /* 005e1069: mov dword ptr [ebx + 0x1c4], eax */ W32((u32)(r_ebx+0x1c4u), r_eax);
    /* 005e106f: mov edx, dword ptr [0x92d1a8] */ r_edx = R32((u32)(0x92d1a8u));
    /* 005e1075: mov dword ptr [ebx + 0x1c8], edx */ W32((u32)(r_ebx+0x1c8u), r_edx);
L_005e107b:; BB(0x005e107b);
    /* 005e107b: mov eax, ebx */ r_eax = r_ebx;
    /* 005e107d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e107e: ret 8 */ FN_RET(0x005e0ff6); r_esp += 12; return;
}

