#include "protos.h"

void f_006ff0d4(void) /* sub_6FF0D4 */
{
    FN_ENTER(0x006ff0d4);
    /* 006ff0d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff0d5: mov esi, ecx */ r_esi = r_ecx;
    /* 006ff0d7: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 006ff0dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff0de: jne 0x6ff0e2 */ if (!fZ) goto L_006ff0e2;
L_006ff0e0:; BB(0x006ff0e0);
    /* 006ff0e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff0e1: ret  */ FN_RET(0x006ff0d4); r_esp += 4; return;
L_006ff0e2:; BB(0x006ff0e2);
    /* 006ff0e2: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6ff0e7u); f_0082dbac();
    /* 006ff0e7: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x6ff0ecu); f_004d28a4();
    /* 006ff0ec: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006ff0f1: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 006ff0f7: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006ff0fc: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 006ff102: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 006ff108: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 006ff10e: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 006ff114: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 006ff11a: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 006ff120: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 006ff126: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006ff129: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff12b: jne 0x6ff15d */ if (!fZ) goto L_006ff15d;
L_006ff12d:; BB(0x006ff12d);
    /* 006ff12d: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ff130: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006ff135: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ff138: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff139: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6ff13eu); f_0082d710();
    /* 006ff13e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff13f: call 0x6fb8c0 */ r_esp -= 4; W32(r_esp, 0x6ff144u); f_006fb8c0();
    /* 006ff144: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006ff146: call 0x6fb8d4 */ r_esp -= 4; W32(r_esp, 0x6ff14bu); f_006fb8d4();
    /* 006ff14b: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006ff14d: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006ff152: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006ff154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ff155: call 0x82b6bc */ r_esp -= 4; W32(r_esp, 0x6ff15au); f_0082b6bc();
    /* 006ff15a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006ff15d:; BB(0x006ff15d);
    /* 006ff15d: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 006ff162: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 006ff168: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 006ff16e: mov esi, dword ptr [0xaab514] */ r_esi = R32((u32)(0xaab514u));
    /* 006ff174: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 006ff179: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006ff17e: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 006ff184: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 006ff18a: mov dword ptr [0xaf037c], esi */ W32((u32)(0xaf037cu), r_esi);
    /* 006ff190: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006ff195: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x6ff19au); f_004d2968();
    /* 006ff19a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6ff19fu); f_0082dab0();
    /* 006ff19f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff1a0: ret  */ FN_RET(0x006ff0d4); r_esp += 4; return;
}

void f_006ff1a4(void) /* sub_6FF1A4 */
{
    FN_ENTER(0x006ff1a4);
    /* 006ff1a4: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006ff1a7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ff1aa: mov eax, 0 */ r_eax = 0x0u;
    /* 006ff1af: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006ff1b2: ret  */ FN_RET(0x006ff1a4); r_esp += 4; return;
}

void f_006ff1b4(void)
{
    FN_ENTER(0x006ff1b4);
    /* 006ff1b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1b6: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x6ff1bbu); f_007a60dc();
    /* 006ff1bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff1bc: ret  */ FN_RET(0x006ff1b4); r_esp += 4; return;
}

