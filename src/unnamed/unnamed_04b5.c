#include "protos.h"

void f_004b5150(void) /* sub_4B5150 */
{
    FN_ENTER(0x004b5150);
    /* 004b5150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5151: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5152: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5155: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b5157: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004b515b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b515d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b515e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b5160: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5162: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b5168u); call_ind(t); }
    /* 004b5168: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b516b: je 0x4b51b8 */ if (fZ) goto L_004b51b8;
L_004b516d:; BB(0x004b516d);
    /* 004b516d: cmp ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5170: je 0x4b51b8 */ if (fZ) goto L_004b51b8;
L_004b5172:; BB(0x004b5172);
    /* 004b5172: cmp ebp, 0x41 */ {  u32 a = r_ebp; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5175: je 0x4b51b8 */ if (fZ) goto L_004b51b8;
L_004b5177:; BB(0x004b5177);
    /* 004b5177: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b517a: je 0x4b51b8 */ if (fZ) goto L_004b51b8;
L_004b517c:; BB(0x004b517c);
    /* 004b517c: cmp ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b517f: je 0x4b51b8 */ if (fZ) goto L_004b51b8;
L_004b5181:; BB(0x004b5181);
    /* 004b5181: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5184: je 0x4b51b8 */ if (fZ) goto L_004b51b8;
L_004b5186:; BB(0x004b5186);
    /* 004b5186: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b518a: mov edx, dword ptr [ebx + 0x6bc] */ r_edx = R32((u32)(r_ebx+0x6bcu));
    /* 004b5190: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b5194: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004b5199: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b519e: mov word ptr [esp + 4], bp */ W16((u32)(r_esp+0x4u), (u16)r_ebp);
    /* 004b51a3: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 004b51a8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b51ab: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b51b0u); f_008003e0();
    /* 004b51b0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b51b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b51b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b51b5: ret 4 */ FN_RET(0x004b5150); r_esp += 8; return;
L_004b51b8:; BB(0x004b51b8);
    /* 004b51b8: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b51bc: mov edx, dword ptr [ebx + 0x6bc] */ r_edx = R32((u32)(r_ebx+0x6bcu));
    /* 004b51c2: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 004b51c9: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 004b51ce: mov word ptr [esp + 0xc], bp */ W16((u32)(r_esp+0xcu), (u16)r_ebp);
    /* 004b51d3: mov byte ptr [esp + 8], 0xaa */ W8((u32)(r_esp+0x8u), 0xaau);
    /* 004b51d8: mov byte ptr [esp + 9], 3 */ W8((u32)(r_esp+0x9u), 0x3u);
    /* 004b51dd: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 004b51e2: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 004b51e6: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004b51ea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b51efu); f_008003e0();
    /* 004b51ef: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b51f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b51f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b51f4: ret 4 */ FN_RET(0x004b5150); r_esp += 8; return;
}

void f_004b51f8(void) /* sub_4B51F8 */
{
    FN_ENTER(0x004b51f8);
    /* 004b51f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b51f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004b51fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b51fd: push 0x8d0dc4 */ { u32 v = 0x8d0dc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5202: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b5208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5209: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b5210: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5213: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b5216: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004b5219: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004b521c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004b521f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b5222: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b5225: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5228: je 0x4b552e */ if (fZ) goto L_004b552e;
L_004b522e:; BB(0x004b522e);
    /* 004b522e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5231: je 0x4b5386 */ if (fZ) goto L_004b5386;
L_004b5237:; BB(0x004b5237);
    /* 004b5237: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b523a: je 0x4b53ac */ if (fZ) goto L_004b53ac;
L_004b5240:; BB(0x004b5240);
    /* 004b5240: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5243: je 0x4b5386 */ if (fZ) goto L_004b5386;
L_004b5249:; BB(0x004b5249);
    /* 004b5249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b524b: je 0x4b52e4 */ if (fZ) goto L_004b52e4;
L_004b5251:; BB(0x004b5251);
    /* 004b5251: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5254: jne 0x4b5386 */ if (!fZ) goto L_004b5386;
L_004b525a:; BB(0x004b525a);
    /* 004b525a: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 004b5260: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5262: je 0x4b52da */ if (fZ) goto L_004b52da;
L_004b5264:; BB(0x004b5264);
    /* 004b5264: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5267: je 0x4b539f */ if (fZ) goto L_004b539f;
L_004b526d:; BB(0x004b526d);
    /* 004b526d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b5272u); f_007751b0();
    /* 004b5272: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5275: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 004b5278: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004b527b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b527d: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 004b5280: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 004b5284: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b5289: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b528e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004b5291: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004b5294: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b5297: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004b529a: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b529d: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b52a2u); f_00520f68();
    /* 004b52a2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b52a4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b52a6: jle 0x4b5386 */ if ((fZ||fS!=fO)) goto L_004b5386;
L_004b52ac:; BB(0x004b52ac);
    /* 004b52ac: mov eax, dword ptr [esi*4 + 0xaad720] */ r_eax = R32((u32)(r_esi*4+0xaad720u));
    /* 004b52b3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004b52b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b52b7: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4b52bcu); f_00520f3c();
    /* 004b52bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b52bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b52bf: jne 0x4b551d */ if (!fZ) goto L_004b551d;
L_004b52c5:; BB(0x004b52c5);
    /* 004b52c5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b52c8: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b52ca: jl 0x4b52ce */ if ((fS!=fO)) goto L_004b52ce;
L_004b52cc:; BB(0x004b52cc);
    /* 004b52cc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b52ce:; BB(0x004b52ce);
    /* 004b52ce: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b52d1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b52d3: jl 0x4b52ac */ if ((fS!=fO)) goto L_004b52ac;
L_004b52d5:; BB(0x004b52d5);
    /* 004b52d5: jmp 0x4b5386 */ goto L_004b5386;
L_004b52da:; BB(0x004b52da);
    /* 004b52da: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b52dfu); f_00520f68();
    /* 004b52df: jmp 0x4b5386 */ goto L_004b5386;
L_004b52e4:; BB(0x004b52e4);
    /* 004b52e4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b52e9u); f_007aa094();
    /* 004b52e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b52ec: mov edx, dword ptr [eax + 0x734] */ r_edx = R32((u32)(r_eax+0x734u));
    /* 004b52f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b52f4: jle 0x4b5386 */ if ((fZ||fS!=fO)) goto L_004b5386;
L_004b52fa:; BB(0x004b52fa);
    /* 004b52fa: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b5300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5302: je 0x4b5312 */ if (fZ) goto L_004b5312;
L_004b5304:; BB(0x004b5304);
    /* 004b5304: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5307: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b530a: mov dword ptr [edx + 0x730], eax */ W32((u32)(r_edx+0x730u), r_eax);
    /* 004b5310: jmp 0x4b5386 */ goto L_004b5386;
L_004b5312:; BB(0x004b5312);
    /* 004b5312: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5315: mov edx, dword ptr [eax + 0x734] */ r_edx = R32((u32)(r_eax+0x734u));
    /* 004b531b: mov dword ptr [eax + 0x730], 0x14 */ W32((u32)(r_eax+0x730u), 0x14u);
    /* 004b5325: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5328: mov dword ptr [eax + 0x734], edx */ W32((u32)(r_eax+0x734u), r_edx);
    /* 004b532e: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004b5331: movzx ecx, word ptr [eax + edx*2 + 0x7d4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x7d4u));
    /* 004b5339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b533a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4b533fu); f_0068d5a8();
    /* 004b533f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004b5342: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5347: je 0x4b5386 */ if (fZ) goto L_004b5386;
L_004b5349:; BB(0x004b5349);
    /* 004b5349: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 004b5350: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5352: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b5357u); f_005caba4();
    /* 004b5357: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b5358: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004b535b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b535d: je 0x4b5386 */ if (fZ) goto L_004b5386;
L_004b535f:; BB(0x004b535f);
    /* 004b535f: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 004b5366: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b536d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5370: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5373: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5376: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5377: mov ecx, eax */ r_ecx = r_eax;
    /* 004b5379: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b537a: call 0x4bd260 */ r_esp -= 4; W32(r_esp, 0x4b537fu); f_004bd260();
    /* 004b537f: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b51f8); r_esp += 8; return;
L_004b539f:; BB(0x004b539f);
    /* 004b539f: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b53a5: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b53aau); f_00521388();
    /* 004b53aa: jmp 0x4b5386 */ goto L_004b5386;
L_004b53ac:; BB(0x004b53ac);
    /* 004b53ac: mov eax, ecx */ r_eax = r_ecx;
    /* 004b53ae: mov edx, dword ptr [eax + 0x734] */ r_edx = R32((u32)(r_eax+0x734u));
    /* 004b53b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b53b6: jne 0x4b5386 */ if (!fZ) goto L_004b5386;
L_004b53b8:; BB(0x004b53b8);
    /* 004b53b8: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b53be: mov ebx, dword ptr [eax + 0x6bc] */ r_ebx = R32((u32)(r_eax+0x6bcu));
    /* 004b53c4: mov eax, dword ptr [edx*4 + 0x9abc68] */ r_eax = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b53cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b53ce: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b53d1: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b53d7: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b53db: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b53de: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b53e1: ja 0x4b550f */ if ((!fC&&!fZ)) goto L_004b550f;
L_004b53e7:; BB(0x004b53e7);
    /* 004b53e7: mov edx, dword ptr [edx*4 + 0x9054a0] */ r_edx = R32((u32)(r_edx*4+0x9054a0u));
    /* 004b53ee: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
L_004b551d:; BB(0x004b551d);
    /* 004b551d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5520: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5524: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b5529u); f_00521388();
    /* 004b5529: jmp 0x4b5386 */ goto L_004b5386;
L_004b552e:; BB(0x004b552e);
    /* 004b552e: mov esi, ecx */ r_esi = r_ecx;
    /* 004b5530: mov edx, dword ptr [0xa477ec] */ r_edx = R32((u32)(0xa477ecu));
    /* 004b5536: mov dword ptr [esi + 0x6f8], 0 */ W32((u32)(r_esi+0x6f8u), 0x0u);
    /* 004b5540: mov eax, 1 */ r_eax = 0x1u;
    /* 004b5545: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004b554c: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004b554f: mov ecx, dword ptr [0xa477f0] */ r_ecx = R32((u32)(0xa477f0u));
    /* 004b5555: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004b5558: mov ebx, dword ptr [0xa477f4] */ r_ebx = R32((u32)(0xa477f4u));
    /* 004b555e: mov dword ptr [esi + 0x64], 0 */ W32((u32)(r_esi+0x64u), 0x0u);
    /* 004b5565: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004b5568: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b556a: mov dword ptr [esi + 0x730], 0x14 */ W32((u32)(r_esi+0x730u), 0x14u);
    /* 004b5574: mov dword ptr [esi + 0x734], 0xc */ W32((u32)(r_esi+0x734u), 0xcu);
    /* 004b557e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b5580:; BB(0x004b5580);
    /* 004b5580: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5583: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5586: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5587: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4b558cu); f_0068d5a8();
    /* 004b558c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b558d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b558f: je 0x4b55b0 */ if (fZ) goto L_004b55b0;
L_004b5591:; BB(0x004b5591);
    /* 004b5591: mov ecx, eax */ r_ecx = r_eax;
    /* 004b5593: call 0x69479c */ r_esp -= 4; W32(r_esp, 0x4b5598u); f_0069479c();
    /* 004b5598: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b559b: jne 0x4b55b0 */ if (!fZ) goto L_004b55b0;
L_004b559d:; BB(0x004b559d);
    /* 004b559d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b55a0: mov eax, esi */ r_eax = r_esi;
    /* 004b55a2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b55a5: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 004b55a8: mov word ptr [edx + ecx*2 + 0x7d4], bx */ W16((u32)(r_edx+r_ecx*2+0x7d4u), (u16)r_ebx);
L_004b55b0:; BB(0x004b55b0);
    /* 004b55b0: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 004b55b3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b55b6: jne 0x4b5580 */ if (!fZ) goto L_004b5580;
L_004b55b8:; BB(0x004b55b8);
    /* 004b55b8: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b53f0(void)
{
    FN_ENTER(0x004b53f0);
    goto L_004b53f0;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b53f0); r_esp += 8; return;
L_004b53cb:; BB(0x004b53cb);
    /* 004b53cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b53ce: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b53d1: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b53d7: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b53db: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b53de: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b53e1: ja 0x4b550f */ if ((!fC&&!fZ)) goto L_004b550f;
L_004b53e7:; BB(0x004b53e7);
    /* 004b53e7: mov edx, dword ptr [edx*4 + 0x9054a0] */ r_edx = R32((u32)(r_edx*4+0x9054a0u));
    /* 004b53ee: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b53f0:; BB(0x004b53f0);
    /* 004b53f0: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004b53f5: jmp 0x4b53cb */ goto L_004b53cb;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b53f7(void)
{
    FN_ENTER(0x004b53f7);
    goto L_004b53f7;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b53f7); r_esp += 8; return;
L_004b53f7:; BB(0x004b53f7);
    /* 004b53f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b53fa: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b5400: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5402: jne 0x4b540e */ if (!fZ) goto L_004b540e;
L_004b5404:; BB(0x004b5404);
    /* 004b5404: mov ecx, 0x15 */ r_ecx = 0x15u;
    /* 004b5409: jmp 0x4b550f */ goto L_004b550f;
L_004b540e:; BB(0x004b540e);
    /* 004b540e: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 004b5413: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b5418(void)
{
    FN_ENTER(0x004b5418);
    goto L_004b5418;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b5418); r_esp += 8; return;
L_004b5418:; BB(0x004b5418);
    /* 004b5418: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b541b: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b5421: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5423: jne 0x4b542f */ if (!fZ) goto L_004b542f;
L_004b5425:; BB(0x004b5425);
    /* 004b5425: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 004b542a: jmp 0x4b550f */ goto L_004b550f;
L_004b542f:; BB(0x004b542f);
    /* 004b542f: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 004b5434: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b5439(void)
{
    FN_ENTER(0x004b5439);
    goto L_004b5439;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b5439); r_esp += 8; return;
L_004b5439:; BB(0x004b5439);
    /* 004b5439: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b543c: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b5442: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5444: jne 0x4b5450 */ if (!fZ) goto L_004b5450;
L_004b5446:; BB(0x004b5446);
    /* 004b5446: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 004b544b: jmp 0x4b550f */ goto L_004b550f;
L_004b5450:; BB(0x004b5450);
    /* 004b5450: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 004b5455: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b545a(void)
{
    FN_ENTER(0x004b545a);
    goto L_004b545a;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b545a); r_esp += 8; return;
L_004b545a:; BB(0x004b545a);
    /* 004b545a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b545d: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b5463: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5465: jne 0x4b5471 */ if (!fZ) goto L_004b5471;
L_004b5467:; BB(0x004b5467);
    /* 004b5467: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 004b546c: jmp 0x4b550f */ goto L_004b550f;
L_004b5471:; BB(0x004b5471);
    /* 004b5471: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 004b5476: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b547b(void)
{
    FN_ENTER(0x004b547b);
    goto L_004b547b;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b547b); r_esp += 8; return;
L_004b547b:; BB(0x004b547b);
    /* 004b547b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b547e: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b5484: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5486: jne 0x4b5492 */ if (!fZ) goto L_004b5492;
L_004b5488:; BB(0x004b5488);
    /* 004b5488: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004b548d: jmp 0x4b550f */ goto L_004b550f;
L_004b5492:; BB(0x004b5492);
    /* 004b5492: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004b5497: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b5499(void)
{
    FN_ENTER(0x004b5499);
    goto L_004b5499;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b5499); r_esp += 8; return;
L_004b5499:; BB(0x004b5499);
    /* 004b5499: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b549c: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b54a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b54a4: jne 0x4b54ad */ if (!fZ) goto L_004b54ad;
L_004b54a6:; BB(0x004b54a6);
    /* 004b54a6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004b54ab: jmp 0x4b550f */ goto L_004b550f;
L_004b54ad:; BB(0x004b54ad);
    /* 004b54ad: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 004b54b2: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b54b4(void)
{
    FN_ENTER(0x004b54b4);
    goto L_004b54b4;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b54b4); r_esp += 8; return;
L_004b54b4:; BB(0x004b54b4);
    /* 004b54b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b54b7: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b54bcu); f_00520bf4();
    /* 004b54bc: fcomp dword ptr [0x906d90] */ fx_compare(ST(0), R_F32((u32)(0x906d90u))); FPOP();
    /* 004b54c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b54c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b54c5: jbe 0x4b54ce */ if ((fC||fZ)) goto L_004b54ce;
L_004b54c7:; BB(0x004b54c7);
    /* 004b54c7: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 004b54cc: jmp 0x4b550f */ goto L_004b550f;
L_004b54ce:; BB(0x004b54ce);
    /* 004b54ce: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 004b54d3: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b54d5(void)
{
    FN_ENTER(0x004b54d5);
    goto L_004b54d5;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b54d5); r_esp += 8; return;
L_004b54d5:; BB(0x004b54d5);
    /* 004b54d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b54d8: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b54de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b54e0: jne 0x4b54e9 */ if (!fZ) goto L_004b54e9;
L_004b54e2:; BB(0x004b54e2);
    /* 004b54e2: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004b54e7: jmp 0x4b550f */ goto L_004b550f;
L_004b54e9:; BB(0x004b54e9);
    /* 004b54e9: mov ecx, 9 */ r_ecx = 0x9u;
    /* 004b54ee: jmp 0x4b550f */ goto L_004b550f;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b54f0(void)
{
    FN_ENTER(0x004b54f0);
    goto L_004b54f0;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b54f0); r_esp += 8; return;
L_004b54f0:; BB(0x004b54f0);
    /* 004b54f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b54f3: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b54f8u); f_00520bf4();
    /* 004b54f8: fcomp dword ptr [0x906d90] */ fx_compare(ST(0), R_F32((u32)(0x906d90u))); FPOP();
    /* 004b54fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b5500: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b5501: jbe 0x4b550a */ if ((fC||fZ)) goto L_004b550a;
L_004b5503:; BB(0x004b5503);
    /* 004b5503: mov ecx, 8 */ r_ecx = 0x8u;
    /* 004b5508: jmp 0x4b550f */ goto L_004b550f;
L_004b550a:; BB(0x004b550a);
    /* 004b550a: mov ecx, 6 */ r_ecx = 0x6u;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b550f(void)
{
    FN_ENTER(0x004b550f);
    goto L_004b550f;
L_004b5386:; BB(0x004b5386);
    /* 004b5386: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b5389: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b538c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b538f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b5392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b5399: mov esp, ebp */ r_esp = r_ebp;
    /* 004b539b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b539c: ret 4 */ FN_RET(0x004b550f); r_esp += 8; return;
L_004b550f:; BB(0x004b550f);
    /* 004b550f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5510: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5513: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5518u); f_004b5150();
    /* 004b5518: jmp 0x4b5386 */ goto L_004b5386;
}

void f_004b55c0(void) /* sub_4B55C0 */
{
    FN_ENTER(0x004b55c0);
    /* 004b55c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b55c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b55c2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b55c4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b55c8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b55cb: je 0x4b5759 */ if (fZ) goto L_004b5759;
L_004b55d1:; BB(0x004b55d1);
    /* 004b55d1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b55d4: je 0x4b5759 */ if (fZ) goto L_004b5759;
L_004b55da:; BB(0x004b55da);
    /* 004b55da: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b55dd: je 0x4b5759 */ if (fZ) goto L_004b5759;
L_004b55e3:; BB(0x004b55e3);
    /* 004b55e3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b55e6: je 0x4b5759 */ if (fZ) goto L_004b5759;
L_004b55ec:; BB(0x004b55ec);
    /* 004b55ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b55ee: jne 0x4b5759 */ if (!fZ) goto L_004b5759;
L_004b55f4:; BB(0x004b55f4);
    /* 004b55f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b55f6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b55fbu); f_007aa094();
    /* 004b55fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b55fd: mov esi, eax */ r_esi = r_eax;
L_004b55ff:; BB(0x004b55ff);
    /* 004b55ff: mov ecx, dword ptr [ebx + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x6e4u));
    /* 004b5606: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b5609: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b560b: je 0x4b5612 */ if (fZ) goto L_004b5612;
L_004b560d:; BB(0x004b560d);
    /* 004b560d: call 0x4bd230 */ r_esp -= 4; W32(r_esp, 0x4b5612u); f_004bd230();
L_004b5612:; BB(0x004b5612);
    /* 004b5612: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5615: jl 0x4b55ff */ if ((fS!=fO)) goto L_004b55ff;
L_004b5617:; BB(0x004b5617);
    /* 004b5617: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b561d: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b5624: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b562a: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b562d: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b5633: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b5637: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b563a: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b563d: ja 0x4b5751 */ if ((!fC&&!fZ)) goto L_004b5751;
L_004b5643:; BB(0x004b5643);
    /* 004b5643: mov ecx, dword ptr [ecx*4 + 0x905540] */ r_ecx = R32((u32)(r_ecx*4+0x905540u));
    /* 004b564a: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
L_004b5759:; BB(0x004b5759);
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b55c0); r_esp += 8; return;
}

void f_004b564c(void)
{
    FN_ENTER(0x004b564c);
    goto L_004b564c;
L_004b562a:; BB(0x004b562a);
    /* 004b562a: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b562d: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b5633: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b5637: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b563a: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b563d: ja 0x4b5751 */ if ((!fC&&!fZ)) goto L_004b5751;
L_004b5643:; BB(0x004b5643);
    /* 004b5643: mov ecx, dword ptr [ecx*4 + 0x905540] */ r_ecx = R32((u32)(r_ecx*4+0x905540u));
    /* 004b564a: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b564c:; BB(0x004b564c);
    /* 004b564c: mov eax, 1 */ r_eax = 0x1u;
    /* 004b5651: jmp 0x4b562a */ goto L_004b562a;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b564c); r_esp += 8; return;
}

void f_004b5653(void)
{
    FN_ENTER(0x004b5653);
    /* 004b5653: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5659: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b565b: jne 0x4b5667 */ if (!fZ) goto L_004b5667;
L_004b565d:; BB(0x004b565d);
    /* 004b565d: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b5662: jmp 0x4b5751 */ goto L_004b5751;
L_004b5667:; BB(0x004b5667);
    /* 004b5667: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b566c: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b5653); r_esp += 8; return;
}

void f_004b5671(void)
{
    FN_ENTER(0x004b5671);
    /* 004b5671: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5679: jne 0x4b5685 */ if (!fZ) goto L_004b5685;
L_004b567b:; BB(0x004b567b);
    /* 004b567b: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b5680: jmp 0x4b5751 */ goto L_004b5751;
L_004b5685:; BB(0x004b5685);
    /* 004b5685: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b568a: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b5671); r_esp += 8; return;
}

void f_004b568f(void)
{
    FN_ENTER(0x004b568f);
    /* 004b568f: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5697: jne 0x4b56a3 */ if (!fZ) goto L_004b56a3;
L_004b5699:; BB(0x004b5699);
    /* 004b5699: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b569e: jmp 0x4b5751 */ goto L_004b5751;
L_004b56a3:; BB(0x004b56a3);
    /* 004b56a3: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b56a8: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b568f); r_esp += 8; return;
}

void f_004b56ad(void)
{
    FN_ENTER(0x004b56ad);
    /* 004b56ad: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b56b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b56b5: jne 0x4b56c1 */ if (!fZ) goto L_004b56c1;
L_004b56b7:; BB(0x004b56b7);
    /* 004b56b7: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b56bc: jmp 0x4b5751 */ goto L_004b5751;
L_004b56c1:; BB(0x004b56c1);
    /* 004b56c1: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b56c6: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b56ad); r_esp += 8; return;
}

void f_004b56cb(void)
{
    FN_ENTER(0x004b56cb);
    /* 004b56cb: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b56d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b56d3: jne 0x4b56dc */ if (!fZ) goto L_004b56dc;
L_004b56d5:; BB(0x004b56d5);
    /* 004b56d5: mov eax, 4 */ r_eax = 0x4u;
    /* 004b56da: jmp 0x4b5751 */ goto L_004b5751;
L_004b56dc:; BB(0x004b56dc);
    /* 004b56dc: mov eax, 0xa */ r_eax = 0xau;
    /* 004b56e1: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b56cb); r_esp += 8; return;
}

void f_004b56e3(void)
{
    FN_ENTER(0x004b56e3);
    /* 004b56e3: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b56e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b56eb: jne 0x4b56f4 */ if (!fZ) goto L_004b56f4;
L_004b56ed:; BB(0x004b56ed);
    /* 004b56ed: mov eax, 3 */ r_eax = 0x3u;
    /* 004b56f2: jmp 0x4b5751 */ goto L_004b5751;
L_004b56f4:; BB(0x004b56f4);
    /* 004b56f4: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b56f9: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b56e3); r_esp += 8; return;
}

void f_004b56fb(void)
{
    FN_ENTER(0x004b56fb);
    /* 004b56fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b56fd: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b5702u); f_00520bf4();
    /* 004b5702: fcomp dword ptr [0x906d8c] */ fx_compare(ST(0), R_F32((u32)(0x906d8cu))); FPOP();
    /* 004b5708: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b570a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b570b: jbe 0x4b5714 */ if ((fC||fZ)) goto L_004b5714;
L_004b570d:; BB(0x004b570d);
    /* 004b570d: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b5712: jmp 0x4b5751 */ goto L_004b5751;
L_004b5714:; BB(0x004b5714);
    /* 004b5714: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b5719: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b56fb); r_esp += 8; return;
}

void f_004b571b(void)
{
    FN_ENTER(0x004b571b);
    /* 004b571b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5723: jne 0x4b572c */ if (!fZ) goto L_004b572c;
L_004b5725:; BB(0x004b5725);
    /* 004b5725: mov eax, 5 */ r_eax = 0x5u;
    /* 004b572a: jmp 0x4b5751 */ goto L_004b5751;
L_004b572c:; BB(0x004b572c);
    /* 004b572c: mov eax, 9 */ r_eax = 0x9u;
    /* 004b5731: jmp 0x4b5751 */ goto L_004b5751;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b571b); r_esp += 8; return;
}

void f_004b5733(void)
{
    FN_ENTER(0x004b5733);
    /* 004b5733: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5735: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b573au); f_00520bf4();
    /* 004b573a: fcomp dword ptr [0x906d8c] */ fx_compare(ST(0), R_F32((u32)(0x906d8cu))); FPOP();
    /* 004b5740: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b5742: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b5743: jbe 0x4b574c */ if ((fC||fZ)) goto L_004b574c;
L_004b5745:; BB(0x004b5745);
    /* 004b5745: mov eax, 8 */ r_eax = 0x8u;
    /* 004b574a: jmp 0x4b5751 */ goto L_004b5751;
L_004b574c:; BB(0x004b574c);
    /* 004b574c: mov eax, 6 */ r_eax = 0x6u;
L_004b5751:; BB(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b5733); r_esp += 8; return;
}

void f_004b5751(void)
{
    FN_ENTER(0x004b5751);
    /* 004b5751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5754: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5759u); f_004b5150();
    /* 004b5759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b575a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b575b: ret 4 */ FN_RET(0x004b5751); r_esp += 8; return;
}

void f_004b5760(void) /* sub_4B5760 */
{
    FN_ENTER(0x004b5760);
    /* 004b5760: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5761: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5762: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b5764: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b5768: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b576b: je 0x4b58f9 */ if (fZ) goto L_004b58f9;
L_004b5771:; BB(0x004b5771);
    /* 004b5771: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5774: je 0x4b58f9 */ if (fZ) goto L_004b58f9;
L_004b577a:; BB(0x004b577a);
    /* 004b577a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b577d: je 0x4b58f9 */ if (fZ) goto L_004b58f9;
L_004b5783:; BB(0x004b5783);
    /* 004b5783: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5786: je 0x4b58f9 */ if (fZ) goto L_004b58f9;
L_004b578c:; BB(0x004b578c);
    /* 004b578c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b578e: jne 0x4b58f9 */ if (!fZ) goto L_004b58f9;
L_004b5794:; BB(0x004b5794);
    /* 004b5794: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5796: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b579bu); f_007aa094();
    /* 004b579b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b579d: mov esi, eax */ r_esi = r_eax;
L_004b579f:; BB(0x004b579f);
    /* 004b579f: mov ecx, dword ptr [ebx + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x6e4u));
    /* 004b57a6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b57a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b57ab: je 0x4b57b2 */ if (fZ) goto L_004b57b2;
L_004b57ad:; BB(0x004b57ad);
    /* 004b57ad: call 0x4bd23c */ r_esp -= 4; W32(r_esp, 0x4b57b2u); f_004bd23c();
L_004b57b2:; BB(0x004b57b2);
    /* 004b57b2: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b57b5: jl 0x4b579f */ if ((fS!=fO)) goto L_004b579f;
L_004b57b7:; BB(0x004b57b7);
    /* 004b57b7: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b57bd: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b57c4: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b57ca: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b57cd: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b57d3: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b57d7: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b57da: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b57dd: ja 0x4b58f1 */ if ((!fC&&!fZ)) goto L_004b58f1;
L_004b57e3:; BB(0x004b57e3);
    /* 004b57e3: mov ecx, dword ptr [ecx*4 + 0x9055e0] */ r_ecx = R32((u32)(r_ecx*4+0x9055e0u));
    /* 004b57ea: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
L_004b58f9:; BB(0x004b58f9);
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b5760); r_esp += 8; return;
}

void f_004b57ec(void)
{
    FN_ENTER(0x004b57ec);
    goto L_004b57ec;
L_004b57ca:; BB(0x004b57ca);
    /* 004b57ca: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b57cd: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b57d3: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b57d7: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b57da: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b57dd: ja 0x4b58f1 */ if ((!fC&&!fZ)) goto L_004b58f1;
L_004b57e3:; BB(0x004b57e3);
    /* 004b57e3: mov ecx, dword ptr [ecx*4 + 0x9055e0] */ r_ecx = R32((u32)(r_ecx*4+0x9055e0u));
    /* 004b57ea: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b57ec:; BB(0x004b57ec);
    /* 004b57ec: mov eax, 1 */ r_eax = 0x1u;
    /* 004b57f1: jmp 0x4b57ca */ goto L_004b57ca;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b57ec); r_esp += 8; return;
}

