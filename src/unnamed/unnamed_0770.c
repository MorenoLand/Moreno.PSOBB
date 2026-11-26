#include "protos.h"

void f_00770000(void)
{
    FN_ENTER(0x00770000);
    /* 00770000: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x770005u); f_0082da80();
    /* 00770005: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00770006: ret  */ FN_RET(0x00770000); r_esp += 4; return;
}

void f_00770008(void) /* sub_770008 */
{
    FN_ENTER(0x00770008);
    /* 00770008: mov ecx, dword ptr [0xa9b194] */ r_ecx = R32((u32)(0xa9b194u));
    /* 0077000e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770010: je 0x770025 */ if (fZ) goto L_00770025;
L_00770012:; BB(0x00770012);
    /* 00770012: je 0x77001b */ if (fZ) goto L_0077001b;
L_00770014:; BB(0x00770014);
    /* 00770014: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00770016: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x77001bu); f_004066a8();
L_0077001b:; BB(0x0077001b);
    /* 0077001b: mov dword ptr [0xa9b194], 0 */ W32((u32)(0xa9b194u), 0x0u);
L_00770025:; BB(0x00770025);
    /* 00770025: ret  */ FN_RET(0x00770008); r_esp += 4; return;
}

void f_00770020(void)
{
    FN_ENTER(0x00770020);
    /* 00770020: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00770022: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00770024: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00770026: nop  */ ;
    /* 00770027: nop  */ ;
    /* 00770028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770029: mov ebp, esp */ r_ebp = r_esp;
    /* 0077002b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077002d: push 0x8f4024 */ { u32 v = 0x8f4024u; r_esp -= 4; W32(r_esp, v); }
    /* 00770032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00770038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00770040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00770043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00770046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00770049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077004c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077004f: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00770054: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077005b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x770060u); f_005caba4();
    /* 00770060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00770061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00770064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770066: je 0x77009f */ if (fZ) goto L_0077009f;
L_00770068:; BB(0x00770068);
    /* 00770068: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077006f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00770091:; BB(0x00770091);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x00770020); r_esp += 4; return;
L_0077009f:; BB(0x0077009f);
    /* 0077009f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007700a1: jmp 0x770091 */ goto L_00770091;
}

void f_00770028(void)
{
    FN_ENTER(0x00770028);
    /* 00770028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770029: mov ebp, esp */ r_ebp = r_esp;
    /* 0077002b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077002d: push 0x8f4024 */ { u32 v = 0x8f4024u; r_esp -= 4; W32(r_esp, v); }
    /* 00770032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00770038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00770040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00770043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00770046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00770049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077004c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077004f: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00770054: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077005b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x770060u); f_005caba4();
    /* 00770060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00770061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00770064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770066: je 0x77009f */ if (fZ) goto L_0077009f;
L_00770068:; BB(0x00770068);
    /* 00770068: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077006f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00770091:; BB(0x00770091);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x00770028); r_esp += 4; return;
L_0077009f:; BB(0x0077009f);
    /* 0077009f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007700a1: jmp 0x770091 */ goto L_00770091;
}

