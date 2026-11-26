#include "protos.h"

void f_005ba050(void) /* sub_5BA050 */
{
    FN_ENTER(0x005ba050);
    /* 005ba050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba052: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba053: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba055: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005ba059: mov esi, edi */ r_esi = r_edi;
    /* 005ba05b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba05d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ba061: mov ebp, dword ptr [edx + edi - 0x20] */ r_ebp = R32((u32)(r_edx+r_edi+0xffffffe0u));
    /* 005ba065: mov eax, dword ptr [edx + edi - 0x1c] */ r_eax = R32((u32)(r_edx+r_edi+0xffffffe4u));
    /* 005ba069: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba06b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005ba06d: jbe 0x5ba0d1 */ if ((fC||fZ)) goto L_005ba0d1;
L_005ba06f:; BB(0x005ba06f);
    /* 005ba06f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba072: jb 0x5ba0bb */ if (fC) goto L_005ba0bb;
L_005ba074:; BB(0x005ba074);
    /* 005ba074: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ba077: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
L_005ba07a:; BB(0x005ba07a);
    /* 005ba07a: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 005ba07e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba080: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba082: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba084: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba087: add dword ptr [eax], edi */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba089: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 005ba08d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba08f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba091: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba093: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba095: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 005ba099: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba09b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba09d: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba09f: add dword ptr [edx], edi */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba0a1: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 005ba0a5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba0a7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba0a9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba0ab: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba0ae: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba0b0: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba0b2: jbe 0x5ba07a */ if ((fC||fZ)) goto L_005ba07a;
L_005ba0b4:; BB(0x005ba0b4);
    /* 005ba0b4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005ba0b7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_005ba0bb:; BB(0x005ba0bb);
    /* 005ba0bb: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 005ba0bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba0c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba0c3: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba0c5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba0c8: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba0cb: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba0cd: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba0cf: jb 0x5ba0bb */ if (fC) goto L_005ba0bb;
L_005ba0d1:; BB(0x005ba0d1);
    /* 005ba0d1: mov eax, dword ptr [edx + edi - 0x10] */ r_eax = R32((u32)(r_edx+r_edi+0xfffffff0u));
    /* 005ba0d5: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba0d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba0d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba0d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba0da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba0db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba0dc: ret  */ FN_RET(0x005ba050); r_esp += 4; return;
}