void f_004b57f3(void)
{
    FN_ENTER(0x004b57f3);
    /* 004b57f3: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b57f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b57fb: jne 0x4b5807 */ if (!fZ) goto L_004b5807;
L_004b57fd:; BB(0x004b57fd);
    /* 004b57fd: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b5802: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b5807:; BB(0x004b5807);
    /* 004b5807: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b580c: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b57f3); r_esp += 8; return;
}

void f_004b5811(void)
{
    FN_ENTER(0x004b5811);
    /* 004b5811: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5819: jne 0x4b5825 */ if (!fZ) goto L_004b5825;
L_004b581b:; BB(0x004b581b);
    /* 004b581b: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b5820: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b5825:; BB(0x004b5825);
    /* 004b5825: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b582a: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b5811); r_esp += 8; return;
}

void f_004b582f(void)
{
    FN_ENTER(0x004b582f);
    /* 004b582f: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5835: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5837: jne 0x4b5843 */ if (!fZ) goto L_004b5843;
L_004b5839:; BB(0x004b5839);
    /* 004b5839: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b583e: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b5843:; BB(0x004b5843);
    /* 004b5843: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b5848: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b582f); r_esp += 8; return;
}

void f_004b584d(void)
{
    FN_ENTER(0x004b584d);
    /* 004b584d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5855: jne 0x4b5861 */ if (!fZ) goto L_004b5861;
L_004b5857:; BB(0x004b5857);
    /* 004b5857: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b585c: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b5861:; BB(0x004b5861);
    /* 004b5861: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b5866: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b584d); r_esp += 8; return;
}

void f_004b586b(void)
{
    FN_ENTER(0x004b586b);
    /* 004b586b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5873: jne 0x4b587c */ if (!fZ) goto L_004b587c;
L_004b5875:; BB(0x004b5875);
    /* 004b5875: mov eax, 4 */ r_eax = 0x4u;
    /* 004b587a: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b587c:; BB(0x004b587c);
    /* 004b587c: mov eax, 0xa */ r_eax = 0xau;
    /* 004b5881: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b586b); r_esp += 8; return;
}

void f_004b5883(void)
{
    FN_ENTER(0x004b5883);
    /* 004b5883: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b5889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b588b: jne 0x4b5894 */ if (!fZ) goto L_004b5894;
L_004b588d:; BB(0x004b588d);
    /* 004b588d: mov eax, 3 */ r_eax = 0x3u;
    /* 004b5892: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b5894:; BB(0x004b5894);
    /* 004b5894: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b5899: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b5883); r_esp += 8; return;
}

void f_004b589b(void)
{
    FN_ENTER(0x004b589b);
    /* 004b589b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b589d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b58a2u); f_00520bf4();
    /* 004b58a2: fcomp dword ptr [0x906d88] */ fx_compare(ST(0), R_F32((u32)(0x906d88u))); FPOP();
    /* 004b58a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b58aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b58ab: jbe 0x4b58b4 */ if ((fC||fZ)) goto L_004b58b4;
L_004b58ad:; BB(0x004b58ad);
    /* 004b58ad: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b58b2: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58b4:; BB(0x004b58b4);
    /* 004b58b4: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b58b9: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b589b); r_esp += 8; return;
}

void f_004b58bb(void)
{
    FN_ENTER(0x004b58bb);
    /* 004b58bb: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b58c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b58c3: jne 0x4b58cc */ if (!fZ) goto L_004b58cc;
L_004b58c5:; BB(0x004b58c5);
    /* 004b58c5: mov eax, 5 */ r_eax = 0x5u;
    /* 004b58ca: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58cc:; BB(0x004b58cc);
    /* 004b58cc: mov eax, 9 */ r_eax = 0x9u;
    /* 004b58d1: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b58bb); r_esp += 8; return;
}

void f_004b58d3(void)
{
    FN_ENTER(0x004b58d3);
    /* 004b58d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58d5: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b58dau); f_00520bf4();
    /* 004b58da: fcomp dword ptr [0x906d88] */ fx_compare(ST(0), R_F32((u32)(0x906d88u))); FPOP();
    /* 004b58e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b58e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b58e3: jbe 0x4b58ec */ if ((fC||fZ)) goto L_004b58ec;
L_004b58e5:; BB(0x004b58e5);
    /* 004b58e5: mov eax, 8 */ r_eax = 0x8u;
    /* 004b58ea: jmp 0x4b58f1 */ goto L_004b58f1;
L_004b58ec:; BB(0x004b58ec);
    /* 004b58ec: mov eax, 6 */ r_eax = 0x6u;
L_004b58f1:; BB(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b58d3); r_esp += 8; return;
}

