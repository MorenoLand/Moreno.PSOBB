#include "protos.h"

void f_00813038(void) /* sub_813038 */
{
    FN_ENTER(0x00813038);
    /* 00813038: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0081303d: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00813043: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813045: je 0x8130a6 */ if (fZ) goto L_008130a6;
L_00813047:; BB(0x00813047);
    /* 00813047: cmp ax, word ptr [edx] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0081304a: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_0081304c:; BB(0x0081304c);
    /* 0081304c: cmp ax, word ptr [edx + 2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x2u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813050: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813052:; BB(0x00813052);
    /* 00813052: cmp ax, word ptr [edx + 4] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813056: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813058:; BB(0x00813058);
    /* 00813058: cmp ax, word ptr [edx + 6] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0081305c: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_0081305e:; BB(0x0081305e);
    /* 0081305e: cmp ax, word ptr [edx + 8] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813062: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813064:; BB(0x00813064);
    /* 00813064: cmp ax, word ptr [edx + 0xa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813068: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_0081306a:; BB(0x0081306a);
    /* 0081306a: cmp ax, word ptr [edx + 0xc] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0081306e: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813070:; BB(0x00813070);
    /* 00813070: cmp ax, word ptr [edx + 0xe] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xeu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813074: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813076:; BB(0x00813076);
    /* 00813076: cmp ax, word ptr [edx + 0x10] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0081307a: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_0081307c:; BB(0x0081307c);
    /* 0081307c: cmp ax, word ptr [edx + 0x12] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x12u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813080: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813082:; BB(0x00813082);
    /* 00813082: cmp ax, word ptr [edx + 0x14] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813086: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813088:; BB(0x00813088);
    /* 00813088: cmp ax, word ptr [edx + 0x16] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x16u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0081308c: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_0081308e:; BB(0x0081308e);
    /* 0081308e: cmp ax, word ptr [edx + 0x18] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813092: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_00813094:; BB(0x00813094);
    /* 00813094: cmp ax, word ptr [edx + 0x1a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x1au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00813098: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_0081309a:; BB(0x0081309a);
    /* 0081309a: cmp ax, word ptr [edx + 0x1c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0081309e: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_008130a0:; BB(0x008130a0);
    /* 008130a0: cmp ax, word ptr [edx + 0x1e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x1eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008130a4: je 0x8130a9 */ if (fZ) goto L_008130a9;
L_008130a6:; BB(0x008130a6);
    /* 008130a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008130a8: ret  */ FN_RET(0x00813038); r_esp += 4; return;
L_008130a9:; BB(0x008130a9);
    /* 008130a9: mov eax, 1 */ r_eax = 0x1u;
    /* 008130ae: ret  */ FN_RET(0x00813038); r_esp += 4; return;
}

