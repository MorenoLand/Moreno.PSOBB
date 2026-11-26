#include "protos.h"

void f_0074704f(void)
{
    FN_ENTER(0x0074704f);
    goto L_0074704f;
L_00745df8:; BB(0x00745df8);
    /* 00745df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dfb: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745dfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745e00: je 0x74703c */ if (fZ) goto L_0074703c;
L_00745e06:; BB(0x00745e06);
    /* 00745e06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e09: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 00745e0d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745e14: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e16: je 0x745e2d */ if (fZ) goto L_00745e2d;
L_00745e18:; BB(0x00745e18);
    /* 00745e18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e1b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 00745e1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745e22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745e29: mov esp, ebp */ r_esp = r_ebp;
    /* 00745e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745e2c: ret  */ FN_RET(0x0074704f); r_esp += 4; return;
L_00745e2d:; BB(0x00745e2d);
    /* 00745e2d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e2f: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745e35:; BB(0x00745e35);
    /* 00745e35: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745e3au); f_007365f4();
    /* 00745e3a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e3d: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00745e40: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074704f); r_esp += 4; return;
L_0074703c:; BB(0x0074703c);
    /* 0074703c: mov ecx, eax */ r_ecx = r_eax;
    /* 0074703e: call 0x7478e0 */ r_esp -= 4; W32(r_esp, 0x747043u); f_007478e0();
    /* 00747043: mov ecx, eax */ r_ecx = r_eax;
    /* 00747045: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747048: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 0074704b: jmp 0x745e06 */ goto L_00745e06;
L_0074704f:; BB(0x0074704f);
    /* 0074704f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00747051: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00747052: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 00747054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00747056: add byte ptr [edx + 0x64], ch */ { u32 ad = (u32)(r_edx+0x64u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00747059: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74705eu); f_005caba4();
    /* 0074705e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00747061: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747064: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00747067: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747069: je 0x7470b1 */ if (fZ) goto L_007470b1;
L_0074706b:; BB(0x0074706b);
    /* 0074706b: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00747072: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00747079: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 0074707e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747083u); f_0073ec50();
    /* 00747083: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747084: push 0xacb240 */ { u32 v = 0xacb240u; r_esp -= 4; W32(r_esp, v); }
    /* 00747089: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0074708c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074708d: call 0x762dcc */ r_esp -= 4; W32(r_esp, 0x747092u); f_00762dcc();
    /* 00747092: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00747099:; BB(0x00747099);
    /* 00747099: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0074709c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074709f: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007470a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007470ac: jmp 0x745df8 */ goto L_00745df8;
L_007470b1:; BB(0x007470b1);
    /* 007470b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007470b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007470b6: jmp 0x747099 */ goto L_00747099;
}

void f_00747063(void)
{
    FN_ENTER(0x00747063);
    goto L_00747063;
L_00745df8:; BB(0x00745df8);
    /* 00745df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dfb: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745dfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745e00: je 0x74703c */ if (fZ) goto L_0074703c;
L_00745e06:; BB(0x00745e06);
    /* 00745e06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e09: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 00745e0d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745e14: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e16: je 0x745e2d */ if (fZ) goto L_00745e2d;
L_00745e18:; BB(0x00745e18);
    /* 00745e18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e1b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 00745e1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745e22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745e29: mov esp, ebp */ r_esp = r_ebp;
    /* 00745e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745e2c: ret  */ FN_RET(0x00747063); r_esp += 4; return;
L_00745e2d:; BB(0x00745e2d);
    /* 00745e2d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e2f: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745e35:; BB(0x00745e35);
    /* 00745e35: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745e3au); f_007365f4();
    /* 00745e3a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e3d: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00745e40: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00747063); r_esp += 4; return;
L_0074703c:; BB(0x0074703c);
    /* 0074703c: mov ecx, eax */ r_ecx = r_eax;
    /* 0074703e: call 0x7478e0 */ r_esp -= 4; W32(r_esp, 0x747043u); f_007478e0();
    /* 00747043: mov ecx, eax */ r_ecx = r_eax;
    /* 00747045: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747048: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 0074704b: jmp 0x745e06 */ goto L_00745e06;
L_00747063:; BB(0x00747063);
    /* 00747063: add al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00747065: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00747066: mov ah, 0x85 */ r_eax = (r_eax & 0xffff00ffu) | (((0x85u) & 0xffu) << 8);
    /* 00747068: sal byte ptr [esi + eax*2 - 0x39], 0x45 */ { u32 ad = (u32)(r_esi+r_eax*2+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0074706d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0074706f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00747071: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00747073: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00747074: cld  */ rt_df = 0;
    /* 00747075: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00747077: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00747079: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 0074707e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747083u); f_0073ec50();
    /* 00747083: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747084: push 0xacb240 */ { u32 v = 0xacb240u; r_esp -= 4; W32(r_esp, v); }
    /* 00747089: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0074708c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074708d: call 0x762dcc */ r_esp -= 4; W32(r_esp, 0x747092u); f_00762dcc();
    /* 00747092: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00747099: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0074709c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074709f: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007470a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007470ac: jmp 0x745df8 */ goto L_00745df8;
}

void f_00747364(void)
{
    FN_ENTER(0x00747364);
    goto L_00747364;
L_00746928:; BB(0x00746928);
    /* 00746928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074692a: je 0x747335 */ if (fZ) goto L_00747335;
L_00746930:; BB(0x00746930);
    /* 00746930: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00746937: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074693c: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00746943: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00746946: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746948: je 0x746951 */ if (fZ) goto L_00746951;
L_0074694a:; BB(0x0074694a);
    /* 0074694a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074694c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x746951u); f_00760acc();
L_00746951:; BB(0x00746951);
    /* 00746951: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746954: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00746958: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074695b: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0074695e: movsx edx, word ptr [eax + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 00746965: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746966: call 0x74744c */ r_esp -= 4; W32(r_esp, 0x74696bu); f_0074744c();
    /* 0074696b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074696e: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00746971: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00746978: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074697a: je 0x74699c */ if (fZ) goto L_0074699c;
L_0074697c:; BB(0x0074697c);
    /* 0074697c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074697f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00746982: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00746984: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x746987u); call_ind(t); }
    /* 00746987: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074698a: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 0074698e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00746991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00746998: mov esp, ebp */ r_esp = r_ebp;
    /* 0074699a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074699b: ret  */ FN_RET(0x00747364); r_esp += 4; return;
L_0074699c:; BB(0x0074699c);
    /* 0074699c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074699e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007469a0:; BB(0x007469a0);
    /* 007469a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469a3: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007469a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007469a8: je 0x7469bc */ if (fZ) goto L_007469bc;
L_007469aa:; BB(0x007469aa);
    /* 007469aa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7469afu); f_007127b0();
    /* 007469af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469b2: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007469b5: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007469bc:; BB(0x007469bc);
    /* 007469bc: mov ecx, edx */ r_ecx = r_edx;
    /* 007469be: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7469c3u); f_007365f4();
    /* 007469c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469c6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00747364); r_esp += 4; return;
L_00747335:; BB(0x00747335);
    /* 00747335: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747338: call 0x747430 */ r_esp -= 4; W32(r_esp, 0x74733du); f_00747430();
    /* 0074733d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747340: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 00747343: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 0074734a: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 0074734d: jmp 0x746930 */ goto L_00746930;
L_00747364:; BB(0x00747364);
    /* 00747364: jmp 0x746928 */ goto L_00746928;
}

void f_0074736c(void) /* sub_74736C */
{
    FN_ENTER(0x0074736c);
    /* 0074736c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074736d: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00747372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747377u); f_0073ec50();
    /* 00747377: mov ebp, eax */ r_ebp = r_eax;
    /* 00747379: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0074737b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747380u); f_0079317c();
    /* 00747380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747381: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00747383: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747384: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747389u); f_00735460();
    /* 00747389: mov ebp, eax */ r_ebp = r_eax;
    /* 0074738b: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0074738d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747392u); f_0079317c();
    /* 00747392: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747395: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00747397: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747399: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074739b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074739c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7473a1u); f_00735c90();
    /* 007473a1: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 007473a3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7473a8u); f_0079317c();
    /* 007473a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007473a9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007473ab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007473ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007473af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007473b0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7473b5u); f_00735c90();
    /* 007473b5: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 007473b7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7473bcu); f_0079317c();
    /* 007473bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007473bd: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 007473bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007473c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007473c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007473c4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7473c9u); f_00735c90();
    /* 007473c9: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7473ceu); f_007a61a4();
    /* 007473ce: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007473d1: je 0x747415 */ if (fZ) goto L_00747415;
L_007473d3:; BB(0x007473d3);
    /* 007473d3: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 007473d8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7473ddu); f_0079317c();
    /* 007473dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007473de: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 007473e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007473e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007473e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007473e5: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7473eau); f_00735ee0();
L_007473ea:; BB(0x007473ea);
    /* 007473ea: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 007473ef: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 007473f6: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007473fc: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 00747403: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747405: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x74740au); f_00736138();
    /* 0074740a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074740c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x747411u); f_00736458();
    /* 00747411: mov eax, ebp */ r_eax = r_ebp;
    /* 00747413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747414: ret  */ FN_RET(0x0074736c); r_esp += 4; return;
L_00747415:; BB(0x00747415);
    /* 00747415: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 0074741a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74741fu); f_0079317c();
    /* 0074741f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747420: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00747422: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747424: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747427: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74742cu); f_00735c90();
    /* 0074742c: jmp 0x7473ea */ goto L_007473ea;
}

void f_00747372(void)
{
    FN_ENTER(0x00747372);
    /* 00747372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747377u); f_0073ec50();
    /* 00747377: mov ebp, eax */ r_ebp = r_eax;
    /* 00747379: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0074737b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747380u); f_0079317c();
    /* 00747380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747381: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00747383: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747384: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747389u); f_00735460();
    /* 00747389: mov ebp, eax */ r_ebp = r_eax;
    /* 0074738b: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0074738d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747392u); f_0079317c();
    /* 00747392: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747395: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00747397: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747399: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074739b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074739c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7473a1u); f_00735c90();
    /* 007473a1: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 007473a3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7473a8u); f_0079317c();
    /* 007473a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007473a9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007473ab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007473ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007473af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007473b0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7473b5u); f_00735c90();
    /* 007473b5: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 007473b7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7473bcu); f_0079317c();
    /* 007473bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007473bd: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 007473bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007473c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007473c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007473c4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7473c9u); f_00735c90();
    /* 007473c9: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7473ceu); f_007a61a4();
    /* 007473ce: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007473d1: je 0x747415 */ if (fZ) goto L_00747415;
L_007473d3:; BB(0x007473d3);
    /* 007473d3: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 007473d8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7473ddu); f_0079317c();
    /* 007473dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007473de: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 007473e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007473e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007473e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007473e5: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7473eau); f_00735ee0();
L_007473ea:; BB(0x007473ea);
    /* 007473ea: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 007473ef: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 007473f6: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007473fc: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 00747403: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747405: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x74740au); f_00736138();
    /* 0074740a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074740c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x747411u); f_00736458();
    /* 00747411: mov eax, ebp */ r_eax = r_ebp;
    /* 00747413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747414: ret  */ FN_RET(0x00747372); r_esp += 4; return;
L_00747415:; BB(0x00747415);
    /* 00747415: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 0074741a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74741fu); f_0079317c();
    /* 0074741f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747420: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00747422: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747424: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747427: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74742cu); f_00735c90();
    /* 0074742c: jmp 0x7473ea */ goto L_007473ea;
}

void f_00747430(void) /* sub_747430 */
{
    FN_ENTER(0x00747430);
    /* 00747430: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00747435: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74743au); f_0073ec50();
    /* 0074743a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074743c: push 0x97340c */ { u32 v = 0x97340cu; r_esp -= 4; W32(r_esp, v); }
    /* 00747441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747442: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x747447u); f_0073a8dc();
    /* 00747447: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074744a: ret  */ FN_RET(0x00747430); r_esp += 4; return;
}

void f_0074744c(void) /* sub_74744C */
{
    FN_ENTER(0x0074744c);
    /* 0074744c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074744d: mov edi, ecx */ r_edi = r_ecx;
    /* 0074744f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00747453: cmp eax, dword ptr [edi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00747456: jne 0x74745c */ if (!fZ) goto L_0074745c;
L_00747458:; BB(0x00747458);
    /* 00747458: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747459: ret 4 */ FN_RET(0x0074744c); r_esp += 8; return;
L_0074745c:; BB(0x0074745c);
    /* 0074745c: push dword ptr [eax*4 + 0x973414] */ { u32 v = R32((u32)(r_eax*4+0x973414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747463: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00747466: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74746bu); f_0079317c();
    /* 0074746b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074746c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00747471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747472: mov ecx, dword ptr [edi + 0x74] */ r_ecx = R32((u32)(r_edi+0x74u));
    /* 00747475: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74747au); f_0073ae38();
    /* 0074747a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074747b: ret 4 */ FN_RET(0x0074744c); r_esp += 8; return;
}

void f_00747480(void) /* sub_747480 */
{
    FN_ENTER(0x00747480);
    /* 00747480: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747481: push 0x85 */ { u32 v = 0x85u; r_esp -= 4; W32(r_esp, v); }
    /* 00747486: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74748bu); f_0073ec50();
    /* 0074748b: mov edi, eax */ r_edi = r_eax;
    /* 0074748d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0074748f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747494u); f_0079317c();
    /* 00747494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747495: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00747497: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747498: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x74749du); f_00735460();
    /* 0074749d: mov edi, eax */ r_edi = r_eax;
    /* 0074749f: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 007474a1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7474a6u); f_0079317c();
    /* 007474a6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007474a9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007474ab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007474ad: mov ecx, edi */ r_ecx = r_edi;
    /* 007474af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007474b0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7474b5u); f_00735c90();
    /* 007474b5: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 007474b7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7474bcu); f_0079317c();
    /* 007474bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007474bd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007474bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007474c1: mov ecx, edi */ r_ecx = r_edi;
    /* 007474c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007474c4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7474c9u); f_00735c90();
    /* 007474c9: push 0x43550000 */ { u32 v = 0x43550000u; r_esp -= 4; W32(r_esp, v); }
    /* 007474ce: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 007474d5: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007474db: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 007474e2: mov ecx, edi */ r_ecx = r_edi;
    /* 007474e4: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7474e9u); f_00736138();
    /* 007474e9: mov ecx, edi */ r_ecx = r_edi;
    /* 007474eb: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7474f0u); f_00736458();
    /* 007474f0: mov eax, edi */ r_eax = r_edi;
    /* 007474f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007474f3: ret  */ FN_RET(0x00747480); r_esp += 4; return;
}

void f_007474f4(void) /* sub_7474F4 */
{
    FN_ENTER(0x007474f4);
    /* 007474f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007474f5: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 007474fa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7474ffu); f_0073ec50();
    /* 007474ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747502: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x747507u); f_00735708();
    /* 00747507: mov ebx, eax */ r_ebx = r_eax;
    /* 00747509: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0074750b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747510u); f_0079317c();
    /* 00747510: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747513: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747515: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00747517: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074751a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74751fu); f_00735c90();
    /* 0074751f: push 0x42800000 */ { u32 v = 0x42800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747524: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747526: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0074752d: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00747533: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 0074753a: push 0x43550000 */ { u32 v = 0x43550000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074753f: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x747544u); f_007361d0();
    /* 00747544: mov eax, ebx */ r_eax = r_ebx;
    /* 00747546: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747547: ret  */ FN_RET(0x007474f4); r_esp += 4; return;
}

void f_00747548(void) /* sub_747548 */
{
    FN_ENTER(0x00747548);
    /* 00747548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747549: mov ebp, esp */ r_ebp = r_esp;
    /* 0074754b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074754d: push 0x8f24e8 */ { u32 v = 0x8f24e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00747552: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00747558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747559: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00747560: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00747563: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00747566: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00747569: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0074756c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0074756f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00747572: mov eax, dword ptr [0xa9c0ec] */ r_eax = R32((u32)(0xa9c0ecu));
    /* 00747577: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0074757e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00747581: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00747583: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x747588u); f_005caba4();
    /* 00747588: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0074758b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074758e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00747591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747593: je 0x747624 */ if (fZ) goto L_00747624;
L_00747599:; BB(0x00747599);
    /* 00747599: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007475a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007475a7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007475ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007475b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007475b3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007475b5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007475b7: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 007475bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007475bd: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x7475c2u); f_0078eba4();
    /* 007475c2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007475c9:; BB(0x007475c9);
    /* 007475c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007475d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007475d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007475d6: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007475d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007475da: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x7475dfu); f_0078ed74();
    /* 007475df: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 007475e4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7475e9u); f_0073ec50();
    /* 007475e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007475ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007475ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007475ee: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x7475f3u); f_0078ed84();
    /* 007475f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007475f6: call 0x78ee8c */ r_esp -= 4; W32(r_esp, 0x7475fbu); f_0078ee8c();
    /* 007475fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007475fe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x747603u); f_0061cdb0();
    /* 00747603: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00747606: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x74760bu); f_0078ee34();
    /* 0074760b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074760e: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x747613u); f_0078ee74();
    /* 00747613: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00747616: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00747619: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00747620: mov esp, ebp */ r_esp = r_ebp;
    /* 00747622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747623: ret  */ FN_RET(0x00747548); r_esp += 4; return;
L_00747624:; BB(0x00747624);
    /* 00747624: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00747626: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00747629: jmp 0x7475c9 */ goto L_007475c9;
}

void f_0074762c(void) /* sub_74762C */
{
    FN_ENTER(0x0074762c);
    /* 0074762c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074762d: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 00747632: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747637u); f_0073ec50();
    /* 00747637: mov edi, eax */ r_edi = r_eax;
    /* 00747639: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0074763b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747640u); f_0079317c();
    /* 00747640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747641: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00747643: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747644: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747649u); f_00735460();
    /* 00747649: mov edi, eax */ r_edi = r_eax;
    /* 0074764b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074764e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x747653u); f_007a61a4();
    /* 00747653: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747656: je 0x7476f1 */ if (fZ) goto L_007476f1;
L_0074765c:; BB(0x0074765c);
    /* 0074765c: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074765e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747663u); f_0079317c();
    /* 00747663: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747664: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00747666: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747668: mov ecx, edi */ r_ecx = r_edi;
    /* 0074766a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074766b: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x747670u); f_00735ee0();
L_00747670:; BB(0x00747670);
    /* 00747670: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00747675: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74767au); f_0079317c();
    /* 0074767a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074767b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0074767d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074767f: mov ecx, edi */ r_ecx = r_edi;
    /* 00747681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747682: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747687u); f_00735c90();
    /* 00747687: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0074768c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747691u); f_0079317c();
    /* 00747691: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747692: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00747694: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747696: mov ecx, edi */ r_ecx = r_edi;
    /* 00747698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747699: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74769eu); f_00735c90();
    /* 0074769e: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 007476a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7476a5u); f_0079317c();
    /* 007476a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007476a6: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007476a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007476aa: mov ecx, edi */ r_ecx = r_edi;
    /* 007476ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007476ad: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7476b2u); f_00735c90();
    /* 007476b2: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 007476b4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7476b9u); f_0079317c();
    /* 007476b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007476ba: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 007476bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007476be: mov ecx, edi */ r_ecx = r_edi;
    /* 007476c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007476c1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7476c6u); f_00735c90();
    /* 007476c6: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007476cb: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 007476d2: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007476d8: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 007476df: mov ecx, edi */ r_ecx = r_edi;
    /* 007476e1: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7476e6u); f_00736138();
    /* 007476e6: mov ecx, edi */ r_ecx = r_edi;
    /* 007476e8: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7476edu); f_00736458();
    /* 007476ed: mov eax, edi */ r_eax = r_edi;
    /* 007476ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007476f0: ret  */ FN_RET(0x0074762c); r_esp += 4; return;
L_007476f1:; BB(0x007476f1);
    /* 007476f1: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 007476f3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7476f8u); f_0079317c();
    /* 007476f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007476f9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007476fb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007476fd: mov ecx, edi */ r_ecx = r_edi;
    /* 007476ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747700: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747705u); f_00735c90();
    /* 00747705: jmp 0x747670 */ goto L_00747670;
}

void f_0074767b(void)
{
    FN_ENTER(0x0074767b);
    /* 0074767b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0074767d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074767f: mov ecx, edi */ r_ecx = r_edi;
    /* 00747681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747682: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747687u); f_00735c90();
    /* 00747687: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0074768c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747691u); f_0079317c();
    /* 00747691: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747692: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00747694: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747696: mov ecx, edi */ r_ecx = r_edi;
    /* 00747698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747699: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74769eu); f_00735c90();
    /* 0074769e: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 007476a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7476a5u); f_0079317c();
    /* 007476a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007476a6: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007476a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007476aa: mov ecx, edi */ r_ecx = r_edi;
    /* 007476ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007476ad: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7476b2u); f_00735c90();
    /* 007476b2: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 007476b4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7476b9u); f_0079317c();
    /* 007476b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007476ba: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 007476bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007476be: mov ecx, edi */ r_ecx = r_edi;
    /* 007476c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007476c1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7476c6u); f_00735c90();
    /* 007476c6: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007476cb: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 007476d2: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007476d8: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 007476df: mov ecx, edi */ r_ecx = r_edi;
    /* 007476e1: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7476e6u); f_00736138();
    /* 007476e6: mov ecx, edi */ r_ecx = r_edi;
    /* 007476e8: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7476edu); f_00736458();
    /* 007476ed: mov eax, edi */ r_eax = r_edi;
    /* 007476ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007476f0: ret  */ FN_RET(0x0074767b); r_esp += 4; return;
}

void f_0074770c(void) /* sub_74770C */
{
    FN_ENTER(0x0074770c);
    /* 0074770c: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00747712: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x747717u); f_007365f4();
    /* 00747717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747718: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x74771du); f_00781dd4();
    /* 0074771d: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0074771f: call 0x827f28 */ r_esp -= 4; W32(r_esp, 0x747724u); f_00827f28();
    /* 00747724: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747727: ret  */ FN_RET(0x0074770c); r_esp += 4; return;
}

void f_00747728(void) /* sub_747728 */
{
    FN_ENTER(0x00747728);
    /* 00747728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747729: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0074772e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747733u); f_0073ec50();
    /* 00747733: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747735: push 0x973424 */ { u32 v = 0x973424u; r_esp -= 4; W32(r_esp, v); }
    /* 0074773a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074773b: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x747740u); f_0073a8dc();
    /* 00747740: mov edi, eax */ r_edi = r_eax;
    /* 00747742: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747745: push 0x4743aa00 */ { u32 v = 0x4743aa00u; r_esp -= 4; W32(r_esp, v); }
    /* 0074774a: mov ecx, edi */ r_ecx = r_edi;
    /* 0074774c: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x747751u); f_00712624();
    /* 00747751: mov eax, edi */ r_eax = r_edi;
    /* 00747753: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747754: ret  */ FN_RET(0x00747728); r_esp += 4; return;
}

void f_00747758(void) /* sub_747758 */
{
    FN_ENTER(0x00747758);
    /* 00747758: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747759: mov edi, ecx */ r_edi = r_ecx;
    /* 0074775b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074775f: cmp eax, dword ptr [edi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00747762: jne 0x747768 */ if (!fZ) goto L_00747768;
L_00747764:; BB(0x00747764);
    /* 00747764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747765: ret 4 */ FN_RET(0x00747758); r_esp += 8; return;
L_00747768:; BB(0x00747768);
    /* 00747768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747769: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0074776c: call 0x781e4c */ r_esp -= 4; W32(r_esp, 0x747771u); f_00781e4c();
    /* 00747771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747772: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00747777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747778: mov ecx, dword ptr [edi + 0x74] */ r_ecx = R32((u32)(r_edi+0x74u));
    /* 0074777b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x747780u); f_0073ae38();
    /* 00747780: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747781: ret 4 */ FN_RET(0x00747758); r_esp += 8; return;
}

void f_00747784(void) /* sub_747784 */
{
    FN_ENTER(0x00747784);
    /* 00747784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747785: mov ebp, esp */ r_ebp = r_esp;
    /* 00747787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00747789: push 0x8f2510 */ { u32 v = 0x8f2510u; r_esp -= 4; W32(r_esp, v); }
    /* 0074778e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00747794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074779c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074779f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007477a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007477a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007477a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007477ab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007477ae: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007477b5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007477b7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7477bcu); f_005caba4();
    /* 007477bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007477bd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007477c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007477c2: je 0x747850 */ if (fZ) goto L_00747850;
L_007477c8:; BB(0x007477c8);
    /* 007477c8: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007477cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007477d6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007477dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007477df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007477e2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007477e4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007477e6: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 007477eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007477ec: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x7477f1u); f_0078eba4();
    /* 007477f1: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007477f4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007477fb:; BB(0x007477fb);
    /* 007477fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00747802: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747805: call 0x781e4c */ r_esp -= 4; W32(r_esp, 0x74780au); f_00781e4c();
    /* 0074780a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074780b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074780c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074780e: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x747813u); f_0078ed74();
    /* 00747813: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 00747818: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74781du); f_0073ec50();
    /* 0074781d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074781e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074781f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747821: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x747826u); f_0078ed84();
    /* 00747826: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747828: call 0x78ee8c */ r_esp -= 4; W32(r_esp, 0x74782du); f_0078ee8c();
    /* 0074782d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074782f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x747834u); f_0061cdb0();
    /* 00747834: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747836: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x74783bu); f_0078ee74();
    /* 0074783b: mov eax, ebx */ r_eax = r_ebx;
    /* 0074783d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747840: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00747843: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074784a: mov esp, ebp */ r_esp = r_ebp;
    /* 0074784c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074784d: ret 4 */ FN_RET(0x00747784); r_esp += 8; return;
L_00747850:; BB(0x00747850);
    /* 00747850: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00747852: jmp 0x7477fb */ goto L_007477fb;
}

void f_00747854(void) /* sub_747854 */
{
    FN_ENTER(0x00747854);
    /* 00747854: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747855: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747856: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747857: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074785a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074785b: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x747860u); f_0073cd8c();
    /* 00747860: mov esi, eax */ r_esi = r_eax;
    /* 00747862: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00747864: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747869u); f_0079317c();
    /* 00747869: mov ebp, eax */ r_ebp = r_eax;
    /* 0074786b: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074786d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747872u); f_0079317c();
    /* 00747872: mov ebx, eax */ r_ebx = r_eax;
    /* 00747874: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747879: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74787eu); f_0073ec50();
    /* 0074787e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747881: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747887: mov ecx, esi */ r_ecx = r_esi;
    /* 00747889: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074788a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074788b: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x747890u); f_0073cfec();
    /* 00747890: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747892: mov ecx, esi */ r_ecx = r_esi;
    /* 00747894: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x747899u); f_0073d148();
    /* 00747899: mov ecx, esi */ r_ecx = r_esi;
    /* 0074789b: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x7478a0u); f_0073d170();
    /* 007478a0: mov eax, esi */ r_eax = r_esi;
    /* 007478a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007478a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007478a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007478a5: ret  */ FN_RET(0x00747854); r_esp += 4; return;
}

void f_00747865(void)
{
    FN_ENTER(0x00747865);
    /* 00747865: adc edi, dword ptr [ecx - 0x1774fffc] */ { u32 c = fC; u32 a = r_edi; u32 b = R32((u32)(r_ecx+0xe88b0004u)); u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0074786b: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074786d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747872u); f_0079317c();
    /* 00747872: mov ebx, eax */ r_ebx = r_eax;
    /* 00747874: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747879: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74787eu); f_0073ec50();
    /* 0074787e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747881: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747887: mov ecx, esi */ r_ecx = r_esi;
    /* 00747889: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074788a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074788b: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x747890u); f_0073cfec();
    /* 00747890: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747892: mov ecx, esi */ r_ecx = r_esi;
    /* 00747894: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x747899u); f_0073d148();
    /* 00747899: mov ecx, esi */ r_ecx = r_esi;
    /* 0074789b: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x7478a0u); f_0073d170();
    /* 007478a0: mov eax, esi */ r_eax = r_esi;
    /* 007478a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007478a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007478a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007478a5: ret  */ FN_RET(0x00747865); r_esp += 4; return;
}

void f_00747874(void)
{
    FN_ENTER(0x00747874);
    /* 00747874: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747879: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74787eu); f_0073ec50();
    /* 0074787e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747881: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747887: mov ecx, esi */ r_ecx = r_esi;
    /* 00747889: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074788a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074788b: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x747890u); f_0073cfec();
    /* 00747890: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747892: mov ecx, esi */ r_ecx = r_esi;
    /* 00747894: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x747899u); f_0073d148();
    /* 00747899: mov ecx, esi */ r_ecx = r_esi;
    /* 0074789b: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x7478a0u); f_0073d170();
    /* 007478a0: mov eax, esi */ r_eax = r_esi;
    /* 007478a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007478a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007478a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007478a5: ret  */ FN_RET(0x00747874); r_esp += 4; return;
}

void f_007478a8(void) /* sub_7478A8 */
{
    FN_ENTER(0x007478a8);
    /* 007478a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007478a9: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 007478ae: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7478b3u); f_0073ec50();
    /* 007478b3: mov ebp, eax */ r_ebp = r_eax;
    /* 007478b5: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 007478b7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7478bcu); f_0079317c();
    /* 007478bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007478bd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007478bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007478c0: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x7478c5u); f_00735460();
    /* 007478c5: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007478cc: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007478d2: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007478d9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007478dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007478dd: ret  */ FN_RET(0x007478a8); r_esp += 4; return;
}

void f_007478e0(void) /* sub_7478E0 */
{
    FN_ENTER(0x007478e0);
    /* 007478e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007478e1: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 007478e6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7478ebu); f_0073ec50();
    /* 007478eb: mov ebp, eax */ r_ebp = r_eax;
    /* 007478ed: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007478ef: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7478f4u); f_0079317c();
    /* 007478f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007478f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007478f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007478f8: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x7478fdu); f_00735460();
    /* 007478fd: mov ebp, eax */ r_ebp = r_eax;
    /* 007478ff: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00747901: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747906u); f_0079317c();
    /* 00747906: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747909: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0074790b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074790d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074790f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747910: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747915u); f_00735c90();
    /* 00747915: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x74791au); f_0080a640();
    /* 0074791a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074791c: je 0x747934 */ if (fZ) goto L_00747934;
L_0074791e:; BB(0x0074791e);
    /* 0074791e: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747920: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747925u); f_0079317c();
    /* 00747925: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747926: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00747928: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074792a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074792c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074792d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747932u); f_00735c90();
    /* 00747932: jmp 0x747948 */ goto L_00747948;
L_00747934:; BB(0x00747934);
    /* 00747934: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747936: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74793bu); f_0079317c();
    /* 0074793b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074793c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0074793e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747940: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747943: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x747948u); f_00735ee0();
L_00747948:; BB(0x00747948);
    /* 00747948: push 0x433a0000 */ { u32 v = 0x433a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074794d: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 00747954: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074795a: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 00747961: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747963: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x747968u); f_00736138();
    /* 00747968: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074796a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x74796fu); f_00736458();
    /* 0074796f: mov eax, ebp */ r_eax = r_ebp;
    /* 00747971: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747972: ret  */ FN_RET(0x007478e0); r_esp += 4; return;
}

void f_00747974(void) /* sub_747974 */
{
    FN_ENTER(0x00747974);
    /* 00747974: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747975: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 0074797b: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x747980u); f_0078ed4c();
    /* 00747980: mov edi, eax */ r_edi = r_eax;
    /* 00747982: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00747987: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747988: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x74798du); f_00813a78();
    /* 0074798d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747990: mov ecx, 0xacb240 */ r_ecx = 0xacb240u;
    /* 00747995: call 0x827370 */ r_esp -= 4; W32(r_esp, 0x74799au); f_00827370();
    /* 0074799a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074799f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007479a0: call 0x8136f0 */ r_esp -= 4; W32(r_esp, 0x7479a5u); f_008136f0();
    /* 007479a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007479a6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7479abu); f_00857e98();
    /* 007479ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007479ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007479af: ret  */ FN_RET(0x00747974); r_esp += 4; return;
}

void f_007479b0(void) /* sub_7479B0 */
{
    FN_ENTER(0x007479b0);
    /* 007479b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007479b3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007479b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007479b7: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007479bb: call 0x77f060 */ r_esp -= 4; W32(r_esp, 0x7479c0u); f_0077f060();
    /* 007479c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007479c3: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007479c9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007479cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007479cd: call 0x7d788c */ r_esp -= 4; W32(r_esp, 0x7479d2u); f_007d788c();
    /* 007479d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007479d5: ret 4 */ FN_RET(0x007479b0); r_esp += 8; return;
}

void f_007479d8(void) /* sub_7479D8 */
{
    FN_ENTER(0x007479d8);
    /* 007479d8: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 007479dd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7479e2u); f_0073ec50();
    /* 007479e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007479e4: push 0x97342c */ { u32 v = 0x97342cu; r_esp -= 4; W32(r_esp, v); }
    /* 007479e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007479ea: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7479efu); f_0073a8dc();
    /* 007479ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007479f2: ret  */ FN_RET(0x007479d8); r_esp += 4; return;
}

void f_007479f4(void) /* sub_7479F4 */
{
    FN_ENTER(0x007479f4);
    /* 007479f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007479f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007479f6: mov esi, ecx */ r_esi = r_ecx;
    /* 007479f8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007479fc: cmp ebp, dword ptr [esi + 0x30] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007479ff: jne 0x747a06 */ if (!fZ) goto L_00747a06;
L_00747a01:; BB(0x00747a01);
    /* 00747a01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747a02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747a03: ret 4 */ FN_RET(0x007479f4); r_esp += 8; return;
L_00747a06:; BB(0x00747a06);
    /* 00747a06: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 00747a09: call 0x77eff4 */ r_esp -= 4; W32(r_esp, 0x747a0eu); f_0077eff4();
    /* 00747a0e: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00747a12: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a14: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00747a16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a1a: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00747a1c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a20: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00747a22: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00747a28: lea ebp, [edx + eax + 8] */ r_ebp = (u32)(r_edx+r_eax+0x8u);
    /* 00747a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747a2d: call 0x827468 */ r_esp -= 4; W32(r_esp, 0x747a32u); f_00827468();
    /* 00747a32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747a33: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x747a38u); f_00816d30();
    /* 00747a38: add ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00747a3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747a3c: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x747a41u); f_00816cb8();
    /* 00747a41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747a42: mov ecx, 0xacb240 */ r_ecx = 0xacb240u;
    /* 00747a47: call 0x827380 */ r_esp -= 4; W32(r_esp, 0x747a4cu); f_00827380();
    /* 00747a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747a4d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x747a52u); f_00816cb8();
    /* 00747a52: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00747a57: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x747a5cu); f_00816cb8();
    /* 00747a5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747a5f: mov ecx, 0xacb240 */ r_ecx = 0xacb240u;
    /* 00747a64: call 0x827388 */ r_esp -= 4; W32(r_esp, 0x747a69u); f_00827388();
    /* 00747a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747a6a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x747a6fu); f_00816cb8();
    /* 00747a6f: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00747a74: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x747a79u); f_00816cb8();
    /* 00747a79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747a7c: mov ecx, 0xacb240 */ r_ecx = 0xacb240u;
    /* 00747a81: call 0x827390 */ r_esp -= 4; W32(r_esp, 0x747a86u); f_00827390();
    /* 00747a86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747a87: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x747a8cu); f_00816cb8();
    /* 00747a8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747a8d: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00747a92: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00747a97: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 00747a9a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x747a9fu); f_0073ae38();
    /* 00747a9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747aa0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747aa1: ret 4 */ FN_RET(0x007479f4); r_esp += 8; return;
}

void f_00747a94(void)
{
    FN_ENTER(0x00747a94);
    /* 00747a94: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 00747a95: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 00747a96: add byte ptr [ebx - 0x66178bb2], cl */ { u32 ad = (u32)(r_ebx+0x99e8744eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00747a9c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00747a9e: call ptr [ebp + 0x5e] */ { u32 t = R32((u32)(r_ebp+0x5eu)); r_esp -= 4; W32(r_esp, 0x747aa1u); call_ind(t); }
    /* 00747aa1: ret 4 */ FN_RET(0x00747a94); r_esp += 8; return;
}

void f_00747aa4(void) /* sub_747AA4 */
{
    FN_ENTER(0x00747aa4);
    /* 00747aa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747aa5: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00747aaa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747aafu); f_0073ec50();
    /* 00747aaf: mov ebp, eax */ r_ebp = r_eax;
    /* 00747ab1: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00747ab3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747ab8u); f_0079317c();
    /* 00747ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747ab9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00747abb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747abc: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747ac1u); f_00735460();
    /* 00747ac1: mov ebp, eax */ r_ebp = r_eax;
    /* 00747ac3: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00747ac5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747acau); f_0079317c();
    /* 00747aca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747acd: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00747acf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747ad1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747ad4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747ad9u); f_00735c90();
    /* 00747ad9: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x747adeu); f_0080a640();
    /* 00747ade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747ae0: je 0x747af8 */ if (fZ) goto L_00747af8;
L_00747ae2:; BB(0x00747ae2);
    /* 00747ae2: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747ae4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747ae9u); f_0079317c();
    /* 00747ae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747aea: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00747aec: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747aee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747af1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747af6u); f_00735c90();
    /* 00747af6: jmp 0x747b0c */ goto L_00747b0c;
L_00747af8:; BB(0x00747af8);
    /* 00747af8: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747afa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747affu); f_0079317c();
    /* 00747aff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747b00: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b02: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747b07: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x747b0cu); f_00735ee0();
L_00747b0c:; BB(0x00747b0c);
    /* 00747b0c: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b11: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 00747b18: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00747b1e: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 00747b25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747b27: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x747b2cu); f_00736138();
    /* 00747b2c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747b2e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x747b33u); f_00736458();
    /* 00747b33: mov eax, ebp */ r_eax = r_ebp;
    /* 00747b35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747b36: ret  */ FN_RET(0x00747aa4); r_esp += 4; return;
}

void f_00747b38(void) /* sub_747B38 */
{
    FN_ENTER(0x00747b38);
    /* 00747b38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747b39: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b3e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747b43u); f_0073ec50();
    /* 00747b43: mov esi, eax */ r_esi = r_eax;
    /* 00747b45: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b4a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747b4fu); f_0079317c();
    /* 00747b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747b50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747b53: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747b58u); f_00735460();
    /* 00747b58: mov esi, eax */ r_esi = r_eax;
    /* 00747b5a: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b5f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747b64u); f_0079317c();
    /* 00747b64: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747b67: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747b69: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b6b: mov ecx, esi */ r_ecx = r_esi;
    /* 00747b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747b6e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747b73u); f_00735c90();
    /* 00747b73: call 0x782640 */ r_esp -= 4; W32(r_esp, 0x747b78u); f_00782640();
    /* 00747b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747b7a: je 0x747b95 */ if (fZ) goto L_00747b95;
L_00747b7c:; BB(0x00747b7c);
    /* 00747b7c: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 00747b81: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747b86u); f_0079317c();
    /* 00747b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747b87: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00747b89: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747b8b: mov ecx, esi */ r_ecx = r_esi;
    /* 00747b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747b8e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747b93u); f_00735c90();
    /* 00747b93: jmp 0x747bac */ goto L_00747bac;
L_00747b95:; BB(0x00747b95);
    /* 00747b95: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 00747b9a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747b9fu); f_0079317c();
    /* 00747b9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747ba0: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00747ba2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747ba4: mov ecx, esi */ r_ecx = r_esi;
    /* 00747ba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747ba7: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x747bacu); f_00735ee0();
L_00747bac:; BB(0x00747bac);
    /* 00747bac: push 0x43690000 */ { u32 v = 0x43690000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747bb1: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00747bb8: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00747bbe: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00747bc5: mov ecx, esi */ r_ecx = r_esi;
    /* 00747bc7: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x747bccu); f_00736138();
    /* 00747bcc: mov eax, esi */ r_eax = r_esi;
    /* 00747bce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747bcf: ret  */ FN_RET(0x00747b38); r_esp += 4; return;
}

void f_00747bd0(void) /* sub_747BD0 */
{
    FN_ENTER(0x00747bd0);
    /* 00747bd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747bd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747bd3: call 0x782790 */ r_esp -= 4; W32(r_esp, 0x747bd8u); f_00782790();
    /* 00747bd8: mov edi, eax */ r_edi = r_eax;
    /* 00747bda: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00747bdf: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747be4u); f_0073ec50();
    /* 00747be4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747be6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00747be8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747bea: call 0x7480f8 */ r_esp -= 4; W32(r_esp, 0x747befu); f_007480f8();
    /* 00747bef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747bf2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747bf3: ret  */ FN_RET(0x00747bd0); r_esp += 4; return;
}

void f_00747bf8(void) /* sub_747BF8 */
{
    FN_ENTER(0x00747bf8);
    /* 00747bf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747bf9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747bfa: mov edi, eax */ r_edi = r_eax;
    /* 00747bfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747bfe: call 0x782790 */ r_esp -= 4; W32(r_esp, 0x747c03u); f_00782790();
    /* 00747c03: mov esi, eax */ r_esi = r_eax;
    /* 00747c05: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00747c0a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747c0fu); f_0073ec50();
    /* 00747c0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747c10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747c12: call 0x7156ec */ r_esp -= 4; W32(r_esp, 0x747c17u); f_007156ec();
    /* 00747c17: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747c1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747c1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747c1c: ret  */ FN_RET(0x00747bf8); r_esp += 4; return;
}

void f_00747c2c(void) /* sub_747C2C */
{
    FN_ENTER(0x00747c2c);
    /* 00747c2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747c2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747c2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747c2f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00747c32: mov edi, ecx */ r_edi = r_ecx;
    /* 00747c34: mov ebp, edx */ r_ebp = r_edx;
    /* 00747c36: mov ebx, eax */ r_ebx = r_eax;
    /* 00747c38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747c3a: call 0x782790 */ r_esp -= 4; W32(r_esp, 0x747c3fu); f_00782790();
    /* 00747c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747c40: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00747c44: mov eax, ebx */ r_eax = r_ebx;
    /* 00747c46: mov edx, ebp */ r_edx = r_ebp;
    /* 00747c48: mov ecx, edi */ r_ecx = r_edi;
    /* 00747c4a: call 0x747c64 */ r_esp -= 4; W32(r_esp, 0x747c4fu); f_00747c64();
    /* 00747c4f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747c52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747c53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747c54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747c55: ret  */ FN_RET(0x00747c2c); r_esp += 4; return;
}

void f_00747c64(void) /* sub_747C64 */
{
    FN_ENTER(0x00747c64);
    /* 00747c64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747c65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747c66: mov edi, ecx */ r_edi = r_ecx;
    /* 00747c68: mov esi, edx */ r_esi = r_edx;
    /* 00747c6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747c6c: je 0x747c8e */ if (fZ) goto L_00747c8e;
L_00747c6e:; BB(0x00747c6e);
    /* 00747c6e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747c70: je 0x747c8e */ if (fZ) goto L_00747c8e;
L_00747c72:; BB(0x00747c72);
    /* 00747c72: mov ecx, eax */ r_ecx = r_eax;
    /* 00747c74: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x747c79u); f_007365f4();
    /* 00747c79: cmp eax, dword ptr [edi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00747c7b: jne 0x747c80 */ if (!fZ) goto L_00747c80;
L_00747c7d:; BB(0x00747c7d);
    /* 00747c7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747c7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747c7f: ret  */ FN_RET(0x00747c64); r_esp += 4; return;
L_00747c80:; BB(0x00747c80);
    /* 00747c80: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747c84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747c85: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00747c87: mov ecx, esi */ r_ecx = r_esi;
    /* 00747c89: call 0x7157c8 */ r_esp -= 4; W32(r_esp, 0x747c8eu); f_007157c8();
L_00747c8e:; BB(0x00747c8e);
    /* 00747c8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747c8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747c90: ret  */ FN_RET(0x00747c64); r_esp += 4; return;
}

void f_00747c94(void) /* sub_747C94 */
{
    FN_ENTER(0x00747c94);
    /* 00747c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747c95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747c96: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747c99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00747c9a: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x747c9fu); f_0073cd8c();
    /* 00747c9f: mov ebp, eax */ r_ebp = r_eax;
    /* 00747ca1: push 0x11b */ { u32 v = 0x11bu; r_esp -= 4; W32(r_esp, v); }
    /* 00747ca6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747cabu); f_0079317c();
    /* 00747cab: mov ebx, eax */ r_ebx = r_eax;
    /* 00747cad: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 00747cb2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747cb7u); f_0073ec50();
    /* 00747cb7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747cba: push 0x43550000 */ { u32 v = 0x43550000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747cc0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747cc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747cc3: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x747cc8u); f_0073ce70();
    /* 00747cc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747cca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747ccc: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x747cd1u); f_0073d148();
    /* 00747cd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747cd3: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x747cd8u); f_0073d170();
    /* 00747cd8: mov eax, ebp */ r_eax = r_ebp;
    /* 00747cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747cdc: ret  */ FN_RET(0x00747c94); r_esp += 4; return;
}

void f_00747ce0(void) /* sub_747CE0 */
{
    FN_ENTER(0x00747ce0);
    /* 00747ce0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747ce1: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00747ce6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747cebu); f_0073ec50();
    /* 00747ceb: mov esi, eax */ r_esi = r_eax;
    /* 00747ced: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00747cef: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747cf4u); f_0079317c();
    /* 00747cf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747cf5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00747cf7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747cf8: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x747cfdu); f_00735460();
    /* 00747cfd: mov esi, eax */ r_esi = r_eax;
    /* 00747cff: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00747d04: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747d09u); f_0079317c();
    /* 00747d09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747d0c: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d0e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d10: mov ecx, esi */ r_ecx = r_esi;
    /* 00747d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747d13: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747d18u); f_00735c90();
    /* 00747d18: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00747d1d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747d22u); f_0079317c();
    /* 00747d22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747d23: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d25: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d27: mov ecx, esi */ r_ecx = r_esi;
    /* 00747d29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747d2a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747d2fu); f_00735c90();
    /* 00747d2f: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 00747d34: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747d39u); f_0079317c();
    /* 00747d39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747d3a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00747d3c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d3e: mov ecx, esi */ r_ecx = r_esi;
    /* 00747d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747d41: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x747d46u); f_00735c90();
    /* 00747d46: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d4b: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00747d52: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00747d58: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00747d5f: mov ecx, esi */ r_ecx = r_esi;
    /* 00747d61: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x747d66u); f_00736138();
    /* 00747d66: mov eax, esi */ r_eax = r_esi;
    /* 00747d68: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747d69: ret  */ FN_RET(0x00747ce0); r_esp += 4; return;
}

void f_00747d6c(void) /* sub_747D6C */
{
    FN_ENTER(0x00747d6c);
    /* 00747d6c: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d71: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747d76u); f_0073ec50();
    /* 00747d76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747d77: call 0x747ef4 */ r_esp -= 4; W32(r_esp, 0x747d7cu); f_00747ef4();
    /* 00747d7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747d7f: ret  */ FN_RET(0x00747d6c); r_esp += 4; return;
}

void f_00747d80(void) /* sub_747D80 */
{
    FN_ENTER(0x00747d80);
    /* 00747d80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00747d84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747d85: mov edi, eax */ r_edi = r_eax;
    /* 00747d87: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d8c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747d91u); f_0073ec50();
    /* 00747d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747d93: call 0x715654 */ r_esp -= 4; W32(r_esp, 0x747d98u); f_00715654();
    /* 00747d98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747d9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747d9c: ret  */ FN_RET(0x00747d80); r_esp += 4; return;
}

void f_00747d84(void) /* sub_747D84 */
{
    FN_ENTER(0x00747d84);
    /* 00747d84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747d85: mov edi, eax */ r_edi = r_eax;
    /* 00747d87: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00747d8c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747d91u); f_0073ec50();
    /* 00747d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747d93: call 0x715654 */ r_esp -= 4; W32(r_esp, 0x747d98u); f_00715654();
    /* 00747d98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00747d9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747d9c: ret  */ FN_RET(0x00747d84); r_esp += 4; return;
}

void f_00747da0(void) /* sub_747DA0 */
{
    FN_ENTER(0x00747da0);
    /* 00747da0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00747da4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00747da8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00747dac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747dad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747dae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747daf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747db0: mov esi, ecx */ r_esi = r_ecx;
    /* 00747db2: mov ebp, edx */ r_ebp = r_edx;
    /* 00747db4: mov edi, eax */ r_edi = r_eax;
    /* 00747db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747db8: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x747dbdu); f_00781dd4();
    /* 00747dbd: mov ebx, eax */ r_ebx = r_eax;
    /* 00747dbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747dc2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747dc4: je 0x747de5 */ if (fZ) goto L_00747de5;
L_00747dc6:; BB(0x00747dc6);
    /* 00747dc6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747dc8: je 0x747de5 */ if (fZ) goto L_00747de5;
L_00747dca:; BB(0x00747dca);
    /* 00747dca: mov ecx, edi */ r_ecx = r_edi;
    /* 00747dcc: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x747dd1u); f_007365f4();
    /* 00747dd1: cmp eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00747dd3: jne 0x747dda */ if (!fZ) goto L_00747dda;
L_00747dd5:; BB(0x00747dd5);
    /* 00747dd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747dd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747dd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747dd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747dd9: ret  */ FN_RET(0x00747da0); r_esp += 4; return;
L_00747dda:; BB(0x00747dda);
    /* 00747dda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747ddc: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00747dde: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747de0: call 0x715794 */ r_esp -= 4; W32(r_esp, 0x747de5u); f_00715794();
L_00747de5:; BB(0x00747de5);
    /* 00747de5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747de6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747de7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747de8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747de9: ret  */ FN_RET(0x00747da0); r_esp += 4; return;
}

void f_00747dac(void) /* sub_747DAC */
{
    FN_ENTER(0x00747dac);
    /* 00747dac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747dad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747dae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747daf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747db0: mov esi, ecx */ r_esi = r_ecx;
    /* 00747db2: mov ebp, edx */ r_ebp = r_edx;
    /* 00747db4: mov edi, eax */ r_edi = r_eax;
    /* 00747db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747db8: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x747dbdu); f_00781dd4();
    /* 00747dbd: mov ebx, eax */ r_ebx = r_eax;
    /* 00747dbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747dc2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747dc4: je 0x747de5 */ if (fZ) goto L_00747de5;
L_00747dc6:; BB(0x00747dc6);
    /* 00747dc6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747dc8: je 0x747de5 */ if (fZ) goto L_00747de5;
L_00747dca:; BB(0x00747dca);
    /* 00747dca: mov ecx, edi */ r_ecx = r_edi;
    /* 00747dcc: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x747dd1u); f_007365f4();
    /* 00747dd1: cmp eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00747dd3: jne 0x747dda */ if (!fZ) goto L_00747dda;
L_00747dd5:; BB(0x00747dd5);
    /* 00747dd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747dd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747dd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747dd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747dd9: ret  */ FN_RET(0x00747dac); r_esp += 4; return;
L_00747dda:; BB(0x00747dda);
    /* 00747dda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747ddc: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00747dde: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00747de0: call 0x715794 */ r_esp -= 4; W32(r_esp, 0x747de5u); f_00715794();
L_00747de5:; BB(0x00747de5);
    /* 00747de5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747de6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747de7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747de8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00747de9: ret  */ FN_RET(0x00747dac); r_esp += 4; return;
}

void f_00747dec(void) /* sub_747DEC */
{
    FN_ENTER(0x00747dec);
    /* 00747dec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00747ded: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747dee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747def: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747df2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00747df3: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x747df8u); f_0073cd8c();
    /* 00747df8: mov esi, eax */ r_esi = r_eax;
    /* 00747dfa: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00747dfc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747e01u); f_0079317c();
    /* 00747e01: mov ebp, eax */ r_ebp = r_eax;
    /* 00747e03: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 00747e08: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747e0du); f_0079317c();
    /* 00747e0d: mov ebx, eax */ r_ebx = r_eax;
    /* 00747e0f: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 00747e14: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747e19u); f_0073ec50();
    /* 00747e19: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747e1c: push 0x43550000 */ { u32 v = 0x43550000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747e22: mov ecx, esi */ r_ecx = r_esi;
    /* 00747e24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747e25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747e26: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x747e2bu); f_0073cfec();
    /* 00747e2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747e2d: mov ecx, esi */ r_ecx = r_esi;
    /* 00747e2f: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x747e34u); f_0073d148();
    /* 00747e34: mov ecx, esi */ r_ecx = r_esi;
    /* 00747e36: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x747e3bu); f_0073d170();
    /* 00747e3b: mov eax, esi */ r_eax = r_esi;
    /* 00747e3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747e3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00747e40: ret  */ FN_RET(0x00747dec); r_esp += 4; return;
}

void f_00747e44(void) /* sub_747E44 */
{
    FN_ENTER(0x00747e44);
    /* 00747e44: mov dword ptr [0xa9aaac], 0x3f800000 */ W32((u32)(0xa9aaacu), 0x3f800000u);
    /* 00747e4e: mov dword ptr [0xa9aab0], 0x41000000 */ W32((u32)(0xa9aab0u), 0x41000000u);
    /* 00747e58: mov dword ptr [0xa9aab4], 0x3fc00000 */ W32((u32)(0xa9aab4u), 0x3fc00000u);
    /* 00747e62: ret  */ FN_RET(0x00747e44); r_esp += 4; return;
}

void f_00747e64(void) /* sub_747E64 */
{
    FN_ENTER(0x00747e64);
    /* 00747e64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747e65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00747e67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00747e69: call 0x747e88 */ r_esp -= 4; W32(r_esp, 0x747e6eu); f_00747e88();
    /* 00747e6e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00747e72: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747e74: jne 0x747e7a */ if (!fZ) goto L_00747e7a;
L_00747e76:; BB(0x00747e76);
    /* 00747e76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747e77: ret 4 */ FN_RET(0x00747e64); r_esp += 8; return;
L_00747e7a:; BB(0x00747e7a);
    /* 00747e7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747e7b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x747e80u); f_005c2f74();
    /* 00747e80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00747e82: ret 4 */ FN_RET(0x00747e64); r_esp += 8; return;
}

void f_00747e88(void) /* sub_747E88 */
{
    FN_ENTER(0x00747e88);
    /* 00747e88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747e89: mov ebp, esp */ r_ebp = r_esp;
    /* 00747e8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00747e8d: push 0x8f252c */ { u32 v = 0x8f252cu; r_esp -= 4; W32(r_esp, v); }
    /* 00747e92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00747e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747e99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00747ea0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00747ea3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00747ea6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00747ea9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00747eac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00747eaf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00747eb2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00747eb9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00747ebc: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00747ec2: mov dword ptr [eax], 0xb41a30 */ W32((u32)(r_eax), 0xb41a30u);
    /* 00747ec8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747eca: je 0x747ed6 */ if (fZ) goto L_00747ed6;
L_00747ecc:; BB(0x00747ecc);
    /* 00747ecc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00747ece: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x747ed3u); f_00721474();
    /* 00747ed3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00747ed6:; BB(0x00747ed6);
    /* 00747ed6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00747edd: mov ecx, eax */ r_ecx = r_eax;
    /* 00747edf: call 0x734724 */ r_esp -= 4; W32(r_esp, 0x747ee4u); f_00734724();
    /* 00747ee4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00747ee7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00747eee: mov esp, ebp */ r_esp = r_ebp;
    /* 00747ef0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747ef1: ret  */ FN_RET(0x00747e88); r_esp += 4; return;
}

void f_00747ef4(void) /* sub_747EF4 */
{
    FN_ENTER(0x00747ef4);
    /* 00747ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747ef5: mov ebp, esp */ r_ebp = r_esp;
    /* 00747ef7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00747ef9: push 0x8f2554 */ { u32 v = 0x8f2554u; r_esp -= 4; W32(r_esp, v); }
    /* 00747efe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00747f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747f05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00747f0c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00747f0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00747f12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00747f15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00747f18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00747f1b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00747f1d: call 0x73668c */ r_esp -= 4; W32(r_esp, 0x747f22u); f_0073668c();
    /* 00747f22: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00747f29: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00747f2e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x747f33u); f_005caba4();
    /* 00747f33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747f36: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00747f39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747f3b: je 0x747f6e */ if (fZ) goto L_00747f6e;
L_00747f3d:; BB(0x00747f3d);
    /* 00747f3d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00747f44: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00747f4b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747f4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00747f51: call 0x747f74 */ r_esp -= 4; W32(r_esp, 0x747f56u); f_00747f74();
    /* 00747f56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00747f59: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00747f60:; BB(0x00747f60);
    /* 00747f60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00747f63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00747f6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00747f6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00747f6d: ret  */ FN_RET(0x00747ef4); r_esp += 4; return;
L_00747f6e:; BB(0x00747f6e);
    /* 00747f6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00747f70: jmp 0x747f60 */ goto L_00747f60;
}

void f_00747f74(void) /* sub_747F74 */
{
    FN_ENTER(0x00747f74);
    /* 00747f74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00747f75: mov ebp, esp */ r_ebp = r_esp;
    /* 00747f77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00747f79: push 0x8f258a */ { u32 v = 0x8f258au; r_esp -= 4; W32(r_esp, v); }
    /* 00747f7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00747f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747f85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00747f8c: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00747f8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00747f92: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00747f95: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00747f98: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00747f9b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00747f9e: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00747fa1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00747fa3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00747fa5: call 0x7347ac */ r_esp -= 4; W32(r_esp, 0x747faau); f_007347ac();
    /* 00747faa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00747fb1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00747fb4: mov dword ptr [edx], 0xb41a30 */ W32((u32)(r_edx), 0xb41a30u);
    /* 00747fba: mov eax, dword ptr [0x9f3c7c] */ r_eax = R32((u32)(0x9f3c7cu));
    /* 00747fbf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00747fc2: call 0x7818c0 */ r_esp -= 4; W32(r_esp, 0x747fc7u); f_007818c0();
    /* 00747fc7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00747fca: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 00747fcd: fdiv dword ptr [0x9734e0] */ ST(0) = ST(0) / R_F32((u32)(0x9734e0u));
    /* 00747fd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00747fd4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00747fd7: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x747fdcu); f_0083a248();
    /* 00747fdc: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 00747fdf: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00747fe3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00747fe8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00747feb: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00747fee: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00747ff1: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00747ff4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00747ff7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00747ffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00747ffc: jg 0x748006 */ if ((!fZ&&fS==fO)) goto L_00748006;
L_00747ffe:; BB(0x00747ffe);
    /* 00747ffe: mov eax, 1 */ r_eax = 0x1u;
    /* 00748003: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00748006:; BB(0x00748006);
    /* 00748006: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0074800d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074800f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x748014u); f_008581c5();
    /* 00748014: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00748017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074801a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0074801d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074801f: je 0x7480eb */ if (fZ) goto L_007480eb;
L_00748025:; BB(0x00748025);
    /* 00748025: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0074802c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00748033: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748039: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074803c: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0074803f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748045: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x74804au); f_0073e5d4();
    /* 0074804a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00748051:; BB(0x00748051);
    /* 00748051: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00748054: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748057: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0074805d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748064: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748067: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0074806d: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x748072u); f_00781dd4();
    /* 00748072: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748073: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00748076: movzx esi, word ptr [ecx + 0x84] */ r_esi = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074807d: mov dword ptr [ecx + 0xa8], 0x69 */ W32((u32)(r_ecx+0xa8u), 0x69u);
    /* 00748087: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 0074808d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074808f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748090: mov byte ptr [ecx + 0xac], al */ W8((u32)(r_ecx+0xacu), (u8)r_eax);
    /* 00748096: or esi, 0xffff0100 */ {  u32 a = r_esi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0074809c: mov word ptr [ecx + 0x84], si */ W16((u32)(r_ecx+0x84u), (u16)r_esi);
    /* 007480a3: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7480a8u); f_00736510();
    /* 007480a8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 007480ab: call 0x748430 */ r_esp -= 4; W32(r_esp, 0x7480b0u); f_00748430();
    /* 007480b0: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 007480b5: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007480ba: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 007480bd: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007480c4: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007480c9: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 007480d0: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7480d5u); f_007361d0();
    /* 007480d5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007480d8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007480db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007480de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007480e5: mov esp, ebp */ r_esp = r_ebp;
    /* 007480e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007480e8: ret 4 */ FN_RET(0x00747f74); r_esp += 8; return;
L_007480eb:; BB(0x007480eb);
    /* 007480eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007480ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007480f0: jmp 0x748051 */ goto L_00748051;
}

void f_00747fe0(void)
{
    FN_ENTER(0x00747fe0);
    /* 00747fe0: mov bh, 0x45 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x45u) & 0xffu) << 8);
    /* 00747fe2: les ecx, ptr [0xc00] */ UNSUP(0x00747fe2, "les ecx, ptr [0xc00]");
    /* 00747fe8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00747feb: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00747fee: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00747ff1: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00747ff4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00747ff7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00747ffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00747ffc: jg 0x748006 */ if ((!fZ&&fS==fO)) goto L_00748006;
L_00747ffe:; BB(0x00747ffe);
    /* 00747ffe: mov eax, 1 */ r_eax = 0x1u;
    /* 00748003: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00748006:; BB(0x00748006);
    /* 00748006: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0074800d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074800f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x748014u); f_008581c5();
    /* 00748014: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00748017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074801a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0074801d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074801f: je 0x7480eb */ if (fZ) goto L_007480eb;
L_00748025:; BB(0x00748025);
    /* 00748025: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0074802c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00748033: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748039: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074803c: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0074803f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748045: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x74804au); f_0073e5d4();
    /* 0074804a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00748051:; BB(0x00748051);
    /* 00748051: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00748054: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748057: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0074805d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748064: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748067: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0074806d: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x748072u); f_00781dd4();
    /* 00748072: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748073: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00748076: movzx esi, word ptr [ecx + 0x84] */ r_esi = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074807d: mov dword ptr [ecx + 0xa8], 0x69 */ W32((u32)(r_ecx+0xa8u), 0x69u);
    /* 00748087: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 0074808d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074808f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748090: mov byte ptr [ecx + 0xac], al */ W8((u32)(r_ecx+0xacu), (u8)r_eax);
    /* 00748096: or esi, 0xffff0100 */ {  u32 a = r_esi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0074809c: mov word ptr [ecx + 0x84], si */ W16((u32)(r_ecx+0x84u), (u16)r_esi);
    /* 007480a3: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7480a8u); f_00736510();
    /* 007480a8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 007480ab: call 0x748430 */ r_esp -= 4; W32(r_esp, 0x7480b0u); f_00748430();
    /* 007480b0: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 007480b5: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007480ba: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 007480bd: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007480c4: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007480c9: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 007480d0: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7480d5u); f_007361d0();
    /* 007480d5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007480d8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007480db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007480de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007480e5: mov esp, ebp */ r_esp = r_ebp;
    /* 007480e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007480e8: ret 4 */ FN_RET(0x00747fe0); r_esp += 8; return;
L_007480eb:; BB(0x007480eb);
    /* 007480eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007480ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007480f0: jmp 0x748051 */ goto L_00748051;
}