void f_004b58f1(void)
{
    FN_ENTER(0x004b58f1);
    /* 004b58f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b58f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b58f4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b58f9u); f_004b5150();
    /* 004b58f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b58fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b58fb: ret 4 */ FN_RET(0x004b58f1); r_esp += 8; return;
}

void f_004b5900(void) /* sub_4B5900 */
{
    FN_ENTER(0x004b5900);
    /* 004b5900: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5901: mov esi, ecx */ r_esi = r_ecx;
    /* 004b5903: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004b5907: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b590a: je 0x4b5a97 */ if (fZ) goto L_004b5a97;
L_004b5910:; BB(0x004b5910);
    /* 004b5910: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5913: je 0x4b5a93 */ if (fZ) goto L_004b5a93;
L_004b5919:; BB(0x004b5919);
    /* 004b5919: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b591c: je 0x4b5a93 */ if (fZ) goto L_004b5a93;
L_004b5922:; BB(0x004b5922);
    /* 004b5922: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5925: je 0x4b5a93 */ if (fZ) goto L_004b5a93;
L_004b592b:; BB(0x004b592b);
    /* 004b592b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b592d: jne 0x4b5a93 */ if (!fZ) goto L_004b5a93;
L_004b5933:; BB(0x004b5933);
    /* 004b5933: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5935: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b593au); f_007aa094();
    /* 004b593a: mov edx, dword ptr [esi + 0x730] */ r_edx = R32((u32)(r_esi+0x730u));
    /* 004b5940: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 004b5943: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b5949: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b594b: jne 0x4b5a93 */ if (!fZ) goto L_004b5a93;
L_004b5951:; BB(0x004b5951);
    /* 004b5951: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b5957: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b595e: mov eax, dword ptr [esi + 0x6bc] */ r_eax = R32((u32)(r_esi+0x6bcu));
    /* 004b5964: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b5967: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b596d: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b5971: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b5974: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b5977: ja 0x4b5a8b */ if ((!fC&&!fZ)) goto L_004b5a8b;
L_004b597d:; BB(0x004b597d);
    /* 004b597d: mov ecx, dword ptr [ecx*4 + 0x905680] */ r_ecx = R32((u32)(r_ecx*4+0x905680u));
    /* 004b5984: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
L_004b5a93:; BB(0x004b5a93);
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5900); r_esp += 8; return;
L_004b5a97:; BB(0x004b5a97);
    /* 004b5a97: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004b5a9c: mov edx, dword ptr [eax*4 + 0x9abc68] */ r_edx = R32((u32)(r_eax*4+0x9abc68u));
    /* 004b5aa3: mov ecx, dword ptr [esi + 0x6bc] */ r_ecx = R32((u32)(r_esi+0x6bcu));
    /* 004b5aa9: mov eax, dword ptr [edx + ecx*8 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 004b5aad: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004b5ab0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5ab2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5ab4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5ab6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5ab8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b5aba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5abc: mov dword ptr [esi + 0x730], edx */ W32((u32)(r_esi+0x730u), r_edx);
    /* 004b5ac2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5ac3: ret 4 */ FN_RET(0x004b5900); r_esp += 8; return;
}

