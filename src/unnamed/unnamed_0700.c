#include "protos.h"

void f_00700000(void)
{
    FN_ENTER(0x00700000);
    goto L_00700000;
L_006fff8e:; BB(0x006fff8e);
    /* 006fff8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006fff8f: adc cl, bl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b + c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 006fff91: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 006fff92: sbb dh, bl */ { u32 c = fC; u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a - b - c) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 006fff94: ret 0xe9d8 */ FN_RET(0x00700000); r_esp += 59868; return;
L_006fffcd:; BB(0x006fffcd);
    /* 006fffcd: das  */ UNSUP(0x006fffcd, "das ");
    /* 006fffce: in al, dx */ UNSUP(0x006fffce, "in al, dx");
    /* 006fffcf: call ptr [ecx + 0x5b] */ { u32 t = R32((u32)(r_ecx+0x5bu)); r_esp -= 4; W32(r_esp, 0x6fffd2u); call_ind(t); }
    /* 006fffd2: ret 4 */ FN_RET(0x00700000); r_esp += 8; return;
L_00700000:; BB(0x00700000);
    /* 00700000: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00700001: loopne 0x6fff8e */ r_ecx--; if (r_ecx && !fZ) goto L_006fff8e;
    /* 00700003: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00700004: loopne 0x6fffcd */ r_ecx--; if (r_ecx && !fZ) goto L_006fffcd;
    /* 00700006: add dword ptr [eax - 0x15], ebx */ { u32 ad = (u32)(r_eax+0xffffffebu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00700009: mov bl, 0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 0070000b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00700012: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x700017u); f_00710c28();
    /* 00700017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070001a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700021: mov esp, ebp */ r_esp = r_ebp;
    /* 00700023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700024: ret  */ FN_RET(0x00700000); r_esp += 4; return;
}

void f_00700018(void)
{
    FN_ENTER(0x00700018);
    /* 00700018: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00700019: hlt  */ UNSUP(0x00700019, "hlt");
}

void f_00700020(void)
{
    FN_ENTER(0x00700020);
    /* 00700020: add byte ptr [ebx - 0x6f3ca21b], cl */ { u32 ad = (u32)(r_ebx+0x90c35de5u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700026: nop  */ ;
    /* 00700027: nop  */ ;
    /* 00700028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700029: mov ebp, esp */ r_ebp = r_esp;
    /* 0070002b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070002d: push 0x8f0000 */ { u32 v = 0x8f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00700032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070004c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070004f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00700051: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700058: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70005du); f_005caba4();
    /* 0070005d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070005e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00700061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700063: je 0x700093 */ if (fZ) goto L_00700093;
L_00700065:; BB(0x00700065);
    /* 00700065: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070006c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700085:; BB(0x00700085);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700020); r_esp += 4; return;
L_00700093:; BB(0x00700093);
    /* 00700093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700095: jmp 0x700085 */ goto L_00700085;
}

void f_00700028(void) /* sub_700028 */
{
    FN_ENTER(0x00700028);
    /* 00700028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700029: mov ebp, esp */ r_ebp = r_esp;
    /* 0070002b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070002d: push 0x8f0000 */ { u32 v = 0x8f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00700032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070004c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070004f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00700051: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700058: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70005du); f_005caba4();
    /* 0070005d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070005e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00700061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700063: je 0x700093 */ if (fZ) goto L_00700093;
L_00700065:; BB(0x00700065);
    /* 00700065: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070006c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700085:; BB(0x00700085);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700028); r_esp += 4; return;
L_00700093:; BB(0x00700093);
    /* 00700093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700095: jmp 0x700085 */ goto L_00700085;
}

void f_00700030(void)
{
    FN_ENTER(0x00700030);
    /* 00700030: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 00700032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070004c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070004f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00700051: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700058: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70005du); f_005caba4();
    /* 0070005d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070005e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00700061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700063: je 0x700093 */ if (fZ) goto L_00700093;
L_00700065:; BB(0x00700065);
    /* 00700065: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070006c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700085:; BB(0x00700085);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700030); r_esp += 4; return;
L_00700093:; BB(0x00700093);
    /* 00700093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700095: jmp 0x700085 */ goto L_00700085;
}

void f_0070004a(void)
{
    FN_ENTER(0x0070004a);
    goto L_0070004a;
L_00700034:; BB(0x00700034);
    /* 00700034: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700036: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_0070004a:; BB(0x0070004a);
    /* 0070004a: jne 0x700034 */ if (!fZ) goto L_00700034;
L_0070004c:; BB(0x0070004c);
    /* 0070004c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070004f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00700051: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700058: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70005du); f_005caba4();
    /* 0070005d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070005e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00700061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700063: je 0x700093 */ if (fZ) goto L_00700093;
L_00700065:; BB(0x00700065);
    /* 00700065: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070006c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700085:; BB(0x00700085);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x0070004a); r_esp += 4; return;
L_00700093:; BB(0x00700093);
    /* 00700093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700095: jmp 0x700085 */ goto L_00700085;
}

void f_00700053(void)
{
    FN_ENTER(0x00700053);
    goto L_00700053;
L_006fffe7:; BB(0x006fffe7);
    /* 006fffe7: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006fffea: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 006ffff0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ffff3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ffff6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ffff9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ffffc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006fffff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00700002: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700005: mov dword ptr [ecx], 0xb3eb58 */ W32((u32)(r_ecx), 0xb3eb58u);
    /* 0070000b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00700012: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x700017u); f_00710c28();
    /* 00700017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070001a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700021: mov esp, ebp */ r_esp = r_ebp;
    /* 00700023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700024: ret  */ FN_RET(0x00700053); r_esp += 4; return;
L_00700053:; BB(0x00700053);
    /* 00700053: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 00700055: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700057: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00700059: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070005a: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 0070005b: in al, dx */ UNSUP(0x0070005b, "in al, dx");
    /* 0070005c: call ptr [ecx - 0x77] */ { u32 t = R32((u32)(r_ecx+0xffffff89u)); r_esp -= 4; W32(r_esp, 0x70005fu); call_ind(t); }
    /* 0070005f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00700060: loopne 0x6fffe7 */ r_ecx--; if (r_ecx && !fZ) goto L_006fffe7;
    /* 00700062: sal byte ptr [esi + ebp - 0x39], 0x45 */ { u32 ad = (u32)(r_esi+r_ebp+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00700067: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 00700069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070006b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0070006d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070006e: cld  */ rt_df = 0;
    /* 0070006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700053); r_esp += 4; return;
}

void f_00700055(void)
{
    FN_ENTER(0x00700055);
    goto L_00700055;
L_006fffe7:; BB(0x006fffe7);
    /* 006fffe7: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006fffea: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 006ffff0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ffff3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ffff6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ffff9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ffffc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006fffff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00700002: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700005: mov dword ptr [ecx], 0xb3eb58 */ W32((u32)(r_ecx), 0xb3eb58u);
    /* 0070000b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00700012: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x700017u); f_00710c28();
    /* 00700017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070001a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700021: mov esp, ebp */ r_esp = r_ebp;
    /* 00700023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700024: ret  */ FN_RET(0x00700055); r_esp += 4; return;
L_00700055:; BB(0x00700055);
    /* 00700055: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700057: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00700059: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070005a: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 0070005b: in al, dx */ UNSUP(0x0070005b, "in al, dx");
    /* 0070005c: call ptr [ecx - 0x77] */ { u32 t = R32((u32)(r_ecx+0xffffff89u)); r_esp -= 4; W32(r_esp, 0x70005fu); call_ind(t); }
    /* 0070005f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00700060: loopne 0x6fffe7 */ r_ecx--; if (r_ecx && !fZ) goto L_006fffe7;
    /* 00700062: sal byte ptr [esi + ebp - 0x39], 0x45 */ { u32 ad = (u32)(r_esi+r_ebp+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00700067: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 00700069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070006b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0070006d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070006e: cld  */ rt_df = 0;
    /* 0070006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700055); r_esp += 4; return;
}

void f_00700062(void)
{
    FN_ENTER(0x00700062);
    /* 00700062: sal byte ptr [esi + ebp - 0x39], 0x45 */ { u32 ad = (u32)(r_esi+r_ebp+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00700067: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 00700069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070006b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0070006d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070006e: cld  */ rt_df = 0;
    /* 0070006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700062); r_esp += 4; return;
}

void f_00700065(void)
{
    FN_ENTER(0x00700065);
    /* 00700065: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0070006c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700065); r_esp += 4; return;
}

void f_00700069(void)
{
    FN_ENTER(0x00700069);
    /* 00700069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070006b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0070006d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070006e: cld  */ rt_df = 0;
    /* 0070006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700069); r_esp += 4; return;
}

void f_0070006d(void)
{
    FN_ENTER(0x0070006d);
    /* 0070006d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070006e: cld  */ rt_df = 0;
    /* 0070006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x0070006d); r_esp += 4; return;
}

void f_00700070(void)
{
    FN_ENTER(0x00700070);
    /* 00700070: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700072: add byte ptr [ebx + 0x1de8e04d], cl */ { u32 ad = (u32)(r_ebx+0x1de8e04du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700078: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070007a: add byte ptr [ebx + 0x45c7e045], cl */ { u32 ad = (u32)(r_ebx+0x45c7e045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700080: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 00700082: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00700084: add byte ptr [ebx - 0x769b0bb3], cl */ { u32 ad = (u32)(r_ebx+0x8964f44du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070008a: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700070); r_esp += 4; return;
}

void f_00700073(void)
{
    FN_ENTER(0x00700073);
    /* 00700073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700076: call 0x700098 */ r_esp -= 4; W32(r_esp, 0x70007bu); f_00700098();
    /* 0070007b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070007e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700088: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00700091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700092: ret  */ FN_RET(0x00700073); r_esp += 4; return;
}

void f_00700098(void) /* sub_700098 */
{
    FN_ENTER(0x00700098);
    /* 00700098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700099: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070009b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070009d: push 0x96e5f8 */ { u32 v = 0x96e5f8u; r_esp -= 4; W32(r_esp, v); }
    /* 007000a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007000a4: push 0x9d0504 */ { u32 v = 0x9d0504u; r_esp -= 4; W32(r_esp, v); }
    /* 007000a9: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7000aeu); f_00710d30();
    /* 007000ae: mov dword ptr [ebx], 0xb3eb58 */ W32((u32)(r_ebx), 0xb3eb58u);
    /* 007000b4: mov edx, 2 */ r_edx = 0x2u;
    /* 007000b9: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 007000bc: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 007000bf: mov dword ptr [ebx + 0x60], 1 */ W32((u32)(r_ebx+0x60u), 0x1u);
    /* 007000c6: mov eax, ebx */ r_eax = r_ebx;
    /* 007000c8: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
    /* 007000cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007000d0: ret  */ FN_RET(0x00700098); r_esp += 4; return;
}

void f_007000d4(void) /* sub_7000D4 */
{
    FN_ENTER(0x007000d4);
    /* 007000d4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007000d8: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 007000db: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007000dd: jge 0x7000e3 */ if ((fS==fO)) goto L_007000e3;
L_007000df:; BB(0x007000df);
    /* 007000df: mov edx, eax */ r_edx = r_eax;
    /* 007000e1: jmp 0x7000ed */ goto L_007000ed;
L_007000e3:; BB(0x007000e3);
    /* 007000e3: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007000e6: jl 0x7000ed */ if ((fS!=fO)) goto L_007000ed;
L_007000e8:; BB(0x007000e8);
    /* 007000e8: mov edx, 2 */ r_edx = 0x2u;
L_007000ed:; BB(0x007000ed);
    /* 007000ed: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 007000f4: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 007000f7: ret 4 */ FN_RET(0x007000d4); r_esp += 8; return;
}

void f_007000fc(void) /* sub_7000FC */
{
    FN_ENTER(0x007000fc);
    /* 007000fc: mov dword ptr [ecx + 0x60], 1 */ W32((u32)(r_ecx+0x60u), 0x1u);
    /* 00700103: ret  */ FN_RET(0x007000fc); r_esp += 4; return;
}

void f_00700104(void) /* sub_700104 */
{
    FN_ENTER(0x00700104);
    /* 00700104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700105: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700106: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700107: mov edi, ecx */ r_edi = r_ecx;
    /* 00700109: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070010f: mov ebp, dword ptr [edi + 0x68] */ r_ebp = R32((u32)(r_edi+0x68u));
    /* 00700112: lea ebx, [edi + 0x60] */ r_ebx = (u32)(r_edi+0x60u);
    /* 00700115: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700117: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x70011cu); f_006ffb40();
    /* 0070011c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070011e: je 0x70012b */ if (fZ) goto L_0070012b;
L_00700120:; BB(0x00700120);
    /* 00700120: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 00700123: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00700126: mov dword ptr [edi + 0x68], edx */ W32((u32)(r_edi+0x68u), r_edx);
    /* 00700129: jmp 0x700185 */ goto L_00700185;
L_0070012b:; BB(0x0070012b);
    /* 0070012b: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700131: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700133: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x700138u); f_006ffb40();
    /* 00700138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070013a: je 0x700147 */ if (fZ) goto L_00700147;
L_0070013c:; BB(0x0070013c);
    /* 0070013c: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 0070013f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00700142: mov dword ptr [edi + 0x68], edx */ W32((u32)(r_edi+0x68u), r_edx);
    /* 00700145: jmp 0x700185 */ goto L_00700185;
L_00700147:; BB(0x00700147);
    /* 00700147: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070014d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070014f: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x700154u); f_006ffb40();
    /* 00700154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700156: je 0x700163 */ if (fZ) goto L_00700163;
L_00700158:; BB(0x00700158);
    /* 00700158: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 0070015f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00700161: jmp 0x700185 */ goto L_00700185;
L_00700163:; BB(0x00700163);
    /* 00700163: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700169: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070016b: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x700170u); f_006ffb40();
    /* 00700170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700172: je 0x700182 */ if (fZ) goto L_00700182;
L_00700174:; BB(0x00700174);
    /* 00700174: mov dword ptr [edi + 0x68], 2 */ W32((u32)(r_edi+0x68u), 0x2u);
    /* 0070017b: mov edx, 2 */ r_edx = 0x2u;
    /* 00700180: jmp 0x700185 */ goto L_00700185;
L_00700182:; BB(0x00700182);
    /* 00700182: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
L_00700185:; BB(0x00700185);
    /* 00700185: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 00700188: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070018a: jge 0x700193 */ if ((fS==fO)) goto L_00700193;
L_0070018c:; BB(0x0070018c);
    /* 0070018c: mov edx, eax */ r_edx = r_eax;
    /* 0070018e: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 00700191: jmp 0x7001a4 */ goto L_007001a4;
L_00700193:; BB(0x00700193);
    /* 00700193: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00700196: jl 0x7001a4 */ if ((fS!=fO)) goto L_007001a4;
L_00700198:; BB(0x00700198);
    /* 00700198: mov dword ptr [edi + 0x68], 2 */ W32((u32)(r_edi+0x68u), 0x2u);
    /* 0070019f: mov edx, 2 */ r_edx = 0x2u;
L_007001a4:; BB(0x007001a4);
    /* 007001a4: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007001a6: je 0x7001ad */ if (fZ) goto L_007001ad;
L_007001a8:; BB(0x007001a8);
    /* 007001a8: call 0x70768c */ r_esp -= 4; W32(r_esp, 0x7001adu); f_0070768c();
L_007001ad:; BB(0x007001ad);
    /* 007001ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007001ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007001af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007001b0: ret  */ FN_RET(0x00700104); r_esp += 4; return;
}

void f_007001b4(void) /* sub_7001B4 */
{
    FN_ENTER(0x007001b4);
    /* 007001b4: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 007001b7: ret  */ FN_RET(0x007001b4); r_esp += 4; return;
}

void f_007001b8(void) /* sub_7001B8 */
{
    FN_ENTER(0x007001b8);
    /* 007001b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007001bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007001be: jl 0x7001d5 */ if ((fS!=fO)) goto L_007001d5;
L_007001c0:; BB(0x007001c0);
    /* 007001c0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007001c3: jl 0x7001cf */ if ((fS!=fO)) goto L_007001cf;
L_007001c5:; BB(0x007001c5);
    /* 007001c5: mov dword ptr [ecx + 0x64], 2 */ W32((u32)(r_ecx+0x64u), 0x2u);
    /* 007001cc: ret 4 */ FN_RET(0x007001b8); r_esp += 8; return;
L_007001cf:; BB(0x007001cf);
    /* 007001cf: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 007001d2: ret 4 */ FN_RET(0x007001b8); r_esp += 8; return;
L_007001d5:; BB(0x007001d5);
    /* 007001d5: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 007001dc: ret 4 */ FN_RET(0x007001b8); r_esp += 8; return;
}

void f_007001e0(void) /* sub_7001E0 */
{
    FN_ENTER(0x007001e0);
    /* 007001e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007001e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007001e2: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007001e8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007001ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007001ec: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7001f1u); f_00712644();
    /* 007001f1: mov esi, eax */ r_esi = r_eax;
    /* 007001f3: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007001f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007001f8: jl 0x700444 */ if ((fS!=fO)) goto L_00700444;
L_007001fe:; BB(0x007001fe);
    /* 007001fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007001ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700200: call 0x707918 */ r_esp -= 4; W32(r_esp, 0x700205u); f_00707918();
    /* 00700205: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00700207: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070020a: call 0x7079b4 */ r_esp -= 4; W32(r_esp, 0x70020fu); f_007079b4();
    /* 0070020f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00700212: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00700216: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 0070021e: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00700222: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00700225: call 0x6ffdd4 */ r_esp -= 4; W32(r_esp, 0x70022au); f_006ffdd4();
    /* 0070022a: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0070022e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00700230: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00700231: call 0x7079cc */ r_esp -= 4; W32(r_esp, 0x700236u); f_007079cc();
    /* 00700236: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0070023a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070023b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070023c: call 0x707c94 */ r_esp -= 4; W32(r_esp, 0x700241u); f_00707c94();
    /* 00700241: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00700245: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00700247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00700248: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00700249: call 0x707a90 */ r_esp -= 4; W32(r_esp, 0x70024eu); f_00707a90();
    /* 0070024e: push dword ptr [0xa983d8] */ { u32 v = R32((u32)(0xa983d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700254: call 0x7079a4 */ r_esp -= 4; W32(r_esp, 0x700259u); f_007079a4();
    /* 00700259: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070025c: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0070025f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700261: jne 0x700268 */ if (!fZ) goto L_00700268;
L_00700263:; BB(0x00700263);
    /* 00700263: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 00700266: jmp 0x70026d */ goto L_0070026d;
L_00700268:; BB(0x00700268);
    /* 00700268: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
L_0070026d:; BB(0x0070026d);
    /* 0070026d: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00700271: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00700275: mov edi, eax */ r_edi = r_eax;
    /* 00700277: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00700279: mov ebx, edx */ r_ebx = r_edx;
    /* 0070027b: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0070027f: mov ebp, ecx */ r_ebp = r_ecx;
L_00700281:; BB(0x00700281);
    /* 00700281: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00700285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700286: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700287: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00700288: call 0x707a90 */ r_esp -= 4; W32(r_esp, 0x70028du); f_00707a90();
    /* 0070028d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00700290: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700292: jne 0x7002c0 */ if (!fZ) goto L_007002c0;
L_00700294:; BB(0x00700294);
    /* 00700294: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00700298: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070029a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070029b: call 0x7079cc */ r_esp -= 4; W32(r_esp, 0x7002a0u); f_007079cc();
    /* 007002a0: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 007002a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007002a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007002a7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007002a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007002aa: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x7002afu); f_0082b158();
    /* 007002af: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 007002b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007002b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007002b6: call 0x7079cc */ r_esp -= 4; W32(r_esp, 0x7002bbu); f_007079cc();
    /* 007002bb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007002be: jmp 0x7002d2 */ goto L_007002d2;
L_007002c0:; BB(0x007002c0);
    /* 007002c0: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 007002c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007002c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007002c7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007002c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007002ca: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x7002cfu); f_0082b158();
    /* 007002cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007002d2:; BB(0x007002d2);
    /* 007002d2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007002d5: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007002d8: jl 0x700281 */ if ((fS!=fO)) goto L_00700281;
L_007002da:; BB(0x007002da);
    /* 007002da: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007002de: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007002e2: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007002e6: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 007002eb: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007002ee: call 0x7079b4 */ r_esp -= 4; W32(r_esp, 0x7002f3u); f_007079b4();
    /* 007002f3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007002f7: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 007002fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007002fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007002fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007002ff: call 0x707a90 */ r_esp -= 4; W32(r_esp, 0x700304u); f_00707a90();
    /* 00700304: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00700307: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 0070030d: fld dword ptr [0x96e514] */ FPUSH(R_F32((u32)(0x96e514u)));
    /* 00700313: fmul dword ptr [0xa96dd4] */ ST(0) = ST(0) * R_F32((u32)(0xa96dd4u));
    /* 00700319: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0070031d: mov edx, dword ptr [esp + 0xcc] */ r_edx = R32((u32)(r_esp+0xccu));
    /* 00700324: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00700328: fld dword ptr [esp + 0xd0] */ FPUSH(R_F32((u32)(r_esp+0xd0u)));
    /* 0070032f: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 00700335: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 00700338: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0070033a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070033c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00700340: fstp dword ptr [esp + 0x100] */ W_F32((u32)(r_esp+0x100u), ST(0)); FPOP();
    /* 00700347: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00700349: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0070034d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070034f: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 00700356: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00700358: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 0070035f: mov dword ptr [esp + 0xf4], 0 */ W32((u32)(r_esp+0xf4u), 0x0u);
    /* 0070036a: mov dword ptr [esp + 0xe4], eax */ W32((u32)(r_esp+0xe4u), r_eax);
    /* 00700371: mov dword ptr [esp + 0xfc], 0x3f800000 */ W32((u32)(r_esp+0xfcu), 0x3f800000u);
    /* 0070037c: mov dword ptr [esp + 0xec], edx */ W32((u32)(r_esp+0xecu), r_edx);
    /* 00700383: mov dword ptr [esp + 0xf8], 0 */ W32((u32)(r_esp+0xf8u), 0x0u);
    /* 0070038e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x700393u); f_00829cc8();
    /* 00700393: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00700398: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x70039du); f_0082bb30();
    /* 0070039d: mov ecx, 4 */ r_ecx = 0x4u;
    /* 007003a2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007003a7: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7003acu); f_0082bb60();
    /* 007003ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007003ae:; BB(0x007003ae);
    /* 007003ae: cmp esi, dword ptr [ebx + 0x68] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007003b1: jne 0x7003c1 */ if (!fZ) goto L_007003c1;
L_007003b3:; BB(0x007003b3);
    /* 007003b3: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 007003b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007003b8: jne 0x7003c1 */ if (!fZ) goto L_007003c1;
L_007003ba:; BB(0x007003ba);
    /* 007003ba: mov ecx, 0xff000000 */ r_ecx = 0xff000000u;
    /* 007003bf: jmp 0x7003d2 */ goto L_007003d2;
L_007003c1:; BB(0x007003c1);
    /* 007003c1: cmp esi, dword ptr [ebx + 0x64] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x64u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007003c4: jl 0x7003cd */ if ((fS!=fO)) goto L_007003cd;
L_007003c6:; BB(0x007003c6);
    /* 007003c6: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 007003cb: jmp 0x7003d2 */ goto L_007003d2;
L_007003cd:; BB(0x007003cd);
    /* 007003cd: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
L_007003d2:; BB(0x007003d2);
    /* 007003d2: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x7003d7u); f_0082b438();
    /* 007003d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007003d8: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007003dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007003df: lea ecx, [esp + 0xe8] */ r_ecx = (u32)(r_esp+0xe8u);
    /* 007003e6: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7003ebu); f_0082b440();
    /* 007003eb: fld dword ptr [esp + 0xe8] */ FPUSH(R_F32((u32)(r_esp+0xe8u)));
    /* 007003f2: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007003f6: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007003f8: fld dword ptr [esp + 0xf0] */ FPUSH(R_F32((u32)(r_esp+0xf0u)));
    /* 007003ff: fld dword ptr [esp + 0x100] */ FPUSH(R_F32((u32)(r_esp+0x100u)));
    /* 00700406: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0070040a: mov eax, dword ptr [esp + 0x100] */ r_eax = R32((u32)(r_esp+0x100u));
    /* 00700411: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00700413: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 0070041a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070041c: fstp dword ptr [esp + 0x100] */ W_F32((u32)(r_esp+0x100u), ST(0)); FPOP();
    /* 00700423: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00700425: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 0070042c: mov dword ptr [esp + 0xf8], eax */ W32((u32)(r_esp+0xf8u), r_eax);
    /* 00700433: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00700436: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00700439: jl 0x7003ae */ if ((fS!=fO)) goto L_007003ae;
L_0070043f:; BB(0x0070043f);
    /* 0070043f: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x700444u); f_004ac444();
L_00700444:; BB(0x00700444);
    /* 00700444: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070044a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070044b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070044c: ret  */ FN_RET(0x007001e0); r_esp += 4; return;
}

void f_00700450(void) /* sub_700450 */
{
    FN_ENTER(0x00700450);
    /* 00700450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700451: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00700453: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700455: call 0x700474 */ r_esp -= 4; W32(r_esp, 0x70045au); f_00700474();
    /* 0070045a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070045e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700460: jne 0x700466 */ if (!fZ) goto L_00700466;
L_00700462:; BB(0x00700462);
    /* 00700462: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700463: ret 4 */ FN_RET(0x00700450); r_esp += 8; return;
L_00700466:; BB(0x00700466);
    /* 00700466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700467: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70046cu); f_005c2f74();
    /* 0070046c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070046d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070046e: ret 4 */ FN_RET(0x00700450); r_esp += 8; return;
}

void f_00700474(void) /* sub_700474 */
{
    FN_ENTER(0x00700474);
    /* 00700474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700475: mov ebp, esp */ r_ebp = r_esp;
    /* 00700477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700479: push 0x8f001c */ { u32 v = 0x8f001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070047e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700485: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070048c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070048f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700492: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700495: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00700498: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070049b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070049e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007004a1: mov dword ptr [ecx], 0xb3ebb8 */ W32((u32)(r_ecx), 0xb3ebb8u);
    /* 007004a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007004ae: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7004b3u); f_00710c28();
    /* 007004b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007004b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007004bd: mov esp, ebp */ r_esp = r_ebp;
    /* 007004bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007004c0: ret  */ FN_RET(0x00700474); r_esp += 4; return;
}

void f_007004c4(void) /* sub_7004C4 */
{
    FN_ENTER(0x007004c4);
    /* 007004c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007004c5: mov ebp, esp */ r_ebp = r_esp;
    /* 007004c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007004c9: push 0x8f0044 */ { u32 v = 0x8f0044u; r_esp -= 4; W32(r_esp, v); }
    /* 007004ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007004d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007004d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007004dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007004df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007004e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007004e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007004e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007004eb: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 007004ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007004f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7004f9u); f_005caba4();
    /* 007004f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007004fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007004fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007004ff: je 0x70052f */ if (fZ) goto L_0070052f;
L_00700501:; BB(0x00700501);
    /* 00700501: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00700508: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070050f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700512: call 0x700534 */ r_esp -= 4; W32(r_esp, 0x700517u); f_00700534();
    /* 00700517: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070051a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700521:; BB(0x00700521);
    /* 00700521: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700524: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070052b: mov esp, ebp */ r_esp = r_ebp;
    /* 0070052d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070052e: ret  */ FN_RET(0x007004c4); r_esp += 4; return;
L_0070052f:; BB(0x0070052f);
    /* 0070052f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700531: jmp 0x700521 */ goto L_00700521;
}

void f_00700534(void) /* sub_700534 */
{
    FN_ENTER(0x00700534);
    /* 00700534: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700535: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00700537: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700539: push 0x96e65c */ { u32 v = 0x96e65cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070053e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00700540: push 0x9d051c */ { u32 v = 0x9d051cu; r_esp -= 4; W32(r_esp, v); }
    /* 00700545: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x70054au); f_00710d30();
    /* 0070054a: mov dword ptr [ebx], 0xb3ebb8 */ W32((u32)(r_ebx), 0xb3ebb8u);
    /* 00700550: mov edx, dword ptr [0x9d0518] */ r_edx = R32((u32)(0x9d0518u));
    /* 00700556: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00700559: mov eax, ebx */ r_eax = r_ebx;
    /* 0070055b: mov dword ptr [ebx + 0x64], 0x40c00000 */ W32((u32)(r_ebx+0x64u), 0x40c00000u);
    /* 00700562: mov dword ptr [ebx + 0x68], 0x40c00000 */ W32((u32)(r_ebx+0x68u), 0x40c00000u);
    /* 00700569: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 00700570: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
    /* 00700577: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700578: ret  */ FN_RET(0x00700534); r_esp += 4; return;
}

void f_0070057c(void) /* sub_70057C */
{
    FN_ENTER(0x0070057c);
    /* 0070057c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070057d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070057e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070057f: sub esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700585: mov edi, ecx */ r_edi = r_ecx;
    /* 00700587: mov ecx, edi */ r_ecx = r_edi;
    /* 00700589: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x70058eu); f_00712644();
    /* 0070058e: mov esi, eax */ r_esi = r_eax;
    /* 00700590: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00700591: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700592: call 0x707918 */ r_esp -= 4; W32(r_esp, 0x700597u); f_00707918();
    /* 00700597: push dword ptr [0xa983d8] */ { u32 v = R32((u32)(0xa983d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070059d: call 0x7079a4 */ r_esp -= 4; W32(r_esp, 0x7005a2u); f_007079a4();
    /* 007005a2: mov ebp, eax */ r_ebp = r_eax;
    /* 007005a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007005a6: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007005a9: call 0x7079b4 */ r_esp -= 4; W32(r_esp, 0x7005aeu); f_007079b4();
    /* 007005ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007005b1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007005b5: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 007005bd: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 007005c1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007005c4: call 0x6ffdd4 */ r_esp -= 4; W32(r_esp, 0x7005c9u); f_006ffdd4();
    /* 007005c9: mov edx, dword ptr [0xa96d00] */ r_edx = R32((u32)(0xa96d00u));
    /* 007005cf: fld dword ptr [0x96e654] */ FPUSH(R_F32((u32)(0x96e654u)));
    /* 007005d5: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 007005d8: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 007005dc: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007005e0: mov edx, dword ptr [0xa96d04] */ r_edx = R32((u32)(0xa96d04u));
    /* 007005e6: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007005ea: mov edx, dword ptr [0xa96d08] */ r_edx = R32((u32)(0xa96d08u));
    /* 007005f0: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 007005f4: mov edx, dword ptr [0xa96d0c] */ r_edx = R32((u32)(0xa96d0cu));
    /* 007005fa: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 007005fe: mov edx, dword ptr [0xa96d10] */ r_edx = R32((u32)(0xa96d10u));
    /* 00700604: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00700608: mov edx, dword ptr [0xa96d14] */ r_edx = R32((u32)(0xa96d14u));
    /* 0070060e: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00700612: mov edx, dword ptr [0xa96d18] */ r_edx = R32((u32)(0xa96d18u));
    /* 00700618: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0070061c: mov edx, dword ptr [0xa96d1c] */ r_edx = R32((u32)(0xa96d1cu));
    /* 00700622: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00700626: mov edx, dword ptr [0xa96d20] */ r_edx = R32((u32)(0xa96d20u));
    /* 0070062c: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 00700633: mov edx, dword ptr [0xa96d24] */ r_edx = R32((u32)(0xa96d24u));
    /* 00700639: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 00700640: mov edx, dword ptr [0xa96d28] */ r_edx = R32((u32)(0xa96d28u));
    /* 00700646: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0070064d: mov edx, dword ptr [0xa96d2c] */ r_edx = R32((u32)(0xa96d2cu));
    /* 00700653: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 0070065a: mov edx, dword ptr [0xa96d30] */ r_edx = R32((u32)(0xa96d30u));
    /* 00700660: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 00700667: mov edx, dword ptr [0xa96d34] */ r_edx = R32((u32)(0xa96d34u));
    /* 0070066d: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 00700674: mov edx, dword ptr [0xa96d38] */ r_edx = R32((u32)(0xa96d38u));
    /* 0070067a: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 00700681: mov edx, dword ptr [0xa96d3c] */ r_edx = R32((u32)(0xa96d3cu));
    /* 00700687: mov dword ptr [esp + 0xd4], edx */ W32((u32)(r_esp+0xd4u), r_edx);
    /* 0070068e: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00700691: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00700693: fld dword ptr [edi + 0x44] */ FPUSH(R_F32((u32)(r_edi+0x44u)));
    /* 00700696: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00700698: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0070069a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070069c: fcom dword ptr [0x96e4bc] */ fx_compare(ST(0), R_F32((u32)(0x96e4bcu))); 
    /* 007006a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007006a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007006a6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007006a8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007006aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007006ac: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007006ae: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007006b2: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007006b4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007006b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007006b9: jae 0x7006cb */ if (!fC) goto L_007006cb;
L_007006bb:; BB(0x007006bb);
    /* 007006bb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007006bf: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 007006c3: fdiv dword ptr [0x96e64c] */ ST(0) = ST(0) / R_F32((u32)(0x96e64cu));
    /* 007006c9: jmp 0x7006d1 */ goto L_007006d1;
L_007006cb:; BB(0x007006cb);
    /* 007006cb: fld dword ptr [0x96e650] */ FPUSH(R_F32((u32)(0x96e650u)));
L_007006d1:; BB(0x007006d1);
    /* 007006d1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007006d5: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007006d9: fld dword ptr [0x96e4cc] */ FPUSH(R_F32((u32)(0x96e4ccu)));
    /* 007006df: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 007006e1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007006e3: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007006e7: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007006eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007006ed: fst dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0));
    /* 007006f4: fst dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0));
    /* 007006fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007006fd: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007006ff: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 00700703: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00700707: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00700709: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070070b: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 00700712: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 00700719: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0070071d: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00700720: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00700722: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00700725: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00700728: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070072a: fmul dword ptr [0x96e4b8] */ ST(0) = ST(0) * R_F32((u32)(0x96e4b8u));
    /* 00700730: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00700732: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00700734: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00700737: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00700739: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 0070073b: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0070073f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00700741: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00700743: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 00700747: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 0070074b: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00700752: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00700754: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00700756: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0070075a: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0070075e: fst dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0));
    /* 00700765: fstp dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0)); FPOP();
    /* 0070076c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070076e: fmul dword ptr [esi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x28u));
    /* 00700771: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00700773: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00700775: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 0070077c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070077e: fstp dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0)); FPOP();
    /* 00700785: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00700787: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700788: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070078a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070078b: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x700790u); f_0082b158();
    /* 00700790: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00700795: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700798: call 0x7079b4 */ r_esp -= 4; W32(r_esp, 0x70079du); f_007079b4();
    /* 0070079d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007007a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007007a4: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 007007aa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7007afu); f_00829cc8();
    /* 007007af: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007007b4: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7007b9u); f_0082bb30();
    /* 007007b9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007007bb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007007c0: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7007c5u); f_0082bb60();
    /* 007007c5: mov eax, dword ptr [0xa96e44] */ r_eax = R32((u32)(0xa96e44u));
    /* 007007ca: mov edx, dword ptr [0xa96e48] */ r_edx = R32((u32)(0xa96e48u));
    /* 007007d0: mov ebp, dword ptr [0xa96e4c] */ r_ebp = R32((u32)(0xa96e4cu));
    /* 007007d6: mov esi, dword ptr [0xa96e50] */ r_esi = R32((u32)(0xa96e50u));
    /* 007007dc: fld dword ptr [0x96e634] */ FPUSH(R_F32((u32)(0x96e634u)));
    /* 007007e2: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007007e6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007007ea: fld dword ptr [0x96e644] */ FPUSH(R_F32((u32)(0x96e644u)));
    /* 007007f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007007f2: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 007007f4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007007f6: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007007f8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007007fa: fstp dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0)); FPOP();
    /* 00700801: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00700803: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 0070080a: mov dword ptr [esp + 0xec], eax */ W32((u32)(r_esp+0xecu), r_eax);
    /* 00700811: mov dword ptr [esp + 0xf4], edx */ W32((u32)(r_esp+0xf4u), r_edx);
    /* 00700818: mov dword ptr [esp + 0xf0], ebp */ W32((u32)(r_esp+0xf0u), r_ebp);
    /* 0070081f: mov dword ptr [esp + 0xf8], esi */ W32((u32)(r_esp+0xf8u), r_esi);
    /* 00700826: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700827: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0070082b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0070082e: lea ecx, [esp + 0xe0] */ r_ecx = (u32)(r_esp+0xe0u);
    /* 00700835: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70083au); f_0082b440();
    /* 0070083a: mov eax, dword ptr [0xa96e54] */ r_eax = R32((u32)(0xa96e54u));
    /* 0070083f: mov edx, dword ptr [0xa96e58] */ r_edx = R32((u32)(0xa96e58u));
    /* 00700845: fld dword ptr [0x96e640] */ FPUSH(R_F32((u32)(0x96e640u)));
    /* 0070084b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0070084f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00700853: fld dword ptr [0x96e63c] */ FPUSH(R_F32((u32)(0x96e63cu)));
    /* 00700859: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070085b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0070085d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070085f: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00700861: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00700863: fstp dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0)); FPOP();
    /* 0070086a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070086c: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 00700873: mov dword ptr [esp + 0xf0], eax */ W32((u32)(r_esp+0xf0u), r_eax);
    /* 0070087a: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 00700881: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700882: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00700886: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00700889: lea ecx, [esp + 0xe0] */ r_ecx = (u32)(r_esp+0xe0u);
    /* 00700890: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x700895u); f_0082b440();
    /* 00700895: fld dword ptr [0xa96e5c] */ FPUSH(R_F32((u32)(0xa96e5cu)));
    /* 0070089b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0070089f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007008a3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007008a5: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 007008a9: mov edx, dword ptr [0xa96e60] */ r_edx = R32((u32)(0xa96e60u));
    /* 007008af: mov ebp, dword ptr [0xa96e64] */ r_ebp = R32((u32)(0xa96e64u));
    /* 007008b5: mov dword ptr [esp + 0xf0], edx */ W32((u32)(r_esp+0xf0u), r_edx);
    /* 007008bc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007008be: fchs  */ ST(0) = -ST(0);
    /* 007008c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007008c2: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 007008c6: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 007008c9: fcom dword ptr [edi + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x64u))); 
    /* 007008cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007008ce: mov dword ptr [esp + 0xf8], ebp */ W32((u32)(r_esp+0xf8u), r_ebp);
    /* 007008d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007008d6: jb 0x7008ec */ if (fC) goto L_007008ec;
L_007008d8:; BB(0x007008d8);
    /* 007008d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007008da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007008dc: fstp dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0)); FPOP();
    /* 007008e3: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 007008ea: jmp 0x700923 */ goto L_00700923;
L_007008ec:; BB(0x007008ec);
    /* 007008ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007008ee: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007008f0: fmul dword ptr [edi + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x60u));
    /* 007008f3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007008f5: fld dword ptr [0x96e638] */ FPUSH(R_F32((u32)(0x96e638u)));
    /* 007008fb: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007008fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007008ff: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 00700902: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00700904: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00700906: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00700908: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070090a: fst dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0));
    /* 00700911: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00700912: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00700914: jbe 0x700918 */ if ((fC||fZ)) goto L_00700918;
L_00700916:; BB(0x00700916);
    /* 00700916: fst st(1) */ ST(1) = ST(0);
L_00700918:; BB(0x00700918);
    /* 00700918: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070091a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070091c: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
L_00700923:; BB(0x00700923);
    /* 00700923: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700924: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00700928: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0070092b: lea ecx, [esp + 0xe0] */ r_ecx = (u32)(r_esp+0xe0u);
    /* 00700932: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x700937u); f_0082b440();
    /* 00700937: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x70093cu); f_004ac444();
    /* 0070093c: add esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00700942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700943: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00700944: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00700945: ret  */ FN_RET(0x0070057c); r_esp += 4; return;
}

void f_00700948(void) /* sub_700948 */
{
    FN_ENTER(0x00700948);
    /* 00700948: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0070094c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00700950: fld dword ptr [0x96e630] */ FPUSH(R_F32((u32)(0x96e630u)));
    /* 00700956: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00700958: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070095a: fstp dword ptr [ecx + 0x64] */ W_F32((u32)(r_ecx+0x64u), ST(0)); FPOP();
    /* 0070095d: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 00700960: fstp dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0)); FPOP();
    /* 00700963: ret 8 */ FN_RET(0x00700948); r_esp += 12; return;
}

void f_00700968(void) /* sub_700968 */
{
    FN_ENTER(0x00700968);
    /* 00700968: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0070096c: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 0070096f: ret 4 */ FN_RET(0x00700968); r_esp += 8; return;
}

void f_00700a0c(void) /* sub_700A0C */
{
    FN_ENTER(0x00700a0c);
    /* 00700a0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700a0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00700a0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700a11: call 0x700a30 */ r_esp -= 4; W32(r_esp, 0x700a16u); f_00700a30();
    /* 00700a16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00700a1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700a1c: jne 0x700a22 */ if (!fZ) goto L_00700a22;
L_00700a1e:; BB(0x00700a1e);
    /* 00700a1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700a1f: ret 4 */ FN_RET(0x00700a0c); r_esp += 8; return;
L_00700a22:; BB(0x00700a22);
    /* 00700a22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700a23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x700a28u); f_005c2f74();
    /* 00700a28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00700a29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700a2a: ret 4 */ FN_RET(0x00700a0c); r_esp += 8; return;
}

void f_00700a30(void) /* sub_700A30 */
{
    FN_ENTER(0x00700a30);
    /* 00700a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00700a33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700a35: push 0x8f0060 */ { u32 v = 0x8f0060u; r_esp -= 4; W32(r_esp, v); }
    /* 00700a3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700a41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700a48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700a4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700a4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700a51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00700a54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00700a57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00700a5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700a5d: mov dword ptr [ecx], 0xb3ec40 */ W32((u32)(r_ecx), 0xb3ec40u);
    /* 00700a63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00700a6a: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x700a6fu); f_00710c28();
    /* 00700a6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700a72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700a79: mov esp, ebp */ r_esp = r_ebp;
    /* 00700a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700a7c: ret  */ FN_RET(0x00700a30); r_esp += 4; return;
}

void f_00700a80(void) /* sub_700A80 */
{
    FN_ENTER(0x00700a80);
    /* 00700a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00700a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700a85: push 0x8f0088 */ { u32 v = 0x8f0088u; r_esp -= 4; W32(r_esp, v); }
    /* 00700a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700a98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700a9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700aa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00700aa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00700aa7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00700aaa: mov edx, dword ptr [0x96e4ac] */ r_edx = R32((u32)(0x96e4acu));
    /* 00700ab0: mov dword ptr [0x9d0558], eax */ W32((u32)(0x9d0558u), r_eax);
    /* 00700ab5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700abc: mov dword ptr [0x9d055c], edx */ W32((u32)(0x9d055cu), r_edx);
    /* 00700ac2: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00700ac4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x700ac9u); f_005caba4();
    /* 00700ac9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00700aca: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00700acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700acf: je 0x700b0b */ if (fZ) goto L_00700b0b;
L_00700ad1:; BB(0x00700ad1);
    /* 00700ad1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00700ad8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700adf: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700ae2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700ae5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00700ae8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700aeb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700aee: call 0x700b10 */ r_esp -= 4; W32(r_esp, 0x700af3u); f_00700b10();
    /* 00700af3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700af6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700afd:; BB(0x00700afd);
    /* 00700afd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700b00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700b07: mov esp, ebp */ r_esp = r_ebp;
    /* 00700b09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700b0a: ret  */ FN_RET(0x00700a80); r_esp += 4; return;
L_00700b0b:; BB(0x00700b0b);
    /* 00700b0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700b0d: jmp 0x700afd */ goto L_00700afd;
}

void f_00700b10(void) /* sub_700B10 */
{
    FN_ENTER(0x00700b10);
    /* 00700b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00700b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700b15: push 0x8f00a4 */ { u32 v = 0x8f00a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00700b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700b21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700b28: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700b2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700b2e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00700b31: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00700b34: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00700b37: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00700b3a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00700b3d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00700b40: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00700b43: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00700b46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700b47: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00700b4a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00700b4d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00700b50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00700b53: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00700b55: push 0x9d0558 */ { u32 v = 0x9d0558u; r_esp -= 4; W32(r_esp, v); }
    /* 00700b5a: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x700b5fu); f_00710d30();
    /* 00700b5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700b66: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00700b69: mov dword ptr [eax], 0xb3ec40 */ W32((u32)(r_eax), 0xb3ec40u);
    /* 00700b6f: mov edx, dword ptr [0x9d0530] */ r_edx = R32((u32)(0x9d0530u));
    /* 00700b75: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00700b78: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00700b7b: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00700b7d: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 00700b80: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00700b83: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
    /* 00700b86: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00700b88: mov dword ptr [eax + 0x6c], edi */ W32((u32)(r_eax+0x6cu), r_edi);
    /* 00700b8b: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00700b8e: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 00700b91: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00700b94: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00700b97: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00700b9a: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00700b9c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700b9e: je 0x700bda */ if (fZ) goto L_00700bda;
L_00700ba0:; BB(0x00700ba0);
    /* 00700ba0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700ba3: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00700ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700ba9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700bab: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x700bb0u); f_0072db60();
    /* 00700bb0: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00700bb5: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 00700bbc: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 00700bc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700bc5: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x700bcau); f_0072ddf4();
    /* 00700bca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700bcc: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x700bd1u); f_0072e0e4();
    /* 00700bd1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00700bd4: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00700bd7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00700bda:; BB(0x00700bda);
    /* 00700bda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00700bdd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00700be0: je 0x700be7 */ if (fZ) goto L_00700be7;
L_00700be2:; BB(0x00700be2);
    /* 00700be2: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00700be5: jne 0x700bf2 */ if (!fZ) goto L_00700bf2;
L_00700be7:; BB(0x00700be7);
    /* 00700be7: mov eax, dword ptr [0x96e594] */ r_eax = R32((u32)(0x96e594u));
    /* 00700bec: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00700bef: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_00700bf2:; BB(0x00700bf2);
    /* 00700bf2: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00700bf5: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00700bf8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00700bfb: mov dword ptr [eax + 0x5c], 0x1000000 */ W32((u32)(r_eax+0x5cu), 0x1000000u);
    /* 00700c02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700c05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700c0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00700c0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700c0f: ret 0x10 */ FN_RET(0x00700b10); r_esp += 20; return;
}

void f_00700c14(void) /* sub_700C14 */
{
    FN_ENTER(0x00700c14);
    /* 00700c14: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00700c17: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00700c19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700c1b: je 0x700c2b */ if (fZ) goto L_00700c2b;
L_00700c1d:; BB(0x00700c1d);
    /* 00700c1d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00700c22: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700c26: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x700c2bu); f_0072db60();
L_00700c2b:; BB(0x00700c2b);
    /* 00700c2b: ret 4 */ FN_RET(0x00700c14); r_esp += 8; return;
}

void f_00700c30(void) /* sub_700C30 */
{
    FN_ENTER(0x00700c30);
    /* 00700c30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700c31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700c32: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00700c34: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00700c37: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00700c39: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700c3b: je 0x700c57 */ if (fZ) goto L_00700c57;
L_00700c3d:; BB(0x00700c3d);
    /* 00700c3d: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00700c42: mov ecx, edi */ r_ecx = r_edi;
    /* 00700c44: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x700c49u); f_0072ddf4();
    /* 00700c49: fld dword ptr [0x96e520] */ FPUSH(R_F32((u32)(0x96e520u)));
    /* 00700c4f: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00700c51: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 00700c54: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
L_00700c57:; BB(0x00700c57);
    /* 00700c57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700c58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00700c59: ret  */ FN_RET(0x00700c30); r_esp += 4; return;
}

void f_00700c5c(void) /* sub_700C5C */
{
    FN_ENTER(0x00700c5c);
    /* 00700c5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700c5d: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 00700c60: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00700c63: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00700c67: fld dword ptr [0x96e674] */ FPUSH(R_F32((u32)(0x96e674u)));
    /* 00700c6d: fld dword ptr [ecx + 0x70] */ FPUSH(R_F32((u32)(r_ecx+0x70u)));
    /* 00700c70: mov edi, dword ptr [ecx + 0x70] */ r_edi = R32((u32)(r_ecx+0x70u));
    /* 00700c73: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00700c76: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00700c78: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00700c7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00700c7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00700c7d: jae 0x700c89 */ if (!fC) goto L_00700c89;
L_00700c7f:; BB(0x00700c7f);
    /* 00700c7f: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00700c82: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00700c84: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00700c87: jmp 0x700c8e */ goto L_00700c8e;
L_00700c89:; BB(0x00700c89);
    /* 00700c89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00700c8b: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_00700c8e:; BB(0x00700c8e);
    /* 00700c8e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00700c90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00700c92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00700c93: jbe 0x700ca1 */ if ((fC||fZ)) goto L_00700ca1;
L_00700c95:; BB(0x00700c95);
    /* 00700c95: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00700c98: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00700c9a: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00700c9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00700c9e: ret 4 */ FN_RET(0x00700c5c); r_esp += 8; return;
L_00700ca1:; BB(0x00700ca1);
    /* 00700ca1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00700ca3: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 00700ca6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00700ca7: ret 4 */ FN_RET(0x00700c5c); r_esp += 8; return;
}

void f_00700cac(void) /* sub_700CAC */
{
    FN_ENTER(0x00700cac);
    /* 00700cac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00700cb0: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00700cb3: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00700cb6: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00700cb9: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00700cbc: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00700cbf: ret 4 */ FN_RET(0x00700cac); r_esp += 8; return;
}

void f_00700cc4(void) /* sub_700CC4 */
{
    FN_ENTER(0x00700cc4);
    /* 00700cc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00700cc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700cc6: mov esi, ecx */ r_esi = r_ecx;
    /* 00700cc8: mov ecx, esi */ r_ecx = r_esi;
    /* 00700cca: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x700ccfu); f_00712644();
    /* 00700ccf: mov ebp, eax */ r_ebp = r_eax;
    /* 00700cd1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700cd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00700cd3: call 0x707918 */ r_esp -= 4; W32(r_esp, 0x700cd8u); f_00707918();
    /* 00700cd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00700cdb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700cdc: mov ecx, esi */ r_ecx = r_esi;
    /* 00700cde: call 0x700d00 */ r_esp -= 4; W32(r_esp, 0x700ce3u); f_00700d00();
    /* 00700ce3: fld dword ptr [0x96e670] */ FPUSH(R_F32((u32)(0x96e670u)));
    /* 00700ce9: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 00700cec: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00700cef: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00700cf2: mov ecx, esi */ r_ecx = r_esi;
    /* 00700cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700cf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00700cf6: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x700cfbu); f_0072a648();
    /* 00700cfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700cfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00700cfd: ret  */ FN_RET(0x00700cc4); r_esp += 4; return;
}

void f_00700d00(void) /* sub_700D00 */
{
    FN_ENTER(0x00700d00);
    /* 00700d00: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00700d04: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00700d07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700d09: jl 0x700d1a */ if ((fS!=fO)) goto L_00700d1a;
L_00700d0b:; BB(0x00700d0b);
    /* 00700d0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00700d0d: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700d10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00700d11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00700d12: call 0x707af0 */ r_esp -= 4; W32(r_esp, 0x700d17u); f_00707af0();
    /* 00700d17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00700d1a:; BB(0x00700d1a);
    /* 00700d1a: ret 4 */ FN_RET(0x00700d00); r_esp += 8; return;
}

void f_00700d20(void) /* sub_700D20 */
{
    FN_ENTER(0x00700d20);
    /* 00700d20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700d21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00700d23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700d25: call 0x700d44 */ r_esp -= 4; W32(r_esp, 0x700d2au); f_00700d44();
    /* 00700d2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00700d2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700d30: jne 0x700d36 */ if (!fZ) goto L_00700d36;
L_00700d32:; BB(0x00700d32);
    /* 00700d32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700d33: ret 4 */ FN_RET(0x00700d20); r_esp += 8; return;
L_00700d36:; BB(0x00700d36);
    /* 00700d36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700d37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x700d3cu); f_005c2f74();
    /* 00700d3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00700d3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700d3e: ret 4 */ FN_RET(0x00700d20); r_esp += 8; return;
}

void f_00700d44(void) /* sub_700D44 */
{
    FN_ENTER(0x00700d44);
    /* 00700d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700d45: mov ebp, esp */ r_ebp = r_esp;
    /* 00700d47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700d49: push 0x8f00c0 */ { u32 v = 0x8f00c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00700d4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700d55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700d5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700d5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700d62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700d65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00700d68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00700d6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00700d6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700d75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700d78: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 00700d7e: mov dword ptr [ecx], 0xb3ecc8 */ W32((u32)(r_ecx), 0xb3ecc8u);
    /* 00700d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700d86: je 0x700d9c */ if (fZ) goto L_00700d9c;
L_00700d88:; BB(0x00700d88);
    /* 00700d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700d89: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x700d8eu); f_00857e98();
    /* 00700d8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00700d8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700d92: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00700d9c:; BB(0x00700d9c);
    /* 00700d9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00700da3: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x700da8u); f_00710c28();
    /* 00700da8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700dab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700db2: mov esp, ebp */ r_esp = r_ebp;
    /* 00700db4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700db5: ret  */ FN_RET(0x00700d44); r_esp += 4; return;
}

void f_00700db8(void) /* sub_700DB8 */
{
    FN_ENTER(0x00700db8);
    /* 00700db8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700db9: mov ebp, esp */ r_ebp = r_esp;
    /* 00700dbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700dbd: push 0x8f00e8 */ { u32 v = 0x8f00e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00700dc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700dc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700dd0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700dd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700dd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00700dd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00700ddc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00700ddf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00700de2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00700de9: mov dword ptr [0x9d0588], eax */ W32((u32)(0x9d0588u), r_eax);
    /* 00700dee: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00700df3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x700df8u); f_005caba4();
    /* 00700df8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00700df9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00700dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700dfe: je 0x700e35 */ if (fZ) goto L_00700e35;
L_00700e00:; BB(0x00700e00);
    /* 00700e00: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00700e07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700e0e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00700e11: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700e15: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00700e18: call 0x700e3c */ r_esp -= 4; W32(r_esp, 0x700e1du); f_00700e3c();
    /* 00700e1d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700e20: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00700e27:; BB(0x00700e27);
    /* 00700e27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700e2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700e31: mov esp, ebp */ r_esp = r_ebp;
    /* 00700e33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700e34: ret  */ FN_RET(0x00700db8); r_esp += 4; return;
L_00700e35:; BB(0x00700e35);
    /* 00700e35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700e37: jmp 0x700e27 */ goto L_00700e27;
}

void f_00700e3c(void) /* sub_700E3C */
{
    FN_ENTER(0x00700e3c);
    /* 00700e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00700e3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00700e3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00700e41: push 0x8f0104 */ { u32 v = 0x8f0104u; r_esp -= 4; W32(r_esp, v); }
    /* 00700e46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00700e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700e4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00700e54: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00700e57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00700e5a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00700e5d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00700e60: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00700e63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00700e66: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00700e69: push 0x96e6a8 */ { u32 v = 0x96e6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00700e6e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00700e71: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00700e74: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00700e77: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00700e79: push 0x9d0570 */ { u32 v = 0x9d0570u; r_esp -= 4; W32(r_esp, v); }
    /* 00700e7e: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x700e83u); f_00710d30();
    /* 00700e83: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00700e8a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00700e8d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00700e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00700e93: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00700e96: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00700e98: mov dword ptr [ecx + 0x64], ebx */ W32((u32)(r_ecx+0x64u), r_ebx);
    /* 00700e9b: mov dword ptr [ecx], 0xb3ecc8 */ W32((u32)(r_ecx), 0xb3ecc8u);
    /* 00700ea1: mov eax, dword ptr [0x9d056c] */ r_eax = R32((u32)(0x9d056cu));
    /* 00700ea6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00700ea9: mov dword ptr [ecx + 0x60], ebx */ W32((u32)(r_ecx+0x60u), r_ebx);
    /* 00700eac: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 00700eb6: mov dword ptr [ecx + 0x70], esi */ W32((u32)(r_ecx+0x70u), r_esi);
    /* 00700eb9: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 00700ec3: call 0x7019b0 */ r_esp -= 4; W32(r_esp, 0x700ec8u); f_007019b0();
    /* 00700ec8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00700ecb: call 0x7018d4 */ r_esp -= 4; W32(r_esp, 0x700ed0u); f_007018d4();
    /* 00700ed0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00700ed3: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700ed6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00700ed9: mov dword ptr [eax + 0x5c], 0x1000000 */ W32((u32)(r_eax+0x5cu), 0x1000000u);
    /* 00700ee0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00700ee3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700eea: mov esp, ebp */ r_esp = r_ebp;
    /* 00700eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700eed: ret 8 */ FN_RET(0x00700e3c); r_esp += 12; return;
}

void f_00700ef0(void) /* sub_700EF0 */
{
    FN_ENTER(0x00700ef0);
    /* 00700ef0: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 00700ef7: ret  */ FN_RET(0x00700ef0); r_esp += 4; return;
}

void f_00700ef8(void) /* sub_700EF8 */
{
    FN_ENTER(0x00700ef8);
    /* 00700ef8: mov dword ptr [ecx + 0x64], 2 */ W32((u32)(r_ecx+0x64u), 0x2u);
    /* 00700eff: ret  */ FN_RET(0x00700ef8); r_esp += 4; return;
}

void f_00700f00(void) /* sub_700F00 */
{
    FN_ENTER(0x00700f00);
    /* 00700f00: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00700f03: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700f06: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00700f09: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 00700f13: ret  */ FN_RET(0x00700f00); r_esp += 4; return;
}

void f_00700f14(void) /* sub_700F14 */
{
    FN_ENTER(0x00700f14);
    /* 00700f14: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00700f17: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700f1a: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00700f1d: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 00700f27: ret  */ FN_RET(0x00700f14); r_esp += 4; return;
}

void f_00700f28(void) /* sub_700F28 */
{
    FN_ENTER(0x00700f28);
    /* 00700f28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00700f29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00700f2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700f2d: call 0x7018b4 */ r_esp -= 4; W32(r_esp, 0x700f32u); f_007018b4();
    /* 00700f32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00700f34: call 0x7018d4 */ r_esp -= 4; W32(r_esp, 0x700f39u); f_007018d4();
    /* 00700f39: mov dword ptr [ebx + 0x8c], 1 */ W32((u32)(r_ebx+0x8cu), 0x1u);
    /* 00700f43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00700f44: ret  */ FN_RET(0x00700f28); r_esp += 4; return;
}

void f_00700f48(void) /* sub_700F48 */
{
    FN_ENTER(0x00700f48);
    /* 00700f48: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00700f4c: mov edx, dword ptr [0x96e518] */ r_edx = R32((u32)(0x96e518u));
    /* 00700f52: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00700f55: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00700f58: ret 4 */ FN_RET(0x00700f48); r_esp += 8; return;
}

void f_00700f5c(void) /* sub_700F5C */
{
    FN_ENTER(0x00700f5c);
    /* 00700f5c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00700f60: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00700f63: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00700f65: fild dword ptr [ecx + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x6cu)));
    /* 00700f68: fmul dword ptr [0x96e4ac] */ ST(0) = ST(0) * R_F32((u32)(0x96e4acu));
    /* 00700f6e: fadd dword ptr [ecx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x44u));
    /* 00700f71: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00700f74: ret 4 */ FN_RET(0x00700f5c); r_esp += 8; return;
}

void f_00700f78(void) /* sub_700F78 */
{
    FN_ENTER(0x00700f78);
    /* 00700f78: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00700f7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700f7d: je 0x700f89 */ if (fZ) goto L_00700f89;
L_00700f7f:; BB(0x00700f7f);
    /* 00700f7f: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00700f82: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00700f85: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00700f88: ret  */ FN_RET(0x00700f78); r_esp += 4; return;
L_00700f89:; BB(0x00700f89);
    /* 00700f89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700f8b: ret  */ FN_RET(0x00700f78); r_esp += 4; return;
}

void f_00700f8c(void) /* sub_700F8C */
{
    FN_ENTER(0x00700f8c);
    /* 00700f8c: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00700f8f: ret  */ FN_RET(0x00700f8c); r_esp += 4; return;
}

void f_00700f90(void) /* sub_700F90 */
{
    FN_ENTER(0x00700f90);
    /* 00700f90: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00700f93: sub eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00700f96: ret  */ FN_RET(0x00700f90); r_esp += 4; return;
}

void f_00700f98(void) /* sub_700F98 */
{
    FN_ENTER(0x00700f98);
    /* 00700f98: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 00700f9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00700fa0: je 0x700faa */ if (fZ) goto L_00700faa;
L_00700fa2:; BB(0x00700fa2);
    /* 00700fa2: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00700fa5: movsx eax, word ptr [eax + edx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 00700fa9: ret  */ FN_RET(0x00700f98); r_esp += 4; return;
L_00700faa:; BB(0x00700faa);
    /* 00700faa: mov eax, 0x685 */ r_eax = 0x685u;
    /* 00700faf: ret  */ FN_RET(0x00700f98); r_esp += 4; return;
}

void f_00700fb0(void) /* sub_700FB0 */
{
    FN_ENTER(0x00700fb0);
    /* 00700fb0: movsx eax, word ptr [ecx + 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x70u));
    /* 00700fb4: ret  */ FN_RET(0x00700fb0); r_esp += 4; return;
}

void f_00700fb8(void) /* sub_700FB8 */
{
    FN_ENTER(0x00700fb8);
    /* 00700fb8: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 00700fbb: ret  */ FN_RET(0x00700fb8); r_esp += 4; return;
}

void f_00700fbc(void) /* sub_700FBC */
{
    FN_ENTER(0x00700fbc);
    /* 00700fbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00700fbd: mov esi, ecx */ r_esi = r_ecx;
    /* 00700fbf: mov ecx, esi */ r_ecx = r_esi;
    /* 00700fc1: call 0x700ff0 */ r_esp -= 4; W32(r_esp, 0x700fc6u); f_00700ff0();
    /* 00700fc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00700fca: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 00700fcd: mov ecx, esi */ r_ecx = r_esi;
    /* 00700fcf: call 0x7018b4 */ r_esp -= 4; W32(r_esp, 0x700fd4u); f_007018b4();
    /* 00700fd4: mov ecx, esi */ r_ecx = r_esi;
    /* 00700fd6: call 0x7018d4 */ r_esp -= 4; W32(r_esp, 0x700fdbu); f_007018d4();
    /* 00700fdb: mov ecx, esi */ r_ecx = r_esi;
    /* 00700fdd: call 0x7019b0 */ r_esp -= 4; W32(r_esp, 0x700fe2u); f_007019b0();
    /* 00700fe2: mov dword ptr [esi + 0x8c], 1 */ W32((u32)(r_esi+0x8cu), 0x1u);
    /* 00700fec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00700fed: ret 4 */ FN_RET(0x00700fbc); r_esp += 8; return;
}

void f_00700ff0(void) /* sub_700FF0 */
{
    FN_ENTER(0x00700ff0);
    /* 00700ff0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00700ff1: mov edi, ecx */ r_edi = r_ecx;
    /* 00700ff3: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 00700ff9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00700ffb: je 0x70100e */ if (fZ) goto L_0070100e;
L_00700ffd:; BB(0x00700ffd);
    /* 00700ffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00700ffe: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701003u); f_00857e98();
    /* 00701003: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701004: mov dword ptr [edi + 0x80], 0 */ W32((u32)(r_edi+0x80u), 0x0u);
L_0070100e:; BB(0x0070100e);
    /* 0070100e: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 00701011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701012: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x701017u); f_0072a590();
    /* 00701017: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00701019: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0070101c: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0070101f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701020: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00701021: ret  */ FN_RET(0x00700ff0); r_esp += 4; return;
}