void f_005ba0e0(void) /* sub_5BA0E0 */
{
    FN_ENTER(0x005ba0e0);
    /* 005ba0e0: mov byte ptr [0xa74aa0], 0 */ W8((u32)(0xa74aa0u), 0x0u);
L_005ba0e7:; BB(0x005ba0e7);
    /* 005ba0e7: movzx eax, byte ptr [0xa74a88] */ r_eax = (u32)R8((u32)(0xa74a88u));
    /* 005ba0ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba0f0: jne 0x5ba0fb */ if (!fZ) goto L_005ba0fb;
L_005ba0f2:; BB(0x005ba0f2);
    /* 005ba0f2: mov eax, dword ptr [0xac9d20] */ r_eax = R32((u32)(0xac9d20u));
    /* 005ba0f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba0f9: je 0x5ba104 */ if (fZ) goto L_005ba104;
L_005ba0fb:; BB(0x005ba0fb);
    /* 005ba0fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba0fd: mov word ptr [0xa74aa4], ax */ W16((u32)(0xa74aa4u), (u16)r_eax);
    /* 005ba103: ret  */ FN_RET(0x005ba0e0); r_esp += 4; return;
L_005ba104:; BB(0x005ba104);
    /* 005ba104: add word ptr [0xa74aa4], 1 */ { u32 ad = (u32)(0xa74aa4u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005ba10c: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5ba111u); f_007a61a4();
    /* 005ba111: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba114: je 0x5ba14c */ if (fZ) goto L_005ba14c;
L_005ba116:; BB(0x005ba116);
    /* 005ba116: mov eax, 0x1e */ r_eax = 0x1eu;
L_005ba11b:; BB(0x005ba11b);
    /* 005ba11b: cmp ax, word ptr [0xa74aa4] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(0xa74aa4u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 005ba122: ja 0x5ba144 */ if ((!fC&&!fZ)) goto L_005ba144;
L_005ba124:; BB(0x005ba124);
    /* 005ba124: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5ba129u); f_007a61a4();
    /* 005ba129: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba12c: je 0x5ba145 */ if (fZ) goto L_005ba145;
L_005ba12e:; BB(0x005ba12e);
    /* 005ba12e: mov eax, 1 */ r_eax = 0x1u;
    /* 005ba133: mov dword ptr [0xaca4d8], eax */ W32((u32)(0xaca4d8u), r_eax);
    /* 005ba138: mov byte ptr [0xa74aa0], al */ W8((u32)(0xa74aa0u), (u8)r_eax);
    /* 005ba13d: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x5ba142u); f_0080030c();
    /* 005ba142: jmp 0x5ba0e7 */ goto L_005ba0e7;
L_005ba144:; BB(0x005ba144);
    /* 005ba144: ret  */ FN_RET(0x005ba0e0); r_esp += 4; return;
L_005ba145:; BB(0x005ba145);
    /* 005ba145: call 0x79f358 */ r_esp -= 4; W32(r_esp, 0x5ba14au); f_0079f358();
    /* 005ba14a: jmp 0x5ba12e */ goto L_005ba12e;
L_005ba14c:; BB(0x005ba14c);
    /* 005ba14c: mov eax, 0x96 */ r_eax = 0x96u;
    /* 005ba151: jmp 0x5ba11b */ goto L_005ba11b;
}

void f_005ba154(void)
{
    FN_ENTER(0x005ba154);
    /* 005ba154: movzx eax, byte ptr [0xa74aa0] */ r_eax = (u32)R8((u32)(0xa74aa0u));
    /* 005ba15b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba15d: jne 0x5ba166 */ if (!fZ) goto L_005ba166;
L_005ba15f:; BB(0x005ba15f);
    /* 005ba15f: mov byte ptr [0xa74a88], 0 */ W8((u32)(0xa74a88u), 0x0u);
L_005ba166:; BB(0x005ba166);
    /* 005ba166: ret  */ FN_RET(0x005ba154); r_esp += 4; return;
}

void f_005ba168(void) /* sub_5BA168 */
{
    FN_ENTER(0x005ba168);
    /* 005ba168: mov eax, dword ptr [0xa74a8c] */ r_eax = R32((u32)(0xa74a8cu));
    /* 005ba16d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba16f: je 0x5ba173 */ if (fZ) goto L_005ba173;
L_005ba171:; BB(0x005ba171);
    /* 005ba171: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ba173u); call_ind(t); }
L_005ba173:; BB(0x005ba173);
    /* 005ba173: ret  */ FN_RET(0x005ba168); r_esp += 4; return;
}

void f_005ba174(void) /* sub_5BA174 */
{
    FN_ENTER(0x005ba174);
    /* 005ba174: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5ba179u); f_007a61a4();
    /* 005ba179: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba17c: je 0x5ba1c1 */ if (fZ) goto L_005ba1c1;
L_005ba17e:; BB(0x005ba17e);
    /* 005ba17e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba181: jne 0x5ba1a2 */ if (!fZ) goto L_005ba1a2;
L_005ba183:; BB(0x005ba183);
    /* 005ba183: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 005ba188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba18a: je 0x5ba197 */ if (fZ) goto L_005ba197;
L_005ba18c:; BB(0x005ba18c);
    /* 005ba18c: mov dword ptr [0xa74a8c], 0x7bbf8c */ W32((u32)(0xa74a8cu), 0x7bbf8cu);
    /* 005ba196: ret  */ FN_RET(0x005ba174); r_esp += 4; return;
L_005ba197:; BB(0x005ba197);
    /* 005ba197: mov dword ptr [0xa74a8c], 0x7bbb88 */ W32((u32)(0xa74a8cu), 0x7bbb88u);
    /* 005ba1a1: ret  */ FN_RET(0x005ba174); r_esp += 4; return;
L_005ba1a2:; BB(0x005ba1a2);
    /* 005ba1a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba1a4: jle 0x5ba1b6 */ if ((fZ||fS!=fO)) goto L_005ba1b6;
L_005ba1a6:; BB(0x005ba1a6);
    /* 005ba1a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ba1a9: jg 0x5ba1b6 */ if ((!fZ&&fS==fO)) goto L_005ba1b6;
L_005ba1ab:; BB(0x005ba1ab);
    /* 005ba1ab: mov dword ptr [0xa74a8c], 0x5ba38c */ W32((u32)(0xa74a8cu), 0x5ba38cu);
    /* 005ba1b5: ret  */ FN_RET(0x005ba174); r_esp += 4; return;
L_005ba1b6:; BB(0x005ba1b6);
    /* 005ba1b6: mov dword ptr [0xa74a8c], 0 */ W32((u32)(0xa74a8cu), 0x0u);
    /* 005ba1c0: ret  */ FN_RET(0x005ba174); r_esp += 4; return;
L_005ba1c1:; BB(0x005ba1c1);
    /* 005ba1c1: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 005ba1c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba1c8: je 0x5ba1d5 */ if (fZ) goto L_005ba1d5;
L_005ba1ca:; BB(0x005ba1ca);
    /* 005ba1ca: mov dword ptr [0xa74a8c], 0x7bd2dc */ W32((u32)(0xa74a8cu), 0x7bd2dcu);
    /* 005ba1d4: ret  */ FN_RET(0x005ba174); r_esp += 4; return;
L_005ba1d5:; BB(0x005ba1d5);
    /* 005ba1d5: mov dword ptr [0xa74a8c], 0x7bd764 */ W32((u32)(0xa74a8cu), 0x7bd764u);
    /* 005ba1df: ret  */ FN_RET(0x005ba174); r_esp += 4; return;
}

void f_005ba1e0(void) /* sub_5BA1E0 */
{
    FN_ENTER(0x005ba1e0);
    /* 005ba1e0: mov dword ptr [0xa74a8c], 0 */ W32((u32)(0xa74a8cu), 0x0u);
    /* 005ba1ea: call 0x7c04ec */ r_esp -= 4; W32(r_esp, 0x5ba1efu); f_007c04ec();
    /* 005ba1ef: ret  */ FN_RET(0x005ba1e0); r_esp += 4; return;
}

void f_005ba1f0(void) /* sub_5BA1F0 */
{
    FN_ENTER(0x005ba1f0);
    /* 005ba1f0: movzx eax, byte ptr [0xa74a90] */ r_eax = (u32)R8((u32)(0xa74a90u));
    /* 005ba1f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba1f9: je 0x5ba201 */ if (fZ) goto L_005ba201;
L_005ba1fb:; BB(0x005ba1fb);
    /* 005ba1fb: mov eax, 1 */ r_eax = 0x1u;
    /* 005ba200: ret  */ FN_RET(0x005ba1f0); r_esp += 4; return;
L_005ba201:; BB(0x005ba201);
    /* 005ba201: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba203: ret  */ FN_RET(0x005ba1f0); r_esp += 4; return;
}

void f_005ba204(void) /* sub_5BA204 */
{
    FN_ENTER(0x005ba204);
    /* 005ba204: mov byte ptr [0xa74a90], 0 */ W8((u32)(0xa74a90u), 0x0u);
    /* 005ba20b: call 0x7c04ec */ r_esp -= 4; W32(r_esp, 0x5ba210u); f_007c04ec();
    /* 005ba210: ret  */ FN_RET(0x005ba204); r_esp += 4; return;
}

void f_005ba214(void) /* sub_5BA214 */
{
    FN_ENTER(0x005ba214);
    /* 005ba214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba215: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005ba219: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba21b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba21c: push 0xa74aec */ { u32 v = 0xa74aecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba221: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5ba226u); f_00858900();
    /* 005ba226: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba228: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba22d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba22e: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x5ba233u); f_008598c0();
    /* 005ba233: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba238: jne 0x5ba23f */ if (!fZ) goto L_005ba23f;
L_005ba23a:; BB(0x005ba23a);
    /* 005ba23a: call 0x5ba248 */ r_esp -= 4; W32(r_esp, 0x5ba23fu); f_005ba248();
L_005ba23f:; BB(0x005ba23f);
    /* 005ba23f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba240: call 0x83c43c */ r_esp -= 4; W32(r_esp, 0x5ba245u); f_0083c43c();
    /* 005ba245: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba246: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba247: ret  */ FN_RET(0x005ba214); r_esp += 4; return;
}

void f_005ba248(void) /* sub_5BA248 */
{
    FN_ENTER(0x005ba248);
    /* 005ba248: mov edx, 0xa74aec */ r_edx = 0xa74aecu;
    /* 005ba24d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba24f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ba251: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ba254: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ba257: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005ba25a: ret  */ FN_RET(0x005ba248); r_esp += 4; return;
}

void f_005ba25c(void) /* sub_5BA25C */
{
    FN_ENTER(0x005ba25c);
    /* 005ba25c: mov eax, 0xa74aec */ r_eax = 0xa74aecu;
    /* 005ba261: ret  */ FN_RET(0x005ba25c); r_esp += 4; return;
}

void f_005ba264(void) /* sub_5BA264 */
{
    FN_ENTER(0x005ba264);
    /* 005ba264: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba265: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba266: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba267: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba268: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba26b: mov edi, ecx */ r_edi = r_ecx;
    /* 005ba26d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005ba270: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005ba273: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba275: mov ebp, dword ptr [eax - 0x20] */ r_ebp = R32((u32)(r_eax+0xffffffe0u));
    /* 005ba278: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ba27b: mov eax, dword ptr [eax - 0x1c] */ r_eax = R32((u32)(r_eax+0xffffffe4u));
    /* 005ba27e: mov esi, ecx */ r_esi = r_ecx;
    /* 005ba280: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba282: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005ba286: jbe 0x5ba309 */ if ((fC||fZ)) goto L_005ba309;
L_005ba28c:; BB(0x005ba28c);
    /* 005ba28c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba28f: jb 0x5ba2f0 */ if (fC) goto L_005ba2f0;
L_005ba291:; BB(0x005ba291);
    /* 005ba291: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005ba295: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 005ba298: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005ba29c: jmp 0x5ba2a1 */ goto L_005ba2a1;
L_005ba29e:; BB(0x005ba29e);
    /* 005ba29e: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
L_005ba2a1:; BB(0x005ba2a1);
    /* 005ba2a1: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 005ba2a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2a9: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2ab: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba2ae: add dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2b0: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 005ba2b4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2b6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2b8: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2ba: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005ba2bd: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2bf: movzx ecx, word ptr [ebp + 4] */ r_ecx = (u32)R16((u32)(r_ebp+0x4u));
    /* 005ba2c3: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005ba2c6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2ca: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2cc: add dword ptr [ecx], eax */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2ce: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 005ba2d2: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005ba2d5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2d7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2d9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2db: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2dd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba2e0: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba2e2: jbe 0x5ba29e */ if ((fC||fZ)) goto L_005ba29e;
L_005ba2e4:; BB(0x005ba2e4);
    /* 005ba2e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ba2e8: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005ba2eb: jmp 0x5ba2f0 */ goto L_005ba2f0;
L_005ba2ed:; BB(0x005ba2ed);
    /* 005ba2ed: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
L_005ba2f0:; BB(0x005ba2f0);
    /* 005ba2f0: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 005ba2f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba2f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba2f8: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2fa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba2fd: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba300: add dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba302: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba304: jb 0x5ba2ed */ if (fC) goto L_005ba2ed;
L_005ba306:; BB(0x005ba306);
    /* 005ba306: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
L_005ba309:; BB(0x005ba309);
    /* 005ba309: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005ba30c: add ecx, dword ptr [edx - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba30f: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 005ba312: mov eax, ecx */ r_eax = r_ecx;
    /* 005ba314: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba319: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba31a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba31b: ret  */ FN_RET(0x005ba264); r_esp += 4; return;
}

void f_005ba283(void)
{
    FN_ENTER(0x005ba283);
    /* 005ba283: fild dword ptr [ebp + 0x7d860fc0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x7d860fc0u)));
    /* 005ba289: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005ba28b: add byte ptr [ebx + 0x5f7205f8], al */ { u32 ad = (u32)(r_ebx+0x5f7205f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005ba291: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005ba295: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 005ba298: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005ba29c: jmp 0x5ba2a1 */ goto L_005ba2a1;
L_005ba29e:; BB(0x005ba29e);
    /* 005ba29e: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
L_005ba2a1:; BB(0x005ba2a1);
    /* 005ba2a1: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 005ba2a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2a9: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2ab: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba2ae: add dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2b0: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 005ba2b4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2b6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2b8: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2ba: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005ba2bd: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2bf: movzx ecx, word ptr [ebp + 4] */ r_ecx = (u32)R16((u32)(r_ebp+0x4u));
    /* 005ba2c3: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005ba2c6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2ca: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba2cc: add dword ptr [ecx], eax */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2ce: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 005ba2d2: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005ba2d5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2d7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2d9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2db: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba2dd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba2e0: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba2e2: jbe 0x5ba29e */ if ((fC||fZ)) goto L_005ba29e;
L_005ba2e4:; BB(0x005ba2e4);
    /* 005ba2e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ba2e8: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005ba2eb: jmp 0x5ba2f0 */ goto L_005ba2f0;
L_005ba2ed:; BB(0x005ba2ed);
    /* 005ba2ed: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
L_005ba2f0:; BB(0x005ba2f0);
    /* 005ba2f0: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 005ba2f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba2f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba2f8: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2fa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba2fd: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba300: add dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba302: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba304: jb 0x5ba2ed */ if (fC) goto L_005ba2ed;
L_005ba306:; BB(0x005ba306);
    /* 005ba306: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005ba309: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005ba30c: add ecx, dword ptr [edx - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba30f: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 005ba312: mov eax, ecx */ r_eax = r_ecx;
    /* 005ba314: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba319: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba31a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba31b: ret  */ FN_RET(0x005ba283); r_esp += 4; return;
}

void f_005ba2e8(void)
{
    FN_ENTER(0x005ba2e8);
    /* 005ba2e8: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005ba2eb: jmp 0x5ba2f0 */ goto L_005ba2f0;
L_005ba2ed:; BB(0x005ba2ed);
    /* 005ba2ed: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
L_005ba2f0:; BB(0x005ba2f0);
    /* 005ba2f0: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 005ba2f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba2f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba2f8: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ba2fa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ba2fd: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba300: add dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba302: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba304: jb 0x5ba2ed */ if (fC) goto L_005ba2ed;
L_005ba306:; BB(0x005ba306);
    /* 005ba306: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005ba309: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005ba30c: add ecx, dword ptr [edx - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba30f: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 005ba312: mov eax, ecx */ r_eax = r_ecx;
    /* 005ba314: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba319: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba31a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba31b: ret  */ FN_RET(0x005ba2e8); r_esp += 4; return;
}

void f_005ba31c(void)
{
    FN_ENTER(0x005ba31c);
    /* 005ba31c: mov ecx, 0xa74b08 */ r_ecx = 0xa74b08u;
    /* 005ba321: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x5ba326u); f_005b9d58();
    /* 005ba326: push 0x5ba33c */ { u32 v = 0x5ba33cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba32b: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x5ba330u); f_0085909d();
    /* 005ba330: mov eax, dword ptr [0x9c1e38] */ r_eax = R32((u32)(0x9c1e38u));
    /* 005ba335: mov dword ptr [0xa74b04], eax */ W32((u32)(0xa74b04u), r_eax);
    /* 005ba33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba33b: ret  */ FN_RET(0x005ba31c); r_esp += 4; return;
}

void f_005ba33c(void) /* sub_5BA33C */
{
    FN_ENTER(0x005ba33c);
    /* 005ba33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba33d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba33f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba341: push 0x8d9348 */ { u32 v = 0x8d9348u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ba34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba34d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ba354: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ba35a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ba35d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ba360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ba363: mov dword ptr [ebp - 0x20], 0xa74b08 */ W32((u32)(r_ebp+0xffffffe0u), 0xa74b08u);
    /* 005ba36a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ba371: mov ecx, 0xa74b08 */ r_ecx = 0xa74b08u;
    /* 005ba376: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5ba37bu); f_008171e8();
    /* 005ba37b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba37e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ba385: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba387: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba388: ret  */ FN_RET(0x005ba33c); r_esp += 4; return;
}

void f_005ba38c(void)
{
    FN_ENTER(0x005ba38c);
    /* 005ba38c: call 0x7c04ec */ r_esp -= 4; W32(r_esp, 0x5ba391u); f_007c04ec();
    /* 005ba391: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x5ba396u); f_007a6174();
    /* 005ba396: ret  */ FN_RET(0x005ba38c); r_esp += 4; return;
}

void f_005ba398(void) /* sub_5BA398 */
{
    FN_ENTER(0x005ba398);
    /* 005ba398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba39a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ba39c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ba39e: call 0x5ba3bc */ r_esp -= 4; W32(r_esp, 0x5ba3a3u); f_005ba3bc();
    /* 005ba3a3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ba3a7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba3a9: jne 0x5ba3b0 */ if (!fZ) goto L_005ba3b0;
L_005ba3ab:; BB(0x005ba3ab);
    /* 005ba3ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba3ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba3ad: ret 4 */ FN_RET(0x005ba398); r_esp += 8; return;
L_005ba3b0:; BB(0x005ba3b0);
    /* 005ba3b0: mov eax, ebp */ r_eax = r_ebp;
    /* 005ba3b2: call 0x5ba3e4 */ r_esp -= 4; W32(r_esp, 0x5ba3b7u); f_005ba3e4();
    /* 005ba3b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba3b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba3b9: ret 4 */ FN_RET(0x005ba398); r_esp += 8; return;
}

void f_005ba3bc(void) /* sub_5BA3BC */
{
    FN_ENTER(0x005ba3bc);
    /* 005ba3bc: cmp ecx, dword ptr [0xa74b68] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa74b68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba3c2: jne 0x5ba3ce */ if (!fZ) goto L_005ba3ce;
L_005ba3c4:; BB(0x005ba3c4);
    /* 005ba3c4: mov dword ptr [0xa74b68], 0 */ W32((u32)(0xa74b68u), 0x0u);
L_005ba3ce:; BB(0x005ba3ce);
    /* 005ba3ce: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005ba3d1: add dword ptr [0xa74b60], -1 */ { u32 ad = (u32)(0xa74b60u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba3d8: mov dword ptr [0xa74b64], eax */ W32((u32)(0xa74b64u), r_eax);
    /* 005ba3dd: ret  */ FN_RET(0x005ba3bc); r_esp += 4; return;
}

void f_005ba3e4(void) /* sub_5BA3E4 */
{
    FN_ENTER(0x005ba3e4);
    /* 005ba3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3e5: mov ecx, dword ptr [0xa74b4c] */ r_ecx = R32((u32)(0xa74b4cu));
    /* 005ba3eb: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5ba3f0u); f_007a8b04();
    /* 005ba3f0: ret  */ FN_RET(0x005ba3e4); r_esp += 4; return;
}

void f_005ba3f4(void) /* sub_5BA3F4 */
{
    FN_ENTER(0x005ba3f4);
    /* 005ba3f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3f8: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005ba3fc: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 005ba400: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba402: je 0x5ba40a */ if (fZ) goto L_005ba40a;
L_005ba404:; BB(0x005ba404);
    /* 005ba404: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005ba40a:; BB(0x005ba40a);
    /* 005ba40a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba40c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba40d: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5ba412u); f_00708238();
    /* 005ba412: mov esi, eax */ r_esi = r_eax;
    /* 005ba414: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba417: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba419: je 0x5ba498 */ if (fZ) goto L_005ba498;
L_005ba41b:; BB(0x005ba41b);
    /* 005ba41b: mov ecx, dword ptr [0xa74b4c] */ r_ecx = R32((u32)(0xa74b4cu));
    /* 005ba421: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba423: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x5ba428u); f_007a8a38();
    /* 005ba428: mov ebp, eax */ r_ebp = r_eax;
    /* 005ba42a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba42c: je 0x5ba494 */ if (fZ) goto L_005ba494;
L_005ba42e:; BB(0x005ba42e);
    /* 005ba42e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ba430: call 0x5ba4a4 */ r_esp -= 4; W32(r_esp, 0x5ba435u); f_005ba4a4();
L_005ba435:; BB(0x005ba435);
    /* 005ba435: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba437: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba438: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 005ba43b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba43c: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5ba441u); f_00858900();
    /* 005ba441: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005ba445: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
    /* 005ba44c: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 005ba44f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba450: call 0x86dc7c */ r_esp -= 4; W32(r_esp, 0x5ba455u); f_0086dc7c();
    /* 005ba455: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba456: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 005ba459: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5ba45eu); f_0086dc64();
    /* 005ba45e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba45f: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005ba462: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5ba467u); f_0086db40();
    /* 005ba467: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba46a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ba46e: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 005ba471: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba473: je 0x5ba47f */ if (fZ) goto L_005ba47f;
L_005ba475:; BB(0x005ba475);
    /* 005ba475: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ba479: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_005ba47f:; BB(0x005ba47f);
    /* 005ba47f: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 005ba486: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba488: je 0x5ba48c */ if (fZ) goto L_005ba48c;
L_005ba48a:; BB(0x005ba48a);
    /* 005ba48a: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
L_005ba48c:; BB(0x005ba48c);
    /* 005ba48c: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005ba48f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba491: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba492: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba493: ret  */ FN_RET(0x005ba3f4); r_esp += 4; return;
L_005ba494:; BB(0x005ba494);
    /* 005ba494: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba496: jmp 0x5ba435 */ goto L_005ba435;
L_005ba498:; BB(0x005ba498);
    /* 005ba498: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 005ba49d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba49e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba49f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba4a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba4a1: ret  */ FN_RET(0x005ba3f4); r_esp += 4; return;
}

void f_005ba4a4(void) /* sub_5BA4A4 */
{
    FN_ENTER(0x005ba4a4);
    /* 005ba4a4: mov eax, ecx */ r_eax = r_ecx;
    /* 005ba4a6: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005ba4ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba4ae: jne 0x5ba4b5 */ if (!fZ) goto L_005ba4b5;
L_005ba4b0:; BB(0x005ba4b0);
    /* 005ba4b0: mov dword ptr [0xa74b64], eax */ W32((u32)(0xa74b64u), r_eax);
L_005ba4b5:; BB(0x005ba4b5);
    /* 005ba4b5: mov edx, dword ptr [0xa74b68] */ r_edx = R32((u32)(0xa74b68u));
    /* 005ba4bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba4bd: je 0x5ba4c2 */ if (fZ) goto L_005ba4c2;
L_005ba4bf:; BB(0x005ba4bf);
    /* 005ba4bf: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
L_005ba4c2:; BB(0x005ba4c2);
    /* 005ba4c2: mov ecx, dword ptr [0xa74b5c] */ r_ecx = R32((u32)(0xa74b5cu));
    /* 005ba4c8: add dword ptr [0xa74b60], 1 */ { u32 ad = (u32)(0xa74b60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ba4cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba4d1: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005ba4d4: mov dword ptr [0xa74b68], eax */ W32((u32)(0xa74b68u), r_eax);
    /* 005ba4d9: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005ba4dc: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005ba4df: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005ba4e2: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005ba4e5: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 005ba4e8: mov dword ptr [0xa74b5c], edx */ W32((u32)(0xa74b5cu), r_edx);
    /* 005ba4ee: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005ba4f1: ret  */ FN_RET(0x005ba4a4); r_esp += 4; return;
}

void f_005ba4f4(void) /* sub_5BA4F4 */
{
    FN_ENTER(0x005ba4f4);
    /* 005ba4f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4f8: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 005ba4fc: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 005ba500: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba502: je 0x5ba50a */ if (fZ) goto L_005ba50a;
L_005ba504:; BB(0x005ba504);
    /* 005ba504: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
L_005ba50a:; BB(0x005ba50a);
    /* 005ba50a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba50c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005ba510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba511: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5ba516u); f_00708238();
    /* 005ba516: mov edi, eax */ r_edi = r_eax;
    /* 005ba518: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba51b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba51d: je 0x5ba5d2 */ if (fZ) goto L_005ba5d2;
L_005ba523:; BB(0x005ba523);
    /* 005ba523: mov ecx, dword ptr [0xa74b4c] */ r_ecx = R32((u32)(0xa74b4cu));
    /* 005ba529: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba52b: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x5ba530u); f_007a8a38();
    /* 005ba530: mov esi, eax */ r_esi = r_eax;
    /* 005ba532: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba534: je 0x5ba5cb */ if (fZ) goto L_005ba5cb;
L_005ba53a:; BB(0x005ba53a);
    /* 005ba53a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ba53c: call 0x5ba4a4 */ r_esp -= 4; W32(r_esp, 0x5ba541u); f_005ba4a4();
L_005ba541:; BB(0x005ba541);
    /* 005ba541: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba543: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005ba547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba548: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 005ba54b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba54c: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5ba551u); f_00858900();
    /* 005ba551: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005ba555: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 005ba55b: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 005ba55e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba55f: call 0x86dc7c */ r_esp -= 4; W32(r_esp, 0x5ba564u); f_0086dc7c();
    /* 005ba564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba565: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 005ba568: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5ba56du); f_0086dc64();
    /* 005ba56d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba56e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005ba571: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5ba576u); f_0086db40();
    /* 005ba576: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba579: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ba57d: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
    /* 005ba584: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005ba587: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba589: je 0x5ba5bd */ if (fZ) goto L_005ba5bd;
L_005ba58b:; BB(0x005ba58b);
    /* 005ba58b: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005ba58e: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 005ba591: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 005ba593: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 005ba596: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 005ba599: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005ba59c: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 005ba59f: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 005ba5a2: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 005ba5a5: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 005ba5a8: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 005ba5ab: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 005ba5ae: mov dword ptr [edx + 0x14], edi */ W32((u32)(r_edx+0x14u), r_edi);
    /* 005ba5b1: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 005ba5b4: mov ebp, dword ptr [ebp + 0x1c] */ r_ebp = R32((u32)(r_ebp+0x1cu));
    /* 005ba5b7: mov dword ptr [edx + 0x18], edi */ W32((u32)(r_edx+0x18u), r_edi);
    /* 005ba5ba: mov dword ptr [edx + 0x1c], ebp */ W32((u32)(r_edx+0x1cu), r_ebp);
L_005ba5bd:; BB(0x005ba5bd);
    /* 005ba5bd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba5bf: je 0x5ba5c3 */ if (fZ) goto L_005ba5c3;
L_005ba5c1:; BB(0x005ba5c1);
    /* 005ba5c1: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
L_005ba5c3:; BB(0x005ba5c3);
    /* 005ba5c3: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 005ba5c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba5c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba5c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba5c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba5ca: ret  */ FN_RET(0x005ba4f4); r_esp += 4; return;
L_005ba5cb:; BB(0x005ba5cb);
    /* 005ba5cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005ba5cd: jmp 0x5ba541 */ goto L_005ba541;
L_005ba5d2:; BB(0x005ba5d2);
    /* 005ba5d2: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 005ba5d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba5d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba5d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba5da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba5db: ret  */ FN_RET(0x005ba4f4); r_esp += 4; return;
}

void f_005ba5dc(void) /* sub_5BA5DC */
{
    FN_ENTER(0x005ba5dc);
    /* 005ba5dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5e0: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 005ba5e4: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 005ba5e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba5ea: je 0x5ba5f2 */ if (fZ) goto L_005ba5f2;
L_005ba5ec:; BB(0x005ba5ec);
    /* 005ba5ec: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
L_005ba5f2:; BB(0x005ba5f2);
    /* 005ba5f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5f4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005ba5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5f9: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5ba5feu); f_00708238();
    /* 005ba5fe: mov edi, eax */ r_edi = r_eax;
    /* 005ba600: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba603: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba605: je 0x5ba6cf */ if (fZ) goto L_005ba6cf;
L_005ba60b:; BB(0x005ba60b);
    /* 005ba60b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba60c: call 0x86dc7c */ r_esp -= 4; W32(r_esp, 0x5ba611u); f_0086dc7c();
    /* 005ba611: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba612: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ba617: jle 0x5ba62a */ if ((fZ||fS!=fO)) goto L_005ba62a;
L_005ba619:; BB(0x005ba619);
    /* 005ba619: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba61a: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5ba61fu); f_0086db40();
    /* 005ba61f: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 005ba624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba625: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba627: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba628: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba629: ret  */ FN_RET(0x005ba5dc); r_esp += 4; return;
L_005ba62a:; BB(0x005ba62a);
    /* 005ba62a: mov ecx, dword ptr [0xa74b4c] */ r_ecx = R32((u32)(0xa74b4cu));
    /* 005ba630: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba632: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x5ba637u); f_007a8a38();
    /* 005ba637: mov esi, eax */ r_esi = r_eax;
    /* 005ba639: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba63b: je 0x5ba6c8 */ if (fZ) goto L_005ba6c8;
L_005ba641:; BB(0x005ba641);
    /* 005ba641: mov ecx, esi */ r_ecx = r_esi;
    /* 005ba643: call 0x5ba4a4 */ r_esp -= 4; W32(r_esp, 0x5ba648u); f_005ba4a4();
L_005ba648:; BB(0x005ba648);
    /* 005ba648: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba64a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005ba64e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba64f: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 005ba652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba653: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5ba658u); f_00858900();
    /* 005ba658: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005ba65c: mov dword ptr [esi], 2 */ W32((u32)(r_esi), 0x2u);
    /* 005ba662: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005ba665: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba666: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5ba66bu); f_0086dc64();
    /* 005ba66b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba66c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005ba66f: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5ba674u); f_0086db40();
    /* 005ba674: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba677: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ba67b: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
    /* 005ba682: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005ba685: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba687: je 0x5ba6bb */ if (fZ) goto L_005ba6bb;
L_005ba689:; BB(0x005ba689);
    /* 005ba689: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005ba68c: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 005ba68f: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 005ba691: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 005ba694: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 005ba697: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005ba69a: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 005ba69d: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 005ba6a0: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 005ba6a3: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 005ba6a6: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 005ba6a9: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 005ba6ac: mov dword ptr [edx + 0x14], edi */ W32((u32)(r_edx+0x14u), r_edi);
    /* 005ba6af: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 005ba6b2: mov ebp, dword ptr [ebp + 0x1c] */ r_ebp = R32((u32)(r_ebp+0x1cu));
    /* 005ba6b5: mov dword ptr [edx + 0x18], edi */ W32((u32)(r_edx+0x18u), r_edi);
    /* 005ba6b8: mov dword ptr [edx + 0x1c], ebp */ W32((u32)(r_edx+0x1cu), r_ebp);
L_005ba6bb:; BB(0x005ba6bb);
    /* 005ba6bb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba6bd: je 0x5ba6c1 */ if (fZ) goto L_005ba6c1;
L_005ba6bf:; BB(0x005ba6bf);
    /* 005ba6bf: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
L_005ba6c1:; BB(0x005ba6c1);
    /* 005ba6c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba6c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba6c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba6c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba6c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba6c7: ret  */ FN_RET(0x005ba5dc); r_esp += 4; return;
L_005ba6c8:; BB(0x005ba6c8);
    /* 005ba6c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005ba6ca: jmp 0x5ba648 */ goto L_005ba648;
L_005ba6cf:; BB(0x005ba6cf);
    /* 005ba6cf: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 005ba6d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ba6d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba6d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ba6d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ba6d8: ret  */ FN_RET(0x005ba5dc); r_esp += 4; return;
}

void f_005ba6dc(void) /* sub_5BA6DC */
{
    FN_ENTER(0x005ba6dc);
    /* 005ba6dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6dd: mov ecx, dword ptr [0xa74b4c] */ r_ecx = R32((u32)(0xa74b4cu));
    /* 005ba6e3: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6e5: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x5ba6eau); f_007a8a38();
    /* 005ba6ea: mov ebp, eax */ r_ebp = r_eax;
    /* 005ba6ec: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba6ee: je 0x5ba719 */ if (fZ) goto L_005ba719;
L_005ba6f0:; BB(0x005ba6f0);
    /* 005ba6f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ba6f2: call 0x5ba4a4 */ r_esp -= 4; W32(r_esp, 0x5ba6f7u); f_005ba4a4();
L_005ba6f7:; BB(0x005ba6f7);
    /* 005ba6f7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba6f9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba6fd: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 005ba700: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba701: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5ba706u); f_00858900();
    /* 005ba706: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005ba70a: mov dword ptr [ebp], 4 */ W32((u32)(r_ebp), 0x4u);
    /* 005ba711: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 005ba714: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ba717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba718: ret  */ FN_RET(0x005ba6dc); r_esp += 4; return;
L_005ba719:; BB(0x005ba719);
    /* 005ba719: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005ba71b: jmp 0x5ba6f7 */ goto L_005ba6f7;
}

void f_005ba720(void) /* sub_5BA720 */
{
    FN_ENTER(0x005ba720);
    /* 005ba720: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x5ba725u); f_005badd0();
    /* 005ba725: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba72b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5ba730u); f_0082e960();
    /* 005ba730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba731: call 0x5b8660 */ r_esp -= 4; W32(r_esp, 0x5ba736u); f_005b8660();
    /* 005ba736: mov ecx, dword ptr [0xa74b4c] */ r_ecx = R32((u32)(0xa74b4cu));
    /* 005ba73c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ba73e: je 0x5ba747 */ if (fZ) goto L_005ba747;
L_005ba740:; BB(0x005ba740);
    /* 005ba740: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba742: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x5ba747u); f_00508320();
L_005ba747:; BB(0x005ba747);
    /* 005ba747: ret  */ FN_RET(0x005ba720); r_esp += 4; return;
}

void f_005ba748(void) /* sub_5BA748 */
{
    FN_ENTER(0x005ba748);
    /* 005ba748: mov eax, dword ptr [0xa74b74] */ r_eax = R32((u32)(0xa74b74u));
    /* 005ba74d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba74f: je 0x5ba91f */ if (fZ) goto L_005ba91f;
L_005ba755:; BB(0x005ba755);
    /* 005ba755: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba758: je 0x5ba8bd */ if (fZ) goto L_005ba8bd;
L_005ba75e:; BB(0x005ba75e);
    /* 005ba75e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba761: je 0x5ba7cc */ if (fZ) goto L_005ba7cc;
L_005ba763:; BB(0x005ba763);
    /* 005ba763: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba766: jne 0x5ba7a0 */ if (!fZ) goto L_005ba7a0;
L_005ba768:; BB(0x005ba768);
    /* 005ba768: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005ba76d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba76f: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba775: je 0x5ba78d */ if (fZ) goto L_005ba78d;
L_005ba777:; BB(0x005ba777);
    /* 005ba777: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5ba77cu); f_005baa64();
    /* 005ba77c: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5ba781u); f_005baa7c();
    /* 005ba781: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005ba78b: jmp 0x5ba802 */ goto L_005ba802;
L_005ba78d:; BB(0x005ba78d);
    /* 005ba78d: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba793: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5ba798u); f_0086dc94();
    /* 005ba798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba799: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba79c: je 0x5ba808 */ if (fZ) goto L_005ba808;
L_005ba79e:; BB(0x005ba79e);
    /* 005ba79e: jmp 0x5ba802 */ goto L_005ba802;
L_005ba7a0:; BB(0x005ba7a0);
    /* 005ba7a0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba7a3: jne 0x5ba802 */ if (!fZ) goto L_005ba802;
L_005ba7a5:; BB(0x005ba7a5);
    /* 005ba7a5: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005ba7ab: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005ba7ae: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 005ba7b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba7b2: call 0x5b869c */ r_esp -= 4; W32(r_esp, 0x5ba7b7u); f_005b869c();
    /* 005ba7b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba7b9: je 0x5ba802 */ if (fZ) goto L_005ba802;
L_005ba7bb:; BB(0x005ba7bb);
    /* 005ba7bb: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5ba7c0u); f_005baa7c();
    /* 005ba7c0: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005ba7ca: jmp 0x5ba802 */ goto L_005ba802;
L_005ba7cc:; BB(0x005ba7cc);
    /* 005ba7cc: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005ba7d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba7d3: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba7d9: je 0x5ba7f1 */ if (fZ) goto L_005ba7f1;
L_005ba7db:; BB(0x005ba7db);
    /* 005ba7db: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5ba7e0u); f_005baa64();
    /* 005ba7e0: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5ba7e5u); f_005baa7c();
    /* 005ba7e5: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005ba7ef: jmp 0x5ba802 */ goto L_005ba802;
L_005ba7f1:; BB(0x005ba7f1);
    /* 005ba7f1: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba7f7: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5ba7fcu); f_0086dc94();
    /* 005ba7fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba7fd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba800: je 0x5ba82d */ if (fZ) goto L_005ba82d;
L_005ba802:; BB(0x005ba802);
    /* 005ba802: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5ba807u); f_0061cdb0();
    /* 005ba807: ret  */ FN_RET(0x005ba748); r_esp += 4; return;
L_005ba808:; BB(0x005ba808);
    /* 005ba808: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005ba80d: mov ecx, dword ptr [0xa74b48] */ r_ecx = R32((u32)(0xa74b48u));
    /* 005ba813: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005ba816: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5ba81bu); f_0082a7d8();
    /* 005ba81b: push 0x92b68c */ { u32 v = 0x92b68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba820: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5ba825u); f_005b9008();
    /* 005ba825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba826: call 0x5baa2c */ r_esp -= 4; W32(r_esp, 0x5ba82bu); f_005baa2c();
    /* 005ba82b: jmp 0x5ba802 */ goto L_005ba802;
L_005ba82d:; BB(0x005ba82d);
    /* 005ba82d: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005ba832: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005ba835: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba838: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ba83b: add ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba83e: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005ba841: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ba842: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba844: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba846: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ba84b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba84d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba84f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba851: jne 0x5ba858 */ if (!fZ) goto L_005ba858;
L_005ba853:; BB(0x005ba853);
    /* 005ba853: mov eax, 0x800 */ r_eax = 0x800u;
L_005ba858:; BB(0x005ba858);
    /* 005ba858: mov edx, eax */ r_edx = r_eax;
    /* 005ba85a: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ba85d: jne 0x5ba87d */ if (!fZ) goto L_005ba87d;
L_005ba85f:; BB(0x005ba85f);
    /* 005ba85f: mov edx, eax */ r_edx = r_eax;
    /* 005ba861: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005ba863: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005ba866: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba868: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ba86b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba86c: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba872: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba873: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5ba878u); f_0086b6b8();
    /* 005ba878: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba87b: jmp 0x5ba8ae */ goto L_005ba8ae;
L_005ba87d:; BB(0x005ba87d);
    /* 005ba87d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba880: jne 0x5ba89e */ if (!fZ) goto L_005ba89e;
L_005ba882:; BB(0x005ba882);
    /* 005ba882: mov edx, eax */ r_edx = r_eax;
    /* 005ba884: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005ba887: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba889: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ba88c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba88d: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba894: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5ba899u); f_0086b6b8();
    /* 005ba899: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba89c: jmp 0x5ba8ae */ goto L_005ba8ae;
L_005ba89e:; BB(0x005ba89e);
    /* 005ba89e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba89f: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba8a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8a6: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5ba8abu); f_0086b6b8();
    /* 005ba8ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ba8ae:; BB(0x005ba8ae);
    /* 005ba8ae: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5ba8b3u); f_005baa64();
    /* 005ba8b3: call 0x5baa2c */ r_esp -= 4; W32(r_esp, 0x5ba8b8u); f_005baa2c();
    /* 005ba8b8: jmp 0x5ba802 */ goto L_005ba802;
L_005ba8bd:; BB(0x005ba8bd);
    /* 005ba8bd: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005ba8c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ba8c4: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba8ca: je 0x5ba8e5 */ if (fZ) goto L_005ba8e5;
L_005ba8cc:; BB(0x005ba8cc);
    /* 005ba8cc: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5ba8d1u); f_005baa64();
    /* 005ba8d1: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5ba8d6u); f_005baa7c();
    /* 005ba8d6: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005ba8e0: jmp 0x5ba802 */ goto L_005ba802;
L_005ba8e5:; BB(0x005ba8e5);
    /* 005ba8e5: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba8eb: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5ba8f0u); f_0086dc94();
    /* 005ba8f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba8f1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba8f4: jne 0x5ba802 */ if (!fZ) goto L_005ba802;
L_005ba8fa:; BB(0x005ba8fa);
    /* 005ba8fa: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba900: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba902: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba908: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5ba90du); f_0086db64();
    /* 005ba90d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba910: mov dword ptr [0xa74b74], 2 */ W32((u32)(0xa74b74u), 0x2u);
    /* 005ba91a: jmp 0x5ba802 */ goto L_005ba802;
L_005ba91f:; BB(0x005ba91f);
    /* 005ba91f: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005ba925: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba927: je 0x5ba802 */ if (fZ) goto L_005ba802;
L_005ba92d:; BB(0x005ba92d);
    /* 005ba92d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba92f: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba934: jne 0x5ba9cc */ if (!fZ) goto L_005ba9cc;
L_005ba93a:; BB(0x005ba93a);
    /* 005ba93a: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ba93f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ba941: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005ba947: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ba949: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ba94b: jne 0x5ba9d6 */ if (!fZ) goto L_005ba9d6;
L_005ba951:; BB(0x005ba951);
    /* 005ba951: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ba953: je 0x5ba964 */ if (fZ) goto L_005ba964;
L_005ba955:; BB(0x005ba955);
    /* 005ba955: mov dword ptr [0xa74b74], 4 */ W32((u32)(0xa74b74u), 0x4u);
    /* 005ba95f: jmp 0x5ba802 */ goto L_005ba802;
L_005ba964:; BB(0x005ba964);
    /* 005ba964: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba966: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba969: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba96a: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5ba96fu); f_00708238();
    /* 005ba96f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba972: mov dword ptr [0xa74b6c], eax */ W32((u32)(0xa74b6cu), r_eax);
    /* 005ba977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba979: je 0x5ba802 */ if (fZ) goto L_005ba802;
L_005ba97f:; BB(0x005ba97f);
    /* 005ba97f: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005ba985: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005ba988: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ba98b: jle 0x5ba9ac */ if ((fZ||fS!=fO)) goto L_005ba9ac;
L_005ba98d:; BB(0x005ba98d);
    /* 005ba98d: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba990: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba995: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5ba99au); f_0086db64();
    /* 005ba99a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba99d: mov dword ptr [0xa74b74], 1 */ W32((u32)(0xa74b74u), 0x1u);
    /* 005ba9a7: jmp 0x5ba802 */ goto L_005ba802;
L_005ba9ac:; BB(0x005ba9ac);
    /* 005ba9ac: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ba9b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9b5: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5ba9bau); f_0086db64();
    /* 005ba9ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba9bd: mov dword ptr [0xa74b74], 2 */ W32((u32)(0xa74b74u), 0x2u);
    /* 005ba9c7: jmp 0x5ba802 */ goto L_005ba802;
L_005ba9cc:; BB(0x005ba9cc);
    /* 005ba9cc: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5ba9d1u); f_005baa7c();
    /* 005ba9d1: jmp 0x5ba802 */ goto L_005ba802;
L_005ba9d6:; BB(0x005ba9d6);
    /* 005ba9d6: push 0x92b68c */ { u32 v = 0x92b68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9db: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5ba9e0u); f_005b7a44();
    /* 005ba9e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba9e1: mov dword ptr [0xa74b48], eax */ W32((u32)(0xa74b48u), r_eax);
    /* 005ba9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba9e8: je 0x5ba802 */ if (fZ) goto L_005ba802;
L_005ba9ee:; BB(0x005ba9ee);
    /* 005ba9ee: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005ba9f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9f5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba9f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9f9: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5ba9feu); f_00708238();
    /* 005ba9fe: push dword ptr [0xa74b48] */ { u32 v = R32((u32)(0xa74b48u)); r_esp -= 4; W32(r_esp, v); }
    /* 005baa04: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005baa0a: push dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005baa0d: mov dword ptr [0xa74b6c], eax */ W32((u32)(0xa74b6cu), r_eax);
    /* 005baa12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baa13: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5baa18u); f_0086db64();
    /* 005baa18: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baa1b: mov dword ptr [0xa74b74], 3 */ W32((u32)(0xa74b74u), 0x3u);
    /* 005baa25: jmp 0x5ba802 */ goto L_005ba802;
}

void f_005baa2c(void) /* sub_5BAA2C */
{
    FN_ENTER(0x005baa2c);
    /* 005baa2c: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005baa32: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005baa35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baa37: je 0x5baa45 */ if (fZ) goto L_005baa45;
L_005baa39:; BB(0x005baa39);
    /* 005baa39: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005baa3f: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
L_005baa45:; BB(0x005baa45);
    /* 005baa45: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005baa48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baa4a: je 0x5baa53 */ if (fZ) goto L_005baa53;
L_005baa4c:; BB(0x005baa4c);
    /* 005baa4c: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005baa4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baa50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5baa52u); call_ind(t); }
    /* 005baa52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005baa53:; BB(0x005baa53);
    /* 005baa53: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5baa58u); f_005baa7c();
    /* 005baa58: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005baa62: ret  */ FN_RET(0x005baa2c); r_esp += 4; return;
}

void f_005baa64(void) /* sub_5BAA64 */
{
    FN_ENTER(0x005baa64);
    /* 005baa64: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005baa6a: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5baa6fu); f_0086db40();
    /* 005baa6f: mov dword ptr [0xa74b6c], 0 */ W32((u32)(0xa74b6cu), 0x0u);
    /* 005baa79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005baa7a: ret  */ FN_RET(0x005baa64); r_esp += 4; return;
}

void f_005baa7c(void) /* sub_5BAA7C */
{
    FN_ENTER(0x005baa7c);
    /* 005baa7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005baa7d: mov ecx, dword ptr [0xa74b64] */ r_ecx = R32((u32)(0xa74b64u));
    /* 005baa83: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 005baa86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005baa88: je 0x5baa91 */ if (fZ) goto L_005baa91;
L_005baa8a:; BB(0x005baa8a);
    /* 005baa8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005baa8c: call 0x5ba398 */ r_esp -= 4; W32(r_esp, 0x5baa91u); f_005ba398();
L_005baa91:; BB(0x005baa91);
    /* 005baa91: mov dword ptr [0xa74b64], esi */ W32((u32)(0xa74b64u), r_esi);
    /* 005baa97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005baa98: ret  */ FN_RET(0x005baa7c); r_esp += 4; return;
}

void f_005baa9c(void) /* sub_5BAA9C */
{
    FN_ENTER(0x005baa9c);
    /* 005baa9c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005baaa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baaa2: je 0x5baabd */ if (fZ) goto L_005baabd;
L_005baaa4:; BB(0x005baaa4);
    /* 005baaa4: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005baaaa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baaac: je 0x5baabd */ if (fZ) goto L_005baabd;
L_005baaae:; BB(0x005baaae);
    /* 005baaae: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
L_005baab1:; BB(0x005baab1);
    /* 005baab1: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baab4: je 0x5baac0 */ if (fZ) goto L_005baac0;
L_005baab6:; BB(0x005baab6);
    /* 005baab6: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 005baab9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baabb: jne 0x5baab1 */ if (!fZ) goto L_005baab1;
L_005baabd:; BB(0x005baabd);
    /* 005baabd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005baabf: ret  */ FN_RET(0x005baa9c); r_esp += 4; return;
L_005baac0:; BB(0x005baac0);
    /* 005baac0: or dword ptr [edx], 0x200 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005baac6: mov eax, 1 */ r_eax = 0x1u;
    /* 005baacb: ret  */ FN_RET(0x005baa9c); r_esp += 4; return;
}

void f_005baacc(void) /* sub_5BAACC */
{
    FN_ENTER(0x005baacc);
L_005baacc:; BB(0x005baacc);
    /* 005baacc: mov edx, dword ptr [0xa74b74] */ r_edx = R32((u32)(0xa74b74u));
    /* 005baad2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baad4: jne 0x5baae3 */ if (!fZ) goto L_005baae3;
L_005baad6:; BB(0x005baad6);
    /* 005baad6: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005baadb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005baadd: je 0x5badcd */ if (fZ) goto L_005badcd;
L_005baae3:; BB(0x005baae3);
    /* 005baae3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baae5: je 0x5bacbe */ if (fZ) goto L_005bacbe;
L_005baaeb:; BB(0x005baaeb);
    /* 005baaeb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baaee: je 0x5bac5c */ if (fZ) goto L_005bac5c;
L_005baaf4:; BB(0x005baaf4);
    /* 005baaf4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baaf7: je 0x5bab62 */ if (fZ) goto L_005bab62;
L_005baaf9:; BB(0x005baaf9);
    /* 005baaf9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baafc: jne 0x5bab36 */ if (!fZ) goto L_005bab36;
L_005baafe:; BB(0x005baafe);
    /* 005baafe: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bab03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bab05: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab0b: je 0x5bab23 */ if (fZ) goto L_005bab23;
L_005bab0d:; BB(0x005bab0d);
    /* 005bab0d: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5bab12u); f_005baa64();
    /* 005bab12: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bab17u); f_005baa7c();
    /* 005bab17: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bab21: jmp 0x5bab98 */ goto L_005bab98;
L_005bab23:; BB(0x005bab23);
    /* 005bab23: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bab29: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bab2eu); f_0086dc94();
    /* 005bab2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bab2f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab32: je 0x5baba7 */ if (fZ) goto L_005baba7;
L_005bab34:; BB(0x005bab34);
    /* 005bab34: jmp 0x5bab98 */ goto L_005bab98;
L_005bab36:; BB(0x005bab36);
    /* 005bab36: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab39: jne 0x5bab98 */ if (!fZ) goto L_005bab98;
L_005bab3b:; BB(0x005bab3b);
    /* 005bab3b: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005bab41: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005bab44: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 005bab47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bab48: call 0x5b869c */ r_esp -= 4; W32(r_esp, 0x5bab4du); f_005b869c();
    /* 005bab4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab4f: je 0x5bab98 */ if (fZ) goto L_005bab98;
L_005bab51:; BB(0x005bab51);
    /* 005bab51: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bab56u); f_005baa7c();
    /* 005bab56: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bab60: jmp 0x5bab98 */ goto L_005bab98;
L_005bab62:; BB(0x005bab62);
    /* 005bab62: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bab67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bab69: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab6f: je 0x5bab87 */ if (fZ) goto L_005bab87;
L_005bab71:; BB(0x005bab71);
    /* 005bab71: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5bab76u); f_005baa64();
    /* 005bab76: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bab7bu); f_005baa7c();
    /* 005bab7b: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bab85: jmp 0x5bab98 */ goto L_005bab98;
L_005bab87:; BB(0x005bab87);
    /* 005bab87: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bab8d: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bab92u); f_0086dc94();
    /* 005bab92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bab93: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab96: je 0x5babcc */ if (fZ) goto L_005babcc;
L_005bab98:; BB(0x005bab98);
    /* 005bab98: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5bab9du); f_0061cdb0();
    /* 005bab9d: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5baba2u); f_005b9204();
    /* 005baba2: jmp 0x5baacc */ goto L_005baacc;
L_005baba7:; BB(0x005baba7);
    /* 005baba7: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005babac: mov ecx, dword ptr [0xa74b48] */ r_ecx = R32((u32)(0xa74b48u));
    /* 005babb2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005babb5: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5babbau); f_0082a7d8();
    /* 005babba: push 0x92b68c */ { u32 v = 0x92b68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005babbf: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5babc4u); f_005b9008();
    /* 005babc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005babc5: call 0x5baa2c */ r_esp -= 4; W32(r_esp, 0x5babcau); f_005baa2c();
    /* 005babca: jmp 0x5bab98 */ goto L_005bab98;
L_005babcc:; BB(0x005babcc);
    /* 005babcc: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005babd1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005babd4: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005babd7: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005babda: add ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005babdd: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005babe0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005babe1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005babe3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005babe5: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005babea: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005babec: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005babee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005babf0: jne 0x5babf7 */ if (!fZ) goto L_005babf7;
L_005babf2:; BB(0x005babf2);
    /* 005babf2: mov eax, 0x800 */ r_eax = 0x800u;
L_005babf7:; BB(0x005babf7);
    /* 005babf7: mov edx, eax */ r_edx = r_eax;
    /* 005babf9: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005babfc: jne 0x5bac1c */ if (!fZ) goto L_005bac1c;
L_005babfe:; BB(0x005babfe);
    /* 005babfe: mov edx, eax */ r_edx = r_eax;
    /* 005bac00: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bac02: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005bac05: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bac07: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005bac0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac0b: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bac11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac12: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bac17u); f_0086b6b8();
    /* 005bac17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bac1a: jmp 0x5bac4d */ goto L_005bac4d;
L_005bac1c:; BB(0x005bac1c);
    /* 005bac1c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bac1f: jne 0x5bac3d */ if (!fZ) goto L_005bac3d;
L_005bac21:; BB(0x005bac21);
    /* 005bac21: mov edx, eax */ r_edx = r_eax;
    /* 005bac23: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005bac26: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bac28: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bac2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bac2c: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bac32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac33: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bac38u); f_0086b6b8();
    /* 005bac38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bac3b: jmp 0x5bac4d */ goto L_005bac4d;
L_005bac3d:; BB(0x005bac3d);
    /* 005bac3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bac3e: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bac44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bac45: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5bac4au); f_0086b6b8();
    /* 005bac4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bac4d:; BB(0x005bac4d);
    /* 005bac4d: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5bac52u); f_005baa64();
    /* 005bac52: call 0x5baa2c */ r_esp -= 4; W32(r_esp, 0x5bac57u); f_005baa2c();
    /* 005bac57: jmp 0x5bab98 */ goto L_005bab98;
L_005bac5c:; BB(0x005bac5c);
    /* 005bac5c: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bac61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bac63: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bac69: je 0x5bac84 */ if (fZ) goto L_005bac84;
L_005bac6b:; BB(0x005bac6b);
    /* 005bac6b: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5bac70u); f_005baa64();
    /* 005bac70: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bac75u); f_005baa7c();
    /* 005bac75: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bac7f: jmp 0x5bab98 */ goto L_005bab98;
L_005bac84:; BB(0x005bac84);
    /* 005bac84: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bac8a: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bac8fu); f_0086dc94();
    /* 005bac8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bac90: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bac93: jne 0x5bab98 */ if (!fZ) goto L_005bab98;
L_005bac99:; BB(0x005bac99);
    /* 005bac99: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bac9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005baca1: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005baca7: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bacacu); f_0086db64();
    /* 005bacac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bacaf: mov dword ptr [0xa74b74], 2 */ W32((u32)(0xa74b74u), 0x2u);
    /* 005bacb9: jmp 0x5bab98 */ goto L_005bab98;
L_005bacbe:; BB(0x005bacbe);
    /* 005bacbe: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005bacc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bacc6: je 0x5bab98 */ if (fZ) goto L_005bab98;
L_005baccc:; BB(0x005baccc);
    /* 005baccc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bacce: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bacd3: jne 0x5bad6d */ if (!fZ) goto L_005bad6d;
L_005bacd9:; BB(0x005bacd9);
    /* 005bacd9: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bacde: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005bace0: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005bace6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bace8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bacea: jne 0x5bad77 */ if (!fZ) goto L_005bad77;
L_005bacf0:; BB(0x005bacf0);
    /* 005bacf0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bacf2: je 0x5bad03 */ if (fZ) goto L_005bad03;
L_005bacf4:; BB(0x005bacf4);
    /* 005bacf4: mov dword ptr [0xa74b74], 4 */ W32((u32)(0xa74b74u), 0x4u);
    /* 005bacfe: jmp 0x5bab98 */ goto L_005bab98;
L_005bad03:; BB(0x005bad03);
    /* 005bad03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bad05: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bad08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad09: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bad0eu); f_00708238();
    /* 005bad0e: mov ecx, eax */ r_ecx = r_eax;
    /* 005bad10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bad13: mov dword ptr [0xa74b6c], ecx */ W32((u32)(0xa74b6cu), r_ecx);
    /* 005bad19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad1b: je 0x5bab98 */ if (fZ) goto L_005bab98;
L_005bad21:; BB(0x005bad21);
    /* 005bad21: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bad26: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005bad29: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bad2c: jle 0x5bad4d */ if ((fZ||fS!=fO)) goto L_005bad4d;
L_005bad2e:; BB(0x005bad2e);
    /* 005bad2e: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bad31: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bad34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad36: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bad3bu); f_0086db64();
    /* 005bad3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bad3e: mov dword ptr [0xa74b74], 1 */ W32((u32)(0xa74b74u), 0x1u);
    /* 005bad48: jmp 0x5bab98 */ goto L_005bab98;
L_005bad4d:; BB(0x005bad4d);
    /* 005bad4d: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bad53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bad55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad56: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bad5bu); f_0086db64();
    /* 005bad5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bad5e: mov dword ptr [0xa74b74], 2 */ W32((u32)(0xa74b74u), 0x2u);
    /* 005bad68: jmp 0x5bab98 */ goto L_005bab98;
L_005bad6d:; BB(0x005bad6d);
    /* 005bad6d: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bad72u); f_005baa7c();
    /* 005bad72: jmp 0x5bab98 */ goto L_005bab98;
L_005bad77:; BB(0x005bad77);
    /* 005bad77: push 0x92b68c */ { u32 v = 0x92b68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bad7c: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5bad81u); f_005b7a44();
    /* 005bad81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bad82: mov dword ptr [0xa74b48], eax */ W32((u32)(0xa74b48u), r_eax);
    /* 005bad87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bad89: je 0x5bab98 */ if (fZ) goto L_005bab98;
L_005bad8f:; BB(0x005bad8f);
    /* 005bad8f: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bad94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bad96: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bad99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bad9a: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bad9fu); f_00708238();
    /* 005bad9f: mov edx, eax */ r_edx = r_eax;
    /* 005bada1: push dword ptr [0xa74b48] */ { u32 v = R32((u32)(0xa74b48u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bada7: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005badac: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005badaf: mov dword ptr [0xa74b6c], edx */ W32((u32)(0xa74b6cu), r_edx);
    /* 005badb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005badb6: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5badbbu); f_0086db64();
    /* 005badbb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005badbe: mov dword ptr [0xa74b74], 3 */ W32((u32)(0xa74b74u), 0x3u);
    /* 005badc8: jmp 0x5bab98 */ goto L_005bab98;
L_005badcd:; BB(0x005badcd);
    /* 005badcd: ret  */ FN_RET(0x005baacc); r_esp += 4; return;
}

void f_005badd0(void) /* sub_5BADD0 */
{
    FN_ENTER(0x005badd0);
L_005badd0:; BB(0x005badd0);
    /* 005badd0: mov edx, dword ptr [0xa74b74] */ r_edx = R32((u32)(0xa74b74u));
    /* 005badd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005badd8: jne 0x5bade7 */ if (!fZ) goto L_005bade7;
L_005badda:; BB(0x005badda);
    /* 005badda: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005baddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bade1: je 0x5baeaf */ if (fZ) goto L_005baeaf;
L_005bade7:; BB(0x005bade7);
    /* 005bade7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bade9: je 0x5bafd6 */ if (fZ) goto L_005bafd6;
L_005badef:; BB(0x005badef);
    /* 005badef: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005badf2: je 0x5baf74 */ if (fZ) goto L_005baf74;
L_005badf8:; BB(0x005badf8);
    /* 005badf8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005badfb: je 0x5bae6a */ if (fZ) goto L_005bae6a;
L_005badfd:; BB(0x005badfd);
    /* 005badfd: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae00: jne 0x5bae3e */ if (!fZ) goto L_005bae3e;
L_005bae02:; BB(0x005bae02);
    /* 005bae02: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bae07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bae09: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae0f: je 0x5bae27 */ if (fZ) goto L_005bae27;
L_005bae11:; BB(0x005bae11);
    /* 005bae11: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5bae16u); f_005baa64();
    /* 005bae16: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bae1bu); f_005baa7c();
    /* 005bae1b: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bae25: jmp 0x5baea0 */ goto L_005baea0;
L_005bae27:; BB(0x005bae27);
    /* 005bae27: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bae2d: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bae32u); f_0086dc94();
    /* 005bae32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bae33: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae36: je 0x5baebf */ if (fZ) goto L_005baebf;
L_005bae3c:; BB(0x005bae3c);
    /* 005bae3c: jmp 0x5baea0 */ goto L_005baea0;
L_005bae3e:; BB(0x005bae3e);
    /* 005bae3e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae41: jne 0x5baea0 */ if (!fZ) goto L_005baea0;
L_005bae43:; BB(0x005bae43);
    /* 005bae43: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005bae49: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005bae4c: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 005bae4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bae50: call 0x5b869c */ r_esp -= 4; W32(r_esp, 0x5bae55u); f_005b869c();
    /* 005bae55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae57: je 0x5baea0 */ if (fZ) goto L_005baea0;
L_005bae59:; BB(0x005bae59);
    /* 005bae59: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bae5eu); f_005baa7c();
    /* 005bae5e: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bae68: jmp 0x5baea0 */ goto L_005baea0;
L_005bae6a:; BB(0x005bae6a);
    /* 005bae6a: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bae6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bae71: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae77: je 0x5bae8f */ if (fZ) goto L_005bae8f;
L_005bae79:; BB(0x005bae79);
    /* 005bae79: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5bae7eu); f_005baa64();
    /* 005bae7e: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bae83u); f_005baa7c();
    /* 005bae83: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005bae8d: jmp 0x5baea0 */ goto L_005baea0;
L_005bae8f:; BB(0x005bae8f);
    /* 005bae8f: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bae95: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bae9au); f_0086dc94();
    /* 005bae9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bae9b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae9e: je 0x5baee4 */ if (fZ) goto L_005baee4;
L_005baea0:; BB(0x005baea0);
    /* 005baea0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5baea5u); f_0061cdb0();
    /* 005baea5: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x5baeaau); f_005b9204();
    /* 005baeaa: jmp 0x5badd0 */ goto L_005badd0;
L_005baeaf:; BB(0x005baeaf);
    /* 005baeaf: je 0x5baebe */ if (fZ) goto L_005baebe;
L_005baeb1:; BB(0x005baeb1);
    /* 005baeb1: or dword ptr [eax], 0x200 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005baeb7: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 005baeba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005baebc: jne 0x5baeb1 */ if (!fZ) goto L_005baeb1;
L_005baebe:; BB(0x005baebe);
    /* 005baebe: ret  */ FN_RET(0x005badd0); r_esp += 4; return;
L_005baebf:; BB(0x005baebf);
    /* 005baebf: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005baec4: mov ecx, dword ptr [0xa74b48] */ r_ecx = R32((u32)(0xa74b48u));
    /* 005baeca: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005baecd: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5baed2u); f_0082a7d8();
    /* 005baed2: push 0x92b68c */ { u32 v = 0x92b68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005baed7: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5baedcu); f_005b9008();
    /* 005baedc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005baedd: call 0x5baa2c */ r_esp -= 4; W32(r_esp, 0x5baee2u); f_005baa2c();
    /* 005baee2: jmp 0x5baea0 */ goto L_005baea0;
L_005baee4:; BB(0x005baee4);
    /* 005baee4: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005baee9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005baeec: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005baeef: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005baef2: add ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005baef5: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005baef8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005baef9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005baefb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005baefd: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005baf02: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005baf04: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005baf06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baf08: jne 0x5baf0f */ if (!fZ) goto L_005baf0f;
L_005baf0a:; BB(0x005baf0a);
    /* 005baf0a: mov eax, 0x800 */ r_eax = 0x800u;
L_005baf0f:; BB(0x005baf0f);
    /* 005baf0f: mov edx, eax */ r_edx = r_eax;
    /* 005baf11: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005baf14: jne 0x5baf34 */ if (!fZ) goto L_005baf34;
L_005baf16:; BB(0x005baf16);
    /* 005baf16: mov edx, eax */ r_edx = r_eax;
    /* 005baf18: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005baf1a: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005baf1d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005baf1f: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005baf22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf23: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005baf29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf2a: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5baf2fu); f_0086b6b8();
    /* 005baf2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf32: jmp 0x5baf65 */ goto L_005baf65;
L_005baf34:; BB(0x005baf34);
    /* 005baf34: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baf37: jne 0x5baf55 */ if (!fZ) goto L_005baf55;
L_005baf39:; BB(0x005baf39);
    /* 005baf39: mov edx, eax */ r_edx = r_eax;
    /* 005baf3b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005baf3e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005baf40: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005baf43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baf44: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005baf4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf4b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5baf50u); f_0086b6b8();
    /* 005baf50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf53: jmp 0x5baf65 */ goto L_005baf65;
L_005baf55:; BB(0x005baf55);
    /* 005baf55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baf56: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005baf5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf5d: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x5baf62u); f_0086b6b8();
    /* 005baf62: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005baf65:; BB(0x005baf65);
    /* 005baf65: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5baf6au); f_005baa64();
    /* 005baf6a: call 0x5baa2c */ r_esp -= 4; W32(r_esp, 0x5baf6fu); f_005baa2c();
    /* 005baf6f: jmp 0x5baea0 */ goto L_005baea0;
L_005baf74:; BB(0x005baf74);
    /* 005baf74: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005baf79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005baf7b: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baf81: je 0x5baf9c */ if (fZ) goto L_005baf9c;
L_005baf83:; BB(0x005baf83);
    /* 005baf83: call 0x5baa64 */ r_esp -= 4; W32(r_esp, 0x5baf88u); f_005baa64();
    /* 005baf88: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5baf8du); f_005baa7c();
    /* 005baf8d: mov dword ptr [0xa74b74], 0 */ W32((u32)(0xa74b74u), 0x0u);
    /* 005baf97: jmp 0x5baea0 */ goto L_005baea0;
L_005baf9c:; BB(0x005baf9c);
    /* 005baf9c: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bafa2: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5bafa7u); f_0086dc94();
    /* 005bafa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bafa8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bafab: jne 0x5baea0 */ if (!fZ) goto L_005baea0;
L_005bafb1:; BB(0x005bafb1);
    /* 005bafb1: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bafb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bafb9: push dword ptr [0xa74b6c] */ { u32 v = R32((u32)(0xa74b6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bafbf: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bafc4u); f_0086db64();
    /* 005bafc4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bafc7: mov dword ptr [0xa74b74], 2 */ W32((u32)(0xa74b74u), 0x2u);
    /* 005bafd1: jmp 0x5baea0 */ goto L_005baea0;
L_005bafd6:; BB(0x005bafd6);
    /* 005bafd6: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005bafdc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bafde: je 0x5baea0 */ if (fZ) goto L_005baea0;
L_005bafe4:; BB(0x005bafe4);
    /* 005bafe4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bafe6: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bafeb: jne 0x5bb085 */ if (!fZ) goto L_005bb085;
L_005baff1:; BB(0x005baff1);
    /* 005baff1: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005baff6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005baff8: mov edx, dword ptr [0xa74b64] */ r_edx = R32((u32)(0xa74b64u));
    /* 005baffe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bb000: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bb002: jne 0x5bb08f */ if (!fZ) goto L_005bb08f;
L_005bb008:; BB(0x005bb008);
    /* 005bb008: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bb00a: je 0x5bb01b */ if (fZ) goto L_005bb01b;
L_005bb00c:; BB(0x005bb00c);
    /* 005bb00c: mov dword ptr [0xa74b74], 4 */ W32((u32)(0xa74b74u), 0x4u);
    /* 005bb016: jmp 0x5baea0 */ goto L_005baea0;
L_005bb01b:; BB(0x005bb01b);
    /* 005bb01b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb01d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb021: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bb026u); f_00708238();
    /* 005bb026: mov ecx, eax */ r_ecx = r_eax;
    /* 005bb028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb02b: mov dword ptr [0xa74b6c], ecx */ W32((u32)(0xa74b6cu), r_ecx);
    /* 005bb031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb033: je 0x5baea0 */ if (fZ) goto L_005baea0;
L_005bb039:; BB(0x005bb039);
    /* 005bb039: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bb03e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005bb041: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bb044: jle 0x5bb065 */ if ((fZ||fS!=fO)) goto L_005bb065;
L_005bb046:; BB(0x005bb046);
    /* 005bb046: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb049: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb04d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb04e: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb053u); f_0086db64();
    /* 005bb053: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb056: mov dword ptr [0xa74b74], 1 */ W32((u32)(0xa74b74u), 0x1u);
    /* 005bb060: jmp 0x5baea0 */ goto L_005baea0;
L_005bb065:; BB(0x005bb065);
    /* 005bb065: push dword ptr [0xa74b70] */ { u32 v = R32((u32)(0xa74b70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb06b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb06d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb06e: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb073u); f_0086db64();
    /* 005bb073: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb076: mov dword ptr [0xa74b74], 2 */ W32((u32)(0xa74b74u), 0x2u);
    /* 005bb080: jmp 0x5baea0 */ goto L_005baea0;
L_005bb085:; BB(0x005bb085);
    /* 005bb085: call 0x5baa7c */ r_esp -= 4; W32(r_esp, 0x5bb08au); f_005baa7c();
    /* 005bb08a: jmp 0x5baea0 */ goto L_005baea0;
L_005bb08f:; BB(0x005bb08f);
    /* 005bb08f: push 0x92b68c */ { u32 v = 0x92b68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bb094: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5bb099u); f_005b7a44();
    /* 005bb099: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb09a: mov dword ptr [0xa74b48], eax */ W32((u32)(0xa74b48u), r_eax);
    /* 005bb09f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb0a1: je 0x5baea0 */ if (fZ) goto L_005baea0;
L_005bb0a7:; BB(0x005bb0a7);
    /* 005bb0a7: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bb0ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0ae: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb0b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0b2: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5bb0b7u); f_00708238();
    /* 005bb0b7: mov edx, eax */ r_edx = r_eax;
    /* 005bb0b9: push dword ptr [0xa74b48] */ { u32 v = R32((u32)(0xa74b48u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb0bf: mov eax, dword ptr [0xa74b64] */ r_eax = R32((u32)(0xa74b64u));
    /* 005bb0c4: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bb0c7: mov dword ptr [0xa74b6c], edx */ W32((u32)(0xa74b6cu), r_edx);
    /* 005bb0cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb0ce: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5bb0d3u); f_0086db64();
    /* 005bb0d3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb0d6: mov dword ptr [0xa74b74], 3 */ W32((u32)(0xa74b74u), 0x3u);
    /* 005bb0e0: jmp 0x5baea0 */ goto L_005baea0;
}