void f_004b5986(void)
{
    FN_ENTER(0x004b5986);
    goto L_004b5986;
L_004b5964:; BB(0x004b5964);
    /* 004b5964: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b5967: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b596d: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b5971: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b5974: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b5977: ja 0x4b5a8b */ if ((!fC&&!fZ)) goto L_004b5a8b;
L_004b597d:; BB(0x004b597d);
    /* 004b597d: mov ecx, dword ptr [ecx*4 + 0x905680] */ r_ecx = R32((u32)(r_ecx*4+0x905680u));
    /* 004b5984: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b5986:; BB(0x004b5986);
    /* 004b5986: mov eax, 1 */ r_eax = 0x1u;
    /* 004b598b: jmp 0x4b5964 */ goto L_004b5964;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5986); r_esp += 8; return;
}

void f_004b598d(void)
{
    FN_ENTER(0x004b598d);
    /* 004b598d: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5993: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5995: jne 0x4b59a1 */ if (!fZ) goto L_004b59a1;
L_004b5997:; BB(0x004b5997);
    /* 004b5997: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b599c: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b59a1:; BB(0x004b59a1);
    /* 004b59a1: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b59a6: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b598d); r_esp += 8; return;
}

void f_004b59ab(void)
{
    FN_ENTER(0x004b59ab);
    /* 004b59ab: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b59b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b59b3: jne 0x4b59bf */ if (!fZ) goto L_004b59bf;
L_004b59b5:; BB(0x004b59b5);
    /* 004b59b5: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b59ba: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b59bf:; BB(0x004b59bf);
    /* 004b59bf: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b59c4: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b59ab); r_esp += 8; return;
}

void f_004b59c9(void)
{
    FN_ENTER(0x004b59c9);
    /* 004b59c9: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b59cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b59d1: jne 0x4b59dd */ if (!fZ) goto L_004b59dd;
L_004b59d3:; BB(0x004b59d3);
    /* 004b59d3: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b59d8: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b59dd:; BB(0x004b59dd);
    /* 004b59dd: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b59e2: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b59c9); r_esp += 8; return;
}

void f_004b59e7(void)
{
    FN_ENTER(0x004b59e7);
    /* 004b59e7: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b59ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b59ef: jne 0x4b59fb */ if (!fZ) goto L_004b59fb;
L_004b59f1:; BB(0x004b59f1);
    /* 004b59f1: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b59f6: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b59fb:; BB(0x004b59fb);
    /* 004b59fb: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b5a00: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b59e7); r_esp += 8; return;
}

void f_004b5a05(void)
{
    FN_ENTER(0x004b5a05);
    /* 004b5a05: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5a0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a0d: jne 0x4b5a16 */ if (!fZ) goto L_004b5a16;
L_004b5a0f:; BB(0x004b5a0f);
    /* 004b5a0f: mov eax, 4 */ r_eax = 0x4u;
    /* 004b5a14: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a16:; BB(0x004b5a16);
    /* 004b5a16: mov eax, 0xa */ r_eax = 0xau;
    /* 004b5a1b: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5a05); r_esp += 8; return;
}

void f_004b5a1d(void)
{
    FN_ENTER(0x004b5a1d);
    /* 004b5a1d: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5a23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a25: jne 0x4b5a2e */ if (!fZ) goto L_004b5a2e;
L_004b5a27:; BB(0x004b5a27);
    /* 004b5a27: mov eax, 3 */ r_eax = 0x3u;
    /* 004b5a2c: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a2e:; BB(0x004b5a2e);
    /* 004b5a2e: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b5a33: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5a1d); r_esp += 8; return;
}

void f_004b5a35(void)
{
    FN_ENTER(0x004b5a35);
    /* 004b5a35: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a37: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b5a3cu); f_00520bf4();
    /* 004b5a3c: fcomp dword ptr [0x906d84] */ fx_compare(ST(0), R_F32((u32)(0x906d84u))); FPOP();
    /* 004b5a42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b5a44: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b5a45: jbe 0x4b5a4e */ if ((fC||fZ)) goto L_004b5a4e;
L_004b5a47:; BB(0x004b5a47);
    /* 004b5a47: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b5a4c: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a4e:; BB(0x004b5a4e);
    /* 004b5a4e: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b5a53: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5a35); r_esp += 8; return;
}

void f_004b5a55(void)
{
    FN_ENTER(0x004b5a55);
    /* 004b5a55: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5a5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5a5d: jne 0x4b5a66 */ if (!fZ) goto L_004b5a66;
L_004b5a5f:; BB(0x004b5a5f);
    /* 004b5a5f: mov eax, 5 */ r_eax = 0x5u;
    /* 004b5a64: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a66:; BB(0x004b5a66);
    /* 004b5a66: mov eax, 9 */ r_eax = 0x9u;
    /* 004b5a6b: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5a55); r_esp += 8; return;
}

void f_004b5a6d(void)
{
    FN_ENTER(0x004b5a6d);
    /* 004b5a6d: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a6f: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b5a74u); f_00520bf4();
    /* 004b5a74: fcomp dword ptr [0x906d84] */ fx_compare(ST(0), R_F32((u32)(0x906d84u))); FPOP();
    /* 004b5a7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b5a7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b5a7d: jbe 0x4b5a86 */ if ((fC||fZ)) goto L_004b5a86;
L_004b5a7f:; BB(0x004b5a7f);
    /* 004b5a7f: mov eax, 8 */ r_eax = 0x8u;
    /* 004b5a84: jmp 0x4b5a8b */ goto L_004b5a8b;
L_004b5a86:; BB(0x004b5a86);
    /* 004b5a86: mov eax, 6 */ r_eax = 0x6u;
L_004b5a8b:; BB(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5a6d); r_esp += 8; return;
}