void f_008130b0(void) /* sub_8130B0 */
{
    FN_ENTER(0x008130b0);
    /* 008130b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008130b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008130b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008130b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008130b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008130b5: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 008130bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008130bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008130bf: mov dword ptr [0xab0268], edx */ W32((u32)(0xab0268u), r_edx);
    /* 008130c5: mov dword ptr [0xab0260], edx */ W32((u32)(0xab0260u), r_edx);
    /* 008130cb: mov dword ptr [0xab0264], edx */ W32((u32)(0xab0264u), r_edx);
    /* 008130d1: mov dword ptr [0xab025c], edx */ W32((u32)(0xab025cu), r_edx);
    /* 008130d7: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 008130da: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008130dc: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008130de: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 008130e1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008130e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008130e5: mov ecx, dword ptr [ecx + 0xaaffc0] */ r_ecx = R32((u32)(r_ecx+0xaaffc0u));
    /* 008130eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008130ed: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008130ef: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 008130f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008130f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008130f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008130f8: lea ebx, [edx + ecx] */ r_ebx = (u32)(r_edx+r_ecx);
    /* 008130fb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008130fd: jle 0x813112 */ if ((fZ||fS!=fO)) goto L_00813112;
L_008130ff:; BB(0x008130ff);
    /* 008130ff: lea ebx, [edx + ecx + 0x1f] */ r_ebx = (u32)(r_edx+r_ecx+0x1fu);
    /* 00813103: and ebx, 0xffffffe0 */ {  u32 a = r_ebx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00813106: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813107: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x81310cu); f_0082e940();
    /* 0081310c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081310d: mov dword ptr [0xab0268], eax */ W32((u32)(0xab0268u), r_eax);
L_00813112:; BB(0x00813112);
    /* 00813112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813114: je 0x81318a */ if (fZ) goto L_0081318a;
L_00813116:; BB(0x00813116);
    /* 00813116: mov ecx, dword ptr [0xab0270] */ r_ecx = R32((u32)(0xab0270u));
    /* 0081311c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0081311e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081311f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813120: push dword ptr [edi*8 + 0xab0180] */ { u32 v = R32((u32)(r_edi*8+0xab0180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00813127: call 0x77a31c */ r_esp -= 4; W32(r_esp, 0x81312cu); f_0077a31c();
    /* 0081312c: mov ecx, dword ptr [0xab0268] */ r_ecx = R32((u32)(0xab0268u));
    /* 00813132: mov edx, dword ptr [esi*8 + 0xaaffd0] */ r_edx = R32((u32)(r_esi*8+0xaaffd0u));
    /* 00813139: mov ebx, dword ptr [esi*8 + 0xaaffc0] */ r_ebx = R32((u32)(r_esi*8+0xaaffc0u));
    /* 00813140: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813142: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813144: jle 0x813173 */ if ((fZ||fS!=fO)) goto L_00813173;
L_00813146:; BB(0x00813146);
    /* 00813146: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00813149:; BB(0x00813149);
    /* 00813149: movzx ebp, word ptr [ecx + 8] */ r_ebp = (u32)R16((u32)(r_ecx+0x8u));
    /* 0081314d: movzx edi, word ptr [edx] */ r_edi = (u32)R16((u32)(r_edx));
    /* 00813150: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813152: jne 0x813163 */ if (!fZ) goto L_00813163;
L_00813154:; BB(0x00813154);
    /* 00813154: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 00813158: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 0081315c: mov ebx, dword ptr [esi*8 + 0xaaffc0] */ r_ebx = R32((u32)(r_esi*8+0xaaffc0u));
L_00813163:; BB(0x00813163);
    /* 00813163: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813166: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00813169: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081316c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081316e: jl 0x813149 */ if ((fS!=fO)) goto L_00813149;
L_00813170:; BB(0x00813170);
    /* 00813170: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00813173:; BB(0x00813173);
    /* 00813173: mov eax, dword ptr [esi*8 + 0xaaffc8] */ r_eax = R32((u32)(r_esi*8+0xaaffc8u));
    /* 0081317a: mov dword ptr [0xab0264], ebx */ W32((u32)(0xab0264u), r_ebx);
    /* 00813180: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00813183: mov dword ptr [esi*8 + 0xaaffc8], eax */ W32((u32)(r_esi*8+0xaaffc8u), r_eax);
L_0081318a:; BB(0x0081318a);
    /* 0081318a: mov eax, dword ptr [esi*8 + 0xaaffc4] */ r_eax = R32((u32)(r_esi*8+0xaaffc4u));
    /* 00813191: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00813194: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813196: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813198: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0081319b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081319d: jle 0x8131b4 */ if ((fZ||fS!=fO)) goto L_008131b4;
L_0081319f:; BB(0x0081319f);
    /* 0081319f: lea ebx, [eax + eax + 0x1f] */ r_ebx = (u32)(r_eax+r_eax+0x1fu);
    /* 008131a3: and ebx, 0xffffffe0 */ {  u32 a = r_ebx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008131a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008131a7: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x8131acu); f_0082e940();
    /* 008131ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008131ad: mov dword ptr [0xab0260], eax */ W32((u32)(0xab0260u), r_eax);
    /* 008131b2: jmp 0x8131b9 */ goto L_008131b9;
L_008131b4:; BB(0x008131b4);
    /* 008131b4: mov eax, dword ptr [0xab0260] */ r_eax = R32((u32)(0xab0260u));
L_008131b9:; BB(0x008131b9);
    /* 008131b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008131bb: je 0x81322b */ if (fZ) goto L_0081322b;
L_008131bd:; BB(0x008131bd);
    /* 008131bd: mov ecx, dword ptr [0xab0270] */ r_ecx = R32((u32)(0xab0270u));
    /* 008131c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008131c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008131c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008131c7: push dword ptr [edi*8 + 0xab0184] */ { u32 v = R32((u32)(r_edi*8+0xab0184u)); r_esp -= 4; W32(r_esp, v); }
    /* 008131ce: call 0x77a31c */ r_esp -= 4; W32(r_esp, 0x8131d3u); f_0077a31c();
    /* 008131d3: mov ecx, dword ptr [0xab0260] */ r_ecx = R32((u32)(0xab0260u));
    /* 008131d9: mov edx, dword ptr [esi*8 + 0xaaffd4] */ r_edx = R32((u32)(r_esi*8+0xaaffd4u));
    /* 008131e0: mov ebx, dword ptr [esi*8 + 0xaaffc4] */ r_ebx = R32((u32)(r_esi*8+0xaaffc4u));
    /* 008131e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008131e9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008131eb: jle 0x813214 */ if ((fZ||fS!=fO)) goto L_00813214;
L_008131ed:; BB(0x008131ed);
    /* 008131ed: movzx ebp, word ptr [ecx + 0xa] */ r_ebp = (u32)R16((u32)(r_ecx+0xau));
    /* 008131f1: movzx edi, word ptr [edx] */ r_edi = (u32)R16((u32)(r_edx));
    /* 008131f4: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008131f6: jne 0x813207 */ if (!fZ) goto L_00813207;
L_008131f8:; BB(0x008131f8);
    /* 008131f8: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 008131fc: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 00813200: mov ebx, dword ptr [esi*8 + 0xaaffc4] */ r_ebx = R32((u32)(r_esi*8+0xaaffc4u));
L_00813207:; BB(0x00813207);
    /* 00813207: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081320a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081320d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813210: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813212: jl 0x8131ed */ if ((fS!=fO)) goto L_008131ed;
L_00813214:; BB(0x00813214);
    /* 00813214: mov eax, dword ptr [esi*8 + 0xaaffcc] */ r_eax = R32((u32)(r_esi*8+0xaaffccu));
    /* 0081321b: mov dword ptr [0xab025c], ebx */ W32((u32)(0xab025cu), r_ebx);
    /* 00813221: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813224: mov dword ptr [esi*8 + 0xaaffcc], eax */ W32((u32)(r_esi*8+0xaaffccu), r_eax);
L_0081322b:; BB(0x0081322b);
    /* 0081322b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081322c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081322d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081322e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081322f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00813230: ret  */ FN_RET(0x008130b0); r_esp += 4; return;
}

void f_00813234(void) /* sub_813234 */
{
    FN_ENTER(0x00813234);
    /* 00813234: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813235: mov ebp, esp */ r_ebp = r_esp;
    /* 00813237: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00813239: push 0x813570 */ { u32 v = 0x813570u; r_esp -= 4; W32(r_esp, v); }
    /* 0081323e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00813244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813245: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0081324c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081324f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00813252: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00813255: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00813258: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0081325b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081325d: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 00813263: mov dword ptr [0xab0210], eax */ W32((u32)(0xab0210u), r_eax);
    /* 00813268: mov dword ptr [0xab0214], eax */ W32((u32)(0xab0214u), r_eax);
    /* 0081326d: mov dword ptr [0xab0270], eax */ W32((u32)(0xab0270u), r_eax);
    /* 00813272: mov dword ptr [0xab026c], eax */ W32((u32)(0xab026cu), r_eax);
    /* 00813277: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00813279: push 0xba0 */ { u32 v = 0xba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081327e: call 0x82e94c */ r_esp -= 4; W32(r_esp, 0x813283u); f_0082e94c();
    /* 00813283: mov dword ptr [0xab0210], eax */ W32((u32)(0xab0210u), r_eax);
    /* 00813288: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0081328a: push 0x5a8 */ { u32 v = 0x5a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0081328f: call 0x82e94c */ r_esp -= 4; W32(r_esp, 0x813294u); f_0082e94c();
    /* 00813294: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813297: mov esi, dword ptr [0xab0210] */ r_esi = R32((u32)(0xab0210u));
    /* 0081329d: mov dword ptr [0xab0214], eax */ W32((u32)(0xab0214u), r_eax);
    /* 008132a2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008132a4:; BB(0x008132a4);
    /* 008132a4: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 008132a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008132a9: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 008132ac: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008132ae: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008132b0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008132b2: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008132b4: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 008132b9: mov word ptr [ebx + esi], cx */ W16((u32)(r_ebx+r_esi), (u16)r_ecx);
    /* 008132bd: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008132c0: cmp edi, 0xba0 */ {  u32 a = r_edi; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008132c6: mov word ptr [ebx + esi + 0x44], cx */ W16((u32)(r_ebx+r_esi+0x44u), (u16)r_ecx);
    /* 008132cb: mov word ptr [ebx + esi + 0x88], cx */ W16((u32)(r_ebx+r_esi+0x88u), (u16)r_ecx);
    /* 008132d3: mov word ptr [ebx + esi + 0xcc], cx */ W16((u32)(r_ebx+r_esi+0xccu), (u16)r_ecx);
    /* 008132db: mov word ptr [ebx + esi + 0x110], cx */ W16((u32)(r_ebx+r_esi+0x110u), (u16)r_ecx);
    /* 008132e3: mov word ptr [ebx + esi + 0x154], cx */ W16((u32)(r_ebx+r_esi+0x154u), (u16)r_ecx);
    /* 008132eb: jl 0x8132a4 */ if ((fS!=fO)) goto L_008132a4;
L_008132ed:; BB(0x008132ed);
    /* 008132ed: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008132ef:; BB(0x008132ef);
    /* 008132ef: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 008132f2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008132f7: mov word ptr [eax + ecx*8], dx */ W16((u32)(r_eax+r_ecx*8), (u16)r_edx);
    /* 008132fb: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008132fe: cmp ebx, 0x5a8 */ {  u32 a = r_ebx; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813304: mov word ptr [eax + ecx*8 + 0x48], dx */ W16((u32)(r_eax+r_ecx*8+0x48u), (u16)r_edx);
    /* 00813309: mov word ptr [eax + ecx*8 + 0x90], dx */ W16((u32)(r_eax+r_ecx*8+0x90u), (u16)r_edx);
    /* 00813311: mov word ptr [eax + ecx*8 + 0xd8], dx */ W16((u32)(r_eax+r_ecx*8+0xd8u), (u16)r_edx);
    /* 00813319: jl 0x8132ef */ if ((fS!=fO)) goto L_008132ef;
L_0081331b:; BB(0x0081331b);
    /* 0081331b: mov edx, 0xaaff00 */ r_edx = 0xaaff00u;
    /* 00813320: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813322: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00813324: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00813327: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0081332a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0081332d: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00813330: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00813333: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00813336: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00813339: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0081333c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0081333f: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00813342: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00813345: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00813348: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0081334b: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0081334e: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00813351: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00813354: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00813357: mov edx, 0xaaff60 */ r_edx = 0xaaff60u;
    /* 0081335c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081335e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00813360: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00813363: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00813366: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00813369: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0081336c: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0081336f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00813372: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00813375: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00813378: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0081337b: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0081337e: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00813381: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00813384: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00813387: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0081338a: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0081338d: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00813390: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00813393: mov edx, 0xab0218 */ r_edx = 0xab0218u;
    /* 00813398: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081339a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0081339c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0081339f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008133a2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008133a5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 008133a8: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 008133ab: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 008133ae: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 008133b1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 008133b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008133b6: push 0xba0 */ { u32 v = 0xba0u; r_esp -= 4; W32(r_esp, v); }
    /* 008133bb: call 0x82e94c */ r_esp -= 4; W32(r_esp, 0x8133c0u); f_0082e94c();
    /* 008133c0: mov dword ptr [0xab02bc], eax */ W32((u32)(0xab02bcu), r_eax);
    /* 008133c5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008133c7: push 0xb50 */ { u32 v = 0xb50u; r_esp -= 4; W32(r_esp, v); }
    /* 008133cc: call 0x82e94c */ r_esp -= 4; W32(r_esp, 0x8133d1u); f_0082e94c();
    /* 008133d1: mov dword ptr [0xab02b8], eax */ W32((u32)(0xab02b8u), r_eax);
    /* 008133d6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008133d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008133da: call 0x82e94c */ r_esp -= 4; W32(r_esp, 0x8133dfu); f_0082e94c();
    /* 008133df: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008133e2: mov dword ptr [0xab0248], eax */ W32((u32)(0xab0248u), r_eax);
    /* 008133e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008133e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008133eb:; BB(0x008133eb);
    /* 008133eb: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 008133f1: lea edx, [ebx + 0x100] */ r_edx = (u32)(r_ebx+0x100u);
    /* 008133f7: mov word ptr [ecx + eax*4 + 2], dx */ W16((u32)(r_ecx+r_eax*4+0x2u), (u16)r_edx);
    /* 008133fc: lea esi, [ebx + 0x101] */ r_esi = (u32)(r_ebx+0x101u);
    /* 00813402: lea edx, [ebx + 0x102] */ r_edx = (u32)(r_ebx+0x102u);
    /* 00813408: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 0081340e: mov word ptr [edi + eax*4 + 6], si */ W16((u32)(r_edi+r_eax*4+0x6u), (u16)r_esi);
    /* 00813413: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00813419: mov word ptr [ecx + eax*4 + 0xa], dx */ W16((u32)(r_ecx+r_eax*4+0xau), (u16)r_edx);
    /* 0081341e: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00813424: lea edx, [ebx + 0x103] */ r_edx = (u32)(r_ebx+0x103u);
    /* 0081342a: mov word ptr [ecx + eax*4 + 0xe], dx */ W16((u32)(r_ecx+r_eax*4+0xeu), (u16)r_edx);
    /* 0081342f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813432: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00813435: cmp eax, 0xba0 */ {  u32 a = r_eax; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081343a: jl 0x8133eb */ if ((fS!=fO)) goto L_008133eb;
L_0081343c:; BB(0x0081343c);
    /* 0081343c: mov ecx, dword ptr [0xab02b8] */ r_ecx = R32((u32)(0xab02b8u));
    /* 00813442: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00813444:; BB(0x00813444);
    /* 00813444: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00813447: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813449: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0081344c: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081344e: lea edi, [ebx + 0x100] */ r_edi = (u32)(r_ebx+0x100u);
    /* 00813454: lea esi, [ebx + 0x101] */ r_esi = (u32)(r_ebx+0x101u);
    /* 0081345a: mov word ptr [eax + ecx + 4], di */ W16((u32)(r_eax+r_ecx+0x4u), (u16)r_edi);
    /* 0081345f: mov word ptr [eax + ecx + 0x10], si */ W16((u32)(r_eax+r_ecx+0x10u), (u16)r_esi);
    /* 00813464: lea esi, [ebx + 0x102] */ r_esi = (u32)(r_ebx+0x102u);
    /* 0081346a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081346d: mov word ptr [eax + ecx + 0x1c], si */ W16((u32)(r_eax+r_ecx+0x1cu), (u16)r_esi);
    /* 00813472: lea esi, [ebx + 0x103] */ r_esi = (u32)(r_ebx+0x103u);
    /* 00813478: mov word ptr [eax + ecx + 0x28], si */ W16((u32)(r_eax+r_ecx+0x28u), (u16)r_esi);
    /* 0081347d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00813480: cmp edx, 0xb50 */ {  u32 a = r_edx; u32 b = 0xb50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813486: jl 0x813444 */ if ((fS!=fO)) goto L_00813444;
L_00813488:; BB(0x00813488);
    /* 00813488: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 0081348e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813490: mov dword ptr [0xab02b4], edx */ W32((u32)(0xab02b4u), r_edx);
    /* 00813496: mov dword ptr [0xab02b0], edx */ W32((u32)(0xab02b0u), r_edx);
    /* 0081349c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008134a1: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 008134a4: mov edi, dword ptr [0xab0248] */ r_edi = R32((u32)(0xab0248u));
    /* 008134aa: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 008134ae: mov esi, dword ptr [0xab0248] */ r_esi = R32((u32)(0xab0248u));
    /* 008134b4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008134b7: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 008134bb: mov ebx, dword ptr [0xab0248] */ r_ebx = R32((u32)(0xab0248u));
    /* 008134c1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008134c4: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 008134c8: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 008134ce: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008134d1: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 008134d5: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 008134db: mov word ptr [ecx + 0xa], ax */ W16((u32)(r_ecx+0xau), (u16)r_eax);
    /* 008134df: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 008134e5: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 008134e9: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 008134ef: mov word ptr [ecx + 0xe], ax */ W16((u32)(r_ecx+0xeu), (u16)r_eax);
    /* 008134f3: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 008134f9: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 008134fd: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 00813503: mov word ptr [ecx + 0x12], ax */ W16((u32)(r_ecx+0x12u), (u16)r_eax);
    /* 00813507: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 0081350d: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 00813511: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 00813517: mov word ptr [ecx + 0x16], ax */ W16((u32)(r_ecx+0x16u), (u16)r_eax);
    /* 0081351b: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 00813521: mov word ptr [ecx + 0x18], ax */ W16((u32)(r_ecx+0x18u), (u16)r_eax);
    /* 00813525: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 0081352b: mov word ptr [ecx + 0x1a], ax */ W16((u32)(r_ecx+0x1au), (u16)r_eax);
    /* 0081352f: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 00813535: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00813539: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 0081353f: mov word ptr [ecx + 0x1e], ax */ W16((u32)(r_ecx+0x1eu), (u16)r_eax);
    /* 00813543: mov dword ptr [0xab0258], edx */ W32((u32)(0xab0258u), r_edx);
    /* 00813549: mov dword ptr [0xab0250], edx */ W32((u32)(0xab0250u), r_edx);
    /* 0081354f: mov dword ptr [0xab0254], edx */ W32((u32)(0xab0254u), r_edx);
    /* 00813555: mov dword ptr [0xab024c], edx */ W32((u32)(0xab024cu), r_edx);
    /* 0081355b: mov dword ptr [0xab027c], edx */ W32((u32)(0xab027cu), r_edx);
    /* 00813561: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00813564: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081356b: mov esp, ebp */ r_esp = r_ebp;
    /* 0081356d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081356e: ret  */ FN_RET(0x00813234); r_esp += 4; return;
}

void f_00813570(void)
{
    FN_ENTER(0x00813570);
    /* 00813570: mov eax, 0xb47860 */ r_eax = 0xb47860u;
    /* 00813575: jmp 0x857a43 */ f_00857a43(); return;
}

void f_0081357c(void) /* sub_81357C */
{
    FN_ENTER(0x0081357c);
    /* 0081357c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081357e: mov dword ptr [0xab0278], eax */ W32((u32)(0xab0278u), r_eax);
    /* 00813583: mov dword ptr [0xab0274], eax */ W32((u32)(0xab0274u), r_eax);
    /* 00813588: ret  */ FN_RET(0x0081357c); r_esp += 4; return;
}

void f_0081358c(void) /* sub_81358C */
{
    FN_ENTER(0x0081358c);
    /* 0081358c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081358d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081358e: mov ecx, dword ptr [0xab59b8] */ r_ecx = R32((u32)(0xab59b8u));
    /* 00813594: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813596: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813598: jle 0x8135c9 */ if ((fZ||fS!=fO)) goto L_008135c9;
L_0081359a:; BB(0x0081359a);
    /* 0081359a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0081359d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081359f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135a1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008135a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135ab: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008135ad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135af: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008135b1:; BB(0x008135b1);
    /* 008135b1: mov ebx, dword ptr [eax + 0xab0304] */ r_ebx = R32((u32)(r_eax+0xab0304u));
    /* 008135b7: cmp ebx, dword ptr [esp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008135bb: je 0x8135cc */ if (fZ) goto L_008135cc;
L_008135bd:; BB(0x008135bd);
    /* 008135bd: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008135c2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008135c5: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008135c7: jl 0x8135b1 */ if ((fS!=fO)) goto L_008135b1;
L_008135c9:; BB(0x008135c9);
    /* 008135c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008135ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008135cb: ret  */ FN_RET(0x0081358c); r_esp += 4; return;
L_008135cc:; BB(0x008135cc);
    /* 008135cc: mov eax, edx */ r_eax = r_edx;
    /* 008135ce: call 0x8135dc */ r_esp -= 4; W32(r_esp, 0x8135d3u); f_008135dc();
    /* 008135d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008135d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008135d5: ret  */ FN_RET(0x0081358c); r_esp += 4; return;
}

void f_008135dc(void) /* sub_8135DC */
{
    FN_ENTER(0x008135dc);
    /* 008135dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008135dd: mov ecx, eax */ r_ecx = r_eax;
    /* 008135df: cmp ecx, 0x31 */ {  u32 a = r_ecx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008135e2: jge 0x813632 */ if ((fS==fO)) goto L_00813632;
L_008135e4:; BB(0x008135e4);
    /* 008135e4: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 008135e7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135e9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135eb: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008135ed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135ef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135f5: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008135f7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008135f9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008135fb: lea edx, [edi + edi + 0xab0300] */ r_edx = (u32)(r_edi+r_edi+0xab0300u);
    /* 00813602: lea eax, [edx + 0x1bc] */ r_eax = (u32)(r_edx+0x1bcu);
    /* 00813608: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0081360b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081360d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081360f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00813611: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813613: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813615: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813617: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813619: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0081361b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081361d: lea ecx, [edi + edi + 0x54fc] */ r_ecx = (u32)(r_edi+r_edi+0x54fcu);
    /* 00813624: and ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00813627: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00813628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813629: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081362a: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x81362fu); f_0086b6b8();
    /* 0081362f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00813632:; BB(0x00813632);
    /* 00813632: movzx eax, byte ptr [0xab59b4] */ r_eax = (u32)R8((u32)(0xab59b4u));
    /* 00813639: add dword ptr [0xab59b8], -1 */ { u32 ad = (u32)(0xab59b8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00813640: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813645: mov byte ptr [0xab59b4], al */ W8((u32)(0xab59b4u), (u8)r_eax);
    /* 0081364a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081364b: ret  */ FN_RET(0x008135dc); r_esp += 4; return;
}

void f_0081364c(void) /* sub_81364C */
{
    FN_ENTER(0x0081364c);
    /* 0081364c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00813650: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00813653: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813655: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813657: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00813659: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081365b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081365d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081365f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813661: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00813663: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00813665: lea eax, [ecx + ecx + 0xab0300] */ r_eax = (u32)(r_ecx+r_ecx+0xab0300u);
    /* 0081366c: ret  */ FN_RET(0x0081364c); r_esp += 4; return;
}

void f_00813670(void) /* sub_813670 */
{
    FN_ENTER(0x00813670);
    /* 00813670: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813671: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813672: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813674: mov ecx, dword ptr [0xab59b8] */ r_ecx = R32((u32)(0xab59b8u));
    /* 0081367a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081367c: jle 0x8136b3 */ if ((fZ||fS!=fO)) goto L_008136b3;
L_0081367e:; BB(0x0081367e);
    /* 0081367e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00813681: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813683: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813685: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00813687: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813689: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081368b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081368d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081368f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00813691: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813693: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00813695:; BB(0x00813695);
    /* 00813695: mov esi, dword ptr [eax + 0xab0304] */ r_esi = R32((u32)(r_eax+0xab0304u));
    /* 0081369b: cmp esi, dword ptr [esp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081369f: lea ebx, [eax + 0xab0300] */ r_ebx = (u32)(r_eax+0xab0300u);
    /* 008136a5: je 0x8136b8 */ if (fZ) goto L_008136b8;
L_008136a7:; BB(0x008136a7);
    /* 008136a7: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008136ac: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008136af: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008136b1: jl 0x813695 */ if ((fS!=fO)) goto L_00813695;
L_008136b3:; BB(0x008136b3);
    /* 008136b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008136b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008136b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008136b7: ret  */ FN_RET(0x00813670); r_esp += 4; return;
L_008136b8:; BB(0x008136b8);
    /* 008136b8: mov eax, ebx */ r_eax = r_ebx;
    /* 008136ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008136bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008136bc: ret  */ FN_RET(0x00813670); r_esp += 4; return;
}

void f_008136c0(void) /* sub_8136C0 */
{
    FN_ENTER(0x008136c0);
    /* 008136c0: mov edx, 0xab0300 */ r_edx = 0xab0300u;
    /* 008136c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008136c7:; BB(0x008136c7);
    /* 008136c7: movsx ecx, byte ptr [edx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1b8u));
    /* 008136ce: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008136d1: je 0x8136df */ if (fZ) goto L_008136df;
L_008136d3:; BB(0x008136d3);
    /* 008136d3: and ecx, 0xfd */ {  u32 a = r_ecx; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008136d9: mov byte ptr [edx + 0x1b8], cl */ W8((u32)(r_edx+0x1b8u), (u8)r_ecx);
L_008136df:; BB(0x008136df);
    /* 008136df: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008136e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008136e8: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008136eb: jl 0x8136c7 */ if ((fS!=fO)) goto L_008136c7;
L_008136ed:; BB(0x008136ed);
    /* 008136ed: ret  */ FN_RET(0x008136c0); r_esp += 4; return;
}

void f_008136f0(void) /* sub_8136F0 */
{
    FN_ENTER(0x008136f0);
    /* 008136f0: sub esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008136f6: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 008136fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008136fe: je 0x813788 */ if (fZ) goto L_00813788;
L_00813704:; BB(0x00813704);
    /* 00813704: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00813706: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0081370a: mov byte ptr [esp + 3], cl */ W8((u32)(r_esp+0x3u), (u8)r_ecx);
    /* 0081370e: mov eax, 8 */ r_eax = 0x8u;
    /* 00813713: mov byte ptr [esp + 2], cl */ W8((u32)(r_esp+0x2u), (u8)r_ecx);
    /* 00813717: mov ecx, dword ptr [edx + 0x12120] */ r_ecx = R32((u32)(r_edx+0x12120u));
    /* 0081371d: mov edx, dword ptr [edx + 0x12124] */ r_edx = R32((u32)(r_edx+0x12124u));
    /* 00813723: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00813727: mov eax, dword ptr [0xa9c0ec] */ r_eax = R32((u32)(0xa9c0ecu));
    /* 0081372c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00813730: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00813734: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00813738: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0081373a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081373d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081373e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081373f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813744u); f_00857dec();
    /* 00813744: mov edx, dword ptr [esp + 0x46c] */ r_edx = R32((u32)(r_esp+0x46cu));
    /* 0081374b: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0081374f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813751: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 00813756: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0081375a: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0081375f: push dword ptr [esp + 0x474] */ { u32 v = R32((u32)(r_esp+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 00813766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00813767: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x81376cu); f_00857dec();
    /* 0081376c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081376f: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00813775: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00813778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081377a: mov word ptr [esp + 0x1b2], ax */ W16((u32)(r_esp+0x1b2u), (u16)r_eax);
    /* 00813782: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813783: call 0x7d4384 */ r_esp -= 4; W32(r_esp, 0x813788u); f_007d4384();
L_00813788:; BB(0x00813788);
    /* 00813788: add esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081378e: ret  */ FN_RET(0x008136f0); r_esp += 4; return;
}

void f_00813790(void) /* sub_813790 */
{
    FN_ENTER(0x00813790);
    /* 00813790: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813791: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813792: sub esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00813798: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0081379d: mov edi, dword ptr [esp + 0x46c] */ r_edi = R32((u32)(r_esp+0x46cu));
    /* 008137a4: mov esi, dword ptr [esp + 0x474] */ r_esi = R32((u32)(r_esp+0x474u));
    /* 008137ab: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 008137b1: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008137b4: jb 0x8137b8 */ if (fC) goto L_008137b8;
L_008137b6:; BB(0x008137b6);
    /* 008137b6: mov edi, eax */ r_edi = r_eax;
L_008137b8:; BB(0x008137b8);
    /* 008137b8: mov edx, 0x400 */ r_edx = 0x400u;
    /* 008137bd: cmp esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008137c3: jb 0x8137c7 */ if (fC) goto L_008137c7;
L_008137c5:; BB(0x008137c5);
    /* 008137c5: mov esi, edx */ r_esi = r_edx;
L_008137c7:; BB(0x008137c7);
    /* 008137c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008137c9: je 0x813841 */ if (fZ) goto L_00813841;
L_008137cb:; BB(0x008137cb);
    /* 008137cb: mov ecx, dword ptr [esp + 0x478] */ r_ecx = R32((u32)(r_esp+0x478u));
    /* 008137d2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008137d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008137d8: mov edx, 8 */ r_edx = 0x8u;
    /* 008137dd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008137e1: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 008137e5: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 008137e9: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 008137ed: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008137f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008137f2: push dword ptr [esp + 0x46c] */ { u32 v = R32((u32)(r_esp+0x46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008137f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008137fa: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x8137ffu); f_00857dec();
    /* 008137ff: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00813805: mov ecx, dword ptr [edx + 0x12124] */ r_ecx = R32((u32)(r_edx+0x12124u));
    /* 0081380b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081380d: mov word ptr [esp + edi*2 + 0x1a], ax */ W16((u32)(r_esp+r_edi*2+0x1au), (u16)r_eax);
    /* 00813812: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00813816: lea edi, [esp + 0x68] */ r_edi = (u32)(r_esp+0x68u);
    /* 0081381a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081381b: push dword ptr [esp + 0x480] */ { u32 v = R32((u32)(r_esp+0x480u)); r_esp -= 4; W32(r_esp, v); }
    /* 00813822: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813823: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813828u); f_00857dec();
    /* 00813828: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081382b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00813831: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00813834: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813836: mov word ptr [esp + esi*2 + 0x5a], ax */ W16((u32)(r_esp+r_esi*2+0x5au), (u16)r_eax);
    /* 0081383b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081383c: call 0x7d4384 */ r_esp -= 4; W32(r_esp, 0x813841u); f_007d4384();
L_00813841:; BB(0x00813841);
    /* 00813841: add esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00813847: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00813848: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00813849: ret  */ FN_RET(0x00813790); r_esp += 4; return;
}

void f_0081384c(void) /* sub_81384C */
{
    FN_ENTER(0x0081384c);
    /* 0081384c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081384d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081384e: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00813852: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813853: call 0x813a3c */ r_esp -= 4; W32(r_esp, 0x813858u); f_00813a3c();
    /* 00813858: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00813859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081385b: je 0x813860 */ if (fZ) goto L_00813860;
L_0081385d:; BB(0x0081385d);
    /* 0081385d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081385e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081385f: ret  */ FN_RET(0x0081384c); r_esp += 4; return;
L_00813860:; BB(0x00813860);
    /* 00813860: mov eax, ebp */ r_eax = r_ebp;
    /* 00813862: call 0x813870 */ r_esp -= 4; W32(r_esp, 0x813867u); f_00813870();
    /* 00813867: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00813868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00813869: ret  */ FN_RET(0x0081384c); r_esp += 4; return;
}

void f_00813870(void) /* sub_813870 */
{
    FN_ENTER(0x00813870);
    /* 00813870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813871: mov ebp, eax */ r_ebp = r_eax;
    /* 00813873: mov edx, 0xab0300 */ r_edx = 0xab0300u;
    /* 00813878: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0081387a:; BB(0x0081387a);
    /* 0081387a: movzx eax, byte ptr [edx + 0x1b8] */ r_eax = (u32)R8((u32)(r_edx+0x1b8u));
    /* 00813881: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00813883: je 0x8138e1 */ if (fZ) goto L_008138e1;
L_00813885:; BB(0x00813885);
    /* 00813885: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813888: lea eax, [edx + 0x1bc] */ r_eax = (u32)(r_edx+0x1bcu);
    /* 0081388e: movzx edx, byte ptr [edx + 0x374] */ r_edx = (u32)R8((u32)(r_edx+0x374u));
    /* 00813895: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00813898: je 0x8138e1 */ if (fZ) goto L_008138e1;
L_0081389a:; BB(0x0081389a);
    /* 0081389a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081389d: lea edx, [eax + 0x1bc] */ r_edx = (u32)(r_eax+0x1bcu);
    /* 008138a3: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008138a6: jl 0x81387a */ if ((fS!=fO)) goto L_0081387a;
L_008138a8:; BB(0x008138a8);
    /* 008138a8: push 0x54fc */ { u32 v = 0x54fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008138ad: mov ecx, 0xab0300 */ r_ecx = 0xab0300u;
    /* 008138b2: lea edx, [ecx + 0x1bc] */ r_edx = (u32)(r_ecx+0x1bcu);
    /* 008138b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008138b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008138ba: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x8138bfu); f_0086b324();
    /* 008138bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008138c2: movzx edx, byte ptr [0xab59b4] */ r_edx = (u32)R8((u32)(0xab59b4u));
    /* 008138c9: add dword ptr [0xab59b8], -1 */ { u32 ad = (u32)(0xab59b8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008138d0: and edx, 0xfe */ {  u32 a = r_edx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008138d6: mov ecx, 0x31 */ r_ecx = 0x31u;
    /* 008138db: mov byte ptr [0xab59b4], dl */ W8((u32)(0xab59b4u), (u8)r_edx);
L_008138e1:; BB(0x008138e1);
    /* 008138e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008138e2: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 008138e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138e9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008138eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138ed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138f3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008138f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008138f7: lea ecx, [edx + edx + 0xab0300] */ r_ecx = (u32)(r_edx+r_edx+0xab0300u);
    /* 008138fe: call 0x813930 */ r_esp -= 4; W32(r_esp, 0x813903u); f_00813930();
    /* 00813903: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0081390a: add dword ptr [0xab59b8], 1 */ { u32 ad = (u32)(0xab59b8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00813911: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00813916: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813918: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0081391e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081391f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813920: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813921: push 0x586 */ { u32 v = 0x586u; r_esp -= 4; W32(r_esp, v); }
    /* 00813926: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x81392bu); f_00814298();
    /* 0081392b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081392e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081392f: ret  */ FN_RET(0x00813870); r_esp += 4; return;
}

void f_00813930(void) /* sub_813930 */
{
    FN_ENTER(0x00813930);
    /* 00813930: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813931: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813932: mov esi, ecx */ r_esi = r_ecx;
    /* 00813934: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00813938: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0081393a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0081393d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0081393f: mov eax, dword ptr [0xab59bc] */ r_eax = R32((u32)(0xab59bcu));
    /* 00813944: mov byte ptr [esi + 0x1b8], 0xb */ W8((u32)(r_esi+0x1b8u), 0xbu);
    /* 0081394b: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0081394e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00813951: mov dword ptr [0xab59bc], edx */ W32((u32)(0xab59bcu), r_edx);
    /* 00813957: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0081395a: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 0081395d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081395e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081395f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813964u); f_00857dec();
    /* 00813964: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 00813969: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081396b: mov word ptr [esi + 0x36], ax */ W16((u32)(r_esi+0x36u), (u16)r_eax);
    /* 0081396f: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 00813972: lea edx, [ebp + 0x5c] */ r_edx = (u32)(r_ebp+0x5cu);
    /* 00813975: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813977: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x81397cu); f_00857dec();
    /* 0081397c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0081397e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813980: mov word ptr [esi + 0x1b6], ax */ W16((u32)(r_esi+0x1b6u), (u16)r_eax);
    /* 00813987: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0081398a: lea ebp, [ebp + 0x34] */ r_ebp = (u32)(r_ebp+0x34u);
    /* 0081398d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081398e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081398f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813994u); f_00857dec();
    /* 00813994: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813996: mov word ptr [esi + 0x5e], ax */ W16((u32)(r_esi+0x5eu), (u16)r_eax);
    /* 0081399a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081399d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081399e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081399f: ret 4 */ FN_RET(0x00813930); r_esp += 8; return;
}

void f_008139a4(void) /* sub_8139A4 */
{
    FN_ENTER(0x008139a4);
    /* 008139a4: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 008139ab: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008139b1: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 008139b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008139ba: mov edx, 0xab0300 */ r_edx = 0xab0300u;
    /* 008139bf: mov dword ptr [0xab59bc], eax */ W32((u32)(0xab59bcu), r_eax);
    /* 008139c4: mov dword ptr [0xab59b8], eax */ W32((u32)(0xab59b8u), r_eax);
    /* 008139c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008139cb:; BB(0x008139cb);
    /* 008139cb: movzx ecx, byte ptr [edx + 0x1b8] */ r_ecx = (u32)R8((u32)(r_edx+0x1b8u));
    /* 008139d2: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008139d8: mov byte ptr [edx + 0x1b8], cl */ W8((u32)(r_edx+0x1b8u), (u8)r_ecx);
    /* 008139de: movzx ecx, byte ptr [edx + 0x374] */ r_ecx = (u32)R8((u32)(r_edx+0x374u));
    /* 008139e5: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008139eb: mov byte ptr [edx + 0x374], cl */ W8((u32)(r_edx+0x374u), (u8)r_ecx);
    /* 008139f1: movzx ecx, byte ptr [edx + 0x530] */ r_ecx = (u32)R8((u32)(r_edx+0x530u));
    /* 008139f8: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008139fe: mov byte ptr [edx + 0x530], cl */ W8((u32)(r_edx+0x530u), (u8)r_ecx);
    /* 00813a04: movzx ecx, byte ptr [edx + 0x6ec] */ r_ecx = (u32)R8((u32)(r_edx+0x6ecu));
    /* 00813a0b: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00813a11: mov byte ptr [edx + 0x6ec], cl */ W8((u32)(r_edx+0x6ecu), (u8)r_ecx);
    /* 00813a17: movzx ecx, byte ptr [edx + 0x8a8] */ r_ecx = (u32)R8((u32)(r_edx+0x8a8u));
    /* 00813a1e: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00813a24: mov byte ptr [edx + 0x8a8], cl */ W8((u32)(r_edx+0x8a8u), (u8)r_ecx);
    /* 00813a2a: add edx, 0x8ac */ {  u32 a = r_edx; u32 b = 0x8acu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00813a30: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813a33: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00813a36: jl 0x8139cb */ if ((fS!=fO)) goto L_008139cb;
L_00813a38:; BB(0x00813a38);
    /* 00813a38: ret  */ FN_RET(0x008139a4); r_esp += 4; return;
}

void f_00813a3c(void) /* sub_813A3C */
{
    FN_ENTER(0x00813a3c);
    /* 00813a3c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00813a40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813a42: lea eax, [ecx + 0x5e] */ r_eax = (u32)(r_ecx+0x5eu);
    /* 00813a45: movzx ecx, word ptr [ecx + 0x5c] */ r_ecx = (u32)R16((u32)(r_ecx+0x5cu));
    /* 00813a49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813a4b: je 0x813a6a */ if (fZ) goto L_00813a6a;
L_00813a4d:; BB(0x00813a4d);
    /* 00813a4d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00813a50: mov ecx, eax */ r_ecx = r_eax;
    /* 00813a52: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 00813a55: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813a58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813a5a: je 0x813a6a */ if (fZ) goto L_00813a6a;
L_00813a5c:; BB(0x00813a5c);
    /* 00813a5c: cmp edx, 0x9b */ {  u32 a = r_edx; u32 b = 0x9bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00813a62: jle 0x813a4d */ if ((fZ||fS!=fO)) goto L_00813a4d;
L_00813a64:; BB(0x00813a64);
    /* 00813a64: mov eax, 1 */ r_eax = 0x1u;
    /* 00813a69: ret  */ FN_RET(0x00813a3c); r_esp += 4; return;
L_00813a6a:; BB(0x00813a6a);
    /* 00813a6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813a6c: ret  */ FN_RET(0x00813a3c); r_esp += 4; return;
}

void f_00813a52(void)
{
    FN_ENTER(0x00813a52);
    goto L_00813a52;
L_00813a4d:; BB(0x00813a4d);
    /* 00813a4d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00813a50: mov ecx, eax */ r_ecx = r_eax;
L_00813a52:; BB(0x00813a52);
    /* 00813a52: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 00813a55: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813a58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813a5a: je 0x813a6a */ if (fZ) goto L_00813a6a;
L_00813a5c:; BB(0x00813a5c);
    /* 00813a5c: cmp edx, 0x9b */ {  u32 a = r_edx; u32 b = 0x9bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00813a62: jle 0x813a4d */ if ((fZ||fS!=fO)) goto L_00813a4d;
L_00813a64:; BB(0x00813a64);
    /* 00813a64: mov eax, 1 */ r_eax = 0x1u;
    /* 00813a69: ret  */ FN_RET(0x00813a52); r_esp += 4; return;
L_00813a6a:; BB(0x00813a6a);
    /* 00813a6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813a6c: ret  */ FN_RET(0x00813a52); r_esp += 4; return;
}

void f_00813a70(void) /* sub_813A70 */
{
    FN_ENTER(0x00813a70);
    /* 00813a70: call 0x8139a4 */ r_esp -= 4; W32(r_esp, 0x813a75u); f_008139a4();
    /* 00813a75: ret  */ FN_RET(0x00813a70); r_esp += 4; return;
}

void f_00813a78(void) /* sub_813A78 */
{
    FN_ENTER(0x00813a78);
    /* 00813a78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813a79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813a7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813a7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813a7c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00813a7f: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00813a83: call 0x70ac58 */ r_esp -= 4; W32(r_esp, 0x813a88u); f_0070ac58();
    /* 00813a88: mov ebp, eax */ r_ebp = r_eax;
    /* 00813a8a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813a8c: jle 0x813b04 */ if ((fZ||fS!=fO)) goto L_00813b04;
L_00813a8e:; BB(0x00813a8e);
    /* 00813a8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813a8f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x813a94u); f_00858009();
    /* 00813a94: mov esi, eax */ r_esi = r_eax;
    /* 00813a96: lea edx, [esi + esi + 2] */ r_edx = (u32)(r_esi+r_esi+0x2u);
    /* 00813a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813a9b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x813aa0u); f_008581c5();
    /* 00813aa0: mov ebx, eax */ r_ebx = r_eax;
    /* 00813aa2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813aa3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813aa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813aa5: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813aaau); f_00857dec();
    /* 00813aaa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813aad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813aaf: mov word ptr [ebx + esi*2], dx */ W16((u32)(r_ebx+r_esi*2), (u16)r_edx);
    /* 00813ab3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00813ab5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813ab7: jle 0x813ae6 */ if ((fZ||fS!=fO)) goto L_00813ae6;
L_00813ab9:; BB(0x00813ab9);
    /* 00813ab9: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00813abd:; BB(0x00813abd);
    /* 00813abd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813abe: call 0x70ac60 */ r_esp -= 4; W32(r_esp, 0x813ac3u); f_0070ac60();
    /* 00813ac3: mov ecx, eax */ r_ecx = r_eax;
    /* 00813ac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813ac8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813aca: je 0x813af4 */ if (fZ) goto L_00813af4;
L_00813acc:; BB(0x00813acc);
    /* 00813acc: mov eax, ebx */ r_eax = r_ebx;
    /* 00813ace: mov edx, edi */ r_edx = r_edi;
    /* 00813ad0: call 0x813b18 */ r_esp -= 4; W32(r_esp, 0x813ad5u); f_00813b18();
    /* 00813ad5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813ad6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813ad7: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813adcu); f_00857fed();
    /* 00813adc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813adf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813ae2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813ae4: jl 0x813abd */ if ((fS!=fO)) goto L_00813abd;
L_00813ae6:; BB(0x00813ae6);
    /* 00813ae6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813ae7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x813aecu); f_00857e98();
    /* 00813aec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00813aef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00813af0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00813af1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00813af2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00813af3: ret  */ FN_RET(0x00813a78); r_esp += 4; return;
L_00813af4:; BB(0x00813af4);
    /* 00813af4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813af5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00813af9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813afa: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813affu); f_00857fed();
    /* 00813aff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813b02: jmp 0x813ae6 */ goto L_00813ae6;
L_00813b04:; BB(0x00813b04);
    /* 00813b04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813b05: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00813b09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813b0a: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813b0fu); f_00857fed();
    /* 00813b0f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00813b12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00813b13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00813b14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00813b15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00813b16: ret  */ FN_RET(0x00813a78); r_esp += 4; return;
}

void f_00813b18(void) /* sub_813B18 */
{
    FN_ENTER(0x00813b18);
    /* 00813b18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813b19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813b1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813b1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813b1c: sub esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00813b22: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00813b26: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00813b2a: mov ebp, eax */ r_ebp = r_eax;
    /* 00813b2c: mov edx, 0x20 */ r_edx = 0x20u;
    /* 00813b31: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 00813b36: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00813b3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00813b3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813b3e: je 0x813dfe */ if (fZ) goto L_00813dfe;
L_00813b44:; BB(0x00813b44);
    /* 00813b44: mov eax, edx */ r_eax = r_edx;
    /* 00813b46: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813b49: jne 0x813df3 */ if (!fZ) goto L_00813df3;
L_00813b4f:; BB(0x00813b4f);
    /* 00813b4f: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00813b53: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00813b55:; BB(0x00813b55);
    /* 00813b55: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00813b5a: mov ebp, 1 */ r_ebp = 0x1u;
L_00813b5f:; BB(0x00813b5f);
    /* 00813b5f: mov esi, eax */ r_esi = r_eax;
    /* 00813b61: cmp esi, 0x3000 */ {  u32 a = r_esi; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813b67: jne 0x813b73 */ if (!fZ) goto L_00813b73;
L_00813b69:; BB(0x00813b69);
    /* 00813b69: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00813b6e: mov esi, 0x20 */ r_esi = 0x20u;
L_00813b73:; BB(0x00813b73);
    /* 00813b73: cmp esi, 0x41 */ {  u32 a = r_esi; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813b76: jl 0x813b87 */ if ((fS!=fO)) goto L_00813b87;
L_00813b78:; BB(0x00813b78);
    /* 00813b78: cmp esi, 0x5a */ {  u32 a = r_esi; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813b7b: jg 0x813b87 */ if ((!fZ&&fS==fO)) goto L_00813b87;
L_00813b7d:; BB(0x00813b7d);
    /* 00813b7d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813b80: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 00813b83: mov esi, eax */ r_esi = r_eax;
    /* 00813b85: jmp 0x813bbf */ goto L_00813bbf;
L_00813b87:; BB(0x00813b87);
    /* 00813b87: cmp esi, 0xff21 */ {  u32 a = r_esi; u32 b = 0xff21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813b8d: jl 0x813ba4 */ if ((fS!=fO)) goto L_00813ba4;
L_00813b8f:; BB(0x00813b8f);
    /* 00813b8f: cmp esi, 0xff3a */ {  u32 a = r_esi; u32 b = 0xff3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813b95: jg 0x813ba4 */ if ((!fZ&&fS==fO)) goto L_00813ba4;
L_00813b97:; BB(0x00813b97);
    /* 00813b97: add esi, 0xffff0140 */ {  u32 a = r_esi; u32 b = 0xffff0140u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813b9d: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 00813ba0: mov esi, eax */ r_esi = r_eax;
    /* 00813ba2: jmp 0x813bbf */ goto L_00813bbf;
L_00813ba4:; BB(0x00813ba4);
    /* 00813ba4: cmp esi, 0xff41 */ {  u32 a = r_esi; u32 b = 0xff41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813baa: jl 0x813bbf */ if ((fS!=fO)) goto L_00813bbf;
L_00813bac:; BB(0x00813bac);
    /* 00813bac: cmp esi, 0xff5a */ {  u32 a = r_esi; u32 b = 0xff5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813bb2: jg 0x813bbf */ if ((!fZ&&fS==fO)) goto L_00813bbf;
L_00813bb4:; BB(0x00813bb4);
    /* 00813bb4: add esi, 0xffff0120 */ {  u32 a = r_esi; u32 b = 0xffff0120u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813bba: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 00813bbd: mov esi, eax */ r_esi = r_eax;
L_00813bbf:; BB(0x00813bbf);
    /* 00813bbf: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813bc1: jne 0x813bf1 */ if (!fZ) goto L_00813bf1;
L_00813bc3:; BB(0x00813bc3);
    /* 00813bc3: cmp edx, 0xff66 */ {  u32 a = r_edx; u32 b = 0xff66u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813bc9: jl 0x813bf1 */ if ((fS!=fO)) goto L_00813bf1;
L_00813bcb:; BB(0x00813bcb);
    /* 00813bcb: cmp edx, 0xff9d */ {  u32 a = r_edx; u32 b = 0xff9du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813bd1: jg 0x813bf1 */ if ((!fZ&&fS==fO)) goto L_00813bf1;
L_00813bd3:; BB(0x00813bd3);
    /* 00813bd3: cmp edx, 0xff66 */ {  u32 a = r_edx; u32 b = 0xff66u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813bd9: jl 0x813bed */ if ((fS!=fO)) goto L_00813bed;
L_00813bdb:; BB(0x00813bdb);
    /* 00813bdb: cmp edx, 0xff9d */ {  u32 a = r_edx; u32 b = 0xff9du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813be1: jg 0x813bed */ if ((!fZ&&fS==fO)) goto L_00813bed;
L_00813be3:; BB(0x00813be3);
    /* 00813be3: movzx eax, word ptr [edx*2 + 0x960b34] */ r_eax = (u32)R16((u32)(r_edx*2+0x960b34u));
    /* 00813beb: jmp 0x813bef */ goto L_00813bef;
L_00813bed:; BB(0x00813bed);
    /* 00813bed: mov eax, edx */ r_eax = r_edx;
L_00813bef:; BB(0x00813bef);
    /* 00813bef: mov esi, eax */ r_esi = r_eax;
L_00813bf1:; BB(0x00813bf1);
    /* 00813bf1: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00813bf5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00813bf9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00813bfb: jmp 0x813bff */ goto L_00813bff;
L_00813bfd:; BB(0x00813bfd);
    /* 00813bfd: mov esi, eax */ r_esi = r_eax;
L_00813bff:; BB(0x00813bff);
    /* 00813bff: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00813c02: movzx ecx, word ptr [edx + 0x980980] */ r_ecx = (u32)R16((u32)(r_edx+0x980980u));
    /* 00813c09: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c0b: jne 0x813c17 */ if (!fZ) goto L_00813c17;
L_00813c0d:; BB(0x00813c0d);
    /* 00813c0d: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00813c12: mov esi, 0x20 */ r_esi = 0x20u;
L_00813c17:; BB(0x00813c17);
    /* 00813c17: movzx ecx, word ptr [edx + 0x980982] */ r_ecx = (u32)R16((u32)(r_edx+0x980982u));
    /* 00813c1e: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c20: jne 0x813c2c */ if (!fZ) goto L_00813c2c;
L_00813c22:; BB(0x00813c22);
    /* 00813c22: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00813c27: mov esi, 0x20 */ r_esi = 0x20u;
L_00813c2c:; BB(0x00813c2c);
    /* 00813c2c: movzx ecx, word ptr [edx + 0x980984] */ r_ecx = (u32)R16((u32)(r_edx+0x980984u));
    /* 00813c33: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c35: jne 0x813c41 */ if (!fZ) goto L_00813c41;
L_00813c37:; BB(0x00813c37);
    /* 00813c37: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00813c3c: mov esi, 0x20 */ r_esi = 0x20u;
L_00813c41:; BB(0x00813c41);
    /* 00813c41: movzx edx, word ptr [edx + 0x980986] */ r_edx = (u32)R16((u32)(r_edx+0x980986u));
    /* 00813c48: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c4a: jne 0x813c51 */ if (!fZ) goto L_00813c51;
L_00813c4c:; BB(0x00813c4c);
    /* 00813c4c: mov eax, 0x20 */ r_eax = 0x20u;
L_00813c51:; BB(0x00813c51);
    /* 00813c51: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813c54: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00813c57: jb 0x813bfd */ if (fC) goto L_00813bfd;
L_00813c59:; BB(0x00813c59);
    /* 00813c59: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00813c5d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00813c61: mov word ptr [esp + ebx + 0x1e], ax */ W16((u32)(r_esp+r_ebx+0x1eu), (u16)r_eax);
    /* 00813c66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813c69: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00813c6d: mov word ptr [eax + ebx], dx */ W16((u32)(r_eax+r_ebx), (u16)r_edx);
    /* 00813c71: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00813c75: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00813c78: movzx edx, word ptr [edx + ebx] */ r_edx = (u32)R16((u32)(r_edx+r_ebx));
    /* 00813c7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c7e: je 0x813ca3 */ if (fZ) goto L_00813ca3;
L_00813c80:; BB(0x00813c80);
    /* 00813c80: cmp ecx, 0xfd */ {  u32 a = r_ecx; u32 b = 0xfdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813c86: jge 0x813ca3 */ if ((fS==fO)) goto L_00813ca3;
L_00813c88:; BB(0x00813c88);
    /* 00813c88: mov eax, edx */ r_eax = r_edx;
    /* 00813c8a: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c8d: je 0x813b55 */ if (fZ) goto L_00813b55;
L_00813c93:; BB(0x00813c93);
    /* 00813c93: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813c95: je 0x813c9c */ if (fZ) goto L_00813c9c;
L_00813c97:; BB(0x00813c97);
    /* 00813c97: mov eax, 0x20 */ r_eax = 0x20u;
L_00813c9c:; BB(0x00813c9c);
    /* 00813c9c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00813c9e: jmp 0x813b5f */ goto L_00813b5f;
L_00813ca3:; BB(0x00813ca3);
    /* 00813ca3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00813ca7: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00813cac: mov word ptr [esp + ebx + 0x1e], ax */ W16((u32)(r_esp+r_ebx+0x1eu), (u16)r_eax);
    /* 00813cb1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813cb3: mov word ptr [esp + ebx + 0x20], dx */ W16((u32)(r_esp+r_ebx+0x20u), (u16)r_edx);
    /* 00813cb8: mov word ptr [ecx + ebx], dx */ W16((u32)(r_ecx+r_ebx), (u16)r_edx);
    /* 00813cbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813cbe: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00813cc2: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00813cc4: movzx ebp, word ptr [ebx] */ r_ebp = (u32)R16((u32)(r_ebx));
    /* 00813cc7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813cc9: je 0x813de8 */ if (fZ) goto L_00813de8;
L_00813ccf:; BB(0x00813ccf);
    /* 00813ccf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00813cd2:; BB(0x00813cd2);
    /* 00813cd2: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 00813cd7: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00813cdc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813cde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813ce0: je 0x813dcd */ if (fZ) goto L_00813dcd;
L_00813ce6:; BB(0x00813ce6);
    /* 00813ce6: movzx ebp, word ptr [esp + 0x1c] */ r_ebp = (u32)R16((u32)(r_esp+0x1cu));
    /* 00813ceb: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00813cee: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
L_00813cf2:; BB(0x00813cf2);
    /* 00813cf2: mov edi, eax */ r_edi = r_eax;
    /* 00813cf4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00813cf6: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813cf8: jne 0x813d49 */ if (!fZ) goto L_00813d49;
L_00813cfa:; BB(0x00813cfa);
    /* 00813cfa: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00813cfe: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00813d00: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00813d04: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00813d08: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00813d0b: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_00813d0f:; BB(0x00813d0f);
    /* 00813d0f: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00813d13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813d15: jne 0x813d1b */ if (!fZ) goto L_00813d1b;
L_00813d17:; BB(0x00813d17);
    /* 00813d17: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_00813d1b:; BB(0x00813d1b);
    /* 00813d1b: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00813d1f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813d22: movzx edx, word ptr [esp + edi*2 + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+r_edi*2+0x1cu));
    /* 00813d27: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00813d2a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813d2d: lea ebp, [ebp + ecx] */ r_ebp = (u32)(r_ebp+r_ecx);
    /* 00813d31: movzx ebx, word ptr [ebp] */ r_ebx = (u32)R16((u32)(r_ebp));
    /* 00813d35: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813d37: je 0x813d0f */ if (fZ) goto L_00813d0f;
L_00813d39:; BB(0x00813d39);
    /* 00813d39: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00813d3d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00813d41: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00813d45: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_00813d49:; BB(0x00813d49);
    /* 00813d49: movzx ebp, word ptr [esp + eax*2 + 0x1e] */ r_ebp = (u32)R16((u32)(r_esp+r_eax*2+0x1eu));
    /* 00813d4e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813d51: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813d53: jne 0x813cf2 */ if (!fZ) goto L_00813cf2;
L_00813d55:; BB(0x00813d55);
    /* 00813d55: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00813d59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00813d5b: jl 0x813dc4 */ if ((fS!=fO)) goto L_00813dc4;
L_00813d5d:; BB(0x00813d5d);
    /* 00813d5d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00813d5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813d61: je 0x813dc4 */ if (fZ) goto L_00813dc4;
L_00813d63:; BB(0x00813d63);
    /* 00813d63: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00813d67: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00813d6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813d6d: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00813d70: lea ebp, [edx + edi] */ r_ebp = (u32)(r_edx+r_edi);
    /* 00813d73: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00813d77: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00813d7a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00813d7e: lea edx, [esi + ecx] */ r_edx = (u32)(r_esi+r_ecx);
    /* 00813d81: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_00813d85:; BB(0x00813d85);
    /* 00813d85: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813d88: je 0x813daf */ if (fZ) goto L_00813daf;
L_00813d8a:; BB(0x00813d8a);
    /* 00813d8a: movsx eax, byte ptr [esi + 0x980a80] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x980a80u));
    /* 00813d91: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00813d95: lea edi, [ecx + edi] */ r_edi = (u32)(r_ecx+r_edi);
    /* 00813d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813d9a: mov word ptr [esp + edi + 0x1c], ax */ W16((u32)(r_esp+r_edi+0x1cu), (u16)r_eax);
    /* 00813d9f: jle 0x813daf */ if ((fZ||fS!=fO)) goto L_00813daf;
L_00813da1:; BB(0x00813da1);
    /* 00813da1: movzx edi, word ptr [ebp + ecx - 4] */ r_edi = (u32)R16((u32)(r_ebp+r_ecx+0xfffffffcu));
    /* 00813da6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813da8: je 0x813daf */ if (fZ) goto L_00813daf;
L_00813daa:; BB(0x00813daa);
    /* 00813daa: mov word ptr [ebp + ecx - 2], ax */ W16((u32)(r_ebp+r_ecx+0xfffffffeu), (u16)r_eax);
L_00813daf:; BB(0x00813daf);
    /* 00813daf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00813db2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813db5: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00813db8: movzx eax, word ptr [ebx + ecx] */ r_eax = (u32)R16((u32)(r_ebx+r_ecx));
    /* 00813dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813dbe: jne 0x813d85 */ if (!fZ) goto L_00813d85;
L_00813dc0:; BB(0x00813dc0);
    /* 00813dc0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_00813dc4:; BB(0x00813dc4);
    /* 00813dc4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813dc7: jne 0x813cd2 */ if (!fZ) goto L_00813cd2;
L_00813dcd:; BB(0x00813dcd);
    /* 00813dcd: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00813dd0: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00813dd4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00813dd7: mov ebx, dword ptr [ebx + eax*4] */ r_ebx = R32((u32)(r_ebx+r_eax*4));
    /* 00813dda: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00813ddd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813ddf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00813de2: jne 0x813cd2 */ if (!fZ) goto L_00813cd2;
L_00813de8:; BB(0x00813de8);
    /* 00813de8: add esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00813dee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00813def: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00813df0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00813df1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00813df2: ret  */ FN_RET(0x00813b18); r_esp += 4; return;
L_00813df3:; BB(0x00813df3);
    /* 00813df3: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00813df7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00813df9: jmp 0x813c9c */ goto L_00813c9c;
L_00813dfe:; BB(0x00813dfe);
    /* 00813dfe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00813e00: jmp 0x813ca3 */ goto L_00813ca3;
}

void f_00813e08(void) /* sub_813E08 */
{
    FN_ENTER(0x00813e08);
    /* 00813e08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813e0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00813e0f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00813e13: lea ebx, [eax + eax + 2] */ r_ebx = (u32)(r_eax+r_eax+0x2u);
    /* 00813e17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e18: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x813e1du); f_008581c5();
    /* 00813e1d: mov esi, eax */ r_esi = r_eax;
    /* 00813e1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e20: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x813e25u); f_008581c5();
    /* 00813e25: mov ebp, eax */ r_ebp = r_eax;
    /* 00813e27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00813e2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x813e30u); f_0086b688();
    /* 00813e30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00813e33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813e34: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x813e39u); f_0086b688();
    /* 00813e39: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00813e3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e3e: push dword ptr [esp + 0x4c] */ { u32 v = R32((u32)(r_esp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00813e42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e43: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813e48u); f_00857dec();
    /* 00813e48: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813e4b: call 0x70ac58 */ r_esp -= 4; W32(r_esp, 0x813e50u); f_0070ac58();
    /* 00813e50: mov edi, eax */ r_edi = r_eax;
    /* 00813e52: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813e54: jle 0x813efe */ if ((fZ||fS!=fO)) goto L_00813efe;
L_00813e5a:; BB(0x00813e5a);
    /* 00813e5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e5b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x813e60u); f_00858009();
    /* 00813e60: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00813e64: mov ecx, eax */ r_ecx = r_eax;
    /* 00813e66: lea ebx, [ecx + ecx + 2] */ r_ebx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00813e6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x813e70u); f_008581c5();
    /* 00813e70: mov ebx, eax */ r_ebx = r_eax;
    /* 00813e72: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00813e76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813e79: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813e7eu); f_00857dec();
    /* 00813e7e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813e81: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00813e85: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00813e87: mov word ptr [ebx + eax*2], cx */ W16((u32)(r_ebx+r_eax*2), (u16)r_ecx);
    /* 00813e8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813e8d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813e8f: jle 0x813ec4 */ if ((fZ||fS!=fO)) goto L_00813ec4;
L_00813e91:; BB(0x00813e91);
    /* 00813e91: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00813e95: mov esi, eax */ r_esi = r_eax;
L_00813e97:; BB(0x00813e97);
    /* 00813e97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813e98: call 0x70ac60 */ r_esp -= 4; W32(r_esp, 0x813e9du); f_0070ac60();
    /* 00813e9d: mov ecx, eax */ r_ecx = r_eax;
    /* 00813e9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813ea2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813ea4: je 0x813eee */ if (fZ) goto L_00813eee;
L_00813ea6:; BB(0x00813ea6);
    /* 00813ea6: mov eax, ebx */ r_eax = r_ebx;
    /* 00813ea8: mov edx, ebp */ r_edx = r_ebp;
    /* 00813eaa: call 0x813b18 */ r_esp -= 4; W32(r_esp, 0x813eafu); f_00813b18();
    /* 00813eaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813eb1: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813eb6u); f_00857fed();
    /* 00813eb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813eb9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00813ebc: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813ebe: jl 0x813e97 */ if ((fS!=fO)) goto L_00813e97;
L_00813ec0:; BB(0x00813ec0);
    /* 00813ec0: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00813ec4:; BB(0x00813ec4);
    /* 00813ec4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813ec5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x813ecau); f_00857e98();
    /* 00813eca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00813ecb:; BB(0x00813ecb);
    /* 00813ecb: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00813ecf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00813ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813ed1: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00813ed5: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813edau); f_00857dec();
    /* 00813eda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813edb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x813ee0u); f_00857e98();
    /* 00813ee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813ee1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x813ee6u); f_00857e98();
    /* 00813ee6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00813ee9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00813eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00813eeb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00813eec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00813eed: ret  */ FN_RET(0x00813e08); r_esp += 4; return;
L_00813eee:; BB(0x00813eee);
    /* 00813eee: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00813ef2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813ef3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813ef4: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813ef9u); f_00857fed();
    /* 00813ef9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813efc: jmp 0x813ec4 */ goto L_00813ec4;
L_00813efe:; BB(0x00813efe);
    /* 00813efe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813eff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00813f00: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813f05u); f_00857fed();
    /* 00813f05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813f08: jmp 0x813ecb */ goto L_00813ecb;
}

void f_00813f0c(void) /* sub_813F0C */
{
    FN_ENTER(0x00813f0c);
    /* 00813f0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813f0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00813f0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813f0f: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00813f12: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00813f16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813f18: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00813f1c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00813f20: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00813f24: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00813f28: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00813f2c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00813f30: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00813f34: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00813f38: mov word ptr [esp + 0x2c], ax */ W16((u32)(r_esp+0x2cu), (u16)r_eax);
    /* 00813f3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00813f3f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00813f43: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00813f47: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00813f4b: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00813f4f: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00813f53: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00813f57: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00813f5b: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00813f5f: mov word ptr [esp + 0x50], ax */ W16((u32)(r_esp+0x50u), (u16)r_eax);
    /* 00813f64: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00813f68: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00813f6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813f6c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813f71u); f_00857dec();
    /* 00813f71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813f74: call 0x70ac58 */ r_esp -= 4; W32(r_esp, 0x813f79u); f_0070ac58();
    /* 00813f79: mov esi, eax */ r_esi = r_eax;
    /* 00813f7b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813f7d: jle 0x814014 */ if ((fZ||fS!=fO)) goto L_00814014;
L_00813f83:; BB(0x00813f83);
    /* 00813f83: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00813f87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813f88: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x813f8du); f_00858009();
    /* 00813f8d: mov edi, eax */ r_edi = r_eax;
    /* 00813f8f: lea edx, [edi + edi + 2] */ r_edx = (u32)(r_edi+r_edi+0x2u);
    /* 00813f93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813f94: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x813f99u); f_008581c5();
    /* 00813f99: mov ebx, eax */ r_ebx = r_eax;
    /* 00813f9b: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00813f9f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813fa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813fa1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813fa2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x813fa7u); f_00857dec();
    /* 00813fa7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813faa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00813fac: mov word ptr [ebx + edi*2], dx */ W16((u32)(r_ebx+r_edi*2), (u16)r_edx);
    /* 00813fb0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00813fb2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00813fb4: jle 0x813fe5 */ if ((fZ||fS!=fO)) goto L_00813fe5;
L_00813fb6:; BB(0x00813fb6);
    /* 00813fb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00813fb7: call 0x70ac60 */ r_esp -= 4; W32(r_esp, 0x813fbcu); f_0070ac60();
    /* 00813fbc: mov ecx, eax */ r_ecx = r_eax;
    /* 00813fbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813fc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00813fc3: je 0x814004 */ if (fZ) goto L_00814004;
L_00813fc5:; BB(0x00813fc5);
    /* 00813fc5: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00813fc9: mov eax, ebx */ r_eax = r_ebx;
    /* 00813fcb: call 0x813b18 */ r_esp -= 4; W32(r_esp, 0x813fd0u); f_00813b18();
    /* 00813fd0: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00813fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813fd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813fd6: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x813fdbu); f_00857fed();
    /* 00813fdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00813fde: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00813fe1: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00813fe3: jl 0x813fb6 */ if ((fS!=fO)) goto L_00813fb6;
L_00813fe5:; BB(0x00813fe5);
    /* 00813fe5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00813fe6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x813febu); f_00857e98();
    /* 00813feb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00813fec:; BB(0x00813fec);
    /* 00813fec: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00813ff0: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00813ff4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00813ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00813ff7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00813ff8: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x813ffdu); f_00858643();
    /* 00813ffd: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814000: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814001: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814002: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814003: ret  */ FN_RET(0x00813f0c); r_esp += 4; return;
L_00814004:; BB(0x00814004);
    /* 00814004: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00814008: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00814009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081400a: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x81400fu); f_00857fed();
    /* 0081400f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00814012: jmp 0x813fe5 */ goto L_00813fe5;
L_00814014:; BB(0x00814014);
    /* 00814014: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00814018: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0081401c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081401d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0081401e: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x814023u); f_00857fed();
    /* 00814023: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00814026: jmp 0x813fec */ goto L_00813fec;
}

