#include "protos.h"

void f_0040f008(void) /* sub_40F008 */
{
    FN_ENTER(0x0040f008);
    /* 0040f008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f009: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f00b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f00d: push 0x8cca08 */ { u32 v = 0x8cca08u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f012: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040f018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f019: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040f020: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f023: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040f026: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040f029: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040f02c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040f02f: mov eax, dword ptr [0xa3ae6c] */ r_eax = R32((u32)(0xa3ae6cu));
    /* 0040f034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f036: je 0x40f046 */ if (fZ) goto L_0040f046;
L_0040f038:; BB(0x0040f038);
    /* 0040f038: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f03b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040f042: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f044: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f045: ret  */ FN_RET(0x0040f008); r_esp += 4; return;
L_0040f046:; BB(0x0040f046);
    /* 0040f046: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040f04d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f04f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40f054u); f_005caba4();
    /* 0040f054: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f055: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040f058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f05a: je 0x40f095 */ if (fZ) goto L_0040f095;
L_0040f05c:; BB(0x0040f05c);
    /* 0040f05c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0040f063: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f06a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040f06d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040f070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040f073: call 0x40f09c */ r_esp -= 4; W32(r_esp, 0x40f078u); f_0040f09c();
    /* 0040f078: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040f07b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040f082:; BB(0x0040f082);
    /* 0040f082: mov dword ptr [0xa3ae6c], eax */ W32((u32)(0xa3ae6cu), r_eax);
    /* 0040f087: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f08a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040f091: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f094: ret  */ FN_RET(0x0040f008); r_esp += 4; return;
L_0040f095:; BB(0x0040f095);
    /* 0040f095: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f097: jmp 0x40f082 */ goto L_0040f082;
}

void f_0040f09c(void) /* sub_40F09C */
{
    FN_ENTER(0x0040f09c);
    /* 0040f09c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040f09d: mov edi, ecx */ r_edi = r_ecx;
    /* 0040f09f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040f0a3: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f0a5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40f0aau); f_008193cc();
    /* 0040f0aa: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0040f0ae: mov dword ptr [edi], 0xaf2d40 */ W32((u32)(r_edi), 0xaf2d40u);
    /* 0040f0b4: mov edx, dword ptr [0x9a31b4] */ r_edx = R32((u32)(0x9a31b4u));
    /* 0040f0ba: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 0040f0c1: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0040f0c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f0c6: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 0040f0c9: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f0cf: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f0d2: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0040f0d5: mov eax, edi */ r_eax = r_edi;
    /* 0040f0d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f0d8: ret 8 */ FN_RET(0x0040f09c); r_esp += 12; return;
}

void f_0040f0dc(void) /* sub_40F0DC */
{
    FN_ENTER(0x0040f0dc);
    /* 0040f0dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0de: mov edi, ecx */ r_edi = r_ecx;
    /* 0040f0e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0e2: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 0040f0e5: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40f0eau); f_0082c204();
    /* 0040f0ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f0eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f0ed: jne 0x40f0fa */ if (!fZ) goto L_0040f0fa;
L_0040f0ef:; BB(0x0040f0ef);
    /* 0040f0ef: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 0040f0f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f0f8: jmp 0x40f0fd */ goto L_0040f0fd;
L_0040f0fa:; BB(0x0040f0fa);
    /* 0040f0fa: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
L_0040f0fd:; BB(0x0040f0fd);
    /* 0040f0fd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040f100: ja 0x40f2bf */ if ((!fC&&!fZ)) goto L_0040f2bf;
L_0040f106:; BB(0x0040f106);
    /* 0040f106: mov edx, dword ptr [eax*4 + 0x8fa340] */ r_edx = R32((u32)(r_eax*4+0x8fa340u));
    /* 0040f10d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f0dc); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f0dc); r_esp += 4; return;
}

void f_0040f10f(void)
{
    FN_ENTER(0x0040f10f);
    /* 0040f10f: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x40f114u); f_006c1bdc();
    /* 0040f114: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f117: je 0x40f30c */ if (fZ) goto L_0040f30c;
L_0040f11d:; BB(0x0040f11d);
    /* 0040f11d: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 0040f124: mov eax, 0xc */ r_eax = 0xcu;
    /* 0040f129: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f10f); r_esp += 4; return;
L_0040f30c:; BB(0x0040f30c);
    /* 0040f30c: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f30f: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f10f); r_esp += 4; return;
}

void f_0040f12e(void)
{
    FN_ENTER(0x0040f12e);
    /* 0040f12e: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x40f133u); f_006c1bdc();
    /* 0040f133: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f136: je 0x40f311 */ if (fZ) goto L_0040f311;
L_0040f13c:; BB(0x0040f13c);
    /* 0040f13c: mov dword ptr [edi + 0x20], 0xb */ W32((u32)(r_edi+0x20u), 0xbu);
    /* 0040f143: mov eax, 0xb */ r_eax = 0xbu;
    /* 0040f148: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f12e); r_esp += 4; return;
L_0040f311:; BB(0x0040f311);
    /* 0040f311: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f314: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f12e); r_esp += 4; return;
}

void f_0040f14d(void)
{
    FN_ENTER(0x0040f14d);
    /* 0040f14d: mov edx, dword ptr [0xa95de0] */ r_edx = R32((u32)(0xa95de0u));
    /* 0040f153: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f155: jne 0x40f2bf */ if (!fZ) goto L_0040f2bf;
L_0040f15b:; BB(0x0040f15b);
    /* 0040f15b: mov dword ptr [edi + 0x20], 0xa */ W32((u32)(r_edi+0x20u), 0xau);
    /* 0040f162: mov eax, 0xa */ r_eax = 0xau;
    /* 0040f167: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f14d); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f14d); r_esp += 4; return;
}

void f_0040f16c(void)
{
    FN_ENTER(0x0040f16c);
    /* 0040f16c: call 0x6c3158 */ r_esp -= 4; W32(r_esp, 0x40f171u); f_006c3158();
    /* 0040f171: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f176: je 0x40f189 */ if (fZ) goto L_0040f189;
L_0040f178:; BB(0x0040f178);
    /* 0040f178: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 0040f17f: mov eax, 9 */ r_eax = 0x9u;
    /* 0040f184: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f189:; BB(0x0040f189);
    /* 0040f189: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f18c: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f16c); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f16c); r_esp += 4; return;
}

void f_0040f191(void)
{
    FN_ENTER(0x0040f191);
    /* 0040f191: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x40f196u); f_006c44bc();
    /* 0040f196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f199: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40f19eu); f_0082c198();
    /* 0040f19e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f1a1: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f1a6: je 0x40f1b9 */ if (fZ) goto L_0040f1b9;
L_0040f1a8:; BB(0x0040f1a8);
    /* 0040f1a8: mov dword ptr [edi + 0x20], 8 */ W32((u32)(r_edi+0x20u), 0x8u);
    /* 0040f1af: mov eax, 8 */ r_eax = 0x8u;
    /* 0040f1b4: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f1b9:; BB(0x0040f1b9);
    /* 0040f1b9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f1bc: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f191); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f191); r_esp += 4; return;
}

void f_0040f1c1(void)
{
    FN_ENTER(0x0040f1c1);
    /* 0040f1c1: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40f1c6u); f_006c44ac();
    /* 0040f1c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f1c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f1c9: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40f1ceu); f_0082c198();
    /* 0040f1ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f1d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f1d3: je 0x40f1dd */ if (fZ) goto L_0040f1dd;
L_0040f1d5:; BB(0x0040f1d5);
    /* 0040f1d5: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f1d8: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f1dd:; BB(0x0040f1dd);
    /* 0040f1dd: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040f1e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f1e4: jne 0x40f1f7 */ if (!fZ) goto L_0040f1f7;
L_0040f1e6:; BB(0x0040f1e6);
    /* 0040f1e6: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 0040f1ed: mov eax, 7 */ r_eax = 0x7u;
    /* 0040f1f2: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f1f7:; BB(0x0040f1f7);
    /* 0040f1f7: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f1fa: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f1c1); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f1c1); r_esp += 4; return;
}

void f_0040f1ff(void)
{
    FN_ENTER(0x0040f1ff);
    /* 0040f1ff: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x40f204u); f_006c44ac();
    /* 0040f204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f205: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f207: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40f20cu); f_0082c198();
    /* 0040f20c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f20f: cmp eax, 0xffffff41 */ {  u32 a = r_eax; u32 b = 0xffffff41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f214: je 0x40f227 */ if (fZ) goto L_0040f227;
L_0040f216:; BB(0x0040f216);
    /* 0040f216: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
    /* 0040f21d: mov eax, 6 */ r_eax = 0x6u;
    /* 0040f222: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f227:; BB(0x0040f227);
    /* 0040f227: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f22a: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f1ff); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f1ff); r_esp += 4; return;
}

void f_0040f22f(void)
{
    FN_ENTER(0x0040f22f);
    /* 0040f22f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f231: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x40f236u); f_0082c1e0();
    /* 0040f236: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f239: jne 0x40f249 */ if (!fZ) goto L_0040f249;
L_0040f23b:; BB(0x0040f23b);
    /* 0040f23b: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 0040f242: mov eax, 5 */ r_eax = 0x5u;
    /* 0040f247: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f249:; BB(0x0040f249);
    /* 0040f249: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f24c: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f22f); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f22f); r_esp += 4; return;
}

void f_0040f24e(void)
{
    FN_ENTER(0x0040f24e);
    /* 0040f24e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f250: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40f255u); f_007083d4();
    /* 0040f255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f258: je 0x40f316 */ if (fZ) goto L_0040f316;
L_0040f25e:; BB(0x0040f25e);
    /* 0040f25e: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
L_0040f265:; BB(0x0040f265);
    /* 0040f265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f267: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40f26cu); f_007083d4();
    /* 0040f26c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f26f: je 0x40f27f */ if (fZ) goto L_0040f27f;
L_0040f271:; BB(0x0040f271);
    /* 0040f271: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 0040f278: mov eax, 4 */ r_eax = 0x4u;
    /* 0040f27d: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f27f:; BB(0x0040f27f);
    /* 0040f27f: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f282: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f24e); r_esp += 4; return;
L_0040f316:; BB(0x0040f316);
    /* 0040f316: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f318: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x40f31du); f_0082c3a8();
    /* 0040f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f31e: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f323: je 0x40f265 */ if (fZ) goto L_0040f265;
L_0040f329:; BB(0x0040f329);
    /* 0040f329: jmp 0x40f25e */ goto L_0040f25e;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f24e); r_esp += 4; return;
}

void f_0040f265(void)
{
    FN_ENTER(0x0040f265);
    /* 0040f265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f267: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40f26cu); f_007083d4();
    /* 0040f26c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f26f: je 0x40f27f */ if (fZ) goto L_0040f27f;
L_0040f271:; BB(0x0040f271);
    /* 0040f271: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 0040f278: mov eax, 4 */ r_eax = 0x4u;
    /* 0040f27d: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f27f:; BB(0x0040f27f);
    /* 0040f27f: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f282: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f265); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f265); r_esp += 4; return;
}

void f_0040f284(void)
{
    FN_ENTER(0x0040f284);
    /* 0040f284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f286: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x40f28bu); f_007083d4();
    /* 0040f28b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f28c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f28e: je 0x40f32e */ if (fZ) goto L_0040f32e;
L_0040f294:; BB(0x0040f294);
    /* 0040f294: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 0040f29b: mov eax, 2 */ r_eax = 0x2u;
    /* 0040f2a0: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f284); r_esp += 4; return;
L_0040f32e:; BB(0x0040f32e);
    /* 0040f32e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f330: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x40f335u); f_0082c3a8();
    /* 0040f335: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f336: cmp eax, -0x7d */ {  u32 a = r_eax; u32 b = 0xffffff83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f339: jne 0x40f294 */ if (!fZ) goto L_0040f294;
L_0040f33f:; BB(0x0040f33f);
    /* 0040f33f: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0040f342: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f284); r_esp += 4; return;
}

void f_0040f2a2(void)
{
    FN_ENTER(0x0040f2a2);
    /* 0040f2a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f2a4: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x40f2a9u); f_0082c204();
    /* 0040f2a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f2aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ac: je 0x40f2bc */ if (fZ) goto L_0040f2bc;
L_0040f2ae:; BB(0x0040f2ae);
    /* 0040f2ae: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 0040f2b5: mov eax, 1 */ r_eax = 0x1u;
    /* 0040f2ba: jmp 0x40f2bf */ goto L_0040f2bf;
L_0040f2bc:; BB(0x0040f2bc);
    /* 0040f2bc: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
L_0040f2bf:; BB(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f2a2); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f2a2); r_esp += 4; return;
}

void f_0040f2bf(void)
{
    FN_ENTER(0x0040f2bf);
    /* 0040f2bf: mov edx, dword ptr [0xaca4d8] */ r_edx = R32((u32)(0xaca4d8u));
    /* 0040f2c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2c7: je 0x40f2d6 */ if (fZ) goto L_0040f2d6;
L_0040f2c9:; BB(0x0040f2c9);
    /* 0040f2c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2cb: mov dword ptr [0xaca4d8], edx */ W32((u32)(0xaca4d8u), r_edx);
    /* 0040f2d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2d3: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0040f2d6:; BB(0x0040f2d6);
    /* 0040f2d6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2d8: je 0x40f2e3 */ if (fZ) goto L_0040f2e3;
L_0040f2da:; BB(0x0040f2da);
    /* 0040f2da: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0040f2e1: jmp 0x40f2f6 */ goto L_0040f2f6;
L_0040f2e3:; BB(0x0040f2e3);
    /* 0040f2e3: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0040f2e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f2e9: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0040f2ec: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2ef: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f1:; BB(0x0040f2f1);
    /* 0040f2f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2f4: je 0x40f347 */ if (fZ) goto L_0040f347;
L_0040f2f6:; BB(0x0040f2f6);
    /* 0040f2f6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0040f2f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f2fb: je 0x40f309 */ if (fZ) goto L_0040f309;
L_0040f2fd:; BB(0x0040f2fd);
    /* 0040f2fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40f302u); f_007127b0();
    /* 0040f302: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_0040f309:; BB(0x0040f309);
    /* 0040f309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f30a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f30b: ret  */ FN_RET(0x0040f2bf); r_esp += 4; return;
L_0040f347:; BB(0x0040f347);
    /* 0040f347: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f34a: jle 0x40f2f6 */ if ((fZ||fS!=fO)) goto L_0040f2f6;
L_0040f34c:; BB(0x0040f34c);
    /* 0040f34c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040f34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f351: jne 0x40f309 */ if (!fZ) goto L_0040f309;
L_0040f353:; BB(0x0040f353);
    /* 0040f353: mov ecx, edi */ r_ecx = r_edi;
    /* 0040f355: call 0x40f360 */ r_esp -= 4; W32(r_esp, 0x40f35au); f_0040f360();
    /* 0040f35a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040f35d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f35f: ret  */ FN_RET(0x0040f2bf); r_esp += 4; return;
}

void f_0040f360(void) /* sub_40F360 */
{
    FN_ENTER(0x0040f360);
    /* 0040f360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f361: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0040f364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f366: jne 0x40f37e */ if (!fZ) goto L_0040f37e;
L_0040f368:; BB(0x0040f368);
    /* 0040f368: push 0x8fa384 */ { u32 v = 0x8fa384u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f36d: push 0x8fa374 */ { u32 v = 0x8fa374u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f372: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x40f377u); f_0073a888();
    /* 0040f377: mov ebp, eax */ r_ebp = r_eax;
    /* 0040f379: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f37c: jmp 0x40f392 */ goto L_0040f392;
L_0040f37e:; BB(0x0040f37e);
    /* 0040f37e: push 0x8fa384 */ { u32 v = 0x8fa384u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f383: push 0x8fa37c */ { u32 v = 0x8fa37cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f388: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x40f38du); f_0073a888();
    /* 0040f38d: mov ebp, eax */ r_ebp = r_eax;
    /* 0040f38f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040f392:; BB(0x0040f392);
    /* 0040f392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f394: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0040f396: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40f39bu); f_00792fe8();
    /* 0040f39b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f39e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040f3a3: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x40f3a8u); f_0073ae38();
    /* 0040f3a8: mov eax, ebp */ r_eax = r_ebp;
    /* 0040f3aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f3ab: ret  */ FN_RET(0x0040f360); r_esp += 4; return;
}

void f_0040f3ac(void) /* sub_40F3AC */
{
    FN_ENTER(0x0040f3ac);
    /* 0040f3ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040f3ad: mov ecx, dword ptr [0xa3b050] */ r_ecx = R32((u32)(0xa3b050u));
    /* 0040f3b3: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 0040f3b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f3bb: mov eax, dword ptr [0xa3aea4] */ r_eax = R32((u32)(0xa3aea4u));
    /* 0040f3c0: sub eax, dword ptr [ecx + edx*8 + 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*8+0xacu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f3c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0040f3c9: jl 0x40f414 */ if ((fS!=fO)) goto L_0040f414;
L_0040f3cb:; BB(0x0040f3cb);
    /* 0040f3cb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f3ce: jge 0x40f414 */ if ((fS==fO)) goto L_0040f414;
L_0040f3d0:; BB(0x0040f3d0);
    /* 0040f3d0: mov edi, dword ptr [eax*8 + 0x8fa3f4] */ r_edi = R32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f3d7: fld dword ptr [0x8fa3ec] */ FPUSH(R_F32((u32)(0x8fa3ecu)));
    /* 0040f3dd: fadd dword ptr [eax*8 + 0x8fa3f4] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f3e4: fld dword ptr [0x8fa3f0] */ FPUSH(R_F32((u32)(0x8fa3f0u)));
    /* 0040f3ea: fadd dword ptr [eax*8 + 0x8fa3f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f3f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040f3f3: fstp dword ptr [0xa3ae88] */ W_F32((u32)(0xa3ae88u), ST(0)); FPOP();
    /* 0040f3f9: fstp dword ptr [0xa3ae8c] */ W_F32((u32)(0xa3ae8cu), ST(0)); FPOP();
    /* 0040f3ff: mov dword ptr [0xa3ae80], edi */ W32((u32)(0xa3ae80u), r_edi);
    /* 0040f405: mov edi, dword ptr [eax*8 + 0x8fa3f8] */ r_edi = R32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f40c: mov dword ptr [0xa3ae84], edi */ W32((u32)(0xa3ae84u), r_edi);
    /* 0040f412: jmp 0x40f43c */ goto L_0040f43c;
L_0040f414:; BB(0x0040f414);
    /* 0040f414: mov dword ptr [0xa3ae80], 0xc3960000 */ W32((u32)(0xa3ae80u), 0xc3960000u);
    /* 0040f41e: mov dword ptr [0xa3ae84], 0xc3960000 */ W32((u32)(0xa3ae84u), 0xc3960000u);
    /* 0040f428: mov dword ptr [0xa3ae88], 0xc2f00000 */ W32((u32)(0xa3ae88u), 0xc2f00000u);
    /* 0040f432: mov dword ptr [0xa3ae8c], 0xc3830000 */ W32((u32)(0xa3ae8cu), 0xc3830000u);
L_0040f43c:; BB(0x0040f43c);
    /* 0040f43c: mov eax, dword ptr [0xa3aea8] */ r_eax = R32((u32)(0xa3aea8u));
    /* 0040f441: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040f443: je 0x40f468 */ if (fZ) goto L_0040f468;
L_0040f445:; BB(0x0040f445);
    /* 0040f445: fld dword ptr [0x8fa39c] */ FPUSH(R_F32((u32)(0x8fa39cu)));
    /* 0040f44b: fadd dword ptr [0xa3aea0] */ ST(0) = ST(0) + R_F32((u32)(0xa3aea0u));
    /* 0040f451: fld dword ptr [0x8fa398] */ FPUSH(R_F32((u32)(0x8fa398u)));
    /* 0040f457: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040f459: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040f45b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040f45c: ja 0x40f460 */ if ((!fC&&!fZ)) goto L_0040f460;
L_0040f45e:; BB(0x0040f45e);
    /* 0040f45e: fst st(1) */ ST(1) = ST(0);
L_0040f460:; BB(0x0040f460);
    /* 0040f460: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040f462: fstp dword ptr [0xa3aea0] */ W_F32((u32)(0xa3aea0u), ST(0)); FPOP();
L_0040f468:; BB(0x0040f468);
    /* 0040f468: mov eax, dword ptr [0xa3aed0] */ r_eax = R32((u32)(0xa3aed0u));
    /* 0040f46d: sub eax, dword ptr [ecx + edx*8 + 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*8+0xacu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0040f476: jl 0x40f4c1 */ if ((fS!=fO)) goto L_0040f4c1;
L_0040f478:; BB(0x0040f478);
    /* 0040f478: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f47b: jge 0x40f4c1 */ if ((fS==fO)) goto L_0040f4c1;
L_0040f47d:; BB(0x0040f47d);
    /* 0040f47d: mov edi, dword ptr [eax*8 + 0x8fa3f4] */ r_edi = R32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f484: fld dword ptr [0x8fa3ec] */ FPUSH(R_F32((u32)(0x8fa3ecu)));
    /* 0040f48a: fadd dword ptr [eax*8 + 0x8fa3f4] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f491: fld dword ptr [0x8fa3f0] */ FPUSH(R_F32((u32)(0x8fa3f0u)));
    /* 0040f497: fadd dword ptr [eax*8 + 0x8fa3f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f49e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040f4a0: fstp dword ptr [0xa3aeb4] */ W_F32((u32)(0xa3aeb4u), ST(0)); FPOP();
    /* 0040f4a6: fstp dword ptr [0xa3aeb8] */ W_F32((u32)(0xa3aeb8u), ST(0)); FPOP();
    /* 0040f4ac: mov dword ptr [0xa3aeac], edi */ W32((u32)(0xa3aeacu), r_edi);
    /* 0040f4b2: mov edi, dword ptr [eax*8 + 0x8fa3f8] */ r_edi = R32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f4b9: mov dword ptr [0xa3aeb0], edi */ W32((u32)(0xa3aeb0u), r_edi);
    /* 0040f4bf: jmp 0x40f4e9 */ goto L_0040f4e9;
L_0040f4c1:; BB(0x0040f4c1);
    /* 0040f4c1: mov dword ptr [0xa3aeac], 0xc3960000 */ W32((u32)(0xa3aeacu), 0xc3960000u);
    /* 0040f4cb: mov dword ptr [0xa3aeb0], 0xc3960000 */ W32((u32)(0xa3aeb0u), 0xc3960000u);
    /* 0040f4d5: mov dword ptr [0xa3aeb4], 0xc2f00000 */ W32((u32)(0xa3aeb4u), 0xc2f00000u);
    /* 0040f4df: mov dword ptr [0xa3aeb8], 0xc3830000 */ W32((u32)(0xa3aeb8u), 0xc3830000u);
L_0040f4e9:; BB(0x0040f4e9);
    /* 0040f4e9: mov eax, dword ptr [0xa3aed4] */ r_eax = R32((u32)(0xa3aed4u));
    /* 0040f4ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040f4f0: je 0x40f515 */ if (fZ) goto L_0040f515;
L_0040f4f2:; BB(0x0040f4f2);
    /* 0040f4f2: fld dword ptr [0x8fa39c] */ FPUSH(R_F32((u32)(0x8fa39cu)));
    /* 0040f4f8: fadd dword ptr [0xa3aecc] */ ST(0) = ST(0) + R_F32((u32)(0xa3aeccu));
    /* 0040f4fe: fld dword ptr [0x8fa398] */ FPUSH(R_F32((u32)(0x8fa398u)));
    /* 0040f504: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040f506: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040f508: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040f509: ja 0x40f50d */ if ((!fC&&!fZ)) goto L_0040f50d;
L_0040f50b:; BB(0x0040f50b);
    /* 0040f50b: fst st(1) */ ST(1) = ST(0);
L_0040f50d:; BB(0x0040f50d);
    /* 0040f50d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040f50f: fstp dword ptr [0xa3aecc] */ W_F32((u32)(0xa3aeccu), ST(0)); FPOP();
L_0040f515:; BB(0x0040f515);
    /* 0040f515: mov eax, dword ptr [0xa3aefc] */ r_eax = R32((u32)(0xa3aefcu));
    /* 0040f51a: sub eax, dword ptr [ecx + edx*8 + 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*8+0xacu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0040f523: jl 0x40f56e */ if ((fS!=fO)) goto L_0040f56e;
L_0040f525:; BB(0x0040f525);
    /* 0040f525: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f528: jge 0x40f56e */ if ((fS==fO)) goto L_0040f56e;
L_0040f52a:; BB(0x0040f52a);
    /* 0040f52a: mov edi, dword ptr [eax*8 + 0x8fa3f4] */ r_edi = R32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f531: fld dword ptr [0x8fa3ec] */ FPUSH(R_F32((u32)(0x8fa3ecu)));
    /* 0040f537: fadd dword ptr [eax*8 + 0x8fa3f4] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f53e: fld dword ptr [0x8fa3f0] */ FPUSH(R_F32((u32)(0x8fa3f0u)));
    /* 0040f544: fadd dword ptr [eax*8 + 0x8fa3f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f54b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040f54d: fstp dword ptr [0xa3aee0] */ W_F32((u32)(0xa3aee0u), ST(0)); FPOP();
    /* 0040f553: fstp dword ptr [0xa3aee4] */ W_F32((u32)(0xa3aee4u), ST(0)); FPOP();
    /* 0040f559: mov dword ptr [0xa3aed8], edi */ W32((u32)(0xa3aed8u), r_edi);
    /* 0040f55f: mov edi, dword ptr [eax*8 + 0x8fa3f8] */ r_edi = R32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f566: mov dword ptr [0xa3aedc], edi */ W32((u32)(0xa3aedcu), r_edi);
    /* 0040f56c: jmp 0x40f596 */ goto L_0040f596;
L_0040f56e:; BB(0x0040f56e);
    /* 0040f56e: mov dword ptr [0xa3aed8], 0xc3960000 */ W32((u32)(0xa3aed8u), 0xc3960000u);
    /* 0040f578: mov dword ptr [0xa3aedc], 0xc3960000 */ W32((u32)(0xa3aedcu), 0xc3960000u);
    /* 0040f582: mov dword ptr [0xa3aee0], 0xc2f00000 */ W32((u32)(0xa3aee0u), 0xc2f00000u);
    /* 0040f58c: mov dword ptr [0xa3aee4], 0xc3830000 */ W32((u32)(0xa3aee4u), 0xc3830000u);
L_0040f596:; BB(0x0040f596);
    /* 0040f596: mov eax, dword ptr [0xa3af00] */ r_eax = R32((u32)(0xa3af00u));
    /* 0040f59b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0040f59d: je 0x40f5c2 */ if (fZ) goto L_0040f5c2;
L_0040f59f:; BB(0x0040f59f);
    /* 0040f59f: fld dword ptr [0x8fa39c] */ FPUSH(R_F32((u32)(0x8fa39cu)));
    /* 0040f5a5: fadd dword ptr [0xa3aef8] */ ST(0) = ST(0) + R_F32((u32)(0xa3aef8u));
    /* 0040f5ab: fld dword ptr [0x8fa398] */ FPUSH(R_F32((u32)(0x8fa398u)));
    /* 0040f5b1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040f5b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040f5b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040f5b6: ja 0x40f5ba */ if ((!fC&&!fZ)) goto L_0040f5ba;
L_0040f5b8:; BB(0x0040f5b8);
    /* 0040f5b8: fst st(1) */ ST(1) = ST(0);
L_0040f5ba:; BB(0x0040f5ba);
    /* 0040f5ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040f5bc: fstp dword ptr [0xa3aef8] */ W_F32((u32)(0xa3aef8u), ST(0)); FPOP();
L_0040f5c2:; BB(0x0040f5c2);
    /* 0040f5c2: mov eax, dword ptr [0xa3af28] */ r_eax = R32((u32)(0xa3af28u));
    /* 0040f5c7: sub eax, dword ptr [ecx + edx*8 + 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*8+0xacu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f5ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0040f5d0: jl 0x40f61b */ if ((fS!=fO)) goto L_0040f61b;
L_0040f5d2:; BB(0x0040f5d2);
    /* 0040f5d2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f5d5: jge 0x40f61b */ if ((fS==fO)) goto L_0040f61b;
L_0040f5d7:; BB(0x0040f5d7);
    /* 0040f5d7: mov edx, dword ptr [eax*8 + 0x8fa3f4] */ r_edx = R32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f5de: mov ecx, dword ptr [eax*8 + 0x8fa3f8] */ r_ecx = R32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f5e5: fld dword ptr [0x8fa3ec] */ FPUSH(R_F32((u32)(0x8fa3ecu)));
    /* 0040f5eb: fadd dword ptr [eax*8 + 0x8fa3f4] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f4u));
    /* 0040f5f2: fld dword ptr [0x8fa3f0] */ FPUSH(R_F32((u32)(0x8fa3f0u)));
    /* 0040f5f8: fadd dword ptr [eax*8 + 0x8fa3f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x8fa3f8u));
    /* 0040f5ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040f601: fstp dword ptr [0xa3af0c] */ W_F32((u32)(0xa3af0cu), ST(0)); FPOP();
    /* 0040f607: fstp dword ptr [0xa3af10] */ W_F32((u32)(0xa3af10u), ST(0)); FPOP();
    /* 0040f60d: mov dword ptr [0xa3af04], edx */ W32((u32)(0xa3af04u), r_edx);
    /* 0040f613: mov dword ptr [0xa3af08], ecx */ W32((u32)(0xa3af08u), r_ecx);
    /* 0040f619: jmp 0x40f643 */ goto L_0040f643;
L_0040f61b:; BB(0x0040f61b);
    /* 0040f61b: mov dword ptr [0xa3af04], 0xc3960000 */ W32((u32)(0xa3af04u), 0xc3960000u);
    /* 0040f625: mov dword ptr [0xa3af08], 0xc3960000 */ W32((u32)(0xa3af08u), 0xc3960000u);
    /* 0040f62f: mov dword ptr [0xa3af0c], 0xc2f00000 */ W32((u32)(0xa3af0cu), 0xc2f00000u);
    /* 0040f639: mov dword ptr [0xa3af10], 0xc3830000 */ W32((u32)(0xa3af10u), 0xc3830000u);
L_0040f643:; BB(0x0040f643);
    /* 0040f643: mov eax, dword ptr [0xa3af2c] */ r_eax = R32((u32)(0xa3af2cu));
    /* 0040f648: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f64a: je 0x40f66f */ if (fZ) goto L_0040f66f;
L_0040f64c:; BB(0x0040f64c);
    /* 0040f64c: fld dword ptr [0x8fa39c] */ FPUSH(R_F32((u32)(0x8fa39cu)));
    /* 0040f652: fadd dword ptr [0xa3af24] */ ST(0) = ST(0) + R_F32((u32)(0xa3af24u));
    /* 0040f658: fld dword ptr [0x8fa398] */ FPUSH(R_F32((u32)(0x8fa398u)));
    /* 0040f65e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040f660: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040f662: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040f663: ja 0x40f667 */ if ((!fC&&!fZ)) goto L_0040f667;
L_0040f665:; BB(0x0040f665);
    /* 0040f665: fst st(1) */ ST(1) = ST(0);
L_0040f667:; BB(0x0040f667);
    /* 0040f667: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040f669: fstp dword ptr [0xa3af24] */ W_F32((u32)(0xa3af24u), ST(0)); FPOP();
L_0040f66f:; BB(0x0040f66f);
    /* 0040f66f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040f670: ret  */ FN_RET(0x0040f3ac); r_esp += 4; return;
}

void f_0040f674(void) /* sub_40F674 */
{
    FN_ENTER(0x0040f674);
    /* 0040f674: mov dword ptr [0xa3af30], 0x3f800000 */ W32((u32)(0xa3af30u), 0x3f800000u);
    /* 0040f67e: mov dword ptr [0xa3af34], 0x41000000 */ W32((u32)(0xa3af34u), 0x41000000u);
    /* 0040f688: mov dword ptr [0xa3af38], 0x3fc00000 */ W32((u32)(0xa3af38u), 0x3fc00000u);
    /* 0040f692: ret  */ FN_RET(0x0040f674); r_esp += 4; return;
}

void f_0040f694(void) /* sub_40F694 */
{
    FN_ENTER(0x0040f694);
    /* 0040f694: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f695: mov ebp, dword ptr [ecx + 0x224] */ r_ebp = R32((u32)(r_ecx+0x224u));
    /* 0040f69b: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040f69e: jge 0x40f6e4 */ if ((fS==fO)) goto L_0040f6e4;
L_0040f6a0:; BB(0x0040f6a0);
    /* 0040f6a0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040f6a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f6a6: mov dword ptr [ecx + ebp*8 + 0x11c], edx */ W32((u32)(r_ecx+r_ebp*8+0x11cu), r_edx);
    /* 0040f6ad: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0040f6b3: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0040f6b6: mov dword ptr [ecx + edx*8 + 0x120], ebp */ W32((u32)(r_ecx+r_edx*8+0x120u), r_ebp);
    /* 0040f6bd: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0040f6c3: mov eax, dword ptr [ecx + 0x11c] */ r_eax = R32((u32)(r_ecx+0x11cu));
    /* 0040f6c9: mov dword ptr [ecx + edx*8 + 0x1c], eax */ W32((u32)(r_ecx+r_edx*8+0x1cu), r_eax);
    /* 0040f6cd: mov edx, dword ptr [ecx + 0x224] */ r_edx = R32((u32)(r_ecx+0x224u));
    /* 0040f6d3: mov eax, dword ptr [ecx + 0x120] */ r_eax = R32((u32)(r_ecx+0x120u));
    /* 0040f6d9: mov dword ptr [ecx + edx*8 + 0x20], eax */ W32((u32)(r_ecx+r_edx*8+0x20u), r_eax);
    /* 0040f6dd: add dword ptr [ecx + 0x224], 1 */ { u32 ad = (u32)(r_ecx+0x224u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0040f6e4:; BB(0x0040f6e4);
    /* 0040f6e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f6e5: ret 4 */ FN_RET(0x0040f694); r_esp += 8; return;
}

void f_0040f6e8(void) /* sub_40F6E8 */
{
    FN_ENTER(0x0040f6e8);
    /* 0040f6e8: mov dword ptr [ecx + 0x3ac], 0xffffffff */ W32((u32)(r_ecx+0x3acu), 0xffffffffu);
    /* 0040f6f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040f6f4: mov dword ptr [ecx + 0x2a8], 0 */ W32((u32)(r_ecx+0x2a8u), 0x0u);
    /* 0040f6fe: mov dword ptr [ecx + 0x224], eax */ W32((u32)(r_ecx+0x224u), r_eax);
    /* 0040f704: mov dword ptr [ecx + 0x228], eax */ W32((u32)(r_ecx+0x228u), r_eax);
    /* 0040f70a: mov byte ptr [ecx + 0x32a], al */ W8((u32)(r_ecx+0x32au), (u8)r_eax);
    /* 0040f710: mov dword ptr [ecx + 0x2ac], 0 */ W32((u32)(r_ecx+0x2acu), 0x0u);
    /* 0040f71a: mov byte ptr [ecx + 0x329], al */ W8((u32)(r_ecx+0x329u), (u8)r_eax);
    /* 0040f720: mov byte ptr [ecx + 0x328], al */ W8((u32)(r_ecx+0x328u), (u8)r_eax);
    /* 0040f726: mov byte ptr [ecx + 0x32b], al */ W8((u32)(r_ecx+0x32bu), (u8)r_eax);
    /* 0040f72c: mov dword ptr [ecx + 0x2b0], 0 */ W32((u32)(r_ecx+0x2b0u), 0x0u);
    /* 0040f736: mov dword ptr [ecx + 0x22c], eax */ W32((u32)(r_ecx+0x22cu), r_eax);
    /* 0040f73c: mov byte ptr [ecx + 0x32e], al */ W8((u32)(r_ecx+0x32eu), (u8)r_eax);
    /* 0040f742: mov byte ptr [ecx + 0x32d], al */ W8((u32)(r_ecx+0x32du), (u8)r_eax);
    /* 0040f748: mov dword ptr [ecx + 0x2b4], 0 */ W32((u32)(r_ecx+0x2b4u), 0x0u);
    /* 0040f752: mov byte ptr [ecx + 0x32c], al */ W8((u32)(r_ecx+0x32cu), (u8)r_eax);
    /* 0040f758: mov byte ptr [ecx + 0x32f], al */ W8((u32)(r_ecx+0x32fu), (u8)r_eax);
    /* 0040f75e: mov dword ptr [ecx + 0x230], eax */ W32((u32)(r_ecx+0x230u), r_eax);
    /* 0040f764: mov dword ptr [ecx + 0x2b8], 0 */ W32((u32)(r_ecx+0x2b8u), 0x0u);
    /* 0040f76e: mov byte ptr [ecx + 0x332], al */ W8((u32)(r_ecx+0x332u), (u8)r_eax);
    /* 0040f774: mov byte ptr [ecx + 0x331], al */ W8((u32)(r_ecx+0x331u), (u8)r_eax);
    /* 0040f77a: mov byte ptr [ecx + 0x330], al */ W8((u32)(r_ecx+0x330u), (u8)r_eax);
    /* 0040f780: mov dword ptr [ecx + 0x2bc], 0 */ W32((u32)(r_ecx+0x2bcu), 0x0u);
    /* 0040f78a: mov byte ptr [ecx + 0x333], al */ W8((u32)(r_ecx+0x333u), (u8)r_eax);
    /* 0040f790: mov dword ptr [ecx + 0x234], eax */ W32((u32)(r_ecx+0x234u), r_eax);
    /* 0040f796: mov byte ptr [ecx + 0x336], al */ W8((u32)(r_ecx+0x336u), (u8)r_eax);
    /* 0040f79c: mov dword ptr [ecx + 0x2c0], 0 */ W32((u32)(r_ecx+0x2c0u), 0x0u);
    /* 0040f7a6: mov byte ptr [ecx + 0x335], al */ W8((u32)(r_ecx+0x335u), (u8)r_eax);
    /* 0040f7ac: mov byte ptr [ecx + 0x334], al */ W8((u32)(r_ecx+0x334u), (u8)r_eax);
    /* 0040f7b2: mov byte ptr [ecx + 0x337], al */ W8((u32)(r_ecx+0x337u), (u8)r_eax);
    /* 0040f7b8: mov dword ptr [ecx + 0x2c4], 0 */ W32((u32)(r_ecx+0x2c4u), 0x0u);
    /* 0040f7c2: mov dword ptr [ecx + 0x238], eax */ W32((u32)(r_ecx+0x238u), r_eax);
    /* 0040f7c8: mov byte ptr [ecx + 0x33a], al */ W8((u32)(r_ecx+0x33au), (u8)r_eax);
    /* 0040f7ce: mov byte ptr [ecx + 0x339], al */ W8((u32)(r_ecx+0x339u), (u8)r_eax);
    /* 0040f7d4: mov dword ptr [ecx + 0x2c8], 0 */ W32((u32)(r_ecx+0x2c8u), 0x0u);
    /* 0040f7de: mov byte ptr [ecx + 0x338], al */ W8((u32)(r_ecx+0x338u), (u8)r_eax);
    /* 0040f7e4: mov byte ptr [ecx + 0x33b], al */ W8((u32)(r_ecx+0x33bu), (u8)r_eax);
    /* 0040f7ea: mov dword ptr [ecx + 0x23c], eax */ W32((u32)(r_ecx+0x23cu), r_eax);
    /* 0040f7f0: mov dword ptr [ecx + 0x2cc], 0 */ W32((u32)(r_ecx+0x2ccu), 0x0u);
    /* 0040f7fa: mov byte ptr [ecx + 0x33e], al */ W8((u32)(r_ecx+0x33eu), (u8)r_eax);
    /* 0040f800: mov byte ptr [ecx + 0x33d], al */ W8((u32)(r_ecx+0x33du), (u8)r_eax);
    /* 0040f806: mov byte ptr [ecx + 0x33c], al */ W8((u32)(r_ecx+0x33cu), (u8)r_eax);
    /* 0040f80c: mov dword ptr [ecx + 0x2d0], 0 */ W32((u32)(r_ecx+0x2d0u), 0x0u);
    /* 0040f816: mov byte ptr [ecx + 0x33f], al */ W8((u32)(r_ecx+0x33fu), (u8)r_eax);
    /* 0040f81c: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 0040f822: mov byte ptr [ecx + 0x342], al */ W8((u32)(r_ecx+0x342u), (u8)r_eax);
    /* 0040f828: mov dword ptr [ecx + 0x2d4], 0 */ W32((u32)(r_ecx+0x2d4u), 0x0u);
    /* 0040f832: mov byte ptr [ecx + 0x341], al */ W8((u32)(r_ecx+0x341u), (u8)r_eax);
    /* 0040f838: mov byte ptr [ecx + 0x340], al */ W8((u32)(r_ecx+0x340u), (u8)r_eax);
    /* 0040f83e: mov byte ptr [ecx + 0x343], al */ W8((u32)(r_ecx+0x343u), (u8)r_eax);
    /* 0040f844: mov dword ptr [ecx + 0x2d8], 0 */ W32((u32)(r_ecx+0x2d8u), 0x0u);
    /* 0040f84e: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 0040f854: mov byte ptr [ecx + 0x346], al */ W8((u32)(r_ecx+0x346u), (u8)r_eax);
    /* 0040f85a: mov byte ptr [ecx + 0x345], al */ W8((u32)(r_ecx+0x345u), (u8)r_eax);
    /* 0040f860: mov dword ptr [ecx + 0x2dc], 0 */ W32((u32)(r_ecx+0x2dcu), 0x0u);
    /* 0040f86a: mov byte ptr [ecx + 0x344], al */ W8((u32)(r_ecx+0x344u), (u8)r_eax);
    /* 0040f870: mov byte ptr [ecx + 0x347], al */ W8((u32)(r_ecx+0x347u), (u8)r_eax);
    /* 0040f876: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 0040f87c: mov dword ptr [ecx + 0x2e0], 0 */ W32((u32)(r_ecx+0x2e0u), 0x0u);
    /* 0040f886: mov byte ptr [ecx + 0x34a], al */ W8((u32)(r_ecx+0x34au), (u8)r_eax);
    /* 0040f88c: mov byte ptr [ecx + 0x349], al */ W8((u32)(r_ecx+0x349u), (u8)r_eax);
    /* 0040f892: mov byte ptr [ecx + 0x348], al */ W8((u32)(r_ecx+0x348u), (u8)r_eax);
    /* 0040f898: mov dword ptr [ecx + 0x2e4], 0 */ W32((u32)(r_ecx+0x2e4u), 0x0u);
    /* 0040f8a2: mov byte ptr [ecx + 0x34b], al */ W8((u32)(r_ecx+0x34bu), (u8)r_eax);
    /* 0040f8a8: mov dword ptr [ecx + 0x24c], eax */ W32((u32)(r_ecx+0x24cu), r_eax);
    /* 0040f8ae: mov byte ptr [ecx + 0x34e], al */ W8((u32)(r_ecx+0x34eu), (u8)r_eax);
    /* 0040f8b4: mov dword ptr [ecx + 0x2e8], 0 */ W32((u32)(r_ecx+0x2e8u), 0x0u);
    /* 0040f8be: mov byte ptr [ecx + 0x34d], al */ W8((u32)(r_ecx+0x34du), (u8)r_eax);
    /* 0040f8c4: mov byte ptr [ecx + 0x34c], al */ W8((u32)(r_ecx+0x34cu), (u8)r_eax);
    /* 0040f8ca: mov byte ptr [ecx + 0x34f], al */ W8((u32)(r_ecx+0x34fu), (u8)r_eax);
    /* 0040f8d0: mov dword ptr [ecx + 0x2ec], 0 */ W32((u32)(r_ecx+0x2ecu), 0x0u);
    /* 0040f8da: mov dword ptr [ecx + 0x250], eax */ W32((u32)(r_ecx+0x250u), r_eax);
    /* 0040f8e0: mov byte ptr [ecx + 0x352], al */ W8((u32)(r_ecx+0x352u), (u8)r_eax);
    /* 0040f8e6: mov byte ptr [ecx + 0x351], al */ W8((u32)(r_ecx+0x351u), (u8)r_eax);
    /* 0040f8ec: mov dword ptr [ecx + 0x2f0], 0 */ W32((u32)(r_ecx+0x2f0u), 0x0u);
    /* 0040f8f6: mov byte ptr [ecx + 0x350], al */ W8((u32)(r_ecx+0x350u), (u8)r_eax);
    /* 0040f8fc: mov byte ptr [ecx + 0x353], al */ W8((u32)(r_ecx+0x353u), (u8)r_eax);
    /* 0040f902: mov dword ptr [ecx + 0x254], eax */ W32((u32)(r_ecx+0x254u), r_eax);
    /* 0040f908: mov dword ptr [ecx + 0x2f4], 0 */ W32((u32)(r_ecx+0x2f4u), 0x0u);
    /* 0040f912: mov byte ptr [ecx + 0x356], al */ W8((u32)(r_ecx+0x356u), (u8)r_eax);
    /* 0040f918: mov byte ptr [ecx + 0x355], al */ W8((u32)(r_ecx+0x355u), (u8)r_eax);
    /* 0040f91e: mov byte ptr [ecx + 0x354], al */ W8((u32)(r_ecx+0x354u), (u8)r_eax);
    /* 0040f924: mov dword ptr [ecx + 0x2f8], 0 */ W32((u32)(r_ecx+0x2f8u), 0x0u);
    /* 0040f92e: mov byte ptr [ecx + 0x357], al */ W8((u32)(r_ecx+0x357u), (u8)r_eax);
    /* 0040f934: mov dword ptr [ecx + 0x258], eax */ W32((u32)(r_ecx+0x258u), r_eax);
    /* 0040f93a: mov byte ptr [ecx + 0x35a], al */ W8((u32)(r_ecx+0x35au), (u8)r_eax);
    /* 0040f940: mov dword ptr [ecx + 0x2fc], 0 */ W32((u32)(r_ecx+0x2fcu), 0x0u);
    /* 0040f94a: mov byte ptr [ecx + 0x359], al */ W8((u32)(r_ecx+0x359u), (u8)r_eax);
    /* 0040f950: mov byte ptr [ecx + 0x358], al */ W8((u32)(r_ecx+0x358u), (u8)r_eax);
    /* 0040f956: mov byte ptr [ecx + 0x35b], al */ W8((u32)(r_ecx+0x35bu), (u8)r_eax);
    /* 0040f95c: mov dword ptr [ecx + 0x300], 0 */ W32((u32)(r_ecx+0x300u), 0x0u);
    /* 0040f966: mov dword ptr [ecx + 0x25c], eax */ W32((u32)(r_ecx+0x25cu), r_eax);
    /* 0040f96c: mov byte ptr [ecx + 0x35e], al */ W8((u32)(r_ecx+0x35eu), (u8)r_eax);
    /* 0040f972: mov byte ptr [ecx + 0x35d], al */ W8((u32)(r_ecx+0x35du), (u8)r_eax);
    /* 0040f978: mov dword ptr [ecx + 0x304], 0 */ W32((u32)(r_ecx+0x304u), 0x0u);
    /* 0040f982: mov byte ptr [ecx + 0x35c], al */ W8((u32)(r_ecx+0x35cu), (u8)r_eax);
    /* 0040f988: mov byte ptr [ecx + 0x35f], al */ W8((u32)(r_ecx+0x35fu), (u8)r_eax);
    /* 0040f98e: mov dword ptr [ecx + 0x260], eax */ W32((u32)(r_ecx+0x260u), r_eax);
    /* 0040f994: mov dword ptr [ecx + 0x308], 0 */ W32((u32)(r_ecx+0x308u), 0x0u);
    /* 0040f99e: mov byte ptr [ecx + 0x362], al */ W8((u32)(r_ecx+0x362u), (u8)r_eax);
    /* 0040f9a4: mov byte ptr [ecx + 0x361], al */ W8((u32)(r_ecx+0x361u), (u8)r_eax);
    /* 0040f9aa: mov byte ptr [ecx + 0x360], al */ W8((u32)(r_ecx+0x360u), (u8)r_eax);
    /* 0040f9b0: mov dword ptr [ecx + 0x30c], 0 */ W32((u32)(r_ecx+0x30cu), 0x0u);
    /* 0040f9ba: mov byte ptr [ecx + 0x363], al */ W8((u32)(r_ecx+0x363u), (u8)r_eax);
    /* 0040f9c0: mov dword ptr [ecx + 0x264], eax */ W32((u32)(r_ecx+0x264u), r_eax);
    /* 0040f9c6: mov byte ptr [ecx + 0x366], al */ W8((u32)(r_ecx+0x366u), (u8)r_eax);
    /* 0040f9cc: mov dword ptr [ecx + 0x310], 0 */ W32((u32)(r_ecx+0x310u), 0x0u);
    /* 0040f9d6: mov byte ptr [ecx + 0x365], al */ W8((u32)(r_ecx+0x365u), (u8)r_eax);
    /* 0040f9dc: mov byte ptr [ecx + 0x364], al */ W8((u32)(r_ecx+0x364u), (u8)r_eax);
    /* 0040f9e2: mov byte ptr [ecx + 0x367], al */ W8((u32)(r_ecx+0x367u), (u8)r_eax);
    /* 0040f9e8: mov dword ptr [ecx + 0x314], 0 */ W32((u32)(r_ecx+0x314u), 0x0u);
    /* 0040f9f2: mov dword ptr [ecx + 0x268], eax */ W32((u32)(r_ecx+0x268u), r_eax);
    /* 0040f9f8: mov byte ptr [ecx + 0x36a], al */ W8((u32)(r_ecx+0x36au), (u8)r_eax);
    /* 0040f9fe: mov byte ptr [ecx + 0x369], al */ W8((u32)(r_ecx+0x369u), (u8)r_eax);
    /* 0040fa04: mov dword ptr [ecx + 0x318], 0 */ W32((u32)(r_ecx+0x318u), 0x0u);
    /* 0040fa0e: mov byte ptr [ecx + 0x368], al */ W8((u32)(r_ecx+0x368u), (u8)r_eax);
    /* 0040fa14: mov byte ptr [ecx + 0x36b], al */ W8((u32)(r_ecx+0x36bu), (u8)r_eax);
    /* 0040fa1a: mov dword ptr [ecx + 0x26c], eax */ W32((u32)(r_ecx+0x26cu), r_eax);
    /* 0040fa20: mov dword ptr [ecx + 0x31c], 0 */ W32((u32)(r_ecx+0x31cu), 0x0u);
    /* 0040fa2a: mov byte ptr [ecx + 0x36e], al */ W8((u32)(r_ecx+0x36eu), (u8)r_eax);
    /* 0040fa30: mov byte ptr [ecx + 0x36d], al */ W8((u32)(r_ecx+0x36du), (u8)r_eax);
    /* 0040fa36: mov byte ptr [ecx + 0x36c], al */ W8((u32)(r_ecx+0x36cu), (u8)r_eax);
    /* 0040fa3c: mov dword ptr [ecx + 0x320], 0 */ W32((u32)(r_ecx+0x320u), 0x0u);
    /* 0040fa46: mov byte ptr [ecx + 0x36f], al */ W8((u32)(r_ecx+0x36fu), (u8)r_eax);
    /* 0040fa4c: mov dword ptr [ecx + 0x270], eax */ W32((u32)(r_ecx+0x270u), r_eax);
    /* 0040fa52: mov byte ptr [ecx + 0x372], al */ W8((u32)(r_ecx+0x372u), (u8)r_eax);
    /* 0040fa58: mov dword ptr [ecx + 0x324], 0 */ W32((u32)(r_ecx+0x324u), 0x0u);
    /* 0040fa62: mov byte ptr [ecx + 0x371], al */ W8((u32)(r_ecx+0x371u), (u8)r_eax);
    /* 0040fa68: mov byte ptr [ecx + 0x370], al */ W8((u32)(r_ecx+0x370u), (u8)r_eax);
    /* 0040fa6e: mov byte ptr [ecx + 0x373], al */ W8((u32)(r_ecx+0x373u), (u8)r_eax);
    /* 0040fa74: mov dword ptr [ecx + 0x274], eax */ W32((u32)(r_ecx+0x274u), r_eax);
    /* 0040fa7a: mov byte ptr [ecx + 0x376], al */ W8((u32)(r_ecx+0x376u), (u8)r_eax);
    /* 0040fa80: mov byte ptr [ecx + 0x375], al */ W8((u32)(r_ecx+0x375u), (u8)r_eax);
    /* 0040fa86: mov byte ptr [ecx + 0x374], al */ W8((u32)(r_ecx+0x374u), (u8)r_eax);
    /* 0040fa8c: mov byte ptr [ecx + 0x377], al */ W8((u32)(r_ecx+0x377u), (u8)r_eax);
    /* 0040fa92: mov dword ptr [ecx + 0x278], eax */ W32((u32)(r_ecx+0x278u), r_eax);
    /* 0040fa98: mov byte ptr [ecx + 0x37a], al */ W8((u32)(r_ecx+0x37au), (u8)r_eax);
    /* 0040fa9e: mov byte ptr [ecx + 0x379], al */ W8((u32)(r_ecx+0x379u), (u8)r_eax);
    /* 0040faa4: mov byte ptr [ecx + 0x378], al */ W8((u32)(r_ecx+0x378u), (u8)r_eax);
    /* 0040faaa: mov byte ptr [ecx + 0x37b], al */ W8((u32)(r_ecx+0x37bu), (u8)r_eax);
    /* 0040fab0: mov dword ptr [ecx + 0x27c], eax */ W32((u32)(r_ecx+0x27cu), r_eax);
    /* 0040fab6: mov byte ptr [ecx + 0x37e], al */ W8((u32)(r_ecx+0x37eu), (u8)r_eax);
    /* 0040fabc: mov byte ptr [ecx + 0x37d], al */ W8((u32)(r_ecx+0x37du), (u8)r_eax);
    /* 0040fac2: mov byte ptr [ecx + 0x37c], al */ W8((u32)(r_ecx+0x37cu), (u8)r_eax);
    /* 0040fac8: mov byte ptr [ecx + 0x37f], al */ W8((u32)(r_ecx+0x37fu), (u8)r_eax);
    /* 0040face: mov dword ptr [ecx + 0x280], eax */ W32((u32)(r_ecx+0x280u), r_eax);
    /* 0040fad4: mov byte ptr [ecx + 0x382], al */ W8((u32)(r_ecx+0x382u), (u8)r_eax);
    /* 0040fada: mov byte ptr [ecx + 0x381], al */ W8((u32)(r_ecx+0x381u), (u8)r_eax);
    /* 0040fae0: mov byte ptr [ecx + 0x380], al */ W8((u32)(r_ecx+0x380u), (u8)r_eax);
    /* 0040fae6: mov byte ptr [ecx + 0x383], al */ W8((u32)(r_ecx+0x383u), (u8)r_eax);
    /* 0040faec: mov dword ptr [ecx + 0x284], eax */ W32((u32)(r_ecx+0x284u), r_eax);
    /* 0040faf2: mov byte ptr [ecx + 0x386], al */ W8((u32)(r_ecx+0x386u), (u8)r_eax);
    /* 0040faf8: mov byte ptr [ecx + 0x385], al */ W8((u32)(r_ecx+0x385u), (u8)r_eax);
    /* 0040fafe: mov byte ptr [ecx + 0x384], al */ W8((u32)(r_ecx+0x384u), (u8)r_eax);
    /* 0040fb04: mov byte ptr [ecx + 0x387], al */ W8((u32)(r_ecx+0x387u), (u8)r_eax);
    /* 0040fb0a: mov dword ptr [ecx + 0x288], eax */ W32((u32)(r_ecx+0x288u), r_eax);
    /* 0040fb10: mov byte ptr [ecx + 0x38a], al */ W8((u32)(r_ecx+0x38au), (u8)r_eax);
    /* 0040fb16: mov byte ptr [ecx + 0x389], al */ W8((u32)(r_ecx+0x389u), (u8)r_eax);
    /* 0040fb1c: mov byte ptr [ecx + 0x388], al */ W8((u32)(r_ecx+0x388u), (u8)r_eax);
    /* 0040fb22: mov byte ptr [ecx + 0x38b], al */ W8((u32)(r_ecx+0x38bu), (u8)r_eax);
    /* 0040fb28: mov dword ptr [ecx + 0x28c], eax */ W32((u32)(r_ecx+0x28cu), r_eax);
    /* 0040fb2e: mov byte ptr [ecx + 0x38e], al */ W8((u32)(r_ecx+0x38eu), (u8)r_eax);
    /* 0040fb34: mov byte ptr [ecx + 0x38d], al */ W8((u32)(r_ecx+0x38du), (u8)r_eax);
    /* 0040fb3a: mov byte ptr [ecx + 0x38c], al */ W8((u32)(r_ecx+0x38cu), (u8)r_eax);
    /* 0040fb40: mov byte ptr [ecx + 0x38f], al */ W8((u32)(r_ecx+0x38fu), (u8)r_eax);
    /* 0040fb46: mov dword ptr [ecx + 0x290], eax */ W32((u32)(r_ecx+0x290u), r_eax);
    /* 0040fb4c: mov byte ptr [ecx + 0x392], al */ W8((u32)(r_ecx+0x392u), (u8)r_eax);
    /* 0040fb52: mov byte ptr [ecx + 0x391], al */ W8((u32)(r_ecx+0x391u), (u8)r_eax);
    /* 0040fb58: mov byte ptr [ecx + 0x390], al */ W8((u32)(r_ecx+0x390u), (u8)r_eax);
    /* 0040fb5e: mov byte ptr [ecx + 0x393], al */ W8((u32)(r_ecx+0x393u), (u8)r_eax);
    /* 0040fb64: mov dword ptr [ecx + 0x294], eax */ W32((u32)(r_ecx+0x294u), r_eax);
    /* 0040fb6a: mov byte ptr [ecx + 0x396], al */ W8((u32)(r_ecx+0x396u), (u8)r_eax);
    /* 0040fb70: mov byte ptr [ecx + 0x395], al */ W8((u32)(r_ecx+0x395u), (u8)r_eax);
    /* 0040fb76: mov byte ptr [ecx + 0x394], al */ W8((u32)(r_ecx+0x394u), (u8)r_eax);
    /* 0040fb7c: mov byte ptr [ecx + 0x397], al */ W8((u32)(r_ecx+0x397u), (u8)r_eax);
    /* 0040fb82: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 0040fb88: mov byte ptr [ecx + 0x39a], al */ W8((u32)(r_ecx+0x39au), (u8)r_eax);
    /* 0040fb8e: mov byte ptr [ecx + 0x399], al */ W8((u32)(r_ecx+0x399u), (u8)r_eax);
    /* 0040fb94: mov byte ptr [ecx + 0x398], al */ W8((u32)(r_ecx+0x398u), (u8)r_eax);
    /* 0040fb9a: mov byte ptr [ecx + 0x39b], al */ W8((u32)(r_ecx+0x39bu), (u8)r_eax);
    /* 0040fba0: mov dword ptr [ecx + 0x29c], eax */ W32((u32)(r_ecx+0x29cu), r_eax);
    /* 0040fba6: mov byte ptr [ecx + 0x39e], al */ W8((u32)(r_ecx+0x39eu), (u8)r_eax);
    /* 0040fbac: mov byte ptr [ecx + 0x39d], al */ W8((u32)(r_ecx+0x39du), (u8)r_eax);
    /* 0040fbb2: mov byte ptr [ecx + 0x39c], al */ W8((u32)(r_ecx+0x39cu), (u8)r_eax);
    /* 0040fbb8: mov byte ptr [ecx + 0x39f], al */ W8((u32)(r_ecx+0x39fu), (u8)r_eax);
    /* 0040fbbe: mov dword ptr [ecx + 0x2a0], eax */ W32((u32)(r_ecx+0x2a0u), r_eax);
    /* 0040fbc4: mov byte ptr [ecx + 0x3a2], al */ W8((u32)(r_ecx+0x3a2u), (u8)r_eax);
    /* 0040fbca: mov byte ptr [ecx + 0x3a1], al */ W8((u32)(r_ecx+0x3a1u), (u8)r_eax);
    /* 0040fbd0: mov byte ptr [ecx + 0x3a0], al */ W8((u32)(r_ecx+0x3a0u), (u8)r_eax);
    /* 0040fbd6: mov byte ptr [ecx + 0x3a3], al */ W8((u32)(r_ecx+0x3a3u), (u8)r_eax);
    /* 0040fbdc: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 0040fbe2: mov byte ptr [ecx + 0x3a6], al */ W8((u32)(r_ecx+0x3a6u), (u8)r_eax);
    /* 0040fbe8: mov byte ptr [ecx + 0x3a5], al */ W8((u32)(r_ecx+0x3a5u), (u8)r_eax);
    /* 0040fbee: mov byte ptr [ecx + 0x3a4], al */ W8((u32)(r_ecx+0x3a4u), (u8)r_eax);
    /* 0040fbf4: mov byte ptr [ecx + 0x3a7], al */ W8((u32)(r_ecx+0x3a7u), (u8)r_eax);
    /* 0040fbfa: ret  */ FN_RET(0x0040f6e8); r_esp += 4; return;
}

void f_0040fbfc(void) /* sub_40FBFC */
{
    FN_ENTER(0x0040fbfc);
    /* 0040fbfc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0040fc00: fld dword ptr [ecx + edx*4 + 0x2a8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x2a8u)));
    /* 0040fc07: fcomp dword ptr [0x8fa444] */ fx_compare(ST(0), R_F32((u32)(0x8fa444u))); FPOP();
    /* 0040fc0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040fc0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040fc10: jb 0x40fc1a */ if (fC) goto L_0040fc1a;
L_0040fc12:; BB(0x0040fc12);
    /* 0040fc12: mov eax, 1 */ r_eax = 0x1u;
    /* 0040fc17: ret 4 */ FN_RET(0x0040fbfc); r_esp += 8; return;
L_0040fc1a:; BB(0x0040fc1a);
    /* 0040fc1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fc1c: ret 4 */ FN_RET(0x0040fbfc); r_esp += 8; return;
}

void f_0040fc49(void)
{
    FN_ENTER(0x0040fc49);
    /* 0040fc49: cmp edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040fc4c: jbe 0x40fd01 */ if ((fC||fZ)) goto L_0040fd01;
L_0040fc52:; BB(0x0040fc52);
    /* 0040fc52: mov dword ptr [edi + 0x1c], 7 */ W32((u32)(r_edi+0x1cu), 0x7u);
    /* 0040fc59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fc5a: ret  */ FN_RET(0x0040fc49); r_esp += 4; return;
L_0040fd01:; BB(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fc49); r_esp += 4; return;
}

void f_0040fc5b(void)
{
    FN_ENTER(0x0040fc5b);
    /* 0040fc5b: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040fc5e: jb 0x40fd01 */ if (fC) goto L_0040fd01;
L_0040fc64:; BB(0x0040fc64);
    /* 0040fc64: mov ecx, dword ptr [0xa3af80] */ r_ecx = R32((u32)(0xa3af80u));
    /* 0040fc6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fc6c: je 0x40fc77 */ if (fZ) goto L_0040fc77;
L_0040fc6e:; BB(0x0040fc6e);
    /* 0040fc6e: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0040fc71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc72: call 0x40fd04 */ r_esp -= 4; W32(r_esp, 0x40fc77u); f_0040fd04();
L_0040fc77:; BB(0x0040fc77);
    /* 0040fc77: mov dword ptr [edi + 0x1c], 6 */ W32((u32)(r_edi+0x1cu), 0x6u);
    /* 0040fc7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fc7f: ret  */ FN_RET(0x0040fc5b); r_esp += 4; return;
L_0040fd01:; BB(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fc5b); r_esp += 4; return;
}

void f_0040fc80(void)
{
    FN_ENTER(0x0040fc80);
    /* 0040fc80: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040fc83: jb 0x40fd01 */ if (fC) goto L_0040fd01;
L_0040fc85:; BB(0x0040fc85);
    /* 0040fc85: mov ecx, dword ptr [0xa3af7c] */ r_ecx = R32((u32)(0xa3af7cu));
    /* 0040fc8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fc8d: je 0x40fc98 */ if (fZ) goto L_0040fc98;
L_0040fc8f:; BB(0x0040fc8f);
    /* 0040fc8f: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0040fc92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc93: call 0x40fd04 */ r_esp -= 4; W32(r_esp, 0x40fc98u); f_0040fd04();
L_0040fc98:; BB(0x0040fc98);
    /* 0040fc98: mov dword ptr [edi + 0x1c], 5 */ W32((u32)(r_edi+0x1cu), 0x5u);
    /* 0040fc9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fca0: ret  */ FN_RET(0x0040fc80); r_esp += 4; return;
L_0040fd01:; BB(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fc80); r_esp += 4; return;
}

void f_0040fca1(void)
{
    FN_ENTER(0x0040fca1);
    /* 0040fca1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040fca4: jb 0x40fd01 */ if (fC) goto L_0040fd01;
L_0040fca6:; BB(0x0040fca6);
    /* 0040fca6: mov ecx, dword ptr [0xa3af78] */ r_ecx = R32((u32)(0xa3af78u));
    /* 0040fcac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fcae: je 0x40fcb9 */ if (fZ) goto L_0040fcb9;
L_0040fcb0:; BB(0x0040fcb0);
    /* 0040fcb0: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0040fcb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fcb4: call 0x40fd04 */ r_esp -= 4; W32(r_esp, 0x40fcb9u); f_0040fd04();
L_0040fcb9:; BB(0x0040fcb9);
    /* 0040fcb9: mov dword ptr [edi + 0x1c], 4 */ W32((u32)(r_edi+0x1cu), 0x4u);
    /* 0040fcc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fcc1: ret  */ FN_RET(0x0040fca1); r_esp += 4; return;
L_0040fd01:; BB(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fca1); r_esp += 4; return;
}

void f_0040fcc2(void)
{
    FN_ENTER(0x0040fcc2);
    /* 0040fcc2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040fcc5: jb 0x40fd01 */ if (fC) goto L_0040fd01;
L_0040fcc7:; BB(0x0040fcc7);
    /* 0040fcc7: mov ecx, dword ptr [0xa3af74] */ r_ecx = R32((u32)(0xa3af74u));
    /* 0040fccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fccf: je 0x40fcda */ if (fZ) goto L_0040fcda;
L_0040fcd1:; BB(0x0040fcd1);
    /* 0040fcd1: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0040fcd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fcd5: call 0x40fd04 */ r_esp -= 4; W32(r_esp, 0x40fcdau); f_0040fd04();
L_0040fcda:; BB(0x0040fcda);
    /* 0040fcda: mov dword ptr [edi + 0x1c], 3 */ W32((u32)(r_edi+0x1cu), 0x3u);
    /* 0040fce1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fce2: ret  */ FN_RET(0x0040fcc2); r_esp += 4; return;
L_0040fd01:; BB(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fcc2); r_esp += 4; return;
}

void f_0040fce3(void)
{
    FN_ENTER(0x0040fce3);
    /* 0040fce3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fce5: jb 0x40fd01 */ if (fC) goto L_0040fd01;
L_0040fce7:; BB(0x0040fce7);
    /* 0040fce7: mov ecx, dword ptr [0xa3af70] */ r_ecx = R32((u32)(0xa3af70u));
    /* 0040fced: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fcef: je 0x40fcfa */ if (fZ) goto L_0040fcfa;
L_0040fcf1:; BB(0x0040fcf1);
    /* 0040fcf1: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0040fcf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fcf5: call 0x40fd04 */ r_esp -= 4; W32(r_esp, 0x40fcfau); f_0040fd04();
L_0040fcfa:; BB(0x0040fcfa);
    /* 0040fcfa: mov dword ptr [edi + 0x1c], 2 */ W32((u32)(r_edi+0x1cu), 0x2u);
L_0040fd01:; BB(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fce3); r_esp += 4; return;
}

void f_0040fd01(void)
{
    FN_ENTER(0x0040fd01);
    /* 0040fd01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040fd02: ret  */ FN_RET(0x0040fd01); r_esp += 4; return;
}

void f_0040fd04(void) /* sub_40FD04 */
{
    FN_ENTER(0x0040fd04);
    /* 0040fd04: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040fd08: fld dword ptr [0x8fa4dc] */ FPUSH(R_F32((u32)(0x8fa4dcu)));
    /* 0040fd0e: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0040fd10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fd12: fld dword ptr [0x8fa4e0] */ FPUSH(R_F32((u32)(0x8fa4e0u)));
    /* 0040fd18: fld dword ptr [0x8fa4e4] */ FPUSH(R_F32((u32)(0x8fa4e4u)));
    /* 0040fd1e: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040fd21: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0040fd24: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0040fd27: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0040fd2a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0040fd2c: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0040fd2e: fst dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0));
    /* 0040fd31: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0040fd33: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040fd35: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040fd37: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0040fd3a: fst dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0));
    /* 0040fd3d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040fd3f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0040fd41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040fd43: fstp dword ptr [ecx + 0x5c] */ W_F32((u32)(r_ecx+0x5cu), ST(0)); FPOP();
    /* 0040fd46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040fd48: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0040fd4a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040fd4c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040fd4e: fstp dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0)); FPOP();
    /* 0040fd51: mov dword ptr [ecx + 0x74], 1 */ W32((u32)(r_ecx+0x74u), 0x1u);
    /* 0040fd58: ret 4 */ FN_RET(0x0040fd04); r_esp += 8; return;
}

void f_0040fd5c(void) /* sub_40FD5C */
{
    FN_ENTER(0x0040fd5c);
    /* 0040fd5c: mov ecx, dword ptr [0xa3af6c] */ r_ecx = R32((u32)(0xa3af6cu));
    /* 0040fd62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fd64: je 0x40fd75 */ if (fZ) goto L_0040fd75;
L_0040fd66:; BB(0x0040fd66);
    /* 0040fd66: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x40fd6bu); f_00829de0();
    /* 0040fd6b: mov dword ptr [0xa3af6c], 0 */ W32((u32)(0xa3af6cu), 0x0u);
L_0040fd75:; BB(0x0040fd75);
    /* 0040fd75: ret  */ FN_RET(0x0040fd5c); r_esp += 4; return;
}

void f_0040fd78(void) /* sub_40FD78 */
{
    FN_ENTER(0x0040fd78);
    /* 0040fd78: mov eax, 0x9a31dc */ r_eax = 0x9a31dcu;
    /* 0040fd7d: mov dword ptr [0xa3af6c], eax */ W32((u32)(0xa3af6cu), r_eax);
    /* 0040fd82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd83: push 0x8fa4e8 */ { u32 v = 0x8fa4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd88: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x40fd8du); f_0081a934();
    /* 0040fd8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040fd90: ret  */ FN_RET(0x0040fd78); r_esp += 4; return;
}

void f_0040fd94(void) /* sub_40FD94 */
{
    FN_ENTER(0x0040fd94);
    /* 0040fd94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fd95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040fd97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040fd99: call 0x40fdb8 */ r_esp -= 4; W32(r_esp, 0x40fd9eu); f_0040fdb8();
    /* 0040fd9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040fda2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040fda4: jne 0x40fdaa */ if (!fZ) goto L_0040fdaa;
L_0040fda6:; BB(0x0040fda6);
    /* 0040fda6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040fda7: ret 4 */ FN_RET(0x0040fd94); r_esp += 8; return;
L_0040fdaa:; BB(0x0040fdaa);
    /* 0040fdaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fdab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40fdb0u); f_005c2f74();
    /* 0040fdb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040fdb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040fdb2: ret 4 */ FN_RET(0x0040fd94); r_esp += 8; return;
}

void f_0040fdb8(void) /* sub_40FDB8 */
{
    FN_ENTER(0x0040fdb8);
    /* 0040fdb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fdb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fdbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040fdbd: push 0x8cca24 */ { u32 v = 0x8cca24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fdc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040fdc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fdc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040fdd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040fdd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040fdd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040fdd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040fddc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040fddf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040fde2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040fde5: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0040fde8: mov dword ptr [ecx], 0xaf2dc8 */ W32((u32)(r_ecx), 0xaf2dc8u);
    /* 0040fdee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fdf0: je 0x40fe09 */ if (fZ) goto L_0040fe09;
L_0040fdf2:; BB(0x0040fdf2);
    /* 0040fdf2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040fdf5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040fdf9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040fdfe: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040fe02: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
L_0040fe09:; BB(0x0040fe09);
    /* 0040fe09: mov eax, dword ptr [0xa3af94] */ r_eax = R32((u32)(0xa3af94u));
    /* 0040fe0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe10: je 0x40fe1c */ if (fZ) goto L_0040fe1c;
L_0040fe12:; BB(0x0040fe12);
    /* 0040fe12: mov dword ptr [0xa3af94], 0 */ W32((u32)(0xa3af94u), 0x0u);
L_0040fe1c:; BB(0x0040fe1c);
    /* 0040fe1c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040fe23: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40fe28u); f_008171e8();
    /* 0040fe28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040fe2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040fe32: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fe34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fe35: ret  */ FN_RET(0x0040fdb8); r_esp += 4; return;
}

void f_0040fe38(void) /* sub_40FE38 */
{
    FN_ENTER(0x0040fe38);
    /* 0040fe38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe39: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040fe3f: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 0040fe46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe47: mov ecx, dword ptr [esp + 0xc0] */ r_ecx = R32((u32)(r_esp+0xc0u));
    /* 0040fe4e: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x40fe53u); f_00710f80();
    /* 0040fe53: mov eax, dword ptr [0xa3af98] */ r_eax = R32((u32)(0xa3af98u));
    /* 0040fe58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe5a: je 0x40ff2f */ if (fZ) goto L_0040ff2f;
L_0040fe60:; BB(0x0040fe60);
    /* 0040fe60: mov edx, dword ptr [eax + 0x4c8] */ r_edx = R32((u32)(r_eax+0x4c8u));
    /* 0040fe66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe68: jne 0x40ff2f */ if (!fZ) goto L_0040ff2f;
L_0040fe6e:; BB(0x0040fe6e);
    /* 0040fe6e: mov edx, dword ptr [0xa3afa4] */ r_edx = R32((u32)(0xa3afa4u));
    /* 0040fe74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe76: je 0x40ff2f */ if (fZ) goto L_0040ff2f;
L_0040fe7c:; BB(0x0040fe7c);
    /* 0040fe7c: lea ecx, [eax + 0x4b0] */ r_ecx = (u32)(r_eax+0x4b0u);
    /* 0040fe82: mov eax, dword ptr [eax + 0x4b0] */ r_eax = R32((u32)(r_eax+0x4b0u));
    /* 0040fe88: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040fe8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe8d: je 0x40ff2f */ if (fZ) goto L_0040ff2f;
L_0040fe93:; BB(0x0040fe93);
    /* 0040fe93: fld dword ptr [0x9a321c] */ FPUSH(R_F32((u32)(0x9a321cu)));
    /* 0040fe99: fld dword ptr [0x9a3220] */ FPUSH(R_F32((u32)(0x9a3220u)));
    /* 0040fe9f: fld dword ptr [0x9a3224] */ FPUSH(R_F32((u32)(0x9a3224u)));
    /* 0040fea5: fld dword ptr [0x9a3228] */ FPUSH(R_F32((u32)(0x9a3228u)));
    /* 0040feab: mov eax, dword ptr [0x9a322c] */ r_eax = R32((u32)(0x9a322cu));
    /* 0040feb0: mov edx, dword ptr [0x9a3230] */ r_edx = R32((u32)(0x9a3230u));
    /* 0040feb6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0040feba: mov eax, dword ptr [0x9a3234] */ r_eax = R32((u32)(0x9a3234u));
    /* 0040febf: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0040fec3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040fec7: mov eax, dword ptr [0x9a3238] */ r_eax = R32((u32)(0x9a3238u));
    /* 0040fecc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0040fed0: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0040fed5: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 0040fedc: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0040fede: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 0040fee5: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0040fee7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040feeb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0040feed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040feef: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0040fef3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040fef5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0040fef7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040fefb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040fefd: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0040ff01: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x40ff06u); f_00829cc8();
    /* 0040ff06: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040ff0b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40ff10u); f_0082bb30();
    /* 0040ff10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ff12: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040ff17: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40ff1cu); f_0082bb60();
    /* 0040ff1c: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff21: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0040ff25: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40ff2au); f_0082b440();
    /* 0040ff2a: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x40ff2fu); f_004ac444();
L_0040ff2f:; BB(0x0040ff2f);
    /* 0040ff2f: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0040ff33: call 0x410140 */ r_esp -= 4; W32(r_esp, 0x40ff38u); f_00410140();
    /* 0040ff38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff3a: mov eax, 1 */ r_eax = 0x1u;
    /* 0040ff3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff41: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff46: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff4c: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x40ff51u); f_0071d484();
    /* 0040ff51: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0040ff56: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 0040ff5d: fld dword ptr [0x9a31ec] */ FPUSH(R_F32((u32)(0x9a31ecu)));
    /* 0040ff63: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040ff65: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 0040ff6c: fld dword ptr [0x9a31f0] */ FPUSH(R_F32((u32)(0x9a31f0u)));
    /* 0040ff72: fld dword ptr [0x9a31f4] */ FPUSH(R_F32((u32)(0x9a31f4u)));
    /* 0040ff78: fld dword ptr [0x9a31f8] */ FPUSH(R_F32((u32)(0x9a31f8u)));
    /* 0040ff7e: fld dword ptr [0x9a31fc] */ FPUSH(R_F32((u32)(0x9a31fcu)));
    /* 0040ff84: fld dword ptr [0x9a3200] */ FPUSH(R_F32((u32)(0x9a3200u)));
    /* 0040ff8a: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0040ff8c: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 0040ff93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040ff95: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0040ff97: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 0040ff9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040ffa0: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0040ffa2: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0040ffa9: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0040ffab: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 0040ffb2: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0040ffb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040ffb6: fstp dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0)); FPOP();
    /* 0040ffbd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040ffbf: fstp dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0)); FPOP();
    /* 0040ffc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffc8: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffca: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40ffcfu); f_00792fe8();
    /* 0040ffcf: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 0040ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffd8: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffdd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffe1: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x40ffe6u); f_0071d58c();
    /* 0040ffe6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffe8: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffea: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40ffefu); f_00792fe8();
    /* 0040ffef: lea edx, [esp + 0xe0] */ r_edx = (u32)(r_esp+0xe0u);
    /* 0040fff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fff8: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fffd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ffff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410001: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410006u); f_0071d58c();
    /* 00410006: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410008: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0041000a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x41000fu); f_00792fe8();
    /* 0041000f: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 00410016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410018: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041001d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041001f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410021: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410026u); f_0071d58c();
    /* 00410026: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410029: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0041002e: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 00410035: fld dword ptr [0x9a3204] */ FPUSH(R_F32((u32)(0x9a3204u)));
    /* 0041003b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041003d: fld dword ptr [0x9a3208] */ FPUSH(R_F32((u32)(0x9a3208u)));
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0040fe38); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0040fe38); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0040fe38); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0040fe38); r_esp += 4; return;
}

void f_0040ffff(void)
{
    FN_ENTER(0x0040ffff);
    /* 0040ffff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410001: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410006u); f_0071d58c();
    /* 00410006: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410008: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0041000a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x41000fu); f_00792fe8();
    /* 0041000f: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 00410016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410018: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041001d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041001f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410021: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410026u); f_0071d58c();
    /* 00410026: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410029: mov eax, dword ptr [0xa3af9c] */ r_eax = R32((u32)(0xa3af9cu));
    /* 0041002e: fld dword ptr [eax*8 + 0x8fa528] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa528u)));
    /* 00410035: fld dword ptr [0x9a3204] */ FPUSH(R_F32((u32)(0x9a3204u)));
    /* 0041003b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041003d: fld dword ptr [0x9a3208] */ FPUSH(R_F32((u32)(0x9a3208u)));
    /* 00410043: fld dword ptr [0x9a320c] */ FPUSH(R_F32((u32)(0x9a320cu)));
    /* 00410049: fld dword ptr [0x9a3210] */ FPUSH(R_F32((u32)(0x9a3210u)));
    /* 0041004f: fld dword ptr [0x9a3214] */ FPUSH(R_F32((u32)(0x9a3214u)));
    /* 00410055: fld dword ptr [0x9a3218] */ FPUSH(R_F32((u32)(0x9a3218u)));
    /* 0041005b: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00410060: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00410062: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00410069: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041006b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0041006d: fld dword ptr [eax*8 + 0x8fa52c] */ FPUSH(R_F32((u32)(r_eax*8+0x8fa52cu)));
    /* 00410074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00410076: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0041007d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0041007f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00410081: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00410088: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041008a: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00410091: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00410093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00410095: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0041009c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041009e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100a0: je 0x410132 */ if (fZ) goto L_00410132;
L_004100a6:; BB(0x004100a6);
    /* 004100a6: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004100ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100ad: jne 0x4100b9 */ if (!fZ) goto L_004100b9;
L_004100af:; BB(0x004100af);
    /* 004100af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100b1: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100b8: ret  */ FN_RET(0x0040ffff); r_esp += 4; return;
L_004100b9:; BB(0x004100b9);
    /* 004100b9: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 004100be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004100c0: jne 0x4100cc */ if (!fZ) goto L_004100cc;
L_004100c2:; BB(0x004100c2);
    /* 004100c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004100c4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004100ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004100cb: ret  */ FN_RET(0x0040ffff); r_esp += 4; return;
L_004100cc:; BB(0x004100cc);
    /* 004100cc: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004100d3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 004100da: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004100de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e0: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 004100e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004100e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004100e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004100e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x4100eeu); f_0071d58c();
    /* 004100ee: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 004100f5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004100f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004100fb: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00410100: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410104: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410109u); f_0071d58c();
    /* 00410109: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 00410110: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 00410117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410119: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041011e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410122: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x410127u); f_0071d58c();
    /* 00410127: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041012a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00410130: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00410131: ret  */ FN_RET(0x0040ffff); r_esp += 4; return;
L_00410132:; BB(0x00410132);
    /* 00410132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00410134: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041013a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041013b: ret  */ FN_RET(0x0040ffff); r_esp += 4; return;
}

