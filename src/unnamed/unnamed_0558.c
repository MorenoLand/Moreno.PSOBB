#include "protos.h"

void f_00558334(void) /* sub_558334 */
{
    FN_ENTER(0x00558334);
    /* 00558334: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558335: mov ebp, esp */ r_ebp = r_esp;
    /* 00558337: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00558339: push 0x8d6464 */ { u32 v = 0x8d6464u; r_esp -= 4; W32(r_esp, v); }
    /* 0055833e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00558344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558345: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055834c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055834f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00558352: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00558355: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00558358: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0055835b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055835e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00558361: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00558368: mov dword ptr [ecx], 0xb04cc0 */ W32((u32)(r_ecx), 0xb04cc0u);
    /* 0055836e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x558373u); f_007b9c8c();
    /* 00558373: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00558376: mov edx, dword ptr [eax + 0x438] */ r_edx = R32((u32)(r_eax+0x438u));
    /* 0055837c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055837e: je 0x55839a */ if (fZ) goto L_0055839a;
L_00558380:; BB(0x00558380);
    /* 00558380: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00558384: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558389: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055838d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558390: mov dword ptr [edx + 0x438], 0 */ W32((u32)(r_edx+0x438u), 0x0u);
L_0055839a:; BB(0x0055839a);
    /* 0055839a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055839d: mov edx, dword ptr [eax + 0x43c] */ r_edx = R32((u32)(r_eax+0x43cu));
    /* 005583a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005583a5: je 0x5583c1 */ if (fZ) goto L_005583c1;
L_005583a7:; BB(0x005583a7);
    /* 005583a7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005583ab: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005583b0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005583b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005583b7: mov dword ptr [edx + 0x43c], 0 */ W32((u32)(r_edx+0x43cu), 0x0u);
L_005583c1:; BB(0x005583c1);
    /* 005583c1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005583c3:; BB(0x005583c3);
    /* 005583c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005583c6: movzx eax, word ptr [eax + ebx*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_eax+r_ebx*2+0x4e4u));
    /* 005583ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005583d0: je 0x5583eb */ if (fZ) goto L_005583eb;
L_005583d2:; BB(0x005583d2);
    /* 005583d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005583d3: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5583d8u); f_007b4d18();
    /* 005583d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005583d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005583db: je 0x5583eb */ if (fZ) goto L_005583eb;
L_005583dd:; BB(0x005583dd);
    /* 005583dd: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 005583e1: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005583e7: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_005583eb:; BB(0x005583eb);
    /* 005583eb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005583ee: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005583f1: jl 0x5583c3 */ if ((fS!=fO)) goto L_005583c3;
L_005583f3:; BB(0x005583f3);
    /* 005583f3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005583fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005583fd: lea ecx, [eax + 0x4c8] */ r_ecx = (u32)(r_eax+0x4c8u);
    /* 00558403: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x558408u); f_005769f8();
    /* 00558408: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055840f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558412: call 0x557908 */ r_esp -= 4; W32(r_esp, 0x558417u); f_00557908();
    /* 00558417: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055841a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055841c: jne 0x558437 */ if (!fZ) goto L_00558437;
L_0055841e:; BB(0x0055841e);
    /* 0055841e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00558421: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00558424: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00558427: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055842a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00558431: mov esp, ebp */ r_esp = r_ebp;
    /* 00558433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558434: ret 4 */ FN_RET(0x00558334); r_esp += 8; return;
L_00558437:; BB(0x00558437);
    /* 00558437: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055843a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055843b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x558440u); f_005c2f74();
    /* 00558440: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00558441: jmp 0x55841e */ goto L_0055841e;
}

