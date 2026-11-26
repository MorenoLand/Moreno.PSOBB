#include "protos.h"

void f_0080d01c(void) /* sub_80D01C */
{
    FN_ENTER(0x0080d01c);
    /* 0080d01c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080d01f: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0080d024: mov edx, dword ptr [eax*4 + 0xaafe00] */ r_edx = R32((u32)(r_eax*4+0xaafe00u));
    /* 0080d02b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d02d: je 0x80d06d */ if (fZ) goto L_0080d06d;
L_0080d02f:; BB(0x0080d02f);
    /* 0080d02f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0080d032: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d035: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d037: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d039: jle 0x80d06d */ if ((fZ||fS!=fO)) goto L_0080d06d;
L_0080d03b:; BB(0x0080d03b);
    /* 0080d03b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080d03f: mov ebx, eax */ r_ebx = r_eax;
    /* 0080d041: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0080d045: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0080d048: mov esi, edx */ r_esi = r_edx;
    /* 0080d04a: mov edi, ecx */ r_edi = r_ecx;
L_0080d04c:; BB(0x0080d04c);
    /* 0080d04c: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 0080d050: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080d052: jne 0x80d058 */ if (!fZ) goto L_0080d058;
L_0080d054:; BB(0x0080d054);
    /* 0080d054: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080d056: jne 0x80d071 */ if (!fZ) goto L_0080d071;
L_0080d058:; BB(0x0080d058);
    /* 0080d058: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080d05b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d05e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d060: jl 0x80d04c */ if ((fS!=fO)) goto L_0080d04c;
L_0080d062:; BB(0x0080d062);
    /* 0080d062: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080d066: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0080d06a: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0080d06d:; BB(0x0080d06d);
    /* 0080d06d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d070: ret  */ FN_RET(0x0080d01c); r_esp += 4; return;
L_0080d071:; BB(0x0080d071);
    /* 0080d071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d072: movzx eax, word ptr [esi + 6] */ r_eax = (u32)R16((u32)(r_esi+0x6u));
    /* 0080d076: call dword ptr [eax*4 + 0xa11e24] */ { u32 t = R32((u32)(r_eax*4+0xa11e24u)); r_esp -= 4; W32(r_esp, 0x80d07du); call_ind(t); }
    /* 0080d07d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d07e: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0080d082: or eax, 0xffff0006 */ {  u32 a = r_eax; u32 b = 0xffff0006u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080d087: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 0080d08b: jmp 0x80d058 */ goto L_0080d058;
}

void f_0080d090(void) /* sub_80D090 */
{
    FN_ENTER(0x0080d090);
    /* 0080d090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d092: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d093: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0080d097: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0080d09b: mov eax, dword ptr [esi*4 + 0xaafe00] */ r_eax = R32((u32)(r_esi*4+0xaafe00u));
    /* 0080d0a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d0a4: je 0x80d0bd */ if (fZ) goto L_0080d0bd;
L_0080d0a6:; BB(0x0080d0a6);
    /* 0080d0a6: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0ad: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x80d0b2u); f_007a8b04();
    /* 0080d0b2: mov dword ptr [esi*4 + 0xaafe00], 0 */ W32((u32)(r_esi*4+0xaafe00u), 0x0u);
L_0080d0bd:; BB(0x0080d0bd);
    /* 0080d0bd: push 0x91eaac */ { u32 v = 0x91eaacu; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0c2: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80d0c7u); f_005ba214();
    /* 0080d0c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0c8: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80d0cdu); f_005b9328();
    /* 0080d0cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080d0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d0d2: jle 0x80d10a */ if ((fZ||fS!=fO)) goto L_0080d10a;
L_0080d0d4:; BB(0x0080d0d4);
    /* 0080d0d4: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d0da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0db: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x80d0e0u); f_007a8a38();
    /* 0080d0e0: mov edi, eax */ r_edi = r_eax;
    /* 0080d0e2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d0e4: je 0x80d10a */ if (fZ) goto L_0080d10a;
L_0080d0e6:; BB(0x0080d0e6);
    /* 0080d0e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0e8: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80d0edu); f_005b9910();
    /* 0080d0ed: mov dword ptr [esi*4 + 0xaafe00], edi */ W32((u32)(r_esi*4+0xaafe00u), r_edi);
    /* 0080d0f4: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d0f9: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80d0feu); f_005ba214();
    /* 0080d0fe: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d103: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d106: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d107: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d108: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d109: ret  */ FN_RET(0x0080d090); r_esp += 4; return;
L_0080d10a:; BB(0x0080d10a);
    /* 0080d10a: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d10f: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80d114u); f_005ba214();
    /* 0080d114: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d117: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d118: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d11a: ret  */ FN_RET(0x0080d090); r_esp += 4; return;
}

void f_0080d11c(void) /* sub_80D11C */
{
    FN_ENTER(0x0080d11c);
    /* 0080d11c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d11d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d11e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d11f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0080d123: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0080d127: mov eax, dword ptr [esi*4 + 0xaafe00] */ r_eax = R32((u32)(r_esi*4+0xaafe00u));
    /* 0080d12e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d130: je 0x80d149 */ if (fZ) goto L_0080d149;
L_0080d132:; BB(0x0080d132);
    /* 0080d132: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d139: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x80d13eu); f_007a8b04();
    /* 0080d13e: mov dword ptr [esi*4 + 0xaafe00], 0 */ W32((u32)(r_esi*4+0xaafe00u), 0x0u);
L_0080d149:; BB(0x0080d149);
    /* 0080d149: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d14a: call 0x5b9fe4 */ r_esp -= 4; W32(r_esp, 0x80d14fu); f_005b9fe4();
    /* 0080d14f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d152: jle 0x80d180 */ if ((fZ||fS!=fO)) goto L_0080d180;
L_0080d154:; BB(0x0080d154);
    /* 0080d154: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d15a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d15b: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x80d160u); f_007a8a38();
    /* 0080d160: mov edi, eax */ r_edi = r_eax;
    /* 0080d162: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d164: je 0x80d180 */ if (fZ) goto L_0080d180;
L_0080d166:; BB(0x0080d166);
    /* 0080d166: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d168: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x80d16du); f_005b9ec4();
    /* 0080d16d: mov dword ptr [esi*4 + 0xaafe00], edi */ W32((u32)(r_esi*4+0xaafe00u), r_edi);
    /* 0080d174: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d179: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d17c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d17d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d17e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d17f: ret  */ FN_RET(0x0080d11c); r_esp += 4; return;
L_0080d180:; BB(0x0080d180);
    /* 0080d180: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d182: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d183: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d184: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d185: ret  */ FN_RET(0x0080d11c); r_esp += 4; return;
}

void f_0080d188(void) /* sub_80D188 */
{
    FN_ENTER(0x0080d188);
    /* 0080d188: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d189: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080d18d: mov ebx, dword ptr [eax*4 + 0xaafe00] */ r_ebx = R32((u32)(r_eax*4+0xaafe00u));
    /* 0080d194: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d196: je 0x80d1bf */ if (fZ) goto L_0080d1bf;
L_0080d198:; BB(0x0080d198);
    /* 0080d198: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0080d19b: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d19e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d1a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d1a2: jle 0x80d1bf */ if ((fZ||fS!=fO)) goto L_0080d1bf;
L_0080d1a4:; BB(0x0080d1a4);
    /* 0080d1a4: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0080d1a6: cmp ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d1aa: jne 0x80d1b5 */ if (!fZ) goto L_0080d1b5;
L_0080d1ac:; BB(0x0080d1ac);
    /* 0080d1ac: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0080d1b0: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080d1b3: je 0x80d1c3 */ if (fZ) goto L_0080d1c3;
L_0080d1b5:; BB(0x0080d1b5);
    /* 0080d1b5: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d1b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d1bb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d1bd: jl 0x80d1a4 */ if ((fS!=fO)) goto L_0080d1a4;
L_0080d1bf:; BB(0x0080d1bf);
    /* 0080d1bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d1c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d1c2: ret  */ FN_RET(0x0080d188); r_esp += 4; return;
L_0080d1c3:; BB(0x0080d1c3);
    /* 0080d1c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d1c4: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 0080d1c8: call dword ptr [eax*4 + 0xa11e24] */ { u32 t = R32((u32)(r_eax*4+0xa11e24u)); r_esp -= 4; W32(r_esp, 0x80d1cfu); call_ind(t); }
    /* 0080d1cf: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0080d1d3: or edx, 0xffff0006 */ {  u32 a = r_edx; u32 b = 0xffff0006u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d1d9: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0080d1dd: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d1e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d1e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d1e4: ret  */ FN_RET(0x0080d188); r_esp += 4; return;
}

void f_0080d1e8(void) /* sub_80D1E8 */
{
    FN_ENTER(0x0080d1e8);
    /* 0080d1e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d1e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d1ea: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0080d1ee: cmp edi, 0x11 */ {  u32 a = r_edi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d1f1: jg 0x80d1fe */ if ((!fZ&&fS==fO)) goto L_0080d1fe;
L_0080d1f3:; BB(0x0080d1f3);
    /* 0080d1f3: mov eax, dword ptr [edi*4 + 0xaafe00] */ r_eax = R32((u32)(r_edi*4+0xaafe00u));
    /* 0080d1fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d1fc: je 0x80d203 */ if (fZ) goto L_0080d203;
L_0080d1fe:; BB(0x0080d1fe);
    /* 0080d1fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d200: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d201: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d202: ret  */ FN_RET(0x0080d1e8); r_esp += 4; return;
L_0080d203:; BB(0x0080d203);
    /* 0080d203: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080d207: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d20d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d20e: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x80d213u); f_007a8a38();
    /* 0080d213: mov esi, eax */ r_esi = r_eax;
    /* 0080d215: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d217: je 0x80d1fe */ if (fZ) goto L_0080d1fe;
L_0080d219:; BB(0x0080d219);
    /* 0080d219: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0080d21d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d21e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d222: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d223: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80d228u); f_0086b6b8();
    /* 0080d228: mov dword ptr [edi*4 + 0xaafe00], esi */ W32((u32)(r_edi*4+0xaafe00u), r_esi);
    /* 0080d22f: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d234: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d237: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d238: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d239: ret  */ FN_RET(0x0080d1e8); r_esp += 4; return;
}

void f_0080d23c(void) /* sub_80D23C */
{
    FN_ENTER(0x0080d23c);
    /* 0080d23c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d23d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080d241: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d244: jg 0x80d251 */ if ((!fZ&&fS==fO)) goto L_0080d251;
L_0080d246:; BB(0x0080d246);
    /* 0080d246: mov eax, dword ptr [ebx*4 + 0xaafe00] */ r_eax = R32((u32)(r_ebx*4+0xaafe00u));
    /* 0080d24d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d24f: je 0x80d255 */ if (fZ) goto L_0080d255;
L_0080d251:; BB(0x0080d251);
    /* 0080d251: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d253: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d254: ret  */ FN_RET(0x0080d23c); r_esp += 4; return;
L_0080d255:; BB(0x0080d255);
    /* 0080d255: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d259: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d25f: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x80d264u); f_007a8a38();
    /* 0080d264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d266: je 0x80d251 */ if (fZ) goto L_0080d251;
L_0080d268:; BB(0x0080d268);
    /* 0080d268: mov dword ptr [ebx*4 + 0xaafe00], eax */ W32((u32)(r_ebx*4+0xaafe00u), r_eax);
    /* 0080d26f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d270: ret  */ FN_RET(0x0080d23c); r_esp += 4; return;
}

void f_0080d274(void) /* sub_80D274 */
{
    FN_ENTER(0x0080d274);
    /* 0080d274: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080d277: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080d27b: mov edx, dword ptr [eax*4 + 0xaafe00] */ r_edx = R32((u32)(r_eax*4+0xaafe00u));
    /* 0080d282: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d284: je 0x80d2c4 */ if (fZ) goto L_0080d2c4;
L_0080d286:; BB(0x0080d286);
    /* 0080d286: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0080d289: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d28c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d28e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d290: jle 0x80d2bb */ if ((fZ||fS!=fO)) goto L_0080d2bb;
L_0080d292:; BB(0x0080d292);
    /* 0080d292: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080d296: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0080d299: movzx esi, word ptr [esp + 0x14] */ r_esi = (u32)R16((u32)(r_esp+0x14u));
L_0080d29e:; BB(0x0080d29e);
    /* 0080d29e: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0080d2a0: cmp ebx, dword ptr [esp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d2a4: jne 0x80d2aa */ if (!fZ) goto L_0080d2aa;
L_0080d2a6:; BB(0x0080d2a6);
    /* 0080d2a6: or word ptr [edx + 4], si */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_esi; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
L_0080d2aa:; BB(0x0080d2aa);
    /* 0080d2aa: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d2ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d2b0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d2b2: jl 0x80d29e */ if ((fS!=fO)) goto L_0080d29e;
L_0080d2b4:; BB(0x0080d2b4);
    /* 0080d2b4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080d2b8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0080d2bb:; BB(0x0080d2bb);
    /* 0080d2bb: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d2c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d2c3: ret  */ FN_RET(0x0080d274); r_esp += 4; return;
L_0080d2c4:; BB(0x0080d2c4);
    /* 0080d2c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d2c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d2c9: ret  */ FN_RET(0x0080d274); r_esp += 4; return;
}

void f_0080d2cc(void) /* sub_80D2CC */
{
    FN_ENTER(0x0080d2cc);
    /* 0080d2cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d2cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d2ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080d2cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0080d2d1:; BB(0x0080d2d1);
    /* 0080d2d1: mov ecx, dword ptr [eax + 0xaafe00] */ r_ecx = R32((u32)(r_eax+0xaafe00u));
    /* 0080d2d7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d2da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d2dc: je 0x80d322 */ if (fZ) goto L_0080d322;
L_0080d2de:; BB(0x0080d2de);
    /* 0080d2de: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 0080d2e1: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d2e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080d2e6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d2e8: jle 0x80d322 */ if ((fZ||fS!=fO)) goto L_0080d322;
L_0080d2ea:; BB(0x0080d2ea);
    /* 0080d2ea: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d2ed: jl 0x80d312 */ if ((fS!=fO)) goto L_0080d312;
L_0080d2ef:; BB(0x0080d2ef);
    /* 0080d2ef: lea esi, [ebp - 6] */ r_esi = (u32)(r_ebp+0xfffffffau);
L_0080d2f2:; BB(0x0080d2f2);
    /* 0080d2f2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0080d2f4: mov word ptr [ecx + 4], di */ W16((u32)(r_ecx+0x4u), (u16)r_edi);
    /* 0080d2f8: mov word ptr [ecx + 0x18], di */ W16((u32)(r_ecx+0x18u), (u16)r_edi);
    /* 0080d2fc: mov word ptr [ecx + 0x2c], di */ W16((u32)(r_ecx+0x2cu), (u16)r_edi);
    /* 0080d300: mov word ptr [ecx + 0x40], di */ W16((u32)(r_ecx+0x40u), (u16)r_edi);
    /* 0080d304: mov word ptr [ecx + 0x54], di */ W16((u32)(r_ecx+0x54u), (u16)r_edi);
    /* 0080d308: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d30b: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d30e: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d310: jle 0x80d2f2 */ if ((fZ||fS!=fO)) goto L_0080d2f2;
L_0080d312:; BB(0x0080d312);
    /* 0080d312: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080d314: mov word ptr [ecx + 4], si */ W16((u32)(r_ecx+0x4u), (u16)r_esi);
    /* 0080d318: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d31b: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d31e: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d320: jl 0x80d312 */ if ((fS!=fO)) goto L_0080d312;
L_0080d322:; BB(0x0080d322);
    /* 0080d322: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080d325: jl 0x80d2d1 */ if ((fS!=fO)) goto L_0080d2d1;
L_0080d327:; BB(0x0080d327);
    /* 0080d327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080d328: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d329: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d32a: ret  */ FN_RET(0x0080d2cc); r_esp += 4; return;
}

void f_0080d32c(void) /* sub_80D32C */
{
    FN_ENTER(0x0080d32c);
    /* 0080d32c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080d32f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0080d333: mov eax, dword ptr [0xaafe00] */ r_eax = R32((u32)(0xaafe00u));
    /* 0080d338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d33a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d33c: je 0x80d341 */ if (fZ) goto L_0080d341;
L_0080d33e:; BB(0x0080d33e);
    /* 0080d33e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
L_0080d341:; BB(0x0080d341);
    /* 0080d341: mov eax, dword ptr [0xaafe04] */ r_eax = R32((u32)(0xaafe04u));
    /* 0080d346: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d348: je 0x80d34d */ if (fZ) goto L_0080d34d;
L_0080d34a:; BB(0x0080d34a);
    /* 0080d34a: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d34d:; BB(0x0080d34d);
    /* 0080d34d: mov eax, dword ptr [0xaafe08] */ r_eax = R32((u32)(0xaafe08u));
    /* 0080d352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d354: je 0x80d359 */ if (fZ) goto L_0080d359;
L_0080d356:; BB(0x0080d356);
    /* 0080d356: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d359:; BB(0x0080d359);
    /* 0080d359: mov eax, dword ptr [0xaafe0c] */ r_eax = R32((u32)(0xaafe0cu));
    /* 0080d35e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d360: je 0x80d365 */ if (fZ) goto L_0080d365;
L_0080d362:; BB(0x0080d362);
    /* 0080d362: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d365:; BB(0x0080d365);
    /* 0080d365: mov eax, dword ptr [0xaafe10] */ r_eax = R32((u32)(0xaafe10u));
    /* 0080d36a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d36c: je 0x80d371 */ if (fZ) goto L_0080d371;
L_0080d36e:; BB(0x0080d36e);
    /* 0080d36e: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d371:; BB(0x0080d371);
    /* 0080d371: mov eax, dword ptr [0xaafe14] */ r_eax = R32((u32)(0xaafe14u));
    /* 0080d376: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d378: je 0x80d37d */ if (fZ) goto L_0080d37d;
L_0080d37a:; BB(0x0080d37a);
    /* 0080d37a: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d37d:; BB(0x0080d37d);
    /* 0080d37d: mov eax, dword ptr [0xaafe18] */ r_eax = R32((u32)(0xaafe18u));
    /* 0080d382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d384: je 0x80d389 */ if (fZ) goto L_0080d389;
L_0080d386:; BB(0x0080d386);
    /* 0080d386: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d389:; BB(0x0080d389);
    /* 0080d389: mov eax, dword ptr [0xaafe1c] */ r_eax = R32((u32)(0xaafe1cu));
    /* 0080d38e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d390: je 0x80d395 */ if (fZ) goto L_0080d395;
L_0080d392:; BB(0x0080d392);
    /* 0080d392: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d395:; BB(0x0080d395);
    /* 0080d395: mov eax, dword ptr [0xaafe20] */ r_eax = R32((u32)(0xaafe20u));
    /* 0080d39a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d39c: je 0x80d3a1 */ if (fZ) goto L_0080d3a1;
L_0080d39e:; BB(0x0080d39e);
    /* 0080d39e: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3a1:; BB(0x0080d3a1);
    /* 0080d3a1: mov eax, dword ptr [0xaafe24] */ r_eax = R32((u32)(0xaafe24u));
    /* 0080d3a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3a8: je 0x80d3ad */ if (fZ) goto L_0080d3ad;
L_0080d3aa:; BB(0x0080d3aa);
    /* 0080d3aa: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3ad:; BB(0x0080d3ad);
    /* 0080d3ad: mov eax, dword ptr [0xaafe28] */ r_eax = R32((u32)(0xaafe28u));
    /* 0080d3b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3b4: je 0x80d3b9 */ if (fZ) goto L_0080d3b9;
L_0080d3b6:; BB(0x0080d3b6);
    /* 0080d3b6: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3b9:; BB(0x0080d3b9);
    /* 0080d3b9: mov eax, dword ptr [0xaafe2c] */ r_eax = R32((u32)(0xaafe2cu));
    /* 0080d3be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3c0: je 0x80d3c5 */ if (fZ) goto L_0080d3c5;
L_0080d3c2:; BB(0x0080d3c2);
    /* 0080d3c2: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3c5:; BB(0x0080d3c5);
    /* 0080d3c5: mov eax, dword ptr [0xaafe30] */ r_eax = R32((u32)(0xaafe30u));
    /* 0080d3ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3cc: je 0x80d3d1 */ if (fZ) goto L_0080d3d1;
L_0080d3ce:; BB(0x0080d3ce);
    /* 0080d3ce: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3d1:; BB(0x0080d3d1);
    /* 0080d3d1: mov eax, dword ptr [0xaafe34] */ r_eax = R32((u32)(0xaafe34u));
    /* 0080d3d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3d8: je 0x80d3dd */ if (fZ) goto L_0080d3dd;
L_0080d3da:; BB(0x0080d3da);
    /* 0080d3da: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3dd:; BB(0x0080d3dd);
    /* 0080d3dd: mov eax, dword ptr [0xaafe38] */ r_eax = R32((u32)(0xaafe38u));
    /* 0080d3e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3e4: je 0x80d3e9 */ if (fZ) goto L_0080d3e9;
L_0080d3e6:; BB(0x0080d3e6);
    /* 0080d3e6: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3e9:; BB(0x0080d3e9);
    /* 0080d3e9: mov eax, dword ptr [0xaafe3c] */ r_eax = R32((u32)(0xaafe3cu));
    /* 0080d3ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3f0: je 0x80d3f5 */ if (fZ) goto L_0080d3f5;
L_0080d3f2:; BB(0x0080d3f2);
    /* 0080d3f2: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d3f5:; BB(0x0080d3f5);
    /* 0080d3f5: mov eax, dword ptr [0xaafe40] */ r_eax = R32((u32)(0xaafe40u));
    /* 0080d3fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d3fc: je 0x80d401 */ if (fZ) goto L_0080d401;
L_0080d3fe:; BB(0x0080d3fe);
    /* 0080d3fe: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d401:; BB(0x0080d401);
    /* 0080d401: mov eax, dword ptr [0xaafe44] */ r_eax = R32((u32)(0xaafe44u));
    /* 0080d406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d408: je 0x80d40d */ if (fZ) goto L_0080d40d;
L_0080d40a:; BB(0x0080d40a);
    /* 0080d40a: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080d40d:; BB(0x0080d40d);
    /* 0080d40d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080d411: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d413: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0080d416: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0080d41a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d41c: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0080d420: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
L_0080d424:; BB(0x0080d424);
    /* 0080d424: mov ebp, dword ptr [eax + 0xaafe00] */ r_ebp = R32((u32)(r_eax+0xaafe00u));
    /* 0080d42a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d42d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d42f: je 0x80d4b5 */ if (fZ) goto L_0080d4b5;
L_0080d435:; BB(0x0080d435);
    /* 0080d435: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0080d438: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080d43b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d43d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d43f: jle 0x80d4b5 */ if ((fZ||fS!=fO)) goto L_0080d4b5;
L_0080d441:; BB(0x0080d441);
    /* 0080d441: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d444: jl 0x80d49b */ if ((fS!=fO)) goto L_0080d49b;
L_0080d446:; BB(0x0080d446);
    /* 0080d446: lea ecx, [esi - 6] */ r_ecx = (u32)(r_esi+0xfffffffau);
L_0080d449:; BB(0x0080d449);
    /* 0080d449: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0080d44d: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080d453: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 0080d456: movzx edi, word ptr [ebp + 0x18] */ r_edi = (u32)R16((u32)(r_ebp+0x18u));
    /* 0080d45a: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d45d: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080d463: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 0080d467: movzx edi, word ptr [ebp + 0x2c] */ r_edi = (u32)R16((u32)(r_ebp+0x2cu));
    /* 0080d46b: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080d471: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 0080d475: movzx edi, word ptr [ebp + 0x40] */ r_edi = (u32)R16((u32)(r_ebp+0x40u));
    /* 0080d479: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080d47f: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0080d483: movzx edi, word ptr [ebp + 0x54] */ r_edi = (u32)R16((u32)(r_ebp+0x54u));
    /* 0080d487: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080d48d: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 0080d491: add ebp, 0x64 */ {  u32 a = r_ebp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080d494: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d497: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d499: jle 0x80d449 */ if ((fZ||fS!=fO)) goto L_0080d449;
L_0080d49b:; BB(0x0080d49b);
    /* 0080d49b: movzx ecx, word ptr [ebp + 4] */ r_ecx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0080d49f: and ecx, 0xfffd */ {  u32 a = r_ecx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d4a5: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0080d4a8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d4ab: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080d4ae: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d4b1: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d4b3: jl 0x80d49b */ if ((fS!=fO)) goto L_0080d49b;
L_0080d4b5:; BB(0x0080d4b5);
    /* 0080d4b5: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d4b8: jl 0x80d424 */ if ((fS!=fO)) goto L_0080d424;
L_0080d4be:; BB(0x0080d4be);
    /* 0080d4be: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0080d4c1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080d4c5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0080d4c9: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0080d4cd: mov eax, ecx */ r_eax = r_ecx;
    /* 0080d4cf: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0080d4d3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d4d6: ret  */ FN_RET(0x0080d32c); r_esp += 4; return;
}

void f_0080d4d8(void) /* sub_80D4D8 */
{
    FN_ENTER(0x0080d4d8);
    /* 0080d4d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d4d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d4da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080d4db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d4dc: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0080d4e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0080d4e2:; BB(0x0080d4e2);
    /* 0080d4e2: mov ebp, dword ptr [eax + 0xaafe00] */ r_ebp = R32((u32)(r_eax+0xaafe00u));
    /* 0080d4e8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d4eb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d4ed: je 0x80d54b */ if (fZ) goto L_0080d54b;
L_0080d4ef:; BB(0x0080d4ef);
    /* 0080d4ef: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0080d4f2: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080d4f5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d4f7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d4f9: jle 0x80d54b */ if ((fZ||fS!=fO)) goto L_0080d54b;
L_0080d4fb:; BB(0x0080d4fb);
    /* 0080d4fb: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d4fe: jl 0x80d537 */ if ((fS!=fO)) goto L_0080d537;
L_0080d500:; BB(0x0080d500);
    /* 0080d500: lea ecx, [esi - 6] */ r_ecx = (u32)(r_esi+0xfffffffau);
L_0080d503:; BB(0x0080d503);
    /* 0080d503: movzx edi, word ptr [edx] */ r_edi = (u32)R16((u32)(r_edx));
    /* 0080d506: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 0080d50a: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 0080d50e: mov word ptr [ebp + 0x18], di */ W16((u32)(r_ebp+0x18u), (u16)r_edi);
    /* 0080d512: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 0080d516: mov word ptr [ebp + 0x2c], di */ W16((u32)(r_ebp+0x2cu), (u16)r_edi);
    /* 0080d51a: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 0080d51e: mov word ptr [ebp + 0x40], di */ W16((u32)(r_ebp+0x40u), (u16)r_edi);
    /* 0080d522: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 0080d526: mov word ptr [ebp + 0x54], di */ W16((u32)(r_ebp+0x54u), (u16)r_edi);
    /* 0080d52a: add ebp, 0x64 */ {  u32 a = r_ebp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080d52d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d530: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d533: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d535: jle 0x80d503 */ if ((fZ||fS!=fO)) goto L_0080d503;
L_0080d537:; BB(0x0080d537);
    /* 0080d537: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080d53a: mov word ptr [ebp + 4], cx */ W16((u32)(r_ebp+0x4u), (u16)r_ecx);
    /* 0080d53e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d541: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080d544: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d547: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d549: jl 0x80d537 */ if ((fS!=fO)) goto L_0080d537;
L_0080d54b:; BB(0x0080d54b);
    /* 0080d54b: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080d54e: jl 0x80d4e2 */ if ((fS!=fO)) goto L_0080d4e2;
L_0080d550:; BB(0x0080d550);
    /* 0080d550: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080d552: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d553: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080d554: ret  */ FN_RET(0x0080d4d8); r_esp += 4; return;
}

void f_0080d558(void) /* sub_80D558 */
{
    FN_ENTER(0x0080d558);
    /* 0080d558: mov dword ptr [0xaafe48], 0x3f800000 */ W32((u32)(0xaafe48u), 0x3f800000u);
    /* 0080d562: mov dword ptr [0xaafe4c], 0x41000000 */ W32((u32)(0xaafe4cu), 0x41000000u);
    /* 0080d56c: mov dword ptr [0xaafe50], 0x3fc00000 */ W32((u32)(0xaafe50u), 0x3fc00000u);
    /* 0080d576: ret  */ FN_RET(0x0080d558); r_esp += 4; return;
}

void f_0080d578(void) /* sub_80D578 */
{
    FN_ENTER(0x0080d578);
    /* 0080d578: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080d57b: mov dword ptr [0xaafe5c], 0xffffffff */ W32((u32)(0xaafe5cu), 0xffffffffu);
    /* 0080d585: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d587: mov dword ptr [0xaafe00], eax */ W32((u32)(0xaafe00u), r_eax);
    /* 0080d58c: push 0x969bc0 */ { u32 v = 0x969bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d591: mov dword ptr [0xaafe04], eax */ W32((u32)(0xaafe04u), r_eax);
    /* 0080d596: mov dword ptr [0xaafe08], eax */ W32((u32)(0xaafe08u), r_eax);
    /* 0080d59b: mov dword ptr [0xaafe0c], eax */ W32((u32)(0xaafe0cu), r_eax);
    /* 0080d5a0: mov dword ptr [0xaafe10], eax */ W32((u32)(0xaafe10u), r_eax);
    /* 0080d5a5: mov dword ptr [0xaafe14], eax */ W32((u32)(0xaafe14u), r_eax);
    /* 0080d5aa: mov dword ptr [0xaafe18], eax */ W32((u32)(0xaafe18u), r_eax);
    /* 0080d5af: mov dword ptr [0xaafe1c], eax */ W32((u32)(0xaafe1cu), r_eax);
    /* 0080d5b4: mov dword ptr [0xaafe20], eax */ W32((u32)(0xaafe20u), r_eax);
    /* 0080d5b9: mov dword ptr [0xaafe24], eax */ W32((u32)(0xaafe24u), r_eax);
    /* 0080d5be: mov dword ptr [0xaafe28], eax */ W32((u32)(0xaafe28u), r_eax);
    /* 0080d5c3: mov dword ptr [0xaafe2c], eax */ W32((u32)(0xaafe2cu), r_eax);
    /* 0080d5c8: mov dword ptr [0xaafe30], eax */ W32((u32)(0xaafe30u), r_eax);
    /* 0080d5cd: mov dword ptr [0xaafe34], eax */ W32((u32)(0xaafe34u), r_eax);
    /* 0080d5d2: mov dword ptr [0xaafe38], eax */ W32((u32)(0xaafe38u), r_eax);
    /* 0080d5d7: mov dword ptr [0xaafe3c], eax */ W32((u32)(0xaafe3cu), r_eax);
    /* 0080d5dc: mov dword ptr [0xaafe40], eax */ W32((u32)(0xaafe40u), r_eax);
    /* 0080d5e1: mov dword ptr [0xaafe44], eax */ W32((u32)(0xaafe44u), r_eax);
    /* 0080d5e6: mov dword ptr [0xaafe54], eax */ W32((u32)(0xaafe54u), r_eax);
    /* 0080d5eb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80d5f0u); f_0061cdb0();
    /* 0080d5f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d5f1: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0080d5f5: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0080d5f9: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0080d5fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d5ff: mov ebx, eax */ r_ebx = r_eax;
L_0080d601:; BB(0x0080d601);
    /* 0080d601: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080d604: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d605: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d606: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x80d60bu); f_0080bf28();
    /* 0080d60b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080d60e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d611: je 0x80d642 */ if (fZ) goto L_0080d642;
L_0080d613:; BB(0x0080d613);
    /* 0080d613: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080d616: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d619: jl 0x80d601 */ if ((fS!=fO)) goto L_0080d601;
L_0080d61b:; BB(0x0080d61b);
    /* 0080d61b: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0080d61f: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0080d623: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0080d627: mov eax, 1 */ r_eax = 0x1u;
L_0080d62c:; BB(0x0080d62c);
    /* 0080d62c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d62e: jne 0x80d639 */ if (!fZ) goto L_0080d639;
L_0080d630:; BB(0x0080d630);
    /* 0080d630: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80d635u); f_0061cdb0();
    /* 0080d635: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d638: ret  */ FN_RET(0x0080d578); r_esp += 4; return;
L_0080d639:; BB(0x0080d639);
    /* 0080d639: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80d63eu); f_0061cdb0();
    /* 0080d63e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d641: ret  */ FN_RET(0x0080d578); r_esp += 4; return;
L_0080d642:; BB(0x0080d642);
    /* 0080d642: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080d645: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d647: jl 0x80d613 */ if ((fS!=fO)) goto L_0080d613;
L_0080d649:; BB(0x0080d649);
    /* 0080d649: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x80d64eu); f_005ba1f0();
    /* 0080d64e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d650: jne 0x80d6ec */ if (!fZ) goto L_0080d6ec;
L_0080d656:; BB(0x0080d656);
    /* 0080d656: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0080d659: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0080d65d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0080d661: mov edi, dword ptr [0xaafdd0] */ r_edi = R32((u32)(0xaafdd0u));
    /* 0080d667: mov esi, dword ptr [edi + eax*8] */ r_esi = R32((u32)(r_edi+r_eax*8));
    /* 0080d66a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d66c: je 0x80d613 */ if (fZ) goto L_0080d613;
L_0080d66e:; BB(0x0080d66e);
    /* 0080d66e: mov edi, dword ptr [edi + eax*8 + 4] */ r_edi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 0080d672: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080d675: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d677: jl 0x80d613 */ if ((fS!=fO)) goto L_0080d613;
L_0080d679:; BB(0x0080d679);
    /* 0080d679: mov eax, dword ptr [esi + edx*8] */ r_eax = R32((u32)(r_esi+r_edx*8));
    /* 0080d67c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d67e: je 0x80d613 */ if (fZ) goto L_0080d613;
L_0080d680:; BB(0x0080d680);
    /* 0080d680: mov edx, dword ptr [esi + edx*8 + 4] */ r_edx = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 0080d684: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d687: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d689: jl 0x80d613 */ if ((fS!=fO)) goto L_0080d613;
L_0080d68b:; BB(0x0080d68b);
    /* 0080d68b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d68d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080d68f: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0080d692: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d694: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0080d698: push 0x9806f0 */ { u32 v = 0x9806f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d69d: push dword ptr [eax + edx + 4] */ { u32 v = R32((u32)(r_eax+r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d6a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d6a2: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80d6a7u); f_0078e574();
    /* 0080d6a7: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0080d6ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d6ac: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80d6b1u); f_005b9328();
    /* 0080d6b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080d6b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d6b6: jle 0x80d613 */ if ((fZ||fS!=fO)) goto L_0080d613;
L_0080d6bc:; BB(0x0080d6bc);
    /* 0080d6bc: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080d6c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d6c3: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x80d6c8u); f_007a8a38();
    /* 0080d6c8: mov esi, eax */ r_esi = r_eax;
    /* 0080d6ca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d6cc: je 0x80d613 */ if (fZ) goto L_0080d613;
L_0080d6d2:; BB(0x0080d6d2);
    /* 0080d6d2: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0080d6d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d6d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d6d8: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80d6ddu); f_005b9910();
    /* 0080d6dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080d6e0: mov dword ptr [ebx*4 + 0xaafe00], esi */ W32((u32)(r_ebx*4+0xaafe00u), r_esi);
    /* 0080d6e7: jmp 0x80d613 */ goto L_0080d613;
L_0080d6ec:; BB(0x0080d6ec);
    /* 0080d6ec: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0080d6f0: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0080d6f4: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0080d6f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d6fa: jmp 0x80d62c */ goto L_0080d62c;
}

void f_0080d700(void) /* sub_80D700 */
{
    FN_ENTER(0x0080d700);
    /* 0080d700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080d701: mov ebp, esp */ r_ebp = r_esp;
    /* 0080d703: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080d705: push 0x8f7344 */ { u32 v = 0x8f7344u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d70a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080d710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d711: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080d718: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080d71b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080d71e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080d721: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080d724: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080d727: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d729: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0080d730: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x80d735u); f_007a8b68();
    /* 0080d735: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d736: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0080d739: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d73b: je 0x80d777 */ if (fZ) goto L_0080d777;
L_0080d73d:; BB(0x0080d73d);
    /* 0080d73d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0080d744: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080d74b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080d74e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d750: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d755: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x80d75au); f_007a89dc();
    /* 0080d75a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080d75d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0080d764:; BB(0x0080d764);
    /* 0080d764: mov dword ptr [0xaafe58], eax */ W32((u32)(0xaafe58u), r_eax);
    /* 0080d769: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080d76c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080d773: mov esp, ebp */ r_esp = r_ebp;
    /* 0080d775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080d776: ret  */ FN_RET(0x0080d700); r_esp += 4; return;
L_0080d777:; BB(0x0080d777);
    /* 0080d777: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d779: jmp 0x80d764 */ goto L_0080d764;
}

void f_0080d77c(void) /* sub_80D77C */
{
    FN_ENTER(0x0080d77c);
    /* 0080d77c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d77d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080d77f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080d781: call 0x80d7a0 */ r_esp -= 4; W32(r_esp, 0x80d786u); f_0080d7a0();
    /* 0080d786: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080d78a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080d78c: jne 0x80d792 */ if (!fZ) goto L_0080d792;
L_0080d78e:; BB(0x0080d78e);
    /* 0080d78e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d78f: ret 4 */ FN_RET(0x0080d77c); r_esp += 8; return;
L_0080d792:; BB(0x0080d792);
    /* 0080d792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d793: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x80d798u); f_005c2f74();
    /* 0080d798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080d799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d79a: ret 4 */ FN_RET(0x0080d77c); r_esp += 8; return;
}

void f_0080d7a0(void) /* sub_80D7A0 */
{
    FN_ENTER(0x0080d7a0);
    /* 0080d7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080d7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0080d7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080d7a5: push 0x8f7360 */ { u32 v = 0x8f7360u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080d7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d7b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080d7b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080d7bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080d7be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080d7c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080d7c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080d7c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080d7ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080d7cd: mov dword ptr [ecx], 0xb47748 */ W32((u32)(r_ecx), 0xb47748u);
    /* 0080d7d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080d7da: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x80d7dfu); f_004f7078();
    /* 0080d7df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080d7e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080d7e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0080d7eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080d7ec: ret  */ FN_RET(0x0080d7a0); r_esp += 4; return;
}

void f_0080d7f0(void) /* sub_80D7F0 */
{
    FN_ENTER(0x0080d7f0);
    /* 0080d7f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d7f1: mov esi, ecx */ r_esi = r_ecx;
    /* 0080d7f3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d7f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0080d7f9: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x80d7feu); f_004f7330();
    /* 0080d7fe: mov dword ptr [esi], 0xb47748 */ W32((u32)(r_esi), 0xb47748u);
    /* 0080d804: mov eax, dword ptr [0xa11e2c] */ r_eax = R32((u32)(0xa11e2cu));
    /* 0080d809: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0080d80c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080d80e: mov dword ptr [esi + 0x3c], 0xf */ W32((u32)(r_esi+0x3cu), 0xfu);
    /* 0080d815: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0080d817: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0080d81a: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0080d81c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080d81e: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 0080d821: lea edx, [esi + 0x48] */ r_edx = (u32)(r_esi+0x48u);
    /* 0080d824: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 0080d827: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080d828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d829: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80d82eu); f_0061cdb0();
    /* 0080d82e: mov dword ptr [esi + 0x44], 1 */ W32((u32)(r_esi+0x44u), 0x1u);
    /* 0080d835: mov eax, esi */ r_eax = r_esi;
    /* 0080d837: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d83a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080d83b: ret 4 */ FN_RET(0x0080d7f0); r_esp += 8; return;
}

void f_0080d840(void) /* sub_80D840 */
{
    FN_ENTER(0x0080d840);
    /* 0080d840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080d842: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080d843: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080d845: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x80d84au); f_007c0424();
    /* 0080d84a: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x80d84fu); f_007becd4();
    /* 0080d84f: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d855: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d858: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d85b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d85d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d85f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d861: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d868: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x80d86du); f_007c1160();
    /* 0080d86d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d86f: je 0x80d875 */ if (fZ) goto L_0080d875;
L_0080d871:; BB(0x0080d871);
    /* 0080d871: add dword ptr [ebp + 0x38], 1 */ { u32 ad = (u32)(r_ebp+0x38u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080d875:; BB(0x0080d875);
    /* 0080d875: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d87b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d87e: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d881: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d883: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d885: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d887: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d88e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x80d893u); f_007c1160();
    /* 0080d893: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d895: je 0x80d89b */ if (fZ) goto L_0080d89b;
L_0080d897:; BB(0x0080d897);
    /* 0080d897: add dword ptr [ebp + 0x38], -1 */ { u32 ad = (u32)(r_ebp+0x38u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080d89b:; BB(0x0080d89b);
    /* 0080d89b: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d8a1: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d8a4: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d8a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d8a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d8ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d8ad: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d8b4: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x80d8b9u); f_007c1100();
    /* 0080d8b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d8bb: je 0x80d8ce */ if (fZ) goto L_0080d8ce;
L_0080d8bd:; BB(0x0080d8bd);
    /* 0080d8bd: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0080d8c0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d8c3: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0080d8c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d8c8: jge 0x80d8ce */ if ((fS==fO)) goto L_0080d8ce;
L_0080d8ca:; BB(0x0080d8ca);
    /* 0080d8ca: add dword ptr [ebp + 0x38], 1 */ { u32 ad = (u32)(r_ebp+0x38u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080d8ce:; BB(0x0080d8ce);
    /* 0080d8ce: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d8d4: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d8d7: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d8da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d8dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d8de: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d8e0: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d8e7: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x80d8ecu); f_007c1100();
    /* 0080d8ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d8ee: je 0x80d901 */ if (fZ) goto L_0080d901;
L_0080d8f0:; BB(0x0080d8f0);
    /* 0080d8f0: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0080d8f3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d8f6: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0080d8f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d8fb: jge 0x80d901 */ if ((fS==fO)) goto L_0080d901;
L_0080d8fd:; BB(0x0080d8fd);
    /* 0080d8fd: add dword ptr [ebp + 0x38], -1 */ { u32 ad = (u32)(r_ebp+0x38u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080d901:; BB(0x0080d901);
    /* 0080d901: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d907: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d90a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d90d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d90f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d911: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d913: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d91a: call 0x7c11a0 */ r_esp -= 4; W32(r_esp, 0x80d91fu); f_007c11a0();
    /* 0080d91f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d921: jne 0x80d945 */ if (!fZ) goto L_0080d945;
L_0080d923:; BB(0x0080d923);
    /* 0080d923: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d929: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d92c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d92f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d931: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d933: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d935: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d93c: call 0x7c11a0 */ r_esp -= 4; W32(r_esp, 0x80d941u); f_007c11a0();
    /* 0080d941: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d943: je 0x80d94c */ if (fZ) goto L_0080d94c;
L_0080d945:; BB(0x0080d945);
    /* 0080d945: mov dword ptr [ebp + 0x3c], 0xf */ W32((u32)(r_ebp+0x3cu), 0xfu);
L_0080d94c:; BB(0x0080d94c);
    /* 0080d94c: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d952: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0080d955: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080d957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d959: jg 0x80d95d */ if ((!fZ&&fS==fO)) goto L_0080d95d;
L_0080d95b:; BB(0x0080d95b);
    /* 0080d95b: mov edx, eax */ r_edx = r_eax;
L_0080d95d:; BB(0x0080d95d);
    /* 0080d95d: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d960: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0080d963: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0080d966: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d968: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d96a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d96c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0080d973: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x80d978u); f_007c1160();
    /* 0080d978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d97a: je 0x80d980 */ if (fZ) goto L_0080d980;
L_0080d97c:; BB(0x0080d97c);
    /* 0080d97c: add dword ptr [ebp + 0x40], -1 */ { u32 ad = (u32)(r_ebp+0x40u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080d980:; BB(0x0080d980);
    /* 0080d980: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d986: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d989: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d98c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d98e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d990: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d992: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d999: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x80d99eu); f_007c1160();
    /* 0080d99e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d9a0: je 0x80d9ad */ if (fZ) goto L_0080d9ad;
L_0080d9a2:; BB(0x0080d9a2);
    /* 0080d9a2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0080d9a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080d9a8: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0080d9ab: jmp 0x80d9b0 */ goto L_0080d9b0;
L_0080d9ad:; BB(0x0080d9ad);
    /* 0080d9ad: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
L_0080d9b0:; BB(0x0080d9b0);
    /* 0080d9b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080d9b2: jge 0x80d9c0 */ if ((fS==fO)) goto L_0080d9c0;
L_0080d9b4:; BB(0x0080d9b4);
    /* 0080d9b4: mov dword ptr [ebp + 0x40], 2 */ W32((u32)(r_ebp+0x40u), 0x2u);
    /* 0080d9bb: mov eax, 2 */ r_eax = 0x2u;
L_0080d9c0:; BB(0x0080d9c0);
    /* 0080d9c0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080d9c3: jle 0x80d9cc */ if ((fZ||fS!=fO)) goto L_0080d9cc;
L_0080d9c5:; BB(0x0080d9c5);
    /* 0080d9c5: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
L_0080d9cc:; BB(0x0080d9cc);
    /* 0080d9cc: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080d9d2: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0080d9d5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080d9d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d9da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d9dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080d9de: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080d9e5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x80d9eau); f_007c1160();
    /* 0080d9ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d9ec: je 0x80da3f */ if (fZ) goto L_0080da3f;
L_0080d9ee:; BB(0x0080d9ee);
    /* 0080d9ee: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0080d9f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d9f3: je 0x80da29 */ if (fZ) goto L_0080da29;
L_0080d9f5:; BB(0x0080d9f5);
    /* 0080d9f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080d9f8: jne 0x80da08 */ if (!fZ) goto L_0080da08;
L_0080d9fa:; BB(0x0080d9fa);
    /* 0080d9fa: mov dword ptr [ebp + 0x44], 6 */ W32((u32)(r_ebp+0x44u), 0x6u);
    /* 0080da01: mov eax, 6 */ r_eax = 0x6u;
    /* 0080da06: jmp 0x80da42 */ goto L_0080da42;
L_0080da08:; BB(0x0080da08);
    /* 0080da08: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080da0b: jne 0x80da24 */ if (!fZ) goto L_0080da24;
L_0080da0d:; BB(0x0080da0d);
    /* 0080da0d: lea eax, [ebp + 0x60] */ r_eax = (u32)(r_ebp+0x60u);
    /* 0080da10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080da11: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080da17: call 0x80d11c */ r_esp -= 4; W32(r_esp, 0x80da1cu); f_0080d11c();
    /* 0080da1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080da1f: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 0080da22: jmp 0x80da42 */ goto L_0080da42;
L_0080da24:; BB(0x0080da24);
    /* 0080da24: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 0080da27: jmp 0x80da42 */ goto L_0080da42;
L_0080da29:; BB(0x0080da29);
    /* 0080da29: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080da2c: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080da32: call 0x80d188 */ r_esp -= 4; W32(r_esp, 0x80da37u); f_0080d188();
    /* 0080da37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080da3a: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 0080da3d: jmp 0x80da42 */ goto L_0080da42;
L_0080da3f:; BB(0x0080da3f);
    /* 0080da3f: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
L_0080da42:; BB(0x0080da42);
    /* 0080da42: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080da44: jne 0x80daa0 */ if (!fZ) goto L_0080daa0;
L_0080da46:; BB(0x0080da46);
    /* 0080da46: mov edx, 0xa */ r_edx = 0xau;
    /* 0080da4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080da4d: mov esi, eax */ r_esi = r_eax;
    /* 0080da4f: mov edi, edx */ r_edi = r_edx;
L_0080da51:; BB(0x0080da51);
    /* 0080da51: push dword ptr [esi + 0xa11e30] */ { u32 v = R32((u32)(r_esi+0xa11e30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080da57: mov ecx, edi */ r_ecx = r_edi;
    /* 0080da59: or ecx, 0x120000 */ {  u32 a = r_ecx; u32 b = 0x120000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0080da5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080da60: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80da65u); f_0061cdb0();
    /* 0080da65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080da68: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080da6b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080da6e: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080da71: jl 0x80da51 */ if ((fS!=fO)) goto L_0080da51;
L_0080da73:; BB(0x0080da73);
    /* 0080da73: push 0x980724 */ { u32 v = 0x980724u; r_esp -= 4; W32(r_esp, v); }
    /* 0080da78: push 0x40008 */ { u32 v = 0x40008u; r_esp -= 4; W32(r_esp, v); }
    /* 0080da7d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80da82u); f_0061cdb0();
    /* 0080da82: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080da85: push 0x980734 */ { u32 v = 0x980734u; r_esp -= 4; W32(r_esp, v); }
    /* 0080da8a: push 0x40009 */ { u32 v = 0x40009u; r_esp -= 4; W32(r_esp, v); }
    /* 0080da8f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80da94u); f_0061cdb0();
    /* 0080da94: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080da97: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x80da9cu); f_007c0368();
    /* 0080da9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080da9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080da9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080da9f: ret  */ FN_RET(0x0080d840); r_esp += 4; return;
L_0080daa0:; BB(0x0080daa0);
    /* 0080daa0: lea eax, [ebp + 0x48] */ r_eax = (u32)(r_ebp+0x48u);
    /* 0080daa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080daa4: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x80daa9u); f_006a6f78();
    /* 0080daa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080daaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080daac: jle 0x80daf7 */ if ((fZ||fS!=fO)) goto L_0080daf7;
L_0080daae:; BB(0x0080daae);
    /* 0080daae: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 0080dab1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080dab3: jne 0x80dad7 */ if (!fZ) goto L_0080dad7;
L_0080dab5:; BB(0x0080dab5);
    /* 0080dab5: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080dab7: je 0x80da46 */ if (fZ) goto L_0080da46;
L_0080dab9:; BB(0x0080dab9);
    /* 0080dab9: lea eax, [ebp + 0x60] */ r_eax = (u32)(r_ebp+0x60u);
    /* 0080dabc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080dabd: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080dac3: call 0x80d11c */ r_esp -= 4; W32(r_esp, 0x80dac8u); f_0080d11c();
    /* 0080dac8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080dacb: mov dword ptr [ebp + 0x44], 1 */ W32((u32)(r_ebp+0x44u), 0x1u);
    /* 0080dad2: jmp 0x80da46 */ goto L_0080da46;
L_0080dad7:; BB(0x0080dad7);
    /* 0080dad7: lea eax, [ebp + 0x60] */ r_eax = (u32)(r_ebp+0x60u);
    /* 0080dada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080dadb: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080dae1: call 0x80d090 */ r_esp -= 4; W32(r_esp, 0x80dae6u); f_0080d090();
    /* 0080dae6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080dae9: mov dword ptr [ebp + 0x44], 1 */ W32((u32)(r_ebp+0x44u), 0x1u);
    /* 0080daf0: mov eax, 1 */ r_eax = 0x1u;
    /* 0080daf5: jmp 0x80dab5 */ goto L_0080dab5;
L_0080daf7:; BB(0x0080daf7);
    /* 0080daf7: jne 0x80da46 */ if (!fZ) goto L_0080da46;
L_0080dafd:; BB(0x0080dafd);
    /* 0080dafd: mov dword ptr [ebp + 0x44], 1 */ W32((u32)(r_ebp+0x44u), 0x1u);
    /* 0080db04: jmp 0x80da46 */ goto L_0080da46;
}

void f_0080db0c(void) /* sub_80DB0C */
{
    FN_ENTER(0x0080db0c);
    /* 0080db0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080db0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080db0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080db11: call 0x80db30 */ r_esp -= 4; W32(r_esp, 0x80db16u); f_0080db30();
    /* 0080db16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080db1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080db1c: jne 0x80db22 */ if (!fZ) goto L_0080db22;
L_0080db1e:; BB(0x0080db1e);
    /* 0080db1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080db1f: ret 4 */ FN_RET(0x0080db0c); r_esp += 8; return;
L_0080db22:; BB(0x0080db22);
    /* 0080db22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080db23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x80db28u); f_005c2f74();
    /* 0080db28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080db29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080db2a: ret 4 */ FN_RET(0x0080db0c); r_esp += 8; return;
}

void f_0080db30(void) /* sub_80DB30 */
{
    FN_ENTER(0x0080db30);
    /* 0080db30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080db31: mov ebp, esp */ r_ebp = r_esp;
    /* 0080db33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080db35: push 0x8f737c */ { u32 v = 0x8f737cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080db3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080db40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080db41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080db48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080db4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080db4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080db51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080db54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080db57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080db5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080db5d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0080db60: mov dword ptr [ecx], 0xb477c8 */ W32((u32)(r_ecx), 0xb477c8u);
    /* 0080db66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080db68: je 0x80db81 */ if (fZ) goto L_0080db81;
L_0080db6a:; BB(0x0080db6a);
    /* 0080db6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080db6d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0080db71: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080db76: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0080db7a: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_0080db81:; BB(0x0080db81);
    /* 0080db81: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0080db84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080db86: je 0x80db98 */ if (fZ) goto L_0080db98;
L_0080db88:; BB(0x0080db88);
    /* 0080db88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080db8b: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0080db8f: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080db94: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
L_0080db98:; BB(0x0080db98);
    /* 0080db98: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080db9f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x80dba4u); f_008171e8();
    /* 0080dba4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080dba7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080dbae: mov esp, ebp */ r_esp = r_ebp;
    /* 0080dbb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dbb1: ret  */ FN_RET(0x0080db30); r_esp += 4; return;
}

void f_0080dbb4(void) /* sub_80DBB4 */
{
    FN_ENTER(0x0080dbb4);
    /* 0080dbb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080dbb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0080dbb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080dbb9: push 0x8f73b2 */ { u32 v = 0x8f73b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0080dbbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080dbc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080dbc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080dbcc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080dbcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080dbd2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0080dbd5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0080dbd8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0080dbdb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0080dbde: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080dbe1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080dbe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080dbe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x80dbecu); f_008193cc();
    /* 0080dbec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080dbf3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080dbf6: mov dword ptr [eax], 0xb477c8 */ W32((u32)(r_eax), 0xb477c8u);
    /* 0080dbfc: mov edx, dword ptr [0xa11e3c] */ r_edx = R32((u32)(0xa11e3cu));
    /* 0080dc02: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0080dc05: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0080dc0b: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080dc0e: jge 0x80dc19 */ if ((fS==fO)) goto L_0080dc19;
L_0080dc10:; BB(0x0080dc10);
    /* 0080dc10: mov edx, dword ptr [edx*4 + 0xaafe00] */ r_edx = R32((u32)(r_edx*4+0xaafe00u));
    /* 0080dc17: jmp 0x80dc1b */ goto L_0080dc1b;
L_0080dc19:; BB(0x0080dc19);
    /* 0080dc19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0080dc1b:; BB(0x0080dc1b);
    /* 0080dc1b: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0080dc22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dc24: je 0x80dca0 */ if (fZ) goto L_0080dca0;
L_0080dc26:; BB(0x0080dc26);
    /* 0080dc26: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080dc29: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080dc2b: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0080dc2e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080dc30: add edx, dword ptr [edx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080dc32: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0080dc35: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0080dc38: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0080dc3b: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0080dc3e: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0080dc41: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 0080dc44: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 0080dc47: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80dc4cu); f_005caba4();
    /* 0080dc4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080dc4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080dc52: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0080dc55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dc57: je 0x80dc99 */ if (fZ) goto L_0080dc99;
L_0080dc59:; BB(0x0080dc59);
    /* 0080dc59: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0080dc60: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080dc67: mov ecx, eax */ r_ecx = r_eax;
    /* 0080dc69: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080dc6b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080dc6e: call 0x787e40 */ r_esp -= 4; W32(r_esp, 0x80dc73u); f_00787e40();
    /* 0080dc73: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0080dc7a:; BB(0x0080dc7a);
    /* 0080dc7a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080dc7d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080dc80: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_0080dc83:; BB(0x0080dc83);
    /* 0080dc83: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080dc86: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080dc89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080dc8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080dc93: mov esp, ebp */ r_esp = r_ebp;
    /* 0080dc95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dc96: ret 8 */ FN_RET(0x0080dbb4); r_esp += 12; return;
L_0080dc99:; BB(0x0080dc99);
    /* 0080dc99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dc9b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080dc9e: jmp 0x80dc7a */ goto L_0080dc7a;
L_0080dca0:; BB(0x0080dca0);
    /* 0080dca0: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0080dca4: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 0080dcab: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dcb1: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0080dcb5: jmp 0x80dc83 */ goto L_0080dc83;
}

void f_0080dcb8(void) /* sub_80DCB8 */
{
    FN_ENTER(0x0080dcb8);
    /* 0080dcb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080dcb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080dcbb: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0080dcbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dcc0: je 0x80dd56 */ if (fZ) goto L_0080dd56;
L_0080dcc6:; BB(0x0080dcc6);
    /* 0080dcc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dcc9: jne 0x80dcf4 */ if (!fZ) goto L_0080dcf4;
L_0080dccb:; BB(0x0080dccb);
    /* 0080dccb: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0080dcce: call 0x787f04 */ r_esp -= 4; W32(r_esp, 0x80dcd3u); f_00787f04();
    /* 0080dcd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dcd5: jne 0x80dd76 */ if (!fZ) goto L_0080dd76;
L_0080dcdb:; BB(0x0080dcdb);
    /* 0080dcdb: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0080dcde: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0080dce2: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dce7: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0080dceb: mov dword ptr [ebp + 0x2c], 2 */ W32((u32)(r_ebp+0x2cu), 0x2u);
    /* 0080dcf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dcf3: ret  */ FN_RET(0x0080dcb8); r_esp += 4; return;
L_0080dcf4:; BB(0x0080dcf4);
    /* 0080dcf4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080dcf7: jne 0x80dd76 */ if (!fZ) goto L_0080dd76;
L_0080dcf9:; BB(0x0080dcf9);
    /* 0080dcf9: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0080dcfc: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080dd00: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080dd02: jne 0x80dd3e */ if (!fZ) goto L_0080dd3e;
L_0080dd04:; BB(0x0080dd04);
    /* 0080dd04: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080dd09: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0080dd0d: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 0080dd10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080dd11: call 0x80cc2c */ r_esp -= 4; W32(r_esp, 0x80dd16u); f_0080cc2c();
    /* 0080dd16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080dd17: call 0x80cc44 */ r_esp -= 4; W32(r_esp, 0x80dd1cu); f_0080cc44();
    /* 0080dd1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dd1e: je 0x80dd29 */ if (fZ) goto L_0080dd29;
L_0080dd20:; BB(0x0080dd20);
    /* 0080dd20: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0080dd23: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080dd27: jmp 0x80dd3e */ goto L_0080dd3e;
L_0080dd29:; BB(0x0080dd29);
    /* 0080dd29: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080dd2c: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080dd30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080dd31: call 0x7b43ac */ r_esp -= 4; W32(r_esp, 0x80dd36u); f_007b43ac();
    /* 0080dd36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080dd37: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0080dd3a: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
L_0080dd3e:; BB(0x0080dd3e);
    /* 0080dd3e: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080dd43: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0080dd47: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0080dd4b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dd50: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0080dd54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dd55: ret  */ FN_RET(0x0080dcb8); r_esp += 4; return;
L_0080dd56:; BB(0x0080dd56);
    /* 0080dd56: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080dd59: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0080dd5d: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080dd60: je 0x80dd69 */ if (fZ) goto L_0080dd69;
L_0080dd62:; BB(0x0080dd62);
    /* 0080dd62: mov dword ptr [ebp + 0x2c], 2 */ W32((u32)(r_ebp+0x2cu), 0x2u);
L_0080dd69:; BB(0x0080dd69);
    /* 0080dd69: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0080dd6c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080dd6f: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0080dd72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dd74: jl 0x80dd78 */ if ((fS!=fO)) goto L_0080dd78;
L_0080dd76:; BB(0x0080dd76);
    /* 0080dd76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dd77: ret  */ FN_RET(0x0080dcb8); r_esp += 4; return;
L_0080dd78:; BB(0x0080dd78);
    /* 0080dd78: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080dd7b: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080dd7f: movsx eax, word ptr [eax + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0080dd83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080dd84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080dd85: call 0x8111b4 */ r_esp -= 4; W32(r_esp, 0x80dd8au); f_008111b4();
    /* 0080dd8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080dd8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080dd8f: je 0x80dd9a */ if (fZ) goto L_0080dd9a;
L_0080dd91:; BB(0x0080dd91);
    /* 0080dd91: mov dword ptr [ebp + 0x2c], 1 */ W32((u32)(r_ebp+0x2cu), 0x1u);
    /* 0080dd98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dd99: ret  */ FN_RET(0x0080dcb8); r_esp += 4; return;
L_0080dd9a:; BB(0x0080dd9a);
    /* 0080dd9a: mov dword ptr [ebp + 0x2c], 2 */ W32((u32)(r_ebp+0x2cu), 0x2u);
    /* 0080dda1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dda2: ret  */ FN_RET(0x0080dcb8); r_esp += 4; return;
}

void f_0080dda4(void) /* sub_80DDA4 */
{
    FN_ENTER(0x0080dda4);
    /* 0080dda4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080dda8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080dda9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ddaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ddab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ddac: mov edx, eax */ r_edx = r_eax;
    /* 0080ddae: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0080ddb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ddb3: je 0x80ddf0 */ if (fZ) goto L_0080ddf0;
L_0080ddb5:; BB(0x0080ddb5);
    /* 0080ddb5: mov ebx, eax */ r_ebx = r_eax;
    /* 0080ddb7: mov esi, edx */ r_esi = r_edx;
L_0080ddb9:; BB(0x0080ddb9);
    /* 0080ddb9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ddbb: je 0x80ddf0 */ if (fZ) goto L_0080ddf0;
L_0080ddbd:; BB(0x0080ddbd);
    /* 0080ddbd: push dword ptr [0xa11e3c] */ { u32 v = R32((u32)(0xa11e3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080ddc3: mov edi, ebx */ r_edi = r_ebx;
    /* 0080ddc5: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0080ddc8: mov ecx, edi */ r_ecx = r_edi;
    /* 0080ddca: call 0x6bca2c */ r_esp -= 4; W32(r_esp, 0x80ddcfu); f_006bca2c();
    /* 0080ddcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ddd1: je 0x80dde2 */ if (fZ) goto L_0080dde2;
L_0080ddd3:; BB(0x0080ddd3);
    /* 0080ddd3: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0080ddd7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080dddc: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0080dde0: jmp 0x80dde9 */ goto L_0080dde9;
L_0080dde2:; BB(0x0080dde2);
    /* 0080dde2: mov eax, edi */ r_eax = r_edi;
    /* 0080dde4: call 0x80dda8 */ r_esp -= 4; W32(r_esp, 0x80dde9u); f_0080dda8();
L_0080dde9:; BB(0x0080dde9);
    /* 0080dde9: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0080ddec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ddee: jne 0x80ddb9 */ if (!fZ) goto L_0080ddb9;
L_0080ddf0:; BB(0x0080ddf0);
    /* 0080ddf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080ddf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080ddf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080ddf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080ddf4: ret  */ FN_RET(0x0080dda4); r_esp += 4; return;
}

void f_0080dda8(void) /* sub_80DDA8 */
{
    FN_ENTER(0x0080dda8);
    /* 0080dda8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080dda9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ddaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ddab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ddac: mov edx, eax */ r_edx = r_eax;
    /* 0080ddae: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0080ddb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ddb3: je 0x80ddf0 */ if (fZ) goto L_0080ddf0;
L_0080ddb5:; BB(0x0080ddb5);
    /* 0080ddb5: mov ebx, eax */ r_ebx = r_eax;
    /* 0080ddb7: mov esi, edx */ r_esi = r_edx;
L_0080ddb9:; BB(0x0080ddb9);
    /* 0080ddb9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ddbb: je 0x80ddf0 */ if (fZ) goto L_0080ddf0;
L_0080ddbd:; BB(0x0080ddbd);
    /* 0080ddbd: push dword ptr [0xa11e3c] */ { u32 v = R32((u32)(0xa11e3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080ddc3: mov edi, ebx */ r_edi = r_ebx;
    /* 0080ddc5: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0080ddc8: mov ecx, edi */ r_ecx = r_edi;
    /* 0080ddca: call 0x6bca2c */ r_esp -= 4; W32(r_esp, 0x80ddcfu); f_006bca2c();
    /* 0080ddcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ddd1: je 0x80dde2 */ if (fZ) goto L_0080dde2;
L_0080ddd3:; BB(0x0080ddd3);
    /* 0080ddd3: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0080ddd7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080dddc: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0080dde0: jmp 0x80dde9 */ goto L_0080dde9;
L_0080dde2:; BB(0x0080dde2);
    /* 0080dde2: mov eax, edi */ r_eax = r_edi;
    /* 0080dde4: call 0x80dda8 */ r_esp -= 4; W32(r_esp, 0x80dde9u); f_0080dda8();
L_0080dde9:; BB(0x0080dde9);
    /* 0080dde9: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0080ddec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ddee: jne 0x80ddb9 */ if (!fZ) goto L_0080ddb9;
L_0080ddf0:; BB(0x0080ddf0);
    /* 0080ddf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080ddf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080ddf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080ddf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080ddf4: ret  */ FN_RET(0x0080dda8); r_esp += 4; return;
}

void f_0080ddf8(void) /* sub_80DDF8 */
{
    FN_ENTER(0x0080ddf8);
    /* 0080ddf8: mov dword ptr [0xaafe84], 0x3f800000 */ W32((u32)(0xaafe84u), 0x3f800000u);
    /* 0080de02: mov dword ptr [0xaafe88], 0x41000000 */ W32((u32)(0xaafe88u), 0x41000000u);
    /* 0080de0c: mov dword ptr [0xaafe8c], 0x3fc00000 */ W32((u32)(0xaafe8cu), 0x3fc00000u);
    /* 0080de16: ret  */ FN_RET(0x0080ddf8); r_esp += 4; return;
}

void f_0080de18(void) /* sub_80DE18 */
{
    FN_ENTER(0x0080de18);
    /* 0080de18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080de19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080de1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080de1d: call 0x80de3c */ r_esp -= 4; W32(r_esp, 0x80de22u); f_0080de3c();
    /* 0080de22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080de26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080de28: jne 0x80de2e */ if (!fZ) goto L_0080de2e;
L_0080de2a:; BB(0x0080de2a);
    /* 0080de2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080de2b: ret 4 */ FN_RET(0x0080de18); r_esp += 8; return;
L_0080de2e:; BB(0x0080de2e);
    /* 0080de2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080de2f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x80de34u); f_00857e98();
    /* 0080de34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080de35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080de36: ret 4 */ FN_RET(0x0080de18); r_esp += 8; return;
}

void f_0080de3c(void) /* sub_80DE3C */
{
    FN_ENTER(0x0080de3c);
    /* 0080de3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080de3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080de3f: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080de42: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x80de47u); f_00857e98();
    /* 0080de47: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0080de4a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x80de4fu); f_00857e98();
    /* 0080de4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080de51: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0080de54: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0080de57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080de5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080de5b: ret  */ FN_RET(0x0080de3c); r_esp += 4; return;
}

void f_0080de5c(void) /* sub_80DE5C */
{
    FN_ENTER(0x0080de5c);
    /* 0080de5c: mov ecx, dword ptr [0xaafebc] */ r_ecx = R32((u32)(0xaafebcu));
    /* 0080de62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080de64: je 0x80de6d */ if (fZ) goto L_0080de6d;
L_0080de66:; BB(0x0080de66);
    /* 0080de66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080de68: call 0x80de18 */ r_esp -= 4; W32(r_esp, 0x80de6du); f_0080de18();
L_0080de6d:; BB(0x0080de6d);
    /* 0080de6d: push dword ptr [0xaafec4] */ { u32 v = R32((u32)(0xaafec4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080de73: mov dword ptr [0xaafebc], 0 */ W32((u32)(0xaafebcu), 0x0u);
    /* 0080de7d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x80de82u); f_00857e98();
    /* 0080de82: mov dword ptr [0xaafec4], 0 */ W32((u32)(0xaafec4u), 0x0u);
    /* 0080de8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080de8d: ret  */ FN_RET(0x0080de5c); r_esp += 4; return;
}

void f_0080de80(void)
{
    FN_ENTER(0x0080de80);
    /* 0080de80: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0080de82: mov dword ptr [0xaafec4], 0 */ W32((u32)(0xaafec4u), 0x0u);
    /* 0080de8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080de8d: ret  */ FN_RET(0x0080de80); r_esp += 4; return;
}

void f_0080de90(void) /* sub_80DE90 */
{
    FN_ENTER(0x0080de90);
    /* 0080de90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080de91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080de92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080de93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080de94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080de95: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0080de99: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080de9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0080de9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dea1: jne 0x80dea7 */ if (!fZ) goto L_0080dea7;
L_0080dea3:; BB(0x0080dea3);
    /* 0080dea3: jmp 0x80debf */ goto L_0080debf;
L_0080dea5:; BB(0x0080dea5);
    /* 0080dea5: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080dea7:; BB(0x0080dea7);
    /* 0080dea7: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0080dea9: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0080deac: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 0080deaf: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0080deb2: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080deb5: je 0x80dfec */ if (fZ) goto L_0080dfec;
L_0080debb:; BB(0x0080debb);
    /* 0080debb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080debd: jne 0x80dea5 */ if (!fZ) goto L_0080dea5;
L_0080debf:; BB(0x0080debf);
    /* 0080debf: mov dword ptr [0xaafe94], 0xffffffff */ W32((u32)(0xaafe94u), 0xffffffffu);
    /* 0080dec9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0080decb:; BB(0x0080decb);
    /* 0080decb: mov dword ptr [0xaafeb8], ecx */ W32((u32)(0xaafeb8u), r_ecx);
    /* 0080ded1: mov edx, eax */ r_edx = r_eax;
    /* 0080ded3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ded5: jne 0x80dedb */ if (!fZ) goto L_0080dedb;
L_0080ded7:; BB(0x0080ded7);
    /* 0080ded7: jmp 0x80def0 */ goto L_0080def0;
L_0080ded9:; BB(0x0080ded9);
    /* 0080ded9: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0080dedb:; BB(0x0080dedb);
    /* 0080dedb: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0080dedd: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0080dee0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0080dee3: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dee6: je 0x80dfdc */ if (fZ) goto L_0080dfdc;
L_0080deec:; BB(0x0080deec);
    /* 0080deec: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080deee: jne 0x80ded9 */ if (!fZ) goto L_0080ded9;
L_0080def0:; BB(0x0080def0);
    /* 0080def0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0080def2:; BB(0x0080def2);
    /* 0080def2: mov dword ptr [0xaafeb4], edx */ W32((u32)(0xaafeb4u), r_edx);
    /* 0080def8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080defa: jne 0x80df00 */ if (!fZ) goto L_0080df00;
L_0080defc:; BB(0x0080defc);
    /* 0080defc: jmp 0x80df15 */ goto L_0080df15;
L_0080defe:; BB(0x0080defe);
    /* 0080defe: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0080df00:; BB(0x0080df00);
    /* 0080df00: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0080df02: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0080df05: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080df08: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080df0b: je 0x80dfcc */ if (fZ) goto L_0080dfcc;
L_0080df11:; BB(0x0080df11);
    /* 0080df11: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080df13: jne 0x80defe */ if (!fZ) goto L_0080defe;
L_0080df15:; BB(0x0080df15);
    /* 0080df15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0080df17:; BB(0x0080df17);
    /* 0080df17: mov dword ptr [0xaafeb0], eax */ W32((u32)(0xaafeb0u), r_eax);
    /* 0080df1c: mov eax, dword ptr [0xaafeb8] */ r_eax = R32((u32)(0xaafeb8u));
    /* 0080df21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080df23: je 0x80dfc6 */ if (fZ) goto L_0080dfc6;
L_0080df29:; BB(0x0080df29);
    /* 0080df29: mov eax, dword ptr [0xaafeb4] */ r_eax = R32((u32)(0xaafeb4u));
    /* 0080df2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080df30: je 0x80dfc6 */ if (fZ) goto L_0080dfc6;
L_0080df36:; BB(0x0080df36);
    /* 0080df36: mov eax, dword ptr [0xaafeb0] */ r_eax = R32((u32)(0xaafeb0u));
    /* 0080df3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080df3d: je 0x80dfc6 */ if (fZ) goto L_0080dfc6;
L_0080df43:; BB(0x0080df43);
    /* 0080df43: push 0x9000 */ { u32 v = 0x9000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080df48: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80df4du); f_0082e940();
    /* 0080df4d: mov dword ptr [0xaafeac], eax */ W32((u32)(0xaafeacu), r_eax);
    /* 0080df52: push 0x1400 */ { u32 v = 0x1400u; r_esp -= 4; W32(r_esp, v); }
    /* 0080df57: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80df5cu); f_0082e940();
    /* 0080df5c: mov dword ptr [0xaafea0], 0 */ W32((u32)(0xaafea0u), 0x0u);
    /* 0080df66: mov dword ptr [0xaafea4], eax */ W32((u32)(0xaafea4u), r_eax);
    /* 0080df6b: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080df70: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80df75u); f_0082e940();
    /* 0080df75: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080df78: mov dword ptr [0xaafe98], 0 */ W32((u32)(0xaafe98u), 0x0u);
    /* 0080df82: mov dword ptr [0xaafe9c], eax */ W32((u32)(0xaafe9cu), r_eax);
    /* 0080df87: mov eax, ebx */ r_eax = r_ebx;
    /* 0080df89: call 0x80e008 */ r_esp -= 4; W32(r_esp, 0x80df8eu); f_0080e008();
    /* 0080df8e: push dword ptr [0xaafe9c] */ { u32 v = R32((u32)(0xaafe9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080df94: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x80df99u); f_0082e960();
    /* 0080df99: push dword ptr [0xaafea4] */ { u32 v = R32((u32)(0xaafea4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080df9f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x80dfa4u); f_0082e960();
    /* 0080dfa4: push dword ptr [0xaafeac] */ { u32 v = R32((u32)(0xaafeacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080dfaa: mov dword ptr [0xaafea4], 0 */ W32((u32)(0xaafea4u), 0x0u);
    /* 0080dfb4: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x80dfb9u); f_0082e960();
    /* 0080dfb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080dfbc: mov dword ptr [0xaafeac], 0 */ W32((u32)(0xaafeacu), 0x0u);
L_0080dfc6:; BB(0x0080dfc6);
    /* 0080dfc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080dfc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080dfc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080dfc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080dfca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080dfcb: ret  */ FN_RET(0x0080de90); r_esp += 4; return;
L_0080dfcc:; BB(0x0080dfcc);
    /* 0080dfcc: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dfce: jne 0x80defe */ if (!fZ) goto L_0080defe;
L_0080dfd4:; BB(0x0080dfd4);
    /* 0080dfd4: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080dfd7: jmp 0x80df17 */ goto L_0080df17;
L_0080dfdc:; BB(0x0080dfdc);
    /* 0080dfdc: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dfde: jne 0x80ded9 */ if (!fZ) goto L_0080ded9;
L_0080dfe4:; BB(0x0080dfe4);
    /* 0080dfe4: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080dfe7: jmp 0x80def2 */ goto L_0080def2;
L_0080dfec:; BB(0x0080dfec);
    /* 0080dfec: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080dfee: jne 0x80dea5 */ if (!fZ) goto L_0080dea5;
L_0080dff4:; BB(0x0080dff4);
    /* 0080dff4: mov dword ptr [0xaafe94], edx */ W32((u32)(0xaafe94u), r_edx);
    /* 0080dffa: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080dffd: jmp 0x80decb */ goto L_0080decb;
}