void f_006ff1c0(void) /* sub_6FF1C0 */
{
    FN_ENTER(0x006ff1c0);
    /* 006ff1c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1c3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ff1c6: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 006ff1ca: mov edx, 0xa96b0c */ r_edx = 0xa96b0cu;
    /* 006ff1cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ff1d1: mov ebx, eax */ r_ebx = r_eax;
    /* 006ff1d3: mov edi, edx */ r_edi = r_edx;
L_006ff1d5:; BB(0x006ff1d5);
    /* 006ff1d5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006ff1d7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006ff1d9:; BB(0x006ff1d9);
    /* 006ff1d9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1dc: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x6ff1e1u); f_007be19c();
    /* 006ff1e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ff1e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff1e6: jne 0x6ff20c */ if (!fZ) goto L_006ff20c;
L_006ff1e8:; BB(0x006ff1e8);
    /* 006ff1e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff1e9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ff1eeu); f_0068d5a8();
    /* 006ff1ee: mov ecx, eax */ r_ecx = r_eax;
    /* 006ff1f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ff1f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff1f5: je 0x6ff20c */ if (fZ) goto L_006ff20c;
L_006ff1f7:; BB(0x006ff1f7);
    /* 006ff1f7: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006ff1fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff201: jne 0x6ff20c */ if (!fZ) goto L_006ff20c;
L_006ff203:; BB(0x006ff203);
    /* 006ff203: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6ff208u); f_00694780();
    /* 006ff208: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff20a: je 0x6ff21b */ if (fZ) goto L_006ff21b;
L_006ff20c:; BB(0x006ff20c);
    /* 006ff20c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ff20f: mov esi, ebp */ r_esi = r_ebp;
    /* 006ff211: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff214: jl 0x6ff1d9 */ if ((fS!=fO)) goto L_006ff1d9;
L_006ff216:; BB(0x006ff216);
    /* 006ff216: mov esi, 0xffff */ r_esi = 0xffffu;
L_006ff21b:; BB(0x006ff21b);
    /* 006ff21b: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff221: mov ebp, 0 */ r_ebp = 0x0u;
    /* 006ff226: je 0x6ff294 */ if (fZ) goto L_006ff294;
L_006ff228:; BB(0x006ff228);
    /* 006ff228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff229: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ff22eu); f_0068d5a8();
    /* 006ff22e: mov ecx, eax */ r_ecx = r_eax;
    /* 006ff230: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ff233: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff235: je 0x6ff294 */ if (fZ) goto L_006ff294;
L_006ff237:; BB(0x006ff237);
    /* 006ff237: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 006ff23b: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 006ff23f: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006ff243: mov edx, 0xa96980 */ r_edx = 0xa96980u;
    /* 006ff248: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ff24a: mov ebx, eax */ r_ebx = r_eax;
    /* 006ff24c: mov edi, esi */ r_edi = r_esi;
    /* 006ff24e: mov esi, edx */ r_esi = r_edx;
L_006ff250:; BB(0x006ff250);
    /* 006ff250: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 006ff253: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff255: je 0x6ff25e */ if (fZ) goto L_006ff25e;
L_006ff257:; BB(0x006ff257);
    /* 006ff257: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006ff25c: jmp 0x6ff260 */ goto L_006ff260;
L_006ff25e:; BB(0x006ff25e);
    /* 006ff25e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006ff260:; BB(0x006ff260);
    /* 006ff260: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff262: je 0x6ff281 */ if (fZ) goto L_006ff281;
L_006ff264:; BB(0x006ff264);
    /* 006ff264: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff266: jne 0x6ff270 */ if (!fZ) goto L_006ff270;
L_006ff268:; BB(0x006ff268);
    /* 006ff268: movsx ecx, word ptr [esi + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 006ff26c: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff26e: jne 0x6ff281 */ if (!fZ) goto L_006ff281;
L_006ff270:; BB(0x006ff270);
    /* 006ff270: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff272: jne 0x6ff3d5 */ if (!fZ) goto L_006ff3d5;
L_006ff278:; BB(0x006ff278);
    /* 006ff278: movzx ecx, word ptr [esi + 0x10] */ r_ecx = (u32)R16((u32)(r_esi+0x10u));
    /* 006ff27c: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ff27e: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
L_006ff281:; BB(0x006ff281);
    /* 006ff281: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ff284: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ff287: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff28a: jl 0x6ff250 */ if ((fS!=fO)) goto L_006ff250;
L_006ff28c:; BB(0x006ff28c);
    /* 006ff28c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 006ff290: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_006ff294:; BB(0x006ff294);
    /* 006ff294: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ff296: jle 0x6ff47c */ if ((fZ||fS!=fO)) goto L_006ff47c;
L_006ff29c:; BB(0x006ff29c);
    /* 006ff29c: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 006ff29f: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 006ff2a3: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 006ff2a7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006ff2a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006ff2ab: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 006ff2af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006ff2b0: jae 0x6ff2e1 */ if (!fC) goto L_006ff2e1;
L_006ff2b2:; BB(0x006ff2b2);
    /* 006ff2b2: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 006ff2b6: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 006ff2bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ff2c0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006ff2c4: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 006ff2c8: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006ff2cc: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006ff2d0: movsx ecx, word ptr [esp + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 006ff2d5: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006ff2d9: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 006ff2dd: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
L_006ff2e1:; BB(0x006ff2e1);
    /* 006ff2e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006ff2e3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 006ff2e7: fmul dword ptr [0x96e464] */ ST(0) = ST(0) * R_F32((u32)(0x96e464u));
    /* 006ff2ed: fdiv dword ptr [0x96e460] */ ST(0) = ST(0) / R_F32((u32)(0x96e460u));
    /* 006ff2f3: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 006ff2f7: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 006ff2fc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ff301: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006ff305: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 006ff309: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006ff30d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006ff311: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 006ff315: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ff317: mov byte ptr [esp + 0xc], bl */ W8((u32)(r_esp+0xcu), (u8)r_ebx);
    /* 006ff31b: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 006ff31f: mov byte ptr [esp + 0xe], cl */ W8((u32)(r_esp+0xeu), (u8)r_ecx);
    /* 006ff323: mov byte ptr [esp + 0xf], dl */ W8((u32)(r_esp+0xfu), (u8)r_edx);
    /* 006ff327: mov byte ptr [esp + 0x10], dl */ W8((u32)(r_esp+0x10u), (u8)r_edx);
    /* 006ff32b: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 006ff32f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ff330: push dword ptr [ebx*4 + 0x96e484] */ { u32 v = R32((u32)(r_ebx*4+0x96e484u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ff337: call 0x83df4c */ r_esp -= 4; W32(r_esp, 0x6ff33cu); f_0083df4c();
    /* 006ff33c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ff33f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff342: je 0x6ff469 */ if (fZ) goto L_006ff469;
L_006ff348:; BB(0x006ff348);
    /* 006ff348: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 006ff34f: mov dword ptr [edi + 8], 0x43800000 */ W32((u32)(r_edi+0x8u), 0x43800000u);
L_006ff356:; BB(0x006ff356);
    /* 006ff356: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006ff35b: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
L_006ff35e:; BB(0x006ff35e);
    /* 006ff35e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ff361: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ff364: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff367: jl 0x6ff1d5 */ if ((fS!=fO)) goto L_006ff1d5;
L_006ff36d:; BB(0x006ff36d);
    /* 006ff36d: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 006ff371: mov ecx, 0xa96980 */ r_ecx = 0xa96980u;
    /* 006ff376: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ff378: mov ebp, eax */ r_ebp = r_eax;
    /* 006ff37a: mov esi, ecx */ r_esi = r_ecx;
L_006ff37c:; BB(0x006ff37c);
    /* 006ff37c: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 006ff37f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff381: je 0x6ff3c3 */ if (fZ) goto L_006ff3c3;
L_006ff383:; BB(0x006ff383);
    /* 006ff383: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff385: je 0x6ff396 */ if (fZ) goto L_006ff396;
L_006ff387:; BB(0x006ff387);
    /* 006ff387: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff389: je 0x6ff451 */ if (fZ) goto L_006ff451;
L_006ff38f:; BB(0x006ff38f);
    /* 006ff38f: and eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006ff394: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
L_006ff396:; BB(0x006ff396);
    /* 006ff396: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff398: je 0x6ff3c3 */ if (fZ) goto L_006ff3c3;
L_006ff39a:; BB(0x006ff39a);
    /* 006ff39a: movsx edi, word ptr [esi + 0x12] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x12u));
    /* 006ff39e: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff3a0: je 0x6ff3b1 */ if (fZ) goto L_006ff3b1;
L_006ff3a2:; BB(0x006ff3a2);
    /* 006ff3a2: movsx ecx, word ptr [esi + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x10u));
    /* 006ff3a6: mov eax, ecx */ r_eax = r_ecx;
    /* 006ff3a8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006ff3a9: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x006ff3a9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006ff3a9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006ff3ab: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ff3ad: mov word ptr [esi + 0x10], cx */ W16((u32)(r_esi+0x10u), (u16)r_ecx);
L_006ff3b1:; BB(0x006ff3b1);
    /* 006ff3b1: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ff3b4: mov word ptr [esi + 0x12], di */ W16((u32)(r_esi+0x12u), (u16)r_edi);
    /* 006ff3b8: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 006ff3bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ff3bd: jle 0x6ff45d */ if ((fZ||fS!=fO)) goto L_006ff45d;
L_006ff3c3:; BB(0x006ff3c3);
    /* 006ff3c3: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ff3c6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ff3c9: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff3cc: jl 0x6ff37c */ if ((fS!=fO)) goto L_006ff37c;
L_006ff3ce:; BB(0x006ff3ce);
    /* 006ff3ce: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ff3d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ff3d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff3d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ff3d4: ret  */ FN_RET(0x006ff1c0); r_esp += 4; return;
L_006ff3d5:; BB(0x006ff3d5);
    /* 006ff3d5: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 006ff3d9: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 006ff3dc: fsub dword ptr [ecx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x38u));
    /* 006ff3df: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 006ff3e2: fsub dword ptr [ecx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x40u));
    /* 006ff3e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ff3e7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ff3ea: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 006ff3ed: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 006ff3f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ff3f2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006ff3f6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ff3fa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ff3fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ff3fe: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x6ff403u); f_00782868();
    /* 006ff403: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff404: fld dword ptr [0x96e468] */ FPUSH(R_F32((u32)(0x96e468u)));
    /* 006ff40a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006ff40c: movsx ecx, word ptr [esi + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x10u));
    /* 006ff410: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006ff414: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 006ff418: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006ff41a: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 006ff41e: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 006ff423: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ff428: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006ff42c: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 006ff430: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006ff434: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006ff438: movsx ecx, word ptr [esp + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 006ff43d: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff440: jge 0x6ff447 */ if ((fS==fO)) goto L_006ff447;
L_006ff442:; BB(0x006ff442);
    /* 006ff442: mov ecx, 0xa */ r_ecx = 0xau;
L_006ff447:; BB(0x006ff447);
    /* 006ff447: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ff449: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006ff44c: jmp 0x6ff281 */ goto L_006ff281;
L_006ff451:; BB(0x006ff451);
    /* 006ff451: mov ecx, esi */ r_ecx = r_esi;
    /* 006ff453: call 0x6ffaf0 */ r_esp -= 4; W32(r_esp, 0x6ff458u); f_006ffaf0();
    /* 006ff458: jmp 0x6ff3c3 */ goto L_006ff3c3;
L_006ff45d:; BB(0x006ff45d);
    /* 006ff45d: mov ecx, esi */ r_ecx = r_esi;
    /* 006ff45f: call 0x6ffaf0 */ r_esp -= 4; W32(r_esp, 0x6ff464u); f_006ffaf0();
    /* 006ff464: jmp 0x6ff3c3 */ goto L_006ff3c3;
L_006ff469:; BB(0x006ff469);
    /* 006ff469: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 006ff46d: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006ff470: mov dword ptr [edi + 8], 0x43800000 */ W32((u32)(r_edi+0x8u), 0x43800000u);
    /* 006ff477: jmp 0x6ff356 */ goto L_006ff356;
L_006ff47c:; BB(0x006ff47c);
    /* 006ff47c: movsx ecx, word ptr [edi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 006ff47f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff482: je 0x6ff491 */ if (fZ) goto L_006ff491;
L_006ff484:; BB(0x006ff484);
    /* 006ff484: push dword ptr [ebx*4 + 0x96e484] */ { u32 v = R32((u32)(r_ebx*4+0x96e484u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ff48b: call 0x83e02c */ r_esp -= 4; W32(r_esp, 0x6ff490u); f_0083e02c();
    /* 006ff490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ff491:; BB(0x006ff491);
    /* 006ff491: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 006ff498: mov ecx, 2 */ r_ecx = 0x2u;
    /* 006ff49d: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 006ff4a0: mov dword ptr [edi + 8], 0x43800000 */ W32((u32)(r_edi+0x8u), 0x43800000u);
    /* 006ff4a7: jmp 0x6ff35e */ goto L_006ff35e;
}

void f_006ff4ac(void) /* sub_6FF4AC */
{
    FN_ENTER(0x006ff4ac);
    /* 006ff4ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff4ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff4ae: mov eax, 0xa96980 */ r_eax = 0xa96980u;
    /* 006ff4b3: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 006ff4b8: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 006ff4bd: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 006ff4c2: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff4c5: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff4cb: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff4d1:; BB(0x006ff4d1);
    /* 006ff4d1: mov eax, 0xa96998 */ r_eax = 0xa96998u;
    /* 006ff4d6: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff4d9: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff4df: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff4e5:; BB(0x006ff4e5);
    /* 006ff4e5: mov eax, 0xa969b0 */ r_eax = 0xa969b0u;
    /* 006ff4ea: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff4ed: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff4f3: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff4f9:; BB(0x006ff4f9);
    /* 006ff4f9: mov eax, 0xa969c8 */ r_eax = 0xa969c8u;
    /* 006ff4fe: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff501: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff507: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff50d:; BB(0x006ff50d);
    /* 006ff50d: mov eax, 0xa969e0 */ r_eax = 0xa969e0u;
    /* 006ff512: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff515: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff51b: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff521:; BB(0x006ff521);
    /* 006ff521: mov eax, 0xa969f8 */ r_eax = 0xa969f8u;
    /* 006ff526: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff529: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff52f: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff535:; BB(0x006ff535);
    /* 006ff535: mov eax, 0xa96a10 */ r_eax = 0xa96a10u;
    /* 006ff53a: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff53d: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff543: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff549:; BB(0x006ff549);
    /* 006ff549: mov eax, 0xa96a28 */ r_eax = 0xa96a28u;
    /* 006ff54e: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff551: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff557: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff55d:; BB(0x006ff55d);
    /* 006ff55d: mov eax, 0xa96a40 */ r_eax = 0xa96a40u;
    /* 006ff562: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff565: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff56b: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff56d:; BB(0x006ff56d);
    /* 006ff56d: mov eax, 0xa96a58 */ r_eax = 0xa96a58u;
    /* 006ff572: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff575: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff57b: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff57d:; BB(0x006ff57d);
    /* 006ff57d: mov eax, 0xa96a70 */ r_eax = 0xa96a70u;
    /* 006ff582: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff585: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff58b: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff58d:; BB(0x006ff58d);
    /* 006ff58d: mov eax, 0xa96a88 */ r_eax = 0xa96a88u;
    /* 006ff592: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff595: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff59b: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff59d:; BB(0x006ff59d);
    /* 006ff59d: mov eax, 0xa96aa0 */ r_eax = 0xa96aa0u;
    /* 006ff5a2: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff5a5: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff5ab: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff5ad:; BB(0x006ff5ad);
    /* 006ff5ad: mov eax, 0xa96ab8 */ r_eax = 0xa96ab8u;
    /* 006ff5b2: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff5b5: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff5bb: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff5bd:; BB(0x006ff5bd);
    /* 006ff5bd: mov eax, 0xa96ad0 */ r_eax = 0xa96ad0u;
    /* 006ff5c2: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff5c5: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff5cb: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff5cd:; BB(0x006ff5cd);
    /* 006ff5cd: mov eax, 0xa96ae8 */ r_eax = 0xa96ae8u;
    /* 006ff5d2: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff5d5: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff5db: je 0x6ff5df */ if (fZ) goto L_006ff5df;
L_006ff5dd:; BB(0x006ff5dd);
    /* 006ff5dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ff5df:; BB(0x006ff5df);
    /* 006ff5df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff5e1: je 0x6ff5f5 */ if (fZ) goto L_006ff5f5;
L_006ff5e3:; BB(0x006ff5e3);
    /* 006ff5e3: mov byte ptr [eax], 0xd */ W8((u32)(r_eax), 0xdu);
    /* 006ff5e6: mov word ptr [eax + 0x10], si */ W16((u32)(r_eax+0x10u), (u16)r_esi);
    /* 006ff5ea: mov word ptr [eax + 0x12], cx */ W16((u32)(r_eax+0x12u), (u16)r_ecx);
    /* 006ff5ee: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 006ff5f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff5f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ff5f4: ret  */ FN_RET(0x006ff4ac); r_esp += 4; return;
L_006ff5f5:; BB(0x006ff5f5);
    /* 006ff5f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff5f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ff5f7: ret  */ FN_RET(0x006ff4ac); r_esp += 4; return;
}

void f_006ff5f8(void) /* sub_6FF5F8 */
{
    FN_ENTER(0x006ff5f8);
    /* 006ff5f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff5f9: movzx ecx, word ptr [esp + 8] */ r_ecx = (u32)R16((u32)(r_esp+0x8u));
    /* 006ff5fe: mov eax, 0xa96980 */ r_eax = 0xa96980u;
    /* 006ff603: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff606: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006ff60b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff611: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff617:; BB(0x006ff617);
    /* 006ff617: mov eax, 0xa96998 */ r_eax = 0xa96998u;
    /* 006ff61c: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff61f: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff625: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff62b:; BB(0x006ff62b);
    /* 006ff62b: mov eax, 0xa969b0 */ r_eax = 0xa969b0u;
    /* 006ff630: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff633: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff639: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff63f:; BB(0x006ff63f);
    /* 006ff63f: mov eax, 0xa969c8 */ r_eax = 0xa969c8u;
    /* 006ff644: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff647: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff64d: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff653:; BB(0x006ff653);
    /* 006ff653: mov eax, 0xa969e0 */ r_eax = 0xa969e0u;
    /* 006ff658: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff65b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff661: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff667:; BB(0x006ff667);
    /* 006ff667: mov eax, 0xa969f8 */ r_eax = 0xa969f8u;
    /* 006ff66c: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff66f: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff675: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff67b:; BB(0x006ff67b);
    /* 006ff67b: mov eax, 0xa96a10 */ r_eax = 0xa96a10u;
    /* 006ff680: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff683: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff689: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff68f:; BB(0x006ff68f);
    /* 006ff68f: mov eax, 0xa96a28 */ r_eax = 0xa96a28u;
    /* 006ff694: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff697: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff69d: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff6a3:; BB(0x006ff6a3);
    /* 006ff6a3: mov eax, 0xa96a40 */ r_eax = 0xa96a40u;
    /* 006ff6a8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff6ab: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff6b1: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff6b3:; BB(0x006ff6b3);
    /* 006ff6b3: mov eax, 0xa96a58 */ r_eax = 0xa96a58u;
    /* 006ff6b8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff6bb: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff6c1: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff6c3:; BB(0x006ff6c3);
    /* 006ff6c3: mov eax, 0xa96a70 */ r_eax = 0xa96a70u;
    /* 006ff6c8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff6cb: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff6d1: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff6d3:; BB(0x006ff6d3);
    /* 006ff6d3: mov eax, 0xa96a88 */ r_eax = 0xa96a88u;
    /* 006ff6d8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff6db: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff6e1: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff6e3:; BB(0x006ff6e3);
    /* 006ff6e3: mov eax, 0xa96aa0 */ r_eax = 0xa96aa0u;
    /* 006ff6e8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff6eb: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff6f1: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff6f3:; BB(0x006ff6f3);
    /* 006ff6f3: mov eax, 0xa96ab8 */ r_eax = 0xa96ab8u;
    /* 006ff6f8: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff6fb: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff701: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff703:; BB(0x006ff703);
    /* 006ff703: mov eax, 0xa96ad0 */ r_eax = 0xa96ad0u;
    /* 006ff708: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff70b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff711: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff713:; BB(0x006ff713);
    /* 006ff713: mov eax, 0xa96ae8 */ r_eax = 0xa96ae8u;
    /* 006ff718: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 006ff71b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff721: je 0x6ff725 */ if (fZ) goto L_006ff725;
L_006ff723:; BB(0x006ff723);
    /* 006ff723: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ff725:; BB(0x006ff725);
    /* 006ff725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff727: je 0x6ff736 */ if (fZ) goto L_006ff736;
L_006ff729:; BB(0x006ff729);
    /* 006ff729: mov byte ptr [eax], 0x1d */ W8((u32)(r_eax), 0x1du);
    /* 006ff72c: mov word ptr [eax + 0x10], cx */ W16((u32)(r_eax+0x10u), (u16)r_ecx);
    /* 006ff730: mov word ptr [eax + 0x12], dx */ W16((u32)(r_eax+0x12u), (u16)r_edx);
    /* 006ff734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ff735: ret  */ FN_RET(0x006ff5f8); r_esp += 4; return;
L_006ff736:; BB(0x006ff736);
    /* 006ff736: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ff737: ret  */ FN_RET(0x006ff5f8); r_esp += 4; return;
}

void f_006ff738(void) /* sub_6FF738 */
{
    FN_ENTER(0x006ff738);
    /* 006ff738: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff739: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ff73a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff73b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006ff73f: movzx ebp, word ptr [esp + 0x14] */ r_ebp = (u32)R16((u32)(r_esp+0x14u));
    /* 006ff744: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006ff748: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006ff74b: mov edx, 0xa96980 */ r_edx = 0xa96980u;
    /* 006ff750: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ff752:; BB(0x006ff752);
    /* 006ff752: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 006ff755: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff75b: je 0x6ff76a */ if (fZ) goto L_006ff76a;
L_006ff75d:; BB(0x006ff75d);
    /* 006ff75d: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff763: je 0x6ff76a */ if (fZ) goto L_006ff76a;
L_006ff765:; BB(0x006ff765);
    /* 006ff765: cmp ecx, dword ptr [edx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff768: je 0x6ff7a1 */ if (fZ) goto L_006ff7a1;
L_006ff76a:; BB(0x006ff76a);
    /* 006ff76a: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ff76d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ff770: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff773: jl 0x6ff752 */ if ((fS!=fO)) goto L_006ff752;
L_006ff775:; BB(0x006ff775);
    /* 006ff775: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006ff778: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ff77a:; BB(0x006ff77a);
    /* 006ff77a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff77c: je 0x6ff7ab */ if (fZ) goto L_006ff7ab;
L_006ff77e:; BB(0x006ff77e);
    /* 006ff77e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff780: je 0x6ff7a6 */ if (fZ) goto L_006ff7a6;
L_006ff782:; BB(0x006ff782);
    /* 006ff782: mov byte ptr [edx], 0xfb */ W8((u32)(r_edx), 0xfbu);
    /* 006ff785: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006ff787: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006ff78a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006ff78d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006ff790: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 006ff793: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
L_006ff796:; BB(0x006ff796);
    /* 006ff796: mov word ptr [edx + 0x10], bp */ W16((u32)(r_edx+0x10u), (u16)r_ebp);
    /* 006ff79a: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006ff79d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff79e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ff79f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff7a0: ret  */ FN_RET(0x006ff738); r_esp += 4; return;
L_006ff7a1:; BB(0x006ff7a1);
    /* 006ff7a1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006ff7a4: jmp 0x6ff77a */ goto L_006ff77a;
L_006ff7a6:; BB(0x006ff7a6);
    /* 006ff7a6: mov byte ptr [edx], 0xf9 */ W8((u32)(r_edx), 0xf9u);
    /* 006ff7a9: jmp 0x6ff796 */ goto L_006ff796;
L_006ff7ab:; BB(0x006ff7ab);
    /* 006ff7ab: mov edx, 0xa96980 */ r_edx = 0xa96980u;
    /* 006ff7b0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff7b3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff7b5: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff7bb:; BB(0x006ff7bb);
    /* 006ff7bb: mov edx, 0xa96998 */ r_edx = 0xa96998u;
    /* 006ff7c0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff7c3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff7c5: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff7cb:; BB(0x006ff7cb);
    /* 006ff7cb: mov edx, 0xa969b0 */ r_edx = 0xa969b0u;
    /* 006ff7d0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff7d3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff7d5: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff7db:; BB(0x006ff7db);
    /* 006ff7db: mov edx, 0xa969c8 */ r_edx = 0xa969c8u;
    /* 006ff7e0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff7e3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff7e5: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff7eb:; BB(0x006ff7eb);
    /* 006ff7eb: mov edx, 0xa969e0 */ r_edx = 0xa969e0u;
    /* 006ff7f0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff7f3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff7f5: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff7fb:; BB(0x006ff7fb);
    /* 006ff7fb: mov edx, 0xa969f8 */ r_edx = 0xa969f8u;
    /* 006ff800: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff803: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff805: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff80b:; BB(0x006ff80b);
    /* 006ff80b: mov edx, 0xa96a10 */ r_edx = 0xa96a10u;
    /* 006ff810: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff813: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff815: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff817:; BB(0x006ff817);
    /* 006ff817: mov edx, 0xa96a28 */ r_edx = 0xa96a28u;
    /* 006ff81c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff81f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff821: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff823:; BB(0x006ff823);
    /* 006ff823: mov edx, 0xa96a40 */ r_edx = 0xa96a40u;
    /* 006ff828: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff82b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff82d: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff82f:; BB(0x006ff82f);
    /* 006ff82f: mov edx, 0xa96a58 */ r_edx = 0xa96a58u;
    /* 006ff834: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff837: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff839: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff83b:; BB(0x006ff83b);
    /* 006ff83b: mov edx, 0xa96a70 */ r_edx = 0xa96a70u;
    /* 006ff840: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff843: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff845: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff847:; BB(0x006ff847);
    /* 006ff847: mov edx, 0xa96a88 */ r_edx = 0xa96a88u;
    /* 006ff84c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff84f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff851: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff853:; BB(0x006ff853);
    /* 006ff853: mov edx, 0xa96aa0 */ r_edx = 0xa96aa0u;
    /* 006ff858: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff85b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff85d: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff85f:; BB(0x006ff85f);
    /* 006ff85f: mov edx, 0xa96ab8 */ r_edx = 0xa96ab8u;
    /* 006ff864: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff867: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff869: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff86b:; BB(0x006ff86b);
    /* 006ff86b: mov edx, 0xa96ad0 */ r_edx = 0xa96ad0u;
    /* 006ff870: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff873: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff875: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff877:; BB(0x006ff877);
    /* 006ff877: mov edx, 0xa96ae8 */ r_edx = 0xa96ae8u;
    /* 006ff87c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff87f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff881: je 0x6ff885 */ if (fZ) goto L_006ff885;
L_006ff883:; BB(0x006ff883);
    /* 006ff883: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ff885:; BB(0x006ff885);
    /* 006ff885: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff887: jne 0x6ff77e */ if (!fZ) goto L_006ff77e;
L_006ff88d:; BB(0x006ff88d);
    /* 006ff88d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff88e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ff88f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ff890: ret  */ FN_RET(0x006ff738); r_esp += 4; return;
}

void f_006ff894(void) /* sub_6FF894 */
{
    FN_ENTER(0x006ff894);
    /* 006ff894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ff895: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ff896: movzx ebp, word ptr [esp + 0xc] */ r_ebp = (u32)R16((u32)(r_esp+0xcu));
    /* 006ff89b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006ff89f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006ff8a2: mov edx, 0xa96980 */ r_edx = 0xa96980u;
    /* 006ff8a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ff8a9:; BB(0x006ff8a9);
    /* 006ff8a9: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 006ff8ac: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff8b2: je 0x6ff8c1 */ if (fZ) goto L_006ff8c1;
L_006ff8b4:; BB(0x006ff8b4);
    /* 006ff8b4: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff8ba: je 0x6ff8c1 */ if (fZ) goto L_006ff8c1;
L_006ff8bc:; BB(0x006ff8bc);
    /* 006ff8bc: cmp ecx, dword ptr [edx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff8bf: je 0x6ff8e2 */ if (fZ) goto L_006ff8e2;
L_006ff8c1:; BB(0x006ff8c1);
    /* 006ff8c1: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ff8c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ff8c7: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff8ca: jl 0x6ff8a9 */ if ((fS!=fO)) goto L_006ff8a9;
L_006ff8cc:; BB(0x006ff8cc);
    /* 006ff8cc: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006ff8cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ff8d1:; BB(0x006ff8d1);
    /* 006ff8d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff8d3: je 0x6ff8e7 */ if (fZ) goto L_006ff8e7;
L_006ff8d5:; BB(0x006ff8d5);
    /* 006ff8d5: mov byte ptr [edx], 0x99 */ W8((u32)(r_edx), 0x99u);
    /* 006ff8d8: mov word ptr [edx + 0x10], bp */ W16((u32)(r_edx+0x10u), (u16)r_ebp);
    /* 006ff8dc: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006ff8df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff8e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ff8e1: ret  */ FN_RET(0x006ff894); r_esp += 4; return;
L_006ff8e2:; BB(0x006ff8e2);
    /* 006ff8e2: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006ff8e5: jmp 0x6ff8d1 */ goto L_006ff8d1;
L_006ff8e7:; BB(0x006ff8e7);
    /* 006ff8e7: mov edx, 0xa96980 */ r_edx = 0xa96980u;
    /* 006ff8ec: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff8ef: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff8f1: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff8f7:; BB(0x006ff8f7);
    /* 006ff8f7: mov edx, 0xa96998 */ r_edx = 0xa96998u;
    /* 006ff8fc: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff8ff: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff901: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff907:; BB(0x006ff907);
    /* 006ff907: mov edx, 0xa969b0 */ r_edx = 0xa969b0u;
    /* 006ff90c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff90f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff911: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff917:; BB(0x006ff917);
    /* 006ff917: mov edx, 0xa969c8 */ r_edx = 0xa969c8u;
    /* 006ff91c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff91f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff921: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff927:; BB(0x006ff927);
    /* 006ff927: mov edx, 0xa969e0 */ r_edx = 0xa969e0u;
    /* 006ff92c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff92f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff931: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff937:; BB(0x006ff937);
    /* 006ff937: mov edx, 0xa969f8 */ r_edx = 0xa969f8u;
    /* 006ff93c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff93f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff941: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff947:; BB(0x006ff947);
    /* 006ff947: mov edx, 0xa96a10 */ r_edx = 0xa96a10u;
    /* 006ff94c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff94f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff951: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff953:; BB(0x006ff953);
    /* 006ff953: mov edx, 0xa96a28 */ r_edx = 0xa96a28u;
    /* 006ff958: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff95b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff95d: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff95f:; BB(0x006ff95f);
    /* 006ff95f: mov edx, 0xa96a40 */ r_edx = 0xa96a40u;
    /* 006ff964: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff967: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff969: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff96b:; BB(0x006ff96b);
    /* 006ff96b: mov edx, 0xa96a58 */ r_edx = 0xa96a58u;
    /* 006ff970: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff973: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff975: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff977:; BB(0x006ff977);
    /* 006ff977: mov edx, 0xa96a70 */ r_edx = 0xa96a70u;
    /* 006ff97c: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff97f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff981: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff983:; BB(0x006ff983);
    /* 006ff983: mov edx, 0xa96a88 */ r_edx = 0xa96a88u;
    /* 006ff988: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff98b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff98d: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff98f:; BB(0x006ff98f);
    /* 006ff98f: mov edx, 0xa96aa0 */ r_edx = 0xa96aa0u;
    /* 006ff994: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff997: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff999: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff99b:; BB(0x006ff99b);
    /* 006ff99b: mov edx, 0xa96ab8 */ r_edx = 0xa96ab8u;
    /* 006ff9a0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff9a3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff9a5: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff9a7:; BB(0x006ff9a7);
    /* 006ff9a7: mov edx, 0xa96ad0 */ r_edx = 0xa96ad0u;
    /* 006ff9ac: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff9af: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff9b1: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff9b3:; BB(0x006ff9b3);
    /* 006ff9b3: mov edx, 0xa96ae8 */ r_edx = 0xa96ae8u;
    /* 006ff9b8: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006ff9bb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff9bd: je 0x6ff9c1 */ if (fZ) goto L_006ff9c1;
L_006ff9bf:; BB(0x006ff9bf);
    /* 006ff9bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ff9c1:; BB(0x006ff9c1);
    /* 006ff9c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff9c3: jne 0x6ff8d5 */ if (!fZ) goto L_006ff8d5;
L_006ff9c9:; BB(0x006ff9c9);
    /* 006ff9c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ff9ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ff9cb: ret  */ FN_RET(0x006ff894); r_esp += 4; return;
}

void f_006ff9cc(void) /* sub_6FF9CC */
{
    FN_ENTER(0x006ff9cc);
    /* 006ff9cc: mov ecx, 0xa96980 */ r_ecx = 0xa96980u;
    /* 006ff9d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ff9d3:; BB(0x006ff9d3);
    /* 006ff9d3: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 006ff9d6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ff9d9: je 0x6ff9ec */ if (fZ) goto L_006ff9ec;
L_006ff9db:; BB(0x006ff9db);
    /* 006ff9db: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff9e1: je 0x6ff9ec */ if (fZ) goto L_006ff9ec;
L_006ff9e3:; BB(0x006ff9e3);
    /* 006ff9e3: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 006ff9e6: cmp edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ff9ea: je 0x6ff9f9 */ if (fZ) goto L_006ff9f9;
L_006ff9ec:; BB(0x006ff9ec);
    /* 006ff9ec: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ff9ef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ff9f2: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ff9f5: jl 0x6ff9d3 */ if ((fS!=fO)) goto L_006ff9d3;
L_006ff9f7:; BB(0x006ff9f7);
    /* 006ff9f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006ff9f9:; BB(0x006ff9f9);
    /* 006ff9f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ff9fb: jne 0x6ff9fe */ if (!fZ) goto L_006ff9fe;
L_006ff9fd:; BB(0x006ff9fd);
    /* 006ff9fd: ret  */ FN_RET(0x006ff9cc); r_esp += 4; return;
L_006ff9fe:; BB(0x006ff9fe);
    /* 006ff9fe: call 0x6ffaf0 */ r_esp -= 4; W32(r_esp, 0x6ffa03u); f_006ffaf0();
    /* 006ffa03: ret  */ FN_RET(0x006ff9cc); r_esp += 4; return;
}

void f_006ffa04(void) /* sub_6FFA04 */
{
    FN_ENTER(0x006ffa04);
    /* 006ffa04: mov dword ptr [0xa96b00], 0x3f800000 */ W32((u32)(0xa96b00u), 0x3f800000u);
    /* 006ffa0e: mov dword ptr [0xa96b04], 0x41000000 */ W32((u32)(0xa96b04u), 0x41000000u);
    /* 006ffa18: mov dword ptr [0xa96b08], 0x3fc00000 */ W32((u32)(0xa96b08u), 0x3fc00000u);
    /* 006ffa22: ret  */ FN_RET(0x006ffa04); r_esp += 4; return;
}

void f_006ffa24(void) /* sub_6FFA24 */
{
    FN_ENTER(0x006ffa24);
    /* 006ffa24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ffa25: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ffa27: call 0x6ffa54 */ r_esp -= 4; W32(r_esp, 0x6ffa2cu); f_006ffa54();
    /* 006ffa2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ffa2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ffa2f: mov ebx, eax */ r_ebx = r_eax;
L_006ffa31:; BB(0x006ffa31);
    /* 006ffa31: push dword ptr [ebx + 0x96e484] */ { u32 v = R32((u32)(r_ebx+0x96e484u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ffa37: call 0x83e02c */ r_esp -= 4; W32(r_esp, 0x6ffa3cu); f_0083e02c();
    /* 006ffa3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ffa3d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ffa40: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ffa43: jl 0x6ffa31 */ if ((fS!=fO)) goto L_006ffa31;
L_006ffa45:; BB(0x006ffa45);
    /* 006ffa45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ffa46: ret  */ FN_RET(0x006ffa24); r_esp += 4; return;
}

void f_006ffa48(void) /* sub_6FFA48 */
{
    FN_ENTER(0x006ffa48);
    /* 006ffa48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ffa4a: call 0x6ffa54 */ r_esp -= 4; W32(r_esp, 0x6ffa4fu); f_006ffa54();
    /* 006ffa4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ffa50: ret  */ FN_RET(0x006ffa48); r_esp += 4; return;
}

void f_006ffa54(void) /* sub_6FFA54 */
{
    FN_ENTER(0x006ffa54);
    /* 006ffa54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ffa55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ffa56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ffa57: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 006ffa5c: mov ecx, 0xa96980 */ r_ecx = 0xa96980u;
    /* 006ffa61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ffa63: mov ebp, eax */ r_ebp = r_eax;
    /* 006ffa65: mov edi, edx */ r_edi = r_edx;
    /* 006ffa67: mov esi, ecx */ r_esi = r_ecx;
L_006ffa69:; BB(0x006ffa69);
    /* 006ffa69: mov ecx, esi */ r_ecx = r_esi;
    /* 006ffa6b: call 0x6ffaf0 */ r_esp -= 4; W32(r_esp, 0x6ffa70u); f_006ffaf0();
    /* 006ffa70: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ffa73: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ffa76: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ffa79: jl 0x6ffa69 */ if ((fS!=fO)) goto L_006ffa69;
L_006ffa7b:; BB(0x006ffa7b);
    /* 006ffa7b: mov dword ptr [0xa96b10], 0 */ W32((u32)(0xa96b10u), 0x0u);
    /* 006ffa85: mov edx, edi */ r_edx = r_edi;
    /* 006ffa87: mov word ptr [0xa96b0c], dx */ W16((u32)(0xa96b0cu), (u16)r_edx);
    /* 006ffa8e: mov dword ptr [0xa96b14], 0 */ W32((u32)(0xa96b14u), 0x0u);
    /* 006ffa98: mov word ptr [0xa96b18], dx */ W16((u32)(0xa96b18u), (u16)r_edx);
    /* 006ffa9f: mov dword ptr [0xa96b1c], 0 */ W32((u32)(0xa96b1cu), 0x0u);
    /* 006ffaa9: mov word ptr [0xa96b24], dx */ W16((u32)(0xa96b24u), (u16)r_edx);
    /* 006ffab0: mov dword ptr [0xa96b20], 0 */ W32((u32)(0xa96b20u), 0x0u);
    /* 006ffaba: mov word ptr [0xa96b30], dx */ W16((u32)(0xa96b30u), (u16)r_edx);
    /* 006ffac1: mov dword ptr [0xa96b28], 0 */ W32((u32)(0xa96b28u), 0x0u);
    /* 006ffacb: mov dword ptr [0xa96b2c], 0 */ W32((u32)(0xa96b2cu), 0x0u);
    /* 006ffad5: mov dword ptr [0xa96b34], 0 */ W32((u32)(0xa96b34u), 0x0u);
    /* 006ffadf: mov dword ptr [0xa96b38], 0 */ W32((u32)(0xa96b38u), 0x0u);
    /* 006ffae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ffaea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ffaeb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ffaec: ret  */ FN_RET(0x006ffa54); r_esp += 4; return;
}

void f_006ffaf0(void) /* sub_6FFAF0 */
{
    FN_ENTER(0x006ffaf0);
    /* 006ffaf0: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006ffaf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ffaf9: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 006ffb00: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 006ffb02: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 006ffb05: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 006ffb09: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 006ffb10: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 006ffb14: mov word ptr [ecx + 0x12], ax */ W16((u32)(r_ecx+0x12u), (u16)r_eax);
    /* 006ffb18: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006ffb1b: ret  */ FN_RET(0x006ffaf0); r_esp += 4; return;
}

void f_006ffb1c(void) /* sub_6FFB1C */
{
    FN_ENTER(0x006ffb1c);
    /* 006ffb1c: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ffb21u); f_00694c6c();
    /* 006ffb21: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ffb25: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ffb28: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ffb2a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ffb2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ffb2e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ffb35: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ffb3au); f_007c1160();
    /* 006ffb3a: ret 4 */ FN_RET(0x006ffb1c); r_esp += 8; return;
}

void f_006ffb40(void) /* sub_6FFB40 */
{
    FN_ENTER(0x006ffb40);
    /* 006ffb40: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ffb45u); f_00694c6c();
    /* 006ffb45: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ffb47: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ffb49: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ffb4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ffb4e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ffb52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ffb54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ffb56: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ffb5d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ffb62u); f_007c09fc();
    /* 006ffb62: ret 4 */ FN_RET(0x006ffb40); r_esp += 8; return;
}

void f_006ffdd4(void) /* sub_6FFDD4 */
{
    FN_ENTER(0x006ffdd4);
    /* 006ffdd4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006ffdd8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ffddc: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006ffddf: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006ffde4: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006ffde7: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006ffded: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006ffdf0: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 006ffdf3: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006ffdf6: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006ffdfd: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006ffe00: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 006ffe03: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 006ffe06: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 006ffe0d: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 006ffe10: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 006ffe13: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 006ffe19: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 006ffe20: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 006ffe26: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 006ffe2c: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 006ffe32: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 006ffe39: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 006ffe3f: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 006ffe45: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 006ffe4c: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 006ffe53: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 006ffe5a: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 006ffe61: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 006ffe68: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 006ffe6f: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 006ffe76: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 006ffe7d: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 006ffe84: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 006ffe8b: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 006ffe92: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 006ffe99: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 006ffea0: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 006ffea7: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 006ffeae: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 006ffeb5: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 006ffebc: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 006ffec6: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 006ffed0: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 006ffeda: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 006ffee4: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 006ffeee: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
    /* 006ffef8: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 006fff02: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 006fff0c: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 006fff16: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 006fff20: ret  */ FN_RET(0x006ffdd4); r_esp += 4; return;
}

void f_006fff24(void) /* sub_6FFF24 */
{
    FN_ENTER(0x006fff24);
    /* 006fff24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006fff28: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006fff2c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006fff30: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006fff34: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006fff38: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006fff3c: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 006fff3e: fld dword ptr [0xa96e30] */ FPUSH(R_F32((u32)(0xa96e30u)));
    /* 006fff44: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 006fff46: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 006fff4c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006fff4e: fst dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0));
    /* 006fff51: fst dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0));
    /* 006fff54: fst dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0));
    /* 006fff57: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 006fff5a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006fff5c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006fff5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006fff60: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006fff62: fld dword ptr [0x96e59c] */ FPUSH(R_F32((u32)(0x96e59cu)));
    /* 006fff68: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006fff6a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 006fff6c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006fff6e: fst dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0));
    /* 006fff71: fst dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0));
    /* 006fff74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006fff76: fst dword ptr [eax] */ W_F32((u32)(r_eax), ST(0));
    /* 006fff78: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 006fff7b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006fff7d: fmul dword ptr [0xa96e30] */ ST(0) = ST(0) * R_F32((u32)(0xa96e30u));
    /* 006fff83: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006fff85: fst dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0));
    /* 006fff88: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 006fff8b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006fff8d: fst dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0));
    /* 006fff90: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 006fff93: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006fff95: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 006fff97: fmul dword ptr [0xa96e30] */ ST(0) = ST(0) * R_F32((u32)(0xa96e30u));
    /* 006fff9d: fst dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0));
    /* 006fffa0: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 006fffa3: fld dword ptr [0xa96e30] */ FPUSH(R_F32((u32)(0xa96e30u)));
    /* 006fffa9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006fffab: fst dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0));
    /* 006fffae: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 006fffb1: ret  */ FN_RET(0x006fff24); r_esp += 4; return;
}

void f_006fffb4(void) /* sub_6FFFB4 */
{
    FN_ENTER(0x006fffb4);
    /* 006fffb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006fffb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006fffb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006fffb9: call 0x6fffd8 */ r_esp -= 4; W32(r_esp, 0x6fffbeu); f_006fffd8();
    /* 006fffbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006fffc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006fffc4: jne 0x6fffca */ if (!fZ) goto L_006fffca;
L_006fffc6:; BB(0x006fffc6);
    /* 006fffc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006fffc7: ret 4 */ FN_RET(0x006fffb4); r_esp += 8; return;
L_006fffca:; BB(0x006fffca);
    /* 006fffca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006fffcb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6fffd0u); f_005c2f74();
    /* 006fffd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006fffd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006fffd2: ret 4 */ FN_RET(0x006fffb4); r_esp += 8; return;
}

void f_006fffd8(void) /* sub_6FFFD8 */
{
    FN_ENTER(0x006fffd8);
    /* 006fffd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006fffd9: mov ebp, esp */ r_ebp = r_esp;
    /* 006fffdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006fffdd: push 0x8effd8 */ { u32 v = 0x8effd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006fffe2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006fffe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006fffe9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ffff0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ffff3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ffff6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ffff9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ffffc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006fffff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00700002: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00700005: mov dword ptr [ecx], 0xb3eb58 */ W32((u32)(r_ecx), 0xb3eb58u);
    /* 0070000b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00700012: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x700017u); f_00710c28();
    /* 00700017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070001a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00700021: mov esp, ebp */ r_esp = r_ebp;
    /* 00700023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00700024: ret  */ FN_RET(0x006fffd8); r_esp += 4; return;
}

