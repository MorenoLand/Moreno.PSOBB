#include "protos.h"

void f_0043c3ec(void) /* sub_43C3EC */
{
    FN_ENTER(0x0043c3ec);
    /* 0043c3ec: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c3f1: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c3f6: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043c3fb: ret  */ FN_RET(0x0043c3ec); r_esp += 4; return;
}

void f_0043c3fc(void) /* sub_43C3FC */
{
    FN_ENTER(0x0043c3fc);
    /* 0043c3fc: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c401: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c406: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043c40b: ret  */ FN_RET(0x0043c3fc); r_esp += 4; return;
}

void f_0043c40c(void) /* sub_43C40C */
{
    FN_ENTER(0x0043c40c);
    /* 0043c40c: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c411: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c416: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043c41b: ret  */ FN_RET(0x0043c40c); r_esp += 4; return;
}

void f_0043c41c(void) /* sub_43C41C */
{
    FN_ENTER(0x0043c41c);
    /* 0043c41c: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c421: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043c426: and eax, 0xffffdfff */ {  u32 a = r_eax; u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c42b: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043c430: ret  */ FN_RET(0x0043c41c); r_esp += 4; return;
}

void f_0043c434(void) /* sub_43C434 */
{
    FN_ENTER(0x0043c434);
    /* 0043c434: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c439: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043c43e: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c443: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043c448: ret  */ FN_RET(0x0043c434); r_esp += 4; return;
}

void f_0043c44c(void) /* sub_43C44C */
{
    FN_ENTER(0x0043c44c);
    /* 0043c44c: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c451: and eax, 0xffffcfff */ {  u32 a = r_eax; u32 b = 0xffffcfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c456: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043c45b: ret  */ FN_RET(0x0043c44c); r_esp += 4; return;
}

void f_0043c45c(void) /* sub_43C45C */
{
    FN_ENTER(0x0043c45c);
    /* 0043c45c: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043c461: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c464: ret  */ FN_RET(0x0043c45c); r_esp += 4; return;
}

void f_0043c468(void) /* sub_43C468 */
{
    FN_ENTER(0x0043c468);
    /* 0043c468: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0043c46b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c46e: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0043c471: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043c474: jle 0x43c4bd */ if ((fZ||fS!=fO)) goto L_0043c4bd;
L_0043c476:; BB(0x0043c476);
    /* 0043c476: fld dword ptr [0x8fdac8] */ FPUSH(R_F32((u32)(0x8fdac8u)));
    /* 0043c47c: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 0043c47f: fcom dword ptr [0x8fdac4] */ fx_compare(ST(0), R_F32((u32)(0x8fdac4u))); 
    /* 0043c485: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c487: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c488: ja 0x43c4a4 */ if ((!fC&&!fZ)) goto L_0043c4a4;
L_0043c48a:; BB(0x0043c48a);
    /* 0043c48a: mov eax, dword ptr [0xa44728] */ r_eax = R32((u32)(0xa44728u));
    /* 0043c48f: mov edx, dword ptr [0xa4472c] */ r_edx = R32((u32)(0xa4472cu));
    /* 0043c495: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 0043c498: fchs  */ ST(0) = -ST(0);
    /* 0043c49a: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0043c49d: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0043c4a0: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0043c4a3: ret  */ FN_RET(0x0043c468); r_esp += 4; return;
L_0043c4a4:; BB(0x0043c4a4);
    /* 0043c4a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043c4a6: mov eax, 0x428c0000 */ r_eax = 0x428c0000u;
    /* 0043c4ab: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0043c4af: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0043c4b2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c4b8: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0043c4bc: ret  */ FN_RET(0x0043c468); r_esp += 4; return;
L_0043c4bd:; BB(0x0043c4bd);
    /* 0043c4bd: ret  */ FN_RET(0x0043c468); r_esp += 4; return;
}

void f_0043c4c0(void) /* sub_43C4C0 */
{
    FN_ENTER(0x0043c4c0);
    /* 0043c4c0: mov eax, dword ptr [0x8fcc2c] */ r_eax = R32((u32)(0x8fcc2cu));
    /* 0043c4c5: mov dword ptr [0x9a4b48], eax */ W32((u32)(0x9a4b48u), r_eax);
    /* 0043c4ca: mov dword ptr [0x9a4b54], eax */ W32((u32)(0x9a4b54u), r_eax);
    /* 0043c4cf: ret  */ FN_RET(0x0043c4c0); r_esp += 4; return;
}

void f_0043c4d0(void) /* sub_43C4D0 */
{
    FN_ENTER(0x0043c4d0);
    /* 0043c4d0: mov eax, dword ptr [0xa44270] */ r_eax = R32((u32)(0xa44270u));
    /* 0043c4d5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0043c4db: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 0043c4e1: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0043c4e4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0043c4e7: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0043c4ea: mov dword ptr [0xa44730], 0 */ W32((u32)(0xa44730u), 0x0u);
    /* 0043c4f4: mov dword ptr [0xa4472c], edx */ W32((u32)(0xa4472cu), r_edx);
    /* 0043c4fa: and dword ptr [eax], 0xfffffffe */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0043c4fd: mov dword ptr [0xa44728], eax */ W32((u32)(0xa44728u), r_eax);
    /* 0043c502: and dword ptr [edx], 0xfffffffe */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c505: ret  */ FN_RET(0x0043c4d0); r_esp += 4; return;
}

void f_0043c508(void) /* sub_43C508 */
{
    FN_ENTER(0x0043c508);
    /* 0043c508: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c509: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c50b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c50d: push 0x8ce298 */ { u32 v = 0x8ce298u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c512: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043c518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c519: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043c520: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c523: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043c526: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043c529: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0043c52c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0043c52f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043c532: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043c535: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c53c: mov eax, ecx */ r_eax = r_ecx;
    /* 0043c53e: mov dword ptr [eax], 0xaf5540 */ W32((u32)(r_eax), 0xaf5540u);
    /* 0043c544: mov edx, dword ptr [0xa447a0] */ r_edx = R32((u32)(0xa447a0u));
    /* 0043c54a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c54c: je 0x43c555 */ if (fZ) goto L_0043c555;
L_0043c54e:; BB(0x0043c54e);
    /* 0043c54e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c54f: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x43c554u); f_008113e4();
    /* 0043c554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0043c555:; BB(0x0043c555);
    /* 0043c555: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0043c55a: mov dword ptr [0xa447ac], eax */ W32((u32)(0xa447acu), r_eax);
    /* 0043c55f: mov word ptr [0x9a4dec], ax */ W16((u32)(0x9a4decu), (u16)r_eax);
    /* 0043c565: mov dword ptr [0x9a4df0], eax */ W32((u32)(0x9a4df0u), r_eax);
    /* 0043c56a: mov word ptr [0x9a4e04], ax */ W16((u32)(0x9a4e04u), (u16)r_eax);
    /* 0043c570: mov word ptr [0x9a4e08], ax */ W16((u32)(0x9a4e08u), (u16)r_eax);
    /* 0043c576: mov word ptr [0x9a4df4], ax */ W16((u32)(0x9a4df4u), (u16)r_eax);
    /* 0043c57c: mov word ptr [0x9a4df6], ax */ W16((u32)(0x9a4df6u), (u16)r_eax);
    /* 0043c582: mov word ptr [0x9a4df8], ax */ W16((u32)(0x9a4df8u), (u16)r_eax);
    /* 0043c588: mov word ptr [0x9a4dfa], ax */ W16((u32)(0x9a4dfau), (u16)r_eax);
    /* 0043c58e: mov word ptr [0x9a4dfc], ax */ W16((u32)(0x9a4dfcu), (u16)r_eax);
    /* 0043c594: mov word ptr [0x9a4dfe], ax */ W16((u32)(0x9a4dfeu), (u16)r_eax);
    /* 0043c59a: mov word ptr [0x9a4e00], ax */ W16((u32)(0x9a4e00u), (u16)r_eax);
    /* 0043c5a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043c5a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c5aa: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x43c5afu); f_0052bf84();
    /* 0043c5af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c5b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c5b4: jne 0x43c5c6 */ if (!fZ) goto L_0043c5c6;
L_0043c5b6:; BB(0x0043c5b6);
    /* 0043c5b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c5b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043c5c0: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c5c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c5c3: ret 4 */ FN_RET(0x0043c508); r_esp += 8; return;
L_0043c5c6:; BB(0x0043c5c6);
    /* 0043c5c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c5c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5ca: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43c5cfu); f_005c2f74();
    /* 0043c5cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043c5d0: jmp 0x43c5b6 */ goto L_0043c5b6;
}

void f_0043c5d4(void) /* sub_43C5D4 */
{
    FN_ENTER(0x0043c5d4);
    /* 0043c5d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5d5: mov edi, ecx */ r_edi = r_ecx;
    /* 0043c5d7: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0043c5da: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c5e0: je 0x43c5f1 */ if (fZ) goto L_0043c5f1;
L_0043c5e2:; BB(0x0043c5e2);
    /* 0043c5e2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0043c5e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c5eb: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0043c5ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043c5f0: ret  */ FN_RET(0x0043c5d4); r_esp += 4; return;
L_0043c5f1:; BB(0x0043c5f1);
    /* 0043c5f1: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c5f7: jne 0x43c646 */ if (!fZ) goto L_0043c646;
L_0043c5f9:; BB(0x0043c5f9);
    /* 0043c5f9: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 0043c5ff: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0043c606: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c608: je 0x43c63d */ if (fZ) goto L_0043c63d;
L_0043c60a:; BB(0x0043c60a);
    /* 0043c60a: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0043c610: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c613: je 0x43c62c */ if (fZ) goto L_0043c62c;
L_0043c615:; BB(0x0043c615);
    /* 0043c615: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 0043c61f: mov ecx, edi */ r_ecx = r_edi;
    /* 0043c621: call 0x43c680 */ r_esp -= 4; W32(r_esp, 0x43c626u); f_0043c680();
    /* 0043c626: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
L_0043c62c:; BB(0x0043c62c);
    /* 0043c62c: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 0043c636: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
L_0043c63d:; BB(0x0043c63d);
    /* 0043c63d: mov ecx, edi */ r_ecx = r_edi;
    /* 0043c63f: call 0x43c680 */ r_esp -= 4; W32(r_esp, 0x43c644u); f_0043c680();
    /* 0043c644: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043c645: ret  */ FN_RET(0x0043c5d4); r_esp += 4; return;
L_0043c646:; BB(0x0043c646);
    /* 0043c646: mov eax, dword ptr [edi + 0x294] */ r_eax = R32((u32)(r_edi+0x294u));
    /* 0043c64c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c64f: mov dword ptr [edi + 0x294], eax */ W32((u32)(r_edi+0x294u), r_eax);
    /* 0043c655: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c657: jle 0x43c65b */ if ((fZ||fS!=fO)) goto L_0043c65b;
L_0043c659:; BB(0x0043c659);
    /* 0043c659: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043c65a: ret  */ FN_RET(0x0043c5d4); r_esp += 4; return;
L_0043c65b:; BB(0x0043c65b);
    /* 0043c65b: mov dword ptr [edi + 0x290], 0 */ W32((u32)(r_edi+0x290u), 0x0u);
    /* 0043c665: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043c667: mov dword ptr [edi + 0x28c], eax */ W32((u32)(r_edi+0x28cu), r_eax);
    /* 0043c66d: mov dword ptr [edi + 0x294], eax */ W32((u32)(r_edi+0x294u), r_eax);
    /* 0043c673: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c679: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0043c67c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043c67d: ret  */ FN_RET(0x0043c5d4); r_esp += 4; return;
}

void f_0043c680(void) /* sub_43C680 */
{
    FN_ENTER(0x0043c680);
    /* 0043c680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c681: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c685: push 0x8ce2f6 */ { u32 v = 0x8ce2f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c68a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043c690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c691: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043c698: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c69b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043c69e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0043c6a1: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0043c6a4: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0043c6a7: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0043c6ae: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043c6b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c6b3: je 0x43c7fe */ if (fZ) goto L_0043c7fe;
L_0043c6b9:; BB(0x0043c6b9);
    /* 0043c6b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c6bc: je 0x43c7de */ if (fZ) goto L_0043c7de;
L_0043c6c2:; BB(0x0043c6c2);
    /* 0043c6c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c6c5: je 0x43c77d */ if (fZ) goto L_0043c77d;
L_0043c6cb:; BB(0x0043c6cb);
    /* 0043c6cb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c6ce: je 0x43c74b */ if (fZ) goto L_0043c74b;
L_0043c6d0:; BB(0x0043c6d0);
    /* 0043c6d0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043c6d3: jne 0x43c766 */ if (!fZ) goto L_0043c766;
L_0043c6d9:; BB(0x0043c6d9);
    /* 0043c6d9: call 0x43c9f0 */ r_esp -= 4; W32(r_esp, 0x43c6deu); f_0043c9f0();
    /* 0043c6de: mov eax, dword ptr [0xa4479c] */ r_eax = R32((u32)(0xa4479cu));
    /* 0043c6e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c6e5: je 0x43c6ef */ if (fZ) goto L_0043c6ef;
L_0043c6e7:; BB(0x0043c6e7);
    /* 0043c6e7: mov ebx, dword ptr [0xa447c8] */ r_ebx = R32((u32)(0xa447c8u));
    /* 0043c6ed: jmp 0x43c6f5 */ goto L_0043c6f5;
L_0043c6ef:; BB(0x0043c6ef);
    /* 0043c6ef: mov ebx, dword ptr [0xa447cc] */ r_ebx = R32((u32)(0xa447ccu));
L_0043c6f5:; BB(0x0043c6f5);
    /* 0043c6f5: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0043c6f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c6fa: je 0x43c766 */ if (fZ) goto L_0043c766;
L_0043c6fc:; BB(0x0043c6fc);
    /* 0043c6fc: mov dword ptr [0xa44738], 0 */ W32((u32)(0xa44738u), 0x0u);
    /* 0043c706: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0043c709: mov dword ptr [0xa4473c], eax */ W32((u32)(0xa4473cu), r_eax);
    /* 0043c70e: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c713: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0043c716: mov dword ptr [0xa44740], edx */ W32((u32)(0xa44740u), r_edx);
    /* 0043c71c: mov dword ptr [0xa44744], 0 */ W32((u32)(0xa44744u), 0x0u);
    /* 0043c726: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0043c729: push 0xa44744 */ { u32 v = 0xa44744u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c72e: push 0xa44738 */ { u32 v = 0xa44738u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c733: mov dword ptr [0xa44748], ecx */ W32((u32)(0xa44748u), r_ecx);
    /* 0043c739: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0043c73b: mov dword ptr [0xa4474c], ebx */ W32((u32)(0xa4474cu), r_ebx);
    /* 0043c741: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x43c746u); f_004d85bc();
    /* 0043c746: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043c749: jmp 0x43c766 */ goto L_0043c766;
L_0043c74b:; BB(0x0043c74b);
    /* 0043c74b: call 0x43d47c */ r_esp -= 4; W32(r_esp, 0x43c750u); f_0043d47c();
    /* 0043c750: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043c755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c759: push 0x33b */ { u32 v = 0x33bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c75e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43c763u); f_008144b0();
    /* 0043c763: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043c766:; BB(0x0043c766);
    /* 0043c766: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043c769: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043c76c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043c76f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c772: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043c779: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c77b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c77c: ret  */ FN_RET(0x0043c680); r_esp += 4; return;
L_0043c77d:; BB(0x0043c77d);
    /* 0043c77d: call 0x43d5f4 */ r_esp -= 4; W32(r_esp, 0x43c782u); f_0043d5f4();
    /* 0043c782: mov ebx, dword ptr [0xa447d0] */ r_ebx = R32((u32)(0xa447d0u));
    /* 0043c788: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0043c78b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c78d: je 0x43c766 */ if (fZ) goto L_0043c766;
L_0043c78f:; BB(0x0043c78f);
    /* 0043c78f: mov dword ptr [0xa44750], 0 */ W32((u32)(0xa44750u), 0x0u);
    /* 0043c799: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0043c79c: mov dword ptr [0xa44754], eax */ W32((u32)(0xa44754u), r_eax);
    /* 0043c7a1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7a6: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0043c7a9: mov dword ptr [0xa44758], edx */ W32((u32)(0xa44758u), r_edx);
    /* 0043c7af: mov dword ptr [0xa4475c], 0 */ W32((u32)(0xa4475cu), 0x0u);
    /* 0043c7b9: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0043c7bc: push 0xa4475c */ { u32 v = 0xa4475cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7c1: push 0xa44750 */ { u32 v = 0xa44750u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7c6: mov dword ptr [0xa44760], ecx */ W32((u32)(0xa44760u), r_ecx);
    /* 0043c7cc: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0043c7ce: mov dword ptr [0xa44764], ebx */ W32((u32)(0xa44764u), r_ebx);
    /* 0043c7d4: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x43c7d9u); f_004d85bc();
    /* 0043c7d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043c7dc: jmp 0x43c766 */ goto L_0043c766;
L_0043c7de:; BB(0x0043c7de);
    /* 0043c7de: call 0x43e134 */ r_esp -= 4; W32(r_esp, 0x43c7e3u); f_0043e134();
    /* 0043c7e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c7e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043c7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7ec: push 0x33a */ { u32 v = 0x33au; r_esp -= 4; W32(r_esp, v); }
    /* 0043c7f1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43c7f6u); f_008144b0();
    /* 0043c7f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043c7f9: jmp 0x43c766 */ goto L_0043c766;
L_0043c7fe:; BB(0x0043c7fe);
    /* 0043c7fe: mov eax, ecx */ r_eax = r_ecx;
    /* 0043c800: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 0043c806: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c808: jne 0x43c766 */ if (!fZ) goto L_0043c766;
L_0043c80e:; BB(0x0043c80e);
    /* 0043c80e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043c810: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0043c813:; BB(0x0043c813);
    /* 0043c813: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c816: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c819: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0043c81d: push 0x420 */ { u32 v = 0x420u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c822: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0043c825: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0043c82c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043c82f: lea ebx, [ecx + esi + 1] */ r_ebx = (u32)(r_ecx+r_esi+0x1u);
    /* 0043c833: mov word ptr [esi*2 + 0x9a4df4], bx */ W16((u32)(r_esi*2+0x9a4df4u), (u16)r_ebx);
    /* 0043c83b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43c840u); f_005caba4();
    /* 0043c840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043c841: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0043c844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c846: je 0x43c87a */ if (fZ) goto L_0043c87a;
L_0043c848:; BB(0x0043c848);
    /* 0043c848: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0043c84f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043c856: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c859: movzx ebx, word ptr [esi*2 + 0x9a4df4] */ r_ebx = (u32)R16((u32)(r_esi*2+0x9a4df4u));
    /* 0043c861: movsx edx, word ptr [edi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0043c865: mov ecx, eax */ r_ecx = r_eax;
    /* 0043c867: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c86a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c86b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c86c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c86d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c86e: call 0x4422d4 */ r_esp -= 4; W32(r_esp, 0x43c873u); f_004422d4();
    /* 0043c873: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0043c87a:; BB(0x0043c87a);
    /* 0043c87a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043c881: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043c884: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043c887: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c88a: jl 0x43c813 */ if ((fS!=fO)) goto L_0043c813;
L_0043c88c:; BB(0x0043c88c);
    /* 0043c88c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c88f: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0043c893: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c896: mov word ptr [0xa447a4], dx */ W16((u32)(0xa447a4u), (u16)r_edx);
    /* 0043c89d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c89f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0043c8a2:; BB(0x0043c8a2);
    /* 0043c8a2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43c8a7u); f_008587a5();
    /* 0043c8a7: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0043c8ae: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043c8b1: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0043c8b4: fdiv dword ptr [0x8fdc34] */ ST(0) = ST(0) / R_F32((u32)(0x8fdc34u));
    /* 0043c8ba: fmul dword ptr [0x8fdc30] */ ST(0) = ST(0) * R_F32((u32)(0x8fdc30u));
    /* 0043c8c0: push 0x39c */ { u32 v = 0x39cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c8c5: fmul dword ptr [0x8fdc2c] */ ST(0) = ST(0) * R_F32((u32)(0x8fdc2cu));
    /* 0043c8cb: fadd dword ptr [0x8fdc38] */ ST(0) = ST(0) + R_F32((u32)(0x8fdc38u));
    /* 0043c8d1: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0043c8d4: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0043c8d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043c8dd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0043c8e0: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0043c8e3: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043c8e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0043c8e9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043c8ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043c8ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43c8f4u); f_005caba4();
    /* 0043c8f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043c8f5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0043c8f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c8fa: je 0x43c93a */ if (fZ) goto L_0043c93a;
L_0043c8fc:; BB(0x0043c8fc);
    /* 0043c8fc: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0043c903: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043c90a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c90d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c910: movzx ecx, word ptr [0xa447a4] */ r_ecx = (u32)R16((u32)(0xa447a4u));
    /* 0043c917: movsx edi, word ptr [esi + 0x2c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 0043c91b: lea edx, [edi + ebx + 7] */ r_edx = (u32)(r_edi+r_ebx+0x7u);
    /* 0043c91f: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c921: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
    /* 0043c924: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043c927: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c928: mov ecx, eax */ r_ecx = r_eax;
    /* 0043c92a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c92b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c92c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c92d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c92e: call 0x44161c */ r_esp -= 4; W32(r_esp, 0x43c933u); f_0044161c();
    /* 0043c933: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0043c93a:; BB(0x0043c93a);
    /* 0043c93a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043c941: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c944: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c947: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043c94a: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c94d: jl 0x43c8a2 */ if ((fS!=fO)) goto L_0043c8a2;
L_0043c953:; BB(0x0043c953);
    /* 0043c953: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c956: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0043c95a: movsx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0043c95e: add eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c961: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0043c964: add edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c967: mov word ptr [0x9a4e00], cx */ W16((u32)(0x9a4e00u), (u16)r_ecx);
    /* 0043c96e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c96f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c971: call 0x440030 */ r_esp -= 4; W32(r_esp, 0x43c976u); f_00440030();
    /* 0043c976: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c979: mov eax, ebx */ r_eax = r_ebx;
    /* 0043c97b: mov ecx, dword ptr [0xa447c0] */ r_ecx = R32((u32)(0xa447c0u));
    /* 0043c981: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0043c985: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c988: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c98a: mov word ptr [0x9a4e08], dx */ W16((u32)(0x9a4e08u), (u16)r_edx);
    /* 0043c991: jne 0x43c9db */ if (!fZ) goto L_0043c9db;
L_0043c993:; BB(0x0043c993);
    /* 0043c993: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0043c99a: push 0x398 */ { u32 v = 0x398u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c99f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43c9a4u); f_005caba4();
    /* 0043c9a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043c9a5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0043c9a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043c9aa: je 0x43c9db */ if (fZ) goto L_0043c9db;
L_0043c9ac:; BB(0x0043c9ac);
    /* 0043c9ac: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0043c9b3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043c9ba: mov esi, ebx */ r_esi = r_ebx;
    /* 0043c9bc: movzx ebx, word ptr [0x9a4e08] */ r_ebx = (u32)R16((u32)(0x9a4e08u));
    /* 0043c9c3: movsx edx, word ptr [esi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 0043c9c7: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c9ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0043c9cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9cf: call 0x440ad8 */ r_esp -= 4; W32(r_esp, 0x43c9d4u); f_00440ad8();
    /* 0043c9d4: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0043c9db:; BB(0x0043c9db);
    /* 0043c9db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043c9de: mov dword ptr [eax + 0x37c], 1 */ W32((u32)(r_eax+0x37cu), 0x1u);
    /* 0043c9e8: jmp 0x43c766 */ goto L_0043c766;
}

void f_0043c9f0(void) /* sub_43C9F0 */
{
    FN_ENTER(0x0043c9f0);
    /* 0043c9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c9f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9f5: push 0x8ce31c */ { u32 v = 0x8ce31cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043c9fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043ca00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043ca08: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ca0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043ca0e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043ca11: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0043ca14: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0043ca17: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0043ca1d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043ca20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca22: je 0x43caf1 */ if (fZ) goto L_0043caf1;
L_0043ca28:; BB(0x0043ca28);
    /* 0043ca28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043ca2b: jne 0x43cac9 */ if (!fZ) goto L_0043cac9;
L_0043ca31:; BB(0x0043ca31);
    /* 0043ca31: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x43ca36u); f_007a61a4();
    /* 0043ca36: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca39: je 0x43cad7 */ if (fZ) goto L_0043cad7;
L_0043ca3f:; BB(0x0043ca3f);
    /* 0043ca3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ca42: call 0x43cb04 */ r_esp -= 4; W32(r_esp, 0x43ca47u); f_0043cb04();
L_0043ca47:; BB(0x0043ca47);
    /* 0043ca47: mov eax, dword ptr [0xa447a0] */ r_eax = R32((u32)(0xa447a0u));
    /* 0043ca4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca4e: je 0x43cab3 */ if (fZ) goto L_0043cab3;
L_0043ca50:; BB(0x0043ca50);
    /* 0043ca50: call 0x43d430 */ r_esp -= 4; W32(r_esp, 0x43ca55u); f_0043d430();
    /* 0043ca55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ca58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca5a: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0043ca5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043ca5f: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043ca64: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0043ca67: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x43ca6du); call_ind(t); }
    /* 0043ca6d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ca70: mov dword ptr [eax + 0x37c], 5 */ W32((u32)(r_eax+0x37cu), 0x5u);
    /* 0043ca7a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca7c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0043ca83: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43ca88u); f_005caba4();
    /* 0043ca88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ca89: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043ca8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca8e: je 0x43caac */ if (fZ) goto L_0043caac;
L_0043ca90:; BB(0x0043ca90);
    /* 0043ca90: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0043ca97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ca9e: mov ecx, eax */ r_ecx = r_eax;
    /* 0043caa0: call 0x440858 */ r_esp -= 4; W32(r_esp, 0x43caa5u); f_00440858();
    /* 0043caa5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0043caac:; BB(0x0043caac);
    /* 0043caac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0043cab3:; BB(0x0043cab3);
    /* 0043cab3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043cab6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043cab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043caba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cabb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cabc: push 0x33b */ { u32 v = 0x33bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043cac1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43cac6u); f_008144b0();
    /* 0043cac6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043cac9:; BB(0x0043cac9);
    /* 0043cac9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043cacc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043cad3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cad5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cad6: ret  */ FN_RET(0x0043c9f0); r_esp += 4; return;
L_0043cad7:; BB(0x0043cad7);
    /* 0043cad7: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x43cadcu); f_0052cf54();
    /* 0043cadc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cade: je 0x43ca47 */ if (fZ) goto L_0043ca47;
L_0043cae4:; BB(0x0043cae4);
    /* 0043cae4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043cae7: call 0x43cb04 */ r_esp -= 4; W32(r_esp, 0x43caecu); f_0043cb04();
    /* 0043caec: jmp 0x43ca47 */ goto L_0043ca47;
L_0043caf1:; BB(0x0043caf1);
    /* 0043caf1: mov eax, ecx */ r_eax = r_ecx;
    /* 0043caf3: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 0043cafd: jmp 0x43ca31 */ goto L_0043ca31;
}

void f_0043cb04(void) /* sub_43CB04 */
{
    FN_ENTER(0x0043cb04);
    /* 0043cb04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb08: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cb0e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043cb10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043cb12: call 0x43d408 */ r_esp -= 4; W32(r_esp, 0x43cb17u); f_0043d408();
    /* 0043cb17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb19: je 0x43ce07 */ if (fZ) goto L_0043ce07;
L_0043cb1f:; BB(0x0043cb1f);
    /* 0043cb1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb21: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043cb28: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x43cb2du); f_007714cc();
    /* 0043cb2d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0043cb30: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb35: je 0x43ce07 */ if (fZ) goto L_0043ce07;
L_0043cb3b:; BB(0x0043cb3b);
    /* 0043cb3b: movsx eax, word ptr [ebp + 0x3fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x3fau));
    /* 0043cb42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043cb44: jle 0x43cb5b */ if ((fZ||fS!=fO)) goto L_0043cb5b;
L_0043cb46:; BB(0x0043cb46);
    /* 0043cb46: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043cb49: mov word ptr [ebp + 0x3fa], ax */ W16((u32)(r_ebp+0x3fau), (u16)r_eax);
    /* 0043cb50: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043cb56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043cb57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cb58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043cb59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043cb5a: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043cb5b:; BB(0x0043cb5b);
    /* 0043cb5b: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043cb62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb63: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43cb68u); f_007b4d18();
    /* 0043cb68: mov ebx, eax */ r_ebx = r_eax;
    /* 0043cb6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043cb6d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb6f: je 0x43ce07 */ if (fZ) goto L_0043ce07;
L_0043cb75:; BB(0x0043cb75);
    /* 0043cb75: mov edx, dword ptr [0xa447c0] */ r_edx = R32((u32)(0xa447c0u));
    /* 0043cb7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb7d: jne 0x43cd42 */ if (!fZ) goto L_0043cd42;
L_0043cb83:; BB(0x0043cb83);
    /* 0043cb83: movsx esi, word ptr [ebp + 0x3f8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
    /* 0043cb8a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb8c: je 0x43d158 */ if (fZ) goto L_0043d158;
L_0043cb92:; BB(0x0043cb92);
    /* 0043cb92: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb95: je 0x43d35a */ if (fZ) goto L_0043d35a;
L_0043cb9b:; BB(0x0043cb9b);
    /* 0043cb9b: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb9e: je 0x43ccd2 */ if (fZ) goto L_0043ccd2;
L_0043cba4:; BB(0x0043cba4);
    /* 0043cba4: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cba7: jne 0x43cc33 */ if (!fZ) goto L_0043cc33;
L_0043cbad:; BB(0x0043cbad);
    /* 0043cbad: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043cbb3: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cbb9: jne 0x43cc1f */ if (!fZ) goto L_0043cc1f;
L_0043cbbb:; BB(0x0043cbbb);
    /* 0043cbbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cbbd: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043cbc2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043cbc4: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x43cbc9u); f_007714cc();
    /* 0043cbc9: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0043cbcc: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cbd2: je 0x43cc1f */ if (fZ) goto L_0043cc1f;
L_0043cbd4:; BB(0x0043cbd4);
    /* 0043cbd4: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043cbd8: mov byte ptr [esp + 0x30], 0x15 */ W8((u32)(r_esp+0x30u), 0x15u);
    /* 0043cbdd: mov esi, 6 */ r_esi = 0x6u;
    /* 0043cbe2: mov byte ptr [esp + 0x31], 3 */ W8((u32)(r_esp+0x31u), 0x3u);
    /* 0043cbe7: mov word ptr [esp + 0x32], dx */ W16((u32)(r_esp+0x32u), (u16)r_edx);
    /* 0043cbec: mov word ptr [esp + 0x34], si */ W16((u32)(r_esp+0x34u), (u16)r_esi);
    /* 0043cbf1: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 0043cbf6: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0043cbfa: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43cbffu); f_008003e0();
    /* 0043cbff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043cc01: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43cc06u); f_00448b94();
    /* 0043cc06: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043cc09: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc0b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc0d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc0f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc11: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc13: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc15: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cc18: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
L_0043cc1f:; BB(0x0043cc1f);
    /* 0043cc1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043cc21: mov word ptr [ebp + 0x3f8], ax */ W16((u32)(r_ebp+0x3f8u), (u16)r_eax);
    /* 0043cc28: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043cc2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043cc2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cc30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043cc31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043cc32: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043cc33:; BB(0x0043cc33);
    /* 0043cc33: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc36: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043cc3c:; BB(0x0043cc3c);
    /* 0043cc3c: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043cc42: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc48: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043cc4e:; BB(0x0043cc4e);
    /* 0043cc4e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043cc52: mov byte ptr [esp + 0x24], 0x15 */ W8((u32)(r_esp+0x24u), 0x15u);
    /* 0043cc57: mov esi, 7 */ r_esi = 0x7u;
    /* 0043cc5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043cc5e: mov byte ptr [esp + 0x25], 3 */ W8((u32)(r_esp+0x25u), 0x3u);
    /* 0043cc63: mov word ptr [esp + 0x26], dx */ W16((u32)(r_esp+0x26u), (u16)r_edx);
    /* 0043cc68: mov word ptr [esp + 0x28], si */ W16((u32)(r_esp+0x28u), (u16)r_esi);
    /* 0043cc6d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43cc72u); f_007751b0();
    /* 0043cc72: fld dword ptr [0x8fdc24] */ FPUSH(R_F32((u32)(0x8fdc24u)));
    /* 0043cc78: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043cc7a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0043cc7d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0043cc81: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043cc86: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043cc8a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043cc8e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043cc92: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0043cc95: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0043cc99: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0043cc9d: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 0043cca2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43cca7u); f_008003e0();
    /* 0043cca7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043cca9: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43ccaeu); f_00448b94();
    /* 0043ccae: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043ccb1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccb9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccbb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccbd: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ccc0: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043ccc7: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043cccd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ccce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cccf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ccd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ccd1: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043ccd2:; BB(0x0043ccd2);
    /* 0043ccd2: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043ccd8: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccde: jne 0x43cd2d */ if (!fZ) goto L_0043cd2d;
L_0043cce0:; BB(0x0043cce0);
    /* 0043cce0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043cce4: mov byte ptr [esp + 0x3c], 0x15 */ W8((u32)(r_esp+0x3cu), 0x15u);
    /* 0043cce9: mov esi, 5 */ r_esi = 0x5u;
    /* 0043ccee: mov byte ptr [esp + 0x3d], 3 */ W8((u32)(r_esp+0x3du), 0x3u);
    /* 0043ccf3: mov word ptr [esp + 0x3e], dx */ W16((u32)(r_esp+0x3eu), (u16)r_edx);
    /* 0043ccf8: mov word ptr [esp + 0x40], si */ W16((u32)(r_esp+0x40u), (u16)r_esi);
    /* 0043ccfd: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0043cd01: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43cd06u); f_008003e0();
    /* 0043cd06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043cd08: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43cd0du); f_00448b94();
    /* 0043cd0d: movsx esi, word ptr [ebp + 0x3f8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
    /* 0043cd14: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043cd17: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd19: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd1b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd1f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd21: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd23: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043cd26: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
L_0043cd2d:; BB(0x0043cd2d);
    /* 0043cd2d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cd30: mov word ptr [ebp + 0x3f8], si */ W16((u32)(r_ebp+0x3f8u), (u16)r_esi);
    /* 0043cd37: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043cd3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043cd3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cd3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043cd40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043cd41: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043cd42:; BB(0x0043cd42);
    /* 0043cd42: fld dword ptr [0x8fdc20] */ FPUSH(R_F32((u32)(0x8fdc20u)));
    /* 0043cd48: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043cd4e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0043cd52: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0043cd54: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cd5a: jne 0x43cd7b */ if (!fZ) goto L_0043cd7b;
L_0043cd5c:; BB(0x0043cd5c);
    /* 0043cd5c: fld dword ptr [0x8fdc1c] */ FPUSH(R_F32((u32)(0x8fdc1cu)));
    /* 0043cd62: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0043cd66: mov esi, 1 */ r_esi = 0x1u;
    /* 0043cd6b: mov dword ptr [esp + 0x60], 0x3e8a3d71 */ W32((u32)(r_esp+0x60u), 0x3e8a3d71u);
    /* 0043cd73: mov dword ptr [esp + 0x74], 0 */ W32((u32)(r_esp+0x74u), 0x0u);
L_0043cd7b:; BB(0x0043cd7b);
    /* 0043cd7b: test edi, 0x20000 */ {  u32 a = r_edi; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cd81: jne 0x43cdb5 */ if (!fZ) goto L_0043cdb5;
L_0043cd83:; BB(0x0043cd83);
    /* 0043cd83: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0043cd87: fadd dword ptr [0x8fdc18] */ ST(0) = ST(0) + R_F32((u32)(0x8fdc18u));
    /* 0043cd8d: fst dword ptr [esp + esi*4 + 0x60] */ W_F32((u32)(r_esp+r_esi*4+0x60u), ST(0));
    /* 0043cd91: fadd dword ptr [0x8fdc14] */ ST(0) = ST(0) + R_F32((u32)(0x8fdc14u));
    /* 0043cd97: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0043cd9b: fstp dword ptr [esp + esi*4 + 0x64] */ W_F32((u32)(r_esp+r_esi*4+0x64u), ST(0)); FPOP();
    /* 0043cd9f: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 0043cda2: mov dword ptr [esp + esi*4 + 0x74], 1 */ W32((u32)(r_esp+r_esi*4+0x74u), 0x1u);
    /* 0043cdaa: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cdad: mov dword ptr [esp + edx*4 + 0x74], 4 */ W32((u32)(r_esp+r_edx*4+0x74u), 0x4u);
L_0043cdb5:; BB(0x0043cdb5);
    /* 0043cdb5: test edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cdbb: jne 0x43cddc */ if (!fZ) goto L_0043cddc;
L_0043cdbd:; BB(0x0043cdbd);
    /* 0043cdbd: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0043cdc1: fadd dword ptr [0x8fdc10] */ ST(0) = ST(0) + R_F32((u32)(0x8fdc10u));
    /* 0043cdc7: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0043cdcb: fstp dword ptr [esp + esi*4 + 0x60] */ W_F32((u32)(r_esp+r_esi*4+0x60u), ST(0)); FPOP();
    /* 0043cdcf: mov edx, esi */ r_edx = r_esi;
    /* 0043cdd1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cdd4: mov dword ptr [esp + edx*4 + 0x74], 2 */ W32((u32)(r_esp+r_edx*4+0x74u), 0x2u);
L_0043cddc:; BB(0x0043cddc);
    /* 0043cddc: test edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cde2: jne 0x43ce03 */ if (!fZ) goto L_0043ce03;
L_0043cde4:; BB(0x0043cde4);
    /* 0043cde4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0043cde8: fadd dword ptr [0x8fdc0c] */ ST(0) = ST(0) + R_F32((u32)(0x8fdc0cu));
    /* 0043cdee: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0043cdf2: fstp dword ptr [esp + esi*4 + 0x60] */ W_F32((u32)(r_esp+r_esi*4+0x60u), ST(0)); FPOP();
    /* 0043cdf6: mov edx, esi */ r_edx = r_esi;
    /* 0043cdf8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cdfb: mov dword ptr [esp + edx*4 + 0x74], 3 */ W32((u32)(r_esp+r_edx*4+0x74u), 0x3u);
L_0043ce03:; BB(0x0043ce03);
    /* 0043ce03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce05: jne 0x43ce12 */ if (!fZ) goto L_0043ce12;
L_0043ce07:; BB(0x0043ce07);
    /* 0043ce07: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ce0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ce0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ce0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ce10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ce11: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043ce12:; BB(0x0043ce12);
    /* 0043ce12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043ce14: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43ce19u); f_007751b0();
    /* 0043ce19: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0043ce1d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0043ce22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043ce24: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043ce26: jle 0x43d347 */ if ((fZ||fS!=fO)) goto L_0043d347;
L_0043ce2c:; BB(0x0043ce2c);
    /* 0043ce2c: fcom dword ptr [esp + edi*4 + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+r_edi*4+0x60u))); 
    /* 0043ce30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043ce32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043ce33: jbe 0x43d334 */ if ((fC||fZ)) goto L_0043d334;
L_0043ce39:; BB(0x0043ce39);
    /* 0043ce39: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043ce3c: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ce3e: jl 0x43ce2c */ if ((fS!=fO)) goto L_0043ce2c;
L_0043ce40:; BB(0x0043ce40);
    /* 0043ce40: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043ce42: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0043ce47: mov word ptr [ebp + 0x3f8], si */ W16((u32)(r_ebp+0x3f8u), (u16)r_esi);
L_0043ce4e:; BB(0x0043ce4e);
    /* 0043ce4e: mov esi, dword ptr [ebp + 0x40c] */ r_esi = R32((u32)(r_ebp+0x40cu));
    /* 0043ce54: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043ce57: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ce5a: jge 0x43d317 */ if ((fS==fO)) goto L_0043d317;
L_0043ce60:; BB(0x0043ce60);
    /* 0043ce60: mov dword ptr [ebp + 0x40c], esi */ W32((u32)(r_ebp+0x40cu), r_esi);
    /* 0043ce66: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0043ce6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ce6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ce70: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043ce72: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043ce74: jle 0x43d308 */ if ((fZ||fS!=fO)) goto L_0043d308;
L_0043ce7a:; BB(0x0043ce7a);
    /* 0043ce7a: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0043ce7e: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0043ce82:; BB(0x0043ce82);
    /* 0043ce82: mov ebx, dword ptr [edi*4 + 0xaad720] */ r_ebx = R32((u32)(r_edi*4+0xaad720u));
    /* 0043ce89: mov ebp, dword ptr [ebx + 0x30] */ r_ebp = R32((u32)(r_ebx+0x30u));
    /* 0043ce8c: test ebp, 0x2000800 */ {  u32 a = r_ebp; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ce92: jne 0x43ceb0 */ if (!fZ) goto L_0043ceb0;
L_0043ce94:; BB(0x0043ce94);
    /* 0043ce94: mov ebp, dword ptr [ebx + 0x3f0] */ r_ebp = R32((u32)(r_ebx+0x3f0u));
    /* 0043ce9a: cmp ebp, dword ptr [0xaafca0] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cea0: jne 0x43ceb0 */ if (!fZ) goto L_0043ceb0;
L_0043cea2:; BB(0x0043cea2);
    /* 0043cea2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043cea4: mov dword ptr [ebp*4 + 0xa44770], ebx */ W32((u32)(r_ebp*4+0xa44770u), r_ebx);
    /* 0043ceab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ceae: mov eax, ecx */ r_eax = r_ecx;
L_0043ceb0:; BB(0x0043ceb0);
    /* 0043ceb0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043ceb3: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ceb5: jl 0x43ce82 */ if ((fS!=fO)) goto L_0043ce82;
L_0043ceb7:; BB(0x0043ceb7);
    /* 0043ceb7: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0043cebb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043cebf: mov dword ptr [0xa44780], eax */ W32((u32)(0xa44780u), r_eax);
L_0043cec4:; BB(0x0043cec4);
    /* 0043cec4: mov esi, ecx */ r_esi = r_ecx;
    /* 0043cec6: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cec9: jge 0x43cf17 */ if ((fS==fO)) goto L_0043cf17;
L_0043cecb:; BB(0x0043cecb);
    /* 0043cecb: mov edi, ecx */ r_edi = r_ecx;
    /* 0043cecd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0043cecf: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043ced2: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ced5: jl 0x43cf04 */ if ((fS!=fO)) goto L_0043cf04;
L_0043ced7:; BB(0x0043ced7);
    /* 0043ced7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043ced9: mov dword ptr [esi*4 + 0xa44770], edi */ W32((u32)(r_esi*4+0xa44770u), r_edi);
    /* 0043cee0: mov dword ptr [esi*4 + 0xa44774], edi */ W32((u32)(r_esi*4+0xa44774u), r_edi);
    /* 0043cee7: mov dword ptr [esi*4 + 0xa44778], edi */ W32((u32)(r_esi*4+0xa44778u), r_edi);
    /* 0043ceee: mov dword ptr [esi*4 + 0xa4477c], edi */ W32((u32)(r_esi*4+0xa4477cu), r_edi);
    /* 0043cef5: mov dword ptr [esi*4 + 0xa44780], edi */ W32((u32)(r_esi*4+0xa44780u), r_edi);
    /* 0043cefc: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043ceff: cmp esi, -2 */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf02: jl 0x43ced7 */ if ((fS!=fO)) goto L_0043ced7;
L_0043cf04:; BB(0x0043cf04);
    /* 0043cf04: mov dword ptr [esi*4 + 0xa44770], 0 */ W32((u32)(r_esi*4+0xa44770u), 0x0u);
    /* 0043cf0f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cf12: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf15: jl 0x43cf04 */ if ((fS!=fO)) goto L_0043cf04;
L_0043cf17:; BB(0x0043cf17);
    /* 0043cf17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043cf19: je 0x43cf6f */ if (fZ) goto L_0043cf6f;
L_0043cf1b:; BB(0x0043cf1b);
    /* 0043cf1b: mov eax, 0 */ r_eax = 0x0u;
    /* 0043cf20: mov edi, 0 */ r_edi = 0x0u;
    /* 0043cf25: mov esi, 0 */ r_esi = 0x0u;
    /* 0043cf2a: jle 0x43d1d3 */ if ((fZ||fS!=fO)) goto L_0043d1d3;
L_0043cf30:; BB(0x0043cf30);
    /* 0043cf30: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0043cf34: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0043cf38:; BB(0x0043cf38);
    /* 0043cf38: mov ebp, dword ptr [esi*4 + 0xa44770] */ r_ebp = R32((u32)(r_esi*4+0xa44770u));
    /* 0043cf3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf41: je 0x43cf52 */ if (fZ) goto L_0043cf52;
L_0043cf43:; BB(0x0043cf43);
    /* 0043cf43: movsx ebx, word ptr [ebp + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0043cf4a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf4c: jle 0x43cf52 */ if ((fZ||fS!=fO)) goto L_0043cf52;
L_0043cf4e:; BB(0x0043cf4e);
    /* 0043cf4e: mov eax, ebx */ r_eax = r_ebx;
    /* 0043cf50: mov edi, ebp */ r_edi = r_ebp;
L_0043cf52:; BB(0x0043cf52);
    /* 0043cf52: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cf55: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf57: jl 0x43cf38 */ if ((fS!=fO)) goto L_0043cf38;
L_0043cf59:; BB(0x0043cf59);
    /* 0043cf59: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0043cf5d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043cf61: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf63: je 0x43d1d3 */ if (fZ) goto L_0043d1d3;
L_0043cf69:; BB(0x0043cf69);
    /* 0043cf69: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043cf6d: jmp 0x43cf74 */ goto L_0043cf74;
L_0043cf6f:; BB(0x0043cf6f);
    /* 0043cf6f: mov esi, 0xffff */ r_esi = 0xffffu;
L_0043cf74:; BB(0x0043cf74);
    /* 0043cf74: mov word ptr [ebp + 0x340], si */ W16((u32)(r_ebp+0x340u), (u16)r_esi);
    /* 0043cf7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf7d: je 0x43d282 */ if (fZ) goto L_0043d282;
L_0043cf83:; BB(0x0043cf83);
    /* 0043cf83: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf86: je 0x43d1dd */ if (fZ) goto L_0043d1dd;
L_0043cf8c:; BB(0x0043cf8c);
    /* 0043cf8c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf8f: je 0x43d0d9 */ if (fZ) goto L_0043d0d9;
L_0043cf95:; BB(0x0043cf95);
    /* 0043cf95: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf98: jne 0x43d028 */ if (!fZ) goto L_0043d028;
L_0043cf9e:; BB(0x0043cf9e);
    /* 0043cf9e: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043cfa4: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cfaa: jne 0x43d014 */ if (!fZ) goto L_0043d014;
L_0043cfac:; BB(0x0043cfac);
    /* 0043cfac: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 0043cfaf: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cfb5: je 0x43d014 */ if (fZ) goto L_0043d014;
L_0043cfb7:; BB(0x0043cfb7);
    /* 0043cfb7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043cfbb: mov byte ptr [esp + 0x94], 0x15 */ W8((u32)(r_esp+0x94u), 0x15u);
    /* 0043cfc3: mov edi, 6 */ r_edi = 0x6u;
    /* 0043cfc8: mov byte ptr [esp + 0x95], 3 */ W8((u32)(r_esp+0x95u), 0x3u);
    /* 0043cfd0: mov word ptr [esp + 0x96], dx */ W16((u32)(r_esp+0x96u), (u16)r_edx);
    /* 0043cfd8: mov word ptr [esp + 0x98], di */ W16((u32)(r_esp+0x98u), (u16)r_edi);
    /* 0043cfe0: mov word ptr [esp + 0x9a], si */ W16((u32)(r_esp+0x9au), (u16)r_esi);
    /* 0043cfe8: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 0043cfef: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43cff4u); f_008003e0();
    /* 0043cff4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043cff6: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43cffbu); f_00448b94();
    /* 0043cffb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043cffe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d000: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d002: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d004: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d006: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d008: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d00a: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d00d: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
L_0043d014:; BB(0x0043d014);
    /* 0043d014: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d016: mov word ptr [ebp + 0x3f8], ax */ W16((u32)(r_ebp+0x3f8u), (u16)r_eax);
    /* 0043d01d: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d025: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d026: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d027: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043d028:; BB(0x0043d028);
    /* 0043d028: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d02b: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043d031:; BB(0x0043d031);
    /* 0043d031: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043d037: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d03d: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043d043:; BB(0x0043d043);
    /* 0043d043: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d047: mov byte ptr [esp + 0x88], 0x15 */ W8((u32)(r_esp+0x88u), 0x15u);
    /* 0043d04f: mov esi, 7 */ r_esi = 0x7u;
    /* 0043d054: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043d056: mov byte ptr [esp + 0x89], 3 */ W8((u32)(r_esp+0x89u), 0x3u);
    /* 0043d05e: mov word ptr [esp + 0x8a], dx */ W16((u32)(r_esp+0x8au), (u16)r_edx);
    /* 0043d066: mov word ptr [esp + 0x8c], si */ W16((u32)(r_esp+0x8cu), (u16)r_esi);
    /* 0043d06e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43d073u); f_007751b0();
    /* 0043d073: fld dword ptr [0x8fdc24] */ FPUSH(R_F32((u32)(0x8fdc24u)));
    /* 0043d079: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043d07b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0043d07e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0043d082: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043d087: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043d08b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043d08f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043d093: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0043d096: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 0043d09d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0043d0a1: mov word ptr [esp + 0x90], dx */ W16((u32)(r_esp+0x90u), (u16)r_edx);
    /* 0043d0a9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d0aeu); f_008003e0();
    /* 0043d0ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d0b0: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d0b5u); f_00448b94();
    /* 0043d0b5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d0b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c4: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c7: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d0ce: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d0d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d0d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d0d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d0d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d0d8: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043d0d9:; BB(0x0043d0d9);
    /* 0043d0d9: mov esi, dword ptr [ebx + 0x390] */ r_esi = R32((u32)(r_ebx+0x390u));
    /* 0043d0df: test esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d0e5: jne 0x43d143 */ if (!fZ) goto L_0043d143;
L_0043d0e7:; BB(0x0043d0e7);
    /* 0043d0e7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d0eb: mov byte ptr [esp + 0xa0], 0x15 */ W8((u32)(r_esp+0xa0u), 0x15u);
    /* 0043d0f3: mov esi, 5 */ r_esi = 0x5u;
    /* 0043d0f8: mov byte ptr [esp + 0xa1], 3 */ W8((u32)(r_esp+0xa1u), 0x3u);
    /* 0043d100: mov word ptr [esp + 0xa2], dx */ W16((u32)(r_esp+0xa2u), (u16)r_edx);
    /* 0043d108: mov word ptr [esp + 0xa4], si */ W16((u32)(r_esp+0xa4u), (u16)r_esi);
    /* 0043d110: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 0043d117: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d11cu); f_008003e0();
    /* 0043d11c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d11e: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d123u); f_00448b94();
    /* 0043d123: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d126: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d128: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d130: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d132: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d135: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d13c: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d143:; BB(0x0043d143);
    /* 0043d143: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d146: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d14d: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d153: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d154: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d155: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d156: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d157: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043d158:; BB(0x0043d158);
    /* 0043d158: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043d15e: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d164: jne 0x43d1be */ if (!fZ) goto L_0043d1be;
L_0043d166:; BB(0x0043d166);
    /* 0043d166: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d16a: mov byte ptr [esp + 0x54], 0x15 */ W8((u32)(r_esp+0x54u), 0x15u);
    /* 0043d16f: mov edx, 3 */ r_edx = 0x3u;
    /* 0043d174: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d176: mov byte ptr [esp + 0x55], dl */ W8((u32)(r_esp+0x55u), (u8)r_edx);
    /* 0043d17a: mov word ptr [esp + 0x56], si */ W16((u32)(r_esp+0x56u), (u16)r_esi);
    /* 0043d17f: mov word ptr [esp + 0x58], dx */ W16((u32)(r_esp+0x58u), (u16)r_edx);
    /* 0043d184: call 0x448728 */ r_esp -= 4; W32(r_esp, 0x43d189u); f_00448728();
    /* 0043d189: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 0043d18e: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0043d192: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d197u); f_008003e0();
    /* 0043d197: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d199: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d19eu); f_00448b94();
    /* 0043d19e: movsx esi, word ptr [ebp + 0x3f8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
    /* 0043d1a5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d1a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1b0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1b2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1b4: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d1b7: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
L_0043d1be:; BB(0x0043d1be);
    /* 0043d1be: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043d1c1: mov word ptr [ebp + 0x3f8], si */ W16((u32)(r_ebp+0x3f8u), (u16)r_esi);
    /* 0043d1c8: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d1ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d1cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d1d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d1d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d1d2: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043d1d3:; BB(0x0043d1d3);
    /* 0043d1d3: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 0043d1d8: jmp 0x43cf74 */ goto L_0043cf74;
L_0043d1dd:; BB(0x0043d1dd);
    /* 0043d1dd: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043d1e3: test edi, 0x20000 */ {  u32 a = r_edi; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1e9: jne 0x43d26d */ if (!fZ) goto L_0043d26d;
L_0043d1ef:; BB(0x0043d1ef);
    /* 0043d1ef: movzx edi, si */ r_edi = (u32)(u16)r_esi;
    /* 0043d1f2: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1f8: je 0x43d26d */ if (fZ) goto L_0043d26d;
L_0043d1fa:; BB(0x0043d1fa);
    /* 0043d1fa: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d1fe: mov byte ptr [esp + 0xac], 0x15 */ W8((u32)(r_esp+0xacu), 0x15u);
    /* 0043d206: mov edi, 4 */ r_edi = 0x4u;
    /* 0043d20b: mov byte ptr [esp + 0xad], 3 */ W8((u32)(r_esp+0xadu), 0x3u);
    /* 0043d213: mov word ptr [esp + 0xae], dx */ W16((u32)(r_esp+0xaeu), (u16)r_edx);
    /* 0043d21b: mov edx, dword ptr [0xa447c0] */ r_edx = R32((u32)(0xa447c0u));
    /* 0043d221: mov word ptr [esp + 0xb0], di */ W16((u32)(r_esp+0xb0u), (u16)r_edi);
    /* 0043d229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d22b: je 0x43d232 */ if (fZ) goto L_0043d232;
L_0043d22d:; BB(0x0043d22d);
    /* 0043d22d: call 0x448cfc */ r_esp -= 4; W32(r_esp, 0x43d232u); f_00448cfc();
L_0043d232:; BB(0x0043d232);
    /* 0043d232: mov word ptr [esp + 0xb2], si */ W16((u32)(r_esp+0xb2u), (u16)r_esi);
    /* 0043d23a: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 0043d241: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d246u); f_008003e0();
    /* 0043d246: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d248: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d24du); f_00448b94();
    /* 0043d24d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d250: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d252: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d254: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d256: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d258: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25c: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25f: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d266: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d26d:; BB(0x0043d26d);
    /* 0043d26d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d270: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d277: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d27d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d280: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d281: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043d282:; BB(0x0043d282);
    /* 0043d282: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043d288: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d28e: jne 0x43d2f3 */ if (!fZ) goto L_0043d2f3;
L_0043d290:; BB(0x0043d290);
    /* 0043d290: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d294: mov byte ptr [esp + 0xb8], 0x15 */ W8((u32)(r_esp+0xb8u), 0x15u);
    /* 0043d29c: mov edx, 3 */ r_edx = 0x3u;
    /* 0043d2a1: mov byte ptr [esp + 0xb9], dl */ W8((u32)(r_esp+0xb9u), (u8)r_edx);
    /* 0043d2a8: mov word ptr [esp + 0xba], di */ W16((u32)(r_esp+0xbau), (u16)r_edi);
    /* 0043d2b0: mov word ptr [esp + 0xbc], dx */ W16((u32)(r_esp+0xbcu), (u16)r_edx);
    /* 0043d2b8: mov word ptr [esp + 0xbe], si */ W16((u32)(r_esp+0xbeu), (u16)r_esi);
    /* 0043d2c0: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 0043d2c7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d2ccu); f_008003e0();
    /* 0043d2cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d2ce: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d2d3u); f_00448b94();
    /* 0043d2d3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d2d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2de: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e2: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e5: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d2ec: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d2f3:; BB(0x0043d2f3);
    /* 0043d2f3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2f6: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d2fd: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d303: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d307: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
L_0043d308:; BB(0x0043d308);
    /* 0043d308: mov dword ptr [0xa44780], 0 */ W32((u32)(0xa44780u), 0x0u);
    /* 0043d312: jmp 0x43cec4 */ goto L_0043cec4;
L_0043d317:; BB(0x0043d317);
    /* 0043d317: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
    /* 0043d321: call 0x43e824 */ r_esp -= 4; W32(r_esp, 0x43d326u); f_0043e824();
    /* 0043d326: mov esi, eax */ r_esi = r_eax;
    /* 0043d328: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
    /* 0043d32f: jmp 0x43cf74 */ goto L_0043cf74;
L_0043d334:; BB(0x0043d334);
    /* 0043d334: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043d336: movsx edx, word ptr [esp + edi*4 + 0x74] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+r_edi*4+0x74u));
    /* 0043d33b: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d342: jmp 0x43ce4e */ goto L_0043ce4e;
L_0043d347:; BB(0x0043d347);
    /* 0043d347: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043d349: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0043d34e: mov word ptr [ebp + 0x3f8], si */ W16((u32)(r_ebp+0x3f8u), (u16)r_esi);
    /* 0043d355: jmp 0x43ce4e */ goto L_0043ce4e;
L_0043d35a:; BB(0x0043d35a);
    /* 0043d35a: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043d360: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d366: jne 0x43d3f1 */ if (!fZ) goto L_0043d3f1;
L_0043d36c:; BB(0x0043d36c);
    /* 0043d36c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d36e: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d373: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043d375: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x43d37au); f_007714cc();
    /* 0043d37a: mov esi, eax */ r_esi = r_eax;
    /* 0043d37c: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 0043d37f: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d385: je 0x43d3ea */ if (fZ) goto L_0043d3ea;
L_0043d387:; BB(0x0043d387);
    /* 0043d387: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d38b: mov byte ptr [esp + 0x48], 0x15 */ W8((u32)(r_esp+0x48u), 0x15u);
    /* 0043d390: mov edi, 4 */ r_edi = 0x4u;
    /* 0043d395: mov byte ptr [esp + 0x49], 3 */ W8((u32)(r_esp+0x49u), 0x3u);
    /* 0043d39a: mov word ptr [esp + 0x4a], dx */ W16((u32)(r_esp+0x4au), (u16)r_edx);
    /* 0043d39f: mov edx, dword ptr [0xa447c0] */ r_edx = R32((u32)(0xa447c0u));
    /* 0043d3a5: mov word ptr [esp + 0x4c], di */ W16((u32)(r_esp+0x4cu), (u16)r_edi);
    /* 0043d3aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d3ac: je 0x43d3b3 */ if (fZ) goto L_0043d3b3;
L_0043d3ae:; BB(0x0043d3ae);
    /* 0043d3ae: call 0x448cfc */ r_esp -= 4; W32(r_esp, 0x43d3b3u); f_00448cfc();
L_0043d3b3:; BB(0x0043d3b3);
    /* 0043d3b3: mov word ptr [esp + 0x4e], si */ W16((u32)(r_esp+0x4eu), (u16)r_esi);
    /* 0043d3b8: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0043d3bc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d3c1u); f_008003e0();
    /* 0043d3c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d3c3: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d3c8u); f_00448b94();
    /* 0043d3c8: movsx esi, word ptr [ebp + 0x3f8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
    /* 0043d3cf: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d3d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3da: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3dc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3de: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d3e1: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d3e8: jmp 0x43d3f1 */ goto L_0043d3f1;
L_0043d3ea:; BB(0x0043d3ea);
    /* 0043d3ea: movsx esi, word ptr [ebp + 0x3f8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d3f1:; BB(0x0043d3f1);
    /* 0043d3f1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043d3f4: mov word ptr [ebp + 0x3f8], si */ W16((u32)(r_ebp+0x3f8u), (u16)r_esi);
    /* 0043d3fb: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d401: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d405: ret  */ FN_RET(0x0043cb04); r_esp += 4; return;
}

void f_0043cec0(void)
{
    FN_ENTER(0x0043cec0);
    goto L_0043cec0;
L_0043ce07:; BB(0x0043ce07);
    /* 0043ce07: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ce0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ce0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ce0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ce10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ce11: ret  */ FN_RET(0x0043cec0); r_esp += 4; return;
L_0043cec0:; BB(0x0043cec0);
    /* 0043cec0: add byte ptr [edi - 0x5c], 0 */ { u32 ad = (u32)(r_edi+0xffffffa4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043cec4: mov esi, ecx */ r_esi = r_ecx;
    /* 0043cec6: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cec9: jge 0x43cf17 */ if ((fS==fO)) goto L_0043cf17;
L_0043cecb:; BB(0x0043cecb);
    /* 0043cecb: mov edi, ecx */ r_edi = r_ecx;
    /* 0043cecd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0043cecf: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043ced2: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ced5: jl 0x43cf04 */ if ((fS!=fO)) goto L_0043cf04;
L_0043ced7:; BB(0x0043ced7);
    /* 0043ced7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043ced9: mov dword ptr [esi*4 + 0xa44770], edi */ W32((u32)(r_esi*4+0xa44770u), r_edi);
    /* 0043cee0: mov dword ptr [esi*4 + 0xa44774], edi */ W32((u32)(r_esi*4+0xa44774u), r_edi);
    /* 0043cee7: mov dword ptr [esi*4 + 0xa44778], edi */ W32((u32)(r_esi*4+0xa44778u), r_edi);
    /* 0043ceee: mov dword ptr [esi*4 + 0xa4477c], edi */ W32((u32)(r_esi*4+0xa4477cu), r_edi);
    /* 0043cef5: mov dword ptr [esi*4 + 0xa44780], edi */ W32((u32)(r_esi*4+0xa44780u), r_edi);
    /* 0043cefc: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043ceff: cmp esi, -2 */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf02: jl 0x43ced7 */ if ((fS!=fO)) goto L_0043ced7;
L_0043cf04:; BB(0x0043cf04);
    /* 0043cf04: mov dword ptr [esi*4 + 0xa44770], 0 */ W32((u32)(r_esi*4+0xa44770u), 0x0u);
    /* 0043cf0f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cf12: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf15: jl 0x43cf04 */ if ((fS!=fO)) goto L_0043cf04;
L_0043cf17:; BB(0x0043cf17);
    /* 0043cf17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043cf19: je 0x43cf6f */ if (fZ) goto L_0043cf6f;
L_0043cf1b:; BB(0x0043cf1b);
    /* 0043cf1b: mov eax, 0 */ r_eax = 0x0u;
    /* 0043cf20: mov edi, 0 */ r_edi = 0x0u;
    /* 0043cf25: mov esi, 0 */ r_esi = 0x0u;
    /* 0043cf2a: jle 0x43d1d3 */ if ((fZ||fS!=fO)) goto L_0043d1d3;
L_0043cf30:; BB(0x0043cf30);
    /* 0043cf30: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0043cf34: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0043cf38:; BB(0x0043cf38);
    /* 0043cf38: mov ebp, dword ptr [esi*4 + 0xa44770] */ r_ebp = R32((u32)(r_esi*4+0xa44770u));
    /* 0043cf3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf41: je 0x43cf52 */ if (fZ) goto L_0043cf52;
L_0043cf43:; BB(0x0043cf43);
    /* 0043cf43: movsx ebx, word ptr [ebp + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0043cf4a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf4c: jle 0x43cf52 */ if ((fZ||fS!=fO)) goto L_0043cf52;
L_0043cf4e:; BB(0x0043cf4e);
    /* 0043cf4e: mov eax, ebx */ r_eax = r_ebx;
    /* 0043cf50: mov edi, ebp */ r_edi = r_ebp;
L_0043cf52:; BB(0x0043cf52);
    /* 0043cf52: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cf55: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf57: jl 0x43cf38 */ if ((fS!=fO)) goto L_0043cf38;
L_0043cf59:; BB(0x0043cf59);
    /* 0043cf59: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0043cf5d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043cf61: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf63: je 0x43d1d3 */ if (fZ) goto L_0043d1d3;
L_0043cf69:; BB(0x0043cf69);
    /* 0043cf69: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043cf6d: jmp 0x43cf74 */ goto L_0043cf74;
L_0043cf6f:; BB(0x0043cf6f);
    /* 0043cf6f: mov esi, 0xffff */ r_esi = 0xffffu;
L_0043cf74:; BB(0x0043cf74);
    /* 0043cf74: mov word ptr [ebp + 0x340], si */ W16((u32)(r_ebp+0x340u), (u16)r_esi);
    /* 0043cf7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf7d: je 0x43d282 */ if (fZ) goto L_0043d282;
L_0043cf83:; BB(0x0043cf83);
    /* 0043cf83: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf86: je 0x43d1dd */ if (fZ) goto L_0043d1dd;
L_0043cf8c:; BB(0x0043cf8c);
    /* 0043cf8c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf8f: je 0x43d0d9 */ if (fZ) goto L_0043d0d9;
L_0043cf95:; BB(0x0043cf95);
    /* 0043cf95: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf98: jne 0x43d028 */ if (!fZ) goto L_0043d028;
L_0043cf9e:; BB(0x0043cf9e);
    /* 0043cf9e: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043cfa4: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cfaa: jne 0x43d014 */ if (!fZ) goto L_0043d014;
L_0043cfac:; BB(0x0043cfac);
    /* 0043cfac: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 0043cfaf: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cfb5: je 0x43d014 */ if (fZ) goto L_0043d014;
L_0043cfb7:; BB(0x0043cfb7);
    /* 0043cfb7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043cfbb: mov byte ptr [esp + 0x94], 0x15 */ W8((u32)(r_esp+0x94u), 0x15u);
    /* 0043cfc3: mov edi, 6 */ r_edi = 0x6u;
    /* 0043cfc8: mov byte ptr [esp + 0x95], 3 */ W8((u32)(r_esp+0x95u), 0x3u);
    /* 0043cfd0: mov word ptr [esp + 0x96], dx */ W16((u32)(r_esp+0x96u), (u16)r_edx);
    /* 0043cfd8: mov word ptr [esp + 0x98], di */ W16((u32)(r_esp+0x98u), (u16)r_edi);
    /* 0043cfe0: mov word ptr [esp + 0x9a], si */ W16((u32)(r_esp+0x9au), (u16)r_esi);
    /* 0043cfe8: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 0043cfef: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43cff4u); f_008003e0();
    /* 0043cff4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043cff6: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43cffbu); f_00448b94();
    /* 0043cffb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043cffe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d000: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d002: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d004: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d006: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d008: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d00a: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d00d: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
L_0043d014:; BB(0x0043d014);
    /* 0043d014: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d016: mov word ptr [ebp + 0x3f8], ax */ W16((u32)(r_ebp+0x3f8u), (u16)r_eax);
    /* 0043d01d: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d025: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d026: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d027: ret  */ FN_RET(0x0043cec0); r_esp += 4; return;
L_0043d028:; BB(0x0043d028);
    /* 0043d028: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d02b: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043d031:; BB(0x0043d031);
    /* 0043d031: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043d037: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d03d: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043d043:; BB(0x0043d043);
    /* 0043d043: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d047: mov byte ptr [esp + 0x88], 0x15 */ W8((u32)(r_esp+0x88u), 0x15u);
    /* 0043d04f: mov esi, 7 */ r_esi = 0x7u;
    /* 0043d054: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043d056: mov byte ptr [esp + 0x89], 3 */ W8((u32)(r_esp+0x89u), 0x3u);
    /* 0043d05e: mov word ptr [esp + 0x8a], dx */ W16((u32)(r_esp+0x8au), (u16)r_edx);
    /* 0043d066: mov word ptr [esp + 0x8c], si */ W16((u32)(r_esp+0x8cu), (u16)r_esi);
    /* 0043d06e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43d073u); f_007751b0();
    /* 0043d073: fld dword ptr [0x8fdc24] */ FPUSH(R_F32((u32)(0x8fdc24u)));
    /* 0043d079: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043d07b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0043d07e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0043d082: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043d087: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043d08b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043d08f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043d093: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0043d096: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 0043d09d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0043d0a1: mov word ptr [esp + 0x90], dx */ W16((u32)(r_esp+0x90u), (u16)r_edx);
    /* 0043d0a9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d0aeu); f_008003e0();
    /* 0043d0ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d0b0: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d0b5u); f_00448b94();
    /* 0043d0b5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d0b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c4: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c7: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d0ce: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d0d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d0d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d0d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d0d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d0d8: ret  */ FN_RET(0x0043cec0); r_esp += 4; return;
L_0043d0d9:; BB(0x0043d0d9);
    /* 0043d0d9: mov esi, dword ptr [ebx + 0x390] */ r_esi = R32((u32)(r_ebx+0x390u));
    /* 0043d0df: test esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d0e5: jne 0x43d143 */ if (!fZ) goto L_0043d143;
L_0043d0e7:; BB(0x0043d0e7);
    /* 0043d0e7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d0eb: mov byte ptr [esp + 0xa0], 0x15 */ W8((u32)(r_esp+0xa0u), 0x15u);
    /* 0043d0f3: mov esi, 5 */ r_esi = 0x5u;
    /* 0043d0f8: mov byte ptr [esp + 0xa1], 3 */ W8((u32)(r_esp+0xa1u), 0x3u);
    /* 0043d100: mov word ptr [esp + 0xa2], dx */ W16((u32)(r_esp+0xa2u), (u16)r_edx);
    /* 0043d108: mov word ptr [esp + 0xa4], si */ W16((u32)(r_esp+0xa4u), (u16)r_esi);
    /* 0043d110: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 0043d117: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d11cu); f_008003e0();
    /* 0043d11c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d11e: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d123u); f_00448b94();
    /* 0043d123: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d126: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d128: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d130: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d132: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d135: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d13c: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d143:; BB(0x0043d143);
    /* 0043d143: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d146: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d14d: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d153: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d154: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d155: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d156: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d157: ret  */ FN_RET(0x0043cec0); r_esp += 4; return;
L_0043d1d3:; BB(0x0043d1d3);
    /* 0043d1d3: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 0043d1d8: jmp 0x43cf74 */ goto L_0043cf74;
L_0043d1dd:; BB(0x0043d1dd);
    /* 0043d1dd: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043d1e3: test edi, 0x20000 */ {  u32 a = r_edi; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1e9: jne 0x43d26d */ if (!fZ) goto L_0043d26d;
L_0043d1ef:; BB(0x0043d1ef);
    /* 0043d1ef: movzx edi, si */ r_edi = (u32)(u16)r_esi;
    /* 0043d1f2: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1f8: je 0x43d26d */ if (fZ) goto L_0043d26d;
L_0043d1fa:; BB(0x0043d1fa);
    /* 0043d1fa: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d1fe: mov byte ptr [esp + 0xac], 0x15 */ W8((u32)(r_esp+0xacu), 0x15u);
    /* 0043d206: mov edi, 4 */ r_edi = 0x4u;
    /* 0043d20b: mov byte ptr [esp + 0xad], 3 */ W8((u32)(r_esp+0xadu), 0x3u);
    /* 0043d213: mov word ptr [esp + 0xae], dx */ W16((u32)(r_esp+0xaeu), (u16)r_edx);
    /* 0043d21b: mov edx, dword ptr [0xa447c0] */ r_edx = R32((u32)(0xa447c0u));
    /* 0043d221: mov word ptr [esp + 0xb0], di */ W16((u32)(r_esp+0xb0u), (u16)r_edi);
    /* 0043d229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d22b: je 0x43d232 */ if (fZ) goto L_0043d232;
L_0043d22d:; BB(0x0043d22d);
    /* 0043d22d: call 0x448cfc */ r_esp -= 4; W32(r_esp, 0x43d232u); f_00448cfc();
L_0043d232:; BB(0x0043d232);
    /* 0043d232: mov word ptr [esp + 0xb2], si */ W16((u32)(r_esp+0xb2u), (u16)r_esi);
    /* 0043d23a: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 0043d241: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d246u); f_008003e0();
    /* 0043d246: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d248: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d24du); f_00448b94();
    /* 0043d24d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d250: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d252: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d254: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d256: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d258: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25c: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25f: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d266: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d26d:; BB(0x0043d26d);
    /* 0043d26d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d270: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d277: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d27d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d280: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d281: ret  */ FN_RET(0x0043cec0); r_esp += 4; return;
L_0043d282:; BB(0x0043d282);
    /* 0043d282: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043d288: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d28e: jne 0x43d2f3 */ if (!fZ) goto L_0043d2f3;
L_0043d290:; BB(0x0043d290);
    /* 0043d290: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d294: mov byte ptr [esp + 0xb8], 0x15 */ W8((u32)(r_esp+0xb8u), 0x15u);
    /* 0043d29c: mov edx, 3 */ r_edx = 0x3u;
    /* 0043d2a1: mov byte ptr [esp + 0xb9], dl */ W8((u32)(r_esp+0xb9u), (u8)r_edx);
    /* 0043d2a8: mov word ptr [esp + 0xba], di */ W16((u32)(r_esp+0xbau), (u16)r_edi);
    /* 0043d2b0: mov word ptr [esp + 0xbc], dx */ W16((u32)(r_esp+0xbcu), (u16)r_edx);
    /* 0043d2b8: mov word ptr [esp + 0xbe], si */ W16((u32)(r_esp+0xbeu), (u16)r_esi);
    /* 0043d2c0: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 0043d2c7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d2ccu); f_008003e0();
    /* 0043d2cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d2ce: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d2d3u); f_00448b94();
    /* 0043d2d3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d2d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2de: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e2: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e5: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d2ec: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d2f3:; BB(0x0043d2f3);
    /* 0043d2f3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2f6: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d2fd: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d303: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d307: ret  */ FN_RET(0x0043cec0); r_esp += 4; return;
}

void f_0043cf40(void)
{
    FN_ENTER(0x0043cf40);
    goto L_0043cf40;
L_0043ce07:; BB(0x0043ce07);
    /* 0043ce07: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ce0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ce0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ce0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ce10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ce11: ret  */ FN_RET(0x0043cf40); r_esp += 4; return;
L_0043cf38:; BB(0x0043cf38);
    /* 0043cf38: mov ebp, dword ptr [esi*4 + 0xa44770] */ r_ebp = R32((u32)(r_esi*4+0xa44770u));
    /* 0043cf3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_0043cf40:; BB(0x0043cf40);
    /* 0043cf40: in eax, dx */ UNSUP(0x0043cf40, "in eax, dx");
    /* 0043cf41: je 0x43cf52 */ if (fZ) goto L_0043cf52;
L_0043cf43:; BB(0x0043cf43);
    /* 0043cf43: movsx ebx, word ptr [ebp + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0043cf4a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf4c: jle 0x43cf52 */ if ((fZ||fS!=fO)) goto L_0043cf52;
L_0043cf4e:; BB(0x0043cf4e);
    /* 0043cf4e: mov eax, ebx */ r_eax = r_ebx;
    /* 0043cf50: mov edi, ebp */ r_edi = r_ebp;
L_0043cf52:; BB(0x0043cf52);
    /* 0043cf52: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043cf55: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043cf57: jl 0x43cf38 */ if ((fS!=fO)) goto L_0043cf38;
L_0043cf59:; BB(0x0043cf59);
    /* 0043cf59: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0043cf5d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043cf61: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf63: je 0x43d1d3 */ if (fZ) goto L_0043d1d3;
L_0043cf69:; BB(0x0043cf69);
    /* 0043cf69: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043cf6d: jmp 0x43cf74 */ goto L_0043cf74;
L_0043cf74:; BB(0x0043cf74);
    /* 0043cf74: mov word ptr [ebp + 0x340], si */ W16((u32)(r_ebp+0x340u), (u16)r_esi);
    /* 0043cf7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf7d: je 0x43d282 */ if (fZ) goto L_0043d282;
L_0043cf83:; BB(0x0043cf83);
    /* 0043cf83: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf86: je 0x43d1dd */ if (fZ) goto L_0043d1dd;
L_0043cf8c:; BB(0x0043cf8c);
    /* 0043cf8c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf8f: je 0x43d0d9 */ if (fZ) goto L_0043d0d9;
L_0043cf95:; BB(0x0043cf95);
    /* 0043cf95: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cf98: jne 0x43d028 */ if (!fZ) goto L_0043d028;
L_0043cf9e:; BB(0x0043cf9e);
    /* 0043cf9e: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043cfa4: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cfaa: jne 0x43d014 */ if (!fZ) goto L_0043d014;
L_0043cfac:; BB(0x0043cfac);
    /* 0043cfac: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 0043cfaf: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cfb5: je 0x43d014 */ if (fZ) goto L_0043d014;
L_0043cfb7:; BB(0x0043cfb7);
    /* 0043cfb7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043cfbb: mov byte ptr [esp + 0x94], 0x15 */ W8((u32)(r_esp+0x94u), 0x15u);
    /* 0043cfc3: mov edi, 6 */ r_edi = 0x6u;
    /* 0043cfc8: mov byte ptr [esp + 0x95], 3 */ W8((u32)(r_esp+0x95u), 0x3u);
    /* 0043cfd0: mov word ptr [esp + 0x96], dx */ W16((u32)(r_esp+0x96u), (u16)r_edx);
    /* 0043cfd8: mov word ptr [esp + 0x98], di */ W16((u32)(r_esp+0x98u), (u16)r_edi);
    /* 0043cfe0: mov word ptr [esp + 0x9a], si */ W16((u32)(r_esp+0x9au), (u16)r_esi);
    /* 0043cfe8: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 0043cfef: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43cff4u); f_008003e0();
    /* 0043cff4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043cff6: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43cffbu); f_00448b94();
    /* 0043cffb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043cffe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d000: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d002: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d004: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d006: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d008: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d00a: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d00d: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
L_0043d014:; BB(0x0043d014);
    /* 0043d014: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d016: mov word ptr [ebp + 0x3f8], ax */ W16((u32)(r_ebp+0x3f8u), (u16)r_eax);
    /* 0043d01d: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d025: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d026: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d027: ret  */ FN_RET(0x0043cf40); r_esp += 4; return;
L_0043d028:; BB(0x0043d028);
    /* 0043d028: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d02b: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043d031:; BB(0x0043d031);
    /* 0043d031: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043d037: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d03d: jne 0x43ce07 */ if (!fZ) goto L_0043ce07;
L_0043d043:; BB(0x0043d043);
    /* 0043d043: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d047: mov byte ptr [esp + 0x88], 0x15 */ W8((u32)(r_esp+0x88u), 0x15u);
    /* 0043d04f: mov esi, 7 */ r_esi = 0x7u;
    /* 0043d054: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043d056: mov byte ptr [esp + 0x89], 3 */ W8((u32)(r_esp+0x89u), 0x3u);
    /* 0043d05e: mov word ptr [esp + 0x8a], dx */ W16((u32)(r_esp+0x8au), (u16)r_edx);
    /* 0043d066: mov word ptr [esp + 0x8c], si */ W16((u32)(r_esp+0x8cu), (u16)r_esi);
    /* 0043d06e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43d073u); f_007751b0();
    /* 0043d073: fld dword ptr [0x8fdc24] */ FPUSH(R_F32((u32)(0x8fdc24u)));
    /* 0043d079: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043d07b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0043d07e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0043d082: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043d087: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043d08b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043d08f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043d093: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0043d096: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 0043d09d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0043d0a1: mov word ptr [esp + 0x90], dx */ W16((u32)(r_esp+0x90u), (u16)r_edx);
    /* 0043d0a9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d0aeu); f_008003e0();
    /* 0043d0ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d0b0: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d0b5u); f_00448b94();
    /* 0043d0b5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d0b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c4: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d0c7: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d0ce: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d0d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d0d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d0d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d0d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d0d8: ret  */ FN_RET(0x0043cf40); r_esp += 4; return;
L_0043d0d9:; BB(0x0043d0d9);
    /* 0043d0d9: mov esi, dword ptr [ebx + 0x390] */ r_esi = R32((u32)(r_ebx+0x390u));
    /* 0043d0df: test esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d0e5: jne 0x43d143 */ if (!fZ) goto L_0043d143;
L_0043d0e7:; BB(0x0043d0e7);
    /* 0043d0e7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d0eb: mov byte ptr [esp + 0xa0], 0x15 */ W8((u32)(r_esp+0xa0u), 0x15u);
    /* 0043d0f3: mov esi, 5 */ r_esi = 0x5u;
    /* 0043d0f8: mov byte ptr [esp + 0xa1], 3 */ W8((u32)(r_esp+0xa1u), 0x3u);
    /* 0043d100: mov word ptr [esp + 0xa2], dx */ W16((u32)(r_esp+0xa2u), (u16)r_edx);
    /* 0043d108: mov word ptr [esp + 0xa4], si */ W16((u32)(r_esp+0xa4u), (u16)r_esi);
    /* 0043d110: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 0043d117: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d11cu); f_008003e0();
    /* 0043d11c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d11e: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d123u); f_00448b94();
    /* 0043d123: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d126: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d128: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d12e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d130: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d132: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d135: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d13c: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d143:; BB(0x0043d143);
    /* 0043d143: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d146: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d14d: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d153: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d154: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d155: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d156: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d157: ret  */ FN_RET(0x0043cf40); r_esp += 4; return;
L_0043d1d3:; BB(0x0043d1d3);
    /* 0043d1d3: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 0043d1d8: jmp 0x43cf74 */ goto L_0043cf74;
L_0043d1dd:; BB(0x0043d1dd);
    /* 0043d1dd: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043d1e3: test edi, 0x20000 */ {  u32 a = r_edi; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1e9: jne 0x43d26d */ if (!fZ) goto L_0043d26d;
L_0043d1ef:; BB(0x0043d1ef);
    /* 0043d1ef: movzx edi, si */ r_edi = (u32)(u16)r_esi;
    /* 0043d1f2: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1f8: je 0x43d26d */ if (fZ) goto L_0043d26d;
L_0043d1fa:; BB(0x0043d1fa);
    /* 0043d1fa: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d1fe: mov byte ptr [esp + 0xac], 0x15 */ W8((u32)(r_esp+0xacu), 0x15u);
    /* 0043d206: mov edi, 4 */ r_edi = 0x4u;
    /* 0043d20b: mov byte ptr [esp + 0xad], 3 */ W8((u32)(r_esp+0xadu), 0x3u);
    /* 0043d213: mov word ptr [esp + 0xae], dx */ W16((u32)(r_esp+0xaeu), (u16)r_edx);
    /* 0043d21b: mov edx, dword ptr [0xa447c0] */ r_edx = R32((u32)(0xa447c0u));
    /* 0043d221: mov word ptr [esp + 0xb0], di */ W16((u32)(r_esp+0xb0u), (u16)r_edi);
    /* 0043d229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d22b: je 0x43d232 */ if (fZ) goto L_0043d232;
L_0043d22d:; BB(0x0043d22d);
    /* 0043d22d: call 0x448cfc */ r_esp -= 4; W32(r_esp, 0x43d232u); f_00448cfc();
L_0043d232:; BB(0x0043d232);
    /* 0043d232: mov word ptr [esp + 0xb2], si */ W16((u32)(r_esp+0xb2u), (u16)r_esi);
    /* 0043d23a: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 0043d241: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d246u); f_008003e0();
    /* 0043d246: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d248: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d24du); f_00448b94();
    /* 0043d24d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d250: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d252: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d254: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d256: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d258: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25c: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d25f: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d266: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d26d:; BB(0x0043d26d);
    /* 0043d26d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d270: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d277: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d27d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d280: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d281: ret  */ FN_RET(0x0043cf40); r_esp += 4; return;
L_0043d282:; BB(0x0043d282);
    /* 0043d282: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0043d288: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d28e: jne 0x43d2f3 */ if (!fZ) goto L_0043d2f3;
L_0043d290:; BB(0x0043d290);
    /* 0043d290: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043d294: mov byte ptr [esp + 0xb8], 0x15 */ W8((u32)(r_esp+0xb8u), 0x15u);
    /* 0043d29c: mov edx, 3 */ r_edx = 0x3u;
    /* 0043d2a1: mov byte ptr [esp + 0xb9], dl */ W8((u32)(r_esp+0xb9u), (u8)r_edx);
    /* 0043d2a8: mov word ptr [esp + 0xba], di */ W16((u32)(r_esp+0xbau), (u16)r_edi);
    /* 0043d2b0: mov word ptr [esp + 0xbc], dx */ W16((u32)(r_esp+0xbcu), (u16)r_edx);
    /* 0043d2b8: mov word ptr [esp + 0xbe], si */ W16((u32)(r_esp+0xbeu), (u16)r_esi);
    /* 0043d2c0: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 0043d2c7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43d2ccu); f_008003e0();
    /* 0043d2cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d2ce: call 0x448b94 */ r_esp -= 4; W32(r_esp, 0x43d2d3u); f_00448b94();
    /* 0043d2d3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043d2d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2de: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e2: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2e5: mov word ptr [ebp + 0x3fa], dx */ W16((u32)(r_ebp+0x3fau), (u16)r_edx);
    /* 0043d2ec: movsx edx, word ptr [ebp + 0x3f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x3f8u));
L_0043d2f3:; BB(0x0043d2f3);
    /* 0043d2f3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d2f6: mov word ptr [ebp + 0x3f8], dx */ W16((u32)(r_ebp+0x3f8u), (u16)r_edx);
    /* 0043d2fd: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d303: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043d304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d307: ret  */ FN_RET(0x0043cf40); r_esp += 4; return;
}