void f_004b5a8b(void)
{
    FN_ENTER(0x004b5a8b);
    /* 004b5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5a8e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5a93u); f_004b5150();
    /* 004b5a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5a94: ret 4 */ FN_RET(0x004b5a8b); r_esp += 8; return;
}

void f_004b5ac8(void) /* sub_4B5AC8 */
{
    FN_ENTER(0x004b5ac8);
    /* 004b5ac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ac9: mov esi, ecx */ r_esi = r_ecx;
    /* 004b5acb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004b5acf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5ad2: je 0x4b5c7a */ if (fZ) goto L_004b5c7a;
L_004b5ad8:; BB(0x004b5ad8);
    /* 004b5ad8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5adb: je 0x4b5c76 */ if (fZ) goto L_004b5c76;
L_004b5ae1:; BB(0x004b5ae1);
    /* 004b5ae1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5ae4: je 0x4b5c76 */ if (fZ) goto L_004b5c76;
L_004b5aea:; BB(0x004b5aea);
    /* 004b5aea: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5aed: je 0x4b5c76 */ if (fZ) goto L_004b5c76;
L_004b5af3:; BB(0x004b5af3);
    /* 004b5af3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5af5: je 0x4b5b1a */ if (fZ) goto L_004b5b1a;
L_004b5af7:; BB(0x004b5af7);
    /* 004b5af7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5afa: je 0x4b5c76 */ if (fZ) goto L_004b5c76;
L_004b5b00:; BB(0x004b5b00);
    /* 004b5b00: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5b03: jne 0x4b5c76 */ if (!fZ) goto L_004b5c76;
L_004b5b09:; BB(0x004b5b09);
    /* 004b5b09: mov eax, dword ptr [esi + 0x730] */ r_eax = R32((u32)(r_esi+0x730u));
    /* 004b5b0f: mov word ptr [esi + 0xf4], ax */ W16((u32)(r_esi+0xf4u), (u16)r_eax);
    /* 004b5b16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5b17: ret 4 */ FN_RET(0x004b5ac8); r_esp += 8; return;
L_004b5b1a:; BB(0x004b5b1a);
    /* 004b5b1a: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5b1c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b5b21u); f_007aa094();
    /* 004b5b21: mov ecx, dword ptr [esi + 0x7ac] */ r_ecx = R32((u32)(r_esi+0x7acu));
    /* 004b5b27: call 0x81737c */ r_esp -= 4; W32(r_esp, 0x4b5b2cu); f_0081737c();
    /* 004b5b2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5b2e: jne 0x4b5c76 */ if (!fZ) goto L_004b5c76;
L_004b5b34:; BB(0x004b5b34);
    /* 004b5b34: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b5b3a: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b5b41: mov eax, dword ptr [esi + 0x6bc] */ r_eax = R32((u32)(r_esi+0x6bcu));
    /* 004b5b47: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b5b4a: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b5b50: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b5b54: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b5b57: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b5b5a: ja 0x4b5c6e */ if ((!fC&&!fZ)) goto L_004b5c6e;
L_004b5b60:; BB(0x004b5b60);
    /* 004b5b60: mov ecx, dword ptr [ecx*4 + 0x905720] */ r_ecx = R32((u32)(r_ecx*4+0x905720u));
    /* 004b5b67: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
L_004b5c76:; BB(0x004b5c76);
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5ac8); r_esp += 8; return;
L_004b5c7a:; BB(0x004b5c7a);
    /* 004b5c7a: movsx eax, word ptr [esi + 0xf4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xf4u));
    /* 004b5c81: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b5c87: mov edx, 1 */ r_edx = 0x1u;
    /* 004b5c8c: mov word ptr [esi + 0xf4], dx */ W16((u32)(r_esi+0xf4u), (u16)r_edx);
    /* 004b5c93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c94: ret 4 */ FN_RET(0x004b5ac8); r_esp += 8; return;
}

