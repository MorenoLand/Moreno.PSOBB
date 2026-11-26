#include "protos.h"

void f_00616267(void)
{
    FN_ENTER(0x00616267);
    /* 00616267: mov word ptr [eax + 0xd8], dx */ W16((u32)(r_eax+0xd8u), (u16)r_edx);
    /* 0061626e: movzx edx, word ptr [eax + 0xda] */ r_edx = (u32)R16((u32)(r_eax+0xdau));
    /* 00616275: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616278: jne 0x616283 */ if (!fZ) goto L_00616283;
L_0061627a:; BB(0x0061627a);
    /* 0061627a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061627c: mov word ptr [eax + 0xda], dx */ W16((u32)(r_eax+0xdau), (u16)r_edx);
L_00616283:; BB(0x00616283);
    /* 00616283: movzx edx, word ptr [eax + 0xdc] */ r_edx = (u32)R16((u32)(r_eax+0xdcu));
    /* 0061628a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061628d: jne 0x616298 */ if (!fZ) goto L_00616298;
L_0061628f:; BB(0x0061628f);
    /* 0061628f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616291: mov word ptr [eax + 0xdc], dx */ W16((u32)(r_eax+0xdcu), (u16)r_edx);
L_00616298:; BB(0x00616298);
    /* 00616298: movzx edx, word ptr [eax + 0xde] */ r_edx = (u32)R16((u32)(r_eax+0xdeu));
    /* 0061629f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162a2: jne 0x6162ad */ if (!fZ) goto L_006162ad;
L_006162a4:; BB(0x006162a4);
    /* 006162a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006162a6: mov word ptr [eax + 0xde], dx */ W16((u32)(r_eax+0xdeu), (u16)r_edx);
L_006162ad:; BB(0x006162ad);
    /* 006162ad: movzx edx, word ptr [eax + 0xe0] */ r_edx = (u32)R16((u32)(r_eax+0xe0u));
    /* 006162b4: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162b7: jne 0x6162c2 */ if (!fZ) goto L_006162c2;
L_006162b9:; BB(0x006162b9);
    /* 006162b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006162bb: mov word ptr [eax + 0xe0], dx */ W16((u32)(r_eax+0xe0u), (u16)r_edx);
L_006162c2:; BB(0x006162c2);
    /* 006162c2: movzx edx, word ptr [eax + 0xe2] */ r_edx = (u32)R16((u32)(r_eax+0xe2u));
    /* 006162c9: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162cc: jne 0x6162d7 */ if (!fZ) goto L_006162d7;
L_006162ce:; BB(0x006162ce);
    /* 006162ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006162d0: mov word ptr [eax + 0xe2], dx */ W16((u32)(r_eax+0xe2u), (u16)r_edx);
L_006162d7:; BB(0x006162d7);
    /* 006162d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006162d9: mov word ptr [eax + 0xe4], dx */ W16((u32)(r_eax+0xe4u), (u16)r_edx);
    /* 006162e0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006162e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006162e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006162ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006162ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006162f0: ret 8 */ FN_RET(0x00616267); r_esp += 12; return;
}

void f_006162f4(void) /* sub_6162F4 */
{
    FN_ENTER(0x006162f4);
    /* 006162f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006162f5: mov ebp, dword ptr [ecx + 0x5c] */ r_ebp = R32((u32)(r_ecx+0x5cu));
    /* 006162f8: mov edx, ebp */ r_edx = r_ebp;
    /* 006162fa: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006162fd: jb 0x616303 */ if (fC) goto L_00616303;
L_006162ff:; BB(0x006162ff);
    /* 006162ff: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00616301: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00616303:; BB(0x00616303);
    /* 00616303: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00616306: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 0061630c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061630f: jb 0x61631f */ if (fC) goto L_0061631f;
L_00616311:; BB(0x00616311);
    /* 00616311: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 0061631b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0061631d: jmp 0x616325 */ goto L_00616325;
L_0061631f:; BB(0x0061631f);
    /* 0061631f: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
L_00616325:; BB(0x00616325);
    /* 00616325: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00616328: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0061632a: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 00616330: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616332: jne 0x616342 */ if (!fZ) goto L_00616342;
L_00616334:; BB(0x00616334);
    /* 00616334: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0061633a: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 00616340: jmp 0x616365 */ goto L_00616365;
L_00616342:; BB(0x00616342);
    /* 00616342: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00616349: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061634e: jle 0x61635e */ if ((fZ||fS!=fO)) goto L_0061635e;
L_00616350:; BB(0x00616350);
    /* 00616350: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00616355: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
    /* 0061635c: jmp 0x616365 */ goto L_00616365;
L_0061635e:; BB(0x0061635e);
    /* 0061635e: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
L_00616365:; BB(0x00616365);
    /* 00616365: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0061636b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061636d: je 0x61638c */ if (fZ) goto L_0061638c;
L_0061636f:; BB(0x0061636f);
    /* 0061636f: jl 0x616380 */ if ((fS!=fO)) goto L_00616380;
L_00616371:; BB(0x00616371);
    /* 00616371: mov eax, dword ptr [0xa8eaf0] */ r_eax = R32((u32)(0xa8eaf0u));
    /* 00616376: mov dword ptr [ecx + 0x12c], edx */ W32((u32)(r_ecx+0x12cu), r_edx);
    /* 0061637c: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061637e: jl 0x616392 */ if ((fS!=fO)) goto L_00616392;
L_00616380:; BB(0x00616380);
    /* 00616380: mov dword ptr [ecx + 0x12c], 0 */ W32((u32)(r_ecx+0x12cu), 0x0u);
    /* 0061638a: jmp 0x616392 */ goto L_00616392;
L_0061638c:; BB(0x0061638c);
    /* 0061638c: mov dword ptr [ecx + 0x12c], edx */ W32((u32)(r_ecx+0x12cu), r_edx);
L_00616392:; BB(0x00616392);
    /* 00616392: mov dword ptr [ecx + 0x128], 0 */ W32((u32)(r_ecx+0x128u), 0x0u);
    /* 0061639c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061639d: ret  */ FN_RET(0x006162f4); r_esp += 4; return;
}

void f_00616369(void)
{
    FN_ENTER(0x00616369);
    /* 00616369: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061636b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061636d: je 0x61638c */ if (fZ) goto L_0061638c;
L_0061636f:; BB(0x0061636f);
    /* 0061636f: jl 0x616380 */ if ((fS!=fO)) goto L_00616380;
L_00616371:; BB(0x00616371);
    /* 00616371: mov eax, dword ptr [0xa8eaf0] */ r_eax = R32((u32)(0xa8eaf0u));
    /* 00616376: mov dword ptr [ecx + 0x12c], edx */ W32((u32)(r_ecx+0x12cu), r_edx);
    /* 0061637c: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061637e: jl 0x616392 */ if ((fS!=fO)) goto L_00616392;
L_00616380:; BB(0x00616380);
    /* 00616380: mov dword ptr [ecx + 0x12c], 0 */ W32((u32)(r_ecx+0x12cu), 0x0u);
    /* 0061638a: jmp 0x616392 */ goto L_00616392;
L_0061638c:; BB(0x0061638c);
    /* 0061638c: mov dword ptr [ecx + 0x12c], edx */ W32((u32)(r_ecx+0x12cu), r_edx);
L_00616392:; BB(0x00616392);
    /* 00616392: mov dword ptr [ecx + 0x128], 0 */ W32((u32)(r_ecx+0x128u), 0x0u);
    /* 0061639c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061639d: ret  */ FN_RET(0x00616369); r_esp += 4; return;
}

