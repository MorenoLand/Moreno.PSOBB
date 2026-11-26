#include "protos.h"

void f_004aa41c(void) /* sub_4AA41C */
{
    FN_ENTER(0x004aa41c);
    /* 004aa41c: mov dword ptr [0xa476d8], 0x3f800000 */ W32((u32)(0xa476d8u), 0x3f800000u);
    /* 004aa426: mov dword ptr [0xa476dc], 0x41000000 */ W32((u32)(0xa476dcu), 0x41000000u);
    /* 004aa430: mov dword ptr [0xa476e0], 0x3fc00000 */ W32((u32)(0xa476e0u), 0x3fc00000u);
    /* 004aa43a: ret  */ FN_RET(0x004aa41c); r_esp += 4; return;
}

void f_004aa43c(void) /* sub_4AA43C */
{
    FN_ENTER(0x004aa43c);
    /* 004aa43c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa43d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004aa43f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004aa441: call 0x4aa460 */ r_esp -= 4; W32(r_esp, 0x4aa446u); f_004aa460();
    /* 004aa446: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004aa44a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aa44c: jne 0x4aa452 */ if (!fZ) goto L_004aa452;
L_004aa44e:; BB(0x004aa44e);
    /* 004aa44e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aa44f: ret 4 */ FN_RET(0x004aa43c); r_esp += 8; return;
L_004aa452:; BB(0x004aa452);
    /* 004aa452: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa453: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4aa458u); f_005c2f74();
    /* 004aa458: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aa459: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aa45a: ret 4 */ FN_RET(0x004aa43c); r_esp += 8; return;
}