void f_004b5b69(void)
{
    FN_ENTER(0x004b5b69);
    goto L_004b5b69;
L_004b5b47:; BB(0x004b5b47);
    /* 004b5b47: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b5b4a: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b5b50: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b5b54: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b5b57: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b5b5a: ja 0x4b5c6e */ if ((!fC&&!fZ)) goto L_004b5c6e;
L_004b5b60:; BB(0x004b5b60);
    /* 004b5b60: mov ecx, dword ptr [ecx*4 + 0x905720] */ r_ecx = R32((u32)(r_ecx*4+0x905720u));
    /* 004b5b67: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b5b69:; BB(0x004b5b69);
    /* 004b5b69: mov eax, 1 */ r_eax = 0x1u;
    /* 004b5b6e: jmp 0x4b5b47 */ goto L_004b5b47;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5b69); r_esp += 8; return;
}

void f_004b5b70(void)
{
    FN_ENTER(0x004b5b70);
    /* 004b5b70: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5b76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5b78: jne 0x4b5b84 */ if (!fZ) goto L_004b5b84;
L_004b5b7a:; BB(0x004b5b7a);
    /* 004b5b7a: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b5b7f: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5b84:; BB(0x004b5b84);
    /* 004b5b84: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b5b89: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5b70); r_esp += 8; return;
}

void f_004b5b8e(void)
{
    FN_ENTER(0x004b5b8e);
    /* 004b5b8e: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5b94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5b96: jne 0x4b5ba2 */ if (!fZ) goto L_004b5ba2;
L_004b5b98:; BB(0x004b5b98);
    /* 004b5b98: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b5b9d: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5ba2:; BB(0x004b5ba2);
    /* 004b5ba2: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b5ba7: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5b8e); r_esp += 8; return;
}

void f_004b5bac(void)
{
    FN_ENTER(0x004b5bac);
    /* 004b5bac: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5bb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5bb4: jne 0x4b5bc0 */ if (!fZ) goto L_004b5bc0;
L_004b5bb6:; BB(0x004b5bb6);
    /* 004b5bb6: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b5bbb: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5bc0:; BB(0x004b5bc0);
    /* 004b5bc0: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b5bc5: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5bac); r_esp += 8; return;
}

void f_004b5bca(void)
{
    FN_ENTER(0x004b5bca);
    /* 004b5bca: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5bd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5bd2: jne 0x4b5bde */ if (!fZ) goto L_004b5bde;
L_004b5bd4:; BB(0x004b5bd4);
    /* 004b5bd4: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b5bd9: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5bde:; BB(0x004b5bde);
    /* 004b5bde: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b5be3: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5bca); r_esp += 8; return;
}

void f_004b5be8(void)
{
    FN_ENTER(0x004b5be8);
    /* 004b5be8: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5bee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5bf0: jne 0x4b5bf9 */ if (!fZ) goto L_004b5bf9;
L_004b5bf2:; BB(0x004b5bf2);
    /* 004b5bf2: mov eax, 4 */ r_eax = 0x4u;
    /* 004b5bf7: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5bf9:; BB(0x004b5bf9);
    /* 004b5bf9: mov eax, 0xa */ r_eax = 0xau;
    /* 004b5bfe: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5be8); r_esp += 8; return;
}

void f_004b5c00(void)
{
    FN_ENTER(0x004b5c00);
    /* 004b5c00: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5c06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5c08: jne 0x4b5c11 */ if (!fZ) goto L_004b5c11;
L_004b5c0a:; BB(0x004b5c0a);
    /* 004b5c0a: mov eax, 3 */ r_eax = 0x3u;
    /* 004b5c0f: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c11:; BB(0x004b5c11);
    /* 004b5c11: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b5c16: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5c00); r_esp += 8; return;
}

void f_004b5c18(void)
{
    FN_ENTER(0x004b5c18);
    /* 004b5c18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c1a: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b5c1fu); f_00520bf4();
    /* 004b5c1f: fcomp dword ptr [0x906d80] */ fx_compare(ST(0), R_F32((u32)(0x906d80u))); FPOP();
    /* 004b5c25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b5c27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b5c28: jbe 0x4b5c31 */ if ((fC||fZ)) goto L_004b5c31;
L_004b5c2a:; BB(0x004b5c2a);
    /* 004b5c2a: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b5c2f: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c31:; BB(0x004b5c31);
    /* 004b5c31: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b5c36: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5c18); r_esp += 8; return;
}

void f_004b5c38(void)
{
    FN_ENTER(0x004b5c38);
    /* 004b5c38: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b5c3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5c40: jne 0x4b5c49 */ if (!fZ) goto L_004b5c49;
L_004b5c42:; BB(0x004b5c42);
    /* 004b5c42: mov eax, 5 */ r_eax = 0x5u;
    /* 004b5c47: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c49:; BB(0x004b5c49);
    /* 004b5c49: mov eax, 9 */ r_eax = 0x9u;
    /* 004b5c4e: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5c38); r_esp += 8; return;
}

void f_004b5c50(void)
{
    FN_ENTER(0x004b5c50);
    /* 004b5c50: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c52: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b5c57u); f_00520bf4();
    /* 004b5c57: fcomp dword ptr [0x906d80] */ fx_compare(ST(0), R_F32((u32)(0x906d80u))); FPOP();
    /* 004b5c5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b5c5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b5c60: jbe 0x4b5c69 */ if ((fC||fZ)) goto L_004b5c69;
L_004b5c62:; BB(0x004b5c62);
    /* 004b5c62: mov eax, 8 */ r_eax = 0x8u;
    /* 004b5c67: jmp 0x4b5c6e */ goto L_004b5c6e;
L_004b5c69:; BB(0x004b5c69);
    /* 004b5c69: mov eax, 6 */ r_eax = 0x6u;
L_004b5c6e:; BB(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5c50); r_esp += 8; return;
}

