#include "protos.h"

void f_0077b1a0(void) /* sub_77B1A0 */
{
    FN_ENTER(0x0077b1a0);
    /* 0077b1a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1a4: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0077b1aa: mov eax, dword ptr [0x9f7de8] */ r_eax = R32((u32)(0x9f7de8u));
    /* 0077b1af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b1b1: je 0x77b1ba */ if (fZ) goto L_0077b1ba;
L_0077b1b3:; BB(0x0077b1b3);
    /* 0077b1b3: mov eax, 1 */ r_eax = 0x1u;
    /* 0077b1b8: jmp 0x77b1bc */ goto L_0077b1bc;
L_0077b1ba:; BB(0x0077b1ba);
    /* 0077b1ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0077b1bc:; BB(0x0077b1bc);
    /* 0077b1bc: push 0xf600 */ { u32 v = 0xf600u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b1c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b1c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b1c7: mov ebx, dword ptr [edx + eax*4 + 0x9f7dec] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x9f7decu));
    /* 0077b1ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77b1d3u); f_008581c5();
    /* 0077b1d3: mov edi, eax */ r_edi = r_eax;
    /* 0077b1d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077b1d8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077b1da: je 0x77b29d */ if (fZ) goto L_0077b29d;
L_0077b1e0:; BB(0x0077b1e0);
    /* 0077b1e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1e1: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 0077b1e6: call 0x5bc050 */ r_esp -= 4; W32(r_esp, 0x77b1ebu); f_005bc050();
    /* 0077b1eb: mov ebp, eax */ r_ebp = r_eax;
    /* 0077b1ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077b1ef: jle 0x77b207 */ if ((fZ||fS!=fO)) goto L_0077b207;
L_0077b1f1:; BB(0x0077b1f1);
    /* 0077b1f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1f2: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 0077b1f7: call 0x5bc0b0 */ r_esp -= 4; W32(r_esp, 0x77b1fcu); f_005bc0b0();
    /* 0077b1fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b1ff: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b204u); f_0086b6b8();
    /* 0077b204: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077b207:; BB(0x0077b207);
    /* 0077b207: mov esi, dword ptr [0xa9b1cc] */ r_esi = R32((u32)(0xa9b1ccu));
    /* 0077b20d: mov ebp, dword ptr [0xa9b1e0] */ r_ebp = R32((u32)(0xa9b1e0u));
    /* 0077b213: push 0xd80 */ { u32 v = 0xd80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b218: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077b21b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b21d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b21f: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 0077b222: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b224: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b226: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b228: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b22a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b22c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b22e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b230: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b232: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b233: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b234: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b239u); f_0086b6b8();
    /* 0077b239: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b23e: lea ecx, [ebp + 0xd80] */ r_ecx = (u32)(r_ebp+0xd80u);
    /* 0077b244: lea ebx, [esi + esi*8] */ r_ebx = (u32)(r_esi+r_esi*8);
    /* 0077b247: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0077b24a: lea edx, [ebx + edi + 0x3600] */ r_edx = (u32)(r_ebx+r_edi+0x3600u);
    /* 0077b251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b252: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b253: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b258u); f_0086b6b8();
    /* 0077b258: push 0xc00 */ { u32 v = 0xc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b25d: lea ecx, [ebp + 0x1f80] */ r_ecx = (u32)(r_ebp+0x1f80u);
    /* 0077b263: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077b266: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b268: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b26a: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077b26d: lea esi, [edx + edi + 0x7e00] */ r_esi = (u32)(r_edx+r_edi+0x7e00u);
    /* 0077b274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b275: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b276: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b27bu); f_0086b6b8();
    /* 0077b27b: lea edx, [ebx + edi + 0xae00] */ r_edx = (u32)(r_ebx+r_edi+0xae00u);
    /* 0077b282: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b287: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b288: add ebp, 0x2b80 */ {  u32 a = r_ebp; u32 b = 0x2b80u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b28e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b28f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b294u); f_0086b6b8();
    /* 0077b294: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b295: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77b29au); f_00857e98();
    /* 0077b29a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077b29d:; BB(0x0077b29d);
    /* 0077b29d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077b29e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077b29f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077b2a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077b2a1: ret  */ FN_RET(0x0077b1a0); r_esp += 4; return;
}

void f_0077b2a8(void) /* sub_77B2A8 */
{
    FN_ENTER(0x0077b2a8);
    /* 0077b2a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077b2aa: jl 0x77b2ce */ if ((fS!=fO)) goto L_0077b2ce;
L_0077b2ac:; BB(0x0077b2ac);
    /* 0077b2ac: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 0077b2b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b2b4: je 0x77b2c2 */ if (fZ) goto L_0077b2c2;
L_0077b2b6:; BB(0x0077b2b6);
    /* 0077b2b6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077b2b9: jl 0x77b2d0 */ if ((fS!=fO)) goto L_0077b2d0;
L_0077b2bb:; BB(0x0077b2bb);
    /* 0077b2bb: mov eax, 3 */ r_eax = 0x3u;
    /* 0077b2c0: jmp 0x77b2d0 */ goto L_0077b2d0;
L_0077b2c2:; BB(0x0077b2c2);
    /* 0077b2c2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077b2c5: jl 0x77b2d0 */ if ((fS!=fO)) goto L_0077b2d0;
L_0077b2c7:; BB(0x0077b2c7);
    /* 0077b2c7: mov eax, 2 */ r_eax = 0x2u;
    /* 0077b2cc: jmp 0x77b2d0 */ goto L_0077b2d0;
L_0077b2ce:; BB(0x0077b2ce);
    /* 0077b2ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0077b2d0:; BB(0x0077b2d0);
    /* 0077b2d0: mov dword ptr [0xa9b1cc], eax */ W32((u32)(0xa9b1ccu), r_eax);
    /* 0077b2d5: ret  */ FN_RET(0x0077b2a8); r_esp += 4; return;
}