void f_004aa460(void) /* sub_4AA460 */
{
    FN_ENTER(0x004aa460);
    /* 004aa460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aa461: mov ebp, esp */ r_ebp = r_esp;
    /* 004aa463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa465: push 0x8d071c */ { u32 v = 0x8d071cu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa46a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aa470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa471: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aa478: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa47b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aa47e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004aa481: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004aa484: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004aa487: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004aa48a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aa48d: mov dword ptr [ecx], 0xafa1c0 */ W32((u32)(r_ecx), 0xafa1c0u);
    /* 004aa493: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004aa49a: call 0x4a93dc */ r_esp -= 4; W32(r_esp, 0x4aa49fu); f_004a93dc();
    /* 004aa49f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aa4a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aa4a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004aa4ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aa4ac: ret  */ FN_RET(0x004aa460); r_esp += 4; return;
}

void f_004aa4b0(void) /* sub_4AA4B0 */
{
    FN_ENTER(0x004aa4b0);
    /* 004aa4b0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa4b3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004aa4b7: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004aa4bb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004aa4bd: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004aa4c0: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004aa4c3: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004aa4c7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004aa4ca: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004aa4ce: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004aa4d1: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa4d5: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa4d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4dc: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa4e0: call 0x4aa4ec */ r_esp -= 4; W32(r_esp, 0x4aa4e5u); f_004aa4ec();
    /* 004aa4e5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aa4e8: ret  */ FN_RET(0x004aa4b0); r_esp += 4; return;
}

void f_004aa4ec(void) /* sub_4AA4EC */
{
    FN_ENTER(0x004aa4ec);
    /* 004aa4ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004aa4ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4f1: push 0x8d0744 */ { u32 v = 0x8d0744u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aa4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa4fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aa504: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aa50a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004aa50d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004aa510: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004aa513: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004aa516: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa51b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004aa51d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004aa520: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004aa523: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004aa526: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004aa529: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004aa52c: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004aa52f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa530: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4aa535u); f_00780630();
    /* 004aa535: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aa538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa53a: je 0x4aa66c */ if (fZ) goto L_004aa66c;
L_004aa540:; BB(0x004aa540);
    /* 004aa540: fld dword ptr [0x903ae0] */ FPUSH(R_F32((u32)(0x903ae0u)));
    /* 004aa546: fld dword ptr [0x903ae0] */ FPUSH(R_F32((u32)(0x903ae0u)));
    /* 004aa54c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004aa54f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004aa552: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004aa554: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004aa556: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa558: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa55a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa55b: jb 0x4aa55f */ if (fC) goto L_004aa55f;
L_004aa55d:; BB(0x004aa55d);
    /* 004aa55d: fst st(1) */ ST(1) = ST(0);
L_004aa55f:; BB(0x004aa55f);
    /* 004aa55f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa561: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_004aa564:; BB(0x004aa564);
    /* 004aa564: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004aa56b: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa570: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4aa575u); f_005caba4();
    /* 004aa575: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004aa578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aa57b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004aa57e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa580: je 0x4aa665 */ if (fZ) goto L_004aa665;
L_004aa586:; BB(0x004aa586);
    /* 004aa586: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004aa58d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004aa594: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa599: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004aa59c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aa59f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa5a0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa5a3: call 0x4a95d8 */ r_esp -= 4; W32(r_esp, 0x4aa5a8u); f_004a95d8();
    /* 004aa5a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004aa5ab: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 004aa5ae: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 004aa5b1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004aa5b6: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
    /* 004aa5bc: mov dword ptr [eax + 0x98], ebx */ W32((u32)(r_eax+0x98u), r_ebx);
    /* 004aa5c2: mov dword ptr [eax], 0xafa1c0 */ W32((u32)(r_eax), 0xafa1c0u);
    /* 004aa5c8: mov edx, dword ptr [0x9a81a4] */ r_edx = R32((u32)(0x9a81a4u));
    /* 004aa5ce: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004aa5d1: lea edi, [ebx + esi] */ r_edi = (u32)(r_ebx+r_esi);
    /* 004aa5d4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 004aa5d7: mov dword ptr [eax + 0x9c], edi */ W32((u32)(r_eax+0x9cu), r_edi);
    /* 004aa5dd: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004aa5df: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 004aa5e2: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004aa5e5: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 004aa5e8: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004aa5eb: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 004aa5ee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004aa5f1: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 004aa5f4: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 004aa5f7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004aa5fa: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004aa5fd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004aa600: mov dword ptr [eax + ecx*8 + 0x40], edx */ W32((u32)(r_eax+r_ecx*8+0x40u), r_edx);
    /* 004aa604: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 004aa60a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004aa60f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa612: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004aa615: jle 0x4aa644 */ if ((fZ||fS!=fO)) goto L_004aa644;
L_004aa617:; BB(0x004aa617);
    /* 004aa617: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 004aa61a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aa61d: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004aa61f: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004aa622: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aa625: mov dword ptr [edx + eax*8 + 0x48], ebx */ W32((u32)(r_edx+r_eax*8+0x48u), r_ebx);
    /* 004aa629: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004aa62c: mov dword ptr [edx + eax*8 + 0x4c], esi */ W32((u32)(r_edx+r_eax*8+0x4cu), r_esi);
    /* 004aa630: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 004aa633: mov dword ptr [edx + eax*8 + 0x50], ebx */ W32((u32)(r_edx+r_eax*8+0x50u), r_ebx);
    /* 004aa637: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 004aa63d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aa640: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004aa642: jl 0x4aa617 */ if ((fS!=fO)) goto L_004aa617;
L_004aa644:; BB(0x004aa644);
    /* 004aa644: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004aa64b:; BB(0x004aa64b);
    /* 004aa64b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004aa64e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aa651: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004aa654: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004aa657: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aa65a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aa661: mov esp, ebp */ r_esp = r_ebp;
    /* 004aa663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aa664: ret  */ FN_RET(0x004aa4ec); r_esp += 4; return;
L_004aa665:; BB(0x004aa665);
    /* 004aa665: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aa667: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004aa66a: jmp 0x4aa64b */ goto L_004aa64b;
L_004aa66c:; BB(0x004aa66c);
    /* 004aa66c: mov eax, dword ptr [0x903ae0] */ r_eax = R32((u32)(0x903ae0u));
    /* 004aa671: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004aa674: jmp 0x4aa564 */ goto L_004aa564;
}

void f_004aa67c(void) /* sub_4AA67C */
{
    FN_ENTER(0x004aa67c);
    /* 004aa67c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa67d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa680: mov edi, ecx */ r_edi = r_ecx;
    /* 004aa682: fild dword ptr [edi + 0x94] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x94u)));
    /* 004aa688: fild dword ptr [edi + 0x9c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x9cu)));
    /* 004aa68e: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 004aa690: fild dword ptr [edi + 0x98] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x98u)));
    /* 004aa696: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 004aa698: fld dword ptr [0x90444c] */ FPUSH(R_F32((u32)(0x90444cu)));
    /* 004aa69e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004aa6a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa6a2: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa6a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa6a5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004aa6a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aa6a9: ja 0x4aa6ad */ if ((!fC&&!fZ)) goto L_004aa6ad;
L_004aa6ab:; BB(0x004aa6ab);
    /* 004aa6ab: fst st(1) */ ST(1) = ST(0);
L_004aa6ad:; BB(0x004aa6ad);
    /* 004aa6ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004aa6af: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 004aa6b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aa6b6: ja 0x4aa6ba */ if ((!fC&&!fZ)) goto L_004aa6ba;
L_004aa6b8:; BB(0x004aa6b8);
    /* 004aa6b8: fst st(1) */ ST(1) = ST(0);
L_004aa6ba:; BB(0x004aa6ba);
    /* 004aa6ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aa6bc: fstp dword ptr [edi + 0x8c] */ W_F32((u32)(r_edi+0x8cu), ST(0)); FPOP();
    /* 004aa6c2: call 0x4a9560 */ r_esp -= 4; W32(r_esp, 0x4aa6c7u); f_004a9560();
    /* 004aa6c7: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa6c9: call 0x4aa724 */ r_esp -= 4; W32(r_esp, 0x4aa6ceu); f_004aa724();
    /* 004aa6ce: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 004aa6d4: cmp eax, dword ptr [edi + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa6da: jne 0x4aa6fc */ if (!fZ) goto L_004aa6fc;
L_004aa6dc:; BB(0x004aa6dc);
    /* 004aa6dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004aa6df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa6e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa6e2: call 0x4a9758 */ r_esp -= 4; W32(r_esp, 0x4aa6e7u); f_004a9758();
    /* 004aa6e7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004aa6ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aa6ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa6ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa6ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa6ef: push 0x3b0 */ { u32 v = 0x3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa6f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4aa6f9u); f_00814298();
    /* 004aa6f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004aa6fc:; BB(0x004aa6fc);
    /* 004aa6fc: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa6fe: call 0x4a94a4 */ r_esp -= 4; W32(r_esp, 0x4aa703u); f_004a94a4();
    /* 004aa703: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 004aa709: cmp eax, dword ptr [edi + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aa70f: jl 0x4aa71e */ if ((fS!=fO)) goto L_004aa71e;
L_004aa711:; BB(0x004aa711);
    /* 004aa711: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004aa715: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aa71a: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_004aa71e:; BB(0x004aa71e);
    /* 004aa71e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aa721: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aa722: ret  */ FN_RET(0x004aa67c); r_esp += 4; return;
}

void f_004aa724(void) /* sub_4AA724 */
{
    FN_ENTER(0x004aa724);
    /* 004aa724: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa725: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa726: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa729: mov esi, ecx */ r_esi = r_ecx;
    /* 004aa72b: call 0x4a6edc */ r_esp -= 4; W32(r_esp, 0x4aa730u); f_004a6edc();
    /* 004aa730: mov edi, eax */ r_edi = r_eax;
    /* 004aa732: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa734: je 0x4aa751 */ if (fZ) goto L_004aa751;
L_004aa736:; BB(0x004aa736);
    /* 004aa736: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004aa739: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa73a: mov ecx, esi */ r_ecx = r_esi;
    /* 004aa73c: call 0x4a9758 */ r_esp -= 4; W32(r_esp, 0x4aa741u); f_004a9758();
    /* 004aa741: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004aa744: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa749: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa74a: mov ecx, edi */ r_ecx = r_edi;
    /* 004aa74c: call 0x4a51c0 */ r_esp -= 4; W32(r_esp, 0x4aa751u); f_004a51c0();
L_004aa751:; BB(0x004aa751);
    /* 004aa751: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aa754: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aa755: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aa756: ret  */ FN_RET(0x004aa724); r_esp += 4; return;
}

void f_004aa758(void) /* sub_4AA758 */
{
    FN_ENTER(0x004aa758);
    /* 004aa758: mov eax, 0x21 */ r_eax = 0x21u;
    /* 004aa75d: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004aa760: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004aa765: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 004aa769: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aa76b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004aa76e: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 004aa771: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004aa774: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 004aa777: ret  */ FN_RET(0x004aa758); r_esp += 4; return;
}

void f_004aa778(void) /* sub_4AA778 */
{
    FN_ENTER(0x004aa778);
    /* 004aa778: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa779: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004aa77b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004aa77d: call 0x4aa79c */ r_esp -= 4; W32(r_esp, 0x4aa782u); f_004aa79c();
    /* 004aa782: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004aa786: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aa788: jne 0x4aa78e */ if (!fZ) goto L_004aa78e;
L_004aa78a:; BB(0x004aa78a);
    /* 004aa78a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aa78b: ret 4 */ FN_RET(0x004aa778); r_esp += 8; return;
L_004aa78e:; BB(0x004aa78e);
    /* 004aa78e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa78f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4aa794u); f_005c2f74();
    /* 004aa794: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aa795: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aa796: ret 4 */ FN_RET(0x004aa778); r_esp += 8; return;
}

void f_004aa79c(void) /* sub_4AA79C */
{
    FN_ENTER(0x004aa79c);
    /* 004aa79c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aa79d: mov ebp, esp */ r_ebp = r_esp;
    /* 004aa79f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa7a1: push 0x8d0760 */ { u32 v = 0x8d0760u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa7a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aa7ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa7ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aa7b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa7b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aa7ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004aa7bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004aa7c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004aa7c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004aa7c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aa7c9: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004aa7cc: mov dword ptr [ecx], 0xafa220 */ W32((u32)(r_ecx), 0xafa220u);
    /* 004aa7d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa7d4: je 0x4aa7ed */ if (fZ) goto L_004aa7ed;
L_004aa7d6:; BB(0x004aa7d6);
    /* 004aa7d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aa7d9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aa7dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aa7e2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aa7e6: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_004aa7ed:; BB(0x004aa7ed);
    /* 004aa7ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004aa7f4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4aa7f9u); f_008171e8();
    /* 004aa7f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aa7fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aa803: mov esp, ebp */ r_esp = r_ebp;
    /* 004aa805: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aa806: ret  */ FN_RET(0x004aa79c); r_esp += 4; return;
}

void f_004aa808(void) /* sub_4AA808 */
{
    FN_ENTER(0x004aa808);
    /* 004aa808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aa809: mov ebp, esp */ r_ebp = r_esp;
    /* 004aa80b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa80d: push 0x8d077c */ { u32 v = 0x8d077cu; r_esp -= 4; W32(r_esp, v); }
    /* 004aa812: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aa818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa819: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aa820: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa823: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aa826: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004aa829: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004aa82c: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 004aa82f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004aa832: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa835: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004aa838: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004aa83b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004aa83e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004aa841: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004aa844: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004aa847: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004aa84a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004aa84d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004aa851: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004aa854: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4aa859u); f_008193cc();
    /* 004aa859: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004aa860: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004aa863: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004aa866: mov dword ptr [ecx], 0xafa220 */ W32((u32)(r_ecx), 0xafa220u);
    /* 004aa86c: mov ebx, dword ptr [0x9a81a8] */ r_ebx = R32((u32)(0x9a81a8u));
    /* 004aa872: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 004aa875: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004aa877: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 004aa87a: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 004aa87d: mov dword ptr [ecx + 0x44], edi */ W32((u32)(r_ecx+0x44u), r_edi);
    /* 004aa880: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004aa883: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 004aa886: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004aa888: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 004aa88b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004aa88e: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 004aa891: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aa894: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004aa897: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 004aa89a: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aa89d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4aa8a2u); f_0082ebac();
    /* 004aa8a2: mov edi, dword ptr [ebp - 0x4c] */ r_edi = R32((u32)(r_ebp+0xffffffb4u));
    /* 004aa8a5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004aa8a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aa8ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004aa8ad: mov ebx, dword ptr [edi + 0x44] */ r_ebx = R32((u32)(r_edi+0x44u));
    /* 004aa8b0: mov esi, dword ptr [edi + 0x48] */ r_esi = R32((u32)(r_edi+0x48u));
    /* 004aa8b3: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 004aa8b6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004aa8b9: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 004aa8bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004aa8bf: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 004aa8c2: mov dword ptr [edi + 0x64], 0x40a00000 */ W32((u32)(r_edi+0x64u), 0x40a00000u);
    /* 004aa8c9: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 004aa8cc: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004aa8cf: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004aa8d6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004aa8d9: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004aa8dc: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 004aa8df: mov dword ptr [edi + 0x30], ebx */ W32((u32)(r_edi+0x30u), r_ebx);
    /* 004aa8e2: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004aa8e5: mov word ptr [edi + 0x28], cx */ W16((u32)(r_edi+0x28u), (u16)r_ecx);
    /* 004aa8e9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004aa8ec: mov dword ptr [edi + 0x38], ecx */ W32((u32)(r_edi+0x38u), r_ecx);
    /* 004aa8ef: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004aa8f2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4aa8f7u); f_0082f9c4();
    /* 004aa8f7: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 004aa8fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aa8fb: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4aa900u); f_00782868();
    /* 004aa900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aa901: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004aa904: fld dword ptr [0x904468] */ FPUSH(R_F32((u32)(0x904468u)));
    /* 004aa90a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aa90c: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004aa90f: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004aa912: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 004aa915: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 004aa919: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aa91e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004aa921: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004aa924: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004aa927: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004aa92a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004aa92d: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 004aa932: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004aa935: mov eax, 0 */ r_eax = 0x0u;
    /* 004aa93a: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 004aa93d: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004aa940: jg 0x4aa944 */ if ((!fZ&&fS==fO)) goto L_004aa944;
L_004aa942:; BB(0x004aa942);
    /* 004aa942: mov ecx, edx */ r_ecx = r_edx;
L_004aa944:; BB(0x004aa944);
    /* 004aa944: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004aa947: mov eax, ebx */ r_eax = r_ebx;
    /* 004aa949: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004aa94c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aa94f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aa956: mov esp, ebp */ r_esp = r_ebp;
    /* 004aa958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aa959: ret 0x18 */ FN_RET(0x004aa808); r_esp += 28; return;
}

void f_004aa95c(void) /* sub_4AA95C */
{
    FN_ENTER(0x004aa95c);
    /* 004aa95c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa95d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa95e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aa95f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004aa960: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aa963: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004aa965: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004aa968: call 0x4a873c */ r_esp -= 4; W32(r_esp, 0x4aa96du); f_004a873c();
    /* 004aa96d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa96f: jne 0x4aaab8 */ if (!fZ) goto L_004aaab8;
L_004aa975:; BB(0x004aa975);
    /* 004aa975: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004aa978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa97a: je 0x4aaae6 */ if (fZ) goto L_004aaae6;
L_004aa980:; BB(0x004aa980);
    /* 004aa980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa983: je 0x4aaa4d */ if (fZ) goto L_004aaa4d;
L_004aa989:; BB(0x004aa989);
    /* 004aa989: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa98c: jne 0x4aaab0 */ if (!fZ) goto L_004aaab0;
L_004aa992:; BB(0x004aa992);
    /* 004aa992: mov eax, dword ptr [0xa476ec] */ r_eax = R32((u32)(0xa476ecu));
    /* 004aa997: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa999: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa99c: lea edi, [ebx + 0x2c] */ r_edi = (u32)(r_ebx+0x2cu);
    /* 004aa99f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa9a0: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4aa9a5u); f_0050b7a4();
    /* 004aa9a5: mov esi, eax */ r_esi = r_eax;
    /* 004aa9a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aa9aa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aa9ac: je 0x4aa9ee */ if (fZ) goto L_004aa9ee;
L_004aa9ae:; BB(0x004aa9ae);
    /* 004aa9ae: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004aa9b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa9b6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4aa9bbu); f_005b8610();
    /* 004aa9bb: mov ebp, eax */ r_ebp = r_eax;
    /* 004aa9bd: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004aa9c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa9c5: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4aa9cau); f_005b8638();
    /* 004aa9ca: mov edx, dword ptr [0xa4762c] */ r_edx = R32((u32)(0xa4762cu));
    /* 004aa9d0: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 004aa9d7: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 004aa9da: movzx ebp, word ptr [esi + 0x2c] */ r_ebp = (u32)R16((u32)(r_esi+0x2cu));
    /* 004aa9de: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 004aa9e1: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 004aa9e4: or ebp, 0xffff0200 */ {  u32 a = r_ebp; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004aa9ea: mov word ptr [esi + 0x2c], bp */ W16((u32)(r_esi+0x2cu), (u16)r_ebp);
L_004aa9ee:; BB(0x004aa9ee);
    /* 004aa9ee: mov eax, dword ptr [0xa476ec] */ r_eax = R32((u32)(0xa476ecu));
    /* 004aa9f3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aa9f5: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aa9f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aa9f9: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4aa9feu); f_0050b7a4();
    /* 004aa9fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aaa00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa03: push 0x3ad */ { u32 v = 0x3adu; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa08: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4aaa0du); f_00814298();
    /* 004aaa0d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aaa10: call 0x4a6edc */ r_esp -= 4; W32(r_esp, 0x4aaa15u); f_004a6edc();
    /* 004aaa15: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa16: mov ecx, eax */ r_ecx = r_eax;
    /* 004aaa18: call 0x4a862c */ r_esp -= 4; W32(r_esp, 0x4aaa1du); f_004a862c();
    /* 004aaa1d: movzx eax, word ptr [ebx + 0x28] */ r_eax = (u32)R16((u32)(r_ebx+0x28u));
    /* 004aaa21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa23: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aaa26: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aaa29: call 0x4ab138 */ r_esp -= 4; W32(r_esp, 0x4aaa2eu); f_004ab138();
    /* 004aaa2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aaa31: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004aaa35: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 004aaa3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aaa41: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004aaa45: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aaa48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aaa49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aaa4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aaa4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aaa4c: ret  */ FN_RET(0x004aa95c); r_esp += 4; return;
L_004aaa4d:; BB(0x004aaa4d);
    /* 004aaa4d: fild dword ptr [ebx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x20u)));
    /* 004aaa50: fild dword ptr [ebx + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x24u)));
    /* 004aaa53: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004aaa55: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004aaa59: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 004aaa61: lea ebp, [ebx + 0x2c] */ r_ebp = (u32)(r_ebx+0x2cu);
    /* 004aaa64: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004aaa6c: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004aaa70: lea eax, [ebx + 0x40] */ r_eax = (u32)(r_ebx+0x40u);
    /* 004aaa73: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004aaa76: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4aaa7bu); f_007be6b8();
    /* 004aaa7b: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004aaa7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaa80: je 0x4aaacd */ if (fZ) goto L_004aaacd;
L_004aaa82:; BB(0x004aaa82);
    /* 004aaa82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaa84: je 0x4aaa8c */ if (fZ) goto L_004aaa8c;
L_004aaa86:; BB(0x004aaa86);
    /* 004aaa86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aaa87: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4aaa8cu); f_00508db8();
L_004aaa8c:; BB(0x004aaa8c);
    /* 004aaa8c: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004aaa8f: cmp eax, dword ptr [ebx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aaa92: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 004aaa95: jg 0x4aaaa2 */ if ((!fZ&&fS==fO)) goto L_004aaaa2;
L_004aaa97:; BB(0x004aaa97);
    /* 004aaa97: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004aaa9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aaa9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aaa9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aaa9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aaaa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aaaa1: ret  */ FN_RET(0x004aa95c); r_esp += 4; return;
L_004aaaa2:; BB(0x004aaaa2);
    /* 004aaaa2: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 004aaaa9: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
L_004aaab0:; BB(0x004aaab0);
    /* 004aaab0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aaab3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aaab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aaab5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aaab6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aaab7: ret  */ FN_RET(0x004aa95c); r_esp += 4; return;
L_004aaab8:; BB(0x004aaab8);
    /* 004aaab8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004aaabc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aaac1: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004aaac5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aaac8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004aaac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aaaca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aaacb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aaacc: ret  */ FN_RET(0x004aa95c); r_esp += 4; return;
L_004aaacd:; BB(0x004aaacd);
    /* 004aaacd: mov eax, dword ptr [0xa476ec] */ r_eax = R32((u32)(0xa476ecu));
    /* 004aaad2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aaad4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004aaad6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aaad7: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4aaadcu); f_0050981c();
    /* 004aaadc: mov ecx, eax */ r_ecx = r_eax;
    /* 004aaade: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aaae1: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 004aaae4: jmp 0x4aaa82 */ goto L_004aaa82;
L_004aaae6:; BB(0x004aaae6);
    /* 004aaae6: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004aaaed: jmp 0x4aaa4d */ goto L_004aaa4d;
}

void f_004aaaf4(void) /* sub_4AAAF4 */
{
    FN_ENTER(0x004aaaf4);
    /* 004aaaf4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4aaaf9u); f_006dc358();
    /* 004aaaf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aaafb: jne 0x4aab07 */ if (!fZ) goto L_004aab07;
L_004aaafd:; BB(0x004aaafd);
    /* 004aaafd: mov dword ptr [0xa476ec], 0x904458 */ W32((u32)(0xa476ecu), 0x904458u);
L_004aab07:; BB(0x004aab07);
    /* 004aab07: ret  */ FN_RET(0x004aaaf4); r_esp += 4; return;
}

void f_004aab08(void) /* sub_4AAB08 */
{
    FN_ENTER(0x004aab08);
    /* 004aab08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aab09: mov ebp, esp */ r_ebp = r_esp;
    /* 004aab0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aab0d: push 0x8d0798 */ { u32 v = 0x8d0798u; r_esp -= 4; W32(r_esp, v); }
    /* 004aab12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aab18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aab19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aab20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aab23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aab26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004aab29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004aab2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004aab2f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004aab32: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004aab35: mov eax, ecx */ r_eax = r_ecx;
    /* 004aab37: mov dword ptr [eax], 0xafa280 */ W32((u32)(r_eax), 0xafa280u);
    /* 004aab3d: mov edx, 0x1f */ r_edx = 0x1fu;
L_004aab42:; BB(0x004aab42);
    /* 004aab42: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aab45: mov ebx, dword ptr [ecx + edx*4 + 0xa0] */ r_ebx = R32((u32)(r_ecx+r_edx*4+0xa0u));
    /* 004aab4c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004aab4f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aab51: je 0x4aab6f */ if (fZ) goto L_004aab6f;
L_004aab53:; BB(0x004aab53);
    /* 004aab53: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004aab57: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004aab5d: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004aab61: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aab64: mov dword ptr [ebx + eax*2 + 0xa0], 0 */ W32((u32)(r_ebx+r_eax*2+0xa0u), 0x0u);
L_004aab6f:; BB(0x004aab6f);
    /* 004aab6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aab72: mov ebx, dword ptr [ecx + eax*2 + 0x20] */ r_ebx = R32((u32)(r_ecx+r_eax*2+0x20u));
    /* 004aab76: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aab78: je 0x4aab93 */ if (fZ) goto L_004aab93;
L_004aab7a:; BB(0x004aab7a);
    /* 004aab7a: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004aab7e: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004aab84: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004aab88: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aab8b: mov dword ptr [ebx + eax*2 + 0x20], 0 */ W32((u32)(r_ebx+r_eax*2+0x20u), 0x0u);
L_004aab93:; BB(0x004aab93);
    /* 004aab93: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004aab96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004aab98: jge 0x4aab42 */ if ((fS==fO)) goto L_004aab42;
L_004aab9a:; BB(0x004aab9a);
    /* 004aab9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004aaba1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aaba4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4aaba9u); f_008171e8();
    /* 004aaba9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004aabac: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aabae: jne 0x4aabc9 */ if (!fZ) goto L_004aabc9;
L_004aabb0:; BB(0x004aabb0);
    /* 004aabb0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aabb3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004aabb6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004aabb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aabbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aabc3: mov esp, ebp */ r_esp = r_ebp;
    /* 004aabc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aabc6: ret 4 */ FN_RET(0x004aab08); r_esp += 8; return;
L_004aabc9:; BB(0x004aabc9);
    /* 004aabc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004aabcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aabcd: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4aabd2u); f_005c2f74();
    /* 004aabd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aabd3: jmp 0x4aabb0 */ goto L_004aabb0;
}

void f_004aabd8(void) /* sub_4AABD8 */
{
    FN_ENTER(0x004aabd8);
    /* 004aabd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aabd9: mov ebp, esp */ r_ebp = r_esp;
    /* 004aabdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aabdd: push 0x8d07b4 */ { u32 v = 0x8d07b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004aabe2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aabe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aabe9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aabf0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aabf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aabf6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004aabf9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004aabfc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004aabff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004aac02: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aac05: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004aac08: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004aac0b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4aac10u); f_008193cc();
    /* 004aac10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004aac17: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aac1a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004aac1d: mov dword ptr [eax], 0xafa280 */ W32((u32)(r_eax), 0xafa280u);
    /* 004aac23: mov edx, dword ptr [0x9a81ac] */ r_edx = R32((u32)(0x9a81acu));
    /* 004aac29: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aac2b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004aac2e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 004aac30: mov dword ptr [eax + 0x120], ecx */ W32((u32)(r_eax+0x120u), r_ecx);
    /* 004aac36: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 004aac39: mov dword ptr [eax + 0x124], ebx */ W32((u32)(r_eax+0x124u), r_ebx);
    /* 004aac3f: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 004aac42: mov dword ptr [eax + 0x128], edi */ W32((u32)(r_eax+0x128u), r_edi);
    /* 004aac48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004aac4a: mov dword ptr [eax + 0x12c], edx */ W32((u32)(r_eax+0x12cu), r_edx);
    /* 004aac50: mov dword ptr [eax + 0x124], 0x40000000 */ W32((u32)(r_eax+0x124u), 0x40000000u);
    /* 004aac5a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004aac5d: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aac62: mov edx, dword ptr [0xa476f4] */ r_edx = R32((u32)(0xa476f4u));
    /* 004aac68: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004aac6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aac6c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4aac71u); f_0050b7a4();
    /* 004aac71: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aac74: mov eax, dword ptr [0xa476f4] */ r_eax = R32((u32)(0xa476f4u));
    /* 004aac79: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aac7b: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004aac81: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aac84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aac85: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4aac8au); f_0050b7a4();
    /* 004aac8a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aac8d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aac90: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aac93: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004aac96: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004aac99: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aac9b: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004aac9e: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 004aaca4: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004aaca7: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 004aacad: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004aacb0: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 004aacb6: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004aacb9: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 004aacbf: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 004aacc2: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 004aacc8: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 004aaccb: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 004aacd1: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004aacd4: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 004aacda: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 004aacdd: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 004aace3: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 004aace6: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 004aacec: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 004aacef: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 004aacf5: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 004aacf8: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 004aacfe: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 004aad01: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 004aad07: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 004aad0a: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 004aad10: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 004aad13: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 004aad19: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 004aad1c: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 004aad22: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 004aad25: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 004aad2b: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 004aad2e: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 004aad34: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 004aad37: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 004aad3d: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 004aad40: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 004aad46: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004aad49: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 004aad4f: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 004aad52: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 004aad58: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 004aad5b: mov dword ptr [eax + 0xf4], edx */ W32((u32)(r_eax+0xf4u), r_edx);
    /* 004aad61: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 004aad64: mov dword ptr [eax + 0xf8], edx */ W32((u32)(r_eax+0xf8u), r_edx);
    /* 004aad6a: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 004aad6d: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 004aad73: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 004aad79: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
    /* 004aad7f: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 004aad85: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004aad8b: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 004aad91: mov dword ptr [eax + 0x108], edx */ W32((u32)(r_eax+0x108u), r_edx);
    /* 004aad97: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 004aad9d: mov dword ptr [eax + 0x10c], edx */ W32((u32)(r_eax+0x10cu), r_edx);
    /* 004aada3: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 004aada9: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
    /* 004aadaf: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 004aadb5: mov dword ptr [eax + 0x114], edx */ W32((u32)(r_eax+0x114u), r_edx);
    /* 004aadbb: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 004aadc1: mov dword ptr [eax + 0x118], edx */ W32((u32)(r_eax+0x118u), r_edx);
    /* 004aadc7: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 004aadcd: mov dword ptr [eax + 0x11c], edx */ W32((u32)(r_eax+0x11cu), r_edx);
    /* 004aadd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aadd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aaddd: mov esp, ebp */ r_esp = r_ebp;
    /* 004aaddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aade0: ret 8 */ FN_RET(0x004aabd8); r_esp += 12; return;
}

void f_004aade4(void) /* sub_4AADE4 */
{
    FN_ENTER(0x004aade4);
    /* 004aade4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aade5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aade6: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aade9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004aadeb: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004aadee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aadf0: jne 0x4aaf6d */ if (!fZ) goto L_004aaf6d;
L_004aadf6:; BB(0x004aadf6);
    /* 004aadf6: fild dword ptr [ebp + 0x12c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x12cu)));
    /* 004aadfc: fmul dword ptr [0x904488] */ ST(0) = ST(0) * R_F32((u32)(0x904488u));
    /* 004aae02: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004aae06: call 0x4a6edc */ r_esp -= 4; W32(r_esp, 0x4aae0bu); f_004a6edc();
    /* 004aae0b: mov edx, dword ptr [ebp + 0x12c] */ r_edx = R32((u32)(r_ebp+0x12cu));
    /* 004aae11: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004aae13: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004aae16: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004aae1a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 004aae1e: lea edi, [ebp + 0x120] */ r_edi = (u32)(r_ebp+0x120u);
    /* 004aae24: fmul dword ptr [0x904484] */ ST(0) = ST(0) * R_F32((u32)(0x904484u));
    /* 004aae2a: fdiv dword ptr [0x904494] */ ST(0) = ST(0) / R_F32((u32)(0x904494u));
    /* 004aae30: fadd dword ptr [0x904490] */ ST(0) = ST(0) + R_F32((u32)(0x904490u));
    /* 004aae36: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aae39: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004aae3d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004aae41: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004aae45: mov ecx, eax */ r_ecx = r_eax;
    /* 004aae47: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004aae4a: call 0x4a86e0 */ r_esp -= 4; W32(r_esp, 0x4aae4fu); f_004a86e0();
    /* 004aae4f: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004aae53: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004aae57: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 004aae5b: lea edx, [ebp + 0x20] */ r_edx = (u32)(r_ebp+0x20u);
    /* 004aae5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aae60: lea ecx, [ebp + 0xa0] */ r_ecx = (u32)(r_ebp+0xa0u);
    /* 004aae66: mov edi, eax */ r_edi = r_eax;
    /* 004aae68: mov ebx, edx */ r_ebx = r_edx;
    /* 004aae6a: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
L_004aae6e:; BB(0x004aae6e);
    /* 004aae6e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004aae70: mov esi, edi */ r_esi = r_edi;
    /* 004aae72: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 004aae75: shr esi, 0x1b */ { u32 c = (27u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 004aae78: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aae7a: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 004aae7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aae7f: je 0x4ab038 */ if (fZ) goto L_004ab038;
L_004aae85:; BB(0x004aae85);
    /* 004aae85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aae87: je 0x4aaec5 */ if (fZ) goto L_004aaec5;
L_004aae89:; BB(0x004aae89);
    /* 004aae89: mov ecx, esi */ r_ecx = r_esi;
    /* 004aae8b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4aae90u); f_0082dcbc();
    /* 004aae90: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004aae94: fadd dword ptr [ebp + 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x120u));
    /* 004aae9a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aae9d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004aaea5: mov ecx, esi */ r_ecx = r_esi;
    /* 004aaea7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4aaeacu); f_0082ddd8();
    /* 004aaeac: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004aaeb0: fadd dword ptr [ebp + 0x128] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x128u));
    /* 004aaeb6: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004aaeb8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004aaebc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004aaebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aaec0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4aaec5u); f_00508db8();
L_004aaec5:; BB(0x004aaec5);
    /* 004aaec5: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 004aaecb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaecd: je 0x4aafcd */ if (fZ) goto L_004aafcd;
L_004aaed3:; BB(0x004aaed3);
    /* 004aaed3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaed5: je 0x4aaf27 */ if (fZ) goto L_004aaf27;
L_004aaed7:; BB(0x004aaed7);
    /* 004aaed7: mov ecx, esi */ r_ecx = r_esi;
    /* 004aaed9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4aaedeu); f_0082dcbc();
    /* 004aaede: fld dword ptr [0x904480] */ FPUSH(R_F32((u32)(0x904480u)));
    /* 004aaee4: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aaee8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aaeea: fadd dword ptr [ebp + 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x120u));
    /* 004aaef0: mov ecx, esi */ r_ecx = r_esi;
    /* 004aaef2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004aaef5: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004aaefd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4aaf02u); f_0082ddd8();
    /* 004aaf02: fld dword ptr [0x904480] */ FPUSH(R_F32((u32)(0x904480u)));
    /* 004aaf08: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004aaf0c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004aaf0e: fadd dword ptr [ebp + 0x128] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x128u));
    /* 004aaf14: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 004aaf1a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004aaf1e: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 004aaf21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aaf22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4aaf27u); f_00508db8();
L_004aaf27:; BB(0x004aaf27);
    /* 004aaf27: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004aaf2b: add edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004aaf31: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aaf34: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004aaf36: ja 0x4aae6e */ if ((!fC&&!fZ)) goto L_004aae6e;
L_004aaf3c:; BB(0x004aaf3c);
    /* 004aaf3c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004aaf40: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004aaf44: mov eax, dword ptr [ebp + 0x12c] */ r_eax = R32((u32)(r_ebp+0x12cu));
    /* 004aaf4a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aaf4d: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aaf50: jg 0x4aaf5a */ if ((!fZ&&fS==fO)) goto L_004aaf5a;
L_004aaf52:; BB(0x004aaf52);
    /* 004aaf52: mov dword ptr [ebp + 0x12c], eax */ W32((u32)(r_ebp+0x12cu), r_eax);
    /* 004aaf58: jmp 0x4aafc7 */ goto L_004aafc7;
L_004aaf5a:; BB(0x004aaf5a);
    /* 004aaf5a: mov dword ptr [ebp + 0x12c], 0 */ W32((u32)(r_ebp+0x12cu), 0x0u);
    /* 004aaf64: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004aaf6b: jmp 0x4aafc7 */ goto L_004aafc7;
L_004aaf6d:; BB(0x004aaf6d);
    /* 004aaf6d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaf70: jne 0x4aafc7 */ if (!fZ) goto L_004aafc7;
L_004aaf72:; BB(0x004aaf72);
    /* 004aaf72: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 004aaf76: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 004aaf79: lea edi, [ebp + 0xa0] */ r_edi = (u32)(r_ebp+0xa0u);
    /* 004aaf7f: mov esi, eax */ r_esi = r_eax;
L_004aaf81:; BB(0x004aaf81);
    /* 004aaf81: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 004aaf83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaf85: je 0x4aaf8c */ if (fZ) goto L_004aaf8c;
L_004aaf87:; BB(0x004aaf87);
    /* 004aaf87: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4aaf8cu); f_00508f48();
L_004aaf8c:; BB(0x004aaf8c);
    /* 004aaf8c: mov ecx, dword ptr [esi + 0x80] */ r_ecx = R32((u32)(r_esi+0x80u));
    /* 004aaf92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aaf94: je 0x4aaf9b */ if (fZ) goto L_004aaf9b;
L_004aaf96:; BB(0x004aaf96);
    /* 004aaf96: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4aaf9bu); f_00508f48();
L_004aaf9b:; BB(0x004aaf9b);
    /* 004aaf9b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aaf9e: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004aafa0: ja 0x4aaf81 */ if ((!fC&&!fZ)) goto L_004aaf81;
L_004aafa2:; BB(0x004aafa2);
    /* 004aafa2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004aafa6: mov eax, dword ptr [ebp + 0x12c] */ r_eax = R32((u32)(r_ebp+0x12cu));
    /* 004aafac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aafaf: mov dword ptr [ebp + 0x12c], eax */ W32((u32)(r_ebp+0x12cu), r_eax);
    /* 004aafb5: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aafb8: jle 0x4aafc7 */ if ((fZ||fS!=fO)) goto L_004aafc7;
L_004aafba:; BB(0x004aafba);
    /* 004aafba: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004aafbe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aafc3: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004aafc7:; BB(0x004aafc7);
    /* 004aafc7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aafca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aafcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004aafcc: ret  */ FN_RET(0x004aade4); r_esp += 4; return;
L_004aafcd:; BB(0x004aafcd);
    /* 004aafcd: mov eax, dword ptr [0xa476f4] */ r_eax = R32((u32)(0xa476f4u));
    /* 004aafd2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004aafd4: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aafd7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004aafdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aafdc: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4aafe1u); f_0050981c();
    /* 004aafe1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aafe4: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 004aafea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aafec: je 0x4aaed3 */ if (fZ) goto L_004aaed3;
L_004aaff2:; BB(0x004aaff2);
    /* 004aaff2: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004aaff8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004aaffa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4aafffu); f_005b8610();
    /* 004aafff: mov ecx, eax */ r_ecx = r_eax;
    /* 004ab001: mov eax, dword ptr [0xa4762c] */ r_eax = R32((u32)(0xa4762cu));
    /* 004ab006: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 004ab00c: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004ab013: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 004ab016: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 004ab01d: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 004ab020: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 004ab024: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ab029: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 004ab02d: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 004ab033: jmp 0x4aaed3 */ goto L_004aaed3;
L_004ab038:; BB(0x004ab038);
    /* 004ab038: mov eax, dword ptr [0xa476f4] */ r_eax = R32((u32)(0xa476f4u));
    /* 004ab03d: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 004ab042: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004ab044: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004ab048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ab049: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ab04eu); f_0050981c();
    /* 004ab04e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ab051: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 004ab053: jmp 0x4aae85 */ goto L_004aae85;
}