void f_004b5c6e(void)
{
    FN_ENTER(0x004b5c6e);
    /* 004b5c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b5c71: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b5c76u); f_004b5150();
    /* 004b5c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5c77: ret 4 */ FN_RET(0x004b5c6e); r_esp += 8; return;
}

void f_004b5c98(void) /* sub_4B5C98 */
{
    FN_ENTER(0x004b5c98);
    /* 004b5c98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5c9a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b5c9c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b5ca0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5ca3: je 0x4b5cca */ if (fZ) goto L_004b5cca;
L_004b5ca5:; BB(0x004b5ca5);
    /* 004b5ca5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5ca8: je 0x4b5cc5 */ if (fZ) goto L_004b5cc5;
L_004b5caa:; BB(0x004b5caa);
    /* 004b5caa: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5cad: je 0x4b5cc5 */ if (fZ) goto L_004b5cc5;
L_004b5caf:; BB(0x004b5caf);
    /* 004b5caf: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5cb2: je 0x4b5cc5 */ if (fZ) goto L_004b5cc5;
L_004b5cb4:; BB(0x004b5cb4);
    /* 004b5cb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5cb6: jne 0x4b5cc5 */ if (!fZ) goto L_004b5cc5;
L_004b5cb8:; BB(0x004b5cb8);
    /* 004b5cb8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004b5cbc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5cc1: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_004b5cc5:; BB(0x004b5cc5);
    /* 004b5cc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b5cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b5cc7: ret 4 */ FN_RET(0x004b5c98); r_esp += 8; return;
L_004b5cca:; BB(0x004b5cca);
    /* 004b5cca: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b5ccc: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b5cd1: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b5cd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b5cda: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b5ce0u); call_ind(t); }
    /* 004b5ce0: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004b5ce3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b5ce5: mov esi, eax */ r_esi = r_eax;
L_004b5ce7:; BB(0x004b5ce7);
    /* 004b5ce7: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b5cee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b5cf0: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b5cf6u); call_ind(t); }
    /* 004b5cf6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b5cf9: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5cfc: jl 0x4b5ce7 */ if ((fS!=fO)) goto L_004b5ce7;
L_004b5cfe:; BB(0x004b5cfe);
    /* 004b5cfe: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004b5d01: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b5d07: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b5d0a: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b5d0f: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b5d15: call 0x4bff10 */ r_esp -= 4; W32(r_esp, 0x4b5d1au); f_004bff10();
    /* 004b5d1a: jmp 0x4b5cc5 */ goto L_004b5cc5;
}