void f_00558444(void) /* sub_558444 */
{
    FN_ENTER(0x00558444);
    /* 00558444: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558447: mov eax, dword ptr [0xa73be8] */ r_eax = R32((u32)(0xa73be8u));
    /* 0055844c: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055844f: je 0x558464 */ if (fZ) goto L_00558464;
L_00558451:; BB(0x00558451);
    /* 00558451: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558454: je 0x558464 */ if (fZ) goto L_00558464;
L_00558456:; BB(0x00558456);
    /* 00558456: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558459: je 0x558464 */ if (fZ) goto L_00558464;
L_0055845b:; BB(0x0055845b);
    /* 0055845b: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055845e: jne 0x5584e2 */ if (!fZ) goto L_005584e2;
L_00558464:; BB(0x00558464);
    /* 00558464: push dword ptr [0xa73be0] */ { u32 v = R32((u32)(0xa73be0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055846a: push 0xa73bb0 */ { u32 v = 0xa73bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055846f: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x558474u); f_00520c5c();
    /* 00558474: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558477: mov eax, dword ptr [0xa73be0] */ r_eax = R32((u32)(0xa73be0u));
    /* 0055847c: mov ecx, dword ptr [0xa73bdc] */ r_ecx = R32((u32)(0xa73bdcu));
    /* 00558482: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00558484: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 00558486: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00558489: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0055848c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0055848e: fmul qword ptr [0x925398] */ ST(0) = ST(0) * R_F64((u32)(0x925398u));
    /* 00558494: fdiv qword ptr [0x925390] */ ST(0) = ST(0) / R_F64((u32)(0x925390u));
    /* 0055849a: mov edx, dword ptr [0xa73be4] */ r_edx = R32((u32)(0xa73be4u));
    /* 005584a0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005584a3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005584a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005584ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005584b0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005584b4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005584b8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005584bb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005584bf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005584c1: mov ecx, dword ptr [0xa73be0] */ r_ecx = R32((u32)(0xa73be0u));
    /* 005584c7: mov eax, dword ptr [0xa73be4] */ r_eax = R32((u32)(0xa73be4u));
    /* 005584cc: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005584cf: mov dword ptr [0xa73be0], ecx */ W32((u32)(0xa73be0u), r_ecx);
    /* 005584d5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005584d8: mov dword ptr [0xa73be4], eax */ W32((u32)(0xa73be4u), r_eax);
    /* 005584dd: mov eax, dword ptr [0xa73be8] */ r_eax = R32((u32)(0xa73be8u));
L_005584e2:; BB(0x005584e2);
    /* 005584e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005584e5: mov dword ptr [0xa73be8], eax */ W32((u32)(0xa73be8u), r_eax);
    /* 005584ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005584ed: ret  */ FN_RET(0x00558444); r_esp += 4; return;
}

void f_005584f0(void) /* sub_5584F0 */
{
    FN_ENTER(0x005584f0);
    /* 005584f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005584f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005584f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005584f5: call 0x520220 */ r_esp -= 4; W32(r_esp, 0x5584fau); f_00520220();
    /* 005584fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005584fc: call 0x558504 */ r_esp -= 4; W32(r_esp, 0x558501u); f_00558504();
    /* 00558501: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00558502: ret  */ FN_RET(0x005584f0); r_esp += 4; return;
}

void f_00558504(void) /* sub_558504 */
{
    FN_ENTER(0x00558504);
    /* 00558504: fld dword ptr [0x925450] */ FPUSH(R_F32((u32)(0x925450u)));
    /* 0055850a: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0055850d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00558510: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00558513: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 00558519: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0055851c: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00558522: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00558528: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0055852b: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0055852e: ret  */ FN_RET(0x00558504); r_esp += 4; return;
}

void f_00558530(void)
{
    FN_ENTER(0x00558530);
    /* 00558530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558531: mov ebp, esp */ r_ebp = r_esp;
    /* 00558533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00558535: push 0x8d648c */ { u32 v = 0x8d648cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055853a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00558540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00558548: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055854b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055854e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00558551: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00558554: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00558557: push 0x51c */ { u32 v = 0x51cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055855c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00558563: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x558568u); f_005caba4();
    /* 00558568: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00558569: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0055856c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055856e: je 0x5585a7 */ if (fZ) goto L_005585a7;
L_00558570:; BB(0x00558570);
    /* 00558570: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00558577: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055857e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00558581: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00558587: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055858a: call 0x5585ac */ r_esp -= 4; W32(r_esp, 0x55858fu); f_005585ac();
    /* 0055858f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00558592: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00558599:; BB(0x00558599);
    /* 00558599: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055859c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005585a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005585a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005585a6: ret  */ FN_RET(0x00558530); r_esp += 4; return;
L_005585a7:; BB(0x005585a7);
    /* 005585a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005585a9: jmp 0x558599 */ goto L_00558599;
}

void f_005585ac(void) /* sub_5585AC */
{
    FN_ENTER(0x005585ac);
    /* 005585ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005585ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005585af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005585b1: push 0x8d64bc */ { u32 v = 0x8d64bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005585b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005585bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005585bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005585c4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005585c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005585ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005585cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005585d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005585d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005585d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005585d9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005585dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005585df: call 0x557974 */ r_esp -= 4; W32(r_esp, 0x5585e4u); f_00557974();
    /* 005585e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005585eb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005585ee: mov dword ptr [ecx], 0xb04cc0 */ W32((u32)(r_ecx), 0xb04cc0u);
    /* 005585f4: add ecx, 0x4c8 */ {  u32 a = r_ecx; u32 b = 0x4c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005585fa: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5585ffu); f_00576a48();
    /* 005585ff: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00558606: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558609: mov eax, dword ptr [0x9bde98] */ r_eax = R32((u32)(0x9bde98u));
    /* 0055860e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558612: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00558615: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x55861au); f_0051f750();
    /* 0055861a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055861d: call 0x55a1d4 */ r_esp -= 4; W32(r_esp, 0x558622u); f_0055a1d4();
    /* 00558622: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558625: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00558627: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x55862cu); f_00787550();
    /* 0055862c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055862f: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x558634u); f_00521840();
    /* 00558634: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558637: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558639: push 0x9bde40 */ { u32 v = 0x9bde40u; r_esp -= 4; W32(r_esp, v); }
    /* 0055863e: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x558643u); f_0051ff3c();
    /* 00558643: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558646: mov dword ptr [ecx + 0x440], 2 */ W32((u32)(r_ecx+0x440u), 0x2u);
    /* 00558650: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x558655u); f_005592a0();
    /* 00558655: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055865b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055865d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x558662u); f_005b8624();
    /* 00558662: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558665: movsx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0055866c: mov dword ptr [ecx + 0xd8], 0x9bdeb8 */ W32((u32)(r_ecx+0xd8u), 0x9bdeb8u);
    /* 00558676: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00558679: mov eax, dword ptr [0xa73b90] */ r_eax = R32((u32)(0xa73b90u));
    /* 0055867e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055867f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00558685: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0055868b: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x558690u); f_007aa4c8();
    /* 00558690: push dword ptr [0xa73bd0] */ { u32 v = R32((u32)(0xa73bd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00558696: push dword ptr [0xa73bd4] */ { u32 v = R32((u32)(0xa73bd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055869c: push dword ptr [0xa73bd8] */ { u32 v = R32((u32)(0xa73bd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005586a2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586a5: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005586ac: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005586b3: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5586b8u); f_00520c70();
    /* 005586b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586bb: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5586c0u); f_00520370();
    /* 005586c0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586c3: mov dword ptr [ecx + 0x358], 0x9bde9c */ W32((u32)(r_ecx+0x358u), 0x9bde9cu);
    /* 005586cd: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005586cf: mov dword ptr [ecx + 0x384], 0x41200000 */ W32((u32)(r_ecx+0x384u), 0x41200000u);
    /* 005586d9: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5586deu); f_00521820();
    /* 005586de: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586e1: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005586e3: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5586e8u); f_005217fc();
    /* 005586e8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586eb: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5586f0u); f_007751b0();
    /* 005586f0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586f3: fld dword ptr [0x92543c] */ FPUSH(R_F32((u32)(0x92543cu)));
    /* 005586f9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005586fb: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005586fe: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00558702: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558707: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0055870a: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0055870d: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00558710: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00558713: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00558716: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00558717: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558719: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055871b: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055871e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558720: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00558722: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00558725: mov word ptr [ecx + 0x446], ax */ W16((u32)(r_ecx+0x446u), (u16)r_eax);
    /* 0055872c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055872e: mov ebx, dword ptr [eax*8 + 0x925320] */ r_ebx = R32((u32)(r_eax*8+0x925320u));
    /* 00558735: mov esi, dword ptr [eax*8 + 0x925324] */ r_esi = R32((u32)(r_eax*8+0x925324u));
    /* 0055873c: mov edi, dword ptr [eax*8 + 0x925328] */ r_edi = R32((u32)(r_eax*8+0x925328u));
    /* 00558743: mov eax, dword ptr [eax*8 + 0x92532c] */ r_eax = R32((u32)(r_eax*8+0x92532cu));
    /* 0055874a: mov dword ptr [ecx + 0x4a8], ebx */ W32((u32)(r_ecx+0x4a8u), r_ebx);
    /* 00558750: mov dword ptr [ecx + 0x4ac], esi */ W32((u32)(r_ecx+0x4acu), r_esi);
    /* 00558756: mov dword ptr [ecx + 0x4b0], edi */ W32((u32)(r_ecx+0x4b0u), r_edi);
    /* 0055875c: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 00558762: mov eax, dword ptr [ecx + 0x458] */ r_eax = R32((u32)(r_ecx+0x458u));
    /* 00558768: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
    /* 0055876e: mov eax, dword ptr [ecx + 0x45c] */ r_eax = R32((u32)(r_ecx+0x45cu));
    /* 00558774: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 0055877a: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 0055877f: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00558782: mov dword ptr [ecx + 0x500], 0 */ W32((u32)(r_ecx+0x500u), 0x0u);
    /* 0055878c: mov dword ptr [ecx + 0x450], eax */ W32((u32)(r_ecx+0x450u), r_eax);
    /* 00558792: mov dword ptr [ecx + 0x504], 0 */ W32((u32)(r_ecx+0x504u), 0x0u);
    /* 0055879c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055879e: mov dword ptr [ecx + 0x4ec], eax */ W32((u32)(r_ecx+0x4ecu), r_eax);
    /* 005587a4: mov dword ptr [ecx + 0x4f0], eax */ W32((u32)(r_ecx+0x4f0u), r_eax);
    /* 005587aa: mov dword ptr [ecx + 0x508], 0 */ W32((u32)(r_ecx+0x508u), 0x0u);
    /* 005587b4: mov dword ptr [ecx + 0x4f4], eax */ W32((u32)(r_ecx+0x4f4u), r_eax);
    /* 005587ba: mov dword ptr [ecx + 0x4f8], eax */ W32((u32)(r_ecx+0x4f8u), r_eax);
    /* 005587c0: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 005587c6: mov dword ptr [ecx + 0x50c], 0 */ W32((u32)(r_ecx+0x50cu), 0x0u);
    /* 005587d0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005587d2: mov dword ptr [ecx + 0x510], 0 */ W32((u32)(r_ecx+0x510u), 0x0u);
    /* 005587dc: mov dword ptr [ecx + 0x514], 0 */ W32((u32)(r_ecx+0x514u), 0x0u);
    /* 005587e6: mov dword ptr [ecx + 0x518], 0 */ W32((u32)(r_ecx+0x518u), 0x0u);
L_005587f0:; BB(0x005587f0);
    /* 005587f0: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005587f3: movsx edx, word ptr [ecx + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 005587f7: movzx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005587fb: lea eax, [edx + ebx + 1] */ r_eax = (u32)(r_edx+r_ebx+0x1u);
    /* 005587ff: lea edi, [esi + ebx + 1] */ r_edi = (u32)(r_esi+r_ebx+0x1u);
    /* 00558803: movzx esi, di */ r_esi = (u32)(u16)r_edi;
    /* 00558806: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00558809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055880a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055880b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055880c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055880d: call 0x55be9c */ r_esp -= 4; W32(r_esp, 0x558812u); f_0055be9c();
    /* 00558812: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558815: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055881a: je 0x558828 */ if (fZ) goto L_00558828;
L_0055881c:; BB(0x0055881c);
    /* 0055881c: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00558820: mov word ptr [ecx + ebx*2 + 0x4e4], ax */ W16((u32)(r_ecx+r_ebx*2+0x4e4u), (u16)r_eax);
L_00558828:; BB(0x00558828);
    /* 00558828: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 0055882b: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0055882e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558830: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00558833: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558835: mov dword ptr [eax + ecx + 0x478], esi */ W32((u32)(r_eax+r_ecx+0x478u), r_esi);
    /* 0055883c: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 0055883f: mov dword ptr [eax + ecx + 0x47c], edi */ W32((u32)(r_eax+r_ecx+0x47cu), r_edi);
    /* 00558846: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00558849: mov dword ptr [eax + ecx + 0x480], edx */ W32((u32)(r_eax+r_ecx+0x480u), r_edx);
    /* 00558850: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00558853: mov dword ptr [ecx + ebx*4 + 0x468], eax */ W32((u32)(r_ecx+r_ebx*4+0x468u), r_eax);
    /* 0055885a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055885d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558860: jl 0x5587f0 */ if ((fS!=fO)) goto L_005587f0;
L_00558862:; BB(0x00558862);
    /* 00558862: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558864: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0055886b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055886d: call 0x55ad34 */ r_esp -= 4; W32(r_esp, 0x558872u); f_0055ad34();
    /* 00558872: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558875: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00558877:; BB(0x00558877);
    /* 00558877: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0055887a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055887c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0055887f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558881: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558883: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00558885: lea ecx, [ecx + edx + 0x3c8] */ r_ecx = (u32)(r_ecx+r_edx+0x3c8u);
    /* 0055888c: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x558891u); f_0057739c();
    /* 00558891: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00558894: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558897: jge 0x55889e */ if ((fS==fO)) goto L_0055889e;
L_00558899:; BB(0x00558899);
    /* 00558899: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055889c: jmp 0x558877 */ goto L_00558877;
L_0055889e:; BB(0x0055889e);
    /* 0055889e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005588a1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005588a4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005588a7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005588aa: movzx ecx, word ptr [eax + 0x11c] */ r_ecx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005588b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005588b3: mov dword ptr [eax + 0x438], edx */ W32((u32)(r_eax+0x438u), r_edx);
    /* 005588b9: mov dword ptr [eax + 0x43c], edx */ W32((u32)(r_eax+0x43cu), r_edx);
    /* 005588bf: or ecx, 0xffff003f */ {  u32 a = r_ecx; u32 b = 0xffff003fu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005588c5: mov word ptr [eax + 0x11c], cx */ W16((u32)(r_eax+0x11cu), (u16)r_ecx);
    /* 005588cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005588cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005588d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005588d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005588d9: ret 8 */ FN_RET(0x005585ac); r_esp += 12; return;
}

void f_00558640(void)
{
    FN_ENTER(0x00558640);
    goto L_00558640;
L_0055863e:; BB(0x0055863e);
    /* 0055863e: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x558643u); f_0051ff3c();
L_00558640:; BB(0x00558640);
    /* 00558640: js 0x55863e */ if (fS) goto L_0055863e;
L_00558642:; BB(0x00558642);
    /* 00558642: dec dword ptr [ebx - 0x7e383bb3] */ { u32 ad = (u32)(r_ebx+0x81c7c44du); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00558643: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558646: mov dword ptr [ecx + 0x440], 2 */ W32((u32)(r_ecx+0x440u), 0x2u);
    /* 00558648: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558649: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055864b: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055864d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055864f: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00558650: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x558655u); f_005592a0();
    /* 00558651: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00558652: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00558654: add byte ptr [ebx - 0x58c46ff3], cl */ { u32 ad = (u32)(r_ebx+0xa73b900du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00558655: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055865a: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055865b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055865d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x558662u); f_005b8624();
    /* 00558662: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558665: movsx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0055866c: mov dword ptr [ecx + 0xd8], 0x9bdeb8 */ W32((u32)(r_ecx+0xd8u), 0x9bdeb8u);
    /* 00558676: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00558679: mov eax, dword ptr [0xa73b90] */ r_eax = R32((u32)(0xa73b90u));
    /* 0055867e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055867f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00558685: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0055868b: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x558690u); f_007aa4c8();
    /* 00558690: push dword ptr [0xa73bd0] */ { u32 v = R32((u32)(0xa73bd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00558696: push dword ptr [0xa73bd4] */ { u32 v = R32((u32)(0xa73bd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055869c: push dword ptr [0xa73bd8] */ { u32 v = R32((u32)(0xa73bd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005586a2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586a5: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005586ac: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005586b3: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5586b8u); f_00520c70();
    /* 005586b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586bb: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5586c0u); f_00520370();
    /* 005586c0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586c3: mov dword ptr [ecx + 0x358], 0x9bde9c */ W32((u32)(r_ecx+0x358u), 0x9bde9cu);
    /* 005586cd: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005586cf: mov dword ptr [ecx + 0x384], 0x41200000 */ W32((u32)(r_ecx+0x384u), 0x41200000u);
    /* 005586d9: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5586deu); f_00521820();
    /* 005586de: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586e1: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005586e3: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5586e8u); f_005217fc();
    /* 005586e8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586eb: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5586f0u); f_007751b0();
    /* 005586f0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005586f3: fld dword ptr [0x92543c] */ FPUSH(R_F32((u32)(0x92543cu)));
    /* 005586f9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005586fb: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005586fe: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00558702: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558707: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0055870a: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0055870d: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00558710: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00558713: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00558716: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00558717: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558719: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055871b: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055871e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558720: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00558722: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00558725: mov word ptr [ecx + 0x446], ax */ W16((u32)(r_ecx+0x446u), (u16)r_eax);
    /* 0055872c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055872e: mov ebx, dword ptr [eax*8 + 0x925320] */ r_ebx = R32((u32)(r_eax*8+0x925320u));
    /* 00558735: mov esi, dword ptr [eax*8 + 0x925324] */ r_esi = R32((u32)(r_eax*8+0x925324u));
    /* 0055873c: mov edi, dword ptr [eax*8 + 0x925328] */ r_edi = R32((u32)(r_eax*8+0x925328u));
    /* 00558743: mov eax, dword ptr [eax*8 + 0x92532c] */ r_eax = R32((u32)(r_eax*8+0x92532cu));
    /* 0055874a: mov dword ptr [ecx + 0x4a8], ebx */ W32((u32)(r_ecx+0x4a8u), r_ebx);
    /* 00558750: mov dword ptr [ecx + 0x4ac], esi */ W32((u32)(r_ecx+0x4acu), r_esi);
    /* 00558756: mov dword ptr [ecx + 0x4b0], edi */ W32((u32)(r_ecx+0x4b0u), r_edi);
    /* 0055875c: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 00558762: mov eax, dword ptr [ecx + 0x458] */ r_eax = R32((u32)(r_ecx+0x458u));
    /* 00558768: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
    /* 0055876e: mov eax, dword ptr [ecx + 0x45c] */ r_eax = R32((u32)(r_ecx+0x45cu));
    /* 00558774: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 0055877a: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 0055877f: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00558782: mov dword ptr [ecx + 0x500], 0 */ W32((u32)(r_ecx+0x500u), 0x0u);
    /* 0055878c: mov dword ptr [ecx + 0x450], eax */ W32((u32)(r_ecx+0x450u), r_eax);
    /* 00558792: mov dword ptr [ecx + 0x504], 0 */ W32((u32)(r_ecx+0x504u), 0x0u);
    /* 0055879c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055879e: mov dword ptr [ecx + 0x4ec], eax */ W32((u32)(r_ecx+0x4ecu), r_eax);
    /* 005587a4: mov dword ptr [ecx + 0x4f0], eax */ W32((u32)(r_ecx+0x4f0u), r_eax);
    /* 005587aa: mov dword ptr [ecx + 0x508], 0 */ W32((u32)(r_ecx+0x508u), 0x0u);
    /* 005587b4: mov dword ptr [ecx + 0x4f4], eax */ W32((u32)(r_ecx+0x4f4u), r_eax);
    /* 005587ba: mov dword ptr [ecx + 0x4f8], eax */ W32((u32)(r_ecx+0x4f8u), r_eax);
    /* 005587c0: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 005587c6: mov dword ptr [ecx + 0x50c], 0 */ W32((u32)(r_ecx+0x50cu), 0x0u);
    /* 005587d0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005587d2: mov dword ptr [ecx + 0x510], 0 */ W32((u32)(r_ecx+0x510u), 0x0u);
    /* 005587dc: mov dword ptr [ecx + 0x514], 0 */ W32((u32)(r_ecx+0x514u), 0x0u);
    /* 005587e6: mov dword ptr [ecx + 0x518], 0 */ W32((u32)(r_ecx+0x518u), 0x0u);
L_005587f0:; BB(0x005587f0);
    /* 005587f0: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005587f3: movsx edx, word ptr [ecx + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 005587f7: movzx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005587fb: lea eax, [edx + ebx + 1] */ r_eax = (u32)(r_edx+r_ebx+0x1u);
    /* 005587ff: lea edi, [esi + ebx + 1] */ r_edi = (u32)(r_esi+r_ebx+0x1u);
    /* 00558803: movzx esi, di */ r_esi = (u32)(u16)r_edi;
    /* 00558806: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00558809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055880a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055880b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055880c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055880d: call 0x55be9c */ r_esp -= 4; W32(r_esp, 0x558812u); f_0055be9c();
    /* 00558812: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558815: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055881a: je 0x558828 */ if (fZ) goto L_00558828;
L_0055881c:; BB(0x0055881c);
    /* 0055881c: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00558820: mov word ptr [ecx + ebx*2 + 0x4e4], ax */ W16((u32)(r_ecx+r_ebx*2+0x4e4u), (u16)r_eax);
L_00558828:; BB(0x00558828);
    /* 00558828: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 0055882b: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0055882e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558830: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00558833: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558835: mov dword ptr [eax + ecx + 0x478], esi */ W32((u32)(r_eax+r_ecx+0x478u), r_esi);
    /* 0055883c: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 0055883f: mov dword ptr [eax + ecx + 0x47c], edi */ W32((u32)(r_eax+r_ecx+0x47cu), r_edi);
    /* 00558846: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00558849: mov dword ptr [eax + ecx + 0x480], edx */ W32((u32)(r_eax+r_ecx+0x480u), r_edx);
    /* 00558850: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00558853: mov dword ptr [ecx + ebx*4 + 0x468], eax */ W32((u32)(r_ecx+r_ebx*4+0x468u), r_eax);
    /* 0055885a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055885d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558860: jl 0x5587f0 */ if ((fS!=fO)) goto L_005587f0;
L_00558862:; BB(0x00558862);
    /* 00558862: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558864: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0055886b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055886d: call 0x55ad34 */ r_esp -= 4; W32(r_esp, 0x558872u); f_0055ad34();
    /* 00558872: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558875: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00558877:; BB(0x00558877);
    /* 00558877: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0055887a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055887c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0055887f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558881: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558883: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00558885: lea ecx, [ecx + edx + 0x3c8] */ r_ecx = (u32)(r_ecx+r_edx+0x3c8u);
    /* 0055888c: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x558891u); f_0057739c();
    /* 00558891: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00558894: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558897: jge 0x55889e */ if ((fS==fO)) goto L_0055889e;
L_00558899:; BB(0x00558899);
    /* 00558899: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055889c: jmp 0x558877 */ goto L_00558877;
L_0055889e:; BB(0x0055889e);
    /* 0055889e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005588a1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005588a4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005588a7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005588aa: movzx ecx, word ptr [eax + 0x11c] */ r_ecx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005588b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005588b3: mov dword ptr [eax + 0x438], edx */ W32((u32)(r_eax+0x438u), r_edx);
    /* 005588b9: mov dword ptr [eax + 0x43c], edx */ W32((u32)(r_eax+0x43cu), r_edx);
    /* 005588bf: or ecx, 0xffff003f */ {  u32 a = r_ecx; u32 b = 0xffff003fu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005588c5: mov word ptr [eax + 0x11c], cx */ W16((u32)(r_eax+0x11cu), (u16)r_ecx);
    /* 005588cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005588cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005588d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005588d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005588d9: ret 8 */ FN_RET(0x00558640); r_esp += 12; return;
}

void f_005588dc(void) /* sub_5588DC */
{
    FN_ENTER(0x005588dc);
    /* 005588dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005588dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005588de: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005588e0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005588e4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005588e7: je 0x5589c3 */ if (fZ) goto L_005589c3;
L_005588ed:; BB(0x005588ed);
    /* 005588ed: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005588f0: je 0x558984 */ if (fZ) goto L_00558984;
L_005588f6:; BB(0x005588f6);
    /* 005588f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005588f8: jne 0x55898f */ if (!fZ) goto L_0055898f;
L_005588fe:; BB(0x005588fe);
    /* 005588fe: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 00558904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00558906: jne 0x55898f */ if (!fZ) goto L_0055898f;
L_0055890c:; BB(0x0055890c);
    /* 0055890c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055890e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x558913u); f_007aa094();
    /* 00558913: mov eax, dword ptr [ebx + 0x4f0] */ r_eax = R32((u32)(r_ebx+0x4f0u));
    /* 00558919: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055891c: mov dword ptr [ebx + 0x4f0], eax */ W32((u32)(r_ebx+0x4f0u), r_eax);
    /* 00558922: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00558925: jl 0x55898f */ if ((fS!=fO)) goto L_0055898f;
L_00558927:; BB(0x00558927);
    /* 00558927: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00558929: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055892b: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x558931u); call_ind(t); }
    /* 00558931: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00558934: lea ebp, [ebx + 0x300] */ r_ebp = (u32)(r_ebx+0x300u);
    /* 0055893a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055893b: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055893e: push 0x92541c */ { u32 v = 0x92541cu; r_esp -= 4; W32(r_esp, v); }
    /* 00558943: push dword ptr [0xa73b8c] */ { u32 v = R32((u32)(0xa73b8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00558949: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x55894eu); f_00578aa0();
    /* 0055894e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558952: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558953: push 0x2d7 */ { u32 v = 0x2d7u; r_esp -= 4; W32(r_esp, v); }
    /* 00558958: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55895du); f_00814298();
    /* 0055895d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055895e: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x558963u); f_005787d0();
    /* 00558963: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558966: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 0055896c: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 00558976: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00558979: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 0055897f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00558980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558981: ret 4 */ FN_RET(0x005588dc); r_esp += 8; return;
L_00558984:; BB(0x00558984);
    /* 00558984: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 0055898a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055898d: je 0x558994 */ if (fZ) goto L_00558994;
L_0055898f:; BB(0x0055898f);
    /* 0055898f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00558990: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558991: ret 4 */ FN_RET(0x005588dc); r_esp += 8; return;
L_00558994:; BB(0x00558994);
    /* 00558994: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00558996:; BB(0x00558996);
    /* 00558996: movzx eax, word ptr [ebx + ebp*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_ebx+r_ebp*2+0x4e4u));
    /* 0055899e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055899f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5589a4u); f_007b4d18();
    /* 005589a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005589a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005589a7: jne 0x55898f */ if (!fZ) goto L_0055898f;
L_005589a9:; BB(0x005589a9);
    /* 005589a9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005589ac: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005589af: jl 0x558996 */ if ((fS!=fO)) goto L_00558996;
L_005589b1:; BB(0x005589b1);
    /* 005589b1: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005589b5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005589ba: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005589be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005589bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005589c0: ret 4 */ FN_RET(0x005588dc); r_esp += 8; return;
L_005589c3:; BB(0x005589c3);
    /* 005589c3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005589c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005589c7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5589ccu); f_0051f664();
    /* 005589cc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005589ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005589d0: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5589d6u); call_ind(t); }
    /* 005589d6: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 005589dc: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005589e1: and eax, 0xfffffdbc */ {  u32 a = r_eax; u32 b = 0xfffffdbcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005589e6: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 005589ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005589ee: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x5589f3u); f_005592a0();
    /* 005589f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005589f5: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5589fau); f_0051f894();
    /* 005589fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005589fc: mov dword ptr [ebx + 0x4ec], eax */ W32((u32)(r_ebx+0x4ecu), r_eax);
    /* 00558a02: mov dword ptr [ebx + 0x4f0], eax */ W32((u32)(r_ebx+0x4f0u), r_eax);
    /* 00558a08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00558a09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558a0a: ret 4 */ FN_RET(0x005588dc); r_esp += 8; return;
}

void f_00558a10(void) /* sub_558A10 */
{
    FN_ENTER(0x00558a10);
    /* 00558a10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00558a11: mov esi, ecx */ r_esi = r_ecx;
    /* 00558a13: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00558a17: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a1a: je 0x558aeb */ if (fZ) goto L_00558aeb;
L_00558a20:; BB(0x00558a20);
    /* 00558a20: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a23: je 0x558ad3 */ if (fZ) goto L_00558ad3;
L_00558a29:; BB(0x00558a29);
    /* 00558a29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a2b: jne 0x558ac3 */ if (!fZ) goto L_00558ac3;
L_00558a31:; BB(0x00558a31);
    /* 00558a31: mov ecx, esi */ r_ecx = r_esi;
    /* 00558a33: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x558a38u); f_007aa094();
    /* 00558a38: mov eax, dword ptr [esi + 0x4ec] */ r_eax = R32((u32)(r_esi+0x4ecu));
    /* 00558a3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a40: jne 0x558a70 */ if (!fZ) goto L_00558a70;
L_00558a42:; BB(0x00558a42);
    /* 00558a42: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00558a48: add eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558a4b: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00558a50: jbe 0x558a68 */ if ((fC||fZ)) goto L_00558a68;
L_00558a52:; BB(0x00558a52);
    /* 00558a52: mov dword ptr [esi + 0x454], 0xff */ W32((u32)(r_esi+0x454u), 0xffu);
    /* 00558a5c: mov dword ptr [esi + 0x4ec], 1 */ W32((u32)(r_esi+0x4ecu), 0x1u);
    /* 00558a66: jmp 0x558ab5 */ goto L_00558ab5;
L_00558a68:; BB(0x00558a68);
    /* 00558a68: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 00558a6e: jmp 0x558ab5 */ goto L_00558ab5;
L_00558a70:; BB(0x00558a70);
    /* 00558a70: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a73: jne 0x558aa1 */ if (!fZ) goto L_00558aa1;
L_00558a75:; BB(0x00558a75);
    /* 00558a75: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 00558a7b: add eax, -0x22 */ {  u32 a = r_eax; u32 b = 0xffffffdeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558a7e: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00558a81: ja 0x558a99 */ if ((!fC&&!fZ)) goto L_00558a99;
L_00558a83:; BB(0x00558a83);
    /* 00558a83: mov dword ptr [esi + 0x454], 0 */ W32((u32)(r_esi+0x454u), 0x0u);
    /* 00558a8d: mov dword ptr [esi + 0x4ec], 2 */ W32((u32)(r_esi+0x4ecu), 0x2u);
    /* 00558a97: jmp 0x558ab5 */ goto L_00558ab5;
L_00558a99:; BB(0x00558a99);
    /* 00558a99: mov dword ptr [esi + 0x454], eax */ W32((u32)(r_esi+0x454u), r_eax);
    /* 00558a9f: jmp 0x558ab5 */ goto L_00558ab5;
L_00558aa1:; BB(0x00558aa1);
    /* 00558aa1: mov dword ptr [esi + 0x454], 0 */ W32((u32)(r_esi+0x454u), 0x0u);
    /* 00558aab: mov dword ptr [esi + 0x4ec], 2 */ W32((u32)(r_esi+0x4ecu), 0x2u);
L_00558ab5:; BB(0x00558ab5);
    /* 00558ab5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00558ab7: mov ecx, esi */ r_ecx = r_esi;
    /* 00558ab9: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x558abfu); call_ind(t); }
    /* 00558abf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558ac0: ret 4 */ FN_RET(0x00558a10); r_esp += 8; return;
L_00558ac3:; BB(0x00558ac3);
    /* 00558ac3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00558ac6: jne 0x558ae7 */ if (!fZ) goto L_00558ae7;
L_00558ac8:; BB(0x00558ac8);
    /* 00558ac8: mov ecx, esi */ r_ecx = r_esi;
    /* 00558aca: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x558acfu); f_0051f81c();
    /* 00558acf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558ad0: ret 4 */ FN_RET(0x00558a10); r_esp += 8; return;
L_00558ad3:; BB(0x00558ad3);
    /* 00558ad3: mov eax, dword ptr [esi + 0x4ec] */ r_eax = R32((u32)(r_esi+0x4ecu));
    /* 00558ad9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00558adc: jne 0x558ae7 */ if (!fZ) goto L_00558ae7;
L_00558ade:; BB(0x00558ade);
    /* 00558ade: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558ae0: mov ecx, esi */ r_ecx = r_esi;
    /* 00558ae2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x558ae7u); f_0051f62c();
L_00558ae7:; BB(0x00558ae7);
    /* 00558ae7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558ae8: ret 4 */ FN_RET(0x00558a10); r_esp += 8; return;
L_00558aeb:; BB(0x00558aeb);
    /* 00558aeb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558aed: mov ecx, esi */ r_ecx = r_esi;
    /* 00558aef: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x558af4u); f_0051f664();
    /* 00558af4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00558af6: mov ecx, esi */ r_ecx = r_esi;
    /* 00558af8: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x558afeu); call_ind(t); }
    /* 00558afe: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00558b04: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558b07: and eax, 0xfffffdbc */ {  u32 a = r_eax; u32 b = 0xfffffdbcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00558b0c: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00558b12: mov ecx, esi */ r_ecx = r_esi;
    /* 00558b14: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x558b19u); f_005592a0();
    /* 00558b19: mov dword ptr [esi + 0x4ec], 0 */ W32((u32)(r_esi+0x4ecu), 0x0u);
    /* 00558b23: mov dword ptr [esi + 0x454], 0xffffffde */ W32((u32)(r_esi+0x454u), 0xffffffdeu);
    /* 00558b2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558b2e: ret 4 */ FN_RET(0x00558a10); r_esp += 8; return;
}

void f_00558b34(void) /* sub_558B34 */
{
    FN_ENTER(0x00558b34);
    /* 00558b34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00558b35: mov edi, ecx */ r_edi = r_ecx;
    /* 00558b37: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00558b3b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b3e: je 0x558c3c */ if (fZ) goto L_00558c3c;
L_00558b44:; BB(0x00558b44);
    /* 00558b44: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b47: je 0x558be3 */ if (fZ) goto L_00558be3;
L_00558b4d:; BB(0x00558b4d);
    /* 00558b4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00558b4f: jne 0x558bee */ if (!fZ) goto L_00558bee;
L_00558b55:; BB(0x00558b55);
    /* 00558b55: mov ecx, edi */ r_ecx = r_edi;
    /* 00558b57: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x558b5cu); f_007aa094();
    /* 00558b5c: mov eax, dword ptr [edi + 0x4ec] */ r_eax = R32((u32)(r_edi+0x4ecu));
    /* 00558b62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b64: jne 0x558b92 */ if (!fZ) goto L_00558b92;
L_00558b66:; BB(0x00558b66);
    /* 00558b66: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 00558b6c: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b71: jne 0x558b7f */ if (!fZ) goto L_00558b7f;
L_00558b73:; BB(0x00558b73);
    /* 00558b73: mov dword ptr [edi + 0x4ec], 2 */ W32((u32)(r_edi+0x4ecu), 0x2u);
    /* 00558b7d: jmp 0x558bd5 */ goto L_00558bd5;
L_00558b7f:; BB(0x00558b7f);
    /* 00558b7f: mov eax, dword ptr [edi + 0x4ec] */ r_eax = R32((u32)(r_edi+0x4ecu));
    /* 00558b85: add dword ptr [edi + 0x4f0], -1 */ { u32 ad = (u32)(r_edi+0x4f0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00558b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00558b8e: jle 0x558bf2 */ if ((fZ||fS!=fO)) goto L_00558bf2;
L_00558b90:; BB(0x00558b90);
    /* 00558b90: jmp 0x558bd5 */ goto L_00558bd5;
L_00558b92:; BB(0x00558b92);
    /* 00558b92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b95: jne 0x558bd5 */ if (!fZ) goto L_00558bd5;
L_00558b97:; BB(0x00558b97);
    /* 00558b97: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 00558b9d: lea ecx, [edi + 0x4c8] */ r_ecx = (u32)(r_edi+0x4c8u);
    /* 00558ba3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x558ba6u); call_ind(t); }
    /* 00558ba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558ba8: je 0x558bd5 */ if (fZ) goto L_00558bd5;
L_00558baa:; BB(0x00558baa);
    /* 00558baa: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00558bad: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 00558bb0: mov dword ptr [edi + 0x4ec], 3 */ W32((u32)(r_edi+0x4ecu), 0x3u);
    /* 00558bba: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00558bbd: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 00558bc0: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00558bc3: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00558bc6: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 00558bcc: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558bcf: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
L_00558bd5:; BB(0x00558bd5);
    /* 00558bd5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00558bd7: mov ecx, edi */ r_ecx = r_edi;
    /* 00558bd9: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x558bdfu); call_ind(t); }
    /* 00558bdf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00558be0: ret 4 */ FN_RET(0x00558b34); r_esp += 8; return;
L_00558be3:; BB(0x00558be3);
    /* 00558be3: mov eax, dword ptr [edi + 0x4ec] */ r_eax = R32((u32)(r_edi+0x4ecu));
    /* 00558be9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00558bec: je 0x558c25 */ if (fZ) goto L_00558c25;
L_00558bee:; BB(0x00558bee);
    /* 00558bee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00558bef: ret 4 */ FN_RET(0x00558b34); r_esp += 8; return;
L_00558bf2:; BB(0x00558bf2);
    /* 00558bf2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558bf4: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 00558bfa: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558bfd: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00558c03: mov ecx, edi */ r_ecx = r_edi;
    /* 00558c05: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x558c0au); f_0051f664();
    /* 00558c0a: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 00558c10: mov dword ptr [edi + 0x4ec], 1 */ W32((u32)(r_edi+0x4ecu), 0x1u);
    /* 00558c1a: lea ecx, [edi + 0x4c8] */ r_ecx = (u32)(r_edi+0x4c8u);
    /* 00558c20: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x558c23u); call_ind(t); }
    /* 00558c23: jmp 0x558bd5 */ goto L_00558bd5;
L_00558c25:; BB(0x00558c25);
    /* 00558c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558c27: mov ecx, edi */ r_ecx = r_edi;
    /* 00558c29: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x558c2eu); f_0051f62c();
    /* 00558c2e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00558c30: mov ecx, edi */ r_ecx = r_edi;
    /* 00558c32: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x558c38u); call_ind(t); }
    /* 00558c38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00558c39: ret 4 */ FN_RET(0x00558b34); r_esp += 8; return;
L_00558c3c:; BB(0x00558c3c);
    /* 00558c3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558c3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00558c40: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x558c45u); f_0051f664();
    /* 00558c45: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00558c47: mov ecx, edi */ r_ecx = r_edi;
    /* 00558c49: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x558c4fu); call_ind(t); }
    /* 00558c4f: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 00558c55: or eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558c58: and eax, 0xfffffdfe */ {  u32 a = r_eax; u32 b = 0xfffffdfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00558c5d: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00558c63: mov ecx, edi */ r_ecx = r_edi;
    /* 00558c65: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x558c6au); f_005592a0();
    /* 00558c6a: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 00558c74: mov dword ptr [edi + 0x4f0], 0x3c */ W32((u32)(r_edi+0x4f0u), 0x3cu);
    /* 00558c7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00558c7f: ret 4 */ FN_RET(0x00558b34); r_esp += 8; return;
}

void f_00558c84(void) /* sub_558C84 */
{
    FN_ENTER(0x00558c84);
    /* 00558c84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00558c85: mov esi, ecx */ r_esi = r_ecx;
    /* 00558c87: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00558c8b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558c8e: je 0x558f52 */ if (fZ) goto L_00558f52;
L_00558c94:; BB(0x00558c94);
    /* 00558c94: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558c97: je 0x558f3a */ if (fZ) goto L_00558f3a;
L_00558c9d:; BB(0x00558c9d);
    /* 00558c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558c9f: jne 0x558f10 */ if (!fZ) goto L_00558f10;
L_00558ca5:; BB(0x00558ca5);
    /* 00558ca5: mov ecx, esi */ r_ecx = r_esi;
    /* 00558ca7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x558cacu); f_007aa094();
    /* 00558cac: mov ecx, dword ptr [esi + 0x438] */ r_ecx = R32((u32)(r_esi+0x438u));
    /* 00558cb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558cb4: je 0x558cc2 */ if (fZ) goto L_00558cc2;
L_00558cb6:; BB(0x00558cb6);
    /* 00558cb6: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00558cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558cbd: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x558cc2u); f_00508db8();
L_00558cc2:; BB(0x00558cc2);
    /* 00558cc2: mov eax, dword ptr [esi + 0x4ec] */ r_eax = R32((u32)(r_esi+0x4ecu));
    /* 00558cc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558cca: je 0x558dff */ if (fZ) goto L_00558dff;
L_00558cd0:; BB(0x00558cd0);
    /* 00558cd0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558cd3: jne 0x558d90 */ if (!fZ) goto L_00558d90;
L_00558cd9:; BB(0x00558cd9);
    /* 00558cd9: mov eax, dword ptr [esi + 0x4f0] */ r_eax = R32((u32)(r_esi+0x4f0u));
    /* 00558cdf: fld dword ptr [esi + 0x4ac] */ FPUSH(R_F32((u32)(r_esi+0x4acu)));
    /* 00558ce5: fadd dword ptr [esi + 0x4bc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4bcu));
    /* 00558ceb: fld dword ptr [esi + 0x4b0] */ FPUSH(R_F32((u32)(r_esi+0x4b0u)));
    /* 00558cf1: fadd dword ptr [esi + 0x4c0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4c0u));
    /* 00558cf7: fld dword ptr [esi + 0x4b4] */ FPUSH(R_F32((u32)(r_esi+0x4b4u)));
    /* 00558cfd: fadd dword ptr [esi + 0x4c4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4c4u));
    /* 00558d03: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00558d05: fstp dword ptr [esi + 0x4ac] */ W_F32((u32)(r_esi+0x4acu), ST(0)); FPOP();
    /* 00558d0b: fstp dword ptr [esi + 0x4b0] */ W_F32((u32)(r_esi+0x4b0u), ST(0)); FPOP();
    /* 00558d11: fstp dword ptr [esi + 0x4b4] */ W_F32((u32)(r_esi+0x4b4u), ST(0)); FPOP();
    /* 00558d17: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558d1a: mov dword ptr [esi + 0x4f0], eax */ W32((u32)(r_esi+0x4f0u), r_eax);
    /* 00558d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00558d22: jg 0x558d75 */ if ((!fZ&&fS==fO)) goto L_00558d75;
L_00558d24:; BB(0x00558d24);
    /* 00558d24: movsx eax, word ptr [esi + 0x446] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x446u));
    /* 00558d2b: mov dword ptr [esi + 0x500], 0x3f800000 */ W32((u32)(r_esi+0x500u), 0x3f800000u);
    /* 00558d35: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558d37: mov edx, dword ptr [eax*8 + 0x925320] */ r_edx = R32((u32)(r_eax*8+0x925320u));
    /* 00558d3e: mov dword ptr [esi + 0x4ec], 2 */ W32((u32)(r_esi+0x4ecu), 0x2u);
    /* 00558d48: mov dword ptr [esi + 0x4a8], edx */ W32((u32)(r_esi+0x4a8u), r_edx);
    /* 00558d4e: mov edx, dword ptr [eax*8 + 0x925324] */ r_edx = R32((u32)(r_eax*8+0x925324u));
    /* 00558d55: mov dword ptr [esi + 0x4ac], edx */ W32((u32)(r_esi+0x4acu), r_edx);
    /* 00558d5b: mov edx, dword ptr [eax*8 + 0x925328] */ r_edx = R32((u32)(r_eax*8+0x925328u));
    /* 00558d62: mov eax, dword ptr [eax*8 + 0x92532c] */ r_eax = R32((u32)(r_eax*8+0x92532cu));
    /* 00558d69: mov dword ptr [esi + 0x4b0], edx */ W32((u32)(r_esi+0x4b0u), r_edx);
    /* 00558d6f: mov dword ptr [esi + 0x4b4], eax */ W32((u32)(r_esi+0x4b4u), r_eax);
L_00558d75:; BB(0x00558d75);
    /* 00558d75: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00558d78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558d7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558d7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00558d7e: push 0x2d4 */ { u32 v = 0x2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558d83: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x558d88u); f_008144b0();
    /* 00558d88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558d8b: jmp 0x558f02 */ goto L_00558f02;
L_00558d90:; BB(0x00558d90);
    /* 00558d90: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558d93: jne 0x558f02 */ if (!fZ) goto L_00558f02;
L_00558d99:; BB(0x00558d99);
    /* 00558d99: fld dword ptr [esi + 0x500] */ FPUSH(R_F32((u32)(r_esi+0x500u)));
    /* 00558d9f: fsub dword ptr [0x92540c] */ ST(0) = ST(0) - R_F32((u32)(0x92540cu));
    /* 00558da5: fcom dword ptr [0x925418] */ fx_compare(ST(0), R_F32((u32)(0x925418u))); 
    /* 00558dab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00558dad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00558dae: ja 0x558dde */ if ((!fC&&!fZ)) goto L_00558dde;
L_00558db0:; BB(0x00558db0);
    /* 00558db0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00558db2: mov dword ptr [esi + 0x4ec], 3 */ W32((u32)(r_esi+0x4ecu), 0x3u);
    /* 00558dbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558dbe: mov dword ptr [esi + 0x500], eax */ W32((u32)(r_esi+0x500u), r_eax);
    /* 00558dc4: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00558dc7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00558dc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558dcc: push 0x2d5 */ { u32 v = 0x2d5u; r_esp -= 4; W32(r_esp, v); }
    /* 00558dd1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x558dd6u); f_00814298();
    /* 00558dd6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558dd9: jmp 0x558f02 */ goto L_00558f02;
L_00558dde:; BB(0x00558dde);
    /* 00558dde: fstp dword ptr [esi + 0x500] */ W_F32((u32)(r_esi+0x500u), ST(0)); FPOP();
    /* 00558de4: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00558de7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558dea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558deb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558dec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00558ded: push 0x2d4 */ { u32 v = 0x2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558df2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x558df7u); f_008144b0();
    /* 00558df7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558dfa: jmp 0x558f02 */ goto L_00558f02;
L_00558dff:; BB(0x00558dff);
    /* 00558dff: fld dword ptr [0x92540c] */ FPUSH(R_F32((u32)(0x92540cu)));
    /* 00558e05: fadd dword ptr [esi + 0x500] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x500u));
    /* 00558e0b: fcom dword ptr [0x925414] */ fx_compare(ST(0), R_F32((u32)(0x925414u))); 
    /* 00558e11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00558e13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00558e14: jb 0x558ee6 */ if (fC) goto L_00558ee6;
L_00558e1a:; BB(0x00558e1a);
    /* 00558e1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00558e1c: fld dword ptr [0x925410] */ FPUSH(R_F32((u32)(0x925410u)));
    /* 00558e22: mov dword ptr [esi + 0x4ec], 1 */ W32((u32)(r_esi+0x4ecu), 0x1u);
    /* 00558e2c: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00558e31: mov dword ptr [esi + 0x4f0], 0x1e */ W32((u32)(r_esi+0x4f0u), 0x1eu);
    /* 00558e3b: mov dword ptr [esi + 0x500], eax */ W32((u32)(r_esi+0x500u), r_eax);
    /* 00558e41: movsx eax, word ptr [esi + 0x446] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x446u));
    /* 00558e48: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00558e4b: mov edx, dword ptr [ecx*8 + 0x925320] */ r_edx = R32((u32)(r_ecx*8+0x925320u));
    /* 00558e52: mov dword ptr [esi + 0x4a8], edx */ W32((u32)(r_esi+0x4a8u), r_edx);
    /* 00558e58: mov edx, dword ptr [ecx*8 + 0x925324] */ r_edx = R32((u32)(r_ecx*8+0x925324u));
    /* 00558e5f: mov dword ptr [esi + 0x4ac], edx */ W32((u32)(r_esi+0x4acu), r_edx);
    /* 00558e65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558e68: mov edx, dword ptr [ecx*8 + 0x925328] */ r_edx = R32((u32)(r_ecx*8+0x925328u));
    /* 00558e6f: mov dword ptr [esi + 0x4b0], edx */ W32((u32)(r_esi+0x4b0u), r_edx);
    /* 00558e75: mov edx, dword ptr [ecx*8 + 0x92532c] */ r_edx = R32((u32)(r_ecx*8+0x92532cu));
    /* 00558e7c: mov dword ptr [esi + 0x4b4], edx */ W32((u32)(r_esi+0x4b4u), r_edx);
    /* 00558e82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00558e83: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558e85: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00558e87: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00558e8a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558e8c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00558e8e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00558e91: mov word ptr [esi + 0x446], ax */ W16((u32)(r_esi+0x446u), (u16)r_eax);
    /* 00558e98: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558e9a: fld dword ptr [eax*8 + 0x925324] */ FPUSH(R_F32((u32)(r_eax*8+0x925324u)));
    /* 00558ea1: fsub dword ptr [ecx*8 + 0x925324] */ ST(0) = ST(0) - R_F32((u32)(r_ecx*8+0x925324u));
    /* 00558ea8: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00558eaa: fld dword ptr [eax*8 + 0x925328] */ FPUSH(R_F32((u32)(r_eax*8+0x925328u)));
    /* 00558eb1: fsub dword ptr [ecx*8 + 0x925328] */ ST(0) = ST(0) - R_F32((u32)(r_ecx*8+0x925328u));
    /* 00558eb8: fld dword ptr [eax*8 + 0x92532c] */ FPUSH(R_F32((u32)(r_eax*8+0x92532cu)));
    /* 00558ebf: fsub dword ptr [ecx*8 + 0x92532c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx*8+0x92532cu));
    /* 00558ec6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00558ec8: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00558eca: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00558ecc: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00558ece: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00558ed0: fstp dword ptr [esi + 0x4bc] */ W_F32((u32)(r_esi+0x4bcu), ST(0)); FPOP();
    /* 00558ed6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00558ed8: fstp dword ptr [esi + 0x4c0] */ W_F32((u32)(r_esi+0x4c0u), ST(0)); FPOP();
    /* 00558ede: fstp dword ptr [esi + 0x4c4] */ W_F32((u32)(r_esi+0x4c4u), ST(0)); FPOP();
    /* 00558ee4: jmp 0x558eec */ goto L_00558eec;
L_00558ee6:; BB(0x00558ee6);
    /* 00558ee6: fstp dword ptr [esi + 0x500] */ W_F32((u32)(r_esi+0x500u), ST(0)); FPOP();
L_00558eec:; BB(0x00558eec);
    /* 00558eec: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00558eef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558ef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558ef3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558ef4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00558ef5: push 0x2d4 */ { u32 v = 0x2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558efa: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x558effu); f_008144b0();
    /* 00558eff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00558f02:; BB(0x00558f02);
    /* 00558f02: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00558f04: mov ecx, esi */ r_ecx = r_esi;
    /* 00558f06: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x558f0cu); call_ind(t); }
    /* 00558f0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558f0d: ret 4 */ FN_RET(0x00558c84); r_esp += 8; return;
L_00558f10:; BB(0x00558f10);
    /* 00558f10: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00558f13: jne 0x558f4e */ if (!fZ) goto L_00558f4e;
L_00558f15:; BB(0x00558f15);
    /* 00558f15: mov edx, dword ptr [esi + 0x438] */ r_edx = R32((u32)(r_esi+0x438u));
    /* 00558f1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00558f1d: je 0x558f4e */ if (fZ) goto L_00558f4e;
L_00558f1f:; BB(0x00558f1f);
    /* 00558f1f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00558f23: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00558f28: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00558f2c: mov dword ptr [esi + 0x438], 0 */ W32((u32)(r_esi+0x438u), 0x0u);
    /* 00558f36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558f37: ret 4 */ FN_RET(0x00558c84); r_esp += 8; return;
L_00558f3a:; BB(0x00558f3a);
    /* 00558f3a: mov eax, dword ptr [esi + 0x4ec] */ r_eax = R32((u32)(r_esi+0x4ecu));
    /* 00558f40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00558f43: jne 0x558f4e */ if (!fZ) goto L_00558f4e;
L_00558f45:; BB(0x00558f45);
    /* 00558f45: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558f47: mov ecx, esi */ r_ecx = r_esi;
    /* 00558f49: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x558f4eu); f_0051f62c();
L_00558f4e:; BB(0x00558f4e);
    /* 00558f4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558f4f: ret 4 */ FN_RET(0x00558c84); r_esp += 8; return;
L_00558f52:; BB(0x00558f52);
    /* 00558f52: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558f54: mov ecx, esi */ r_ecx = r_esi;
    /* 00558f56: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x558f5bu); f_0051f664();
    /* 00558f5b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00558f5d: mov ecx, esi */ r_ecx = r_esi;
    /* 00558f5f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x558f65u); call_ind(t); }
    /* 00558f65: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00558f6b: or eax, 0x242 */ {  u32 a = r_eax; u32 b = 0x242u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00558f70: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00558f73: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00558f79: mov ecx, esi */ r_ecx = r_esi;
    /* 00558f7b: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x558f80u); f_005592a0();
    /* 00558f80: mov dword ptr [esi + 0x500], 0 */ W32((u32)(r_esi+0x500u), 0x0u);
    /* 00558f8a: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00558f8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558f91: mov dword ptr [esi + 0x4ec], eax */ W32((u32)(r_esi+0x4ecu), r_eax);
    /* 00558f97: mov dword ptr [esi + 0x4f0], eax */ W32((u32)(r_esi+0x4f0u), r_eax);
    /* 00558f9d: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00558fa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558fa4: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x558fa9u); f_00509590();
    /* 00558fa9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00558fac: mov dword ptr [esi + 0x438], eax */ W32((u32)(r_esi+0x438u), r_eax);
    /* 00558fb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00558fb3: ret 4 */ FN_RET(0x00558c84); r_esp += 8; return;
}

void f_00558fb8(void) /* sub_558FB8 */
{
    FN_ENTER(0x00558fb8);
    /* 00558fb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00558fb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00558fba: mov esi, ecx */ r_esi = r_ecx;
    /* 00558fbc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00558fc0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558fc3: je 0x559227 */ if (fZ) goto L_00559227;
L_00558fc9:; BB(0x00558fc9);
    /* 00558fc9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558fcc: je 0x5590f3 */ if (fZ) goto L_005590f3;
L_00558fd2:; BB(0x00558fd2);
    /* 00558fd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558fd4: jne 0x5590c8 */ if (!fZ) goto L_005590c8;
L_00558fda:; BB(0x00558fda);
    /* 00558fda: mov ecx, esi */ r_ecx = r_esi;
    /* 00558fdc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x558fe1u); f_007aa094();
    /* 00558fe1: mov eax, dword ptr [esi + 0x4ec] */ r_eax = R32((u32)(r_esi+0x4ecu));
    /* 00558fe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558fe9: je 0x55916c */ if (fZ) goto L_0055916c;
L_00558fef:; BB(0x00558fef);
    /* 00558fef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558ff2: je 0x559067 */ if (fZ) goto L_00559067;
L_00558ff4:; BB(0x00558ff4);
    /* 00558ff4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558ff7: jne 0x55902c */ if (!fZ) goto L_0055902c;
L_00558ff9:; BB(0x00558ff9);
    /* 00558ff9: mov eax, dword ptr [esi + 0x4f0] */ r_eax = R32((u32)(r_esi+0x4f0u));
    /* 00558fff: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559002: mov dword ptr [esi + 0x4f0], eax */ W32((u32)(r_esi+0x4f0u), r_eax);
    /* 00559008: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055900a: jle 0x559115 */ if ((fZ||fS!=fO)) goto L_00559115;
L_00559010:; BB(0x00559010);
    /* 00559010: mov ecx, dword ptr [esi + 0x43c] */ r_ecx = R32((u32)(r_esi+0x43cu));
    /* 00559016: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559018: je 0x5590b9 */ if (fZ) goto L_005590b9;
L_0055901e:; BB(0x0055901e);
    /* 0055901e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00559021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559022: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x559027u); f_00508db8();
    /* 00559027: jmp 0x5590b9 */ goto L_005590b9;
L_0055902c:; BB(0x0055902c);
    /* 0055902c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055902f: jne 0x5590b9 */ if (!fZ) goto L_005590b9;
L_00559035:; BB(0x00559035);
    /* 00559035: mov eax, dword ptr [esi + 0x4f0] */ r_eax = R32((u32)(r_esi+0x4f0u));
    /* 0055903b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055903e: mov dword ptr [esi + 0x4f0], eax */ W32((u32)(r_esi+0x4f0u), r_eax);
    /* 00559044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559046: jg 0x559052 */ if ((!fZ&&fS==fO)) goto L_00559052;
L_00559048:; BB(0x00559048);
    /* 00559048: mov dword ptr [esi + 0x4ec], 5 */ W32((u32)(r_esi+0x4ecu), 0x5u);
L_00559052:; BB(0x00559052);
    /* 00559052: mov ecx, dword ptr [esi + 0x43c] */ r_ecx = R32((u32)(r_esi+0x43cu));
    /* 00559058: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055905a: je 0x5590b9 */ if (fZ) goto L_005590b9;
L_0055905c:; BB(0x0055905c);
    /* 0055905c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0055905f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559060: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x559065u); f_00508db8();
    /* 00559065: jmp 0x5590b9 */ goto L_005590b9;
L_00559067:; BB(0x00559067);
    /* 00559067: add dword ptr [esi + 0x4f0], -1 */ { u32 ad = (u32)(r_esi+0x4f0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0055906e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00559070:; BB(0x00559070);
    /* 00559070: movzx eax, word ptr [esi + edi*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_esi+r_edi*2+0x4e4u));
    /* 00559078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559079: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55907eu); f_007b4d18();
    /* 0055907e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055907f: mov ecx, eax */ r_ecx = r_eax;
    /* 00559081: call 0x55c0b8 */ r_esp -= 4; W32(r_esp, 0x559086u); f_0055c0b8();
    /* 00559086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559088: je 0x559159 */ if (fZ) goto L_00559159;
L_0055908e:; BB(0x0055908e);
    /* 0055908e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00559091: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559094: jl 0x559070 */ if ((fS!=fO)) goto L_00559070;
L_00559096:; BB(0x00559096);
    /* 00559096: mov dword ptr [esi + 0x4ec], 2 */ W32((u32)(r_esi+0x4ecu), 0x2u);
    /* 005590a0: mov dword ptr [esi + 0x4f0], 8 */ W32((u32)(r_esi+0x4f0u), 0x8u);
L_005590aa:; BB(0x005590aa);
    /* 005590aa: mov ecx, dword ptr [esi + 0x43c] */ r_ecx = R32((u32)(r_esi+0x43cu));
    /* 005590b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005590b2: je 0x5590b9 */ if (fZ) goto L_005590b9;
L_005590b4:; BB(0x005590b4);
    /* 005590b4: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5590b9u); f_00508f48();
L_005590b9:; BB(0x005590b9);
    /* 005590b9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005590bb: mov ecx, esi */ r_ecx = r_esi;
    /* 005590bd: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5590c3u); call_ind(t); }
    /* 005590c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005590c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005590c5: ret 4 */ FN_RET(0x00558fb8); r_esp += 8; return;
L_005590c8:; BB(0x005590c8);
    /* 005590c8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005590cb: jne 0x559110 */ if (!fZ) goto L_00559110;
L_005590cd:; BB(0x005590cd);
    /* 005590cd: mov edx, dword ptr [esi + 0x43c] */ r_edx = R32((u32)(r_esi+0x43cu));
    /* 005590d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005590d5: je 0x559110 */ if (fZ) goto L_00559110;
L_005590d7:; BB(0x005590d7);
    /* 005590d7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005590db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005590e0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005590e4: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 005590ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005590ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005590f0: ret 4 */ FN_RET(0x00558fb8); r_esp += 8; return;
L_005590f3:; BB(0x005590f3);
    /* 005590f3: mov eax, dword ptr [esi + 0x4ec] */ r_eax = R32((u32)(r_esi+0x4ecu));
    /* 005590f9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005590fc: je 0x559219 */ if (fZ) goto L_00559219;
L_00559102:; BB(0x00559102);
    /* 00559102: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00559105: jne 0x559110 */ if (!fZ) goto L_00559110;
L_00559107:; BB(0x00559107);
    /* 00559107: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00559109: mov ecx, esi */ r_ecx = r_esi;
    /* 0055910b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x559110u); f_0051f62c();
L_00559110:; BB(0x00559110);
    /* 00559110: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00559111: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00559112: ret 4 */ FN_RET(0x00558fb8); r_esp += 8; return;
L_00559115:; BB(0x00559115);
    /* 00559115: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055911b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055911e: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00559124: mov ecx, esi */ r_ecx = r_esi;
    /* 00559126: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x55912bu); f_005592a0();
    /* 0055912b: mov dword ptr [esi + 0x4ec], 3 */ W32((u32)(r_esi+0x4ecu), 0x3u);
    /* 00559135: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00559138: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055913a: mov dword ptr [esi + 0x4f0], 8 */ W32((u32)(r_esi+0x4f0u), 0x8u);
    /* 00559144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559146: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559147: push 0x2cf */ { u32 v = 0x2cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0055914c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x559151u); f_00814298();
    /* 00559151: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559154: jmp 0x559010 */ goto L_00559010;
L_00559159:; BB(0x00559159);
    /* 00559159: mov eax, dword ptr [esi + 0x4f0] */ r_eax = R32((u32)(r_esi+0x4f0u));
    /* 0055915f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559161: jg 0x5590aa */ if ((!fZ&&fS==fO)) goto L_005590aa;
L_00559167:; BB(0x00559167);
    /* 00559167: jmp 0x559096 */ goto L_00559096;
L_0055916c:; BB(0x0055916c);
    /* 0055916c: add dword ptr [esi + 0x4f0], -1 */ { u32 ad = (u32)(r_esi+0x4f0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00559173: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00559175:; BB(0x00559175);
    /* 00559175: movzx eax, word ptr [esi + edi*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_esi+r_edi*2+0x4e4u));
    /* 0055917d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055917e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x559183u); f_007b4d18();
    /* 00559183: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00559184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559186: je 0x559193 */ if (fZ) goto L_00559193;
L_00559188:; BB(0x00559188);
    /* 00559188: mov ecx, eax */ r_ecx = r_eax;
    /* 0055918a: call 0x55c0b8 */ r_esp -= 4; W32(r_esp, 0x55918fu); f_0055c0b8();
    /* 0055918f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559191: je 0x559203 */ if (fZ) goto L_00559203;
L_00559193:; BB(0x00559193);
    /* 00559193: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00559196: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559199: jl 0x559175 */ if ((fS!=fO)) goto L_00559175;
L_0055919b:; BB(0x0055919b);
    /* 0055919b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0055919d:; BB(0x0055919d);
    /* 0055919d: movzx eax, word ptr [esi + edi*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_esi+r_edi*2+0x4e4u));
    /* 005591a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005591a6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5591abu); f_007b4d18();
    /* 005591ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005591ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005591ae: je 0x5591b7 */ if (fZ) goto L_005591b7;
L_005591b0:; BB(0x005591b0);
    /* 005591b0: mov ecx, eax */ r_ecx = r_eax;
    /* 005591b2: call 0x55c07c */ r_esp -= 4; W32(r_esp, 0x5591b7u); f_0055c07c();
L_005591b7:; BB(0x005591b7);
    /* 005591b7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005591ba: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005591bd: jl 0x55919d */ if ((fS!=fO)) goto L_0055919d;
L_005591bf:; BB(0x005591bf);
    /* 005591bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005591c1: mov ecx, esi */ r_ecx = r_esi;
    /* 005591c3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5591c8u); f_0051f664();
    /* 005591c8: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 005591ce: mov dword ptr [esi + 0x4ec], 1 */ W32((u32)(r_esi+0x4ecu), 0x1u);
    /* 005591d8: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005591db: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 005591e1: mov dword ptr [esi + 0x4f0], 0x3c */ W32((u32)(r_esi+0x4f0u), 0x3cu);
L_005591eb:; BB(0x005591eb);
    /* 005591eb: mov ecx, dword ptr [esi + 0x43c] */ r_ecx = R32((u32)(r_esi+0x43cu));
    /* 005591f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005591f3: je 0x5590b9 */ if (fZ) goto L_005590b9;
L_005591f9:; BB(0x005591f9);
    /* 005591f9: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5591feu); f_00508f48();
    /* 005591fe: jmp 0x5590b9 */ goto L_005590b9;
L_00559203:; BB(0x00559203);
    /* 00559203: mov eax, dword ptr [esi + 0x4f0] */ r_eax = R32((u32)(r_esi+0x4f0u));
    /* 00559209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055920b: jg 0x5591eb */ if ((!fZ&&fS==fO)) goto L_005591eb;
L_0055920d:; BB(0x0055920d);
    /* 0055920d: mov dword ptr [esi + 0x4ec], 4 */ W32((u32)(r_esi+0x4ecu), 0x4u);
    /* 00559217: jmp 0x5591eb */ goto L_005591eb;
L_00559219:; BB(0x00559219);
    /* 00559219: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055921b: mov ecx, esi */ r_ecx = r_esi;
    /* 0055921d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x559222u); f_0051f62c();
    /* 00559222: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00559223: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00559224: ret 4 */ FN_RET(0x00558fb8); r_esp += 8; return;
L_00559227:; BB(0x00559227);
    /* 00559227: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00559229: mov ecx, esi */ r_ecx = r_esi;
    /* 0055922b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x559230u); f_0051f664();
    /* 00559230: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00559232: mov ecx, esi */ r_ecx = r_esi;
    /* 00559234: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x55923au); call_ind(t); }
    /* 0055923a: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00559240: and eax, 0xfffffdac */ {  u32 a = r_eax; u32 b = 0xfffffdacu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00559245: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0055924b: mov ecx, esi */ r_ecx = r_esi;
    /* 0055924d: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x559252u); f_005592a0();
    /* 00559252: mov dword ptr [esi + 0x4ec], 0 */ W32((u32)(r_esi+0x4ecu), 0x0u);
    /* 0055925c: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 00559261: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00559264: mov dword ptr [esi + 0x4f0], 0xf */ W32((u32)(r_esi+0x4f0u), 0xfu);
    /* 0055926e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055926f: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x559274u); f_00509590();
    /* 00559274: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559277: mov dword ptr [esi + 0x43c], eax */ W32((u32)(r_esi+0x43cu), r_eax);
    /* 0055927d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055927f: je 0x559288 */ if (fZ) goto L_00559288;
L_00559281:; BB(0x00559281);
    /* 00559281: mov ecx, eax */ r_ecx = r_eax;
    /* 00559283: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x559288u); f_00508f48();
L_00559288:; BB(0x00559288);
    /* 00559288: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055928a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055928b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055928c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055928d: push 0x2d6 */ { u32 v = 0x2d6u; r_esp -= 4; W32(r_esp, v); }
    /* 00559292: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x559297u); f_00814298();
    /* 00559297: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055929a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055929b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055929c: ret 4 */ FN_RET(0x00558fb8); r_esp += 8; return;
}

