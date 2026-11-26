#include "protos.h"

void f_006640c4(void) /* sub_6640C4 */
{
    FN_ENTER(0x006640c4);
    /* 006640c4: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 006640c9: cmp eax, dword ptr [0xa8faf8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8faf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006640cf: je 0x6640f6 */ if (fZ) goto L_006640f6;
L_006640d1:; BB(0x006640d1);
    /* 006640d1: mov ecx, dword ptr [0xa8faec] */ r_ecx = R32((u32)(0xa8faecu));
    /* 006640d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006640d9: je 0x6640ef */ if (fZ) goto L_006640ef;
L_006640db:; BB(0x006640db);
    /* 006640db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006640dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006640df: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006640e1: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6640e4u); call_ind(t); }
    /* 006640e4: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 006640e9: mov ecx, dword ptr [0xa8faec] */ r_ecx = R32((u32)(0xa8faecu));
L_006640ef:; BB(0x006640ef);
    /* 006640ef: mov dword ptr [0xa8faf8], eax */ W32((u32)(0xa8faf8u), r_eax);
    /* 006640f4: jmp 0x6640fc */ goto L_006640fc;
L_006640f6:; BB(0x006640f6);
    /* 006640f6: mov ecx, dword ptr [0xa8faec] */ r_ecx = R32((u32)(0xa8faecu));
L_006640fc:; BB(0x006640fc);
    /* 006640fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006640fe: je 0x664118 */ if (fZ) goto L_00664118;
L_00664100:; BB(0x00664100);
    /* 00664100: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00664102: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x664107u); f_00835f78();
    /* 00664107: push dword ptr [0xa8fb14] */ { u32 v = R32((u32)(0xa8fb14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066410d: mov ecx, dword ptr [0xa8faec] */ r_ecx = R32((u32)(0xa8faecu));
    /* 00664113: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664115: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x664118u); call_ind(t); }
L_00664118:; BB(0x00664118);
    /* 00664118: push 0x6644c4 */ { u32 v = 0x6644c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066411d: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x664122u); f_0083a308();
    /* 00664122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664123: ret  */ FN_RET(0x006640c4); r_esp += 4; return;
}

void f_00664124(void) /* sub_664124 */
{
    FN_ENTER(0x00664124);
    /* 00664124: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 0066412a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066412c: je 0x664143 */ if (fZ) goto L_00664143;
L_0066412e:; BB(0x0066412e);
    /* 0066412e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664131: jne 0x664139 */ if (!fZ) goto L_00664139;
L_00664133:; BB(0x00664133);
    /* 00664133: call 0x664168 */ r_esp -= 4; W32(r_esp, 0x664138u); f_00664168();
    /* 00664138: ret  */ FN_RET(0x00664124); r_esp += 4; return;
L_00664139:; BB(0x00664139);
    /* 00664139: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066413c: jne 0x664143 */ if (!fZ) goto L_00664143;
L_0066413e:; BB(0x0066413e);
    /* 0066413e: call 0x664144 */ r_esp -= 4; W32(r_esp, 0x664143u); f_00664144();
L_00664143:; BB(0x00664143);
    /* 00664143: ret  */ FN_RET(0x00664124); r_esp += 4; return;
}

void f_00664144(void) /* sub_664144 */
{
    FN_ENTER(0x00664144);
    /* 00664144: mov ecx, dword ptr [0xa8faf0] */ r_ecx = R32((u32)(0xa8faf0u));
    /* 0066414a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066414c: je 0x664153 */ if (fZ) goto L_00664153;
L_0066414e:; BB(0x0066414e);
    /* 0066414e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664150: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x664153u); call_ind(t); }
L_00664153:; BB(0x00664153);
    /* 00664153: mov ecx, dword ptr [0xa8faf4] */ r_ecx = R32((u32)(0xa8faf4u));
    /* 00664159: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066415b: je 0x664162 */ if (fZ) goto L_00664162;
L_0066415d:; BB(0x0066415d);
    /* 0066415d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066415f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x664162u); call_ind(t); }
L_00664162:; BB(0x00664162);
    /* 00664162: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x664167u); f_0083603c();
    /* 00664167: ret  */ FN_RET(0x00664144); r_esp += 4; return;
}

void f_00664168(void) /* sub_664168 */
{
    FN_ENTER(0x00664168);
    /* 00664168: mov ecx, dword ptr [0xa8faec] */ r_ecx = R32((u32)(0xa8faecu));
    /* 0066416e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664170: je 0x66417c */ if (fZ) goto L_0066417c;
L_00664172:; BB(0x00664172);
    /* 00664172: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664174: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x664177u); call_ind(t); }
    /* 00664177: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x66417cu); f_0083603c();
L_0066417c:; BB(0x0066417c);
    /* 0066417c: ret  */ FN_RET(0x00664168); r_esp += 4; return;
}

void f_00664180(void) /* sub_664180 */
{
    FN_ENTER(0x00664180);
    /* 00664180: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 00664186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664188: je 0x66418f */ if (fZ) goto L_0066418f;
L_0066418a:; BB(0x0066418a);
    /* 0066418a: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x66418fu); f_0061347c();
L_0066418f:; BB(0x0066418f);
    /* 0066418f: ret  */ FN_RET(0x00664180); r_esp += 4; return;
}

void f_00664190(void) /* sub_664190 */
{
    FN_ENTER(0x00664190);
    /* 00664190: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664191: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664192: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664195: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00664197: fild dword ptr [ebx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x84u)));
    /* 0066419d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066419e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006641a1: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6641a6u); f_0082e900();
    /* 006641a6: fnstcw word ptr [esp + 4] */ W16((u32)(r_esp+0x4u), fcw);
    /* 006641aa: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006641af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006641b4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006641b8: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006641bc: fistp dword ptr [esp + 0x14] */ W32((u32)(r_esp+0x14u), (u32)fx_int32(ST(0))); FPOP();
    /* 006641c0: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 006641c4: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006641c8: mov edx, 3 */ r_edx = 0x3u;
    /* 006641cd: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006641d0: jle 0x6641d4 */ if ((fZ||fS!=fO)) goto L_006641d4;
L_006641d2:; BB(0x006641d2);
    /* 006641d2: mov esi, edx */ r_esi = r_edx;
L_006641d4:; BB(0x006641d4);
    /* 006641d4: mov dword ptr [ebx + 0xc8], esi */ W32((u32)(r_ebx+0xc8u), r_esi);
    /* 006641da: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006641dd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006641df: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006641e1: mov eax, dword ptr [eax*8 + 0x9c8a80] */ r_eax = R32((u32)(r_eax*8+0x9c8a80u));
    /* 006641e8: call 0x6642fc */ r_esp -= 4; W32(r_esp, 0x6641edu); f_006642fc();
    /* 006641ed: mov ecx, dword ptr [ebx + 0xc8] */ r_ecx = R32((u32)(r_ebx+0xc8u));
    /* 006641f3: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 006641f9: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006641fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006641fe: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00664200: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664202: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664204: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664206: mov eax, dword ptr [edx + 0x9c8a84] */ r_eax = R32((u32)(r_edx+0x9c8a84u));
    /* 0066420c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066420f: je 0x66423d */ if (fZ) goto L_0066423d;
L_00664211:; BB(0x00664211);
    /* 00664211: call 0x664314 */ r_esp -= 4; W32(r_esp, 0x664216u); f_00664314();
    /* 00664216: mov ecx, dword ptr [ebx + 0xc8] */ r_ecx = R32((u32)(r_ebx+0xc8u));
    /* 0066421c: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 00664222: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00664225: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664227: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00664229: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066422b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066422d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066422f: mov esi, dword ptr [edx + 0x9c8a88] */ r_esi = R32((u32)(r_edx+0x9c8a88u));
    /* 00664235: mov dword ptr [ebx + 0xb8], esi */ W32((u32)(r_ebx+0xb8u), r_esi);
    /* 0066423b: jmp 0x664253 */ goto L_00664253;
L_0066423d:; BB(0x0066423d);
    /* 0066423d: mov dword ptr [ebx + 0xbc], 0 */ W32((u32)(r_ebx+0xbcu), 0x0u);
    /* 00664247: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664249: mov dword ptr [ebx + 0xb8], 0 */ W32((u32)(r_ebx+0xb8u), 0x0u);
L_00664253:; BB(0x00664253);
    /* 00664253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664255: je 0x664273 */ if (fZ) goto L_00664273;
L_00664257:; BB(0x00664257);
    /* 00664257: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0066425a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0066425d: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00664260: fadd dword ptr [esi*4 + 0x9390c8] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x9390c8u));
    /* 00664267: fadd dword ptr [0x9390f8] */ ST(0) = ST(0) + R_F32((u32)(0x9390f8u));
    /* 0066426d: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
L_00664273:; BB(0x00664273);
    /* 00664273: mov eax, dword ptr [edx + 0x9c8a90] */ r_eax = R32((u32)(r_edx+0x9c8a90u));
    /* 00664279: mov edx, dword ptr [edx + 0x9c8a94] */ r_edx = R32((u32)(r_edx+0x9c8a94u));
    /* 0066427f: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 00664285: mov dword ptr [ebx + 0xc4], edx */ W32((u32)(r_ebx+0xc4u), r_edx);
    /* 0066428b: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066428e: je 0x6642a4 */ if (fZ) goto L_006642a4;
L_00664290:; BB(0x00664290);
    /* 00664290: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664292: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00664298: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0066429e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006642a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006642a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006642a3: ret  */ FN_RET(0x00664190); r_esp += 4; return;
L_006642a4:; BB(0x006642a4);
    /* 006642a4: mov ecx, dword ptr [ebx + 0x88] */ r_ecx = R32((u32)(r_ebx+0x88u));
    /* 006642aa: mov eax, ecx */ r_eax = r_ecx;
    /* 006642ac: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006642b1: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006642b4: mov edx, 0xff */ r_edx = 0xffu;
    /* 006642b9: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006642be: mov esi, 0 */ r_esi = 0x0u;
    /* 006642c3: jl 0x6642c7 */ if ((fS!=fO)) goto L_006642c7;
L_006642c5:; BB(0x006642c5);
    /* 006642c5: mov eax, edx */ r_eax = r_edx;
L_006642c7:; BB(0x006642c7);
    /* 006642c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006642c9: jg 0x6642cd */ if ((!fZ&&fS==fO)) goto L_006642cd;
L_006642cb:; BB(0x006642cb);
    /* 006642cb: mov eax, esi */ r_eax = r_esi;
L_006642cd:; BB(0x006642cd);
    /* 006642cd: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 006642d3: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 006642d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006642d8: jl 0x6642f3 */ if ((fS!=fO)) goto L_006642f3;
L_006642da:; BB(0x006642da);
    /* 006642da: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006642dc: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006642e1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006642e3: jl 0x6642e7 */ if ((fS!=fO)) goto L_006642e7;
L_006642e5:; BB(0x006642e5);
    /* 006642e5: mov eax, edx */ r_eax = r_edx;
L_006642e7:; BB(0x006642e7);
    /* 006642e7: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 006642ed: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006642f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006642f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006642f2: ret  */ FN_RET(0x00664190); r_esp += 4; return;
L_006642f3:; BB(0x006642f3);
    /* 006642f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006642f5: jmp 0x6642e7 */ goto L_006642e7;
}

void f_006642fc(void) /* sub_6642FC */
{
    FN_ENTER(0x006642fc);
    /* 006642fc: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664302: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664304: je 0x66430d */ if (fZ) goto L_0066430d;
L_00664306:; BB(0x00664306);
    /* 00664306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664307: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66430cu); f_005b8610();
    /* 0066430c: ret  */ FN_RET(0x006642fc); r_esp += 4; return;
L_0066430d:; BB(0x0066430d);
    /* 0066430d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066430f: ret  */ FN_RET(0x006642fc); r_esp += 4; return;
}

void f_00664314(void) /* sub_664314 */
{
    FN_ENTER(0x00664314);
    /* 00664314: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 0066431a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066431c: je 0x664325 */ if (fZ) goto L_00664325;
L_0066431e:; BB(0x0066431e);
    /* 0066431e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066431f: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x664324u); f_005b8638();
    /* 00664324: ret  */ FN_RET(0x00664314); r_esp += 4; return;
L_00664325:; BB(0x00664325);
    /* 00664325: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664327: ret  */ FN_RET(0x00664314); r_esp += 4; return;
}

void f_00664328(void)
{
    FN_ENTER(0x00664328);
    /* 00664328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664329: mov ebp, esp */ r_ebp = r_esp;
    /* 0066432b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066432d: push 0x8e8408 */ { u32 v = 0x8e8408u; r_esp -= 4; W32(r_esp, v); }
    /* 00664332: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00664338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664339: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00664340: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664343: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00664346: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00664349: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066434c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066434f: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00664354: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066435b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x664360u); f_005caba4();
    /* 00664360: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664361: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00664364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664366: je 0x66439f */ if (fZ) goto L_0066439f;
L_00664368:; BB(0x00664368);
    /* 00664368: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066436f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664376: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664379: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066437f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664382: call 0x6643a4 */ r_esp -= 4; W32(r_esp, 0x664387u); f_006643a4();
    /* 00664387: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066438a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00664391:; BB(0x00664391);
    /* 00664391: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664394: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066439b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066439d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066439e: ret  */ FN_RET(0x00664328); r_esp += 4; return;
L_0066439f:; BB(0x0066439f);
    /* 0066439f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006643a1: jmp 0x664391 */ goto L_00664391;
}

void f_006643a4(void) /* sub_6643A4 */
{
    FN_ENTER(0x006643a4);
    /* 006643a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006643a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006643a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006643a9: push 0x8e8424 */ { u32 v = 0x8e8424u; r_esp -= 4; W32(r_esp, v); }
    /* 006643ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006643b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006643b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006643bc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006643bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006643c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006643c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006643c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006643cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006643ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006643d1: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006643d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006643d7: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x6643dcu); f_006132e4();
    /* 006643dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006643e3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006643e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006643e9: mov dword ptr [ecx], 0xb34500 */ W32((u32)(r_ecx), 0xb34500u);
    /* 006643ef: mov eax, dword ptr [0x9c8fbc] */ r_eax = R32((u32)(0x9c8fbcu));
    /* 006643f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006643f5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006643f8: call dword ptr [0xb34514] */ { u32 t = R32((u32)(0xb34514u)); r_esp -= 4; W32(r_esp, 0x6643feu); call_ind(t); }
    /* 006643fe: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664401: call 0x664190 */ r_esp -= 4; W32(r_esp, 0x664406u); f_00664190();
    /* 00664406: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664409: fild dword ptr [eax + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x84u)));
    /* 0066440f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00664410: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00664413: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x664418u); f_0082e900();
    /* 00664418: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066441b: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0066441e: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00664422: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00664427: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066442a: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0066442d: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00664430: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00664433: mov eax, 3 */ r_eax = 0x3u;
    /* 00664438: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066443b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066443d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664440: jle 0x664444 */ if ((fZ||fS!=fO)) goto L_00664444;
L_00664442:; BB(0x00664442);
    /* 00664442: mov edx, eax */ r_edx = r_eax;
L_00664444:; BB(0x00664444);
    /* 00664444: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 0066444a: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0066444d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066444f: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00664451: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00664453: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00664455: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00664457: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00664459: lea esi, [ebx + ebx + 0x9c8ae0] */ r_esi = (u32)(r_ebx+r_ebx+0x9c8ae0u);
    /* 00664460: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664461: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x664466u); f_007b9a88();
    /* 00664466: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664469: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x66446eu); f_007b4f54();
    /* 0066446e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664471: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 00664477: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0066447a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066447c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066447e: mov eax, dword ptr [edx*8 + 0x9c8a8c] */ r_eax = R32((u32)(r_edx*8+0x9c8a8cu));
    /* 00664485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664487: jl 0x6644a1 */ if ((fS!=fO)) goto L_006644a1;
L_00664489:; BB(0x00664489);
    /* 00664489: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066448a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066448d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066448e: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x664493u); f_00509590();
    /* 00664493: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00664496: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664499: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 0066449f: jmp 0x6644ab */ goto L_006644ab;
L_006644a1:; BB(0x006644a1);
    /* 006644a1: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
L_006644ab:; BB(0x006644ab);
    /* 006644ab: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006644ae: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006644b1: mov eax, ecx */ r_eax = r_ecx;
    /* 006644b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006644b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006644bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006644bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006644c0: ret 8 */ FN_RET(0x006643a4); r_esp += 12; return;
}

void f_006644c4(void)
{
    FN_ENTER(0x006644c4);
    /* 006644c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006644c8: cmp eax, dword ptr [0xa8fb08] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fb08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006644ce: je 0x6644e6 */ if (fZ) goto L_006644e6;
L_006644d0:; BB(0x006644d0);
    /* 006644d0: cmp eax, dword ptr [0xa8fb0c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fb0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006644d6: je 0x6644e6 */ if (fZ) goto L_006644e6;
L_006644d8:; BB(0x006644d8);
    /* 006644d8: cmp eax, dword ptr [0xa8fb10] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fb10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006644de: je 0x6644e6 */ if (fZ) goto L_006644e6;
L_006644e0:; BB(0x006644e0);
    /* 006644e0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6644e5u); f_0082dab0();
    /* 006644e5: ret  */ FN_RET(0x006644c4); r_esp += 4; return;
L_006644e6:; BB(0x006644e6);
    /* 006644e6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6644ebu); f_0082dbac();
    /* 006644eb: ret  */ FN_RET(0x006644c4); r_esp += 4; return;
}

void f_006644ec(void)
{
    FN_ENTER(0x006644ec);
    /* 006644ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006644ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006644ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006644f1: push 0x8e844c */ { u32 v = 0x8e844cu; r_esp -= 4; W32(r_esp, v); }
    /* 006644f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006644fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006644fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00664504: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066450a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066450d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00664510: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00664513: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664518: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066451f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x664524u); f_005caba4();
    /* 00664524: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664525: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00664528: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066452a: je 0x66455d */ if (fZ) goto L_0066455d;
L_0066452c:; BB(0x0066452c);
    /* 0066452c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00664533: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066453a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066453d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664540: call 0x664564 */ r_esp -= 4; W32(r_esp, 0x664545u); f_00664564();
    /* 00664545: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664548: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066454f:; BB(0x0066454f);
    /* 0066454f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664552: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00664559: mov esp, ebp */ r_esp = r_ebp;
    /* 0066455b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066455c: ret  */ FN_RET(0x006644ec); r_esp += 4; return;
L_0066455d:; BB(0x0066455d);
    /* 0066455d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066455f: jmp 0x66454f */ goto L_0066454f;
}

void f_00664564(void) /* sub_664564 */
{
    FN_ENTER(0x00664564);
    /* 00664564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664565: mov ebp, esp */ r_ebp = r_esp;
    /* 00664567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00664569: push 0x8e8468 */ { u32 v = 0x8e8468u; r_esp -= 4; W32(r_esp, v); }
    /* 0066456e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00664574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066457c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066457f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00664582: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00664585: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00664588: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066458b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066458e: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00664591: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00664594: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x664599u); f_006347a4();
    /* 00664599: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006645a0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006645a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006645a6: mov dword ptr [ecx], 0xb344a0 */ W32((u32)(r_ecx), 0xb344a0u);
    /* 006645ac: mov eax, dword ptr [0x9c8fc0] */ r_eax = R32((u32)(0x9c8fc0u));
    /* 006645b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006645b2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006645b5: call dword ptr [0xb344b4] */ { u32 t = R32((u32)(0xb344b4u)); r_esp -= 4; W32(r_esp, 0x6645bbu); call_ind(t); }
    /* 006645bb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006645be: fild dword ptr [eax + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x88u)));
    /* 006645c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006645c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006645c8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6645cdu); f_0082e900();
    /* 006645cd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006645d0: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 006645d3: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 006645d7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006645dc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006645df: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 006645e2: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006645e5: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 006645e8: mov eax, 2 */ r_eax = 0x2u;
    /* 006645ed: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006645f0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006645f3: jl 0x6645f7 */ if ((fS!=fO)) goto L_006645f7;
L_006645f5:; BB(0x006645f5);
    /* 006645f5: mov edx, eax */ r_edx = r_eax;
L_006645f7:; BB(0x006645f7);
    /* 006645f7: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 006645fd: call 0x66466c */ r_esp -= 4; W32(r_esp, 0x664602u); f_0066466c();
    /* 00664602: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664605: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0066460b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066460d: jl 0x664616 */ if ((fS!=fO)) goto L_00664616;
L_0066460f:; BB(0x0066460f);
    /* 0066460f: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664614: jl 0x664622 */ if ((fS!=fO)) goto L_00664622;
L_00664616:; BB(0x00664616);
    /* 00664616: mov dword ptr [ecx + 0xb8], 0xffffffff */ W32((u32)(r_ecx+0xb8u), 0xffffffffu);
    /* 00664620: jmp 0x664628 */ goto L_00664628;
L_00664622:; BB(0x00664622);
    /* 00664622: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
L_00664628:; BB(0x00664628);
    /* 00664628: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066462a: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 00664630: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00664633: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664635: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00664637: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664639: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066463b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066463d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066463f: lea ebx, [edx + edx + 0x9c8f00] */ r_ebx = (u32)(r_edx+r_edx+0x9c8f00u);
    /* 00664646: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664647: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x66464cu); f_007b9a88();
    /* 0066464c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066464f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x664654u); f_007b4f54();
    /* 00664654: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00664657: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066465a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066465d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00664664: mov esp, ebp */ r_esp = r_ebp;
    /* 00664666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664667: ret 4 */ FN_RET(0x00664564); r_esp += 8; return;
}

void f_0066466c(void) /* sub_66466C */
{
    FN_ENTER(0x0066466c);
    /* 0066466c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066466d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066466e: mov edi, ecx */ r_edi = r_ecx;
    /* 00664670: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 00664676: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 00664679: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066467b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066467d: mov eax, dword ptr [eax*8 + 0x9c8ba0] */ r_eax = R32((u32)(r_eax*8+0x9c8ba0u));
    /* 00664684: call 0x6642fc */ r_esp -= 4; W32(r_esp, 0x664689u); f_006642fc();
    /* 00664689: mov dword ptr [edi + 0xb0], 0x42200000 */ W32((u32)(r_edi+0xb0u), 0x42200000u);
    /* 00664693: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00664696: mov eax, dword ptr [0xa8fb28] */ r_eax = R32((u32)(0xa8fb28u));
    /* 0066469b: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0066469e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066469f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006646a0: ret  */ FN_RET(0x0066466c); r_esp += 4; return;
}

void f_006646a4(void) /* sub_6646A4 */
{
    FN_ENTER(0x006646a4);
    /* 006646a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006646a5: mov esi, ecx */ r_esi = r_ecx;
    /* 006646a7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006646a9: mov ecx, esi */ r_ecx = r_esi;
    /* 006646ab: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6646aeu); call_ind(t); }
    /* 006646ae: mov ecx, esi */ r_ecx = r_esi;
    /* 006646b0: call 0x6333a4 */ r_esp -= 4; W32(r_esp, 0x6646b5u); f_006333a4();
    /* 006646b5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006646b7: mov ecx, esi */ r_ecx = r_esi;
    /* 006646b9: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x6646bcu); call_ind(t); }
    /* 006646bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006646bd: ret  */ FN_RET(0x006646a4); r_esp += 4; return;
}

void f_006646c0(void) /* sub_6646C0 */
{
    FN_ENTER(0x006646c0);
    /* 006646c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006646c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006646c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006646c5: push 0x8e8490 */ { u32 v = 0x8e8490u; r_esp -= 4; W32(r_esp, v); }
    /* 006646ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006646d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006646d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006646d8: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006646db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006646de: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006646e1: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006646e4: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006646e7: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006646ea: mov ebx, dword ptr [ecx + 0x3c] */ r_ebx = R32((u32)(r_ecx+0x3cu));
    /* 006646ed: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 006646f0: mov dword ptr [ebp - 0x80], 0x3eb33333 */ W32((u32)(r_ebp+0xffffff80u), 0x3eb33333u);
    /* 006646f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006646fa: mov dword ptr [ebp - 0x7c], 0x3d8f5c29 */ W32((u32)(r_ebp+0xffffff84u), 0x3d8f5c29u);
    /* 00664701: mov dword ptr [ebp - 0x78], 0x3f0a3d71 */ W32((u32)(r_ebp+0xffffff88u), 0x3f0a3d71u);
    /* 00664708: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0066470b: mov eax, 0x200 */ r_eax = 0x200u;
    /* 00664710: mov dword ptr [ebp - 0x68], 0x40200000 */ W32((u32)(r_ebp+0xffffff98u), 0x40200000u);
    /* 00664717: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0066471a: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0066471d: mov dword ptr [ebp - 0x64], 0x40800000 */ W32((u32)(r_ebp+0xffffff9cu), 0x40800000u);
    /* 00664724: mov dword ptr [ebp - 0x60], 0x40200000 */ W32((u32)(r_ebp+0xffffffa0u), 0x40200000u);
    /* 0066472b: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0066472e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00664731: mov eax, dword ptr [0xa8fb28] */ r_eax = R32((u32)(0xa8fb28u));
    /* 00664736: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00664739: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066473c: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 00664742: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00664745: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664747: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664749: mov dword ptr [ebp - 0x58], 0x150 */ W32((u32)(r_ebp+0xffffffa8u), 0x150u);
    /* 00664750: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664752: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664754: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0066475b: lea eax, [eax + eax + 0x9c8bb0] */ r_eax = (u32)(r_eax+r_eax+0x9c8bb0u);
    /* 00664762: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00664765: mov dword ptr [ebp - 0x4c], 0x3c */ W32((u32)(r_ebp+0xffffffb4u), 0x3cu);
    /* 0066476c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066476e: mov dword ptr [ebp - 0x44], 0x3f800000 */ W32((u32)(r_ebp+0xffffffbcu), 0x3f800000u);
    /* 00664775: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00664778: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0066477f: mov dword ptr [ebp - 0x38], 0x11 */ W32((u32)(r_ebp+0xffffffc8u), 0x11u);
L_00664786:; BB(0x00664786);
    /* 00664786: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00664789: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066478b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066478d: jl 0x66485b */ if ((fS!=fO)) goto L_0066485b;
L_00664793:; BB(0x00664793);
    /* 00664793: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664799: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066479b: je 0x6648aa */ if (fZ) goto L_006648aa;
L_006647a1:; BB(0x006647a1);
    /* 006647a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006647a2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6647a7u); f_005b8610();
L_006647a7:; BB(0x006647a7);
    /* 006647a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006647aa: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006647ad: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 006647b2: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006647b5: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006647b8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006647bb: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 006647be: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 006647c1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006647c8: mov dword ptr [ebp - 0x6c], ebx */ W32((u32)(r_ebp+0xffffff94u), r_ebx);
    /* 006647cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6647d0u); f_005caba4();
    /* 006647d0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006647d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006647d6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006647d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006647db: je 0x664854 */ if (fZ) goto L_00664854;
L_006647dd:; BB(0x006647dd);
    /* 006647dd: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006647e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006647eb: mov ecx, eax */ r_ecx = r_eax;
    /* 006647ed: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 006647f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006647f1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006647f7: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6647fcu); f_006441f4();
    /* 006647fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006647ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664802: mov dword ptr [edx], 0xb34530 */ W32((u32)(r_edx), 0xb34530u);
    /* 00664808: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066480a: mov eax, dword ptr [0x9c8fc4] */ r_eax = R32((u32)(0x9c8fc4u));
    /* 0066480f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00664812: je 0x664888 */ if (fZ) goto L_00664888;
L_00664814:; BB(0x00664814);
    /* 00664814: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00664816: mov edi, edx */ r_edi = r_edx;
    /* 00664818: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0066481b: mov dword ptr [edi + 0x234], eax */ W32((u32)(r_edi+0x234u), r_eax);
    /* 00664821: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00664824: mov dword ptr [edi + 0x238], edx */ W32((u32)(r_edi+0x238u), r_edx);
    /* 0066482a: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0066482d: mov dword ptr [edi + 0x23c], ecx */ W32((u32)(r_edi+0x23cu), r_ecx);
    /* 00664833: mov esi, dword ptr [ebx + 0x60] */ r_esi = R32((u32)(r_ebx+0x60u));
    /* 00664836: mov dword ptr [edi + 0x240], esi */ W32((u32)(r_edi+0x240u), r_esi);
L_0066483c:; BB(0x0066483c);
    /* 0066483c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066483f: mov dword ptr [eax + 0x248], 0x14 */ W32((u32)(r_eax+0x248u), 0x14u);
    /* 00664849: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066484b: mov dword ptr [eax + 0x244], edx */ W32((u32)(r_eax+0x244u), r_edx);
    /* 00664851: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_00664854:; BB(0x00664854);
    /* 00664854: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0066485b:; BB(0x0066485b);
    /* 0066485b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066485e: add dword ptr [ebp - 0x14], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00664862: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664865: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00664868: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066486b: jl 0x664786 */ if ((fS!=fO)) goto L_00664786;
L_00664871:; BB(0x00664871);
    /* 00664871: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00664874: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664877: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066487a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066487d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00664884: mov esp, ebp */ r_esp = r_ebp;
    /* 00664886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664887: ret  */ FN_RET(0x006646c0); r_esp += 4; return;
L_00664888:; BB(0x00664888);
    /* 00664888: mov eax, edx */ r_eax = r_edx;
    /* 0066488a: mov dword ptr [eax + 0x238], 0 */ W32((u32)(r_eax+0x238u), 0x0u);
    /* 00664894: mov dword ptr [eax + 0x234], 0 */ W32((u32)(r_eax+0x234u), 0x0u);
    /* 0066489e: mov dword ptr [eax + 0x240], 0 */ W32((u32)(r_eax+0x240u), 0x0u);
    /* 006648a8: jmp 0x66483c */ goto L_0066483c;
L_006648aa:; BB(0x006648aa);
    /* 006648aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006648ac: jmp 0x6647a7 */ goto L_006647a7;
}

void f_006648b4(void) /* sub_6648B4 */
{
    FN_ENTER(0x006648b4);
    /* 006648b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006648b5: mov esi, ecx */ r_esi = r_ecx;
    /* 006648b7: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 006648bd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006648c0: je 0x664911 */ if (fZ) goto L_00664911;
L_006648c2:; BB(0x006648c2);
    /* 006648c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006648c4: jne 0x66490f */ if (!fZ) goto L_0066490f;
L_006648c6:; BB(0x006648c6);
    /* 006648c6: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 006648cb: cmp eax, dword ptr [0xa8fae8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fae8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006648d1: je 0x6648f0 */ if (fZ) goto L_006648f0;
L_006648d3:; BB(0x006648d3);
    /* 006648d3: mov dword ptr [0xa8fae8], eax */ W32((u32)(0xa8fae8u), r_eax);
    /* 006648d8: mov esi, 0xa8fae4 */ r_esi = 0xa8fae4u;
    /* 006648dd: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006648df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006648e1: je 0x6648f7 */ if (fZ) goto L_006648f7;
L_006648e3:; BB(0x006648e3);
    /* 006648e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006648e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006648e7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006648e9: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6648ecu); call_ind(t); }
    /* 006648ec: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006648ee: jmp 0x6648f7 */ goto L_006648f7;
L_006648f0:; BB(0x006648f0);
    /* 006648f0: mov esi, 0xa8fae4 */ r_esi = 0xa8fae4u;
    /* 006648f5: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
L_006648f7:; BB(0x006648f7);
    /* 006648f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006648f9: je 0x66490f */ if (fZ) goto L_0066490f;
L_006648fb:; BB(0x006648fb);
    /* 006648fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006648fd: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x664902u); f_00835f78();
    /* 00664902: push dword ptr [0xa8fb1c] */ { u32 v = R32((u32)(0xa8fb1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00664908: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0066490a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066490c: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x66490fu); call_ind(t); }
L_0066490f:; BB(0x0066490f);
    /* 0066490f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00664910: ret  */ FN_RET(0x006648b4); r_esp += 4; return;
L_00664911:; BB(0x00664911);
    /* 00664911: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00664916: cmp eax, dword ptr [0xa8fae8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fae8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066491c: je 0x66493e */ if (fZ) goto L_0066493e;
L_0066491e:; BB(0x0066491e);
    /* 0066491e: mov ecx, dword ptr [0xa8fae0] */ r_ecx = R32((u32)(0xa8fae0u));
    /* 00664924: mov dword ptr [0xa8fae8], eax */ W32((u32)(0xa8fae8u), r_eax);
    /* 00664929: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066492b: je 0x664944 */ if (fZ) goto L_00664944;
L_0066492d:; BB(0x0066492d);
    /* 0066492d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066492f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664931: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664933: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x664936u); call_ind(t); }
    /* 00664936: mov ecx, dword ptr [0xa8fae0] */ r_ecx = R32((u32)(0xa8fae0u));
    /* 0066493c: jmp 0x664944 */ goto L_00664944;
L_0066493e:; BB(0x0066493e);
    /* 0066493e: mov ecx, dword ptr [0xa8fae0] */ r_ecx = R32((u32)(0xa8fae0u));
L_00664944:; BB(0x00664944);
    /* 00664944: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664946: je 0x66496b */ if (fZ) goto L_0066496b;
L_00664948:; BB(0x00664948);
    /* 00664948: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066494a: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x66494fu); f_00835f78();
    /* 0066494f: push dword ptr [0xa8fb18] */ { u32 v = R32((u32)(0xa8fb18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664955: mov ecx, dword ptr [0xa8fae0] */ r_ecx = R32((u32)(0xa8fae0u));
    /* 0066495b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066495d: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x664960u); call_ind(t); }
    /* 00664960: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 00664966: jmp 0x6648c2 */ goto L_006648c2;
L_0066496b:; BB(0x0066496b);
    /* 0066496b: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 00664971: jmp 0x6648c2 */ goto L_006648c2;
}

void f_00664978(void) /* sub_664978 */
{
    FN_ENTER(0x00664978);
    /* 00664978: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664979: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066497b: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 00664981: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664984: je 0x6649a0 */ if (fZ) goto L_006649a0;
L_00664986:; BB(0x00664986);
    /* 00664986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664988: jne 0x66499e */ if (!fZ) goto L_0066499e;
L_0066498a:; BB(0x0066498a);
    /* 0066498a: mov ecx, dword ptr [0xa8fae4] */ r_ecx = R32((u32)(0xa8fae4u));
    /* 00664990: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664992: je 0x66499e */ if (fZ) goto L_0066499e;
L_00664994:; BB(0x00664994);
    /* 00664994: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664996: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x664999u); call_ind(t); }
    /* 00664999: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x66499eu); f_0083603c();
L_0066499e:; BB(0x0066499e);
    /* 0066499e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066499f: ret  */ FN_RET(0x00664978); r_esp += 4; return;
L_006649a0:; BB(0x006649a0);
    /* 006649a0: mov ecx, dword ptr [0xa8fae0] */ r_ecx = R32((u32)(0xa8fae0u));
    /* 006649a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006649a8: je 0x664986 */ if (fZ) goto L_00664986;
L_006649aa:; BB(0x006649aa);
    /* 006649aa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006649ac: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6649afu); call_ind(t); }
    /* 006649af: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x6649b4u); f_0083603c();
    /* 006649b4: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 006649ba: jmp 0x664986 */ goto L_00664986;
}

void f_006649bc(void) /* sub_6649BC */
{
    FN_ENTER(0x006649bc);
    /* 006649bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006649bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006649be: mov edi, ecx */ r_edi = r_ecx;
    /* 006649c0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006649c4: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006649c8: mov ecx, edi */ r_ecx = r_edi;
    /* 006649ca: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006649d0: call 0x6442c0 */ r_esp -= 4; W32(r_esp, 0x6649d5u); f_006442c0();
    /* 006649d5: mov dword ptr [edi], 0xb34530 */ W32((u32)(r_edi), 0xb34530u);
    /* 006649db: mov eax, dword ptr [0x9c8fc4] */ r_eax = R32((u32)(0x9c8fc4u));
    /* 006649e0: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006649e3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006649e5: je 0x664a26 */ if (fZ) goto L_00664a26;
L_006649e7:; BB(0x006649e7);
    /* 006649e7: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006649ea: mov dword ptr [edi + 0x234], eax */ W32((u32)(r_edi+0x234u), r_eax);
    /* 006649f0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006649f3: mov dword ptr [edi + 0x238], edx */ W32((u32)(r_edi+0x238u), r_edx);
    /* 006649f9: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006649fc: mov dword ptr [edi + 0x23c], eax */ W32((u32)(r_edi+0x23cu), r_eax);
    /* 00664a02: mov esi, dword ptr [esi + 0x60] */ r_esi = R32((u32)(r_esi+0x60u));
    /* 00664a05: mov dword ptr [edi + 0x240], esi */ W32((u32)(r_edi+0x240u), r_esi);
L_00664a0b:; BB(0x00664a0b);
    /* 00664a0b: mov dword ptr [edi + 0x244], 0 */ W32((u32)(r_edi+0x244u), 0x0u);
    /* 00664a15: mov eax, edi */ r_eax = r_edi;
    /* 00664a17: mov dword ptr [edi + 0x248], 0x14 */ W32((u32)(r_edi+0x248u), 0x14u);
    /* 00664a21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00664a22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00664a23: ret 8 */ FN_RET(0x006649bc); r_esp += 12; return;
L_00664a26:; BB(0x00664a26);
    /* 00664a26: mov dword ptr [edi + 0x238], 0 */ W32((u32)(r_edi+0x238u), 0x0u);
    /* 00664a30: mov dword ptr [edi + 0x234], 0 */ W32((u32)(r_edi+0x234u), 0x0u);
    /* 00664a3a: mov dword ptr [edi + 0x240], 0 */ W32((u32)(r_edi+0x240u), 0x0u);
    /* 00664a44: jmp 0x664a0b */ goto L_00664a0b;
}

void f_00664a48(void) /* sub_664A48 */
{
    FN_ENTER(0x00664a48);
    /* 00664a48: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00664a4c: lea eax, [ecx + 0x234] */ r_eax = (u32)(r_ecx+0x234u);
    /* 00664a52: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00664a56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664a57: call 0x6445c4 */ r_esp -= 4; W32(r_esp, 0x664a5cu); f_006445c4();
    /* 00664a5c: ret 0xc */ FN_RET(0x00664a48); r_esp += 16; return;
}

void f_00664a53(void)
{
    FN_ENTER(0x00664a53);
    /* 00664a53: je 0x664a79 */ if (fZ) goto L_00664a79;
L_00664a55:; BB(0x00664a55);
    /* 00664a55: or al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00664a57: call 0x6445c4 */ r_esp -= 4; W32(r_esp, 0x664a5cu); f_006445c4();
    /* 00664a5c: ret 0xc */ FN_RET(0x00664a53); r_esp += 16; return;
L_00664a64:; BB(0x00664a64);
    /* 00664a64: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00664a66: nop  */ ;
    /* 00664a67: nop  */ ;
    /* 00664a68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664a69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664a6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664a6b: mov esi, ecx */ r_esi = r_ecx;
    /* 00664a6d: mov eax, dword ptr [esi + 0x244] */ r_eax = R32((u32)(r_esi+0x244u));
    /* 00664a73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00664a76: je 0x664ae6 */ if (fZ) goto L_00664ae6;
L_00664a78:; BB(0x00664a78);
    /* 00664a78: lea ebx, [esi + 0x70] */ r_ebx = (u32)(r_esi+0x70u);
L_00664a79:; BB(0x00664a79);
    /* 00664a79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00664a7a: jo 0x664a64 */ if (fO) goto L_00664a64;
    /* 00664a7b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x664a80u); f_0082d7b0();
L_00664a7c:; BB(0x00664a7c);
    /* 00664a7c: xor byte ptr [ebp - 0x7172ffe4], cl */ { u32 ad = (u32)(r_ebp+0x8e8d001cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00664a80: lea ecx, [esi + 0x234] */ r_ecx = (u32)(r_esi+0x234u);
    /* 00664a82: xor al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00664a84: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00664a86: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x664a8bu); f_0082d838();
    /* 00664a8b: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 00664a91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00664a93: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x664a98u); f_0082d8bc();
    /* 00664a98: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 00664a9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664a9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00664a9f: jle 0x664ae1 */ if ((fZ||fS!=fO)) goto L_00664ae1;
L_00664aa1:; BB(0x00664aa1);
    /* 00664aa1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00664aa4: mov edi, esi */ r_edi = r_esi;
    /* 00664aa6: mov esi, ebx */ r_esi = r_ebx;
    /* 00664aa8: mov ebx, eax */ r_ebx = r_eax;
L_00664aaa:; BB(0x00664aaa);
    /* 00664aaa: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x664aafu); f_0082d7b0();
    /* 00664aaf: mov ecx, esi */ r_ecx = r_esi;
    /* 00664ab1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x664ab6u); f_0082d838();
    /* 00664ab6: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664ab9: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00664abc: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00664abf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00664ac1: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x664ac6u); f_0083a314();
    /* 00664ac6: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 00664ac9: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x664aceu); f_00831758();
    /* 00664ace: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x664ad3u); f_0082da80();
    /* 00664ad3: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00664ad6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00664ad9: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664adc: jl 0x664aaa */ if ((fS!=fO)) goto L_00664aaa;
L_00664ade:; BB(0x00664ade);
    /* 00664ade: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00664ae1:; BB(0x00664ae1);
    /* 00664ae1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x664ae6u); f_0082da80();
L_00664ae6:; BB(0x00664ae6);
    /* 00664ae6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664ae7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00664ae8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00664ae9: ret  */ FN_RET(0x00664a53); r_esp += 4; return;
}

void f_00664a60(void) /* sub_664A60 */
{
    FN_ENTER(0x00664a60);
    /* 00664a60: call 0x6443bc */ r_esp -= 4; W32(r_esp, 0x664a65u); f_006443bc();
    /* 00664a65: ret  */ FN_RET(0x00664a60); r_esp += 4; return;
}

void f_00664a68(void) /* sub_664A68 */
{
    FN_ENTER(0x00664a68);
    /* 00664a68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664a69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664a6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664a6b: mov esi, ecx */ r_esi = r_ecx;
    /* 00664a6d: mov eax, dword ptr [esi + 0x244] */ r_eax = R32((u32)(r_esi+0x244u));
    /* 00664a73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00664a76: je 0x664ae6 */ if (fZ) goto L_00664ae6;
L_00664a78:; BB(0x00664a78);
    /* 00664a78: lea ebx, [esi + 0x70] */ r_ebx = (u32)(r_esi+0x70u);
    /* 00664a7b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x664a80u); f_0082d7b0();
    /* 00664a80: lea ecx, [esi + 0x234] */ r_ecx = (u32)(r_esi+0x234u);
    /* 00664a86: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x664a8bu); f_0082d838();
    /* 00664a8b: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 00664a91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00664a93: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x664a98u); f_0082d8bc();
    /* 00664a98: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 00664a9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664a9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00664a9f: jle 0x664ae1 */ if ((fZ||fS!=fO)) goto L_00664ae1;
L_00664aa1:; BB(0x00664aa1);
    /* 00664aa1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00664aa4: mov edi, esi */ r_edi = r_esi;
    /* 00664aa6: mov esi, ebx */ r_esi = r_ebx;
    /* 00664aa8: mov ebx, eax */ r_ebx = r_eax;
L_00664aaa:; BB(0x00664aaa);
    /* 00664aaa: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x664aafu); f_0082d7b0();
    /* 00664aaf: mov ecx, esi */ r_ecx = r_esi;
    /* 00664ab1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x664ab6u); f_0082d838();
    /* 00664ab6: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664ab9: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00664abc: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00664abf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00664ac1: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x664ac6u); f_0083a314();
    /* 00664ac6: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 00664ac9: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x664aceu); f_00831758();
    /* 00664ace: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x664ad3u); f_0082da80();
    /* 00664ad3: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00664ad6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00664ad9: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664adc: jl 0x664aaa */ if ((fS!=fO)) goto L_00664aaa;
L_00664ade:; BB(0x00664ade);
    /* 00664ade: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00664ae1:; BB(0x00664ae1);
    /* 00664ae1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x664ae6u); f_0082da80();
L_00664ae6:; BB(0x00664ae6);
    /* 00664ae6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664ae7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00664ae8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00664ae9: ret  */ FN_RET(0x00664a68); r_esp += 4; return;
}

void f_00664aec(void) /* sub_664AEC */
{
    FN_ENTER(0x00664aec);
    /* 00664aec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664aed: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664af3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664af5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664af7: mov dword ptr [0xa8fae0], eax */ W32((u32)(0xa8fae0u), r_eax);
    /* 00664afc: mov dword ptr [0xa8fae4], eax */ W32((u32)(0xa8fae4u), r_eax);
    /* 00664b01: je 0x664b5f */ if (fZ) goto L_00664b5f;
L_00664b03:; BB(0x00664b03);
    /* 00664b03: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00664b05: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x664b0au); f_005b8610();
L_00664b0a:; BB(0x00664b0a);
    /* 00664b0a: mov ebp, dword ptr [0xa8fb18] */ r_ebp = R32((u32)(0xa8fb18u));
    /* 00664b10: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b13: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664b18u); f_0078e9b0();
    /* 00664b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b1c: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x664b21u); f_0066f3d4();
    /* 00664b21: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664b24: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664b2a: mov dword ptr [0xa8fae0], eax */ W32((u32)(0xa8fae0u), r_eax);
    /* 00664b2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664b31: je 0x664b5b */ if (fZ) goto L_00664b5b;
L_00664b33:; BB(0x00664b33);
    /* 00664b33: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b35: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x664b3au); f_005b8610();
L_00664b3a:; BB(0x00664b3a);
    /* 00664b3a: mov ebp, dword ptr [0xa8fb1c] */ r_ebp = R32((u32)(0xa8fb1cu));
    /* 00664b40: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b43: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664b48u); f_0078e9b0();
    /* 00664b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664b49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b4c: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x664b51u); f_0066f3d4();
    /* 00664b51: mov dword ptr [0xa8fae4], eax */ W32((u32)(0xa8fae4u), r_eax);
    /* 00664b56: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00664b59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664b5a: ret  */ FN_RET(0x00664aec); r_esp += 4; return;
L_00664b5b:; BB(0x00664b5b);
    /* 00664b5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664b5d: jmp 0x664b3a */ goto L_00664b3a;
L_00664b5f:; BB(0x00664b5f);
    /* 00664b5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664b61: jmp 0x664b0a */ goto L_00664b0a;
}

void f_00664b64(void) /* sub_664B64 */
{
    FN_ENTER(0x00664b64);
    /* 00664b64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664b65: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664b6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664b6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664b6f: mov dword ptr [0xa8faec], eax */ W32((u32)(0xa8faecu), r_eax);
    /* 00664b74: mov dword ptr [0xa8faf0], eax */ W32((u32)(0xa8faf0u), r_eax);
    /* 00664b79: mov dword ptr [0xa8faf4], eax */ W32((u32)(0xa8faf4u), r_eax);
    /* 00664b7e: je 0x664bd8 */ if (fZ) goto L_00664bd8;
L_00664b80:; BB(0x00664b80);
    /* 00664b80: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00664b82: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x664b87u); f_005b8610();
L_00664b87:; BB(0x00664b87);
    /* 00664b87: mov ebx, dword ptr [0xa8fb14] */ r_ebx = R32((u32)(0xa8fb14u));
    /* 00664b8d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b90: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664b95u); f_0078e9b0();
    /* 00664b95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664b96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b99: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x664b9eu); f_0066f3d4();
    /* 00664b9e: push dword ptr [0xa8fb24] */ { u32 v = R32((u32)(0xa8fb24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664ba4: push dword ptr [0xa8fb04] */ { u32 v = R32((u32)(0xa8fb04u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664baa: mov dword ptr [0xa8faec], eax */ W32((u32)(0xa8faecu), r_eax);
    /* 00664baf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664bb1: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x664bb6u); f_0066f3d4();
    /* 00664bb6: push dword ptr [0xa8fb20] */ { u32 v = R32((u32)(0xa8fb20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00664bbc: push dword ptr [0xa8fafc] */ { u32 v = R32((u32)(0xa8fafcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00664bc2: mov dword ptr [0xa8faf0], eax */ W32((u32)(0xa8faf0u), r_eax);
    /* 00664bc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664bc9: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x664bceu); f_0066f3d4();
    /* 00664bce: mov dword ptr [0xa8faf4], eax */ W32((u32)(0xa8faf4u), r_eax);
    /* 00664bd3: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00664bd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00664bd7: ret  */ FN_RET(0x00664b64); r_esp += 4; return;
L_00664bd8:; BB(0x00664bd8);
    /* 00664bd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664bda: jmp 0x664b87 */ goto L_00664b87;
}

void f_00664bdc(void) /* sub_664BDC */
{
    FN_ENTER(0x00664bdc);
    /* 00664bdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664bdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00664bdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00664be1: push 0x8e84d2 */ { u32 v = 0x8e84d2u; r_esp -= 4; W32(r_esp, v); }
    /* 00664be6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00664bec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664bed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00664bf4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664bf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00664bfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00664bfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00664c00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00664c03: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x664c08u); f_00807ac0();
    /* 00664c08: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664c0b: jne 0x664cb5 */ if (!fZ) goto L_00664cb5;
L_00664c11:; BB(0x00664c11);
    /* 00664c11: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00664c18: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00664c1d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x664c22u); f_008581c5();
    /* 00664c22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664c23: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00664c26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664c28: je 0x664e12 */ if (fZ) goto L_00664e12;
L_00664c2e:; BB(0x00664c2e);
    /* 00664c2e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00664c35: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00664c3c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664c3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664c42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664c44: push 0x9c8fac */ { u32 v = 0x9c8facu; r_esp -= 4; W32(r_esp, v); }
    /* 00664c49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664c4b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x664c50u); f_005b7a84();
    /* 00664c50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664c53: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00664c5a:; BB(0x00664c5a);
    /* 00664c5a: mov dword ptr [0xa8fb2c], eax */ W32((u32)(0xa8fb2cu), r_eax);
    /* 00664c5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00664c66: push 0x939594 */ { u32 v = 0x939594u; r_esp -= 4; W32(r_esp, v); }
    /* 00664c6b: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x664c70u); f_008009dc();
    /* 00664c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664c71: mov dword ptr [0xa8fb28], eax */ W32((u32)(0xa8fb28u), r_eax);
    /* 00664c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664c78: je 0x664d50 */ if (fZ) goto L_00664d50;
L_00664c7e:; BB(0x00664c7e);
    /* 00664c7e: mov dword ptr [0xa8fb14], 0x13 */ W32((u32)(0xa8fb14u), 0x13u);
    /* 00664c88: mov dword ptr [0xa8fb18], 0x14 */ W32((u32)(0xa8fb18u), 0x14u);
    /* 00664c92: mov dword ptr [0xa8fb1c], 6 */ W32((u32)(0xa8fb1cu), 0x6u);
    /* 00664c9c: mov dword ptr [0xa8fb20], 0x1a */ W32((u32)(0xa8fb20u), 0x1au);
    /* 00664ca6: mov dword ptr [0xa8fb24], 0xf */ W32((u32)(0xa8fb24u), 0xfu);
    /* 00664cb0: jmp 0x664d50 */ goto L_00664d50;
L_00664cb5:; BB(0x00664cb5);
    /* 00664cb5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00664cbc: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00664cc1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x664cc6u); f_008581c5();
    /* 00664cc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664cc7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00664cca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664ccc: je 0x664e19 */ if (fZ) goto L_00664e19;
L_00664cd2:; BB(0x00664cd2);
    /* 00664cd2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00664cd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664ce0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664ce3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664ce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664ce8: push 0x9c8f90 */ { u32 v = 0x9c8f90u; r_esp -= 4; W32(r_esp, v); }
    /* 00664ced: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664cef: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x664cf4u); f_005b7a84();
    /* 00664cf4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664cf7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00664cfe:; BB(0x00664cfe);
    /* 00664cfe: mov dword ptr [0xa8fb2c], eax */ W32((u32)(0xa8fb2cu), r_eax);
    /* 00664d03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00664d0a: push 0x9395ac */ { u32 v = 0x9395acu; r_esp -= 4; W32(r_esp, v); }
    /* 00664d0f: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x664d14u); f_008009dc();
    /* 00664d14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664d15: mov dword ptr [0xa8fb28], eax */ W32((u32)(0xa8fb28u), r_eax);
    /* 00664d1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664d1c: je 0x664d50 */ if (fZ) goto L_00664d50;
L_00664d1e:; BB(0x00664d1e);
    /* 00664d1e: mov dword ptr [0xa8fb14], 0x10 */ W32((u32)(0xa8fb14u), 0x10u);
    /* 00664d28: mov dword ptr [0xa8fb18], 0x11 */ W32((u32)(0xa8fb18u), 0x11u);
    /* 00664d32: mov dword ptr [0xa8fb1c], 1 */ W32((u32)(0xa8fb1cu), 0x1u);
    /* 00664d3c: mov dword ptr [0xa8fb20], 0x17 */ W32((u32)(0xa8fb20u), 0x17u);
    /* 00664d46: mov dword ptr [0xa8fb24], 0xd */ W32((u32)(0xa8fb24u), 0xdu);
L_00664d50:; BB(0x00664d50);
    /* 00664d50: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664d56: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00664d58: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x664d5du); f_005b8610();
    /* 00664d5d: mov ebx, eax */ r_ebx = r_eax;
    /* 00664d5f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664d61: je 0x664d8d */ if (fZ) goto L_00664d8d;
L_00664d63:; BB(0x00664d63);
    /* 00664d63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664d65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664d66: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664d6bu); f_0078e9b0();
    /* 00664d6b: mov dword ptr [0xa8fb08], eax */ W32((u32)(0xa8fb08u), r_eax);
    /* 00664d70: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00664d72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664d73: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664d78u); f_0078e9b0();
    /* 00664d78: mov dword ptr [0xa8fb0c], eax */ W32((u32)(0xa8fb0cu), r_eax);
    /* 00664d7d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00664d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664d80: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664d85u); f_0078e9b0();
    /* 00664d85: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664d88: mov dword ptr [0xa8fb10], eax */ W32((u32)(0xa8fb10u), r_eax);
L_00664d8d:; BB(0x00664d8d);
    /* 00664d8d: mov ecx, dword ptr [0xa8fb2c] */ r_ecx = R32((u32)(0xa8fb2cu));
    /* 00664d93: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00664d95: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x664d9au); f_005b8610();
    /* 00664d9a: mov ebx, eax */ r_ebx = r_eax;
    /* 00664d9c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664d9e: je 0x664df7 */ if (fZ) goto L_00664df7;
L_00664da0:; BB(0x00664da0);
    /* 00664da0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664da2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664da3: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664da8u); f_0078e9b0();
    /* 00664da8: mov dword ptr [0xa8fafc], eax */ W32((u32)(0xa8fafcu), r_eax);
    /* 00664dad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00664daf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664db0: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664db5u); f_0078e9b0();
    /* 00664db5: mov dword ptr [0xa8fb00], eax */ W32((u32)(0xa8fb00u), r_eax);
    /* 00664dba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00664dbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664dbd: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x664dc2u); f_0078e9b0();
    /* 00664dc2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664dc5: mov dword ptr [0xa8fb04], eax */ W32((u32)(0xa8fb04u), r_eax);
    /* 00664dca: mov eax, dword ptr [0xa8fafc] */ r_eax = R32((u32)(0xa8fafcu));
    /* 00664dcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664dd1: je 0x664dd9 */ if (fZ) goto L_00664dd9;
L_00664dd3:; BB(0x00664dd3);
    /* 00664dd3: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00664dd9:; BB(0x00664dd9);
    /* 00664dd9: mov eax, dword ptr [0xa8fb00] */ r_eax = R32((u32)(0xa8fb00u));
    /* 00664dde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664de0: je 0x664de8 */ if (fZ) goto L_00664de8;
L_00664de2:; BB(0x00664de2);
    /* 00664de2: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00664de8:; BB(0x00664de8);
    /* 00664de8: mov eax, dword ptr [0xa8fb04] */ r_eax = R32((u32)(0xa8fb04u));
    /* 00664ded: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664def: je 0x664df7 */ if (fZ) goto L_00664df7;
L_00664df1:; BB(0x00664df1);
    /* 00664df1: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00664df7:; BB(0x00664df7);
    /* 00664df7: call 0x664b64 */ r_esp -= 4; W32(r_esp, 0x664dfcu); f_00664b64();
    /* 00664dfc: call 0x664aec */ r_esp -= 4; W32(r_esp, 0x664e01u); f_00664aec();
    /* 00664e01: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664e04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664e07: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00664e0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00664e10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664e11: ret  */ FN_RET(0x00664bdc); r_esp += 4; return;
L_00664e12:; BB(0x00664e12);
    /* 00664e12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664e14: jmp 0x664c5a */ goto L_00664c5a;
L_00664e19:; BB(0x00664e19);
    /* 00664e19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664e1b: jmp 0x664cfe */ goto L_00664cfe;
}

void f_00664e20(void) /* sub_664E20 */
{
    FN_ENTER(0x00664e20);
    /* 00664e20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664e21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00664e23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00664e25: call 0x664e44 */ r_esp -= 4; W32(r_esp, 0x664e2au); f_00664e44();
    /* 00664e2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00664e2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00664e30: jne 0x664e36 */ if (!fZ) goto L_00664e36;
L_00664e32:; BB(0x00664e32);
    /* 00664e32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00664e33: ret 4 */ FN_RET(0x00664e20); r_esp += 8; return;
L_00664e36:; BB(0x00664e36);
    /* 00664e36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00664e37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x664e3cu); f_005c2f74();
    /* 00664e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664e3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00664e3e: ret 4 */ FN_RET(0x00664e20); r_esp += 8; return;
}

void f_00664e44(void) /* sub_664E44 */
{
    FN_ENTER(0x00664e44);
    /* 00664e44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664e45: mov ebp, esp */ r_ebp = r_esp;
    /* 00664e47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00664e49: push 0x8e84ec */ { u32 v = 0x8e84ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00664e4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00664e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664e55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00664e5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664e5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00664e62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00664e65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00664e68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00664e6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00664e6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664e71: mov dword ptr [ecx], 0xb345d8 */ W32((u32)(r_ecx), 0xb345d8u);
    /* 00664e77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00664e7e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x664e83u); f_007ba1f0();
    /* 00664e83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664e86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00664e8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00664e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664e90: ret  */ FN_RET(0x00664e44); r_esp += 4; return;
}

void f_00664e94(void) /* sub_664E94 */
{
    FN_ENTER(0x00664e94);
    /* 00664e94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00664e95: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664e9b: mov edi, ecx */ r_edi = r_ecx;
    /* 00664e9d: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00664ea2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664ea5: je 0x6650bf */ if (fZ) goto L_006650bf;
L_00664eab:; BB(0x00664eab);
    /* 00664eab: mov eax, dword ptr [0xa8fb3c] */ r_eax = R32((u32)(0xa8fb3cu));
    /* 00664eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664eb2: je 0x6650bf */ if (fZ) goto L_006650bf;
L_00664eb8:; BB(0x00664eb8);
    /* 00664eb8: mov eax, 0x9395c4 */ r_eax = 0x9395c4u;
    /* 00664ebd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00664ebf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00664ec2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00664ec5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00664ec9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00664ecc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00664ed0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00664ed3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00664ed7: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00664eda: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00664ede: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00664ee1: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00664ee5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00664ee8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00664eec: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00664eef: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00664ef3: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00664ef6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00664efa: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00664efd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00664f01: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00664f04: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00664f07: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00664f0b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00664f0f: mov dword ptr [esp], 0xc1200000 */ W32((u32)(r_esp), 0xc1200000u);
    /* 00664f16: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00664f1b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00664f1f: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 00664f27: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00664f2a: mov dword ptr [esp + 0xc], 0xc1200000 */ W32((u32)(r_esp+0xcu), 0xc1200000u);
    /* 00664f32: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00664f36: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00664f3a: mov dword ptr [esp + 0x10], 0xc1200000 */ W32((u32)(r_esp+0x10u), 0xc1200000u);
    /* 00664f42: mov dword ptr [esp + 0x18], 0x41200000 */ W32((u32)(r_esp+0x18u), 0x41200000u);
    /* 00664f4a: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00664f4e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00664f52: mov dword ptr [esp + 0x1c], 0x41200000 */ W32((u32)(r_esp+0x1cu), 0x41200000u);
    /* 00664f5a: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00664f5e: mov dword ptr [esp + 0x24], 0x41200000 */ W32((u32)(r_esp+0x24u), 0x41200000u);
    /* 00664f66: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00664f6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00664f6e: mov dword ptr [esp + 0x28], 0xc1200000 */ W32((u32)(r_esp+0x28u), 0xc1200000u);
    /* 00664f76: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00664f7a: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00664f7e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00664f82: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00664f86: mov dword ptr [esp + 0x58], 0xc1200000 */ W32((u32)(r_esp+0x58u), 0xc1200000u);
    /* 00664f8e: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00664f92: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00664f96: mov dword ptr [esp + 0x5c], 0xc1200000 */ W32((u32)(r_esp+0x5cu), 0xc1200000u);
    /* 00664f9e: mov dword ptr [esp + 0x6c], 0xffffffff */ W32((u32)(r_esp+0x6cu), 0xffffffffu);
    /* 00664fa6: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00664faa: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00664fae: mov dword ptr [esp + 0x70], 0x41200000 */ W32((u32)(r_esp+0x70u), 0x41200000u);
    /* 00664fb6: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 00664fbd: mov dword ptr [esp + 0x74], 0x41200000 */ W32((u32)(r_esp+0x74u), 0x41200000u);
    /* 00664fc5: mov dword ptr [esp + 0x84], 0xffffffff */ W32((u32)(r_esp+0x84u), 0xffffffffu);
    /* 00664fd0: mov dword ptr [esp + 0x88], 0x41200000 */ W32((u32)(r_esp+0x88u), 0x41200000u);
    /* 00664fdb: mov dword ptr [esp + 0x8c], 0xc1200000 */ W32((u32)(r_esp+0x8cu), 0xc1200000u);
    /* 00664fe6: mov dword ptr [esp + 0x9c], 0xffffffff */ W32((u32)(r_esp+0x9cu), 0xffffffffu);
    /* 00664ff1: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00664ff9: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 00665001: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00665009: mov dword ptr [esp + 0x68], 0x3f800000 */ W32((u32)(r_esp+0x68u), 0x3f800000u);
    /* 00665011: mov dword ptr [esp + 0x7c], 0x3f800000 */ W32((u32)(r_esp+0x7cu), 0x3f800000u);
    /* 00665019: mov dword ptr [esp + 0x80], 0 */ W32((u32)(r_esp+0x80u), 0x0u);
    /* 00665024: mov dword ptr [esp + 0x94], 0x3f800000 */ W32((u32)(r_esp+0x94u), 0x3f800000u);
    /* 0066502f: mov dword ptr [esp + 0x98], 0x3f800000 */ W32((u32)(r_esp+0x98u), 0x3f800000u);
    /* 0066503a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x66503fu); f_007a9044();
    /* 0066503f: mov ecx, 0xa8fb6c */ r_ecx = 0xa8fb6cu;
    /* 00665044: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x665049u); f_00829cc8();
    /* 00665049: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066504b: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x665050u); f_00829d68();
    /* 00665050: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x665055u); f_0082dbac();
    /* 00665055: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66505au); f_0082d7b0();
    /* 0066505a: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066505d: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00665060: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665062: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665065: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x66506au); f_00830b74();
    /* 0066506a: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0066506d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066506f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x665074u); f_00830c04();
    /* 00665074: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 00665077: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665079: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x66507eu); f_0082e9e4();
    /* 0066507e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00665081: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665083: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x665088u); f_0082d8bc();
    /* 00665088: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066508b: push dword ptr [edi + 0x6c] */ { u32 v = R32((u32)(r_edi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066508e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665090: push dword ptr [edi + 0x68] */ { u32 v = R32((u32)(r_edi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665093: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x665098u); f_0082fa0c();
    /* 00665098: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066509a: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 0066509f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6650a4u); f_00830c04();
    /* 006650a4: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 006650a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006650aa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006650ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006650ad: call 0x82b2f0 */ r_esp -= 4; W32(r_esp, 0x6650b2u); f_0082b2f0();
    /* 006650b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006650b5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6650bau); f_0082da80();
    /* 006650ba: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6650bfu); f_0082dab0();
L_006650bf:; BB(0x006650bf);
    /* 006650bf: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006650c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006650c6: ret  */ FN_RET(0x00664e94); r_esp += 4; return;
}