void f_006163a0(void) /* sub_6163A0 */
{
    FN_ENTER(0x006163a0);
    /* 006163a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006163a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006163a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006163a5: push 0x8e14e4 */ { u32 v = 0x8e14e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006163aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006163b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006163b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006163b8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006163bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006163be: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006163c1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006163c4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006163c7: mov eax, dword ptr [0xa8eaec] */ r_eax = R32((u32)(0xa8eaecu));
    /* 006163cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006163ce: je 0x616517 */ if (fZ) goto L_00616517;
L_006163d4:; BB(0x006163d4);
    /* 006163d4: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 006163d7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006163da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006163dc: je 0x616517 */ if (fZ) goto L_00616517;
L_006163e2:; BB(0x006163e2);
    /* 006163e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006163e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006163e7: je 0x616506 */ if (fZ) goto L_00616506;
L_006163ed:; BB(0x006163ed);
    /* 006163ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006163f0: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 006163f6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006163f9: jne 0x616506 */ if (!fZ) goto L_00616506;
L_006163ff:; BB(0x006163ff);
    /* 006163ff: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 00616405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616407: je 0x616413 */ if (fZ) goto L_00616413;
L_00616409:; BB(0x00616409);
    /* 00616409: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061640c: je 0x616437 */ if (fZ) goto L_00616437;
L_0061640e:; BB(0x0061640e);
    /* 0061640e: jmp 0x616506 */ goto L_00616506;
L_00616413:; BB(0x00616413);
    /* 00616413: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616419: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061641c: lea edx, [eax + 0xa4] */ r_edx = (u32)(r_eax+0xa4u);
    /* 00616422: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616427: call 0x814028 */ r_esp -= 4; W32(r_esp, 0x61642cu); f_00814028();
    /* 0061642c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061642f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00616431: jl 0x616506 */ if ((fS!=fO)) goto L_00616506;
L_00616437:; BB(0x00616437);
    /* 00616437: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061643a: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00616440: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616442: jne 0x6164d6 */ if (!fZ) goto L_006164d6;
L_00616448:; BB(0x00616448);
    /* 00616448: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 0061644d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061644f: je 0x616506 */ if (fZ) goto L_00616506;
L_00616455:; BB(0x00616455);
    /* 00616455: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061645c: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00616461: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x616466u); f_005caba4();
    /* 00616466: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061646c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061646f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616471: je 0x61652e */ if (fZ) goto L_0061652e;
L_00616477:; BB(0x00616477);
    /* 00616477: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061647e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616485: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616488: push dword ptr [eax + 0x94] */ { u32 v = R32((u32)(r_eax+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061648e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616491: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616497: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x61649cu); f_006bc800();
    /* 0061649c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006164a3:; BB(0x006164a3);
    /* 006164a3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006164a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006164a9: mov dword ptr [edx + 0x124], eax */ W32((u32)(r_edx+0x124u), r_eax);
    /* 006164af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006164b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006164b8: je 0x6164c7 */ if (fZ) goto L_006164c7;
L_006164ba:; BB(0x006164ba);
    /* 006164ba: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006164c0: mov ecx, eax */ r_ecx = r_eax;
    /* 006164c2: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x6164c7u); f_008172d4();
L_006164c7:; BB(0x006164c7);
    /* 006164c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006164ca: mov dword ptr [eax + 0x128], 1 */ W32((u32)(r_eax+0x128u), 0x1u);
    /* 006164d4: jmp 0x616506 */ goto L_00616506;
L_006164d6:; BB(0x006164d6);
    /* 006164d6: movzx edx, word ptr [eax + 0x94] */ r_edx = (u32)R16((u32)(r_eax+0x94u));
    /* 006164dd: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006164e3: jge 0x616506 */ if ((fS==fO)) goto L_00616506;
L_006164e5:; BB(0x006164e5);
    /* 006164e5: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 006164ea: mov byte ptr [ebp - 0x38], 0x93 */ W8((u32)(r_ebp+0xffffffc8u), 0x93u);
    /* 006164ee: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 006164f2: mov byte ptr [ebp - 0x37], 3 */ W8((u32)(r_ebp+0xffffffc9u), 0x3u);
    /* 006164f6: mov word ptr [ebp - 0x32], dx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_edx);
    /* 006164fa: mov byte ptr [ebp - 0x30], 1 */ W8((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006164fe: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00616501: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x616506u); f_008003e0();
L_00616506:; BB(0x00616506);
    /* 00616506: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616509: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061650c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061650f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616511: jne 0x6163e2 */ if (!fZ) goto L_006163e2;
L_00616517:; BB(0x00616517);
    /* 00616517: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061651a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061651d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616520: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616523: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061652a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061652c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061652d: ret  */ FN_RET(0x006163a0); r_esp += 4; return;
L_0061652e:; BB(0x0061652e);
    /* 0061652e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616530: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616533: jmp 0x6164a3 */ goto L_006164a3;
}

void f_0061645f(void)
{
    FN_ENTER(0x0061645f);
    goto L_0061645f;
L_006163e2:; BB(0x006163e2);
    /* 006163e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006163e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006163e7: je 0x616506 */ if (fZ) goto L_00616506;
L_006163ed:; BB(0x006163ed);
    /* 006163ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006163f0: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 006163f6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006163f9: jne 0x616506 */ if (!fZ) goto L_00616506;
L_006163ff:; BB(0x006163ff);
    /* 006163ff: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 00616405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616407: je 0x616413 */ if (fZ) goto L_00616413;
L_00616409:; BB(0x00616409);
    /* 00616409: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061640c: je 0x616437 */ if (fZ) goto L_00616437;
L_0061640e:; BB(0x0061640e);
    /* 0061640e: jmp 0x616506 */ goto L_00616506;
L_00616413:; BB(0x00616413);
    /* 00616413: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616419: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061641c: lea edx, [eax + 0xa4] */ r_edx = (u32)(r_eax+0xa4u);
    /* 00616422: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616427: call 0x814028 */ r_esp -= 4; W32(r_esp, 0x61642cu); f_00814028();
    /* 0061642c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061642f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00616431: jl 0x616506 */ if ((fS!=fO)) goto L_00616506;
L_00616437:; BB(0x00616437);
    /* 00616437: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061643a: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00616440: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616442: jne 0x6164d6 */ if (!fZ) goto L_006164d6;
L_00616448:; BB(0x00616448);
    /* 00616448: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 0061644d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061644f: je 0x616506 */ if (fZ) goto L_00616506;
L_00616455:; BB(0x00616455);
    /* 00616455: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061645c: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
L_0061645f:; BB(0x0061645f);
    /* 0061645f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00616461: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x616466u); f_005caba4();
    /* 00616466: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061646c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061646f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616471: je 0x61652e */ if (fZ) goto L_0061652e;
L_00616477:; BB(0x00616477);
    /* 00616477: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061647e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616485: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616488: push dword ptr [eax + 0x94] */ { u32 v = R32((u32)(r_eax+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061648e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616491: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616497: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x61649cu); f_006bc800();
    /* 0061649c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006164a3:; BB(0x006164a3);
    /* 006164a3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006164a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006164a9: mov dword ptr [edx + 0x124], eax */ W32((u32)(r_edx+0x124u), r_eax);
    /* 006164af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006164b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006164b8: je 0x6164c7 */ if (fZ) goto L_006164c7;
L_006164ba:; BB(0x006164ba);
    /* 006164ba: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006164c0: mov ecx, eax */ r_ecx = r_eax;
    /* 006164c2: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x6164c7u); f_008172d4();
L_006164c7:; BB(0x006164c7);
    /* 006164c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006164ca: mov dword ptr [eax + 0x128], 1 */ W32((u32)(r_eax+0x128u), 0x1u);
    /* 006164d4: jmp 0x616506 */ goto L_00616506;
L_006164d6:; BB(0x006164d6);
    /* 006164d6: movzx edx, word ptr [eax + 0x94] */ r_edx = (u32)R16((u32)(r_eax+0x94u));
    /* 006164dd: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006164e3: jge 0x616506 */ if ((fS==fO)) goto L_00616506;
L_006164e5:; BB(0x006164e5);
    /* 006164e5: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 006164ea: mov byte ptr [ebp - 0x38], 0x93 */ W8((u32)(r_ebp+0xffffffc8u), 0x93u);
    /* 006164ee: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 006164f2: mov byte ptr [ebp - 0x37], 3 */ W8((u32)(r_ebp+0xffffffc9u), 0x3u);
    /* 006164f6: mov word ptr [ebp - 0x32], dx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_edx);
    /* 006164fa: mov byte ptr [ebp - 0x30], 1 */ W8((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006164fe: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00616501: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x616506u); f_008003e0();
L_00616506:; BB(0x00616506);
    /* 00616506: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616509: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061650c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061650f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616511: jne 0x6163e2 */ if (!fZ) goto L_006163e2;
L_00616517:; BB(0x00616517);
    /* 00616517: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061651a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061651d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00616520: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616523: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061652a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061652c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061652d: ret  */ FN_RET(0x0061645f); r_esp += 4; return;
L_0061652e:; BB(0x0061652e);
    /* 0061652e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616530: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00616533: jmp 0x6164a3 */ goto L_006164a3;
}

void f_00616538(void) /* sub_616538 */
{
    FN_ENTER(0x00616538);
    /* 00616538: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00616539: mov esi, ecx */ r_esi = r_ecx;
    /* 0061653b: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 00616541: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616543: jne 0x616580 */ if (!fZ) goto L_00616580;
L_00616545:; BB(0x00616545);
    /* 00616545: mov eax, dword ptr [esi + 0x128] */ r_eax = R32((u32)(r_esi+0x128u));
    /* 0061654b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061654d: jne 0x616558 */ if (!fZ) goto L_00616558;
L_0061654f:; BB(0x0061654f);
    /* 0061654f: mov ecx, esi */ r_ecx = r_esi;
    /* 00616551: call 0x6165ac */ r_esp -= 4; W32(r_esp, 0x616556u); f_006165ac();
    /* 00616556: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00616557: ret  */ FN_RET(0x00616538); r_esp += 4; return;
L_00616558:; BB(0x00616558);
    /* 00616558: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061655b: jne 0x6165a8 */ if (!fZ) goto L_006165a8;
L_0061655d:; BB(0x0061655d);
    /* 0061655d: mov ecx, dword ptr [esi + 0x124] */ r_ecx = R32((u32)(r_esi+0x124u));
    /* 00616563: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616565: je 0x6165a8 */ if (fZ) goto L_006165a8;
L_00616567:; BB(0x00616567);
    /* 00616567: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x61656cu); f_008173b4();
    /* 0061656c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061656e: jne 0x6165a8 */ if (!fZ) goto L_006165a8;
L_00616570:; BB(0x00616570);
    /* 00616570: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616572: mov dword ptr [esi + 0x124], eax */ W32((u32)(r_esi+0x124u), r_eax);
    /* 00616578: mov dword ptr [esi + 0x128], eax */ W32((u32)(r_esi+0x128u), r_eax);
    /* 0061657e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061657f: ret  */ FN_RET(0x00616538); r_esp += 4; return;
L_00616580:; BB(0x00616580);
    /* 00616580: movzx eax, word ptr [esi + 0x94] */ r_eax = (u32)R16((u32)(r_esi+0x94u));
    /* 00616587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616588: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61658du); f_00816eec();
    /* 0061658d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061658e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00616591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616593: je 0x6165a1 */ if (fZ) goto L_006165a1;
L_00616595:; BB(0x00616595);
    /* 00616595: mov dword ptr [esi + 0xa0], 0 */ W32((u32)(r_esi+0xa0u), 0x0u);
    /* 0061659f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006165a0: ret  */ FN_RET(0x00616538); r_esp += 4; return;
L_006165a1:; BB(0x006165a1);
    /* 006165a1: mov ecx, esi */ r_ecx = r_esi;
    /* 006165a3: call 0x6165ac */ r_esp -= 4; W32(r_esp, 0x6165a8u); f_006165ac();
L_006165a8:; BB(0x006165a8);
    /* 006165a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006165a9: ret  */ FN_RET(0x00616538); r_esp += 4; return;
}

void f_00616572(void)
{
    FN_ENTER(0x00616572);
    /* 00616572: mov dword ptr [esi + 0x124], eax */ W32((u32)(r_esi+0x124u), r_eax);
    /* 00616578: mov dword ptr [esi + 0x128], eax */ W32((u32)(r_esi+0x128u), r_eax);
    /* 0061657e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061657f: ret  */ FN_RET(0x00616572); r_esp += 4; return;
}

void f_006165ac(void) /* sub_6165AC */
{
    FN_ENTER(0x006165ac);
    /* 006165ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006165ad: mov edi, ecx */ r_edi = r_ecx;
    /* 006165af: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006165b5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6165bau); f_0068d5a8();
    /* 006165ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006165bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006165bd: je 0x6165f0 */ if (fZ) goto L_006165f0;
L_006165bf:; BB(0x006165bf);
    /* 006165bf: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006165c2: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 006165c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006165c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006165c7: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6165ccu); f_007a9180();
    /* 006165cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006165cf: fcomp dword ptr [edi + 0x9c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x9cu))); FPOP();
    /* 006165d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006165d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006165d8: jae 0x6165e6 */ if (!fC) goto L_006165e6;
L_006165da:; BB(0x006165da);
    /* 006165da: mov dword ptr [edi + 0xa0], 1 */ W32((u32)(r_edi+0xa0u), 0x1u);
    /* 006165e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006165e5: ret  */ FN_RET(0x006165ac); r_esp += 4; return;
L_006165e6:; BB(0x006165e6);
    /* 006165e6: mov dword ptr [edi + 0xa0], 0 */ W32((u32)(r_edi+0xa0u), 0x0u);
L_006165f0:; BB(0x006165f0);
    /* 006165f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006165f1: ret  */ FN_RET(0x006165ac); r_esp += 4; return;
}

void f_006165f4(void) /* sub_6165F4 */
{
    FN_ENTER(0x006165f4);
    /* 006165f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006165f5: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006165f8: mov edi, ecx */ r_edi = r_ecx;
    /* 006165fa: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6165ffu); f_004f7c84();
    /* 006165ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616602: je 0x616609 */ if (fZ) goto L_00616609;
L_00616604:; BB(0x00616604);
    /* 00616604: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616607: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00616608: ret  */ FN_RET(0x006165f4); r_esp += 4; return;
L_00616609:; BB(0x00616609);
    /* 00616609: mov dword ptr [esp + 0xc], 0x3e99999a */ W32((u32)(r_esp+0xcu), 0x3e99999au);
    /* 00616611: mov dword ptr [esp + 0x10], 0x3e99999a */ W32((u32)(r_esp+0x10u), 0x3e99999au);
    /* 00616619: mov dword ptr [esp + 0x14], 0x3f4ccccd */ W32((u32)(r_esp+0x14u), 0x3f4ccccdu);
    /* 00616621: mov dword ptr [esp + 0x18], 0x3f4ccccd */ W32((u32)(r_esp+0x18u), 0x3f4ccccdu);
    /* 00616629: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061662f: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x616634u); f_0082dc9c();
    /* 00616634: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00616638: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0061663c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00616640: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00616643: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00616646: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x61664bu); f_0061cdb0();
    /* 0061664b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061664e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061664f: ret  */ FN_RET(0x006165f4); r_esp += 4; return;
}

void f_00616650(void) /* sub_616650 */
{
    FN_ENTER(0x00616650);
    /* 00616650: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00616651: mov edi, ecx */ r_edi = r_ecx;
    /* 00616653: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00616657: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616659: je 0x616923 */ if (fZ) goto L_00616923;
L_0061665f:; BB(0x0061665f);
    /* 0061665f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00616661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616662: lea edx, [edi + 0xa4] */ r_edx = (u32)(r_edi+0xa4u);
    /* 00616668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616669: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x61666eu); f_00857dec();
    /* 0061666e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616671: movzx edx, word ptr [edi + 0xa4] */ r_edx = (u32)R16((u32)(r_edi+0xa4u));
    /* 00616678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061667a: mov word ptr [edi + 0xe2], ax */ W16((u32)(r_edi+0xe2u), (u16)r_eax);
    /* 00616681: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616684: jne 0x61668f */ if (!fZ) goto L_0061668f;
L_00616686:; BB(0x00616686);
    /* 00616686: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616688: mov word ptr [edi + 0xa4], ax */ W16((u32)(r_edi+0xa4u), (u16)r_eax);
L_0061668f:; BB(0x0061668f);
    /* 0061668f: movzx eax, word ptr [edi + 0xa6] */ r_eax = (u32)R16((u32)(r_edi+0xa6u));
    /* 00616696: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616699: jne 0x6166a4 */ if (!fZ) goto L_006166a4;
L_0061669b:; BB(0x0061669b);
    /* 0061669b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061669d: mov word ptr [edi + 0xa6], ax */ W16((u32)(r_edi+0xa6u), (u16)r_eax);
L_006166a4:; BB(0x006166a4);
    /* 006166a4: movzx eax, word ptr [edi + 0xa8] */ r_eax = (u32)R16((u32)(r_edi+0xa8u));
    /* 006166ab: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006166ae: jne 0x6166b9 */ if (!fZ) goto L_006166b9;
L_006166b0:; BB(0x006166b0);
    /* 006166b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006166b2: mov word ptr [edi + 0xa8], ax */ W16((u32)(r_edi+0xa8u), (u16)r_eax);
L_006166b9:; BB(0x006166b9);
    /* 006166b9: movzx eax, word ptr [edi + 0xaa] */ r_eax = (u32)R16((u32)(r_edi+0xaau));
    /* 006166c0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006166c3: jne 0x6166ce */ if (!fZ) goto L_006166ce;
L_006166c5:; BB(0x006166c5);
    /* 006166c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006166c7: mov word ptr [edi + 0xaa], ax */ W16((u32)(r_edi+0xaau), (u16)r_eax);
L_006166ce:; BB(0x006166ce);
    /* 006166ce: movzx eax, word ptr [edi + 0xac] */ r_eax = (u32)R16((u32)(r_edi+0xacu));
    /* 006166d5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006166d8: jne 0x6166e3 */ if (!fZ) goto L_006166e3;
L_006166da:; BB(0x006166da);
    /* 006166da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006166dc: mov word ptr [edi + 0xac], ax */ W16((u32)(r_edi+0xacu), (u16)r_eax);
L_006166e3:; BB(0x006166e3);
    /* 006166e3: movzx eax, word ptr [edi + 0xae] */ r_eax = (u32)R16((u32)(r_edi+0xaeu));
    /* 006166ea: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006166ed: jne 0x6166f8 */ if (!fZ) goto L_006166f8;
L_006166ef:; BB(0x006166ef);
    /* 006166ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006166f1: mov word ptr [edi + 0xae], ax */ W16((u32)(r_edi+0xaeu), (u16)r_eax);
L_006166f8:; BB(0x006166f8);
    /* 006166f8: movzx eax, word ptr [edi + 0xb0] */ r_eax = (u32)R16((u32)(r_edi+0xb0u));
    /* 006166ff: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616702: jne 0x61670d */ if (!fZ) goto L_0061670d;
L_00616704:; BB(0x00616704);
    /* 00616704: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616706: mov word ptr [edi + 0xb0], ax */ W16((u32)(r_edi+0xb0u), (u16)r_eax);
L_0061670d:; BB(0x0061670d);
    /* 0061670d: movzx eax, word ptr [edi + 0xb2] */ r_eax = (u32)R16((u32)(r_edi+0xb2u));
    /* 00616714: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616717: jne 0x616722 */ if (!fZ) goto L_00616722;
L_00616719:; BB(0x00616719);
    /* 00616719: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061671b: mov word ptr [edi + 0xb2], ax */ W16((u32)(r_edi+0xb2u), (u16)r_eax);
L_00616722:; BB(0x00616722);
    /* 00616722: movzx eax, word ptr [edi + 0xb4] */ r_eax = (u32)R16((u32)(r_edi+0xb4u));
    /* 00616729: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061672c: jne 0x616737 */ if (!fZ) goto L_00616737;
L_0061672e:; BB(0x0061672e);
    /* 0061672e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616730: mov word ptr [edi + 0xb4], ax */ W16((u32)(r_edi+0xb4u), (u16)r_eax);
L_00616737:; BB(0x00616737);
    /* 00616737: movzx eax, word ptr [edi + 0xb6] */ r_eax = (u32)R16((u32)(r_edi+0xb6u));
    /* 0061673e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616741: jne 0x61674c */ if (!fZ) goto L_0061674c;
L_00616743:; BB(0x00616743);
    /* 00616743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616745: mov word ptr [edi + 0xb6], ax */ W16((u32)(r_edi+0xb6u), (u16)r_eax);
L_0061674c:; BB(0x0061674c);
    /* 0061674c: movzx eax, word ptr [edi + 0xb8] */ r_eax = (u32)R16((u32)(r_edi+0xb8u));
    /* 00616753: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616756: jne 0x616761 */ if (!fZ) goto L_00616761;
L_00616758:; BB(0x00616758);
    /* 00616758: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061675a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_00616761:; BB(0x00616761);
    /* 00616761: movzx eax, word ptr [edi + 0xba] */ r_eax = (u32)R16((u32)(r_edi+0xbau));
    /* 00616768: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061676b: jne 0x616776 */ if (!fZ) goto L_00616776;
L_0061676d:; BB(0x0061676d);
    /* 0061676d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061676f: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_00616776:; BB(0x00616776);
    /* 00616776: movzx eax, word ptr [edi + 0xbc] */ r_eax = (u32)R16((u32)(r_edi+0xbcu));
    /* 0061677d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616780: jne 0x61678b */ if (!fZ) goto L_0061678b;
L_00616782:; BB(0x00616782);
    /* 00616782: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616784: mov word ptr [edi + 0xbc], ax */ W16((u32)(r_edi+0xbcu), (u16)r_eax);
L_0061678b:; BB(0x0061678b);
    /* 0061678b: movzx eax, word ptr [edi + 0xbe] */ r_eax = (u32)R16((u32)(r_edi+0xbeu));
    /* 00616792: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616795: jne 0x6167a0 */ if (!fZ) goto L_006167a0;
L_00616797:; BB(0x00616797);
    /* 00616797: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616799: mov word ptr [edi + 0xbe], ax */ W16((u32)(r_edi+0xbeu), (u16)r_eax);
L_006167a0:; BB(0x006167a0);
    /* 006167a0: movzx eax, word ptr [edi + 0xc0] */ r_eax = (u32)R16((u32)(r_edi+0xc0u));
    /* 006167a7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006167aa: jne 0x6167b5 */ if (!fZ) goto L_006167b5;
L_006167ac:; BB(0x006167ac);
    /* 006167ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006167ae: mov word ptr [edi + 0xc0], ax */ W16((u32)(r_edi+0xc0u), (u16)r_eax);
L_006167b5:; BB(0x006167b5);
    /* 006167b5: movzx eax, word ptr [edi + 0xc2] */ r_eax = (u32)R16((u32)(r_edi+0xc2u));
    /* 006167bc: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006167bf: jne 0x6167ca */ if (!fZ) goto L_006167ca;
L_006167c1:; BB(0x006167c1);
    /* 006167c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006167c3: mov word ptr [edi + 0xc2], ax */ W16((u32)(r_edi+0xc2u), (u16)r_eax);
L_006167ca:; BB(0x006167ca);
    /* 006167ca: movzx eax, word ptr [edi + 0xc4] */ r_eax = (u32)R16((u32)(r_edi+0xc4u));
    /* 006167d1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006167d4: jne 0x6167df */ if (!fZ) goto L_006167df;
L_006167d6:; BB(0x006167d6);
    /* 006167d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006167d8: mov word ptr [edi + 0xc4], ax */ W16((u32)(r_edi+0xc4u), (u16)r_eax);
L_006167df:; BB(0x006167df);
    /* 006167df: movzx eax, word ptr [edi + 0xc6] */ r_eax = (u32)R16((u32)(r_edi+0xc6u));
    /* 006167e6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006167e9: jne 0x6167f4 */ if (!fZ) goto L_006167f4;
L_006167eb:; BB(0x006167eb);
    /* 006167eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006167ed: mov word ptr [edi + 0xc6], ax */ W16((u32)(r_edi+0xc6u), (u16)r_eax);
L_006167f4:; BB(0x006167f4);
    /* 006167f4: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 006167fb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006167fe: jne 0x616809 */ if (!fZ) goto L_00616809;
L_00616800:; BB(0x00616800);
    /* 00616800: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616802: mov word ptr [edi + 0xc8], ax */ W16((u32)(r_edi+0xc8u), (u16)r_eax);
L_00616809:; BB(0x00616809);
    /* 00616809: movzx eax, word ptr [edi + 0xca] */ r_eax = (u32)R16((u32)(r_edi+0xcau));
    /* 00616810: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616813: jne 0x61681e */ if (!fZ) goto L_0061681e;
L_00616815:; BB(0x00616815);
    /* 00616815: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616817: mov word ptr [edi + 0xca], ax */ W16((u32)(r_edi+0xcau), (u16)r_eax);
L_0061681e:; BB(0x0061681e);
    /* 0061681e: movzx eax, word ptr [edi + 0xcc] */ r_eax = (u32)R16((u32)(r_edi+0xccu));
    /* 00616825: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616828: jne 0x616833 */ if (!fZ) goto L_00616833;
L_0061682a:; BB(0x0061682a);
    /* 0061682a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061682c: mov word ptr [edi + 0xcc], ax */ W16((u32)(r_edi+0xccu), (u16)r_eax);
L_00616833:; BB(0x00616833);
    /* 00616833: movzx eax, word ptr [edi + 0xce] */ r_eax = (u32)R16((u32)(r_edi+0xceu));
    /* 0061683a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061683d: jne 0x616848 */ if (!fZ) goto L_00616848;
L_0061683f:; BB(0x0061683f);
    /* 0061683f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616841: mov word ptr [edi + 0xce], ax */ W16((u32)(r_edi+0xceu), (u16)r_eax);
L_00616848:; BB(0x00616848);
    /* 00616848: movzx eax, word ptr [edi + 0xd0] */ r_eax = (u32)R16((u32)(r_edi+0xd0u));
    /* 0061684f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616852: jne 0x61685d */ if (!fZ) goto L_0061685d;
L_00616854:; BB(0x00616854);
    /* 00616854: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616856: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
L_0061685d:; BB(0x0061685d);
    /* 0061685d: movzx eax, word ptr [edi + 0xd2] */ r_eax = (u32)R16((u32)(r_edi+0xd2u));
    /* 00616864: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616867: jne 0x616872 */ if (!fZ) goto L_00616872;
L_00616869:; BB(0x00616869);
    /* 00616869: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061686b: mov word ptr [edi + 0xd2], ax */ W16((u32)(r_edi+0xd2u), (u16)r_eax);
L_00616872:; BB(0x00616872);
    /* 00616872: movzx eax, word ptr [edi + 0xd4] */ r_eax = (u32)R16((u32)(r_edi+0xd4u));
    /* 00616879: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061687c: jne 0x616887 */ if (!fZ) goto L_00616887;
L_0061687e:; BB(0x0061687e);
    /* 0061687e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616880: mov word ptr [edi + 0xd4], ax */ W16((u32)(r_edi+0xd4u), (u16)r_eax);
L_00616887:; BB(0x00616887);
    /* 00616887: movzx eax, word ptr [edi + 0xd6] */ r_eax = (u32)R16((u32)(r_edi+0xd6u));
    /* 0061688e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616891: jne 0x61689c */ if (!fZ) goto L_0061689c;
L_00616893:; BB(0x00616893);
    /* 00616893: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616895: mov word ptr [edi + 0xd6], ax */ W16((u32)(r_edi+0xd6u), (u16)r_eax);
L_0061689c:; BB(0x0061689c);
    /* 0061689c: movzx eax, word ptr [edi + 0xd8] */ r_eax = (u32)R16((u32)(r_edi+0xd8u));
    /* 006168a3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006168a6: jne 0x6168b1 */ if (!fZ) goto L_006168b1;
L_006168a8:; BB(0x006168a8);
    /* 006168a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006168aa: mov word ptr [edi + 0xd8], ax */ W16((u32)(r_edi+0xd8u), (u16)r_eax);
L_006168b1:; BB(0x006168b1);
    /* 006168b1: movzx eax, word ptr [edi + 0xda] */ r_eax = (u32)R16((u32)(r_edi+0xdau));
    /* 006168b8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006168bb: jne 0x6168c6 */ if (!fZ) goto L_006168c6;
L_006168bd:; BB(0x006168bd);
    /* 006168bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006168bf: mov word ptr [edi + 0xda], ax */ W16((u32)(r_edi+0xdau), (u16)r_eax);
L_006168c6:; BB(0x006168c6);
    /* 006168c6: movzx eax, word ptr [edi + 0xdc] */ r_eax = (u32)R16((u32)(r_edi+0xdcu));
    /* 006168cd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006168d0: jne 0x6168db */ if (!fZ) goto L_006168db;
L_006168d2:; BB(0x006168d2);
    /* 006168d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006168d4: mov word ptr [edi + 0xdc], ax */ W16((u32)(r_edi+0xdcu), (u16)r_eax);
L_006168db:; BB(0x006168db);
    /* 006168db: movzx eax, word ptr [edi + 0xde] */ r_eax = (u32)R16((u32)(r_edi+0xdeu));
    /* 006168e2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006168e5: jne 0x6168f0 */ if (!fZ) goto L_006168f0;
L_006168e7:; BB(0x006168e7);
    /* 006168e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006168e9: mov word ptr [edi + 0xde], ax */ W16((u32)(r_edi+0xdeu), (u16)r_eax);
L_006168f0:; BB(0x006168f0);
    /* 006168f0: movzx eax, word ptr [edi + 0xe0] */ r_eax = (u32)R16((u32)(r_edi+0xe0u));
    /* 006168f7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006168fa: jne 0x616905 */ if (!fZ) goto L_00616905;
L_006168fc:; BB(0x006168fc);
    /* 006168fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006168fe: mov word ptr [edi + 0xe0], ax */ W16((u32)(r_edi+0xe0u), (u16)r_eax);
L_00616905:; BB(0x00616905);
    /* 00616905: movzx eax, word ptr [edi + 0xe2] */ r_eax = (u32)R16((u32)(r_edi+0xe2u));
    /* 0061690c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061690f: jne 0x61691a */ if (!fZ) goto L_0061691a;
L_00616911:; BB(0x00616911);
    /* 00616911: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616913: mov word ptr [edi + 0xe2], ax */ W16((u32)(r_edi+0xe2u), (u16)r_eax);
L_0061691a:; BB(0x0061691a);
    /* 0061691a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061691c: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_00616923:; BB(0x00616923);
    /* 00616923: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00616924: ret 4 */ FN_RET(0x00616650); r_esp += 8; return;
}

void f_00616928(void) /* sub_616928 */
{
    FN_ENTER(0x00616928);
    /* 00616928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616929: mov ebp, esp */ r_ebp = r_esp;
    /* 0061692b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061692d: push 0x8e151a */ { u32 v = 0x8e151au; r_esp -= 4; W32(r_esp, v); }
    /* 00616932: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00616938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616939: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00616940: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616943: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00616946: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00616949: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061694c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061694f: mov eax, dword ptr [0xa8eadc] */ r_eax = R32((u32)(0xa8eadcu));
    /* 00616954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616956: je 0x61696f */ if (fZ) goto L_0061696f;
L_00616958:; BB(0x00616958);
    /* 00616958: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061695b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061695e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616961: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616964: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061696b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061696d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061696e: ret  */ FN_RET(0x00616928); r_esp += 4; return;
L_0061696f:; BB(0x0061696f);
    /* 0061696f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00616976: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616978: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61697du); f_005caba4();
    /* 0061697d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616980: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616983: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00616986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616988: je 0x616958 */ if (fZ) goto L_00616958;
L_0061698a:; BB(0x0061698a);
    /* 0061698a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00616991: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616998: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061699b: mov ecx, eax */ r_ecx = r_eax;
    /* 0061699d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006169a0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6169a5u); f_008193cc();
    /* 006169a5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006169ac: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169af: mov dword ptr [edx], 0xb25834 */ W32((u32)(r_edx), 0xb25834u);
    /* 006169b5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006169b7: mov eax, dword ptr [0x9c4a90] */ r_eax = R32((u32)(0x9c4a90u));
    /* 006169bc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006169bf:; BB(0x006169bf);
    /* 006169bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006169c2: mov dword ptr [eax + esi*4 + 0x1c], 0 */ W32((u32)(r_eax+r_esi*4+0x1cu), 0x0u);
    /* 006169ca: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006169cd: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006169d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6169d7u); f_008581c5();
    /* 006169d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006169d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169db: mov dword ptr [edx + ebx*2 + 0x2c], eax */ W32((u32)(r_edx+r_ebx*2+0x2cu), r_eax);
    /* 006169df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006169e1: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006169e3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006169e6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006169e9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006169ec: jl 0x6169bf */ if ((fS!=fO)) goto L_006169bf;
L_006169ee:; BB(0x006169ee);
    /* 006169ee: mov eax, edx */ r_eax = r_edx;
    /* 006169f0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006169f7: mov dword ptr [0xa8eadc], eax */ W32((u32)(0xa8eadcu), r_eax);
    /* 006169fc: jmp 0x616958 */ goto L_00616958;
}

void f_00616972(void)
{
    FN_ENTER(0x00616972);
    goto L_00616972;
L_00616958:; BB(0x00616958);
    /* 00616958: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061695b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061695e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616961: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616964: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061696b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061696d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061696e: ret  */ FN_RET(0x00616972); r_esp += 4; return;
L_00616972:; BB(0x00616972);
    /* 00616972: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00616974: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00616976: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616978: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61697du); f_005caba4();
    /* 0061697d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616980: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616983: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00616986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616988: je 0x616958 */ if (fZ) goto L_00616958;
L_0061698a:; BB(0x0061698a);
    /* 0061698a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00616991: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616998: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061699b: mov ecx, eax */ r_ecx = r_eax;
    /* 0061699d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006169a0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6169a5u); f_008193cc();
    /* 006169a5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006169ac: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169af: mov dword ptr [edx], 0xb25834 */ W32((u32)(r_edx), 0xb25834u);
    /* 006169b5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006169b7: mov eax, dword ptr [0x9c4a90] */ r_eax = R32((u32)(0x9c4a90u));
    /* 006169bc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006169bf:; BB(0x006169bf);
    /* 006169bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006169c2: mov dword ptr [eax + esi*4 + 0x1c], 0 */ W32((u32)(r_eax+r_esi*4+0x1cu), 0x0u);
    /* 006169ca: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006169cd: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006169d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6169d7u); f_008581c5();
    /* 006169d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006169d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169db: mov dword ptr [edx + ebx*2 + 0x2c], eax */ W32((u32)(r_edx+r_ebx*2+0x2cu), r_eax);
    /* 006169df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006169e1: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006169e3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006169e6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006169e9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006169ec: jl 0x6169bf */ if ((fS!=fO)) goto L_006169bf;
L_006169ee:; BB(0x006169ee);
    /* 006169ee: mov eax, edx */ r_eax = r_edx;
    /* 006169f0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006169f7: mov dword ptr [0xa8eadc], eax */ W32((u32)(0xa8eadcu), r_eax);
    /* 006169fc: jmp 0x616958 */ goto L_00616958;
}

void f_00616976(void)
{
    FN_ENTER(0x00616976);
    goto L_00616976;
L_00616958:; BB(0x00616958);
    /* 00616958: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061695b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061695e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00616961: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616964: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061696b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061696d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061696e: ret  */ FN_RET(0x00616976); r_esp += 4; return;
L_00616976:; BB(0x00616976);
    /* 00616976: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616978: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61697du); f_005caba4();
    /* 0061697d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616980: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616983: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00616986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616988: je 0x616958 */ if (fZ) goto L_00616958;
L_0061698a:; BB(0x0061698a);
    /* 0061698a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00616991: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616998: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061699b: mov ecx, eax */ r_ecx = r_eax;
    /* 0061699d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006169a0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6169a5u); f_008193cc();
    /* 006169a5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006169ac: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169af: mov dword ptr [edx], 0xb25834 */ W32((u32)(r_edx), 0xb25834u);
    /* 006169b5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006169b7: mov eax, dword ptr [0x9c4a90] */ r_eax = R32((u32)(0x9c4a90u));
    /* 006169bc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006169bf:; BB(0x006169bf);
    /* 006169bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006169c2: mov dword ptr [eax + esi*4 + 0x1c], 0 */ W32((u32)(r_eax+r_esi*4+0x1cu), 0x0u);
    /* 006169ca: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006169cd: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006169d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6169d7u); f_008581c5();
    /* 006169d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006169d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169db: mov dword ptr [edx + ebx*2 + 0x2c], eax */ W32((u32)(r_edx+r_ebx*2+0x2cu), r_eax);
    /* 006169df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006169e1: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006169e3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006169e6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006169e9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006169ec: jl 0x6169bf */ if ((fS!=fO)) goto L_006169bf;
L_006169ee:; BB(0x006169ee);
    /* 006169ee: mov eax, edx */ r_eax = r_edx;
    /* 006169f0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006169f7: mov dword ptr [0xa8eadc], eax */ W32((u32)(0xa8eadcu), r_eax);
    /* 006169fc: jmp 0x616958 */ goto L_00616958;
}

void f_00616a04(void) /* sub_616A04 */
{
    FN_ENTER(0x00616a04);
    /* 00616a04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a05: lea eax, [ecx + 0x1c] */ r_eax = (u32)(r_ecx+0x1cu);
    /* 00616a08: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00616a0b:; BB(0x00616a0b);
    /* 00616a0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00616a0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616a0f: je 0x616a22 */ if (fZ) goto L_00616a22;
L_00616a11:; BB(0x00616a11);
    /* 00616a11: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00616a14: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00616a16: jne 0x616a22 */ if (!fZ) goto L_00616a22;
L_00616a18:; BB(0x00616a18);
    /* 00616a18: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 00616a1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616a1d: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00616a1f: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
L_00616a22:; BB(0x00616a22);
    /* 00616a22: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616a25: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00616a27: ja 0x616a0b */ if ((!fC&&!fZ)) goto L_00616a0b;
L_00616a29:; BB(0x00616a29);
    /* 00616a29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00616a2a: ret  */ FN_RET(0x00616a04); r_esp += 4; return;
}

void f_00616a2c(void) /* sub_616A2C */
{
    FN_ENTER(0x00616a2c);
    /* 00616a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616a2d: movzx ebp, word ptr [esp + 8] */ r_ebp = (u32)R16((u32)(r_esp+0x8u));
    /* 00616a32: mov eax, dword ptr [0xa8eadc] */ r_eax = R32((u32)(0xa8eadcu));
    /* 00616a37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616a39: je 0x616a62 */ if (fZ) goto L_00616a62;
L_00616a3b:; BB(0x00616a3b);
    /* 00616a3b: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00616a3e: jge 0x616a62 */ if ((fS==fO)) goto L_00616a62;
L_00616a40:; BB(0x00616a40);
    /* 00616a40: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00616a45: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616a49: push dword ptr [eax + ebp*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebp*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00616a4d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x616a52u); f_00857dec();
    /* 00616a52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616a55: mov eax, dword ptr [0xa8eadc] */ r_eax = R32((u32)(0xa8eadcu));
    /* 00616a5a: mov dword ptr [eax + ebp*4 + 0x1c], 0x78 */ W32((u32)(r_eax+r_ebp*4+0x1cu), 0x78u);
L_00616a62:; BB(0x00616a62);
    /* 00616a62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616a63: ret  */ FN_RET(0x00616a2c); r_esp += 4; return;
}

void f_00616a64(void) /* sub_616A64 */
{
    FN_ENTER(0x00616a64);
    /* 00616a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616a65: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616a6b: movzx ebp, word ptr [esp + 0x88] */ r_ebp = (u32)R16((u32)(r_esp+0x88u));
    /* 00616a73: mov eax, dword ptr [0xa8eadc] */ r_eax = R32((u32)(0xa8eadcu));
    /* 00616a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616a7a: je 0x616f19 */ if (fZ) goto L_00616f19;
L_00616a80:; BB(0x00616a80);
    /* 00616a80: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616a83: jge 0x616f19 */ if ((fS==fO)) goto L_00616f19;
L_00616a89:; BB(0x00616a89);
    /* 00616a89: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00616a8c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00616a8e: push dword ptr [esp + 0x90] */ { u32 v = R32((u32)(r_esp+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616a95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616a96: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x616a9bu); f_00857dec();
    /* 00616a9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616a9e: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 00616aa2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616aa4: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 00616aa9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616aab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616aad: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ab3:; BB(0x00616ab3);
    /* 00616ab3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ab6: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616abc:; BB(0x00616abc);
    /* 00616abc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616abf: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ac5:; BB(0x00616ac5);
    /* 00616ac5: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 00616aca: mov eax, 1 */ r_eax = 0x1u;
    /* 00616acf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ad1: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ad7:; BB(0x00616ad7);
    /* 00616ad7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ada: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ae0:; BB(0x00616ae0);
    /* 00616ae0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ae3: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ae9:; BB(0x00616ae9);
    /* 00616ae9: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 00616aee: mov eax, 2 */ r_eax = 0x2u;
    /* 00616af3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616af5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616afb:; BB(0x00616afb);
    /* 00616afb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616afe: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b04:; BB(0x00616b04);
    /* 00616b04: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b07: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b0d:; BB(0x00616b0d);
    /* 00616b0d: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 00616b12: mov eax, 3 */ r_eax = 0x3u;
    /* 00616b17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b19: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616b1f:; BB(0x00616b1f);
    /* 00616b1f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b22: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b28:; BB(0x00616b28);
    /* 00616b28: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b2b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b31:; BB(0x00616b31);
    /* 00616b31: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00616b36: mov eax, 4 */ r_eax = 0x4u;
    /* 00616b3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b3d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616b43:; BB(0x00616b43);
    /* 00616b43: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b46: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b4c:; BB(0x00616b4c);
    /* 00616b4c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b4f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b55:; BB(0x00616b55);
    /* 00616b55: movzx edx, word ptr [esp + 0xa] */ r_edx = (u32)R16((u32)(r_esp+0xau));
    /* 00616b5a: mov eax, 5 */ r_eax = 0x5u;
    /* 00616b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b61: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616b67:; BB(0x00616b67);
    /* 00616b67: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b6a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b70:; BB(0x00616b70);
    /* 00616b70: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b73: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b79:; BB(0x00616b79);
    /* 00616b79: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 00616b7e: mov eax, 6 */ r_eax = 0x6u;
    /* 00616b83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b85: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616b8b:; BB(0x00616b8b);
    /* 00616b8b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b8e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b94:; BB(0x00616b94);
    /* 00616b94: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b97: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b9d:; BB(0x00616b9d);
    /* 00616b9d: movzx edx, word ptr [esp + 0xe] */ r_edx = (u32)R16((u32)(r_esp+0xeu));
    /* 00616ba2: mov eax, 7 */ r_eax = 0x7u;
    /* 00616ba7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ba9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616baf:; BB(0x00616baf);
    /* 00616baf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bb2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616bb8:; BB(0x00616bb8);
    /* 00616bb8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bbb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616bc1:; BB(0x00616bc1);
    /* 00616bc1: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 00616bc6: mov eax, 8 */ r_eax = 0x8u;
    /* 00616bcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bcd: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616bd3:; BB(0x00616bd3);
    /* 00616bd3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bd6: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616bdc:; BB(0x00616bdc);
    /* 00616bdc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bdf: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616be5:; BB(0x00616be5);
    /* 00616be5: movzx edx, word ptr [esp + 0x12] */ r_edx = (u32)R16((u32)(r_esp+0x12u));
    /* 00616bea: mov eax, 9 */ r_eax = 0x9u;
    /* 00616bef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bf1: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616bf7:; BB(0x00616bf7);
    /* 00616bf7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bfa: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c00:; BB(0x00616c00);
    /* 00616c00: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c03: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c09:; BB(0x00616c09);
    /* 00616c09: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 00616c0e: mov eax, 0xa */ r_eax = 0xau;
    /* 00616c13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c15: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c1b:; BB(0x00616c1b);
    /* 00616c1b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c1e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c24:; BB(0x00616c24);
    /* 00616c24: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c27: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c2d:; BB(0x00616c2d);
    /* 00616c2d: movzx edx, word ptr [esp + 0x16] */ r_edx = (u32)R16((u32)(r_esp+0x16u));
    /* 00616c32: mov eax, 0xb */ r_eax = 0xbu;
    /* 00616c37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c39: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c3f:; BB(0x00616c3f);
    /* 00616c3f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c42: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c48:; BB(0x00616c48);
    /* 00616c48: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c4b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c51:; BB(0x00616c51);
    /* 00616c51: movzx edx, word ptr [esp + 0x18] */ r_edx = (u32)R16((u32)(r_esp+0x18u));
    /* 00616c56: mov eax, 0xc */ r_eax = 0xcu;
    /* 00616c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c5d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c63:; BB(0x00616c63);
    /* 00616c63: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c66: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c6c:; BB(0x00616c6c);
    /* 00616c6c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c6f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c75:; BB(0x00616c75);
    /* 00616c75: movzx edx, word ptr [esp + 0x1a] */ r_edx = (u32)R16((u32)(r_esp+0x1au));
    /* 00616c7a: mov eax, 0xd */ r_eax = 0xdu;
    /* 00616c7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c81: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c87:; BB(0x00616c87);
    /* 00616c87: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c8a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c90:; BB(0x00616c90);
    /* 00616c90: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c93: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c99:; BB(0x00616c99);
    /* 00616c99: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 00616c9e: mov eax, 0xe */ r_eax = 0xeu;
    /* 00616ca3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ca5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616cab:; BB(0x00616cab);
    /* 00616cab: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cae: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cb4:; BB(0x00616cb4);
    /* 00616cb4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cb7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cbd:; BB(0x00616cbd);
    /* 00616cbd: movzx edx, word ptr [esp + 0x1e] */ r_edx = (u32)R16((u32)(r_esp+0x1eu));
    /* 00616cc2: mov eax, 0xf */ r_eax = 0xfu;
    /* 00616cc7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cc9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ccf:; BB(0x00616ccf);
    /* 00616ccf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cd2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cd8:; BB(0x00616cd8);
    /* 00616cd8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cdb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ce1:; BB(0x00616ce1);
    /* 00616ce1: movzx edx, word ptr [esp + 0x20] */ r_edx = (u32)R16((u32)(r_esp+0x20u));
    /* 00616ce6: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00616ceb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ced: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616cf3:; BB(0x00616cf3);
    /* 00616cf3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cf6: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cfc:; BB(0x00616cfc);
    /* 00616cfc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cff: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d05:; BB(0x00616d05);
    /* 00616d05: movzx edx, word ptr [esp + 0x22] */ r_edx = (u32)R16((u32)(r_esp+0x22u));
    /* 00616d0a: mov eax, 0x11 */ r_eax = 0x11u;
    /* 00616d0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d11: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d17:; BB(0x00616d17);
    /* 00616d17: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d1a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d20:; BB(0x00616d20);
    /* 00616d20: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d23: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d29:; BB(0x00616d29);
    /* 00616d29: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00616d2e: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00616d33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d35: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d3b:; BB(0x00616d3b);
    /* 00616d3b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d3e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d44:; BB(0x00616d44);
    /* 00616d44: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d47: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d4d:; BB(0x00616d4d);
    /* 00616d4d: movzx edx, word ptr [esp + 0x26] */ r_edx = (u32)R16((u32)(r_esp+0x26u));
    /* 00616d52: mov eax, 0x13 */ r_eax = 0x13u;
    /* 00616d57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d59: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d5f:; BB(0x00616d5f);
    /* 00616d5f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d62: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d68:; BB(0x00616d68);
    /* 00616d68: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d6b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d71:; BB(0x00616d71);
    /* 00616d71: movzx edx, word ptr [esp + 0x28] */ r_edx = (u32)R16((u32)(r_esp+0x28u));
    /* 00616d76: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00616d7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d7d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d83:; BB(0x00616d83);
    /* 00616d83: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d86: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d8c:; BB(0x00616d8c);
    /* 00616d8c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d8f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d95:; BB(0x00616d95);
    /* 00616d95: movzx edx, word ptr [esp + 0x2a] */ r_edx = (u32)R16((u32)(r_esp+0x2au));
    /* 00616d9a: mov eax, 0x15 */ r_eax = 0x15u;
    /* 00616d9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616da1: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616da7:; BB(0x00616da7);
    /* 00616da7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616daa: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616db0:; BB(0x00616db0);
    /* 00616db0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616db3: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616db9:; BB(0x00616db9);
    /* 00616db9: movzx edx, word ptr [esp + 0x2c] */ r_edx = (u32)R16((u32)(r_esp+0x2cu));
    /* 00616dbe: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00616dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dc5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616dcb:; BB(0x00616dcb);
    /* 00616dcb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dce: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616dd4:; BB(0x00616dd4);
    /* 00616dd4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dd7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ddd:; BB(0x00616ddd);
    /* 00616ddd: movzx edx, word ptr [esp + 0x2e] */ r_edx = (u32)R16((u32)(r_esp+0x2eu));
    /* 00616de2: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00616de7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616de9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616def:; BB(0x00616def);
    /* 00616def: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616df2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616df8:; BB(0x00616df8);
    /* 00616df8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dfb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e01:; BB(0x00616e01);
    /* 00616e01: movzx edx, word ptr [esp + 0x30] */ r_edx = (u32)R16((u32)(r_esp+0x30u));
    /* 00616e06: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00616e0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e0d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e13:; BB(0x00616e13);
    /* 00616e13: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e16: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e1c:; BB(0x00616e1c);
    /* 00616e1c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e1f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e25:; BB(0x00616e25);
    /* 00616e25: movzx edx, word ptr [esp + 0x32] */ r_edx = (u32)R16((u32)(r_esp+0x32u));
    /* 00616e2a: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00616e2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e31: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e37:; BB(0x00616e37);
    /* 00616e37: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e3a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e40:; BB(0x00616e40);
    /* 00616e40: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e43: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e49:; BB(0x00616e49);
    /* 00616e49: movzx edx, word ptr [esp + 0x34] */ r_edx = (u32)R16((u32)(r_esp+0x34u));
    /* 00616e4e: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00616e53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e55: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e5b:; BB(0x00616e5b);
    /* 00616e5b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e5e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e64:; BB(0x00616e64);
    /* 00616e64: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e67: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e6d:; BB(0x00616e6d);
    /* 00616e6d: movzx edx, word ptr [esp + 0x36] */ r_edx = (u32)R16((u32)(r_esp+0x36u));
    /* 00616e72: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 00616e77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e79: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e7f:; BB(0x00616e7f);
    /* 00616e7f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e82: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e88:; BB(0x00616e88);
    /* 00616e88: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e8b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e91:; BB(0x00616e91);
    /* 00616e91: movzx edx, word ptr [esp + 0x38] */ r_edx = (u32)R16((u32)(r_esp+0x38u));
    /* 00616e96: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 00616e9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e9d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e9f:; BB(0x00616e9f);
    /* 00616e9f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ea2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ea8:; BB(0x00616ea8);
    /* 00616ea8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eab: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616eb1:; BB(0x00616eb1);
    /* 00616eb1: movzx edx, word ptr [esp + 0x3a] */ r_edx = (u32)R16((u32)(r_esp+0x3au));
    /* 00616eb6: mov eax, 0x1d */ r_eax = 0x1du;
    /* 00616ebb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ebd: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ebf:; BB(0x00616ebf);
    /* 00616ebf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ec2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ec4:; BB(0x00616ec4);
    /* 00616ec4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ec7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ec9:; BB(0x00616ec9);
    /* 00616ec9: movzx edx, word ptr [esp + 0x3c] */ r_edx = (u32)R16((u32)(r_esp+0x3cu));
    /* 00616ece: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00616ed3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ed5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ed7:; BB(0x00616ed7);
    /* 00616ed7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eda: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616edc:; BB(0x00616edc);
    /* 00616edc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616edf: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ee1:; BB(0x00616ee1);
    /* 00616ee1: movzx edx, word ptr [esp + 0x3e] */ r_edx = (u32)R16((u32)(r_esp+0x3eu));
    /* 00616ee6: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 00616eeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eed: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616eef:; BB(0x00616eef);
    /* 00616eef: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ef2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ef4:; BB(0x00616ef4);
    /* 00616ef4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ef7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ef9:; BB(0x00616ef9);
    /* 00616ef9: mov edx, dword ptr [0xa8eadc] */ r_edx = R32((u32)(0xa8eadcu));
    /* 00616eff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00616f02: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616f09: push dword ptr [edx + ebp*4 + 0x2c] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00616f0d: call 0x814028 */ r_esp -= 4; W32(r_esp, 0x616f12u); f_00814028();
    /* 00616f12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00616f17: jge 0x616f23 */ if ((fS==fO)) goto L_00616f23;
L_00616f19:; BB(0x00616f19);
    /* 00616f19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616f1b: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616f21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616f22: ret  */ FN_RET(0x00616a64); r_esp += 4; return;
L_00616f23:; BB(0x00616f23);
    /* 00616f23: mov eax, 1 */ r_eax = 0x1u;
    /* 00616f28: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616f2f: ret  */ FN_RET(0x00616a64); r_esp += 4; return;
L_00616f30:; BB(0x00616f30);
    /* 00616f30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616f32: mov word ptr [esp + eax*2], dx */ W16((u32)(r_esp+r_eax*2), (u16)r_edx);
    /* 00616f36: jmp 0x616ef9 */ goto L_00616ef9;
}

void f_00616b61(void)
{
    FN_ENTER(0x00616b61);
    /* 00616b61: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616b67:; BB(0x00616b67);
    /* 00616b67: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b6a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b70:; BB(0x00616b70);
    /* 00616b70: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b73: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b79:; BB(0x00616b79);
    /* 00616b79: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 00616b7e: mov eax, 6 */ r_eax = 0x6u;
    /* 00616b83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b85: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616b8b:; BB(0x00616b8b);
    /* 00616b8b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b8e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b94:; BB(0x00616b94);
    /* 00616b94: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616b97: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616b9d:; BB(0x00616b9d);
    /* 00616b9d: movzx edx, word ptr [esp + 0xe] */ r_edx = (u32)R16((u32)(r_esp+0xeu));
    /* 00616ba2: mov eax, 7 */ r_eax = 0x7u;
    /* 00616ba7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ba9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616baf:; BB(0x00616baf);
    /* 00616baf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bb2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616bb8:; BB(0x00616bb8);
    /* 00616bb8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bbb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616bc1:; BB(0x00616bc1);
    /* 00616bc1: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 00616bc6: mov eax, 8 */ r_eax = 0x8u;
    /* 00616bcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bcd: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616bd3:; BB(0x00616bd3);
    /* 00616bd3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bd6: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616bdc:; BB(0x00616bdc);
    /* 00616bdc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bdf: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616be5:; BB(0x00616be5);
    /* 00616be5: movzx edx, word ptr [esp + 0x12] */ r_edx = (u32)R16((u32)(r_esp+0x12u));
    /* 00616bea: mov eax, 9 */ r_eax = 0x9u;
    /* 00616bef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bf1: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616bf7:; BB(0x00616bf7);
    /* 00616bf7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616bfa: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c00:; BB(0x00616c00);
    /* 00616c00: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c03: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c09:; BB(0x00616c09);
    /* 00616c09: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 00616c0e: mov eax, 0xa */ r_eax = 0xau;
    /* 00616c13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c15: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c1b:; BB(0x00616c1b);
    /* 00616c1b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c1e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c24:; BB(0x00616c24);
    /* 00616c24: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c27: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c2d:; BB(0x00616c2d);
    /* 00616c2d: movzx edx, word ptr [esp + 0x16] */ r_edx = (u32)R16((u32)(r_esp+0x16u));
    /* 00616c32: mov eax, 0xb */ r_eax = 0xbu;
    /* 00616c37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c39: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c3f:; BB(0x00616c3f);
    /* 00616c3f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c42: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c48:; BB(0x00616c48);
    /* 00616c48: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c4b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c51:; BB(0x00616c51);
    /* 00616c51: movzx edx, word ptr [esp + 0x18] */ r_edx = (u32)R16((u32)(r_esp+0x18u));
    /* 00616c56: mov eax, 0xc */ r_eax = 0xcu;
    /* 00616c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c5d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c63:; BB(0x00616c63);
    /* 00616c63: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c66: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c6c:; BB(0x00616c6c);
    /* 00616c6c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c6f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c75:; BB(0x00616c75);
    /* 00616c75: movzx edx, word ptr [esp + 0x1a] */ r_edx = (u32)R16((u32)(r_esp+0x1au));
    /* 00616c7a: mov eax, 0xd */ r_eax = 0xdu;
    /* 00616c7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c81: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616c87:; BB(0x00616c87);
    /* 00616c87: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c8a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c90:; BB(0x00616c90);
    /* 00616c90: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616c93: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616c99:; BB(0x00616c99);
    /* 00616c99: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 00616c9e: mov eax, 0xe */ r_eax = 0xeu;
    /* 00616ca3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ca5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616cab:; BB(0x00616cab);
    /* 00616cab: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cae: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cb4:; BB(0x00616cb4);
    /* 00616cb4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cb7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cbd:; BB(0x00616cbd);
    /* 00616cbd: movzx edx, word ptr [esp + 0x1e] */ r_edx = (u32)R16((u32)(r_esp+0x1eu));
    /* 00616cc2: mov eax, 0xf */ r_eax = 0xfu;
    /* 00616cc7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cc9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ccf:; BB(0x00616ccf);
    /* 00616ccf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cd2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cd8:; BB(0x00616cd8);
    /* 00616cd8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cdb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ce1:; BB(0x00616ce1);
    /* 00616ce1: movzx edx, word ptr [esp + 0x20] */ r_edx = (u32)R16((u32)(r_esp+0x20u));
    /* 00616ce6: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00616ceb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ced: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616cf3:; BB(0x00616cf3);
    /* 00616cf3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cf6: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616cfc:; BB(0x00616cfc);
    /* 00616cfc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616cff: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d05:; BB(0x00616d05);
    /* 00616d05: movzx edx, word ptr [esp + 0x22] */ r_edx = (u32)R16((u32)(r_esp+0x22u));
    /* 00616d0a: mov eax, 0x11 */ r_eax = 0x11u;
    /* 00616d0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d11: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d17:; BB(0x00616d17);
    /* 00616d17: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d1a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d20:; BB(0x00616d20);
    /* 00616d20: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d23: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d29:; BB(0x00616d29);
    /* 00616d29: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00616d2e: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00616d33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d35: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d3b:; BB(0x00616d3b);
    /* 00616d3b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d3e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d44:; BB(0x00616d44);
    /* 00616d44: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d47: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d4d:; BB(0x00616d4d);
    /* 00616d4d: movzx edx, word ptr [esp + 0x26] */ r_edx = (u32)R16((u32)(r_esp+0x26u));
    /* 00616d52: mov eax, 0x13 */ r_eax = 0x13u;
    /* 00616d57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d59: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d5f:; BB(0x00616d5f);
    /* 00616d5f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d62: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d68:; BB(0x00616d68);
    /* 00616d68: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d6b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d71:; BB(0x00616d71);
    /* 00616d71: movzx edx, word ptr [esp + 0x28] */ r_edx = (u32)R16((u32)(r_esp+0x28u));
    /* 00616d76: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00616d7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d7d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d83:; BB(0x00616d83);
    /* 00616d83: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d86: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d8c:; BB(0x00616d8c);
    /* 00616d8c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d8f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d95:; BB(0x00616d95);
    /* 00616d95: movzx edx, word ptr [esp + 0x2a] */ r_edx = (u32)R16((u32)(r_esp+0x2au));
    /* 00616d9a: mov eax, 0x15 */ r_eax = 0x15u;
    /* 00616d9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616da1: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616da7:; BB(0x00616da7);
    /* 00616da7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616daa: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616db0:; BB(0x00616db0);
    /* 00616db0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616db3: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616db9:; BB(0x00616db9);
    /* 00616db9: movzx edx, word ptr [esp + 0x2c] */ r_edx = (u32)R16((u32)(r_esp+0x2cu));
    /* 00616dbe: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00616dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dc5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616dcb:; BB(0x00616dcb);
    /* 00616dcb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dce: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616dd4:; BB(0x00616dd4);
    /* 00616dd4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dd7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ddd:; BB(0x00616ddd);
    /* 00616ddd: movzx edx, word ptr [esp + 0x2e] */ r_edx = (u32)R16((u32)(r_esp+0x2eu));
    /* 00616de2: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00616de7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616de9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616def:; BB(0x00616def);
    /* 00616def: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616df2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616df8:; BB(0x00616df8);
    /* 00616df8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dfb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e01:; BB(0x00616e01);
    /* 00616e01: movzx edx, word ptr [esp + 0x30] */ r_edx = (u32)R16((u32)(r_esp+0x30u));
    /* 00616e06: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00616e0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e0d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e13:; BB(0x00616e13);
    /* 00616e13: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e16: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e1c:; BB(0x00616e1c);
    /* 00616e1c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e1f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e25:; BB(0x00616e25);
    /* 00616e25: movzx edx, word ptr [esp + 0x32] */ r_edx = (u32)R16((u32)(r_esp+0x32u));
    /* 00616e2a: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00616e2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e31: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e37:; BB(0x00616e37);
    /* 00616e37: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e3a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e40:; BB(0x00616e40);
    /* 00616e40: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e43: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e49:; BB(0x00616e49);
    /* 00616e49: movzx edx, word ptr [esp + 0x34] */ r_edx = (u32)R16((u32)(r_esp+0x34u));
    /* 00616e4e: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00616e53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e55: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e5b:; BB(0x00616e5b);
    /* 00616e5b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e5e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e64:; BB(0x00616e64);
    /* 00616e64: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e67: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e6d:; BB(0x00616e6d);
    /* 00616e6d: movzx edx, word ptr [esp + 0x36] */ r_edx = (u32)R16((u32)(r_esp+0x36u));
    /* 00616e72: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 00616e77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e79: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e7f:; BB(0x00616e7f);
    /* 00616e7f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e82: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e88:; BB(0x00616e88);
    /* 00616e88: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e8b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e91:; BB(0x00616e91);
    /* 00616e91: movzx edx, word ptr [esp + 0x38] */ r_edx = (u32)R16((u32)(r_esp+0x38u));
    /* 00616e96: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 00616e9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e9d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e9f:; BB(0x00616e9f);
    /* 00616e9f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ea2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ea8:; BB(0x00616ea8);
    /* 00616ea8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eab: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616eb1:; BB(0x00616eb1);
    /* 00616eb1: movzx edx, word ptr [esp + 0x3a] */ r_edx = (u32)R16((u32)(r_esp+0x3au));
    /* 00616eb6: mov eax, 0x1d */ r_eax = 0x1du;
    /* 00616ebb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ebd: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ebf:; BB(0x00616ebf);
    /* 00616ebf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ec2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ec4:; BB(0x00616ec4);
    /* 00616ec4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ec7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ec9:; BB(0x00616ec9);
    /* 00616ec9: movzx edx, word ptr [esp + 0x3c] */ r_edx = (u32)R16((u32)(r_esp+0x3cu));
    /* 00616ece: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00616ed3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ed5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ed7:; BB(0x00616ed7);
    /* 00616ed7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eda: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616edc:; BB(0x00616edc);
    /* 00616edc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616edf: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ee1:; BB(0x00616ee1);
    /* 00616ee1: movzx edx, word ptr [esp + 0x3e] */ r_edx = (u32)R16((u32)(r_esp+0x3eu));
    /* 00616ee6: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 00616eeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eed: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616eef:; BB(0x00616eef);
    /* 00616eef: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ef2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ef4:; BB(0x00616ef4);
    /* 00616ef4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ef7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ef9:; BB(0x00616ef9);
    /* 00616ef9: mov edx, dword ptr [0xa8eadc] */ r_edx = R32((u32)(0xa8eadcu));
    /* 00616eff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00616f02: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616f09: push dword ptr [edx + ebp*4 + 0x2c] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00616f0d: call 0x814028 */ r_esp -= 4; W32(r_esp, 0x616f12u); f_00814028();
    /* 00616f12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00616f17: jge 0x616f23 */ if ((fS==fO)) goto L_00616f23;
L_00616f19:; BB(0x00616f19);
    /* 00616f19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616f1b: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616f21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616f22: ret  */ FN_RET(0x00616b61); r_esp += 4; return;
L_00616f23:; BB(0x00616f23);
    /* 00616f23: mov eax, 1 */ r_eax = 0x1u;
    /* 00616f28: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616f2f: ret  */ FN_RET(0x00616b61); r_esp += 4; return;
L_00616f30:; BB(0x00616f30);
    /* 00616f30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616f32: mov word ptr [esp + eax*2], dx */ W16((u32)(r_esp+r_eax*2), (u16)r_edx);
    /* 00616f36: jmp 0x616ef9 */ goto L_00616ef9;
}

void f_00616d6f(void)
{
    FN_ENTER(0x00616d6f);
    /* 00616d6f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00616d71: movzx edx, word ptr [esp + 0x28] */ r_edx = (u32)R16((u32)(r_esp+0x28u));
    /* 00616d76: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00616d7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d7d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616d83:; BB(0x00616d83);
    /* 00616d83: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d86: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d8c:; BB(0x00616d8c);
    /* 00616d8c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616d8f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616d95:; BB(0x00616d95);
    /* 00616d95: movzx edx, word ptr [esp + 0x2a] */ r_edx = (u32)R16((u32)(r_esp+0x2au));
    /* 00616d9a: mov eax, 0x15 */ r_eax = 0x15u;
    /* 00616d9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616da1: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616da7:; BB(0x00616da7);
    /* 00616da7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616daa: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616db0:; BB(0x00616db0);
    /* 00616db0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616db3: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616db9:; BB(0x00616db9);
    /* 00616db9: movzx edx, word ptr [esp + 0x2c] */ r_edx = (u32)R16((u32)(r_esp+0x2cu));
    /* 00616dbe: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00616dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dc5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616dcb:; BB(0x00616dcb);
    /* 00616dcb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dce: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616dd4:; BB(0x00616dd4);
    /* 00616dd4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dd7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ddd:; BB(0x00616ddd);
    /* 00616ddd: movzx edx, word ptr [esp + 0x2e] */ r_edx = (u32)R16((u32)(r_esp+0x2eu));
    /* 00616de2: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00616de7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616de9: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616def:; BB(0x00616def);
    /* 00616def: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616df2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616df8:; BB(0x00616df8);
    /* 00616df8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616dfb: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e01:; BB(0x00616e01);
    /* 00616e01: movzx edx, word ptr [esp + 0x30] */ r_edx = (u32)R16((u32)(r_esp+0x30u));
    /* 00616e06: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00616e0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e0d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e13:; BB(0x00616e13);
    /* 00616e13: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e16: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e1c:; BB(0x00616e1c);
    /* 00616e1c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e1f: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e25:; BB(0x00616e25);
    /* 00616e25: movzx edx, word ptr [esp + 0x32] */ r_edx = (u32)R16((u32)(r_esp+0x32u));
    /* 00616e2a: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00616e2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e31: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e37:; BB(0x00616e37);
    /* 00616e37: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e3a: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e40:; BB(0x00616e40);
    /* 00616e40: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e43: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e49:; BB(0x00616e49);
    /* 00616e49: movzx edx, word ptr [esp + 0x34] */ r_edx = (u32)R16((u32)(r_esp+0x34u));
    /* 00616e4e: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00616e53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e55: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e5b:; BB(0x00616e5b);
    /* 00616e5b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e5e: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e64:; BB(0x00616e64);
    /* 00616e64: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e67: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e6d:; BB(0x00616e6d);
    /* 00616e6d: movzx edx, word ptr [esp + 0x36] */ r_edx = (u32)R16((u32)(r_esp+0x36u));
    /* 00616e72: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 00616e77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e79: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e7f:; BB(0x00616e7f);
    /* 00616e7f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e82: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e88:; BB(0x00616e88);
    /* 00616e88: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e8b: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616e91:; BB(0x00616e91);
    /* 00616e91: movzx edx, word ptr [esp + 0x38] */ r_edx = (u32)R16((u32)(r_esp+0x38u));
    /* 00616e96: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 00616e9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616e9d: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616e9f:; BB(0x00616e9f);
    /* 00616e9f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ea2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ea8:; BB(0x00616ea8);
    /* 00616ea8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eab: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616eb1:; BB(0x00616eb1);
    /* 00616eb1: movzx edx, word ptr [esp + 0x3a] */ r_edx = (u32)R16((u32)(r_esp+0x3au));
    /* 00616eb6: mov eax, 0x1d */ r_eax = 0x1du;
    /* 00616ebb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ebd: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ebf:; BB(0x00616ebf);
    /* 00616ebf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ec2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ec4:; BB(0x00616ec4);
    /* 00616ec4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ec7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ec9:; BB(0x00616ec9);
    /* 00616ec9: movzx edx, word ptr [esp + 0x3c] */ r_edx = (u32)R16((u32)(r_esp+0x3cu));
    /* 00616ece: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00616ed3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ed5: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616ed7:; BB(0x00616ed7);
    /* 00616ed7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eda: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616edc:; BB(0x00616edc);
    /* 00616edc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616edf: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ee1:; BB(0x00616ee1);
    /* 00616ee1: movzx edx, word ptr [esp + 0x3e] */ r_edx = (u32)R16((u32)(r_esp+0x3eu));
    /* 00616ee6: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 00616eeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616eed: je 0x616ef9 */ if (fZ) goto L_00616ef9;
L_00616eef:; BB(0x00616eef);
    /* 00616eef: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ef2: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ef4:; BB(0x00616ef4);
    /* 00616ef4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616ef7: je 0x616f30 */ if (fZ) goto L_00616f30;
L_00616ef9:; BB(0x00616ef9);
    /* 00616ef9: mov edx, dword ptr [0xa8eadc] */ r_edx = R32((u32)(0xa8eadcu));
    /* 00616eff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00616f02: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616f09: push dword ptr [edx + ebp*4 + 0x2c] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00616f0d: call 0x814028 */ r_esp -= 4; W32(r_esp, 0x616f12u); f_00814028();
    /* 00616f12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00616f17: jge 0x616f23 */ if ((fS==fO)) goto L_00616f23;
L_00616f19:; BB(0x00616f19);
    /* 00616f19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616f1b: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616f21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616f22: ret  */ FN_RET(0x00616d6f); r_esp += 4; return;
L_00616f23:; BB(0x00616f23);
    /* 00616f23: mov eax, 1 */ r_eax = 0x1u;
    /* 00616f28: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00616f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616f2f: ret  */ FN_RET(0x00616d6f); r_esp += 4; return;
L_00616f30:; BB(0x00616f30);
    /* 00616f30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616f32: mov word ptr [esp + eax*2], dx */ W16((u32)(r_esp+r_eax*2), (u16)r_edx);
    /* 00616f36: jmp 0x616ef9 */ goto L_00616ef9;
}

void f_00616f38(void) /* sub_616F38 */
{
    FN_ENTER(0x00616f38);
    /* 00616f38: mov dword ptr [0xa8eae0], 0x3f800000 */ W32((u32)(0xa8eae0u), 0x3f800000u);
    /* 00616f42: mov dword ptr [0xa8eae4], 0x41000000 */ W32((u32)(0xa8eae4u), 0x41000000u);
    /* 00616f4c: mov dword ptr [0xa8eae8], 0x3fc00000 */ W32((u32)(0xa8eae8u), 0x3fc00000u);
    /* 00616f56: ret  */ FN_RET(0x00616f38); r_esp += 4; return;
}

void f_00616f58(void) /* sub_616F58 */
{
    FN_ENTER(0x00616f58);
    /* 00616f58: push 0x930370 */ { u32 v = 0x930370u; r_esp -= 4; W32(r_esp, v); }
    /* 00616f5d: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x616f62u); f_005b9568();
    /* 00616f62: mov dword ptr [0xa8eaf0], eax */ W32((u32)(0xa8eaf0u), r_eax);
    /* 00616f67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00616f68: ret  */ FN_RET(0x00616f58); r_esp += 4; return;
}

void f_00616f6c(void) /* sub_616F6C */
{
    FN_ENTER(0x00616f6c);
    /* 00616f6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00616f6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00616f6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00616f71: call 0x616f90 */ r_esp -= 4; W32(r_esp, 0x616f76u); f_00616f90();
    /* 00616f76: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00616f7a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616f7c: jne 0x616f82 */ if (!fZ) goto L_00616f82;
L_00616f7e:; BB(0x00616f7e);
    /* 00616f7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00616f7f: ret 4 */ FN_RET(0x00616f6c); r_esp += 8; return;
L_00616f82:; BB(0x00616f82);
    /* 00616f82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00616f83: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x616f88u); f_005c2f74();
    /* 00616f88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00616f89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00616f8a: ret 4 */ FN_RET(0x00616f6c); r_esp += 8; return;
}

void f_00616f90(void) /* sub_616F90 */
{
    FN_ENTER(0x00616f90);
    /* 00616f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00616f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00616f95: push 0x8e1534 */ { u32 v = 0x8e1534u; r_esp -= 4; W32(r_esp, v); }
    /* 00616f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00616fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00616fa8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616fab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00616fae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00616fb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00616fb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00616fb7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00616fba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616fc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00616fc4: mov dword ptr [ecx], 0xb258e8 */ W32((u32)(r_ecx), 0xb258e8u);
    /* 00616fca: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x616fcfu); f_007b9c8c();
    /* 00616fcf: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00616fd2: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x616fd7u); f_007b4e84();
    /* 00616fd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00616fd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00616fdf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00616fe2: call 0x628d94 */ r_esp -= 4; W32(r_esp, 0x616fe7u); f_00628d94();
    /* 00616fe7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616fea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00616ff1: mov esp, ebp */ r_esp = r_ebp;
    /* 00616ff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616ff4: ret  */ FN_RET(0x00616f90); r_esp += 4; return;
}

void f_00616ff8(void) /* sub_616FF8 */
{
    FN_ENTER(0x00616ff8);
    /* 00616ff8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00616ff9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00616ffa: mov edi, ecx */ r_edi = r_ecx;
    /* 00616ffc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00616fff: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00617003: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00617008: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0061700b: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00617010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617011: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617012: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x617017u); f_0078ea50();
    /* 00617017: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0061701a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0061701d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0061701f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00617021: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00617023: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00617024: jbe 0x617039 */ if ((fC||fZ)) goto L_00617039;
L_00617026:; BB(0x00617026);
    /* 00617026: mov edx, 1 */ r_edx = 0x1u;
    /* 0061702b: mov word ptr [edi + 0x1e], dx */ W16((u32)(r_edi+0x1eu), (u16)r_edx);
    /* 0061702f: mov eax, 1 */ r_eax = 0x1u;
    /* 00617034: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617035: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00617036: ret 8 */ FN_RET(0x00616ff8); r_esp += 12; return;
L_00617039:; BB(0x00617039);
    /* 00617039: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061703d: mov ecx, edi */ r_ecx = r_edi;
    /* 0061703f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617043: call 0x7ba468 */ r_esp -= 4; W32(r_esp, 0x617048u); f_007ba468();
    /* 00617048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061704a: ret 8 */ FN_RET(0x00616ff8); r_esp += 12; return;
}

