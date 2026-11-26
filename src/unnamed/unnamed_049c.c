#include "protos.h"

void f_0049c020(void) /* sub_49C020 */
{
    FN_ENTER(0x0049c020);
    /* 0049c020: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c021: mov edi, ecx */ r_edi = r_ecx;
    /* 0049c023: mov ecx, dword ptr [edi + 0x428] */ r_ecx = R32((u32)(r_edi+0x428u));
    /* 0049c029: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c02b: je 0x49c04b */ if (fZ) goto L_0049c04b;
L_0049c02d:; BB(0x0049c02d);
    /* 0049c02d: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0049c033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c035: je 0x49c04b */ if (fZ) goto L_0049c04b;
L_0049c037:; BB(0x0049c037);
    /* 0049c037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c039: call 0x48a8d4 */ r_esp -= 4; W32(r_esp, 0x49c03eu); f_0048a8d4();
    /* 0049c03e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c040: mov ecx, dword ptr [edi + 0x42c] */ r_ecx = R32((u32)(r_edi+0x42cu));
    /* 0049c046: call 0x48a8d4 */ r_esp -= 4; W32(r_esp, 0x49c04bu); f_0048a8d4();
L_0049c04b:; BB(0x0049c04b);
    /* 0049c04b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c04c: ret  */ FN_RET(0x0049c020); r_esp += 4; return;
}

void f_0049c050(void) /* sub_49C050 */
{
    FN_ENTER(0x0049c050);
    /* 0049c050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c052: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c053: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c054: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c057: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049c059: call 0x48df64 */ r_esp -= 4; W32(r_esp, 0x49c05eu); f_0048df64();
    /* 0049c05e: mov edx, eax */ r_edx = r_eax;
    /* 0049c060: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049c065: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c067: jle 0x49c1cc */ if ((fZ||fS!=fO)) goto L_0049c1cc;
L_0049c06d:; BB(0x0049c06d);
    /* 0049c06d: mov ecx, dword ptr [ebp + 0x430] */ r_ecx = R32((u32)(r_ebp+0x430u));
    /* 0049c073: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c075: jne 0x49c12b */ if (!fZ) goto L_0049c12b;
L_0049c07b:; BB(0x0049c07b);
    /* 0049c07b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049c07d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c07f: jle 0x49c116 */ if ((fZ||fS!=fO)) goto L_0049c116;
L_0049c085:; BB(0x0049c085);
    /* 0049c085: mov esi, edx */ r_esi = r_edx;
    /* 0049c087: mov edi, ecx */ r_edi = r_ecx;
L_0049c089:; BB(0x0049c089);
    /* 0049c089: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c08a: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49c08fu); f_0048e058();
    /* 0049c08f: mov ebp, eax */ r_ebp = r_eax;
    /* 0049c091: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 0049c094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c095: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49c09au); f_0068d5a8();
    /* 0049c09a: mov edx, eax */ r_edx = r_eax;
    /* 0049c09c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c09f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c0a1: je 0x49c209 */ if (fZ) goto L_0049c209;
L_0049c0a7:; BB(0x0049c0a7);
    /* 0049c0a7: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0049c0aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049c0ac: mov ebx, eax */ r_ebx = r_eax;
    /* 0049c0ae: mov edi, edx */ r_edi = r_edx;
L_0049c0b0:; BB(0x0049c0b0);
    /* 0049c0b0: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0049c0b4: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0049c0b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c0b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c0ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c0bb: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49c0c0u); f_0048fbf8();
    /* 0049c0c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c0c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c0c5: je 0x49c107 */ if (fZ) goto L_0049c107;
L_0049c0c7:; BB(0x0049c0c7);
    /* 0049c0c7: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0049c0cb: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0049c0ce: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0049c0d2: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0049c0d5: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0049c0d9: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0049c0dc: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0049c0e0: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0049c0e4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49c0e9u); f_0082f9c4();
    /* 0049c0e9: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0049c0f1: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0049c0f5: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49c0fau); f_0083173c();
    /* 0049c0fa: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 0049c0fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c100: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c101: jbe 0x49c1d9 */ if ((fC||fZ)) goto L_0049c1d9;
L_0049c107:; BB(0x0049c107);
    /* 0049c107: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049c10a: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c10d: jl 0x49c0b0 */ if ((fS!=fO)) goto L_0049c0b0;
L_0049c10f:; BB(0x0049c10f);
    /* 0049c10f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0049c112: mov eax, ebp */ r_eax = r_ebp;
    /* 0049c114: mov edx, esi */ r_edx = r_esi;
L_0049c116:; BB(0x0049c116);
    /* 0049c116: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c118: jne 0x49c1c4 */ if (!fZ) goto L_0049c1c4;
L_0049c11e:; BB(0x0049c11e);
    /* 0049c11e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049c123: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c126: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c128: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c129: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c12a: ret  */ FN_RET(0x0049c050); r_esp += 4; return;
L_0049c12b:; BB(0x0049c12b);
    /* 0049c12b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049c12e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c130: jl 0x49c1bf */ if ((fS!=fO)) goto L_0049c1bf;
L_0049c136:; BB(0x0049c136);
    /* 0049c136: mov edi, edx */ r_edi = r_edx;
L_0049c138:; BB(0x0049c138);
    /* 0049c138: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c139: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49c13eu); f_0048e058();
    /* 0049c13e: mov ebp, eax */ r_ebp = r_eax;
    /* 0049c140: movzx ecx, bp */ r_ecx = (u32)(u16)r_ebp;
    /* 0049c143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c144: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49c149u); f_0068d5a8();
    /* 0049c149: mov edx, eax */ r_edx = r_eax;
    /* 0049c14b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c14e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c150: je 0x49c1ff */ if (fZ) goto L_0049c1ff;
L_0049c156:; BB(0x0049c156);
    /* 0049c156: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049c158: mov ebx, eax */ r_ebx = r_eax;
    /* 0049c15a: mov esi, edx */ r_esi = r_edx;
L_0049c15c:; BB(0x0049c15c);
    /* 0049c15c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0049c160: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0049c164: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c166: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c167: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49c16cu); f_0048fbf8();
    /* 0049c16c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c16f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c171: je 0x49c1af */ if (fZ) goto L_0049c1af;
L_0049c173:; BB(0x0049c173);
    /* 0049c173: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0049c177: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0049c17a: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0049c17e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0049c181: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0049c185: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0049c188: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0049c18c: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0049c190: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49c195u); f_0082f9c4();
    /* 0049c195: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0049c19d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0049c1a1: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49c1a6u); f_0083173c();
    /* 0049c1a6: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0049c1aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c1ac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c1ad: jbe 0x49c1f2 */ if ((fC||fZ)) goto L_0049c1f2;
L_0049c1af:; BB(0x0049c1af);
    /* 0049c1af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049c1b2: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c1b5: jl 0x49c15c */ if ((fS!=fO)) goto L_0049c15c;
L_0049c1b7:; BB(0x0049c1b7);
    /* 0049c1b7: mov eax, ebp */ r_eax = r_ebp;
    /* 0049c1b9: mov edx, edi */ r_edx = r_edi;
    /* 0049c1bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c1bd: jge 0x49c1c4 */ if ((fS==fO)) goto L_0049c1c4;
L_0049c1bf:; BB(0x0049c1bf);
    /* 0049c1bf: mov eax, 0xffff */ r_eax = 0xffffu;
L_0049c1c4:; BB(0x0049c1c4);
    /* 0049c1c4: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c1c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c1c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c1c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c1ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c1cb: ret  */ FN_RET(0x0049c050); r_esp += 4; return;
L_0049c1cc:; BB(0x0049c1cc);
    /* 0049c1cc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049c1d1: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c1d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c1d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c1d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c1d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c1d8: ret  */ FN_RET(0x0049c050); r_esp += 4; return;
L_0049c1d9:; BB(0x0049c1d9);
    /* 0049c1d9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0049c1dc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049c1df: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c1e1: jl 0x49c089 */ if ((fS!=fO)) goto L_0049c089;
L_0049c1e7:; BB(0x0049c1e7);
    /* 0049c1e7: mov eax, ebp */ r_eax = r_ebp;
    /* 0049c1e9: mov edx, esi */ r_edx = r_esi;
    /* 0049c1eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0049c1ed: jmp 0x49c116 */ goto L_0049c116;
L_0049c1f2:; BB(0x0049c1f2);
    /* 0049c1f2: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049c1f5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c1f7: jge 0x49c138 */ if ((fS==fO)) goto L_0049c138;
L_0049c1fd:; BB(0x0049c1fd);
    /* 0049c1fd: jmp 0x49c1bf */ goto L_0049c1bf;
L_0049c1ff:; BB(0x0049c1ff);
    /* 0049c1ff: mov eax, ebp */ r_eax = r_ebp;
    /* 0049c201: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c204: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c205: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c206: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c207: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c208: ret  */ FN_RET(0x0049c050); r_esp += 4; return;
L_0049c209:; BB(0x0049c209);
    /* 0049c209: mov eax, ebp */ r_eax = r_ebp;
    /* 0049c20b: mov edx, esi */ r_edx = r_esi;
    /* 0049c20d: mov ecx, edi */ r_ecx = r_edi;
    /* 0049c20f: jmp 0x49c116 */ goto L_0049c116;
}