void f_0077b2d8(void) /* sub_77B2D8 */
{
    FN_ENTER(0x0077b2d8);
    /* 0077b2d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b2d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b2da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b2db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b2dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b2dd: mov esi, dword ptr [0xa9b1cc] */ r_esi = R32((u32)(0xa9b1ccu));
    /* 0077b2e3: mov ebp, dword ptr [0xa9b1c8] */ r_ebp = R32((u32)(0xa9b1c8u));
    /* 0077b2e9: mov ebx, dword ptr [0x9f7de8] */ r_ebx = R32((u32)(0x9f7de8u));
    /* 0077b2ef: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0077b2f4: call 0x77b2a8 */ r_esp -= 4; W32(r_esp, 0x77b2f9u); f_0077b2a8();
    /* 0077b2f9: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 0077b2ff: mov edx, dword ptr [0xa9b1c4] */ r_edx = R32((u32)(0xa9b1c4u));
    /* 0077b305: mov eax, dword ptr [0xa9b1c0] */ r_eax = R32((u32)(0xa9b1c0u));
    /* 0077b30a: mov dword ptr [0xa9b1c8], ecx */ W32((u32)(0xa9b1c8u), r_ecx);
    /* 0077b310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b312: mov dword ptr [0x9f7de8], edx */ W32((u32)(0x9f7de8u), r_edx);
    /* 0077b318: jne 0x77b32e */ if (!fZ) goto L_0077b32e;
L_0077b31a:; BB(0x0077b31a);
    /* 0077b31a: cmp esi, dword ptr [0xa9b1cc] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9b1ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b320: jne 0x77b32e */ if (!fZ) goto L_0077b32e;
L_0077b322:; BB(0x0077b322);
    /* 0077b322: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b324: jne 0x77b32e */ if (!fZ) goto L_0077b32e;
L_0077b326:; BB(0x0077b326);
    /* 0077b326: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077b328: je 0x77b426 */ if (fZ) goto L_0077b426;
L_0077b32e:; BB(0x0077b32e);
    /* 0077b32e: mov dword ptr [0xa9b1c0], 0 */ W32((u32)(0xa9b1c0u), 0x0u);
    /* 0077b338: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b33a: je 0x77b343 */ if (fZ) goto L_0077b343;
L_0077b33c:; BB(0x0077b33c);
    /* 0077b33c: mov eax, 1 */ r_eax = 0x1u;
    /* 0077b341: jmp 0x77b345 */ goto L_0077b345;
L_0077b343:; BB(0x0077b343);
    /* 0077b343: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0077b345:; BB(0x0077b345);
    /* 0077b345: push 0xf600 */ { u32 v = 0xf600u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b34a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b34c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b34e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b350: mov ebx, dword ptr [ecx + eax*4 + 0x9f7dec] */ r_ebx = R32((u32)(r_ecx+r_eax*4+0x9f7decu));
    /* 0077b357: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77b35cu); f_008581c5();
    /* 0077b35c: mov edi, eax */ r_edi = r_eax;
    /* 0077b35e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077b361: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077b363: je 0x77b426 */ if (fZ) goto L_0077b426;
L_0077b369:; BB(0x0077b369);
    /* 0077b369: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b36a: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 0077b36f: call 0x5bc050 */ r_esp -= 4; W32(r_esp, 0x77b374u); f_005bc050();
    /* 0077b374: mov ebp, eax */ r_ebp = r_eax;
    /* 0077b376: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077b378: jle 0x77b390 */ if ((fZ||fS!=fO)) goto L_0077b390;
L_0077b37a:; BB(0x0077b37a);
    /* 0077b37a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b37b: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 0077b380: call 0x5bc0b0 */ r_esp -= 4; W32(r_esp, 0x77b385u); f_005bc0b0();
    /* 0077b385: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077b387: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b388: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b38du); f_0086b6b8();
    /* 0077b38d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077b390:; BB(0x0077b390);
    /* 0077b390: mov esi, dword ptr [0xa9b1cc] */ r_esi = R32((u32)(0xa9b1ccu));
    /* 0077b396: mov ebp, dword ptr [0xa9b1e0] */ r_ebp = R32((u32)(0xa9b1e0u));
    /* 0077b39c: push 0xd80 */ { u32 v = 0xd80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3a1: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077b3a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b3a6: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b3a8: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 0077b3ab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3ad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3af: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3b1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3b5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3b9: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b3bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3bd: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b3c2u); f_0086b6b8();
    /* 0077b3c2: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3c7: lea ecx, [ebp + 0xd80] */ r_ecx = (u32)(r_ebp+0xd80u);
    /* 0077b3cd: lea ebx, [esi + esi*8] */ r_ebx = (u32)(r_esi+r_esi*8);
    /* 0077b3d0: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0077b3d3: lea edx, [ebx + edi + 0x3600] */ r_edx = (u32)(r_ebx+r_edi+0x3600u);
    /* 0077b3da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3dc: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b3e1u); f_0086b6b8();
    /* 0077b3e1: push 0xc00 */ { u32 v = 0xc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3e6: lea ecx, [ebp + 0x1f80] */ r_ecx = (u32)(r_ebp+0x1f80u);
    /* 0077b3ec: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077b3ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b3f1: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b3f3: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077b3f6: lea esi, [edx + edi + 0x7e00] */ r_esi = (u32)(r_edx+r_edi+0x7e00u);
    /* 0077b3fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b3ff: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b404u); f_0086b6b8();
    /* 0077b404: lea edx, [ebx + edi + 0xae00] */ r_edx = (u32)(r_ebx+r_edi+0xae00u);
    /* 0077b40b: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b411: add ebp, 0x2b80 */ {  u32 a = r_ebp; u32 b = 0x2b80u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b417: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b418: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b41du); f_0086b6b8();
    /* 0077b41d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b41e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77b423u); f_00857e98();
    /* 0077b423: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077b426:; BB(0x0077b426);
    /* 0077b426: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077b427: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077b428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077b429: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077b42a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077b42b: ret  */ FN_RET(0x0077b2d8); r_esp += 4; return;
}

void f_0077b42c(void) /* sub_77B42C */
{
    FN_ENTER(0x0077b42c);
    /* 0077b42c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b42d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b42e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b42f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b430: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b431: push 0x3d80 */ { u32 v = 0x3d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b436: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77b43bu); f_008581c5();
    /* 0077b43b: mov ecx, eax */ r_ecx = r_eax;
    /* 0077b43d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077b440: mov edx, ecx */ r_edx = r_ecx;
    /* 0077b442: lea eax, [ecx + 0x3d80] */ r_eax = (u32)(r_ecx+0x3d80u);
L_0077b448:; BB(0x0077b448);
    /* 0077b448: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0077b44a: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 0077b44c: mov byte ptr [edx + 1], bl */ W8((u32)(r_edx+0x1u), (u8)r_ebx);
    /* 0077b44f: mov byte ptr [edx + 2], bl */ W8((u32)(r_edx+0x2u), (u8)r_ebx);
    /* 0077b452: mov byte ptr [edx + 3], bl */ W8((u32)(r_edx+0x3u), (u8)r_ebx);
    /* 0077b455: mov byte ptr [edx + 4], bl */ W8((u32)(r_edx+0x4u), (u8)r_ebx);
    /* 0077b458: mov byte ptr [edx + 5], bl */ W8((u32)(r_edx+0x5u), (u8)r_ebx);
    /* 0077b45b: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b45e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077b460: ja 0x77b448 */ if ((!fC&&!fZ)) goto L_0077b448;
L_0077b462:; BB(0x0077b462);
    /* 0077b462: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0077b467: mov dword ptr [0xa9b1e0], ecx */ W32((u32)(0xa9b1e0u), r_ecx);
    /* 0077b46d: mov dword ptr [0xa9b1dc], ecx */ W32((u32)(0xa9b1dcu), r_ecx);
    /* 0077b473: lea edx, [ecx + 0xd80] */ r_edx = (u32)(r_ecx+0xd80u);
    /* 0077b479: mov dword ptr [0xa9b1d8], edx */ W32((u32)(0xa9b1d8u), r_edx);
    /* 0077b47f: lea ebx, [ecx + 0x1f80] */ r_ebx = (u32)(r_ecx+0x1f80u);
    /* 0077b485: mov dword ptr [0xa9b1d4], ebx */ W32((u32)(0xa9b1d4u), r_ebx);
    /* 0077b48b: add ecx, 0x2b80 */ {  u32 a = r_ecx; u32 b = 0x2b80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b491: mov dword ptr [0xa9b1d0], ecx */ W32((u32)(0xa9b1d0u), r_ecx);
    /* 0077b497: call 0x77b2a8 */ r_esp -= 4; W32(r_esp, 0x77b49cu); f_0077b2a8();
    /* 0077b49c: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0077b4a2: mov eax, dword ptr [0x9f7de8] */ r_eax = R32((u32)(0x9f7de8u));
    /* 0077b4a7: mov dword ptr [0xa9b1c8], edx */ W32((u32)(0xa9b1c8u), r_edx);
    /* 0077b4ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b4af: je 0x77b4b8 */ if (fZ) goto L_0077b4b8;
L_0077b4b1:; BB(0x0077b4b1);
    /* 0077b4b1: mov eax, 1 */ r_eax = 0x1u;
    /* 0077b4b6: jmp 0x77b4ba */ goto L_0077b4ba;
L_0077b4b8:; BB(0x0077b4b8);
    /* 0077b4b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0077b4ba:; BB(0x0077b4ba);
    /* 0077b4ba: push 0xf600 */ { u32 v = 0xf600u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b4bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b4c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b4c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b4c5: mov ebx, dword ptr [edx + eax*4 + 0x9f7dec] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x9f7decu));
    /* 0077b4cc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77b4d1u); f_008581c5();
    /* 0077b4d1: mov edi, eax */ r_edi = r_eax;
    /* 0077b4d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077b4d6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077b4d8: je 0x77b59b */ if (fZ) goto L_0077b59b;
L_0077b4de:; BB(0x0077b4de);
    /* 0077b4de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b4df: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 0077b4e4: call 0x5bc050 */ r_esp -= 4; W32(r_esp, 0x77b4e9u); f_005bc050();
    /* 0077b4e9: mov ebp, eax */ r_ebp = r_eax;
    /* 0077b4eb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077b4ed: jle 0x77b505 */ if ((fZ||fS!=fO)) goto L_0077b505;
L_0077b4ef:; BB(0x0077b4ef);
    /* 0077b4ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b4f0: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 0077b4f5: call 0x5bc0b0 */ r_esp -= 4; W32(r_esp, 0x77b4fau); f_005bc0b0();
    /* 0077b4fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b4fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077b4fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b4fd: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b502u); f_0086b6b8();
    /* 0077b502: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077b505:; BB(0x0077b505);
    /* 0077b505: mov esi, dword ptr [0xa9b1cc] */ r_esi = R32((u32)(0xa9b1ccu));
    /* 0077b50b: mov ebp, dword ptr [0xa9b1e0] */ r_ebp = R32((u32)(0xa9b1e0u));
    /* 0077b511: push 0xd80 */ { u32 v = 0xd80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b516: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077b519: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b51b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b51d: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 0077b520: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b522: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b524: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b526: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b528: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b52a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b52c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b52e: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b530: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b531: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b532: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b537u); f_0086b6b8();
    /* 0077b537: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b53c: lea ecx, [ebp + 0xd80] */ r_ecx = (u32)(r_ebp+0xd80u);
    /* 0077b542: lea ebx, [esi + esi*8] */ r_ebx = (u32)(r_esi+r_esi*8);
    /* 0077b545: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0077b548: lea edx, [ebx + edi + 0x3600] */ r_edx = (u32)(r_ebx+r_edi+0x3600u);
    /* 0077b54f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b550: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b551: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b556u); f_0086b6b8();
    /* 0077b556: push 0xc00 */ { u32 v = 0xc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b55b: lea ecx, [ebp + 0x1f80] */ r_ecx = (u32)(r_ebp+0x1f80u);
    /* 0077b561: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077b564: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b566: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b568: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077b56b: lea esi, [edx + edi + 0x7e00] */ r_esi = (u32)(r_edx+r_edi+0x7e00u);
    /* 0077b572: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b574: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b579u); f_0086b6b8();
    /* 0077b579: lea edx, [ebx + edi + 0xae00] */ r_edx = (u32)(r_ebx+r_edi+0xae00u);
    /* 0077b580: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b585: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b586: add ebp, 0x2b80 */ {  u32 a = r_ebp; u32 b = 0x2b80u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b58c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b58d: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77b592u); f_0086b6b8();
    /* 0077b592: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b593: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77b598u); f_00857e98();
    /* 0077b598: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077b59b:; BB(0x0077b59b);
    /* 0077b59b: mov dword ptr [0xa9b1bc], 0 */ W32((u32)(0xa9b1bcu), 0x0u);
    /* 0077b5a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077b5a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077b5a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077b5a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077b5a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077b5aa: ret  */ FN_RET(0x0077b42c); r_esp += 4; return;
}

void f_0077b5ac(void) /* sub_77B5AC */
{
    FN_ENTER(0x0077b5ac);
    /* 0077b5ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b5ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b5ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077b5af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b5b0: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077b5b6: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 0077b5bd: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 0077b5c4: fcom dword ptr [0x978498] */ fx_compare(ST(0), R_F32((u32)(0x978498u))); 
    /* 0077b5ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077b5cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b5ce: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0077b5d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077b5d3: jbe 0x77b943 */ if ((fC||fZ)) goto L_0077b943;
L_0077b5d9:; BB(0x0077b5d9);
    /* 0077b5d9: fld dword ptr [0x978494] */ FPUSH(R_F32((u32)(0x978494u)));
    /* 0077b5df: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077b5e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077b5e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077b5e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b5e6: jb 0x77b5ea */ if (fC) goto L_0077b5ea;
L_0077b5e8:; BB(0x0077b5e8);
    /* 0077b5e8: fst st(1) */ ST(1) = ST(0);
L_0077b5ea:; BB(0x0077b5ea);
    /* 0077b5ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077b5ec: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0077b5f0: call 0x77b950 */ r_esp -= 4; W32(r_esp, 0x77b5f5u); f_0077b950();
    /* 0077b5f5: mov esi, eax */ r_esi = r_eax;
    /* 0077b5f7: mov eax, 0x1948b0fd */ r_eax = 0x1948b0fdu;
    /* 0077b5fc: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077b5fe: mov ecx, esi */ r_ecx = r_esi;
    /* 0077b600: mov eax, 0x10624dd3 */ r_eax = 0x10624dd3u;
    /* 0077b605: fld dword ptr [0x978490] */ FPUSH(R_F32((u32)(0x978490u)));
    /* 0077b60b: fdiv dword ptr [esp + 0xa4] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xa4u));
    /* 0077b612: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0077b616: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b618: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0077b61c: mov ebp, edx */ r_ebp = r_edx;
    /* 0077b61e: sar ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0077b621: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0077b624: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b626: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077b628: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0077b62a: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0077b62d: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0077b630: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b632: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0077b635: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077b637: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0077b639: lea ecx, [edx + edi*8] */ r_ecx = (u32)(r_edx+r_edi*8);
    /* 0077b63c: lea ecx, [ecx + ecx*4] */ r_ecx = (u32)(r_ecx+r_ecx*4);
    /* 0077b63f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b641: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b643: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b645: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b647: call 0x77b9ac */ r_esp -= 4; W32(r_esp, 0x77b64cu); f_0077b9ac();
    /* 0077b64c: mov ebx, eax */ r_ebx = r_eax;
    /* 0077b64e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x77b653u); f_007a61a4();
    /* 0077b653: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077b656: je 0x77b857 */ if (fZ) goto L_0077b857;
L_0077b65c:; BB(0x0077b65c);
    /* 0077b65c: mov edi, ebx */ r_edi = r_ebx;
    /* 0077b65e: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_0077b664:; BB(0x0077b664);
    /* 0077b664: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077b668: mov ecx, dword ptr [esp + 0xa0] */ r_ecx = R32((u32)(r_esp+0xa0u));
    /* 0077b66f: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0077b673: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b675: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077b678: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077b67c: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0077b680: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0077b684: call 0x7895d4 */ r_esp -= 4; W32(r_esp, 0x77b689u); f_007895d4();
    /* 0077b689: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077b68d: fadd dword ptr [0x978488] */ ST(0) = ST(0) + R_F32((u32)(0x978488u));
    /* 0077b693: fld dword ptr [0x978490] */ FPUSH(R_F32((u32)(0x978490u)));
    /* 0077b699: fadd dword ptr [esp + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xa0u));
    /* 0077b6a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0077b6a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077b6a6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077b6a9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0077b6ad: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077b6b1: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0077b6b5: mov edx, 3 */ r_edx = 0x3u;
    /* 0077b6ba: mov word ptr [esp + 0x10], bp */ W16((u32)(r_esp+0x10u), (u16)r_ebp);
    /* 0077b6bf: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 0077b6c4: call 0x789440 */ r_esp -= 4; W32(r_esp, 0x77b6c9u); f_00789440();
    /* 0077b6c9: fld dword ptr [0x978484] */ FPUSH(R_F32((u32)(0x978484u)));
    /* 0077b6cf: fadd dword ptr [0xa9b1ec] */ ST(0) = ST(0) + R_F32((u32)(0xa9b1ecu));
    /* 0077b6d5: fld dword ptr [0x978494] */ FPUSH(R_F32((u32)(0x978494u)));
    /* 0077b6db: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077b6dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077b6df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077b6e0: ja 0x77b6f4 */ if ((!fC&&!fZ)) goto L_0077b6f4;
L_0077b6e2:; BB(0x0077b6e2);
    /* 0077b6e2: fld dword ptr [0x978490] */ FPUSH(R_F32((u32)(0x978490u)));
    /* 0077b6e8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0077b6ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b6ec: fstp dword ptr [0xa9b1ec] */ W_F32((u32)(0xa9b1ecu), ST(0)); FPOP();
    /* 0077b6f2: jmp 0x77b6fc */ goto L_0077b6fc;
L_0077b6f4:; BB(0x0077b6f4);
    /* 0077b6f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b6f6: fstp dword ptr [0xa9b1ec] */ W_F32((u32)(0xa9b1ecu), ST(0)); FPOP();
L_0077b6fc:; BB(0x0077b6fc);
    /* 0077b6fc: fld dword ptr [0x978478] */ FPUSH(R_F32((u32)(0x978478u)));
    /* 0077b702: mov eax, 0x1948b0fd */ r_eax = 0x1948b0fdu;
    /* 0077b707: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077b709: or ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0077b70f: mov dword ptr [esp + 0x7c], ebx */ W32((u32)(r_esp+0x7cu), r_ebx);
    /* 0077b713: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 0077b71b: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 0077b723: lea edi, [esp + 0x7c] */ r_edi = (u32)(r_esp+0x7cu);
    /* 0077b727: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 0077b72b: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0077b72e: mov ecx, esi */ r_ecx = r_esi;
    /* 0077b730: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0077b733: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b735: lea ebp, [edx + edx*4] */ r_ebp = (u32)(r_edx+r_edx*4);
    /* 0077b738: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b73a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b73c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b73e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077b740: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b742: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b744: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b746: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b748: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b74a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b74c: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0077b74e: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0077b752: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0077b756: lea esi, [esp + 0x64] */ r_esi = (u32)(r_esp+0x64u);
    /* 0077b75a: fmul dword ptr [0x978488] */ ST(0) = ST(0) * R_F32((u32)(0x978488u));
    /* 0077b760: fdiv dword ptr [0x978480] */ ST(0) = ST(0) / R_F32((u32)(0x978480u));
    /* 0077b766: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 0077b76a: mov dword ptr [esp + 0x80], ebx */ W32((u32)(r_esp+0x80u), r_ebx);
    /* 0077b771: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0077b775: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 0077b778: fld dword ptr [0xa9b1ec] */ FPUSH(R_F32((u32)(0xa9b1ecu)));
    /* 0077b77e: fcom dword ptr [0x97847c] */ fx_compare(ST(0), R_F32((u32)(0x97847cu))); 
    /* 0077b784: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077b786: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077b787: jbe 0x77b7bc */ if ((fC||fZ)) goto L_0077b7bc;
L_0077b789:; BB(0x0077b789);
    /* 0077b789: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0077b78b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b78d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0077b78f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b791: fmul dword ptr [0x978474] */ ST(0) = ST(0) * R_F32((u32)(0x978474u));
    /* 0077b797: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0077b79b: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0077b7a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077b7a5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077b7a9: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077b7ad: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0077b7b1: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0077b7b5: movzx eax, byte ptr [esp + 0x30] */ r_eax = (u32)R8((u32)(r_esp+0x30u));
    /* 0077b7ba: jmp 0x77b7e7 */ goto L_0077b7e7;
L_0077b7bc:; BB(0x0077b7bc);
    /* 0077b7bc: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0077b7be: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077b7c0: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0077b7c2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077b7c4: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0077b7c8: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0077b7cd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077b7d2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077b7d6: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077b7da: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0077b7de: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0077b7e2: movzx eax, byte ptr [esp + 0x30] */ r_eax = (u32)R8((u32)(r_esp+0x30u));
L_0077b7e7:; BB(0x0077b7e7);
    /* 0077b7e7: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0077b7eb: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077b7ef: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0077b7f1: fld dword ptr [0x978470] */ FPUSH(R_F32((u32)(0x978470u)));
    /* 0077b7f7: fadd dword ptr [esp + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xa0u));
    /* 0077b7fe: mov edx, eax */ r_edx = r_eax;
    /* 0077b800: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077b803: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077b805: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0077b809: or dword ptr [ecx + 4], edx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077b80c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077b80e: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0077b812: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b814: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 0077b818: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077b81a: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0077b81e: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 0077b822: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b824: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0077b826: fmul dword ptr [0xa9b1ec] */ ST(0) = ST(0) * R_F32((u32)(0xa9b1ecu));
    /* 0077b82c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0077b82e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077b830: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0077b834: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0077b838: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b83a: push dword ptr [esp + 0xa8] */ { u32 v = R32((u32)(r_esp+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077b841: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077b844: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x77b849u); f_0082b558();
    /* 0077b849: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077b84c: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077b852: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077b853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077b854: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077b855: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077b856: ret  */ FN_RET(0x0077b5ac); r_esp += 4; return;
L_0077b857:; BB(0x0077b857);
    /* 0077b857: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 0077b85b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b85c: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x77b861u); f_0083ace8();
    /* 0077b861: lea edi, [esp + 0x48] */ r_edi = (u32)(r_esp+0x48u);
    /* 0077b865: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0077b869: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b86a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077b86b: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x77b870u); f_0083ad44();
    /* 0077b870: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077b873: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0077b877: sub ecx, dword ptr [0xaab214] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab214u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b87d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0077b881: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x77b886u); f_00816d30();
    /* 0077b886: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 0077b88b: mul dword ptr [esp + 0x50] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x50u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0077b88f: shr edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0077b892: cmp edx, 0x63 */ {  u32 a = r_edx; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077b895: jbe 0x77b8a4 */ if ((fC||fZ)) goto L_0077b8a4;
L_0077b897:; BB(0x0077b897);
    /* 0077b897: push 0x9784a0 */ { u32 v = 0x9784a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b89c: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x77b8a1u); f_00816cb8();
    /* 0077b8a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077b8a2: jmp 0x77b8f4 */ goto L_0077b8f4;
L_0077b8a4:; BB(0x0077b8a4);
    /* 0077b8a4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b8a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b8a7: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x77b8acu); f_00816684();
    /* 0077b8ac: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b8b1: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x77b8b6u); f_00816cb8();
    /* 0077b8b6: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 0077b8bb: mul dword ptr [esp + 0x5c] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x5cu)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0077b8bf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b8c1: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 0077b8c6: mov ecx, edx */ r_ecx = r_edx;
    /* 0077b8c8: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0077b8cb: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0077b8cd: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0077b8d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b8d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b8d4: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0077b8d7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077b8d9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077b8db: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077b8dd: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0077b8df: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b8e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b8e2: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x77b8e7u); f_00816684();
    /* 0077b8e7: push 0x96f638 */ { u32 v = 0x96f638u; r_esp -= 4; W32(r_esp, v); }
    /* 0077b8ec: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x77b8f1u); f_00816cb8();
    /* 0077b8f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077b8f4:; BB(0x0077b8f4);
    /* 0077b8f4: mov ecx, dword ptr [esp + 0x9c] */ r_ecx = R32((u32)(r_esp+0x9cu));
    /* 0077b8fb: fld dword ptr [0x978490] */ FPUSH(R_F32((u32)(0x978490u)));
    /* 0077b901: fadd dword ptr [esp + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xa0u));
    /* 0077b908: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0077b90c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077b910: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0077b914: mov edi, ebx */ r_edi = r_ebx;
    /* 0077b916: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0077b91c: mov dword ptr [esp + 0x10], 0xac9d80 */ W32((u32)(r_esp+0x10u), 0xac9d80u);
    /* 0077b924: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0077b927: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0077b92b: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x77b930u); f_00789248();
    /* 0077b930: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077b934: fadd dword ptr [0x97848c] */ ST(0) = ST(0) + R_F32((u32)(0x97848cu));
    /* 0077b93a: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0077b93e: jmp 0x77b664 */ goto L_0077b664;
L_0077b943:; BB(0x0077b943);
    /* 0077b943: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077b945: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077b94b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077b94c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077b94d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077b94e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077b94f: ret  */ FN_RET(0x0077b5ac); r_esp += 4; return;
}

void f_0077b950(void) /* sub_77B950 */
{
    FN_ENTER(0x0077b950);
    /* 0077b950: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077b953: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0077b956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077b957: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x77b95cu); f_0083ace8();
    /* 0077b95c: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0077b961: movzx ecx, byte ptr [esp + 9] */ r_ecx = (u32)R8((u32)(r_esp+0x9u));
    /* 0077b966: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b968: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b96a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0077b96d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b96f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b971: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b973: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077b975: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b977: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b979: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077b97b: movzx edx, byte ptr [esp + 0xa] */ r_edx = (u32)R8((u32)(r_esp+0xau));
    /* 0077b980: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0077b983: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b985: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b987: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b989: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077b98b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077b98d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077b990: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b992: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b994: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b996: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b998: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077b99a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077b99c: add eax, dword ptr [0xa9b1e8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9b1e8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077b9a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077b9a5: ret  */ FN_RET(0x0077b950); r_esp += 4; return;
}

void f_0077b9ac(void) /* sub_77B9AC */
{
    FN_ENTER(0x0077b9ac);
    /* 0077b9ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077b9af: fld dword ptr [0x97846c] */ FPUSH(R_F32((u32)(0x97846cu)));
    /* 0077b9b5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077b9b7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0077b9ba: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0077b9be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077b9c3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077b9c7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077b9cb: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0077b9cf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0077b9d2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0077b9d6: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0077b9d9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077b9dc: ret  */ FN_RET(0x0077b9ac); r_esp += 4; return;
}

void f_0077b9e0(void) /* sub_77B9E0 */
{
    FN_ENTER(0x0077b9e0);
    /* 0077b9e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077b9e1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077b9e4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0077b9e8: fcom dword ptr [0x978468] */ fx_compare(ST(0), R_F32((u32)(0x978468u))); 
    /* 0077b9ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077b9f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077b9f1: jbe 0x77ba68 */ if ((fC||fZ)) goto L_0077ba68;
L_0077b9f3:; BB(0x0077b9f3);
    /* 0077b9f3: fld dword ptr [0x978464] */ FPUSH(R_F32((u32)(0x978464u)));
    /* 0077b9f9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077b9fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077b9fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077b9fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077ba00: jb 0x77ba04 */ if (fC) goto L_0077ba04;
L_0077ba02:; BB(0x0077ba02);
    /* 0077ba02: fst st(1) */ ST(1) = ST(0);
L_0077ba04:; BB(0x0077ba04);
    /* 0077ba04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077ba06: fld dword ptr [0x978460] */ FPUSH(R_F32((u32)(0x978460u)));
    /* 0077ba0c: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 0077ba10: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0077ba14: call 0x77b9ac */ r_esp -= 4; W32(r_esp, 0x77ba19u); f_0077b9ac();
    /* 0077ba19: mov ebx, eax */ r_ebx = r_eax;
    /* 0077ba1b: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x77ba20u); f_007a61a4();
    /* 0077ba20: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ba23: je 0x77ba2a */ if (fZ) goto L_0077ba2a;
L_0077ba25:; BB(0x0077ba25);
    /* 0077ba25: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077ba28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ba29: ret  */ FN_RET(0x0077b9e0); r_esp += 4; return;
L_0077ba2a:; BB(0x0077ba2a);
    /* 0077ba2a: call 0x77ba70 */ r_esp -= 4; W32(r_esp, 0x77ba2fu); f_0077ba70();
    /* 0077ba2f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0077ba33: fld dword ptr [0x978460] */ FPUSH(R_F32((u32)(0x978460u)));
    /* 0077ba39: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 0077ba3d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0077ba41: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077ba45: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0077ba49: or ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0077ba4f: mov dword ptr [esp + 0x10], 0xac9d80 */ W32((u32)(r_esp+0x10u), 0xac9d80u);
    /* 0077ba57: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0077ba5a: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0077ba5e: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x77ba63u); f_00789248();
    /* 0077ba63: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077ba66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ba67: ret  */ FN_RET(0x0077b9e0); r_esp += 4; return;
L_0077ba68:; BB(0x0077ba68);
    /* 0077ba68: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077ba6a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077ba6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ba6e: ret  */ FN_RET(0x0077b9e0); r_esp += 4; return;
}

void f_0077ba70(void) /* sub_77BA70 */
{
    FN_ENTER(0x0077ba70);
    /* 0077ba70: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x77ba75u); f_00816d30();
    /* 0077ba75: push 0xaab2ec */ { u32 v = 0xaab2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0077ba7a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x77ba7fu); f_00816cb8();
    /* 0077ba7f: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ba84: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x77ba89u); f_00816cb8();
    /* 0077ba89: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ba8b: push dword ptr [0xaab208] */ { u32 v = R32((u32)(0xaab208u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077ba91: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x77ba96u); f_00816684();
    /* 0077ba96: push 0x9784ac */ { u32 v = 0x9784acu; r_esp -= 4; W32(r_esp, v); }
    /* 0077ba9b: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x77baa0u); f_00816cb8();
    /* 0077baa0: mov eax, dword ptr [0xaab204] */ r_eax = R32((u32)(0xaab204u));
    /* 0077baa5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077baa7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077baaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077baab: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x77bab0u); f_00816684();
    /* 0077bab0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bab3: ret  */ FN_RET(0x0077ba70); r_esp += 4; return;
}

void f_0077bab4(void) /* sub_77BAB4 */
{
    FN_ENTER(0x0077bab4);
    /* 0077bab4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077bab5: call 0x77b950 */ r_esp -= 4; W32(r_esp, 0x77babau); f_0077b950();
    /* 0077baba: mov esi, eax */ r_esi = r_eax;
    /* 0077babc: mov eax, 0x1948b0fd */ r_eax = 0x1948b0fdu;
    /* 0077bac1: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077bac3: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0077bac6: mov eax, 0x10624dd3 */ r_eax = 0x10624dd3u;
    /* 0077bacb: mov ecx, edx */ r_ecx = r_edx;
    /* 0077bacd: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0077bad0: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bad2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077bad4: mov esi, ecx */ r_esi = r_ecx;
    /* 0077bad6: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0077bad9: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0077badc: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077bade: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077bae1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bae3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077bae5: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0077bae8: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0077baeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077baed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077baef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077baf1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077baf3: mov eax, ecx */ r_eax = r_ecx;
    /* 0077baf5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077baf6: ret  */ FN_RET(0x0077bab4); r_esp += 4; return;
}

void f_0077baf8(void) /* sub_77BAF8 */
{
    FN_ENTER(0x0077baf8);
    /* 0077baf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077baf9: fld dword ptr [0x97845c] */ FPUSH(R_F32((u32)(0x97845cu)));
    /* 0077baff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077bb02: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x77bb07u); f_007a61a4();
    /* 0077bb07: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077bb0a: jne 0x77bb15 */ if (!fZ) goto L_0077bb15;
L_0077bb0c:; BB(0x0077bb0c);
    /* 0077bb0c: fld dword ptr [0x978458] */ FPUSH(R_F32((u32)(0x978458u)));
    /* 0077bb12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0077bb15:; BB(0x0077bb15);
    /* 0077bb15: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0077bb18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bb19: ret  */ FN_RET(0x0077baf8); r_esp += 4; return;
}

void f_0077bb1c(void) /* sub_77BB1C */
{
    FN_ENTER(0x0077bb1c);
    /* 0077bb1c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bb1f: fld dword ptr [0x978454] */ FPUSH(R_F32((u32)(0x978454u)));
    /* 0077bb25: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077bb29: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x77bb2eu); f_007a61a4();
    /* 0077bb2e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bb31: je 0x77bb3b */ if (fZ) goto L_0077bb3b;
L_0077bb33:; BB(0x0077bb33);
    /* 0077bb33: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0077bb37: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bb3a: ret  */ FN_RET(0x0077bb1c); r_esp += 4; return;
L_0077bb3b:; BB(0x0077bb3b);
    /* 0077bb3b: call 0x77ba70 */ r_esp -= 4; W32(r_esp, 0x77bb40u); f_0077ba70();
    /* 0077bb40: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077bb45: call 0x789160 */ r_esp -= 4; W32(r_esp, 0x77bb4au); f_00789160();
    /* 0077bb4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bb4b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0077bb4e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0077bb51: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0077bb54: fadd dword ptr [eax*4 + 0x978448] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x978448u));
    /* 0077bb5b: fsubr dword ptr [0x978454] */ ST(0) = R_F32((u32)(0x978454u)) - ST(0);
    /* 0077bb61: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077bb65: jmp 0x77bb33 */ goto L_0077bb33;
}

void f_0077bb68(void) /* sub_77BB68 */
{
    FN_ENTER(0x0077bb68);
    /* 0077bb68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077bb69: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bb6c: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0077bb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077bb71: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x77bb76u); f_0083ace8();
    /* 0077bb76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bb77: movzx ebp, byte ptr [esp + 8] */ r_ebp = (u32)R8((u32)(r_esp+0x8u));
    /* 0077bb7c: movzx edx, byte ptr [esp + 9] */ r_edx = (u32)R8((u32)(r_esp+0x9u));
    /* 0077bb81: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bb83: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bb85: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 0077bb89: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bb8b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bb8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bb8f: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bb91: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bb93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bb95: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bb97: movzx ecx, byte ptr [esp + 0xa] */ r_ecx = (u32)R8((u32)(r_esp+0xau));
    /* 0077bb9c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077bb9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bba1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bba3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bba5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077bba7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bba9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077bbad: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 0077bbb0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bbb2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bbb4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bbb6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bbb8: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bbba: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bbbc: call 0x77bbfc */ r_esp -= 4; W32(r_esp, 0x77bbc1u); f_0077bbfc();
    /* 0077bbc1: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077bbc3: add eax, 0x1a5e0 */ {  u32 a = r_eax; u32 b = 0x1a5e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bbc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bbca: jge 0x77bbed */ if ((fS==fO)) goto L_0077bbed;
L_0077bbcc:; BB(0x0077bbcc);
    /* 0077bbcc: mov edx, eax */ r_edx = r_eax;
    /* 0077bbce: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077bbd0: cmp edx, 0xed4e00 */ {  u32 a = r_edx; u32 b = 0xed4e00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bbd6: jl 0x77bbe4 */ if ((fS!=fO)) goto L_0077bbe4;
L_0077bbd8:; BB(0x0077bbd8);
    /* 0077bbd8: add eax, 0xc5c100 */ {  u32 a = r_eax; u32 b = 0xc5c100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bbdd: cmp eax, 0xff12b200 */ {  u32 a = r_eax; u32 b = 0xff12b200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bbe2: jl 0x77bbd8 */ if ((fS!=fO)) goto L_0077bbd8;
L_0077bbe4:; BB(0x0077bbe4);
    /* 0077bbe4: add eax, 0x278d00 */ {  u32 a = r_eax; u32 b = 0x278d00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bbe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bbeb: jl 0x77bbe4 */ if ((fS!=fO)) goto L_0077bbe4;
L_0077bbed:; BB(0x0077bbed);
    /* 0077bbed: mov dword ptr [0xa9b1e8], eax */ W32((u32)(0xa9b1e8u), r_eax);
    /* 0077bbf2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bbf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077bbf6: ret  */ FN_RET(0x0077bb68); r_esp += 4; return;
}

void f_0077bbfc(void) /* sub_77BBFC */
{
    FN_ENTER(0x0077bbfc);
    /* 0077bbfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077bbfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077bbfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077bbff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077bc00: mov esi, eax */ r_esi = r_eax;
    /* 0077bc02: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 0077bc05: call 0x77bc60 */ r_esp -= 4; W32(r_esp, 0x77bc0au); f_0077bc60();
    /* 0077bc0a: mov ebp, eax */ r_ebp = r_eax;
    /* 0077bc0c: lea eax, [esi + 0xf] */ r_eax = (u32)(r_esi+0xfu);
    /* 0077bc0f: call 0x77bc60 */ r_esp -= 4; W32(r_esp, 0x77bc14u); f_0077bc60();
    /* 0077bc14: mov ebx, eax */ r_ebx = r_eax;
    /* 0077bc16: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bc18: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077bc1a: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0077bc1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc20: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc22: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc24: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc26: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077bc28: add esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077bc2b: mov eax, esi */ r_eax = r_esi;
    /* 0077bc2d: call 0x77bc60 */ r_esp -= 4; W32(r_esp, 0x77bc32u); f_0077bc60();
    /* 0077bc32: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077bc34: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077bc36: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0077bc39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc3b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc3f: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc41: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bc43: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0077bc46: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc48: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc4a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc4c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc4e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc50: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077bc52: mov eax, edx */ r_eax = r_edx;
    /* 0077bc54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bc55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bc56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077bc57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077bc58: ret  */ FN_RET(0x0077bbfc); r_esp += 4; return;
}

void f_0077bc60(void) /* sub_77BC60 */
{
    FN_ENTER(0x0077bc60);
    /* 0077bc60: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0077bc63: movsx eax, byte ptr [eax + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0077bc67: lea edx, [ecx + ecx - 0x60] */ r_edx = (u32)(r_ecx+r_ecx+0xffffffa0u);
    /* 0077bc6b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bc6d: lea edx, [edx + ecx - 0x30] */ r_edx = (u32)(r_edx+r_ecx+0xffffffd0u);
    /* 0077bc71: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bc73: lea eax, [eax + edx - 0x30] */ r_eax = (u32)(r_eax+r_edx+0xffffffd0u);
    /* 0077bc77: ret  */ FN_RET(0x0077bc60); r_esp += 4; return;
}

void f_0077bc78(void) /* sub_77BC78 */
{
    FN_ENTER(0x0077bc78);
    /* 0077bc78: mov eax, 0x1a5e00 */ r_eax = 0x1a5e00u;
    /* 0077bc7d: ret  */ FN_RET(0x0077bc78); r_esp += 4; return;
}

void f_0077bc80(void) /* sub_77BC80 */
{
    FN_ENTER(0x0077bc80);
    /* 0077bc80: mov dword ptr [0xa9b1ec], 0 */ W32((u32)(0xa9b1ecu), 0x0u);
    /* 0077bc8a: mov dword ptr [0xa9b1e8], 0x1a5e00 */ W32((u32)(0xa9b1e8u), 0x1a5e00u);
    /* 0077bc94: ret  */ FN_RET(0x0077bc80); r_esp += 4; return;
}

void f_0077bc98(void) /* sub_77BC98 */
{
    FN_ENTER(0x0077bc98);
    /* 0077bc98: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077bc9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bc9e: jl 0x77bca5 */ if ((fS!=fO)) goto L_0077bca5;
L_0077bca0:; BB(0x0077bca0);
    /* 0077bca0: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077bca3: jl 0x77bca8 */ if ((fS!=fO)) goto L_0077bca8;
L_0077bca5:; BB(0x0077bca5);
    /* 0077bca5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077bca7: ret  */ FN_RET(0x0077bc98); r_esp += 4; return;
L_0077bca8:; BB(0x0077bca8);
    /* 0077bca8: mov eax, dword ptr [eax*4 + 0x9f7e20] */ r_eax = R32((u32)(r_eax*4+0x9f7e20u));
    /* 0077bcaf: ret  */ FN_RET(0x0077bc98); r_esp += 4; return;
}

void f_0077bcb0(void) /* sub_77BCB0 */
{
    FN_ENTER(0x0077bcb0);
    /* 0077bcb0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077bcb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bcb6: jl 0x77bcbd */ if ((fS!=fO)) goto L_0077bcbd;
L_0077bcb8:; BB(0x0077bcb8);
    /* 0077bcb8: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077bcbb: jl 0x77bcc0 */ if ((fS!=fO)) goto L_0077bcc0;
L_0077bcbd:; BB(0x0077bcbd);
    /* 0077bcbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077bcbf: ret  */ FN_RET(0x0077bcb0); r_esp += 4; return;
L_0077bcc0:; BB(0x0077bcc0);
    /* 0077bcc0: mov eax, dword ptr [eax*4 + 0x9f7f00] */ r_eax = R32((u32)(r_eax*4+0x9f7f00u));
    /* 0077bcc7: ret  */ FN_RET(0x0077bcb0); r_esp += 4; return;
}

void f_0077bcc8(void) /* sub_77BCC8 */
{
    FN_ENTER(0x0077bcc8);
    /* 0077bcc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077bcc9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077bccd: call 0x77bf34 */ r_esp -= 4; W32(r_esp, 0x77bcd2u); f_0077bf34();
    /* 0077bcd2: mov eax, 1 */ r_eax = 0x1u;
    /* 0077bcd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bcd8: ret  */ FN_RET(0x0077bcc8); r_esp += 4; return;
}

void f_0077bcdc(void) /* sub_77BCDC */
{
    FN_ENTER(0x0077bcdc);
    /* 0077bcdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077bcdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077bcde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077bcdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077bce0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bce3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077bce7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077bce9: mov ebx, eax */ r_ebx = r_eax;
    /* 0077bceb: mov ebp, edx */ r_ebp = r_edx;
L_0077bced:; BB(0x0077bced);
    /* 0077bced: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bcef: jl 0x77bd1f */ if ((fS!=fO)) goto L_0077bd1f;
L_0077bcf1:; BB(0x0077bcf1);
    /* 0077bcf1: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bcf4: jge 0x77bd1f */ if ((fS==fO)) goto L_0077bd1f;
L_0077bcf6:; BB(0x0077bcf6);
    /* 0077bcf6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077bcfa: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bcfc: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77bd01u); f_0077be58();
    /* 0077bd01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd03: je 0x77bd1f */ if (fZ) goto L_0077bd1f;
L_0077bd05:; BB(0x0077bd05);
    /* 0077bd05: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0077bd07: test dword ptr [esp + 8], ecx */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd0b: je 0x77bd14 */ if (fZ) goto L_0077bd14;
L_0077bd0d:; BB(0x0077bd0d);
    /* 0077bd0d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0077bd12: jmp 0x77bd16 */ goto L_0077bd16;
L_0077bd14:; BB(0x0077bd14);
    /* 0077bd14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0077bd16:; BB(0x0077bd16);
    /* 0077bd16: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd19: je 0x77bdba */ if (fZ) goto L_0077bdba;
L_0077bd1f:; BB(0x0077bd1f);
    /* 0077bd1f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bd21: jl 0x77bdce */ if ((fS!=fO)) goto L_0077bdce;
L_0077bd27:; BB(0x0077bd27);
    /* 0077bd27: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bd2a: jl 0x77bd30 */ if ((fS!=fO)) goto L_0077bd30;
L_0077bd2c:; BB(0x0077bd2c);
    /* 0077bd2c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077bd2e: jmp 0x77bd37 */ goto L_0077bd37;
L_0077bd30:; BB(0x0077bd30);
    /* 0077bd30: mov edi, dword ptr [ebx*4 + 0x9f7f00] */ r_edi = R32((u32)(r_ebx*4+0x9f7f00u));
L_0077bd37:; BB(0x0077bd37);
    /* 0077bd37: mov esi, ebp */ r_esi = r_ebp;
L_0077bd39:; BB(0x0077bd39);
    /* 0077bd39: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0077bd3b: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077bd3d: jne 0x77bd59 */ if (!fZ) goto L_0077bd59;
L_0077bd3f:; BB(0x0077bd3f);
    /* 0077bd3f: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0077bd41: je 0x77bd55 */ if (fZ) goto L_0077bd55;
L_0077bd43:; BB(0x0077bd43);
    /* 0077bd43: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 0077bd46: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077bd49: jne 0x77bd59 */ if (!fZ) goto L_0077bd59;
L_0077bd4b:; BB(0x0077bd4b);
    /* 0077bd4b: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077bd4e: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077bd51: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0077bd53: jne 0x77bd39 */ if (!fZ) goto L_0077bd39;
L_0077bd55:; BB(0x0077bd55);
    /* 0077bd55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077bd57: jmp 0x77bd5e */ goto L_0077bd5e;
L_0077bd59:; BB(0x0077bd59);
    /* 0077bd59: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0077bd5b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0077bd5e:; BB(0x0077bd5e);
    /* 0077bd5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd60: jne 0x77bdba */ if (!fZ) goto L_0077bdba;
L_0077bd62:; BB(0x0077bd62);
    /* 0077bd62: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bd64: call 0x77bf34 */ r_esp -= 4; W32(r_esp, 0x77bd69u); f_0077bf34();
    /* 0077bd69: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd6c: je 0x77bdba */ if (fZ) goto L_0077bdba;
L_0077bd6e:; BB(0x0077bd6e);
    /* 0077bd6e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bd70: jl 0x77bdba */ if ((fS!=fO)) goto L_0077bdba;
L_0077bd72:; BB(0x0077bd72);
    /* 0077bd72: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bd75: jge 0x77bdba */ if ((fS==fO)) goto L_0077bdba;
L_0077bd77:; BB(0x0077bd77);
    /* 0077bd77: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0077bd7b: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bd7d: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77bd82u); f_0077be58();
    /* 0077bd82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd84: je 0x77bdba */ if (fZ) goto L_0077bdba;
L_0077bd86:; BB(0x0077bd86);
    /* 0077bd86: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077bd8a: or dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077bd8c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077bd8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077bd90: mov ecx, dword ptr [0x9784c0] */ r_ecx = R32((u32)(0x9784c0u));
L_0077bd96:; BB(0x0077bd96);
    /* 0077bd96: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bd98: jne 0x77bda5 */ if (!fZ) goto L_0077bda5;
L_0077bd9a:; BB(0x0077bd9a);
    /* 0077bd9a: mov eax, dword ptr [eax + 0x9784c4] */ r_eax = R32((u32)(r_eax+0x9784c4u));
    /* 0077bda0: call 0x77bddc */ r_esp -= 4; W32(r_esp, 0x77bda5u); f_0077bddc();
L_0077bda5:; BB(0x0077bda5);
    /* 0077bda5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077bda8: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0077bdab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bdad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077bdaf: mov ecx, dword ptr [eax + 0x9784c0] */ r_ecx = R32((u32)(r_eax+0x9784c0u));
    /* 0077bdb5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bdb8: jne 0x77bd96 */ if (!fZ) goto L_0077bd96;
L_0077bdba:; BB(0x0077bdba);
    /* 0077bdba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077bdbd: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bdc0: jl 0x77bced */ if ((fS!=fO)) goto L_0077bced;
L_0077bdc6:; BB(0x0077bdc6);
    /* 0077bdc6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bdc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bdca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077bdcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077bdcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077bdcd: ret  */ FN_RET(0x0077bcdc); r_esp += 4; return;
L_0077bdce:; BB(0x0077bdce);
    /* 0077bdce: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077bdd0: jmp 0x77bd37 */ goto L_0077bd37;
}

void f_0077bdd8(void) /* sub_77BDD8 */
{
    FN_ENTER(0x0077bdd8);
    /* 0077bdd8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077bddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077bddd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bde0: mov ebx, eax */ r_ebx = r_eax;
    /* 0077bde2: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bde4: call 0x77bf34 */ r_esp -= 4; W32(r_esp, 0x77bde9u); f_0077bf34();
    /* 0077bde9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bdec: je 0x77bdf7 */ if (fZ) goto L_0077bdf7;
L_0077bdee:; BB(0x0077bdee);
    /* 0077bdee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bdf0: jl 0x77bdf7 */ if ((fS!=fO)) goto L_0077bdf7;
L_0077bdf2:; BB(0x0077bdf2);
    /* 0077bdf2: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bdf5: jl 0x77bdfc */ if ((fS!=fO)) goto L_0077bdfc;
L_0077bdf7:; BB(0x0077bdf7);
    /* 0077bdf7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bdfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bdfb: ret  */ FN_RET(0x0077bdd8); r_esp += 4; return;
L_0077bdfc:; BB(0x0077bdfc);
    /* 0077bdfc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077be00: mov eax, ebx */ r_eax = r_ebx;
    /* 0077be02: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77be07u); f_0077be58();
    /* 0077be07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077be09: je 0x77bdf7 */ if (fZ) goto L_0077bdf7;
L_0077be0b:; BB(0x0077be0b);
    /* 0077be0b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077be0f: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0077be13: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077be15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077be17: mov eax, dword ptr [0x978560] */ r_eax = R32((u32)(0x978560u));
    /* 0077be1c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077be1e: mov esi, ebx */ r_esi = r_ebx;
    /* 0077be20: mov ebx, ecx */ r_ebx = r_ecx;
L_0077be22:; BB(0x0077be22);
    /* 0077be22: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077be24: jne 0x77be31 */ if (!fZ) goto L_0077be31;
L_0077be26:; BB(0x0077be26);
    /* 0077be26: mov eax, dword ptr [edx + 0x978564] */ r_eax = R32((u32)(r_edx+0x978564u));
    /* 0077be2c: call 0x77bddc */ r_esp -= 4; W32(r_esp, 0x77be31u); f_0077bddc();
L_0077be31:; BB(0x0077be31);
    /* 0077be31: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077be34: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0077be37: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077be39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077be3b: mov eax, dword ptr [edx + 0x978560] */ r_eax = R32((u32)(r_edx+0x978560u));
    /* 0077be41: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077be44: jne 0x77be22 */ if (!fZ) goto L_0077be22;
L_0077be46:; BB(0x0077be46);
    /* 0077be46: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0077be4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077be4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077be4e: ret  */ FN_RET(0x0077bdd8); r_esp += 4; return;
}

void f_0077bddc(void) /* sub_77BDDC */
{
    FN_ENTER(0x0077bddc);
    /* 0077bddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077bddd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bde0: mov ebx, eax */ r_ebx = r_eax;
    /* 0077bde2: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bde4: call 0x77bf34 */ r_esp -= 4; W32(r_esp, 0x77bde9u); f_0077bf34();
    /* 0077bde9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bdec: je 0x77bdf7 */ if (fZ) goto L_0077bdf7;
L_0077bdee:; BB(0x0077bdee);
    /* 0077bdee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bdf0: jl 0x77bdf7 */ if ((fS!=fO)) goto L_0077bdf7;
L_0077bdf2:; BB(0x0077bdf2);
    /* 0077bdf2: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bdf5: jl 0x77bdfc */ if ((fS!=fO)) goto L_0077bdfc;
L_0077bdf7:; BB(0x0077bdf7);
    /* 0077bdf7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bdfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bdfb: ret  */ FN_RET(0x0077bddc); r_esp += 4; return;
L_0077bdfc:; BB(0x0077bdfc);
    /* 0077bdfc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077be00: mov eax, ebx */ r_eax = r_ebx;
    /* 0077be02: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77be07u); f_0077be58();
    /* 0077be07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077be09: je 0x77bdf7 */ if (fZ) goto L_0077bdf7;
L_0077be0b:; BB(0x0077be0b);
    /* 0077be0b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077be0f: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0077be13: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077be15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077be17: mov eax, dword ptr [0x978560] */ r_eax = R32((u32)(0x978560u));
    /* 0077be1c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077be1e: mov esi, ebx */ r_esi = r_ebx;
    /* 0077be20: mov ebx, ecx */ r_ebx = r_ecx;
L_0077be22:; BB(0x0077be22);
    /* 0077be22: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077be24: jne 0x77be31 */ if (!fZ) goto L_0077be31;
L_0077be26:; BB(0x0077be26);
    /* 0077be26: mov eax, dword ptr [edx + 0x978564] */ r_eax = R32((u32)(r_edx+0x978564u));
    /* 0077be2c: call 0x77bddc */ r_esp -= 4; W32(r_esp, 0x77be31u); f_0077bddc();
L_0077be31:; BB(0x0077be31);
    /* 0077be31: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077be34: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0077be37: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077be39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077be3b: mov eax, dword ptr [edx + 0x978560] */ r_eax = R32((u32)(r_edx+0x978560u));
    /* 0077be41: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077be44: jne 0x77be22 */ if (!fZ) goto L_0077be22;
L_0077be46:; BB(0x0077be46);
    /* 0077be46: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0077be4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077be4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077be4e: ret  */ FN_RET(0x0077bddc); r_esp += 4; return;
}

void f_0077be58(void) /* sub_77BE58 */
{
    FN_ENTER(0x0077be58);
    /* 0077be58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077be59: mov esi, edx */ r_esi = r_edx;
    /* 0077be5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077be5d: jl 0x77be76 */ if ((fS!=fO)) goto L_0077be76;
L_0077be5f:; BB(0x0077be5f);
    /* 0077be5f: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077be62: jge 0x77be76 */ if ((fS==fO)) goto L_0077be76;
L_0077be64:; BB(0x0077be64);
    /* 0077be64: mov edx, eax */ r_edx = r_eax;
    /* 0077be66: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0077be69: shr edx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0077be6c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077be6e: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0077be71: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077be74: jl 0x77be7a */ if ((fS!=fO)) goto L_0077be7a;
L_0077be76:; BB(0x0077be76);
    /* 0077be76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077be78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077be79: ret  */ FN_RET(0x0077be58); r_esp += 4; return;
L_0077be7a:; BB(0x0077be7a);
    /* 0077be7a: mov ecx, eax */ r_ecx = r_eax;
    /* 0077be7c: mov eax, 1 */ r_eax = 0x1u;
    /* 0077be81: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0077be83: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077be85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077be87: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0077be89: mov esi, dword ptr [0xa95e44] */ r_esi = R32((u32)(0xa95e44u));
    /* 0077be8f: lea eax, [edx + esi + 0xba94] */ r_eax = (u32)(r_edx+r_esi+0xba94u);
    /* 0077be96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077be97: ret  */ FN_RET(0x0077be58); r_esp += 4; return;
}

void f_0077be98(void) /* sub_77BE98 */
{
    FN_ENTER(0x0077be98);
    /* 0077be98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077be99: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077be9c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077bea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bea2: jl 0x77bf28 */ if ((fS!=fO)) goto L_0077bf28;
L_0077bea8:; BB(0x0077bea8);
    /* 0077bea8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077beab: jl 0x77beb2 */ if ((fS!=fO)) goto L_0077beb2;
L_0077bead:; BB(0x0077bead);
    /* 0077bead: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077beb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077beb1: ret  */ FN_RET(0x0077be98); r_esp += 4; return;
L_0077beb2:; BB(0x0077beb2);
    /* 0077beb2: mov ebx, dword ptr [eax*4 + 0x978690] */ r_ebx = R32((u32)(r_eax*4+0x978690u));
    /* 0077beb9: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bebb: call 0x77bf34 */ r_esp -= 4; W32(r_esp, 0x77bec0u); f_0077bf34();
    /* 0077bec0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bec3: je 0x77bf28 */ if (fZ) goto L_0077bf28;
L_0077bec5:; BB(0x0077bec5);
    /* 0077bec5: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bec7: call 0x77bf34 */ r_esp -= 4; W32(r_esp, 0x77beccu); f_0077bf34();
    /* 0077becc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077becf: je 0x77bf28 */ if (fZ) goto L_0077bf28;
L_0077bed1:; BB(0x0077bed1);
    /* 0077bed1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bed3: jl 0x77bf28 */ if ((fS!=fO)) goto L_0077bf28;
L_0077bed5:; BB(0x0077bed5);
    /* 0077bed5: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bed8: jge 0x77bf28 */ if ((fS==fO)) goto L_0077bf28;
L_0077beda:; BB(0x0077beda);
    /* 0077beda: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077bede: mov eax, ebx */ r_eax = r_ebx;
    /* 0077bee0: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77bee5u); f_0077be58();
    /* 0077bee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bee7: je 0x77bf28 */ if (fZ) goto L_0077bf28;
L_0077bee9:; BB(0x0077bee9);
    /* 0077bee9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077beed: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0077bef1: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077bef3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077bef5: mov eax, dword ptr [0x978600] */ r_eax = R32((u32)(0x978600u));
    /* 0077befa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077befc: mov esi, ebx */ r_esi = r_ebx;
    /* 0077befe: mov ebx, ecx */ r_ebx = r_ecx;
L_0077bf00:; BB(0x0077bf00);
    /* 0077bf00: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bf02: jne 0x77bf0f */ if (!fZ) goto L_0077bf0f;
L_0077bf04:; BB(0x0077bf04);
    /* 0077bf04: mov eax, dword ptr [edx + 0x978604] */ r_eax = R32((u32)(r_edx+0x978604u));
    /* 0077bf0a: call 0x77bddc */ r_esp -= 4; W32(r_esp, 0x77bf0fu); f_0077bddc();
L_0077bf0f:; BB(0x0077bf0f);
    /* 0077bf0f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077bf12: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0077bf15: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bf17: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077bf19: mov eax, dword ptr [edx + 0x978600] */ r_eax = R32((u32)(r_edx+0x978600u));
    /* 0077bf1f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bf22: jne 0x77bf00 */ if (!fZ) goto L_0077bf00;
L_0077bf24:; BB(0x0077bf24);
    /* 0077bf24: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0077bf28:; BB(0x0077bf28);
    /* 0077bf28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bf2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bf2c: ret  */ FN_RET(0x0077be98); r_esp += 4; return;
}

void f_0077bf30(void) /* sub_77BF30 */
{
    FN_ENTER(0x0077bf30);
    /* 0077bf30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077bf34: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bf37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bf39: jl 0x77bf40 */ if ((fS!=fO)) goto L_0077bf40;
L_0077bf3b:; BB(0x0077bf3b);
    /* 0077bf3b: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bf3e: jl 0x77bf46 */ if ((fS!=fO)) goto L_0077bf46;
L_0077bf40:; BB(0x0077bf40);
    /* 0077bf40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077bf42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bf45: ret  */ FN_RET(0x0077bf30); r_esp += 4; return;
L_0077bf46:; BB(0x0077bf46);
    /* 0077bf46: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077bf4a: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77bf4fu); f_0077be58();
    /* 0077bf4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bf51: je 0x77bf40 */ if (fZ) goto L_0077bf40;
L_0077bf53:; BB(0x0077bf53);
    /* 0077bf53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0077bf55: test dword ptr [esp + 8], edx */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bf59: mov eax, 0 */ r_eax = 0x0u;
    /* 0077bf5e: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0077bf61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bf64: ret  */ FN_RET(0x0077bf30); r_esp += 4; return;
}

void f_0077bf34(void) /* sub_77BF34 */
{
    FN_ENTER(0x0077bf34);
    /* 0077bf34: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bf37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077bf39: jl 0x77bf40 */ if ((fS!=fO)) goto L_0077bf40;
L_0077bf3b:; BB(0x0077bf3b);
    /* 0077bf3b: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077bf3e: jl 0x77bf46 */ if ((fS!=fO)) goto L_0077bf46;
L_0077bf40:; BB(0x0077bf40);
    /* 0077bf40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077bf42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bf45: ret  */ FN_RET(0x0077bf34); r_esp += 4; return;
L_0077bf46:; BB(0x0077bf46);
    /* 0077bf46: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077bf4a: call 0x77be58 */ r_esp -= 4; W32(r_esp, 0x77bf4fu); f_0077be58();
    /* 0077bf4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bf51: je 0x77bf40 */ if (fZ) goto L_0077bf40;
L_0077bf53:; BB(0x0077bf53);
    /* 0077bf53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0077bf55: test dword ptr [esp + 8], edx */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077bf59: mov eax, 0 */ r_eax = 0x0u;
    /* 0077bf5e: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0077bf61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077bf64: ret  */ FN_RET(0x0077bf34); r_esp += 4; return;
}

void f_0077bf68(void) /* sub_77BF68 */
{
    FN_ENTER(0x0077bf68);
    /* 0077bf68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077bf69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077bf6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077bf6d: call 0x77bf8c */ r_esp -= 4; W32(r_esp, 0x77bf72u); f_0077bf8c();
    /* 0077bf72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077bf76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077bf78: jne 0x77bf7e */ if (!fZ) goto L_0077bf7e;
L_0077bf7a:; BB(0x0077bf7a);
    /* 0077bf7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bf7b: ret 4 */ FN_RET(0x0077bf68); r_esp += 8; return;
L_0077bf7e:; BB(0x0077bf7e);
    /* 0077bf7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077bf7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x77bf84u); f_005c2f74();
    /* 0077bf84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bf85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077bf86: ret 4 */ FN_RET(0x0077bf68); r_esp += 8; return;
}

void f_0077bf8c(void) /* sub_77BF8C */
{
    FN_ENTER(0x0077bf8c);
    /* 0077bf8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077bf8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0077bf8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077bf91: push 0x8f41ac */ { u32 v = 0x8f41acu; r_esp -= 4; W32(r_esp, v); }
    /* 0077bf96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077bf9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077bf9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077bfa4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077bfa7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077bfaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077bfad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077bfb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077bfb3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077bfb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077bfbd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077bfc0: mov dword ptr [ecx], 0xb44398 */ W32((u32)(r_ecx), 0xb44398u);
    /* 0077bfc6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x77bfcbu); f_007b9c8c();
    /* 0077bfcb: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077bfce: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x77bfd3u); f_007b4e84();
    /* 0077bfd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077bfd4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077bfdb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077bfde: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x77bfe3u); f_007b4aec();
    /* 0077bfe3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077bfe6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077bfed: mov esp, ebp */ r_esp = r_ebp;
    /* 0077bfef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077bff0: ret  */ FN_RET(0x0077bf8c); r_esp += 4; return;
}

void f_0077bff4(void)
{
    FN_ENTER(0x0077bff4);
    /* 0077bff4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077bff5: mov ebp, esp */ r_ebp = r_esp;
    /* 0077bff7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077bff9: push 0x8f41d4 */ { u32 v = 0x8f41d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077bffe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c005: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c00c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c00f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c012: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077c015: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077c018: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077c01b: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c020: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077c027: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77c02cu); f_005caba4();
    /* 0077c02c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c02d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0077c030: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c032: je 0x77c06b */ if (fZ) goto L_0077c06b;
L_0077c034:; BB(0x0077c034);
    /* 0077c034: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077c03b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077c042: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c045: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c04b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c04e: call 0x77c070 */ r_esp -= 4; W32(r_esp, 0x77c053u); f_0077c070();
    /* 0077c053: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c056: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0077c05d:; BB(0x0077c05d);
    /* 0077c05d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c060: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c067: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c06a: ret  */ FN_RET(0x0077bff4); r_esp += 4; return;
L_0077c06b:; BB(0x0077c06b);
    /* 0077c06b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077c06d: jmp 0x77c05d */ goto L_0077c05d;
}