void f_0077005f(void)
{
    FN_ENTER(0x0077005f);
    goto L_0077005f;
L_0076ffea:; BB(0x0076ffea);
    /* 0076ffea: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ffed: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x76fff2u); f_00830a28();
    /* 0076fff2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076fff5: jmp 0x770000 */ goto L_00770000;
L_00770000:; BB(0x00770000);
    /* 00770000: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x770005u); f_0082da80();
    /* 00770005: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00770006: ret  */ FN_RET(0x0077005f); r_esp += 4; return;
L_0077005f:; BB(0x0077005f);
    /* 0077005f: call ptr [ecx - 0x77] */ { u32 t = R32((u32)(r_ecx+0xffffff89u)); r_esp -= 4; W32(r_esp, 0x770062u); call_ind(t); }
    /* 00770062: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00770063: loopne 0x76ffea */ r_ecx--; if (r_ecx && !fZ) goto L_0076ffea;
    /* 00770065: sal byte ptr [edi + esi - 0x39], 0x45 */ { u32 ad = (u32)(r_edi+r_esi+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0077006a: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 0077006c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0077006e: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00770070: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00770071: cld  */ rt_df = 0;
    /* 00770072: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00770074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x0077005f); r_esp += 4; return;
}

void f_00770061(void)
{
    FN_ENTER(0x00770061);
    /* 00770061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00770064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770066: je 0x77009f */ if (fZ) goto L_0077009f;
L_00770068:; BB(0x00770068);
    /* 00770068: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077006f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00770091:; BB(0x00770091);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x00770061); r_esp += 4; return;
L_0077009f:; BB(0x0077009f);
    /* 0077009f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007700a1: jmp 0x770091 */ goto L_00770091;
}

void f_00770065(void)
{
    FN_ENTER(0x00770065);
    /* 00770065: sal byte ptr [edi + esi - 0x39], 0x45 */ { u32 ad = (u32)(r_edi+r_esi+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0077006a: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 0077006c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0077006e: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00770070: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00770071: cld  */ rt_df = 0;
    /* 00770072: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00770074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x00770065); r_esp += 4; return;
}

void f_0077006f(void)
{
    FN_ENTER(0x0077006f);
    /* 0077006f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x0077006f); r_esp += 4; return;
}

void f_00770076(void)
{
    FN_ENTER(0x00770076);
    /* 00770076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770079: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077007f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770082: call 0x7700a4 */ r_esp -= 4; W32(r_esp, 0x770087u); f_007700a4();
    /* 00770087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077008a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00770091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077009b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077009d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077009e: ret  */ FN_RET(0x00770076); r_esp += 4; return;
}

void f_007700a4(void) /* sub_7700A4 */
{
    FN_ENTER(0x007700a4);
    /* 007700a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007700a5: mov ebp, esp */ r_ebp = r_esp;
    /* 007700a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007700a9: push 0x8f405a */ { u32 v = 0x8f405au; r_esp -= 4; W32(r_esp, v); }
    /* 007700ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007700b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007700b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007700bc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007700bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007700c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007700c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007700c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007700cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007700ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007700d1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007700d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007700d7: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x7700dcu); f_006132e4();
    /* 007700dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007700e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007700e6: mov dword ptr [ecx], 0xb44070 */ W32((u32)(r_ecx), 0xb44070u);
    /* 007700ec: mov eax, dword ptr [0x9f7d30] */ r_eax = R32((u32)(0x9f7d30u));
    /* 007700f1: mov edx, dword ptr [0xa9b194] */ r_edx = R32((u32)(0xa9b194u));
    /* 007700f7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007700fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007700fc: je 0x7701ee */ if (fZ) goto L_007701ee;
L_00770102:; BB(0x00770102);
    /* 00770102: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00770105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770106: call dword ptr [0xb44084] */ { u32 t = R32((u32)(0xb44084u)); r_esp -= 4; W32(r_esp, 0x77010cu); call_ind(t); }
    /* 0077010c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077010f: call 0x770220 */ r_esp -= 4; W32(r_esp, 0x770114u); f_00770220();
    /* 00770114: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00770117: call 0x770584 */ r_esp -= 4; W32(r_esp, 0x77011cu); f_00770584();
    /* 0077011c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00770123: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00770125: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77012au); f_005caba4();
    /* 0077012a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0077012d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00770130: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00770133: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770135: je 0x7701e4 */ if (fZ) goto L_007701e4;
L_0077013b:; BB(0x0077013b);
    /* 0077013b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00770142: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00770149: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077014c: mov ecx, eax */ r_ecx = r_eax;
    /* 0077014e: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x770153u); f_008193cc();
    /* 00770153: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0077015a:; BB(0x0077015a);
    /* 0077015a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077015d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00770160: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00770166: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077016d: movsx eax, word ptr [edx + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x28u));
    /* 00770171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770172: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770178: call 0x8115f0 */ r_esp -= 4; W32(r_esp, 0x77017du); f_008115f0();
    /* 0077017d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00770180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770182: je 0x7701ba */ if (fZ) goto L_007701ba;
L_00770184:; BB(0x00770184);
    /* 00770184: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00770187: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00770189: call 0x76fed8 */ r_esp -= 4; W32(r_esp, 0x77018eu); f_0076fed8();
    /* 0077018e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770191: je 0x7701bd */ if (fZ) goto L_007701bd;
L_00770193:; BB(0x00770193);
    /* 00770193: mov dword ptr [ebx + 0xd4], 2 */ W32((u32)(r_ebx+0xd4u), 0x2u);
    /* 0077019d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077019f: call 0x770210 */ r_esp -= 4; W32(r_esp, 0x7701a4u); f_00770210();
    /* 007701a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007701a7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007701aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007701ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007701b4: mov esp, ebp */ r_esp = r_ebp;
    /* 007701b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007701b7: ret 8 */ FN_RET(0x007700a4); r_esp += 12; return;
L_007701ba:; BB(0x007701ba);
    /* 007701ba: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_007701bd:; BB(0x007701bd);
    /* 007701bd: mov dword ptr [ebx + 0xd4], 0 */ W32((u32)(r_ebx+0xd4u), 0x0u);
    /* 007701c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007701c9: call 0x77034c */ r_esp -= 4; W32(r_esp, 0x7701ceu); f_0077034c();
    /* 007701ce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007701d1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007701d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007701d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007701de: mov esp, ebp */ r_esp = r_ebp;
    /* 007701e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007701e1: ret 8 */ FN_RET(0x007700a4); r_esp += 12; return;
L_007701e4:; BB(0x007701e4);
    /* 007701e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007701e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007701e9: jmp 0x77015a */ goto L_0077015a;
L_007701ee:; BB(0x007701ee);
    /* 007701ee: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 007701f2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007701f8: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 007701fc: mov eax, ecx */ r_eax = r_ecx;
    /* 007701fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770201: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00770208: mov esp, ebp */ r_esp = r_ebp;
    /* 0077020a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077020b: ret 8 */ FN_RET(0x007700a4); r_esp += 12; return;
}

void f_00770210(void) /* sub_770210 */
{
    FN_ENTER(0x00770210);
    /* 00770210: mov ecx, dword ptr [ecx + 0xd0] */ r_ecx = R32((u32)(r_ecx+0xd0u));
    /* 00770216: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770218: je 0x77021f */ if (fZ) goto L_0077021f;
L_0077021a:; BB(0x0077021a);
    /* 0077021a: call 0x8172ac */ r_esp -= 4; W32(r_esp, 0x77021fu); f_008172ac();
L_0077021f:; BB(0x0077021f);
    /* 0077021f: ret  */ FN_RET(0x00770210); r_esp += 4; return;
}

void f_00770220(void) /* sub_770220 */
{
    FN_ENTER(0x00770220);
    /* 00770220: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00770221: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770222: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00770223: mov esi, ecx */ r_esi = r_ecx;
    /* 00770225: mov ecx, esi */ r_ecx = r_esi;
    /* 00770227: call 0x76fed8 */ r_esp -= 4; W32(r_esp, 0x77022cu); f_0076fed8();
    /* 0077022c: mov ecx, dword ptr [0xa9b194] */ r_ecx = R32((u32)(0xa9b194u));
    /* 00770232: mov ebp, eax */ r_ebp = r_eax;
    /* 00770234: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00770238: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077023a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0077023d: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077023f: push dword ptr [edx + 0x9f7d38] */ { u32 v = R32((u32)(r_edx+0x9f7d38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770245: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x77024au); f_005b8610();
    /* 0077024a: mov ecx, dword ptr [0xa9b194] */ r_ecx = R32((u32)(0xa9b194u));
    /* 00770250: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00770253: push dword ptr [ebx + ebp*8 + 0x9f7d38] */ { u32 v = R32((u32)(r_ebx+r_ebp*8+0x9f7d38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077025a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x77025fu); f_005b8624();
    /* 0077025f: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00770262: mov eax, dword ptr [ebx + ebp*8 + 0x9f7d3c] */ r_eax = R32((u32)(r_ebx+r_ebp*8+0x9f7d3cu));
    /* 00770269: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077026b: jl 0x7702a3 */ if ((fS!=fO)) goto L_007702a3;
L_0077026d:; BB(0x0077026d);
    /* 0077026d: mov ecx, dword ptr [0xa9b194] */ r_ecx = R32((u32)(0xa9b194u));
    /* 00770273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770274: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x770279u); f_005b8638();
    /* 00770279: mov dword ptr [esi + 0xb8], 0x3f800000 */ W32((u32)(r_esi+0xb8u), 0x3f800000u);
    /* 00770283: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 00770289: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0077028c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0077028f: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00770292: fadd dword ptr [edx*4 + 0x977da8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x977da8u));
    /* 00770299: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 0077029f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007702a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007702a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007702a2: ret  */ FN_RET(0x00770220); r_esp += 4; return;
L_007702a3:; BB(0x007702a3);
    /* 007702a3: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 007702ad: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
    /* 007702b7: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
    /* 007702c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007702c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007702c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007702c4: ret  */ FN_RET(0x00770220); r_esp += 4; return;
}

void f_007702c8(void) /* sub_7702C8 */
{
    FN_ENTER(0x007702c8);
    /* 007702c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007702c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007702cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007702cd: push 0x8f4080 */ { u32 v = 0x8f4080u; r_esp -= 4; W32(r_esp, v); }
    /* 007702d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007702d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007702d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007702e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007702e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007702e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007702e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007702ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007702ef: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 007702f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007702fb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x770300u); f_008581c5();
    /* 00770300: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00770301: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00770304: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770306: je 0x770347 */ if (fZ) goto L_00770347;
L_00770308:; BB(0x00770308);
    /* 00770308: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077030f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770316: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077031b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077031c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077031d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077031e: push 0x9f7d78 */ { u32 v = 0x9f7d78u; r_esp -= 4; W32(r_esp, v); }
    /* 00770323: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00770325: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x77032au); f_005b7a84();
    /* 0077032a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077032d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00770334:; BB(0x00770334);
    /* 00770334: mov dword ptr [0xa9b194], eax */ W32((u32)(0xa9b194u), r_eax);
    /* 00770339: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077033c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00770343: mov esp, ebp */ r_esp = r_ebp;
    /* 00770345: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00770346: ret  */ FN_RET(0x007702c8); r_esp += 4; return;
L_00770347:; BB(0x00770347);
    /* 00770347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770349: jmp 0x770334 */ goto L_00770334;
}

void f_0077034c(void) /* sub_77034C */
{
    FN_ENTER(0x0077034c);
    /* 0077034c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077034d: mov ebp, esp */ r_ebp = r_esp;
    /* 0077034f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00770351: push 0x8f40ba */ { u32 v = 0x8f40bau; r_esp -= 4; W32(r_esp, v); }
    /* 00770356: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077035c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077035d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00770364: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077036a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077036d: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00770370: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00770373: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00770376: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00770379: call 0x76fed8 */ r_esp -= 4; W32(r_esp, 0x77037eu); f_0076fed8();
    /* 0077037e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770380: je 0x7703c7 */ if (fZ) goto L_007703c7;
L_00770382:; BB(0x00770382);
    /* 00770382: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770385: jne 0x770399 */ if (!fZ) goto L_00770399;
L_00770387:; BB(0x00770387);
    /* 00770387: mov eax, 0x9f7be0 */ r_eax = 0x9f7be0u;
    /* 0077038c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0077038f: mov edx, 0x9f7db4 */ r_edx = 0x9f7db4u;
    /* 00770394: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00770397: jmp 0x7703d7 */ goto L_007703d7;
L_00770399:; BB(0x00770399);
    /* 00770399: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077039c: jne 0x7703b0 */ if (!fZ) goto L_007703b0;
L_0077039e:; BB(0x0077039e);
    /* 0077039e: mov eax, 0x9f7c80 */ r_eax = 0x9f7c80u;
    /* 007703a3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007703a6: mov edx, 0x9f7dc0 */ r_edx = 0x9f7dc0u;
    /* 007703ab: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007703ae: jmp 0x7703d7 */ goto L_007703d7;
L_007703b0:; BB(0x007703b0);
    /* 007703b0: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 007703b3: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 007703b6: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007703b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007703bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007703c3: mov esp, ebp */ r_esp = r_ebp;
    /* 007703c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007703c6: ret  */ FN_RET(0x0077034c); r_esp += 4; return;
L_007703c7:; BB(0x007703c7);
    /* 007703c7: mov eax, 0x9f7d88 */ r_eax = 0x9f7d88u;
    /* 007703cc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007703cf: mov edx, 0xa9b190 */ r_edx = 0xa9b190u;
    /* 007703d4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_007703d7:; BB(0x007703d7);
    /* 007703d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007703d9: je 0x7703b0 */ if (fZ) goto L_007703b0;
L_007703db:; BB(0x007703db);
    /* 007703db: mov eax, edx */ r_eax = r_edx;
    /* 007703dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007703df: je 0x7703b0 */ if (fZ) goto L_007703b0;
L_007703e1:; BB(0x007703e1);
    /* 007703e1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007703e4: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 007703ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007703ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007703ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007703f1: jle 0x7703b0 */ if ((fZ||fS!=fO)) goto L_007703b0;
L_007703f3:; BB(0x007703f3);
    /* 007703f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007703f6: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007703f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007703fb: mov esi, dword ptr [ecx + 0xc8] */ r_esi = R32((u32)(r_ecx+0xc8u));
    /* 00770401: mov eax, dword ptr [esi + edi*4] */ r_eax = R32((u32)(r_esi+r_edi*4));
    /* 00770404: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00770407: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0077040a: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0077040d: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00770410: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00770412: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00770418: mov edx, dword ptr [esi + edi*4] */ r_edx = R32((u32)(r_esi+r_edi*4));
    /* 0077041b: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0077041e: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 00770421: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 00770424: mov eax, dword ptr [esi + edi*4] */ r_eax = R32((u32)(r_esi+r_edi*4));
    /* 00770427: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 0077042a: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 0077042d: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 00770433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770434: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x770439u); f_007b4c58();
    /* 00770439: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077043c: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00770441: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 00770444: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00770447: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0077044e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x770453u); f_005caba4();
    /* 00770453: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00770456: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00770459: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0077045c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077045e: je 0x77055f */ if (fZ) goto L_0077055f;
L_00770464:; BB(0x00770464);
    /* 00770464: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 0077046b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770472: mov ecx, eax */ r_ecx = r_eax;
    /* 00770474: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00770477: mov edx, edi */ r_edx = r_edi;
    /* 00770479: mov esi, dword ptr [eax + 0xd0] */ r_esi = R32((u32)(r_eax+0xd0u));
    /* 0077047f: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00770485: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00770486: mov dword ptr [ebp - 0x94], esi */ W32((u32)(r_ebp+0xffffff6cu), r_esi);
    /* 0077048c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0077048f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00770491: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00770493: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00770495: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00770497: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00770499: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077049b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077049d: add ebx, dword ptr [ebp - 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007704a0: mov dword ptr [ebp - 0x90], ebx */ W32((u32)(r_ebp+0xffffff70u), r_ebx);
    /* 007704a6: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x7704abu); f_007ba278();
    /* 007704ab: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007704b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007704b5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007704b8: fld dword ptr [0x977db4] */ FPUSH(R_F32((u32)(0x977db4u)));
    /* 007704be: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007704c0: mov dword ptr [eax], 0xb440a0 */ W32((u32)(r_eax), 0xb440a0u);
    /* 007704c6: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 007704cc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 007704cf: mov ebx, dword ptr [ebp - 0x7c] */ r_ebx = R32((u32)(r_ebp+0xffffff84u));
    /* 007704d2: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 007704d8: mov dword ptr [ebp - 0x40], 2 */ W32((u32)(r_ebp+0xffffffc0u), 0x2u);
    /* 007704df: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 007704e2: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 007704e5: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 007704e8: mov dword ptr [ebp - 0x5c], ebx */ W32((u32)(r_ebp+0xffffffa4u), r_ebx);
    /* 007704eb: mov dword ptr [ebp - 0x58], edi */ W32((u32)(r_ebp+0xffffffa8u), r_edi);
    /* 007704ee: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 007704f1: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 007704f4: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007704f7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007704f9: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 007704fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007704ff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00770501: mov dword ptr [ebp - 0x48], 0x43fa0000 */ W32((u32)(r_ebp+0xffffffb8u), 0x43fa0000u);
    /* 00770508: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 0077050b: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0077050e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077050f: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x770514u); f_0065f960();
    /* 00770514: mov edx, eax */ r_edx = r_eax;
    /* 00770516: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00770519: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077051c: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 00770523: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00770529: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0077052c: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0077052f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00770532: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00770535: mov esi, dword ptr [ebp - 0x58] */ r_esi = R32((u32)(r_ebp+0xffffffa8u));
    /* 00770538: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 0077053b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0077053e: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00770541: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 00770544: mov dword ptr [eax + 0x5c], esi */ W32((u32)(r_eax+0x5cu), r_esi);
    /* 00770547: mov dword ptr [eax + 0x60], edi */ W32((u32)(r_eax+0x60u), r_edi);
    /* 0077054a: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0077054d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00770550: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 00770553: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00770556: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 00770559: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0077055c: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
L_0077055f:; BB(0x0077055f);
    /* 0077055f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00770566: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00770569: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077056c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077056f: cmp eax, dword ptr [edx + 0xcc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770575: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00770578: jl 0x7703f3 */ if ((fS!=fO)) goto L_007703f3;
L_0077057e:; BB(0x0077057e);
    /* 0077057e: jmp 0x7703b0 */ goto L_007703b0;
}

void f_00770584(void) /* sub_770584 */
{
    FN_ENTER(0x00770584);
    /* 00770584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770585: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00770586: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00770588: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077058a: call 0x76fed8 */ r_esp -= 4; W32(r_esp, 0x77058fu); f_0076fed8();
    /* 0077058f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770591: je 0x7705db */ if (fZ) goto L_007705db;
L_00770593:; BB(0x00770593);
    /* 00770593: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770596: jne 0x7705af */ if (!fZ) goto L_007705af;
L_00770598:; BB(0x00770598);
    /* 00770598: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0077059b: mov dword ptr [ebp + 0xcc], 3 */ W32((u32)(r_ebp+0xccu), 0x3u);
    /* 007705a5: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 007705a8: mov edx, 3 */ r_edx = 0x3u;
    /* 007705ad: jmp 0x7705ed */ goto L_007705ed;
L_007705af:; BB(0x007705af);
    /* 007705af: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007705b2: jne 0x7705cb */ if (!fZ) goto L_007705cb;
L_007705b4:; BB(0x007705b4);
    /* 007705b4: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 007705b7: mov dword ptr [ebp + 0xcc], 4 */ W32((u32)(r_ebp+0xccu), 0x4u);
    /* 007705c1: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 007705c4: mov edx, 4 */ r_edx = 0x4u;
    /* 007705c9: jmp 0x7705ed */ goto L_007705ed;
L_007705cb:; BB(0x007705cb);
    /* 007705cb: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 007705d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007705d7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007705d9: jmp 0x7705ed */ goto L_007705ed;
L_007705db:; BB(0x007705db);
    /* 007705db: mov ebx, dword ptr [ebp + 0x34] */ r_ebx = R32((u32)(r_ebp+0x34u));
    /* 007705de: mov dword ptr [ebp + 0xcc], 1 */ W32((u32)(r_ebp+0xccu), 0x1u);
    /* 007705e8: mov edx, 1 */ r_edx = 0x1u;
L_007705ed:; BB(0x007705ed);
    /* 007705ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007705ef: jle 0x77062d */ if ((fZ||fS!=fO)) goto L_0077062d;
L_007705f1:; BB(0x007705f1);
    /* 007705f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007705f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007705f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007705f6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7705fbu); f_008581c5();
    /* 007705fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007705fc: mov ecx, dword ptr [ebp + 0xcc] */ r_ecx = R32((u32)(r_ebp+0xccu));
    /* 00770602: mov dword ptr [ebp + 0xc8], eax */ W32((u32)(r_ebp+0xc8u), r_eax);
    /* 00770608: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077060a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077060c: jle 0x770637 */ if ((fZ||fS!=fO)) goto L_00770637;
L_0077060e:; BB(0x0077060e);
    /* 0077060e: jmp 0x770616 */ goto L_00770616;
L_00770610:; BB(0x00770610);
    /* 00770610: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
L_00770616:; BB(0x00770616);
    /* 00770616: mov dword ptr [eax + edx*4], ebx */ W32((u32)(r_eax+r_edx*4), r_ebx);
    /* 00770619: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077061b: je 0x770620 */ if (fZ) goto L_00770620;
L_0077061d:; BB(0x0077061d);
    /* 0077061d: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
L_00770620:; BB(0x00770620);
    /* 00770620: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770623: cmp edx, dword ptr [ebp + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770629: jl 0x770610 */ if ((fS!=fO)) goto L_00770610;
L_0077062b:; BB(0x0077062b);
    /* 0077062b: jmp 0x770637 */ goto L_00770637;
L_0077062d:; BB(0x0077062d);
    /* 0077062d: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
L_00770637:; BB(0x00770637);
    /* 00770637: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00770638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00770639: ret  */ FN_RET(0x00770584); r_esp += 4; return;
}

void f_0077063c(void) /* sub_77063C */
{
    FN_ENTER(0x0077063c);
    /* 0077063c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077063d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077063f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00770641: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x770646u); f_00770660();
    /* 00770646: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077064a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077064c: jne 0x770652 */ if (!fZ) goto L_00770652;
L_0077064e:; BB(0x0077064e);
    /* 0077064e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077064f: ret 4 */ FN_RET(0x0077063c); r_esp += 8; return;
L_00770652:; BB(0x00770652);
    /* 00770652: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00770653: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x770658u); f_005c2f74();
    /* 00770658: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00770659: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077065a: ret 4 */ FN_RET(0x0077063c); r_esp += 8; return;
}

void f_00770660(void) /* sub_770660 */
{
    FN_ENTER(0x00770660);
    /* 00770660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770661: mov ebp, esp */ r_ebp = r_esp;
    /* 00770663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00770665: push 0x8f40d4 */ { u32 v = 0x8f40d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077066a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00770670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770671: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00770678: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077067b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077067e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00770681: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00770684: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00770687: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077068a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077068d: mov dword ptr [ecx], 0xb441c0 */ W32((u32)(r_ecx), 0xb441c0u);
    /* 00770693: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077069a: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x77069fu); f_007a9f38();
    /* 0077069f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007706a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007706a9: mov esp, ebp */ r_esp = r_ebp;
    /* 007706ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007706ac: ret  */ FN_RET(0x00770660); r_esp += 4; return;
}

void f_007706b0(void) /* sub_7706B0 */
{
    FN_ENTER(0x007706b0);
    /* 007706b0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007706b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007706b6: je 0x7706f1 */ if (fZ) goto L_007706f1;
L_007706b8:; BB(0x007706b8);
    /* 007706b8: movzx eax, word ptr [edx + 0x96] */ r_eax = (u32)R16((u32)(r_edx+0x96u));
    /* 007706bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007706c2: jne 0x7706d8 */ if (!fZ) goto L_007706d8;
L_007706c4:; BB(0x007706c4);
    /* 007706c4: mov dword ptr [ecx + 0x120], edx */ W32((u32)(r_ecx+0x120u), r_edx);
    /* 007706ca: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 007706ce: mov word ptr [ecx + 0x124], ax */ W16((u32)(r_ecx+0x124u), (u16)r_eax);
    /* 007706d5: ret 4 */ FN_RET(0x007706b0); r_esp += 8; return;
L_007706d8:; BB(0x007706d8);
    /* 007706d8: mov dword ptr [ecx + 0x120], 0 */ W32((u32)(r_ecx+0x120u), 0x0u);
    /* 007706e2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007706e7: mov word ptr [ecx + 0x124], ax */ W16((u32)(r_ecx+0x124u), (u16)r_eax);
    /* 007706ee: ret 4 */ FN_RET(0x007706b0); r_esp += 8; return;
L_007706f1:; BB(0x007706f1);
    /* 007706f1: mov dword ptr [ecx + 0x120], 0 */ W32((u32)(r_ecx+0x120u), 0x0u);
    /* 007706fb: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00770700: mov word ptr [ecx + 0x124], ax */ W16((u32)(r_ecx+0x124u), (u16)r_eax);
    /* 00770707: ret 4 */ FN_RET(0x007706b0); r_esp += 8; return;
}

void f_0077070c(void) /* sub_77070C */
{
    FN_ENTER(0x0077070c);
    /* 0077070c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077070d: mov edi, ecx */ r_edi = r_ecx;
    /* 0077070f: mov ecx, edi */ r_ecx = r_edi;
    /* 00770711: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x770716u); f_00770738();
    /* 00770716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770718: je 0x770735 */ if (fZ) goto L_00770735;
L_0077071a:; BB(0x0077071a);
    /* 0077071a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0077071d: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 00770723: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00770726: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 0077072c: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0077072f: mov dword ptr [edi + 0x2ac], eax */ W32((u32)(r_edi+0x2acu), r_eax);
L_00770735:; BB(0x00770735);
    /* 00770735: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00770736: ret  */ FN_RET(0x0077070c); r_esp += 4; return;
}

void f_00770738(void) /* sub_770738 */
{
    FN_ENTER(0x00770738);
    /* 00770738: movzx eax, word ptr [ecx + 0x124] */ r_eax = (u32)R16((u32)(r_ecx+0x124u));
    /* 0077073f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770740: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x770745u); f_00578c74();
    /* 00770745: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00770746: ret  */ FN_RET(0x00770738); r_esp += 4; return;
}

void f_00770748(void) /* sub_770748 */
{
    FN_ENTER(0x00770748);
    /* 00770748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770749: mov ebp, esp */ r_ebp = r_esp;
    /* 0077074b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077074d: push 0x8f40f0 */ { u32 v = 0x8f40f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00770752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00770758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00770759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00770760: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00770763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00770766: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00770769: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077076c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077076f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00770772: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00770775: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x77077au); f_007a9e5c();
    /* 0077077a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00770781: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770784: mov dword ptr [edx], 0xb441c0 */ W32((u32)(r_edx), 0xb441c0u);
    /* 0077078a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077078c: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 00770792: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
    /* 00770798: mov dword ptr [edx + 0x130], eax */ W32((u32)(r_edx+0x130u), r_eax);
    /* 0077079e: mov dword ptr [edx + 0x134], eax */ W32((u32)(r_edx+0x134u), r_eax);
    /* 007707a4: mov dword ptr [edx + 0x138], eax */ W32((u32)(r_edx+0x138u), r_eax);
    /* 007707aa: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 007707b0: mov dword ptr [edx + 0x140], eax */ W32((u32)(r_edx+0x140u), r_eax);
    /* 007707b6: mov dword ptr [edx + 0x144], eax */ W32((u32)(r_edx+0x144u), r_eax);
    /* 007707bc: mov dword ptr [edx + 0x148], eax */ W32((u32)(r_edx+0x148u), r_eax);
    /* 007707c2: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 007707c8: mov dword ptr [edx + 0x150], eax */ W32((u32)(r_edx+0x150u), r_eax);
    /* 007707ce: mov dword ptr [edx + 0x154], eax */ W32((u32)(r_edx+0x154u), r_eax);
    /* 007707d4: mov dword ptr [edx + 0x158], eax */ W32((u32)(r_edx+0x158u), r_eax);
    /* 007707da: mov dword ptr [edx + 0x15c], eax */ W32((u32)(r_edx+0x15cu), r_eax);
    /* 007707e0: mov dword ptr [edx + 0x160], eax */ W32((u32)(r_edx+0x160u), r_eax);
    /* 007707e6: mov dword ptr [edx + 0x164], eax */ W32((u32)(r_edx+0x164u), r_eax);
    /* 007707ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007707ef: add ecx, 0x168 */ {  u32 a = r_ecx; u32 b = 0x168u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007707f5: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x7707fau); f_00763030();
    /* 007707fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007707fd: add ecx, 0x25c */ {  u32 a = r_ecx; u32 b = 0x25cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00770803: mov ebx, 5 */ r_ebx = 0x5u;
    /* 00770808: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0077080a:; BB(0x0077080a);
    /* 0077080a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077080c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0077080e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00770811: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00770814: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00770817: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0077081a: jne 0x77080a */ if (!fZ) goto L_0077080a;
L_0077081c:; BB(0x0077081c);
    /* 0077081c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077081f: lea eax, [ecx + 0x128] */ r_eax = (u32)(r_ecx+0x128u);
    /* 00770825: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 0077082b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077082d: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00770834: call 0x770a68 */ r_esp -= 4; W32(r_esp, 0x770839u); f_00770a68();
    /* 00770839: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077083c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00770841: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00770845: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00770847: mov dword ptr [ebx + 0x2b4], edx */ W32((u32)(r_ebx+0x2b4u), r_edx);
    /* 0077084d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077084e: mov dword ptr [ebx + 0x120], edx */ W32((u32)(r_ebx+0x120u), r_edx);
    /* 00770854: mov word ptr [ebx + 0x124], ax */ W16((u32)(r_ebx+0x124u), (u16)r_eax);
    /* 0077085b: mov dword ptr [ebx + 0x318], edx */ W32((u32)(r_ebx+0x318u), r_edx);
    /* 00770861: mov dword ptr [ebx + 0x31c], edx */ W32((u32)(r_ebx+0x31cu), r_edx);
    /* 00770867: mov dword ptr [ebx + 0x320], edx */ W32((u32)(r_ebx+0x320u), r_edx);
    /* 0077086d: mov dword ptr [ebx + 0x324], edx */ W32((u32)(r_ebx+0x324u), r_edx);
    /* 00770873: mov word ptr [ebx + 0x2c2], dx */ W16((u32)(r_ebx+0x2c2u), (u16)r_edx);
    /* 0077087a: mov word ptr [ebx + 0x2c0], dx */ W16((u32)(r_ebx+0x2c0u), (u16)r_edx);
    /* 00770881: mov word ptr [ebx + 0x336], dx */ W16((u32)(r_ebx+0x336u), (u16)r_edx);
    /* 00770888: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 0077088f: mov word ptr [ebx + 0x2be], dx */ W16((u32)(r_ebx+0x2beu), (u16)r_edx);
    /* 00770896: mov word ptr [ebx + 0x2bc], dx */ W16((u32)(r_ebx+0x2bcu), (u16)r_edx);
    /* 0077089d: mov word ptr [ebx + 0x11a], dx */ W16((u32)(r_ebx+0x11au), (u16)r_edx);
    /* 007708a4: mov word ptr [ebx + 0x2cc], dx */ W16((u32)(r_ebx+0x2ccu), (u16)r_edx);
    /* 007708ab: mov word ptr [ebx + 0x2c4], dx */ W16((u32)(r_ebx+0x2c4u), (u16)r_edx);
    /* 007708b2: mov word ptr [ebx + 0x2ce], dx */ W16((u32)(r_ebx+0x2ceu), (u16)r_edx);
    /* 007708b9: mov word ptr [ebx + 0x2c6], dx */ W16((u32)(r_ebx+0x2c6u), (u16)r_edx);
    /* 007708c0: mov word ptr [ebx + 0x2d0], dx */ W16((u32)(r_ebx+0x2d0u), (u16)r_edx);
    /* 007708c7: mov word ptr [ebx + 0x2c8], dx */ W16((u32)(r_ebx+0x2c8u), (u16)r_edx);
    /* 007708ce: mov word ptr [ebx + 0x2d2], dx */ W16((u32)(r_ebx+0x2d2u), (u16)r_edx);
    /* 007708d5: mov word ptr [ebx + 0x2ca], dx */ W16((u32)(r_ebx+0x2cau), (u16)r_edx);
    /* 007708dc: mov word ptr [ebx + 0x2d6], dx */ W16((u32)(r_ebx+0x2d6u), (u16)r_edx);
    /* 007708e3: mov word ptr [ebx + 0x2d4], dx */ W16((u32)(r_ebx+0x2d4u), (u16)r_edx);
    /* 007708ea: mov dword ptr [ebx + 0x2e4], edx */ W32((u32)(r_ebx+0x2e4u), r_edx);
    /* 007708f0: mov word ptr [ebx + 0x2f4], dx */ W16((u32)(r_ebx+0x2f4u), (u16)r_edx);
    /* 007708f7: mov word ptr [ebx + 0x2f2], dx */ W16((u32)(r_ebx+0x2f2u), (u16)r_edx);
    /* 007708fe: mov word ptr [ebx + 0x2f0], dx */ W16((u32)(r_ebx+0x2f0u), (u16)r_edx);
    /* 00770905: mov word ptr [ebx + 0x2ee], dx */ W16((u32)(r_ebx+0x2eeu), (u16)r_edx);
    /* 0077090c: mov word ptr [ebx + 0x2ec], dx */ W16((u32)(r_ebx+0x2ecu), (u16)r_edx);
    /* 00770913: mov word ptr [ebx + 0x2fe], dx */ W16((u32)(r_ebx+0x2feu), (u16)r_edx);
    /* 0077091a: mov word ptr [ebx + 0x2fc], dx */ W16((u32)(r_ebx+0x2fcu), (u16)r_edx);
    /* 00770921: mov word ptr [ebx + 0x2fa], dx */ W16((u32)(r_ebx+0x2fau), (u16)r_edx);
    /* 00770928: mov word ptr [ebx + 0x2f8], dx */ W16((u32)(r_ebx+0x2f8u), (u16)r_edx);
    /* 0077092f: mov word ptr [ebx + 0x2f6], dx */ W16((u32)(r_ebx+0x2f6u), (u16)r_edx);
    /* 00770936: lea ecx, [ebx + 0x168] */ r_ecx = (u32)(r_ebx+0x168u);
    /* 0077093c: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x770941u); f_0084c390();
    /* 00770941: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770944: mov dword ptr [eax + 0x260], 0 */ W32((u32)(r_eax+0x260u), 0x0u);
    /* 0077094e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770950: mov dword ptr [eax + 0x2e8], ecx */ W32((u32)(r_eax+0x2e8u), r_ecx);
    /* 00770956: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0077095b: mov word ptr [eax + 0x32c], cx */ W16((u32)(r_eax+0x32cu), (u16)r_ecx);
    /* 00770962: mov word ptr [eax + 0x2dc], dx */ W16((u32)(r_eax+0x2dcu), (u16)r_edx);
    /* 00770969: mov byte ptr [eax + 0x110], cl */ W8((u32)(r_eax+0x110u), (u8)r_ecx);
    /* 0077096f: mov byte ptr [eax + 0x111], cl */ W8((u32)(r_eax+0x111u), (u8)r_ecx);
    /* 00770975: mov byte ptr [eax + 0x112], cl */ W8((u32)(r_eax+0x112u), (u8)r_ecx);
    /* 0077097b: mov byte ptr [eax + 0x113], cl */ W8((u32)(r_eax+0x113u), (u8)r_ecx);
    /* 00770981: mov byte ptr [eax + 0x114], cl */ W8((u32)(r_eax+0x114u), (u8)r_ecx);
    /* 00770987: mov byte ptr [eax + 0x115], cl */ W8((u32)(r_eax+0x115u), (u8)r_ecx);
    /* 0077098d: mov dword ptr [eax + 0x25c], ecx */ W32((u32)(r_eax+0x25cu), r_ecx);
    /* 00770993: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770996: mov dword ptr [eax + 0x264], ecx */ W32((u32)(r_eax+0x264u), r_ecx);
    /* 0077099c: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 007709a6: mov dword ptr [edi + 0x268], ecx */ W32((u32)(r_edi+0x268u), r_ecx);
    /* 007709ac: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007709af: mov dword ptr [edi + 0x270], ecx */ W32((u32)(r_edi+0x270u), r_ecx);
    /* 007709b5: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007709b8: mov dword ptr [esi + 0x274], ecx */ W32((u32)(r_esi+0x274u), r_ecx);
    /* 007709be: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007709c1: mov dword ptr [esi + 0x278], 0 */ W32((u32)(r_esi+0x278u), 0x0u);
    /* 007709cb: mov dword ptr [esi + 0x27c], ecx */ W32((u32)(r_esi+0x27cu), r_ecx);
    /* 007709d1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007709d4: mov dword ptr [ebx + 0x284], 0 */ W32((u32)(r_ebx+0x284u), 0x0u);
    /* 007709de: mov dword ptr [ebx + 0x280], ecx */ W32((u32)(r_ebx+0x280u), r_ecx);
    /* 007709e4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007709e7: mov dword ptr [ebx + 0x288], ecx */ W32((u32)(r_ebx+0x288u), r_ecx);
    /* 007709ed: mov dword ptr [eax + 0x290], 0 */ W32((u32)(r_eax+0x290u), 0x0u);
    /* 007709f7: mov dword ptr [eax + 0x28c], ecx */ W32((u32)(r_eax+0x28cu), r_ecx);
    /* 007709fd: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00770a00: mov dword ptr [eax + 0x294], ecx */ W32((u32)(r_eax+0x294u), r_ecx);
    /* 00770a06: mov word ptr [ebx + 0x116], cx */ W16((u32)(r_ebx+0x116u), (u16)r_ecx);
    /* 00770a0d: mov word ptr [ebx + 0x118], cx */ W16((u32)(r_ebx+0x118u), (u16)r_ecx);
    /* 00770a14: mov word ptr [ebx + 0x2da], dx */ W16((u32)(r_ebx+0x2dau), (u16)r_edx);
    /* 00770a1b: mov word ptr [ebx + 0xfc], dx */ W16((u32)(r_ebx+0xfcu), (u16)r_edx);
    /* 00770a22: mov word ptr [ebx + 0xfe], dx */ W16((u32)(r_ebx+0xfeu), (u16)r_edx);
    /* 00770a29: mov word ptr [ebx + 0x100], dx */ W16((u32)(r_ebx+0x100u), (u16)r_edx);
    /* 00770a30: mov word ptr [ebx + 0x102], dx */ W16((u32)(r_ebx+0x102u), (u16)r_edx);
    /* 00770a37: mov dword ptr [ebx + 0x338], ecx */ W32((u32)(r_ebx+0x338u), r_ecx);
    /* 00770a3d: mov eax, 1 */ r_eax = 0x1u;
    /* 00770a42: mov word ptr [ebx + 0x96], ax */ W16((u32)(r_ebx+0x96u), (u16)r_eax);
    /* 00770a49: mov word ptr [ebx + 0x11c], cx */ W16((u32)(r_ebx+0x11cu), (u16)r_ecx);
    /* 00770a50: mov eax, ebx */ r_eax = r_ebx;
    /* 00770a52: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00770a55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00770a58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00770a5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00770a61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00770a62: ret 4 */ FN_RET(0x00770748); r_esp += 8; return;
}

void f_00770a68(void) /* sub_770A68 */
{
    FN_ENTER(0x00770a68);
    /* 00770a68: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 00770a72: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770a74: mov dword ptr [ecx + 0x108], 0 */ W32((u32)(r_ecx+0x108u), 0x0u);
    /* 00770a7e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00770a83: mov dword ptr [ecx + 0x2b0], edx */ W32((u32)(r_ecx+0x2b0u), r_edx);
    /* 00770a89: mov dword ptr [ecx + 0x104], 0 */ W32((u32)(r_ecx+0x104u), 0x0u);
    /* 00770a93: mov word ptr [ecx + 0x2d8], ax */ W16((u32)(r_ecx+0x2d8u), (u16)r_eax);
    /* 00770a9a: mov dword ptr [ecx + 0x2e0], edx */ W32((u32)(r_ecx+0x2e0u), r_edx);
    /* 00770aa0: mov word ptr [ecx + 0x332], dx */ W16((u32)(r_ecx+0x332u), (u16)r_edx);
    /* 00770aa7: mov dword ptr [ecx + 0x2a0], 0 */ W32((u32)(r_ecx+0x2a0u), 0x0u);
    /* 00770ab1: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00770ab8: mov dword ptr [ecx + 0x328], edx */ W32((u32)(r_ecx+0x328u), r_edx);
    /* 00770abe: mov dword ptr [ecx + 0x29c], 0 */ W32((u32)(r_ecx+0x29cu), 0x0u);
    /* 00770ac8: mov dword ptr [ecx + 0x298], 0 */ W32((u32)(r_ecx+0x298u), 0x0u);
    /* 00770ad2: mov dword ptr [ecx + 0x2ac], 0 */ W32((u32)(r_ecx+0x2acu), 0x0u);
    /* 00770adc: mov dword ptr [ecx + 0x2a8], 0 */ W32((u32)(r_ecx+0x2a8u), 0x0u);
    /* 00770ae6: mov dword ptr [ecx + 0x2a4], 0 */ W32((u32)(r_ecx+0x2a4u), 0x0u);
    /* 00770af0: mov dword ptr [ecx + 0x258], 0 */ W32((u32)(r_ecx+0x258u), 0x0u);
    /* 00770afa: mov dword ptr [ecx + 0x250], 0 */ W32((u32)(r_ecx+0x250u), 0x0u);
    /* 00770b04: mov dword ptr [ecx + 0x254], 0x3f800000 */ W32((u32)(r_ecx+0x254u), 0x3f800000u);
    /* 00770b0e: mov dword ptr [ecx + 0x2b8], 0 */ W32((u32)(r_ecx+0x2b8u), 0x0u);
    /* 00770b18: mov dword ptr [ecx + 0x314], 0 */ W32((u32)(r_ecx+0x314u), 0x0u);
    /* 00770b22: mov dword ptr [ecx + 0x310], 0 */ W32((u32)(r_ecx+0x310u), 0x0u);
    /* 00770b2c: mov dword ptr [ecx + 0x30c], 0 */ W32((u32)(r_ecx+0x30cu), 0x0u);
    /* 00770b36: mov dword ptr [ecx + 0x308], 0 */ W32((u32)(r_ecx+0x308u), 0x0u);
    /* 00770b40: mov dword ptr [ecx + 0x304], 0 */ W32((u32)(r_ecx+0x304u), 0x0u);
    /* 00770b4a: mov dword ptr [ecx + 0x300], 0 */ W32((u32)(r_ecx+0x300u), 0x0u);
    /* 00770b54: ret  */ FN_RET(0x00770a68); r_esp += 4; return;
}

void f_00770b58(void) /* sub_770B58 */
{
    FN_ENTER(0x00770b58);
    /* 00770b58: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00770b5d: mov word ptr [ecx + 0x334], ax */ W16((u32)(r_ecx+0x334u), (u16)r_eax);
    /* 00770b64: lea edx, [ecx + 0x334] */ r_edx = (u32)(r_ecx+0x334u);
    /* 00770b6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00770b6b: call 0x770b74 */ r_esp -= 4; W32(r_esp, 0x770b70u); f_00770b74();
    /* 00770b70: ret 4 */ FN_RET(0x00770b58); r_esp += 8; return;
}

void f_00770b74(void) /* sub_770B74 */
{
    FN_ENTER(0x00770b74);
    /* 00770b74: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00770b78: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00770b7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00770b7d: jl 0x770b9a */ if ((fS!=fO)) goto L_00770b9a;
L_00770b7f:; BB(0x00770b7f);
    /* 00770b7f: movsx ecx, word ptr [ecx + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 00770b86: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770b88: jle 0x770b92 */ if ((fZ||fS!=fO)) goto L_00770b92;
L_00770b8a:; BB(0x00770b8a);
    /* 00770b8a: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00770b8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770b8f: ret 4 */ FN_RET(0x00770b74); r_esp += 8; return;
L_00770b92:; BB(0x00770b92);
    /* 00770b92: mov eax, 1 */ r_eax = 0x1u;
    /* 00770b97: ret 4 */ FN_RET(0x00770b74); r_esp += 8; return;
L_00770b9a:; BB(0x00770b9a);
    /* 00770b9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00770b9c: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00770b9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770ba1: ret 4 */ FN_RET(0x00770b74); r_esp += 8; return;
}

void f_00770ba4(void) /* sub_770BA4 */
{
    FN_ENTER(0x00770ba4);
    /* 00770ba4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00770ba9: movzx edx, word ptr [ecx + 0x2c0] */ r_edx = (u32)R16((u32)(r_ecx+0x2c0u));
    /* 00770bb0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770bb2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00770bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770bb7: jl 0x770bc8 */ if ((fS!=fO)) goto L_00770bc8;
L_00770bb9:; BB(0x00770bb9);
    /* 00770bb9: mov word ptr [ecx + 0x2c0], ax */ W16((u32)(r_ecx+0x2c0u), (u16)r_eax);
    /* 00770bc0: mov eax, 1 */ r_eax = 0x1u;
    /* 00770bc5: ret 4 */ FN_RET(0x00770ba4); r_esp += 8; return;
L_00770bc8:; BB(0x00770bc8);
    /* 00770bc8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00770bca: mov word ptr [ecx + 0x2c0], dx */ W16((u32)(r_ecx+0x2c0u), (u16)r_edx);
    /* 00770bd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770bd3: ret 4 */ FN_RET(0x00770ba4); r_esp += 8; return;
}

void f_00770bd8(void) /* sub_770BD8 */
{
    FN_ENTER(0x00770bd8);
    /* 00770bd8: movsx eax, word ptr [ecx + 0x2c0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c0u));
    /* 00770bdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00770be1: jl 0x770bf4 */ if ((fS!=fO)) goto L_00770bf4;
L_00770be3:; BB(0x00770be3);
    /* 00770be3: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770be8: jle 0x770bf0 */ if ((fZ||fS!=fO)) goto L_00770bf0;
L_00770bea:; BB(0x00770bea);
    /* 00770bea: mov eax, 0xfa */ r_eax = 0xfau;
    /* 00770bef: ret  */ FN_RET(0x00770bd8); r_esp += 4; return;
L_00770bf0:; BB(0x00770bf0);
    /* 00770bf0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00770bf3: ret  */ FN_RET(0x00770bd8); r_esp += 4; return;
L_00770bf4:; BB(0x00770bf4);
    /* 00770bf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770bf6: ret  */ FN_RET(0x00770bd8); r_esp += 4; return;
}

void f_00770bf8(void) /* sub_770BF8 */
{
    FN_ENTER(0x00770bf8);
    /* 00770bf8: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00770bfd: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00770c04: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770c07: jne 0x770c0e */ if (!fZ) goto L_00770c0e;
L_00770c09:; BB(0x00770c09);
    /* 00770c09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770c0b: ret 4 */ FN_RET(0x00770bf8); r_esp += 8; return;
L_00770c0e:; BB(0x00770c0e);
    /* 00770c0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00770c0f: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x770c14u); f_007773a0();
    /* 00770c14: ret 4 */ FN_RET(0x00770bf8); r_esp += 8; return;
}

void f_00770c18(void) /* sub_770C18 */
{
    FN_ENTER(0x00770c18);
    /* 00770c18: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00770c1d: movzx edx, word ptr [ecx + 0x2c2] */ r_edx = (u32)R16((u32)(r_ecx+0x2c2u));
    /* 00770c24: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770c26: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00770c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770c2b: jl 0x770c3c */ if ((fS!=fO)) goto L_00770c3c;
L_00770c2d:; BB(0x00770c2d);
    /* 00770c2d: mov word ptr [ecx + 0x2c2], ax */ W16((u32)(r_ecx+0x2c2u), (u16)r_eax);
    /* 00770c34: mov eax, 1 */ r_eax = 0x1u;
    /* 00770c39: ret 4 */ FN_RET(0x00770c18); r_esp += 8; return;
L_00770c3c:; BB(0x00770c3c);
    /* 00770c3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00770c3e: mov word ptr [ecx + 0x2c2], dx */ W16((u32)(r_ecx+0x2c2u), (u16)r_edx);
    /* 00770c45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770c47: ret 4 */ FN_RET(0x00770c18); r_esp += 8; return;
}

void f_00770c4c(void) /* sub_770C4C */
{
    FN_ENTER(0x00770c4c);
    /* 00770c4c: movsx eax, word ptr [ecx + 0x2c2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c2u));
    /* 00770c53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00770c55: jl 0x770c68 */ if ((fS!=fO)) goto L_00770c68;
L_00770c57:; BB(0x00770c57);
    /* 00770c57: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770c5c: jle 0x770c64 */ if ((fZ||fS!=fO)) goto L_00770c64;
L_00770c5e:; BB(0x00770c5e);
    /* 00770c5e: mov eax, 0xfa */ r_eax = 0xfau;
    /* 00770c63: ret  */ FN_RET(0x00770c4c); r_esp += 4; return;
L_00770c64:; BB(0x00770c64);
    /* 00770c64: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00770c67: ret  */ FN_RET(0x00770c4c); r_esp += 4; return;
L_00770c68:; BB(0x00770c68);
    /* 00770c68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770c6a: ret  */ FN_RET(0x00770c4c); r_esp += 4; return;
}

void f_00770c6c(void) /* sub_770C6C */
{
    FN_ENTER(0x00770c6c);
    /* 00770c6c: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 00770c72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770c74: je 0x770ca2 */ if (fZ) goto L_00770ca2;
L_00770c76:; BB(0x00770c76);
    /* 00770c76: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00770c7a: add dword ptr [edx + 0x1c], eax */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00770c7d: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 00770c83: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00770c86: cmp edx, 0x5f5e0ff */ {  u32 a = r_edx; u32 b = 0x5f5e0ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770c8c: jle 0x770c9a */ if ((fZ||fS!=fO)) goto L_00770c9a;
L_00770c8e:; BB(0x00770c8e);
    /* 00770c8e: mov dword ptr [eax + 0x1c], 0x5f5e0ff */ W32((u32)(r_eax+0x1cu), 0x5f5e0ffu);
    /* 00770c95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770c97: ret 4 */ FN_RET(0x00770c6c); r_esp += 8; return;
L_00770c9a:; BB(0x00770c9a);
    /* 00770c9a: mov eax, 1 */ r_eax = 0x1u;
    /* 00770c9f: ret 4 */ FN_RET(0x00770c6c); r_esp += 8; return;
L_00770ca2:; BB(0x00770ca2);
    /* 00770ca2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770ca4: ret 4 */ FN_RET(0x00770c6c); r_esp += 8; return;
}

void f_00770ca8(void) /* sub_770CA8 */
{
    FN_ENTER(0x00770ca8);
    /* 00770ca8: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 00770cae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770cb0: je 0x770cd1 */ if (fZ) goto L_00770cd1;
L_00770cb2:; BB(0x00770cb2);
    /* 00770cb2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00770cb5: sub eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00770cb9: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00770cbc: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 00770cc2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00770cc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770cc7: jl 0x770cd6 */ if ((fS!=fO)) goto L_00770cd6;
L_00770cc9:; BB(0x00770cc9);
    /* 00770cc9: mov eax, 1 */ r_eax = 0x1u;
    /* 00770cce: ret 4 */ FN_RET(0x00770ca8); r_esp += 8; return;
L_00770cd1:; BB(0x00770cd1);
    /* 00770cd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770cd3: ret 4 */ FN_RET(0x00770ca8); r_esp += 8; return;
L_00770cd6:; BB(0x00770cd6);
    /* 00770cd6: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00770cdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770cdf: ret 4 */ FN_RET(0x00770ca8); r_esp += 8; return;
}

void f_00770cca(void)
{
    FN_ENTER(0x00770cca);
    /* 00770cca: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00770ccc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00770cce: ret 4 */ FN_RET(0x00770cca); r_esp += 8; return;
}

void f_00770ce4(void) /* sub_770CE4 */
{
    FN_ENTER(0x00770ce4);
    /* 00770ce4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00770ce9: movzx edx, word ptr [ecx + 0x11a] */ r_edx = (u32)R16((u32)(r_ecx+0x11au));
    /* 00770cf0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770cf2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00770cf5: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770cfa: jle 0x770d0d */ if ((fZ||fS!=fO)) goto L_00770d0d;
L_00770cfc:; BB(0x00770cfc);
    /* 00770cfc: mov edx, 0x3e7 */ r_edx = 0x3e7u;
    /* 00770d01: mov word ptr [ecx + 0x11a], dx */ W16((u32)(r_ecx+0x11au), (u16)r_edx);
    /* 00770d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770d0a: ret 4 */ FN_RET(0x00770ce4); r_esp += 8; return;
L_00770d0d:; BB(0x00770d0d);
    /* 00770d0d: mov word ptr [ecx + 0x11a], ax */ W16((u32)(r_ecx+0x11au), (u16)r_eax);
    /* 00770d14: mov eax, 1 */ r_eax = 0x1u;
    /* 00770d19: ret 4 */ FN_RET(0x00770ce4); r_esp += 8; return;
}

void f_00770d1c(void) /* sub_770D1C */
{
    FN_ENTER(0x00770d1c);
    /* 00770d1c: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 00770d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770d24: je 0x770d2a */ if (fZ) goto L_00770d2a;
L_00770d26:; BB(0x00770d26);
    /* 00770d26: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00770d29: ret  */ FN_RET(0x00770d1c); r_esp += 4; return;
L_00770d2a:; BB(0x00770d2a);
    /* 00770d2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770d2c: ret  */ FN_RET(0x00770d1c); r_esp += 4; return;
}

void f_00770d30(void) /* sub_770D30 */
{
    FN_ENTER(0x00770d30);
    /* 00770d30: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 00770d36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770d38: je 0x770d66 */ if (fZ) goto L_00770d66;
L_00770d3a:; BB(0x00770d3a);
    /* 00770d3a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00770d3e: add dword ptr [edx + 0x20], eax */ { u32 ad = (u32)(r_edx+0x20u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00770d41: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 00770d47: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00770d4a: cmp edx, 0xf423f */ {  u32 a = r_edx; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770d50: jle 0x770d5e */ if ((fZ||fS!=fO)) goto L_00770d5e;
L_00770d52:; BB(0x00770d52);
    /* 00770d52: mov dword ptr [eax + 0x20], 0xf423f */ W32((u32)(r_eax+0x20u), 0xf423fu);
    /* 00770d59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770d5b: ret 4 */ FN_RET(0x00770d30); r_esp += 8; return;
L_00770d5e:; BB(0x00770d5e);
    /* 00770d5e: mov eax, 1 */ r_eax = 0x1u;
    /* 00770d63: ret 4 */ FN_RET(0x00770d30); r_esp += 8; return;
L_00770d66:; BB(0x00770d66);
    /* 00770d66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770d68: ret 4 */ FN_RET(0x00770d30); r_esp += 8; return;
}

void f_00770d6c(void) /* sub_770D6C */
{
    FN_ENTER(0x00770d6c);
    /* 00770d6c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00770d70: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770d73: jge 0x770d82 */ if ((fS==fO)) goto L_00770d82;
L_00770d75:; BB(0x00770d75);
    /* 00770d75: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00770d78: lea eax, [ecx + edx + 0x110] */ r_eax = (u32)(r_ecx+r_edx+0x110u);
    /* 00770d7f: ret 4 */ FN_RET(0x00770d6c); r_esp += 8; return;
L_00770d82:; BB(0x00770d82);
    /* 00770d82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00770d84: ret 4 */ FN_RET(0x00770d6c); r_esp += 8; return;
}

void f_00770d88(void) /* sub_770D88 */
{
    FN_ENTER(0x00770d88);
    /* 00770d88: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00770d8c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00770d8f: jge 0x770da0 */ if ((fS==fO)) goto L_00770da0;
L_00770d91:; BB(0x00770d91);
    /* 00770d91: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00770d95: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 00770d98: mov word ptr [ecx + eax*2 + 0x110], dx */ W16((u32)(r_ecx+r_eax*2+0x110u), (u16)r_edx);
L_00770da0:; BB(0x00770da0);
    /* 00770da0: ret 8 */ FN_RET(0x00770d88); r_esp += 12; return;
}

void f_00770da4(void) /* sub_770DA4 */
{
    FN_ENTER(0x00770da4);
    /* 00770da4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00770da5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00770da6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00770da7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00770da8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00770dab: mov edi, ecx */ r_edi = r_ecx;
    /* 00770dad: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00770db1: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00770db5: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00770db9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770dbb: je 0x770e97 */ if (fZ) goto L_00770e97;
L_00770dc1:; BB(0x00770dc1);
    /* 00770dc1: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00770dc5: movsx edx, word ptr [edi + 0x2c0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2c0u));
    /* 00770dcc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00770dcf: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00770dd2: mov dword ptr [edi + 0x2b4], esi */ W32((u32)(r_edi+0x2b4u), r_esi);
    /* 00770dd8: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00770ddc: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00770ddf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00770de3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770de7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00770de9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00770deb: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00770def: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00770df4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00770df9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00770dfd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00770e01: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00770e05: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00770e09: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 00770e0e: mov word ptr [edi + 0x2bc], ax */ W16((u32)(r_edi+0x2bcu), (u16)r_eax);
    /* 00770e15: mov word ptr [edi + 0x334], ax */ W16((u32)(r_edi+0x334u), (u16)r_eax);
    /* 00770e1c: mov eax, dword ptr [edi + 0x2e8] */ r_eax = R32((u32)(r_edi+0x2e8u));
    /* 00770e22: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00770e24: je 0x770e3b */ if (fZ) goto L_00770e3b;
L_00770e26:; BB(0x00770e26);
    /* 00770e26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00770e28: mov word ptr [edi + 0x2be], ax */ W16((u32)(r_edi+0x2beu), (u16)r_eax);
    /* 00770e2f: mov word ptr [edi + 0x336], ax */ W16((u32)(r_edi+0x336u), (u16)r_eax);
    /* 00770e36: jmp 0x770f5f */ goto L_00770f5f;
L_00770e3b:; BB(0x00770e3b);
    /* 00770e3b: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00770e3f: movsx edx, word ptr [esi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00770e43: add edx, dword ptr [esi + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770e46: movsx eax, word ptr [edi + 0x2c2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c2u));
    /* 00770e4d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00770e51: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770e55: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00770e57: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00770e5b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770e5f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00770e61: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00770e65: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00770e6a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00770e6f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00770e73: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00770e77: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00770e7b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00770e7f: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 00770e84: mov word ptr [edi + 0x2be], ax */ W16((u32)(r_edi+0x2beu), (u16)r_eax);
    /* 00770e8b: mov word ptr [edi + 0x336], ax */ W16((u32)(r_edi+0x336u), (u16)r_eax);
    /* 00770e92: jmp 0x770f5f */ goto L_00770f5f;
L_00770e97:; BB(0x00770e97);
    /* 00770e97: mov esi, dword ptr [edi + 0x2b4] */ r_esi = R32((u32)(r_edi+0x2b4u));
    /* 00770e9d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770e9f: je 0x77113a */ if (fZ) goto L_0077113a;
L_00770ea5:; BB(0x00770ea5);
    /* 00770ea5: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00770ea9: movsx edx, word ptr [edi + 0x2c0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2c0u));
    /* 00770eb0: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00770eb4: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00770eb7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00770ebb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770ebf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00770ec3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770ec7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00770ec9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00770ecb: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00770ecf: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00770ed4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00770ed9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00770edd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00770ee1: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00770ee5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00770ee9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00770eed: mov word ptr [edi + 0x2bc], ax */ W16((u32)(r_edi+0x2bcu), (u16)r_eax);
    /* 00770ef4: mov eax, dword ptr [edi + 0x2e8] */ r_eax = R32((u32)(r_edi+0x2e8u));
    /* 00770efa: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00770efc: je 0x770f10 */ if (fZ) goto L_00770f10;
L_00770efe:; BB(0x00770efe);
    /* 00770efe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00770f00: mov word ptr [edi + 0x2be], ax */ W16((u32)(r_edi+0x2beu), (u16)r_eax);
    /* 00770f07: mov word ptr [edi + 0x336], ax */ W16((u32)(r_edi+0x336u), (u16)r_eax);
    /* 00770f0e: jmp 0x770f5f */ goto L_00770f5f;
L_00770f10:; BB(0x00770f10);
    /* 00770f10: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00770f14: movsx edx, word ptr [esi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00770f18: add edx, dword ptr [esi + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770f1b: movsx eax, word ptr [edi + 0x2c2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c2u));
    /* 00770f22: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00770f26: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770f2a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00770f2c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00770f30: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00770f34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00770f36: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00770f3a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00770f3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00770f44: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00770f48: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00770f4c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00770f50: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00770f54: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00770f58: mov word ptr [edi + 0x2be], ax */ W16((u32)(r_edi+0x2beu), (u16)r_eax);
L_00770f5f:; BB(0x00770f5f);
    /* 00770f5f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770f61: je 0x771146 */ if (fZ) goto L_00771146;
L_00770f67:; BB(0x00770f67);
    /* 00770f67: mov dword ptr [edi + 0x31c], ebx */ W32((u32)(r_edi+0x31cu), r_ebx);
L_00770f6d:; BB(0x00770f6d);
    /* 00770f6d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00770f6f: je 0x77112c */ if (fZ) goto L_0077112c;
L_00770f75:; BB(0x00770f75);
    /* 00770f75: mov dword ptr [edi + 0x320], ebp */ W32((u32)(r_edi+0x320u), r_ebp);
L_00770f7b:; BB(0x00770f7b);
    /* 00770f7b: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00770f7e: fld dword ptr [edi + 0x278] */ FPUSH(R_F32((u32)(r_edi+0x278u)));
    /* 00770f84: mov word ptr [edi + 0x2cc], cx */ W16((u32)(r_edi+0x2ccu), (u16)r_ecx);
    /* 00770f8b: mov word ptr [edi + 0x2c4], cx */ W16((u32)(r_edi+0x2c4u), (u16)r_ecx);
    /* 00770f92: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 00770f96: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00770f99: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00770f9b: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00770f9e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00770fa2: mov word ptr [edi + 0x2ce], ax */ W16((u32)(r_edi+0x2ceu), (u16)r_eax);
    /* 00770fa9: mov word ptr [edi + 0x2c6], ax */ W16((u32)(r_edi+0x2c6u), (u16)r_eax);
    /* 00770fb0: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00770fb4: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00770fb8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00770fba: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00770fbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00770fbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00770fc1: jg 0x770fc5 */ if ((!fZ&&fS==fO)) goto L_00770fc5;
L_00770fc3:; BB(0x00770fc3);
    /* 00770fc3: mov edx, eax */ r_edx = r_eax;
L_00770fc5:; BB(0x00770fc5);
    /* 00770fc5: mov word ptr [edi + 0x2d0], dx */ W16((u32)(r_edi+0x2d0u), (u16)r_edx);
    /* 00770fcc: mov word ptr [edi + 0x2c8], dx */ W16((u32)(r_edi+0x2c8u), (u16)r_edx);
    /* 00770fd3: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00770fd7: add eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00770fda: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00770fdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00770fdf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00770fe1: jg 0x770fe5 */ if ((!fZ&&fS==fO)) goto L_00770fe5;
L_00770fe3:; BB(0x00770fe3);
    /* 00770fe3: mov edx, eax */ r_edx = r_eax;
L_00770fe5:; BB(0x00770fe5);
    /* 00770fe5: mov word ptr [edi + 0x2d2], dx */ W16((u32)(r_edi+0x2d2u), (u16)r_edx);
    /* 00770fec: mov word ptr [edi + 0x2ca], dx */ W16((u32)(r_edi+0x2cau), (u16)r_edx);
    /* 00770ff3: movsx eax, word ptr [ebx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00770ff7: movsx ebx, word ptr [esi + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 00770ffb: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00770ffd: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00771001: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771005: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00771009: fmul dword ptr [0x978358] */ ST(0) = ST(0) * R_F32((u32)(0x978358u));
    /* 0077100f: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00771013: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00771018: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077101d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00771021: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00771025: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00771029: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0077102d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00771031: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00771035: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00771039: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0077103b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0077103f: mov word ptr [edi + 0x2d4], ax */ W16((u32)(r_edi+0x2d4u), (u16)r_eax);
    /* 00771046: movzx esi, word ptr [esi + 0xc] */ r_esi = (u32)R16((u32)(r_esi+0xcu));
    /* 0077104a: mov word ptr [edi + 0x2d6], si */ W16((u32)(r_edi+0x2d6u), (u16)r_esi);
    /* 00771051: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00771055: mov word ptr [edi + 0x2f6], ax */ W16((u32)(r_edi+0x2f6u), (u16)r_eax);
    /* 0077105c: movzx eax, word ptr [ebp + 6] */ r_eax = (u32)R16((u32)(r_ebp+0x6u));
    /* 00771060: mov word ptr [edi + 0x2f8], ax */ W16((u32)(r_edi+0x2f8u), (u16)r_eax);
    /* 00771067: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0077106b: mov word ptr [edi + 0x2fa], ax */ W16((u32)(r_edi+0x2fau), (u16)r_eax);
    /* 00771072: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00771076: mov word ptr [edi + 0x2fe], ax */ W16((u32)(r_edi+0x2feu), (u16)r_eax);
    /* 0077107d: movzx ebp, word ptr [ebp + 0xa] */ r_ebp = (u32)R16((u32)(r_ebp+0xau));
    /* 00771081: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00771085: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0077108a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077108f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00771093: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00771097: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077109b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0077109f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007710a3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007710a7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007710a9: mov word ptr [edi + 0x2fc], bp */ W16((u32)(r_edi+0x2fcu), (u16)r_ebp);
    /* 007710b0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007710b4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007710b6: mov word ptr [edi + 0x2cc], ax */ W16((u32)(r_edi+0x2ccu), (u16)r_eax);
    /* 007710bd: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007710c1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007710c6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007710cb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007710cf: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007710d3: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007710d7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007710db: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007710df: fmul dword ptr [edi + 0x284] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x284u));
    /* 007710e5: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007710e9: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007710eb: mov word ptr [edi + 0x2ce], ax */ W16((u32)(r_edi+0x2ceu), (u16)r_eax);
    /* 007710f2: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007710f6: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007710fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771100: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00771104: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00771108: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077110c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00771110: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00771114: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00771116: mov word ptr [edi + 0x2d2], ax */ W16((u32)(r_edi+0x2d2u), (u16)r_eax);
    /* 0077111d: mov eax, 1 */ r_eax = 0x1u;
    /* 00771122: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771125: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771127: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771129: ret 0x14 */ FN_RET(0x00770da4); r_esp += 24; return;
L_0077112c:; BB(0x0077112c);
    /* 0077112c: mov ebp, dword ptr [edi + 0x320] */ r_ebp = R32((u32)(r_edi+0x320u));
    /* 00771132: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771134: jne 0x770f7b */ if (!fZ) goto L_00770f7b;
L_0077113a:; BB(0x0077113a);
    /* 0077113a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077113c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077113f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771141: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771142: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771143: ret 0x14 */ FN_RET(0x00770da4); r_esp += 24; return;
L_00771146:; BB(0x00771146);
    /* 00771146: mov ebx, dword ptr [edi + 0x31c] */ r_ebx = R32((u32)(r_edi+0x31cu));
    /* 0077114c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077114e: jne 0x770f6d */ if (!fZ) goto L_00770f6d;
L_00771154:; BB(0x00771154);
    /* 00771154: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00771156: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771159: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077115a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077115b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077115c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077115d: ret 0x14 */ FN_RET(0x00770da4); r_esp += 24; return;
}