void f_004b5d1c(void) /* sub_4B5D1C */
{
    FN_ENTER(0x004b5d1c);
    /* 004b5d1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5d1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b5d1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b5d1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5d20: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b5d23: mov edi, ecx */ r_edi = r_ecx;
    /* 004b5d25: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004b5d29: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d2c: je 0x4b5faf */ if (fZ) goto L_004b5faf;
L_004b5d32:; BB(0x004b5d32);
    /* 004b5d32: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d35: je 0x4b5f24 */ if (fZ) goto L_004b5f24;
L_004b5d3b:; BB(0x004b5d3b);
    /* 004b5d3b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d3e: je 0x4b5ed0 */ if (fZ) goto L_004b5ed0;
L_004b5d44:; BB(0x004b5d44);
    /* 004b5d44: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d47: je 0x4b5ead */ if (fZ) goto L_004b5ead;
L_004b5d4d:; BB(0x004b5d4d);
    /* 004b5d4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d4f: je 0x4b5df4 */ if (fZ) goto L_004b5df4;
L_004b5d55:; BB(0x004b5d55);
    /* 004b5d55: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d58: je 0x4b5ead */ if (fZ) goto L_004b5ead;
L_004b5d5e:; BB(0x004b5d5e);
    /* 004b5d5e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5d61: jne 0x4b5ead */ if (!fZ) goto L_004b5ead;
L_004b5d67:; BB(0x004b5d67);
    /* 004b5d67: mov ebx, dword ptr [edi + 0x38] */ r_ebx = R32((u32)(r_edi+0x38u));
    /* 004b5d6a: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 004b5d6d: mov ebp, dword ptr [edi + 0x40] */ r_ebp = R32((u32)(r_edi+0x40u));
    /* 004b5d70: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5d72: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 004b5d79: mov dword ptr [edi + 0x3c], 0x41400000 */ W32((u32)(r_edi+0x3cu), 0x41400000u);
    /* 004b5d80: mov dword ptr [edi + 0x40], 0xc2b40000 */ W32((u32)(r_edi+0x40u), 0xc2b40000u);
    /* 004b5d87: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x4b5d8cu); f_0078730c();
    /* 004b5d8c: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004b5d90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b5d92: mov ebx, eax */ r_ebx = r_eax;
L_004b5d94:; BB(0x004b5d94);
    /* 004b5d94: push dword ptr [edi + ebx*4 + 0x600] */ { u32 v = R32((u32)(r_edi+r_ebx*4+0x600u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b5d9b: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5d9d: call 0x7776d0 */ r_esp -= 4; W32(r_esp, 0x4b5da2u); f_007776d0();
    /* 004b5da2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5da5: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5da8: jl 0x4b5d94 */ if ((fS!=fO)) goto L_004b5d94;
L_004b5daa:; BB(0x004b5daa);
    /* 004b5daa: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004b5dae: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5db0: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x4b5db5u); f_0051f894();
    /* 004b5db5: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5db7: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x4b5dbcu); f_006bb100();
    /* 004b5dbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b5dbd: mov dword ptr [edi + 0x38], ebx */ W32((u32)(r_edi+0x38u), r_ebx);
    /* 004b5dc0: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 004b5dc3: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 004b5dc6: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5dc8: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x4b5dcdu); f_0078730c();
    /* 004b5dcd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004b5dcf: mov dword ptr [edi + 0x30], 0x12008 */ W32((u32)(r_edi+0x30u), 0x12008u);
    /* 004b5dd6: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5dd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5dda: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x4b5de0u); call_ind(t); }
    /* 004b5de0: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4b5de5u); f_00717f38();
    /* 004b5de5: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4b5deau); f_004d3250();
    /* 004b5dea: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b5ded: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b5dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5def: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5df0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b5df1: ret 4 */ FN_RET(0x004b5d1c); r_esp += 8; return;
L_004b5df4:; BB(0x004b5df4);
    /* 004b5df4: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5df6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b5dfbu); f_007aa094();
    /* 004b5dfb: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x4b5e00u); f_004d6864();
    /* 004b5e00: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004b5e04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b5e06: jne 0x4b5eb7 */ if (!fZ) goto L_004b5eb7;
L_004b5e0c:; BB(0x004b5e0c);
    /* 004b5e0c: push 0x42aa0000 */ { u32 v = 0x42aa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e11: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5e13: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b5e18u); f_007aaa30();
    /* 004b5e18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5e1a: je 0x4b5e5c */ if (fZ) goto L_004b5e5c;
L_004b5e1c:; BB(0x004b5e1c);
    /* 004b5e1c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004b5e23: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b5e26: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004b5e2e: mov dword ptr [esp + 8], 0xc4020000 */ W32((u32)(r_esp+0x8u), 0xc4020000u);
    /* 004b5e36: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e38: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e3f: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e45: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x4b5e4au); f_0050ac1c();
    /* 004b5e4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b5e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e4f: push 0x3fb */ { u32 v = 0x3fbu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e54: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b5e59u); f_00814298();
    /* 004b5e59: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b5e5c:; BB(0x004b5e5c);
    /* 004b5e5c: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e61: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5e63: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b5e68u); f_007aaa30();
    /* 004b5e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5e6a: je 0x4b5e8f */ if (fZ) goto L_004b5e8f;
L_004b5e6c:; BB(0x004b5e6c);
    /* 004b5e6c: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5e6e: call 0x4b60a0 */ r_esp -= 4; W32(r_esp, 0x4b5e73u); f_004b60a0();
    /* 004b5e73: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e75: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e7a: lea eax, [edi + 0x7bc] */ r_eax = (u32)(r_edi+0x7bcu);
    /* 004b5e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e81: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4b5e86u); f_0050981c();
    /* 004b5e86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b5e89: mov dword ptr [edi + 0x7b8], eax */ W32((u32)(r_edi+0x7b8u), r_eax);
L_004b5e8f:; BB(0x004b5e8f);
    /* 004b5e8f: push 0x42f60000 */ { u32 v = 0x42f60000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5e94: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5e96: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b5e9bu); f_007aaa30();
    /* 004b5e9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5e9d: je 0x4b5ea6 */ if (fZ) goto L_004b5ea6;
L_004b5e9f:; BB(0x004b5e9f);
    /* 004b5e9f: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5ea1: call 0x4b60a0 */ r_esp -= 4; W32(r_esp, 0x4b5ea6u); f_004b60a0();
L_004b5ea6:; BB(0x004b5ea6);
    /* 004b5ea6: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5ea8: call 0x4b1cdc */ r_esp -= 4; W32(r_esp, 0x4b5eadu); f_004b1cdc();
L_004b5ead:; BB(0x004b5ead);
    /* 004b5ead: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b5eb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b5eb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5eb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5eb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b5eb4: ret 4 */ FN_RET(0x004b5d1c); r_esp += 8; return;
L_004b5eb7:; BB(0x004b5eb7);
    /* 004b5eb7: mov dword ptr [edi + 0x730], 1 */ W32((u32)(r_edi+0x730u), 0x1u);
    /* 004b5ec1: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4b5ec6u); f_00717f38();
    /* 004b5ec6: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4b5ecbu); f_004d3250();
    /* 004b5ecb: jmp 0x4b5e0c */ goto L_004b5e0c;
L_004b5ed0:; BB(0x004b5ed0);
    /* 004b5ed0: mov eax, dword ptr [edi + 0x730] */ r_eax = R32((u32)(r_edi+0x730u));
    /* 004b5ed6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5ed9: jne 0x4b5ead */ if (!fZ) goto L_004b5ead;
L_004b5edb:; BB(0x004b5edb);
    /* 004b5edb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5edd: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004b5edf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004b5ee1: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5ee3: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b5ee9u); call_ind(t); }
    /* 004b5ee9: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004b5eed: mov ebx, dword ptr [edi + 0x6bc] */ r_ebx = R32((u32)(r_edi+0x6bcu));
    /* 004b5ef3: mov byte ptr [esp + 0xc], 0xa9 */ W8((u32)(r_esp+0xcu), 0xa9u);
    /* 004b5ef8: mov edx, 0x1d */ r_edx = 0x1du;
    /* 004b5efd: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 004b5f02: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004b5f07: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004b5f0c: mov word ptr [esp + 0x12], bx */ W16((u32)(r_esp+0x12u), (u16)r_ebx);
    /* 004b5f11: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004b5f15: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b5f1au); f_008003e0();
    /* 004b5f1a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b5f1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b5f1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5f1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5f20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b5f21: ret 4 */ FN_RET(0x004b5d1c); r_esp += 8; return;
L_004b5f24:; BB(0x004b5f24);
    /* 004b5f24: mov eax, dword ptr [edi + 0x62c] */ r_eax = R32((u32)(r_edi+0x62cu));
    /* 004b5f2a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004b5f2d: test dword ptr [0xa0f67c], edx */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5f33: je 0x4b5ead */ if (fZ) goto L_004b5ead;
L_004b5f39:; BB(0x004b5f39);
    /* 004b5f39: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004b5f3c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004b5f3e: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b5f43: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004b5f46: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5f48: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b5f4eu); call_ind(t); }
    /* 004b5f4e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b5f50:; BB(0x004b5f50);
    /* 004b5f50: mov ecx, dword ptr [edi + ebx*4 + 0x600] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x600u));
    /* 004b5f57: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b5f59: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b5f5fu); call_ind(t); }
    /* 004b5f5f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5f62: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5f65: jl 0x4b5f50 */ if ((fS!=fO)) goto L_004b5f50;
L_004b5f67:; BB(0x004b5f67);
    /* 004b5f67: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f69: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b5f6b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004b5f6d: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5f6f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b5f75u); call_ind(t); }
    /* 004b5f75: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 004b5f79: mov edx, dword ptr [edi + 0x6bc] */ r_edx = R32((u32)(r_edi+0x6bcu));
    /* 004b5f7f: mov byte ptr [esp + 0x14], 0xa9 */ W8((u32)(r_esp+0x14u), 0xa9u);
    /* 004b5f84: mov eax, 2 */ r_eax = 0x2u;
    /* 004b5f89: mov byte ptr [esp + 0x15], al */ W8((u32)(r_esp+0x15u), (u8)r_eax);
    /* 004b5f8d: mov word ptr [esp + 0x16], bp */ W16((u32)(r_esp+0x16u), (u16)r_ebp);
    /* 004b5f92: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 004b5f97: mov word ptr [esp + 0x1a], dx */ W16((u32)(r_esp+0x1au), (u16)r_edx);
    /* 004b5f9c: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004b5fa0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b5fa5u); f_008003e0();
    /* 004b5fa5: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b5fa8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b5fa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b5faa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b5fab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b5fac: ret 4 */ FN_RET(0x004b5d1c); r_esp += 8; return;
L_004b5faf:; BB(0x004b5faf);
    /* 004b5faf: mov eax, dword ptr [edi + 0x630] */ r_eax = R32((u32)(r_edi+0x630u));
    /* 004b5fb5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004b5fb7: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b5fbc: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b5fbf: mov dword ptr [edi + 0x630], eax */ W32((u32)(r_edi+0x630u), r_eax);
    /* 004b5fc5: mov ecx, edi */ r_ecx = r_edi;
    /* 004b5fc7: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b5fcdu); call_ind(t); }
    /* 004b5fcd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b5fcf:; BB(0x004b5fcf);
    /* 004b5fcf: mov ecx, dword ptr [edi + ebx*4 + 0x600] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x600u));
    /* 004b5fd6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b5fd8: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x4b5fdeu); call_ind(t); }
    /* 004b5fde: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5fe1: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b5fe4: jl 0x4b5fcf */ if ((fS!=fO)) goto L_004b5fcf;
L_004b5fe6:; BB(0x004b5fe6);
    /* 004b5fe6: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b5feb: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004b5ff2: mov edx, 3 */ r_edx = 0x3u;
    /* 004b5ff7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5ff8: mov dword ptr [edi + 0x6c8], edx */ W32((u32)(r_edi+0x6c8u), r_edx);
    /* 004b5ffe: mov ecx, edi */ r_ecx = r_edi;
    /* 004b6000: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b6005u); f_004b1e58();
    /* 004b6005: mov dword ptr [edi + 0x6f8], 0 */ W32((u32)(r_edi+0x6f8u), 0x0u);
    /* 004b600f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6011: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 004b6014: mov dword ptr [edi + 0x730], eax */ W32((u32)(r_edi+0x730u), r_eax);
    /* 004b601a: mov dword ptr [edi + 0x734], eax */ W32((u32)(r_edi+0x734u), r_eax);
    /* 004b6020: mov dword ptr [edi + 0x744], eax */ W32((u32)(r_edi+0x744u), r_eax);
    /* 004b6026: mov dword ptr [edi + 0x704], eax */ W32((u32)(r_edi+0x704u), r_eax);
    /* 004b602c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b602e:; BB(0x004b602e);
    /* 004b602e: mov ecx, dword ptr [edi + ebx*4 + 0x6e4] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x6e4u));
    /* 004b6035: call 0x4bd1fc */ r_esp -= 4; W32(r_esp, 0x4b603au); f_004bd1fc();
    /* 004b603a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b603d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6040: jl 0x4b602e */ if ((fS!=fO)) goto L_004b602e;
L_004b6042:; BB(0x004b6042);
    /* 004b6042: mov ecx, dword ptr [edi + 0x7ac] */ r_ecx = R32((u32)(r_edi+0x7acu));
    /* 004b6048: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b604a: je 0x4b6051 */ if (fZ) goto L_004b6051;
L_004b604c:; BB(0x004b604c);
    /* 004b604c: call 0x8172ac */ r_esp -= 4; W32(r_esp, 0x4b6051u); f_008172ac();
L_004b6051:; BB(0x004b6051);
    /* 004b6051: call 0x4bff28 */ r_esp -= 4; W32(r_esp, 0x4b6056u); f_004bff28();
    /* 004b6056: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4b605bu); f_00717f74();
    /* 004b605b: mov byte ptr [esp + 0x1c], 2 */ W8((u32)(r_esp+0x1cu), 0x2u);
    /* 004b6060: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6062: mov byte ptr [esp + 0x1d], al */ W8((u32)(r_esp+0x1du), (u8)r_eax);
    /* 004b6066: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004b606e: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004b6073: mov dword ptr [esp + 0x24], 0x3f333333 */ W32((u32)(r_esp+0x24u), 0x3f333333u);
    /* 004b607b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b607d: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4b6082u); f_004d31f4();
    /* 004b6082: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004b6086: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 004b608b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b608c: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4b6091u); f_004d6770();
    /* 004b6091: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6094: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6097: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b6099: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b609a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b609b: ret 4 */ FN_RET(0x004b5d1c); r_esp += 8; return;
}