void f_0049c214(void) /* sub_49C214 */
{
    FN_ENTER(0x0049c214);
    /* 0049c214: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c215: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c216: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c217: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c218: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c21e: mov esi, dword ptr [esp + 0xb4] */ r_esi = R32((u32)(r_esp+0xb4u));
    /* 0049c225: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0049c22a: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 0049c230: call 0x48e12c */ r_esp -= 4; W32(r_esp, 0x49c235u); f_0048e12c();
    /* 0049c235: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c238: jne 0x49c23f */ if (!fZ) goto L_0049c23f;
L_0049c23a:; BB(0x0049c23a);
    /* 0049c23a: mov ebp, 4 */ r_ebp = 0x4u;
L_0049c23f:; BB(0x0049c23f);
    /* 0049c23f: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0049c241: lea ebx, [ebp + 4] */ r_ebx = (u32)(r_ebp+0x4u);
    /* 0049c244: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c246: je 0x49c24c */ if (fZ) goto L_0049c24c;
L_0049c248:; BB(0x0049c248);
    /* 0049c248: lea ebx, [ebp + ebp + 8] */ r_ebx = (u32)(r_ebp+r_ebp+0x8u);
L_0049c24c:; BB(0x0049c24c);
    /* 0049c24c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c24e: jg 0x49c25d */ if ((!fZ&&fS==fO)) goto L_0049c25d;
L_0049c250:; BB(0x0049c250);
    /* 0049c250: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c256: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c258: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c259: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c25a: ret 4 */ FN_RET(0x0049c214); r_esp += 8; return;
L_0049c25d:; BB(0x0049c25d);
    /* 0049c25d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0049c25f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0049c261:; BB(0x0049c261);
    /* 0049c261: mov dword ptr [esp + edi*4 + 0x20], 0 */ W32((u32)(r_esp+r_edi*4+0x20u), 0x0u);
    /* 0049c269: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c26a: call 0x4900e4 */ r_esp -= 4; W32(r_esp, 0x49c26fu); f_004900e4();
    /* 0049c26f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049c270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c272: jne 0x49c27f */ if (!fZ) goto L_0049c27f;
L_0049c274:; BB(0x0049c274);
    /* 0049c274: mov dword ptr [esp + edi*4 + 0x20], 1 */ W32((u32)(r_esp+r_edi*4+0x20u), 0x1u);
    /* 0049c27c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0049c27f:; BB(0x0049c27f);
    /* 0049c27f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049c282: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c285: jl 0x49c261 */ if ((fS!=fO)) goto L_0049c261;
L_0049c287:; BB(0x0049c287);
    /* 0049c287: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c289: jle 0x49c349 */ if ((fZ||fS!=fO)) goto L_0049c349;
L_0049c28f:; BB(0x0049c28f);
    /* 0049c28f: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c291: jl 0x49c295 */ if ((fS!=fO)) goto L_0049c295;
L_0049c293:; BB(0x0049c293);
    /* 0049c293: mov ebp, ebx */ r_ebp = r_ebx;
L_0049c295:; BB(0x0049c295);
    /* 0049c295: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0049c299: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049c29b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c29c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x49c2a1u); f_008581c5();
    /* 0049c2a1: mov ebx, eax */ r_ebx = r_eax;
    /* 0049c2a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c2a6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49c2abu); f_008587a5();
    /* 0049c2ab: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049c2ae: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049c2b1: fdiv dword ptr [0x9034bc] */ ST(0) = ST(0) / R_F32((u32)(0x9034bcu));
    /* 0049c2b7: fmul dword ptr [0x9034c0] */ ST(0) = ST(0) * R_F32((u32)(0x9034c0u));
    /* 0049c2bd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0049c2bf: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0049c2c3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0049c2c8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c2cd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049c2d1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0049c2d5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049c2d9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049c2dd: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049c2e1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c2e3: jle 0x49c325 */ if ((fZ||fS!=fO)) goto L_0049c325;
L_0049c2e5:; BB(0x0049c2e5);
    /* 0049c2e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049c2e7: lea edx, [ebx + ebp*4] */ r_edx = (u32)(r_ebx+r_ebp*4);
L_0049c2ea:; BB(0x0049c2ea);
    /* 0049c2ea: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049c2ec: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c2ef: jl 0x49c2f3 */ if ((fS!=fO)) goto L_0049c2f3;
L_0049c2f1:; BB(0x0049c2f1);
    /* 0049c2f1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0049c2f3:; BB(0x0049c2f3);
    /* 0049c2f3: mov esi, dword ptr [esp + edi*4 + 0x20] */ r_esi = R32((u32)(r_esp+r_edi*4+0x20u));
    /* 0049c2f7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c2f9: jne 0x49c30d */ if (!fZ) goto L_0049c30d;
L_0049c2fb:; BB(0x0049c2fb);
    /* 0049c2fb: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049c2fe: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c301: jl 0x49c305 */ if ((fS!=fO)) goto L_0049c305;
L_0049c303:; BB(0x0049c303);
    /* 0049c303: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0049c305:; BB(0x0049c305);
    /* 0049c305: mov esi, dword ptr [esp + edi*4 + 0x20] */ r_esi = R32((u32)(r_esp+r_edi*4+0x20u));
    /* 0049c309: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c30b: je 0x49c2fb */ if (fZ) goto L_0049c2fb;
L_0049c30d:; BB(0x0049c30d);
    /* 0049c30d: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 0049c30f: mov dword ptr [esp + edi*4 + 0x20], 0 */ W32((u32)(r_esp+r_edi*4+0x20u), 0x0u);
    /* 0049c317: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049c31a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049c31c: jb 0x49c2ea */ if (fC) goto L_0049c2ea;
L_0049c31e:; BB(0x0049c31e);
    /* 0049c31e: mov esi, dword ptr [esp + 0xb4] */ r_esi = R32((u32)(r_esp+0xb4u));
L_0049c325:; BB(0x0049c325);
    /* 0049c325: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c326: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c327: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c328: call 0x48cd08 */ r_esp -= 4; W32(r_esp, 0x49c32du); f_0048cd08();
    /* 0049c32d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c32e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x49c333u); f_00857e98();
    /* 0049c333: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c337: push 0x903310 */ { u32 v = 0x903310u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c33c: push 0x5ad */ { u32 v = 0x5adu; r_esp -= 4; W32(r_esp, v); }
    /* 0049c341: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c346u); f_00814298();
    /* 0049c346: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049c349:; BB(0x0049c349);
    /* 0049c349: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c34f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c351: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c352: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c353: ret 4 */ FN_RET(0x0049c214); r_esp += 8; return;
}

void f_0049c358(void) /* sub_49C358 */
{
    FN_ENTER(0x0049c358);
    /* 0049c358: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c359: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c35a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c35b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c35c: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c35f: mov eax, ecx */ r_eax = r_ecx;
    /* 0049c361: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0049c363: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049c365: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0049c36b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049c36d: jle 0x49c482 */ if ((fZ||fS!=fO)) goto L_0049c482;
L_0049c373:; BB(0x0049c373);
    /* 0049c373: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0049c377: mov esi, edx */ r_esi = r_edx;
    /* 0049c379: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_0049c37d:; BB(0x0049c37d);
    /* 0049c37d: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0049c384: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c385: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x49c38au); f_0048e100();
    /* 0049c38a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049c38b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c38d: je 0x49c466 */ if (fZ) goto L_0049c466;
L_0049c393:; BB(0x0049c393);
    /* 0049c393: movzx eax, byte ptr [0xa473c0] */ r_eax = (u32)R8((u32)(0xa473c0u));
    /* 0049c39a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049c39c: jne 0x49c3b2 */ if (!fZ) goto L_0049c3b2;
L_0049c39e:; BB(0x0049c39e);
    /* 0049c39e: mov dword ptr [0xa473c4], 0x42200000 */ W32((u32)(0xa473c4u), 0x42200000u);
    /* 0049c3a8: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c3ad: mov byte ptr [0xa473c0], al */ W8((u32)(0xa473c0u), (u8)r_eax);
L_0049c3b2:; BB(0x0049c3b2);
    /* 0049c3b2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49c3b7u); f_008587a5();
    /* 0049c3b7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0049c3bb: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0049c3bf: fdiv dword ptr [0x9034b4] */ ST(0) = ST(0) / R_F32((u32)(0x9034b4u));
    /* 0049c3c5: fmul dword ptr [0xa473c4] */ ST(0) = ST(0) * R_F32((u32)(0xa473c4u));
    /* 0049c3cb: fadd dword ptr [0x903054] */ ST(0) = ST(0) + R_F32((u32)(0x903054u));
    /* 0049c3d1: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0049c3d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49c3dau); f_008587a5();
    /* 0049c3da: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0049c3de: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0049c3e2: fdiv dword ptr [0x9034b4] */ ST(0) = ST(0) / R_F32((u32)(0x9034b4u));
    /* 0049c3e8: fmul dword ptr [0x9034b0] */ ST(0) = ST(0) * R_F32((u32)(0x9034b0u));
    /* 0049c3ee: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0049c3f2: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0049c3f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c3fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0049c400: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0049c404: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049c408: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0049c40c: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0049c40f: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0049c413: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049c416: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0049c419: mov edi, dword ptr [edi + 0x40] */ r_edi = R32((u32)(r_edi+0x40u));
    /* 0049c41c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0049c420: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049c422: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0049c426: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x49c42bu); f_0082dcbc();
    /* 0049c42b: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 0049c42f: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0049c432: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049c435: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0049c43d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049c43f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x49c444u); f_0082ddd8();
    /* 0049c444: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0049c448: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049c44a: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0049c44e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0049c452: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049c455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c456: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0049c45a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c45b: call 0x4909b8 */ r_esp -= 4; W32(r_esp, 0x49c460u); f_004909b8();
    /* 0049c460: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c463: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0049c466:; BB(0x0049c466);
    /* 0049c466: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0049c46a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049c46d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c46f: jl 0x49c37d */ if ((fS!=fO)) goto L_0049c37d;
L_0049c475:; BB(0x0049c475);
    /* 0049c475: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0049c479: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c47c: jge 0x49c50c */ if ((fS==fO)) goto L_0049c50c;
L_0049c482:; BB(0x0049c482);
    /* 0049c482: mov esi, eax */ r_esi = r_eax;
L_0049c484:; BB(0x0049c484);
    /* 0049c484: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49c489u); f_008587a5();
    /* 0049c489: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0049c48d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0049c491: fdiv dword ptr [0x9034b4] */ ST(0) = ST(0) / R_F32((u32)(0x9034b4u));
    /* 0049c497: fmul dword ptr [0x9034a4] */ ST(0) = ST(0) * R_F32((u32)(0x9034a4u));
    /* 0049c49d: fadd dword ptr [0x9034a8] */ ST(0) = ST(0) + R_F32((u32)(0x9034a8u));
    /* 0049c4a3: fmul dword ptr [0x903050] */ ST(0) = ST(0) * R_F32((u32)(0x903050u));
    /* 0049c4a9: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0049c4ad: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49c4b2u); f_008587a5();
    /* 0049c4b2: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0049c4b6: fadd dword ptr [0x903310] */ ST(0) = ST(0) + R_F32((u32)(0x903310u));
    /* 0049c4bc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0049c4c0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0049c4c8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0049c4cc: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0049c4d0: fdiv dword ptr [0x9034b4] */ ST(0) = ST(0) / R_F32((u32)(0x9034b4u));
    /* 0049c4d6: fmul dword ptr [0x9034a4] */ ST(0) = ST(0) * R_F32((u32)(0x9034a4u));
    /* 0049c4dc: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0049c4e0: fadd dword ptr [0x9034a8] */ ST(0) = ST(0) + R_F32((u32)(0x9034a8u));
    /* 0049c4e6: fmul dword ptr [0x903050] */ ST(0) = ST(0) * R_F32((u32)(0x903050u));
    /* 0049c4ec: fadd dword ptr [0x903318] */ ST(0) = ST(0) + R_F32((u32)(0x903318u));
    /* 0049c4f2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049c4f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c4f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c4f8: call 0x4909b8 */ r_esp -= 4; W32(r_esp, 0x49c4fdu); f_004909b8();
    /* 0049c4fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c500: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049c503: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c506: jl 0x49c484 */ if ((fS!=fO)) goto L_0049c484;
L_0049c50c:; BB(0x0049c50c);
    /* 0049c50c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c50e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c510: push 0x903310 */ { u32 v = 0x903310u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c515: push 0x5ad */ { u32 v = 0x5adu; r_esp -= 4; W32(r_esp, v); }
    /* 0049c51a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c51fu); f_00814298();
    /* 0049c51f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c522: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c523: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c524: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c525: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c526: ret  */ FN_RET(0x0049c358); r_esp += 4; return;
}

void f_0049c528(void) /* sub_49C528 */
{
    FN_ENTER(0x0049c528);
    /* 0049c528: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c529: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049c52b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0049c52e: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c534: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c535: call 0x4868cc */ r_esp -= 4; W32(r_esp, 0x49c53au); f_004868cc();
    /* 0049c53a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c53d: mov ecx, dword ptr [ebp + 0x428] */ r_ecx = R32((u32)(r_ebp+0x428u));
    /* 0049c543: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c545: je 0x49c568 */ if (fZ) goto L_0049c568;
L_0049c547:; BB(0x0049c547);
    /* 0049c547: call 0x489370 */ r_esp -= 4; W32(r_esp, 0x49c54cu); f_00489370();
    /* 0049c54c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c54e: je 0x49c568 */ if (fZ) goto L_0049c568;
L_0049c550:; BB(0x0049c550);
    /* 0049c550: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c555: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 0049c55b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049c55e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c55f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c560: call 0x4868cc */ r_esp -= 4; W32(r_esp, 0x49c565u); f_004868cc();
    /* 0049c565: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049c568:; BB(0x0049c568);
    /* 0049c568: mov ecx, dword ptr [ebp + 0x42c] */ r_ecx = R32((u32)(r_ebp+0x42cu));
    /* 0049c56e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c570: je 0x49c593 */ if (fZ) goto L_0049c593;
L_0049c572:; BB(0x0049c572);
    /* 0049c572: call 0x489370 */ r_esp -= 4; W32(r_esp, 0x49c577u); f_00489370();
    /* 0049c577: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c579: je 0x49c593 */ if (fZ) goto L_0049c593;
L_0049c57b:; BB(0x0049c57b);
    /* 0049c57b: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c580: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0049c586: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049c589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c58a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c58b: call 0x4868cc */ r_esp -= 4; W32(r_esp, 0x49c590u); f_004868cc();
    /* 0049c590: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0049c593:; BB(0x0049c593);
    /* 0049c593: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c594: ret  */ FN_RET(0x0049c528); r_esp += 4; return;
}

void f_0049c598(void) /* sub_49C598 */
{
    FN_ENTER(0x0049c598);
    /* 0049c598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c599: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c59a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c59b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c59c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c59f: mov edi, ecx */ r_edi = r_ecx;
    /* 0049c5a1: movzx eax, byte ptr [0xa473c8] */ r_eax = (u32)R8((u32)(0xa473c8u));
    /* 0049c5a8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049c5aa: jne 0x49c5be */ if (!fZ) goto L_0049c5be;
L_0049c5ac:; BB(0x0049c5ac);
    /* 0049c5ac: mov dword ptr [0xa473cc], 0x1b4 */ W32((u32)(0xa473ccu), 0x1b4u);
    /* 0049c5b6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c5b9: mov byte ptr [0xa473c8], al */ W8((u32)(0xa473c8u), (u8)r_eax);
L_0049c5be:; BB(0x0049c5be);
    /* 0049c5be: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049c5c0: jne 0x49c5d6 */ if (!fZ) goto L_0049c5d6;
L_0049c5c2:; BB(0x0049c5c2);
    /* 0049c5c2: mov dword ptr [0xa473d0], 0x369 */ W32((u32)(0xa473d0u), 0x369u);
    /* 0049c5cc: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c5d1: mov byte ptr [0xa473c8], al */ W8((u32)(0xa473c8u), (u8)r_eax);
L_0049c5d6:; BB(0x0049c5d6);
    /* 0049c5d6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049c5d9: mov eax, dword ptr [edi + 0x49c] */ r_eax = R32((u32)(r_edi+0x49cu));
    /* 0049c5df: mov ebx, dword ptr [edi + 0x4a0] */ r_ebx = R32((u32)(r_edi+0x4a0u));
    /* 0049c5e5: mov ebp, dword ptr [edi + 0x4a4] */ r_ebp = R32((u32)(r_edi+0x4a4u));
    /* 0049c5eb: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0049c5ee: mov edx, esi */ r_edx = r_esi;
    /* 0049c5f0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049c5f3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0049c5f7: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0049c5fb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49c600u); f_0082f9c4();
    /* 0049c600: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0049c608: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049c60b: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49c610u); f_0083173c();
    /* 0049c610: fcom dword ptr [0x903068] */ fx_compare(ST(0), R_F32((u32)(0x903068u))); 
    /* 0049c616: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c618: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c619: jb 0x49c6d6 */ if (fC) goto L_0049c6d6;
L_0049c61f:; BB(0x0049c61f);
    /* 0049c61f: fcomp dword ptr [0x903064] */ fx_compare(ST(0), R_F32((u32)(0x903064u))); FPOP();
    /* 0049c625: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c627: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c628: jbe 0x49c6c9 */ if ((fC||fZ)) goto L_0049c6c9;
L_0049c62e:; BB(0x0049c62e);
    /* 0049c62e: mov ebp, dword ptr [0xa473cc] */ r_ebp = R32((u32)(0xa473ccu));
    /* 0049c634: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0049c63a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c63c: je 0x49c644 */ if (fZ) goto L_0049c644;
L_0049c63e:; BB(0x0049c63e);
    /* 0049c63e: mov ebp, dword ptr [0xa473d0] */ r_ebp = R32((u32)(0xa473d0u));
L_0049c644:; BB(0x0049c644);
    /* 0049c644: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0049c647: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0049c64b: mov ebx, dword ptr [edi + 0x60] */ r_ebx = R32((u32)(r_edi+0x60u));
    /* 0049c64e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0049c650: fmul qword ptr [0x9032d8] */ ST(0) = ST(0) * R_F64((u32)(0x9032d8u));
    /* 0049c656: fdiv qword ptr [0x9032d0] */ ST(0) = ST(0) / R_F64((u32)(0x9032d0u));
    /* 0049c65c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0049c660: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0049c665: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c66a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049c66e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0049c672: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0049c676: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0049c67a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0049c67e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c67f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c680: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c681: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x49c686u); f_007a8c74();
    /* 0049c686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c687: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c688: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0049c68b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x49c690u); f_007a9018();
    /* 0049c690: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c693: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c695: jne 0x49c6bf */ if (!fZ) goto L_0049c6bf;
L_0049c697:; BB(0x0049c697);
    /* 0049c697: mov eax, dword ptr [edi + 0x520] */ r_eax = R32((u32)(r_edi+0x520u));
    /* 0049c69d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c69f: jne 0x49c6c9 */ if (!fZ) goto L_0049c6c9;
L_0049c6a1:; BB(0x0049c6a1);
    /* 0049c6a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049c6a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c6a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c6a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c6a6: push 0x592 */ { u32 v = 0x592u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c6ab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49c6b0u); f_00814298();
    /* 0049c6b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049c6b3: mov dword ptr [edi + 0x520], 1 */ W32((u32)(r_edi+0x520u), 0x1u);
    /* 0049c6bd: jmp 0x49c6c9 */ goto L_0049c6c9;
L_0049c6bf:; BB(0x0049c6bf);
    /* 0049c6bf: mov dword ptr [edi + 0x520], 0 */ W32((u32)(r_edi+0x520u), 0x0u);
L_0049c6c9:; BB(0x0049c6c9);
    /* 0049c6c9: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c6ce: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c6d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c6d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c6d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c6d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c6d5: ret  */ FN_RET(0x0049c598); r_esp += 4; return;
L_0049c6d6:; BB(0x0049c6d6);
    /* 0049c6d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049c6d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049c6da: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c6dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c6de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c6df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c6e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049c6e1: ret  */ FN_RET(0x0049c598); r_esp += 4; return;
}

void f_0049c6e4(void) /* sub_49C6E4 */
{
    FN_ENTER(0x0049c6e4);
    /* 0049c6e4: mov eax, dword ptr [ecx + 0x43c] */ r_eax = R32((u32)(r_ecx+0x43cu));
    /* 0049c6ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c6ec: jne 0x49c70e */ if (!fZ) goto L_0049c70e;
L_0049c6ee:; BB(0x0049c6ee);
    /* 0049c6ee: fld dword ptr [ecx + 0x518] */ FPUSH(R_F32((u32)(r_ecx+0x518u)));
    /* 0049c6f4: fcomp dword ptr [0x90306c] */ fx_compare(ST(0), R_F32((u32)(0x90306cu))); FPOP();
    /* 0049c6fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c6fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c6fd: jae 0x49c70e */ if (!fC) goto L_0049c70e;
L_0049c6ff:; BB(0x0049c6ff);
    /* 0049c6ff: mov dword ptr [ecx + 0x43c], 1 */ W32((u32)(r_ecx+0x43cu), 0x1u);
    /* 0049c709: call 0x49c710 */ r_esp -= 4; W32(r_esp, 0x49c70eu); f_0049c710();
L_0049c70e:; BB(0x0049c70e);
    /* 0049c70e: ret  */ FN_RET(0x0049c6e4); r_esp += 4; return;
}

void f_0049c710(void) /* sub_49C710 */
{
    FN_ENTER(0x0049c710);
    /* 0049c710: fld dword ptr [0x903334] */ FPUSH(R_F32((u32)(0x903334u)));
    /* 0049c716: mov eax, dword ptr [ecx + 0x43c] */ r_eax = R32((u32)(r_ecx+0x43cu));
    /* 0049c71c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c71e: je 0x49c732 */ if (fZ) goto L_0049c732;
L_0049c720:; BB(0x0049c720);
    /* 0049c720: fld dword ptr [ecx + 0x4f8] */ FPUSH(R_F32((u32)(r_ecx+0x4f8u)));
    /* 0049c726: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0049c728: fld dword ptr [ecx + 0x4fc] */ FPUSH(R_F32((u32)(r_ecx+0x4fcu)));
    /* 0049c72e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0049c730: jmp 0x49c742 */ goto L_0049c742;
L_0049c732:; BB(0x0049c732);
    /* 0049c732: fld dword ptr [ecx + 0x4f0] */ FPUSH(R_F32((u32)(r_ecx+0x4f0u)));
    /* 0049c738: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0049c73a: fld dword ptr [ecx + 0x4f4] */ FPUSH(R_F32((u32)(r_ecx+0x4f4u)));
    /* 0049c740: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
L_0049c742:; BB(0x0049c742);
    /* 0049c742: fst dword ptr [0x9a74ac] */ W_F32((u32)(0x9a74acu), ST(0));
    /* 0049c748: fstp dword ptr [0x9a74bc] */ W_F32((u32)(0x9a74bcu), ST(0)); FPOP();
    /* 0049c74e: fstp dword ptr [0x9a756c] */ W_F32((u32)(0x9a756cu), ST(0)); FPOP();
    /* 0049c754: ret  */ FN_RET(0x0049c710); r_esp += 4; return;
}

void f_0049c758(void) /* sub_49C758 */
{
    FN_ENTER(0x0049c758);
    /* 0049c758: mov eax, dword ptr [ecx + 0x488] */ r_eax = R32((u32)(r_ecx+0x488u));
    /* 0049c75e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049c761: jl 0x49c769 */ if ((fS!=fO)) goto L_0049c769;
L_0049c763:; BB(0x0049c763);
    /* 0049c763: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c768: ret  */ FN_RET(0x0049c758); r_esp += 4; return;
L_0049c769:; BB(0x0049c769);
    /* 0049c769: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049c76c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c76d: call 0x48e998 */ r_esp -= 4; W32(r_esp, 0x49c772u); f_0048e998();
    /* 0049c772: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049c773: fcomp dword ptr [0x903070] */ fx_compare(ST(0), R_F32((u32)(0x903070u))); FPOP();
    /* 0049c779: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c77b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c77c: jb 0x49c784 */ if (fC) goto L_0049c784;
L_0049c77e:; BB(0x0049c77e);
    /* 0049c77e: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c783: ret  */ FN_RET(0x0049c758); r_esp += 4; return;
L_0049c784:; BB(0x0049c784);
    /* 0049c784: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c786: ret  */ FN_RET(0x0049c758); r_esp += 4; return;
}

void f_0049c788(void) /* sub_49C788 */
{
    FN_ENTER(0x0049c788);
    /* 0049c788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c789: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c78c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049c78e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0049c790:; BB(0x0049c790);
    /* 0049c790: mov ebp, dword ptr [ecx + eax*4 + 0x380] */ r_ebp = R32((u32)(r_ecx+r_eax*4+0x380u));
    /* 0049c797: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049c79a: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c79d: jne 0x49c7a2 */ if (!fZ) goto L_0049c7a2;
L_0049c79f:; BB(0x0049c79f);
    /* 0049c79f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0049c7a2:; BB(0x0049c7a2);
    /* 0049c7a2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c7a5: jl 0x49c790 */ if ((fS!=fO)) goto L_0049c790;
L_0049c7a7:; BB(0x0049c7a7);
    /* 0049c7a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c7a9: je 0x49c7b2 */ if (fZ) goto L_0049c7b2;
L_0049c7ab:; BB(0x0049c7ab);
    /* 0049c7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049c7ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c7b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c7b1: ret  */ FN_RET(0x0049c788); r_esp += 4; return;
L_0049c7b2:; BB(0x0049c7b2);
    /* 0049c7b2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0049c7b5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0049c7b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0049c7bb:; BB(0x0049c7bb);
    /* 0049c7bb: mov ebp, dword ptr [eax + 0x903074] */ r_ebp = R32((u32)(r_eax+0x903074u));
    /* 0049c7c1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0049c7c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049c7c5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0049c7c8:; BB(0x0049c7c8);
    /* 0049c7c8: mov edi, dword ptr [ecx + edx*4 + 0x380] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x380u));
    /* 0049c7cf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049c7d2: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c7d4: jne 0x49c7d9 */ if (!fZ) goto L_0049c7d9;
L_0049c7d6:; BB(0x0049c7d6);
    /* 0049c7d6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0049c7d9:; BB(0x0049c7d9);
    /* 0049c7d9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c7dc: jl 0x49c7c8 */ if ((fS!=fO)) goto L_0049c7c8;
L_0049c7de:; BB(0x0049c7de);
    /* 0049c7de: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c7e0: jne 0x49c806 */ if (!fZ) goto L_0049c806;
L_0049c7e2:; BB(0x0049c7e2);
    /* 0049c7e2: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c7e5: jl 0x49c7bb */ if ((fS!=fO)) goto L_0049c7bb;
L_0049c7e7:; BB(0x0049c7e7);
    /* 0049c7e7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049c7ea: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049c7ee: mov eax, dword ptr [ecx + 0x50c] */ r_eax = R32((u32)(r_ecx+0x50cu));
    /* 0049c7f4: cmp eax, dword ptr [ecx + 0x4d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049c7fa: jl 0x49c7ab */ if ((fS!=fO)) goto L_0049c7ab;
L_0049c7fc:; BB(0x0049c7fc);
    /* 0049c7fc: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c801: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c805: ret  */ FN_RET(0x0049c788); r_esp += 4; return;
L_0049c806:; BB(0x0049c806);
    /* 0049c806: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049c809: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049c80d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049c80f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049c813: ret  */ FN_RET(0x0049c788); r_esp += 4; return;
}

void f_0049c814(void) /* sub_49C814 */
{
    FN_ENTER(0x0049c814);
    /* 0049c814: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c815: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049c817: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 0049c81d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c81f: je 0x49c85a */ if (fZ) goto L_0049c85a;
L_0049c821:; BB(0x0049c821);
    /* 0049c821: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0049c828: mov edx, dword ptr [ebx + 0x508] */ r_edx = R32((u32)(r_ebx+0x508u));
    /* 0049c82e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0049c830: cmp edx, dword ptr [ebx + 0x4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049c836: jl 0x49c83f */ if ((fS!=fO)) goto L_0049c83f;
L_0049c838:; BB(0x0049c838);
    /* 0049c838: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c83d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c83e: ret  */ FN_RET(0x0049c814); r_esp += 4; return;
L_0049c83f:; BB(0x0049c83f);
    /* 0049c83f: call 0x48e12c */ r_esp -= 4; W32(r_esp, 0x49c844u); f_0048e12c();
    /* 0049c844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c846: jne 0x49c85a */ if (!fZ) goto L_0049c85a;
L_0049c848:; BB(0x0049c848);
    /* 0049c848: mov eax, dword ptr [ebx + 0x438] */ r_eax = R32((u32)(r_ebx+0x438u));
    /* 0049c84e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049c851: jl 0x49c85a */ if ((fS!=fO)) goto L_0049c85a;
L_0049c853:; BB(0x0049c853);
    /* 0049c853: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c858: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c859: ret  */ FN_RET(0x0049c814); r_esp += 4; return;
L_0049c85a:; BB(0x0049c85a);
    /* 0049c85a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c85c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c85d: ret  */ FN_RET(0x0049c814); r_esp += 4; return;
}

void f_0049c860(void) /* sub_49C860 */
{
    FN_ENTER(0x0049c860);
    /* 0049c860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c861: mov esi, ecx */ r_esi = r_ecx;
    /* 0049c863: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 0049c869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c86b: je 0x49c871 */ if (fZ) goto L_0049c871;
L_0049c86d:; BB(0x0049c86d);
    /* 0049c86d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049c86f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c870: ret  */ FN_RET(0x0049c860); r_esp += 4; return;
L_0049c871:; BB(0x0049c871);
    /* 0049c871: call 0x48e134 */ r_esp -= 4; W32(r_esp, 0x49c876u); f_0048e134();
    /* 0049c876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c878: jne 0x49c86d */ if (!fZ) goto L_0049c86d;
L_0049c87a:; BB(0x0049c87a);
    /* 0049c87a: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0049c881: mov edx, dword ptr [esi + 0x508] */ r_edx = R32((u32)(r_esi+0x508u));
    /* 0049c887: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0049c889: cmp edx, dword ptr [esi + 0x4d8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x4d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049c88f: jl 0x49c86d */ if ((fS!=fO)) goto L_0049c86d;
L_0049c891:; BB(0x0049c891);
    /* 0049c891: mov eax, 1 */ r_eax = 0x1u;
    /* 0049c896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049c897: ret  */ FN_RET(0x0049c860); r_esp += 4; return;
}

void f_0049c898(void) /* sub_49C898 */
{
    FN_ENTER(0x0049c898);
    /* 0049c898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c899: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c89c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049c89e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0049c8a1: lea edx, [ebx + 0x53c] */ r_edx = (u32)(r_ebx+0x53cu);
    /* 0049c8a7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x49c8acu); f_0082ebac();
    /* 0049c8ac: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0049c8af: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0049c8b2: fadd dword ptr [0x90308c] */ ST(0) = ST(0) + R_F32((u32)(0x90308cu));
    /* 0049c8b8: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0049c8bb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049c8bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049c8c1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049c8c4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0049c8c8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049c8cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c8cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c8ce: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x49c8d3u); f_007b4c58();
    /* 0049c8d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c8d5: jne 0x49c9c4 */ if (!fZ) goto L_0049c9c4;
L_0049c8db:; BB(0x0049c8db);
    /* 0049c8db: fld dword ptr [0x903484] */ FPUSH(R_F32((u32)(0x903484u)));
    /* 0049c8e1: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0049c8e4: fld dword ptr [0x903480] */ FPUSH(R_F32((u32)(0x903480u)));
    /* 0049c8ea: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0049c8ed: movzx eax, byte ptr [0xa47418] */ r_eax = (u32)R8((u32)(0xa47418u));
    /* 0049c8f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049c8f6: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0049c8f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049c8fb: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0049c8ff: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0049c907: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049c909: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049c90b: jne 0x49c921 */ if (!fZ) goto L_0049c921;
L_0049c90d:; BB(0x0049c90d);
    /* 0049c90d: mov dword ptr [0xa4741c], 0x43c70000 */ W32((u32)(0xa4741cu), 0x43c70000u);
    /* 0049c917: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049c91c: mov byte ptr [0xa47418], al */ W8((u32)(0xa47418u), (u8)r_eax);
L_0049c921:; BB(0x0049c921);
    /* 0049c921: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049c923: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0049c927: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049c92b: fld dword ptr [0xa4741c] */ FPUSH(R_F32((u32)(0xa4741cu)));
    /* 0049c931: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0049c935: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0049c939: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0049c93d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x49c942u); f_0082df08();
    /* 0049c942: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049c944: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0049c948: fcomp dword ptr [0x903480] */ fx_compare(ST(0), R_F32((u32)(0x903480u))); FPOP();
    /* 0049c94e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c950: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c951: jbe 0x49c9ab */ if ((fC||fZ)) goto L_0049c9ab;
L_0049c953:; BB(0x0049c953);
    /* 0049c953: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0049c957: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0049c95b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0049c95d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049c95f: fadd dword ptr [0x903478] */ ST(0) = ST(0) + R_F32((u32)(0x903478u));
    /* 0049c965: fld dword ptr [0x90308c] */ FPUSH(R_F32((u32)(0x90308cu)));
    /* 0049c96b: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0049c96e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0049c972: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0049c974: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049c976: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049c979: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049c97d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0049c981: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049c984: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049c986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049c988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049c989: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x49c98eu); f_007b4c58();
    /* 0049c98e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049c990: jne 0x49c9ab */ if (!fZ) goto L_0049c9ab;
L_0049c992:; BB(0x0049c992);
    /* 0049c992: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0049c996: fadd dword ptr [0x903088] */ ST(0) = ST(0) + R_F32((u32)(0x903088u));
    /* 0049c99c: fcom dword ptr [0x903480] */ fx_compare(ST(0), R_F32((u32)(0x903480u))); 
    /* 0049c9a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049c9a4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0049c9a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049c9a9: ja 0x49c953 */ if ((!fC&&!fZ)) goto L_0049c953;
L_0049c9ab:; BB(0x0049c9ab);
    /* 0049c9ab: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0049c9ae: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0049c9b2: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0049c9b9: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0049c9bc: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0049c9bf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c9c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c9c3: ret  */ FN_RET(0x0049c898); r_esp += 4; return;
L_0049c9c4:; BB(0x0049c9c4);
    /* 0049c9c4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0049c9c7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0049c9cb: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0049c9d2: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0049c9d5: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0049c9d8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049c9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049c9dc: ret  */ FN_RET(0x0049c898); r_esp += 4; return;
}

void f_0049c9e0(void) /* sub_49C9E0 */
{
    FN_ENTER(0x0049c9e0);
    /* 0049c9e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049c9e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049c9e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049c9e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049c9e6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049c9e8: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0049c9ec: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0049c9f0: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0049c9f2: fld dword ptr [0x903474] */ FPUSH(R_F32((u32)(0x903474u)));
    /* 0049c9f8: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0049c9fa: fld dword ptr [0x903094] */ FPUSH(R_F32((u32)(0x903094u)));
    /* 0049ca00: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0049ca02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049ca04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049ca05: jb 0x49ca15 */ if (fC) goto L_0049ca15;
L_0049ca07:; BB(0x0049ca07);
    /* 0049ca07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049ca09: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049ca0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049ca0d: fld dword ptr [0x90346c] */ FPUSH(R_F32((u32)(0x90346cu)));
    /* 0049ca13: jmp 0x49ca32 */ goto L_0049ca32;
L_0049ca15:; BB(0x0049ca15);
    /* 0049ca15: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049ca17: fcom dword ptr [0x903090] */ fx_compare(ST(0), R_F32((u32)(0x903090u))); 
    /* 0049ca1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049ca1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049ca20: jb 0x49ca28 */ if (fC) goto L_0049ca28;
L_0049ca22:; BB(0x0049ca22);
    /* 0049ca22: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0049ca24: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049ca26: jmp 0x49ca32 */ goto L_0049ca32;
L_0049ca28:; BB(0x0049ca28);
    /* 0049ca28: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049ca2a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0049ca2c: fdiv dword ptr [0x903470] */ ST(0) = ST(0) / R_F32((u32)(0x903470u));
L_0049ca32:; BB(0x0049ca32);
    /* 0049ca32: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049ca35: call 0x48e5c0 */ r_esp -= 4; W32(r_esp, 0x49ca3au); f_0048e5c0();
    /* 0049ca3a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049ca3e: mov dword ptr [ebx + 0x38], 0xc61c4000 */ W32((u32)(r_ebx+0x38u), 0xc61c4000u);
    /* 0049ca45: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0049ca48: lea edi, [ebx + 0x524] */ r_edi = (u32)(r_ebx+0x524u);
    /* 0049ca4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ca50: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0049ca57: mov edx, edi */ r_edx = r_edi;
    /* 0049ca59: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 0049ca60: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49ca65u); f_0082f9c4();
    /* 0049ca65: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0049ca69: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0049ca6c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0049ca6e: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0049ca71: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0049ca74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049ca76: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0049ca78: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0049ca7a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049ca7c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049ca7e: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0049ca81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049ca83: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 0049ca86: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0049ca89: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ca8b: mov edx, edi */ r_edx = r_edi;
    /* 0049ca8d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x49ca92u); f_0082ebac();
    /* 0049ca92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049ca95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ca96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ca97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049ca98: ret 8 */ FN_RET(0x0049c9e0); r_esp += 12; return;
}

void f_0049ca9c(void) /* sub_49CA9C */
{
    FN_ENTER(0x0049ca9c);
    /* 0049ca9c: call 0x48de98 */ r_esp -= 4; W32(r_esp, 0x49caa1u); f_0048de98();
    /* 0049caa1: ret  */ FN_RET(0x0049ca9c); r_esp += 4; return;
}

void f_0049caa4(void) /* sub_49CAA4 */
{
    FN_ENTER(0x0049caa4);
    /* 0049caa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049caa5: mov edi, ecx */ r_edi = r_ecx;
    /* 0049caa7: movzx edx, word ptr [edi + 0x47c] */ r_edx = (u32)R16((u32)(r_edi+0x47cu));
    /* 0049caae: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cab4: je 0x49caf5 */ if (fZ) goto L_0049caf5;
L_0049cab6:; BB(0x0049cab6);
    /* 0049cab6: movzx eax, word ptr [edi + 0x574] */ r_eax = (u32)R16((u32)(r_edi+0x574u));
    /* 0049cabd: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cac2: je 0x49cad2 */ if (fZ) goto L_0049cad2;
L_0049cac4:; BB(0x0049cac4);
    /* 0049cac4: mov ecx, edi */ r_ecx = r_edi;
    /* 0049cac6: call 0x49a37c */ r_esp -= 4; W32(r_esp, 0x49cacbu); f_0049a37c();
    /* 0049cacb: movzx edx, word ptr [edi + 0x47c] */ r_edx = (u32)R16((u32)(r_edi+0x47cu));
L_0049cad2:; BB(0x0049cad2);
    /* 0049cad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049cad3: mov ecx, edi */ r_ecx = r_edi;
    /* 0049cad5: call 0x49cafc */ r_esp -= 4; W32(r_esp, 0x49cadau); f_0049cafc();
    /* 0049cada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049cadc: jne 0x49caee */ if (!fZ) goto L_0049caee;
L_0049cade:; BB(0x0049cade);
    /* 0049cade: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049cae3: mov word ptr [edi + 0x47c], dx */ W16((u32)(r_edi+0x47cu), (u16)r_edx);
    /* 0049caea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049caec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049caed: ret  */ FN_RET(0x0049caa4); r_esp += 4; return;
L_0049caee:; BB(0x0049caee);
    /* 0049caee: mov eax, 1 */ r_eax = 0x1u;
    /* 0049caf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049caf4: ret  */ FN_RET(0x0049caa4); r_esp += 4; return;
L_0049caf5:; BB(0x0049caf5);
    /* 0049caf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049caf7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049caf8: ret  */ FN_RET(0x0049caa4); r_esp += 4; return;
}

void f_0049cafc(void) /* sub_49CAFC */
{
    FN_ENTER(0x0049cafc);
    /* 0049cafc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cafd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cafe: mov edi, ecx */ r_edi = r_ecx;
    /* 0049cb00: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 0049cb05: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cb0b: je 0x49cb1b */ if (fZ) goto L_0049cb1b;
L_0049cb0d:; BB(0x0049cb0d);
    /* 0049cb0d: movzx eax, word ptr [edi + 0x574] */ r_eax = (u32)R16((u32)(r_edi+0x574u));
    /* 0049cb14: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cb19: je 0x49cb22 */ if (fZ) goto L_0049cb22;
L_0049cb1b:; BB(0x0049cb1b);
    /* 0049cb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049cb1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049cb1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049cb1f: ret 4 */ FN_RET(0x0049cafc); r_esp += 8; return;
L_0049cb22:; BB(0x0049cb22);
    /* 0049cb22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cb23: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49cb28u); f_0068d5a8();
    /* 0049cb28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049cb29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cb2b: je 0x49cb38 */ if (fZ) goto L_0049cb38;
L_0049cb2d:; BB(0x0049cb2d);
    /* 0049cb2d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0049cb30: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cb36: je 0x49cb3f */ if (fZ) goto L_0049cb3f;
L_0049cb38:; BB(0x0049cb38);
    /* 0049cb38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049cb3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049cb3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049cb3c: ret 4 */ FN_RET(0x0049cafc); r_esp += 8; return;
L_0049cb3f:; BB(0x0049cb3f);
    /* 0049cb3f: mov word ptr [edi + 0x574], si */ W16((u32)(r_edi+0x574u), (u16)r_esi);
    /* 0049cb46: lea edx, [eax + 0x930] */ r_edx = (u32)(r_eax+0x930u);
    /* 0049cb4c: mov dword ptr [edi + 0x588], edx */ W32((u32)(r_edi+0x588u), r_edx);
    /* 0049cb52: mov esi, dword ptr [eax + 0xde8] */ r_esi = R32((u32)(r_eax+0xde8u));
    /* 0049cb58: mov dword ptr [edi + 0x58c], esi */ W32((u32)(r_edi+0x58cu), r_esi);
    /* 0049cb5e: mov edx, dword ptr [eax + 0xdec] */ r_edx = R32((u32)(r_eax+0xdecu));
    /* 0049cb64: mov esi, dword ptr [edi + 0x578] */ r_esi = R32((u32)(r_edi+0x578u));
    /* 0049cb6a: mov dword ptr [edi + 0x590], edx */ W32((u32)(r_edi+0x590u), r_edx);
    /* 0049cb70: mov edx, dword ptr [eax + 0xb10] */ r_edx = R32((u32)(r_eax+0xb10u));
    /* 0049cb76: mov dword ptr [edi + 0x594], edx */ W32((u32)(r_edi+0x594u), r_edx);
    /* 0049cb7c: mov edx, dword ptr [eax + 0xb14] */ r_edx = R32((u32)(r_eax+0xb14u));
    /* 0049cb82: mov dword ptr [edi + 0x598], edx */ W32((u32)(r_edi+0x598u), r_edx);
    /* 0049cb88: mov edx, dword ptr [eax + 0xc7c] */ r_edx = R32((u32)(r_eax+0xc7cu));
    /* 0049cb8e: mov dword ptr [edi + 0x59c], edx */ W32((u32)(r_edi+0x59cu), r_edx);
    /* 0049cb94: mov edx, dword ptr [eax + 0xc80] */ r_edx = R32((u32)(r_eax+0xc80u));
    /* 0049cb9a: mov dword ptr [edi + 0x5a0], edx */ W32((u32)(r_edi+0x5a0u), r_edx);
    /* 0049cba0: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0049cba3: mov dword ptr [edi + 0x5a4], edx */ W32((u32)(r_edi+0x5a4u), r_edx);
    /* 0049cba9: mov edx, dword ptr [eax + 0x9a4] */ r_edx = R32((u32)(r_eax+0x9a4u));
    /* 0049cbaf: mov dword ptr [edi + 0x5a8], edx */ W32((u32)(r_edi+0x5a8u), r_edx);
    /* 0049cbb5: mov edx, dword ptr [eax + 0x9a0] */ r_edx = R32((u32)(r_eax+0x9a0u));
    /* 0049cbbb: mov dword ptr [edi + 0x5ac], edx */ W32((u32)(r_edi+0x5acu), r_edx);
    /* 0049cbc1: mov edx, dword ptr [eax + 0x9a8] */ r_edx = R32((u32)(r_eax+0x9a8u));
    /* 0049cbc7: mov dword ptr [edi + 0x5b0], edx */ W32((u32)(r_edi+0x5b0u), r_edx);
    /* 0049cbcd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0049cbcf: mov dword ptr [eax + 0xde8], edx */ W32((u32)(r_eax+0xde8u), r_edx);
    /* 0049cbd5: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0049cbd8: mov dword ptr [eax + 0xdec], edx */ W32((u32)(r_eax+0xdecu), r_edx);
    /* 0049cbde: mov esi, dword ptr [edi + 0x57c] */ r_esi = R32((u32)(r_edi+0x57cu));
    /* 0049cbe4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0049cbe6: mov dword ptr [eax + 0xc7c], edx */ W32((u32)(r_eax+0xc7cu), r_edx);
    /* 0049cbec: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0049cbef: mov dword ptr [eax + 0xc80], edx */ W32((u32)(r_eax+0xc80u), r_edx);
    /* 0049cbf5: mov edx, dword ptr [edi + 0x580] */ r_edx = R32((u32)(r_edi+0x580u));
    /* 0049cbfb: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0049cbfe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049cc00: mov dword ptr [eax + 0x9a4], edx */ W32((u32)(r_eax+0x9a4u), r_edx);
    /* 0049cc06: mov dword ptr [eax + 0x9a0], edx */ W32((u32)(r_eax+0x9a0u), r_edx);
    /* 0049cc0c: mov ecx, dword ptr [edi + 0x584] */ r_ecx = R32((u32)(r_edi+0x584u));
    /* 0049cc12: mov dword ptr [eax + 0x9a8], ecx */ W32((u32)(r_eax+0x9a8u), r_ecx);
    /* 0049cc18: mov eax, 1 */ r_eax = 0x1u;
    /* 0049cc1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049cc1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049cc1f: ret 4 */ FN_RET(0x0049cafc); r_esp += 8; return;
}

void f_0049cc24(void) /* sub_49CC24 */
{
    FN_ENTER(0x0049cc24);
    /* 0049cc24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc26: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049cc29: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049cc2b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0049cc2f: mov eax, dword ptr [ebp + ebx*4 + 0x794] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x794u));
    /* 0049cc36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cc38: je 0x49cc42 */ if (fZ) goto L_0049cc42;
L_0049cc3a:; BB(0x0049cc3a);
    /* 0049cc3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049cc3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049cc3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049cc3f: ret 4 */ FN_RET(0x0049cc24); r_esp += 8; return;
L_0049cc42:; BB(0x0049cc42);
    /* 0049cc42: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0049cc45: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0049cc48: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049cc4b: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0049cc4e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0049cc52: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049cc56: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049cc59: push dword ptr [ebx*8 + 0x903100] */ { u32 v = R32((u32)(r_ebx*8+0x903100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049cc60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc61: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49cc66u); f_00509590();
    /* 0049cc66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049cc69: mov dword ptr [ebp + ebx*4 + 0x794], eax */ W32((u32)(r_ebp+r_ebx*4+0x794u), r_eax);
    /* 0049cc70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cc72: je 0x49cc7d */ if (fZ) goto L_0049cc7d;
L_0049cc74:; BB(0x0049cc74);
    /* 0049cc74: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc76: mov ecx, eax */ r_ecx = r_eax;
    /* 0049cc78: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49cc7du); f_00508efc();
L_0049cc7d:; BB(0x0049cc7d);
    /* 0049cc7d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049cc80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049cc81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049cc82: ret 4 */ FN_RET(0x0049cc24); r_esp += 8; return;
}

void f_0049cc88(void) /* sub_49CC88 */
{
    FN_ENTER(0x0049cc88);
    /* 0049cc88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc8a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049cc8c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0049cc90: mov eax, dword ptr [ebp + ebx*4 + 0x794] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x794u));
    /* 0049cc97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049cc99: je 0x49ccad */ if (fZ) goto L_0049ccad;
L_0049cc9b:; BB(0x0049cc9b);
    /* 0049cc9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc9c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x49cca1u); f_005cdcc0();
    /* 0049cca1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049cca2: mov dword ptr [ebp + ebx*4 + 0x794], 0 */ W32((u32)(r_ebp+r_ebx*4+0x794u), 0x0u);
L_0049ccad:; BB(0x0049ccad);
    /* 0049ccad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ccae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ccaf: ret 4 */ FN_RET(0x0049cc88); r_esp += 8; return;
}

void f_0049ccbc(void) /* sub_49CCBC */
{
    FN_ENTER(0x0049ccbc);
    /* 0049ccbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccbd: mov esi, ecx */ r_esi = r_ecx;
    /* 0049ccbf: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0049ccc2: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0049ccc9: mov dword ptr [esi + 0x514], 0x3f800000 */ W32((u32)(r_esi+0x514u), 0x3f800000u);
    /* 0049ccd3: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0049ccd8: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0049ccdb: mov eax, dword ptr [esi + 0x510] */ r_eax = R32((u32)(r_esi+0x510u));
    /* 0049cce1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049cce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049cce5: jle 0x49ccef */ if ((fZ||fS!=fO)) goto L_0049ccef;
L_0049cce7:; BB(0x0049cce7);
    /* 0049cce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049cce8: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ccea: call 0x49cd10 */ r_esp -= 4; W32(r_esp, 0x49ccefu); f_0049cd10();
L_0049ccef:; BB(0x0049ccef);
    /* 0049ccef: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 0049ccf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ccf7: je 0x49cd0e */ if (fZ) goto L_0049cd0e;
L_0049ccf9:; BB(0x0049ccf9);
    /* 0049ccf9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccfd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049cd00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cd01: push 0x5b4 */ { u32 v = 0x5b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0049cd06: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49cd0bu); f_00814298();
    /* 0049cd0b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0049cd0e:; BB(0x0049cd0e);
    /* 0049cd0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049cd0f: ret  */ FN_RET(0x0049ccbc); r_esp += 4; return;
}

void f_0049cd10(void) /* sub_49CD10 */
{
    FN_ENTER(0x0049cd10);
    /* 0049cd10: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0049cd14: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0049cd1a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cd1d: je 0x49cd29 */ if (fZ) goto L_0049cd29;
L_0049cd1f:; BB(0x0049cd1f);
    /* 0049cd1f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049cd22: jl 0x49cd2b */ if ((fS!=fO)) goto L_0049cd2b;
L_0049cd24:; BB(0x0049cd24);
    /* 0049cd24: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049cd27: jg 0x49cd2b */ if ((!fZ&&fS==fO)) goto L_0049cd2b;
L_0049cd29:; BB(0x0049cd29);
    /* 0049cd29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0049cd2b:; BB(0x0049cd2b);
    /* 0049cd2b: add dword ptr [ecx + 0x50c], edx */ { u32 ad = (u32)(r_ecx+0x50cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049cd31: ret 4 */ FN_RET(0x0049cd10); r_esp += 8; return;
}

void f_0049cd34(void) /* sub_49CD34 */
{
    FN_ENTER(0x0049cd34);
    /* 0049cd34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cd35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049cd36: mov esi, ecx */ r_esi = r_ecx;
    /* 0049cd38: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0049cd3e: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049cd41: je 0x49cf65 */ if (fZ) goto L_0049cf65;
L_0049cd47:; BB(0x0049cd47);
    /* 0049cd47: mov edx, dword ptr [esi + 0x3f8] */ r_edx = R32((u32)(r_esi+0x3f8u));
    /* 0049cd4d: mov ebp, dword ptr [esi + 0x3f4] */ r_ebp = R32((u32)(r_esi+0x3f4u));
    /* 0049cd53: mov eax, 0x23 */ r_eax = 0x23u;
    /* 0049cd58: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 0049cd5e: mov dword ptr [esi + 0x3fc], edx */ W32((u32)(r_esi+0x3fcu), r_edx);
    /* 0049cd64: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 0049cd6a: mov dword ptr [esi + 0x3f8], ebp */ W32((u32)(r_esi+0x3f8u), r_ebp);
    /* 0049cd70: mov dword ptr [esi + 0x3f4], edx */ W32((u32)(r_esi+0x3f4u), r_edx);
    /* 0049cd76: mov edx, dword ptr [esi + 0x3ec] */ r_edx = R32((u32)(r_esi+0x3ecu));
    /* 0049cd7c: mov dword ptr [esi + 0x3f0], edx */ W32((u32)(r_esi+0x3f0u), r_edx);
    /* 0049cd82: mov edx, dword ptr [esi + 0x3e8] */ r_edx = R32((u32)(r_esi+0x3e8u));
    /* 0049cd88: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
    /* 0049cd8e: mov edx, dword ptr [esi + 0x3e4] */ r_edx = R32((u32)(r_esi+0x3e4u));
    /* 0049cd94: mov dword ptr [esi + 0x3e8], edx */ W32((u32)(r_esi+0x3e8u), r_edx);
    /* 0049cd9a: mov edx, dword ptr [esi + 0x3e0] */ r_edx = R32((u32)(r_esi+0x3e0u));
    /* 0049cda0: mov dword ptr [esi + 0x3e4], edx */ W32((u32)(r_esi+0x3e4u), r_edx);
    /* 0049cda6: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 0049cdac: mov dword ptr [esi + 0x3e0], edx */ W32((u32)(r_esi+0x3e0u), r_edx);
    /* 0049cdb2: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 0049cdb8: mov dword ptr [esi + 0x3dc], edx */ W32((u32)(r_esi+0x3dcu), r_edx);
    /* 0049cdbe: mov edx, dword ptr [esi + 0x3d4] */ r_edx = R32((u32)(r_esi+0x3d4u));
    /* 0049cdc4: mov dword ptr [esi + 0x3d8], edx */ W32((u32)(r_esi+0x3d8u), r_edx);
    /* 0049cdca: mov edx, dword ptr [esi + 0x3d0] */ r_edx = R32((u32)(r_esi+0x3d0u));
    /* 0049cdd0: mov dword ptr [esi + 0x3d4], edx */ W32((u32)(r_esi+0x3d4u), r_edx);
    /* 0049cdd6: mov edx, dword ptr [esi + 0x3cc] */ r_edx = R32((u32)(r_esi+0x3ccu));
    /* 0049cddc: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 0049cde2: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0049cde8: mov dword ptr [esi + 0x3cc], edx */ W32((u32)(r_esi+0x3ccu), r_edx);
    /* 0049cdee: mov edx, dword ptr [esi + 0x3c4] */ r_edx = R32((u32)(r_esi+0x3c4u));
    /* 0049cdf4: mov dword ptr [esi + 0x3c8], edx */ W32((u32)(r_esi+0x3c8u), r_edx);
    /* 0049cdfa: mov edx, dword ptr [esi + 0x3c0] */ r_edx = R32((u32)(r_esi+0x3c0u));
    /* 0049ce00: mov dword ptr [esi + 0x3c4], edx */ W32((u32)(r_esi+0x3c4u), r_edx);
    /* 0049ce06: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 0049ce0c: mov dword ptr [esi + 0x3c0], edx */ W32((u32)(r_esi+0x3c0u), r_edx);
    /* 0049ce12: mov edx, dword ptr [esi + 0x3b8] */ r_edx = R32((u32)(r_esi+0x3b8u));
    /* 0049ce18: mov dword ptr [esi + 0x3bc], edx */ W32((u32)(r_esi+0x3bcu), r_edx);
    /* 0049ce1e: mov edx, dword ptr [esi + 0x3b4] */ r_edx = R32((u32)(r_esi+0x3b4u));
    /* 0049ce24: mov dword ptr [esi + 0x3b8], edx */ W32((u32)(r_esi+0x3b8u), r_edx);
    /* 0049ce2a: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 0049ce30: mov dword ptr [esi + 0x3b4], edx */ W32((u32)(r_esi+0x3b4u), r_edx);
    /* 0049ce36: mov edx, dword ptr [esi + 0x3ac] */ r_edx = R32((u32)(r_esi+0x3acu));
    /* 0049ce3c: mov dword ptr [esi + 0x3b0], edx */ W32((u32)(r_esi+0x3b0u), r_edx);
    /* 0049ce42: mov edx, dword ptr [esi + 0x3a8] */ r_edx = R32((u32)(r_esi+0x3a8u));
    /* 0049ce48: mov dword ptr [esi + 0x3ac], edx */ W32((u32)(r_esi+0x3acu), r_edx);
    /* 0049ce4e: mov edx, dword ptr [esi + 0x3a4] */ r_edx = R32((u32)(r_esi+0x3a4u));
    /* 0049ce54: mov dword ptr [esi + 0x3a8], edx */ W32((u32)(r_esi+0x3a8u), r_edx);
    /* 0049ce5a: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 0049ce60: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0049ce66: mov edx, dword ptr [esi + 0x39c] */ r_edx = R32((u32)(r_esi+0x39cu));
    /* 0049ce6c: mov dword ptr [esi + 0x3a0], edx */ W32((u32)(r_esi+0x3a0u), r_edx);
    /* 0049ce72: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 0049ce78: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 0049ce7e: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 0049ce84: mov dword ptr [esi + 0x398], edx */ W32((u32)(r_esi+0x398u), r_edx);
    /* 0049ce8a: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 0049ce90: mov dword ptr [esi + 0x394], edx */ W32((u32)(r_esi+0x394u), r_edx);
    /* 0049ce96: mov edx, dword ptr [esi + 0x38c] */ r_edx = R32((u32)(r_esi+0x38cu));
    /* 0049ce9c: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0049cea2: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 0049cea8: mov dword ptr [esi + 0x38c], edx */ W32((u32)(r_esi+0x38cu), r_edx);
    /* 0049ceae: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0049ceb4: mov dword ptr [esi + 0x388], edx */ W32((u32)(r_esi+0x388u), r_edx);
    /* 0049ceba: mov edx, dword ptr [esi + 0x380] */ r_edx = R32((u32)(r_esi+0x380u));
    /* 0049cec0: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 0049cec6: mov dword ptr [esi + 0x380], eax */ W32((u32)(r_esi+0x380u), r_eax);
    /* 0049cecc: mov ebp, dword ptr [0x9a79cc] */ r_ebp = R32((u32)(0x9a79ccu));
    /* 0049ced2: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ced5: je 0x49cf4d */ if (fZ) goto L_0049cf4d;
L_0049ced7:; BB(0x0049ced7);
    /* 0049ced7: cmp ebp, dword ptr [esi + 0x4a8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cedd: je 0x49cf4d */ if (fZ) goto L_0049cf4d;
L_0049cedf:; BB(0x0049cedf);
    /* 0049cedf: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049cee5: mov dword ptr [esi + 0x4a8], ebp */ W32((u32)(r_esi+0x4a8u), r_ebp);
    /* 0049ceeb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049ceed: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0049cef1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049cef3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049cef5: push dword ptr [edx + 0x9a7488] */ { u32 v = R32((u32)(r_edx+0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049cefb: mov eax, dword ptr [edx + 0x9a7480] */ r_eax = R32((u32)(r_edx+0x9a7480u));
    /* 0049cf01: mov dword ptr [esi + 0x4ac], eax */ W32((u32)(r_esi+0x4acu), r_eax);
    /* 0049cf07: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49cf0cu); f_005b8638();
    /* 0049cf0c: mov edx, dword ptr [esi + 0x4c0] */ r_edx = R32((u32)(r_esi+0x4c0u));
    /* 0049cf12: mov dword ptr [esi + 0x4bc], edx */ W32((u32)(r_esi+0x4bcu), r_edx);
    /* 0049cf18: mov edx, dword ptr [esi + 0x4b0] */ r_edx = R32((u32)(r_esi+0x4b0u));
    /* 0049cf1e: mov dword ptr [esi + 0x4c4], edx */ W32((u32)(r_esi+0x4c4u), r_edx);
    /* 0049cf24: mov edx, dword ptr [esi + 0x4b4] */ r_edx = R32((u32)(r_esi+0x4b4u));
    /* 0049cf2a: mov dword ptr [esi + 0x4c8], edx */ W32((u32)(r_esi+0x4c8u), r_edx);
    /* 0049cf30: mov ebp, dword ptr [ebp*8 + 0x9a748c] */ r_ebp = R32((u32)(r_ebp*8+0x9a748cu));
    /* 0049cf37: mov dword ptr [esi + 0x4b4], 0 */ W32((u32)(r_esi+0x4b4u), 0x0u);
    /* 0049cf41: mov dword ptr [esi + 0x4b8], ebp */ W32((u32)(r_esi+0x4b8u), r_ebp);
    /* 0049cf47: mov dword ptr [esi + 0x4b0], eax */ W32((u32)(r_esi+0x4b0u), r_eax);
L_0049cf4d:; BB(0x0049cf4d);
    /* 0049cf4d: mov eax, dword ptr [0x9a79d0] */ r_eax = R32((u32)(0x9a79d0u));
    /* 0049cf52: mov dword ptr [esi + 0x48c], eax */ W32((u32)(r_esi+0x48cu), r_eax);
    /* 0049cf58: mov eax, dword ptr [0x9a79d4] */ r_eax = R32((u32)(0x9a79d4u));
    /* 0049cf5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049cf5f: je 0x49cf65 */ if (fZ) goto L_0049cf65;
L_0049cf61:; BB(0x0049cf61);
    /* 0049cf61: mov ecx, esi */ r_ecx = r_esi;
    /* 0049cf63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x49cf65u); call_ind(t); }
L_0049cf65:; BB(0x0049cf65);
    /* 0049cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049cf66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049cf67: ret  */ FN_RET(0x0049cd34); r_esp += 4; return;
}

void f_0049cf68(void) /* sub_49CF68 */
{
    FN_ENTER(0x0049cf68);
    /* 0049cf68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cf69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cf6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049cf6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cf6c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049cf6e: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0049cf72: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 0049cf78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cf7a: je 0x49d061 */ if (fZ) goto L_0049d061;
L_0049cf80:; BB(0x0049cf80);
    /* 0049cf80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cf82: je 0x49d061 */ if (fZ) goto L_0049d061;
L_0049cf88:; BB(0x0049cf88);
    /* 0049cf88: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0049cf8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049cf8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049cf8f: mov ebx, eax */ r_ebx = r_eax;
    /* 0049cf91: mov edi, edx */ r_edi = r_edx;
    /* 0049cf93: mov esi, ebp */ r_esi = r_ebp;
    /* 0049cf95: mov ebp, ecx */ r_ebp = r_ecx;
L_0049cf97:; BB(0x0049cf97);
    /* 0049cf97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049cf98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049cf9a: call 0x770d6c */ r_esp -= 4; W32(r_esp, 0x49cf9fu); f_00770d6c();
    /* 0049cf9f: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 0049cfa2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cfa5: je 0x49d074 */ if (fZ) goto L_0049d074;
L_0049cfab:; BB(0x0049cfab);
    /* 0049cfab: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cfae: je 0x49cfc4 */ if (fZ) goto L_0049cfc4;
L_0049cfb0:; BB(0x0049cfb0);
    /* 0049cfb0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cfb3: jne 0x49cfba */ if (!fZ) goto L_0049cfba;
L_0049cfb5:; BB(0x0049cfb5);
    /* 0049cfb5: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0049cfb8: jmp 0x49cfc7 */ goto L_0049cfc7;
L_0049cfba:; BB(0x0049cfba);
    /* 0049cfba: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cfbd: jne 0x49cfc7 */ if (!fZ) goto L_0049cfc7;
L_0049cfbf:; BB(0x0049cfbf);
    /* 0049cfbf: or ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0049cfc2: jmp 0x49cfc7 */ goto L_0049cfc7;
L_0049cfc4:; BB(0x0049cfc4);
    /* 0049cfc4: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0049cfc7:; BB(0x0049cfc7);
    /* 0049cfc7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049cfca: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049cfcd: jl 0x49cf97 */ if ((fS!=fO)) goto L_0049cf97;
L_0049cfcf:; BB(0x0049cfcf);
    /* 0049cfcf: mov eax, ebx */ r_eax = r_ebx;
    /* 0049cfd1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0049cfd4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049cfd6: mov ebp, esi */ r_ebp = r_esi;
    /* 0049cfd8: test dword ptr [ebp + 0x2e8], eax */ {  u32 a = R32((u32)(r_ebp+0x2e8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cfde: jne 0x49d061 */ if (!fZ) goto L_0049d061;
L_0049cfe4:; BB(0x0049cfe4);
    /* 0049cfe4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049cfe6: call 0x49d07c */ r_esp -= 4; W32(r_esp, 0x49cfebu); f_0049d07c();
    /* 0049cfeb: mov ecx, dword ptr [ebp + 0xa4] */ r_ecx = R32((u32)(r_ebp+0xa4u));
    /* 0049cff1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049cff3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049cff5: je 0x49d040 */ if (fZ) goto L_0049d040;
L_0049cff7:; BB(0x0049cff7);
    /* 0049cff7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049cff9: mov esi, edx */ r_esi = r_edx;
    /* 0049cffb: mov edi, ecx */ r_edi = r_ecx;
L_0049cffd:; BB(0x0049cffd);
    /* 0049cffd: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0049d000: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d006: je 0x49d031 */ if (fZ) goto L_0049d031;
L_0049d008:; BB(0x0049d008);
    /* 0049d008: mov eax, dword ptr [esi + 0x9030a4] */ r_eax = R32((u32)(r_esi+0x9030a4u));
    /* 0049d00e: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d013: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049d015: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049d017: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0049d01a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049d01c: lea eax, [ebp + edx + 0x5b4] */ r_eax = (u32)(r_ebp+r_edx+0x5b4u);
    /* 0049d023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d024: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49d029u); f_0050b510();
    /* 0049d029: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d02c: mov eax, 1 */ r_eax = 0x1u;
L_0049d031:; BB(0x0049d031);
    /* 0049d031: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049d034: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049d037: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d03a: jl 0x49cffd */ if ((fS!=fO)) goto L_0049cffd;
L_0049d03c:; BB(0x0049d03c);
    /* 0049d03c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049d03e: jne 0x49d054 */ if (!fZ) goto L_0049d054;
L_0049d040:; BB(0x0049d040);
    /* 0049d040: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d045: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049d04b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049d04c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49d051u); f_0050b510();
    /* 0049d051: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0049d054:; BB(0x0049d054);
    /* 0049d054: fld dword ptr [0x903454] */ FPUSH(R_F32((u32)(0x903454u)));
    /* 0049d05a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049d05b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049d05c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049d05d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049d05e: ret 8 */ FN_RET(0x0049cf68); r_esp += 12; return;
L_0049d061:; BB(0x0049d061);
    /* 0049d061: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d066: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049d068: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x49d06du); f_007732b8();
    /* 0049d06d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049d06e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049d06f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049d070: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049d071: ret 8 */ FN_RET(0x0049cf68); r_esp += 12; return;
L_0049d074:; BB(0x0049d074);
    /* 0049d074: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0049d077: jmp 0x49cfc7 */ goto L_0049cfc7;
}

