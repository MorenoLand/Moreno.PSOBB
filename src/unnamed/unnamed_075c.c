#include "protos.h"

void f_0075c584(void) /* sub_75C584 */
{
    FN_ENTER(0x0075c584);
    /* 0075c584: mov dword ptr [0xa9ad1c], 0x3f800000 */ W32((u32)(0xa9ad1cu), 0x3f800000u);
    /* 0075c58e: mov dword ptr [0xa9ad20], 0x41000000 */ W32((u32)(0xa9ad20u), 0x41000000u);
    /* 0075c598: mov dword ptr [0xa9ad24], 0x3fc00000 */ W32((u32)(0xa9ad24u), 0x3fc00000u);
    /* 0075c5a2: ret  */ FN_RET(0x0075c584); r_esp += 4; return;
}

void f_0075c5a4(void) /* sub_75C5A4 */
{
    FN_ENTER(0x0075c5a4);
    /* 0075c5a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c5a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075c5a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c5a9: call 0x75c5c8 */ r_esp -= 4; W32(r_esp, 0x75c5aeu); f_0075c5c8();
    /* 0075c5ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075c5b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075c5b4: jne 0x75c5ba */ if (!fZ) goto L_0075c5ba;
L_0075c5b6:; BB(0x0075c5b6);
    /* 0075c5b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075c5b7: ret 4 */ FN_RET(0x0075c5a4); r_esp += 8; return;
L_0075c5ba:; BB(0x0075c5ba);
    /* 0075c5ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c5bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75c5c0u); f_005c2f74();
    /* 0075c5c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075c5c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075c5c2: ret 4 */ FN_RET(0x0075c5a4); r_esp += 8; return;
}

void f_0075c5c8(void) /* sub_75C5C8 */
{
    FN_ENTER(0x0075c5c8);
    /* 0075c5c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075c5c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0075c5cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075c5cd: push 0x8f3328 */ { u32 v = 0x8f3328u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c5d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075c5d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c5d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075c5e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075c5e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075c5e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075c5e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075c5ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075c5ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075c5f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075c5f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075c5fc: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0075c5ff: mov dword ptr [eax], 0xb42bb0 */ W32((u32)(r_eax), 0xb42bb0u);
    /* 0075c605: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c607: je 0x75c613 */ if (fZ) goto L_0075c613;
L_0075c609:; BB(0x0075c609);
    /* 0075c609: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c60b: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x75c610u); f_00721474();
    /* 0075c610: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075c613:; BB(0x0075c613);
    /* 0075c613: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0075c616: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c618: je 0x75c624 */ if (fZ) goto L_0075c624;
L_0075c61a:; BB(0x0075c61a);
    /* 0075c61a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c61c: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x75c621u); f_00728a10();
    /* 0075c621: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075c624:; BB(0x0075c624);
    /* 0075c624: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075c62b: mov ecx, eax */ r_ecx = r_eax;
    /* 0075c62d: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x75c632u); f_00710788();
    /* 0075c632: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075c635: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075c63c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075c63e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075c63f: ret  */ FN_RET(0x0075c5c8); r_esp += 4; return;
}

void f_0075c640(void) /* sub_75C640 */
{
    FN_ENTER(0x0075c640);
    /* 0075c640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075c641: mov ebp, esp */ r_ebp = r_esp;
    /* 0075c643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075c645: push 0x8f337a */ { u32 v = 0x8f337au; r_esp -= 4; W32(r_esp, v); }
    /* 0075c64a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075c650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c651: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075c658: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075c65b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075c65e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075c661: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075c664: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075c667: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075c66a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075c66d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0075c670: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075c673: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075c676: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0075c679: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c67b: push 0x9f577c */ { u32 v = 0x9f577cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075c680: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x75c685u); f_007108c4();
    /* 0075c685: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075c68c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075c68f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0075c692: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075c695: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c697: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0075c699: mov dword ptr [edx], 0xb42bb0 */ W32((u32)(r_edx), 0xb42bb0u);
    /* 0075c69f: mov esi, dword ptr [0x9f5778] */ r_esi = R32((u32)(0x9f5778u));
    /* 0075c6a5: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075c6a8: mov byte ptr [edx + 0x84], cl */ W8((u32)(r_edx+0x84u), (u8)r_ecx);
    /* 0075c6ae: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0075c6b1: mov byte ptr [edx + 0x86], cl */ W8((u32)(r_edx+0x86u), (u8)r_ecx);
    /* 0075c6b7: mov byte ptr [edx + 0x87], cl */ W8((u32)(r_edx+0x87u), (u8)r_ecx);
    /* 0075c6bd: mov word ptr [edx + 0x8a], cx */ W16((u32)(r_edx+0x8au), (u16)r_ecx);
    /* 0075c6c4: mov dword ptr [edx + 0x90], edi */ W32((u32)(r_edx+0x90u), r_edi);
    /* 0075c6ca: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0075c6d0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x75c6d5u); f_008581c5();
    /* 0075c6d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075c6d6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0075c6d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c6db: je 0x75c78a */ if (fZ) goto L_0075c78a;
L_0075c6e1:; BB(0x0075c6e1);
    /* 0075c6e1: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0075c6e8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0075c6ef: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c6f1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75c6f6u); f_0079317c();
    /* 0075c6f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075c6f7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075c6fa: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0075c6fd: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0075c701: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c703: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x75c708u); f_00761320();
    /* 0075c708: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0075c70b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0075c712:; BB(0x0075c712);
    /* 0075c712: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075c715: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0075c718: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075c71f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0075c726: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075c728: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0075c72f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075c736: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x75c73bu); f_008581c5();
    /* 0075c73b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075c73c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075c73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c741: je 0x75c786 */ if (fZ) goto L_0075c786;
L_0075c743:; BB(0x0075c743);
    /* 0075c743: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0075c74a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0075c751: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075c754: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0075c757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c758: call 0x73f670 */ r_esp -= 4; W32(r_esp, 0x75c75du); f_0073f670();
    /* 0075c75d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075c760: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0075c767:; BB(0x0075c767);
    /* 0075c767: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075c76a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075c76d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075c770: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075c773: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0075c776: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075c779: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075c780: mov esp, ebp */ r_esp = r_ebp;
    /* 0075c782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075c783: ret 0xc */ FN_RET(0x0075c640); r_esp += 16; return;
L_0075c786:; BB(0x0075c786);
    /* 0075c786: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075c788: jmp 0x75c767 */ goto L_0075c767;
L_0075c78a:; BB(0x0075c78a);
    /* 0075c78a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075c78c: jmp 0x75c712 */ goto L_0075c712;
}

void f_0075c790(void) /* sub_75C790 */
{
    FN_ENTER(0x0075c790);
    /* 0075c790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075c791: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075c793: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0075c796: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075c798: jne 0x75c7a1 */ if (!fZ) goto L_0075c7a1;
L_0075c79a:; BB(0x0075c79a);
    /* 0075c79a: mov dword ptr [ebp + 0x5c], 0x1000000 */ W32((u32)(r_ebp+0x5cu), 0x1000000u);
L_0075c7a1:; BB(0x0075c7a1);
    /* 0075c7a1: movzx eax, byte ptr [ebp + 0x84] */ r_eax = (u32)R8((u32)(r_ebp+0x84u));
    /* 0075c7a8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075c7aa: jne 0x75c842 */ if (!fZ) goto L_0075c842;
L_0075c7b0:; BB(0x0075c7b0);
    /* 0075c7b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075c7b2: call 0x75c870 */ r_esp -= 4; W32(r_esp, 0x75c7b7u); f_0075c870();
    /* 0075c7b7: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c7bcu); f_00694c6c();
    /* 0075c7bc: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0075c7c2: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075c7c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c7c9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c7cc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c7ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c7d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c7d2: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c7d9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75c7deu); f_007c1160();
    /* 0075c7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c7e0: je 0x75c7e9 */ if (fZ) goto L_0075c7e9;
L_0075c7e2:; BB(0x0075c7e2);
    /* 0075c7e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075c7e4: call 0x75c9ec */ r_esp -= 4; W32(r_esp, 0x75c7e9u); f_0075c9ec();
L_0075c7e9:; BB(0x0075c7e9);
    /* 0075c7e9: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c7eeu); f_00694c6c();
    /* 0075c7ee: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075c7f4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c7f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c7f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c7fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c7fd: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c804: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75c809u); f_007c1160();
    /* 0075c809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c80b: je 0x75c814 */ if (fZ) goto L_0075c814;
L_0075c80d:; BB(0x0075c80d);
    /* 0075c80d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075c80f: call 0x75ca60 */ r_esp -= 4; W32(r_esp, 0x75c814u); f_0075ca60();
L_0075c814:; BB(0x0075c814);
    /* 0075c814: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c819u); f_00694c6c();
    /* 0075c819: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075c81f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c822: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c824: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c826: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c828: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075c82a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c831: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c832: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75c837u); f_007c1160();
    /* 0075c837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c839: je 0x75c842 */ if (fZ) goto L_0075c842;
L_0075c83b:; BB(0x0075c83b);
    /* 0075c83b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075c83d: call 0x75cadc */ r_esp -= 4; W32(r_esp, 0x75c842u); f_0075cadc();
L_0075c842:; BB(0x0075c842);
    /* 0075c842: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075c844: call 0x75cb14 */ r_esp -= 4; W32(r_esp, 0x75c849u); f_0075cb14();
    /* 0075c849: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 0075c84c: fcomp dword ptr [0x97497c] */ fx_compare(ST(0), R_F32((u32)(0x97497cu))); FPOP();
    /* 0075c852: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075c854: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075c855: jb 0x75c867 */ if (fC) goto L_0075c867;
L_0075c857:; BB(0x0075c857);
    /* 0075c857: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0075c85a: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x75c85fu); f_00761388();
    /* 0075c85f: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 0075c862: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x75c867u); f_0073f68c();
L_0075c867:; BB(0x0075c867);
    /* 0075c867: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075c869: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x75c86eu); f_00710db4();
    /* 0075c86e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075c86f: ret  */ FN_RET(0x0075c790); r_esp += 4; return;
}

void f_0075c870(void) /* sub_75C870 */
{
    FN_ENTER(0x0075c870);
    /* 0075c870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075c871: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075c873: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c878u); f_00694c6c();
    /* 0075c878: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 0075c87e: or edx, dword ptr [0xa0f668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075c884: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c886: or edx, dword ptr [0xa0f670] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075c88c: or edx, dword ptr [0xa0f66c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075c892: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c894: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c8a5: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75c8aau); f_007c09fc();
    /* 0075c8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075c8ac: jne 0x75c8b0 */ if (!fZ) goto L_0075c8b0;
L_0075c8ae:; BB(0x0075c8ae);
    /* 0075c8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075c8af: ret  */ FN_RET(0x0075c870); r_esp += 4; return;
L_0075c8b0:; BB(0x0075c8b0);
    /* 0075c8b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075c8b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8b5: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8ba: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75c8bfu); f_00814298();
    /* 0075c8bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075c8c2: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c8c7u); f_00694c6c();
    /* 0075c8c7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8c9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8cb: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c8ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c8d0: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075c8d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c8d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c8da: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c8e1: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75c8e6u); f_007c09fc();
    /* 0075c8e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c8e8: je 0x75c8f1 */ if (fZ) goto L_0075c8f1;
L_0075c8ea:; BB(0x0075c8ea);
    /* 0075c8ea: add byte ptr [ebp + 0x86], 1 */ { u32 ad = (u32)(r_ebp+0x86u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075c8f1:; BB(0x0075c8f1);
    /* 0075c8f1: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c8f6u); f_00694c6c();
    /* 0075c8f6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c8fa: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c8fd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c8ff: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075c905: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c907: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c909: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c910: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75c915u); f_007c09fc();
    /* 0075c915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c917: jne 0x75c922 */ if (!fZ) goto L_0075c922;
L_0075c919:; BB(0x0075c919);
    /* 0075c919: movsx eax, byte ptr [ebp + 0x86] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x86u));
    /* 0075c920: jmp 0x75c932 */ goto L_0075c932;
L_0075c922:; BB(0x0075c922);
    /* 0075c922: movsx eax, byte ptr [ebp + 0x86] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x86u));
    /* 0075c929: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c92c: mov byte ptr [ebp + 0x86], al */ W8((u32)(r_ebp+0x86u), (u8)r_eax);
L_0075c932:; BB(0x0075c932);
    /* 0075c932: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0075c935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075c937: jge 0x75c945 */ if ((fS==fO)) goto L_0075c945;
L_0075c939:; BB(0x0075c939);
    /* 0075c939: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c93c: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0075c93f: mov byte ptr [ebp + 0x86], al */ W8((u32)(r_ebp+0x86u), (u8)r_eax);
L_0075c945:; BB(0x0075c945);
    /* 0075c945: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075c948: jl 0x75c953 */ if ((fS!=fO)) goto L_0075c953;
L_0075c94a:; BB(0x0075c94a);
    /* 0075c94a: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c94d: mov byte ptr [ebp + 0x86], al */ W8((u32)(r_ebp+0x86u), (u8)r_eax);
L_0075c953:; BB(0x0075c953);
    /* 0075c953: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c958u); f_00694c6c();
    /* 0075c958: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c95a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c95c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c95f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c961: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075c967: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c969: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c96b: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c972: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75c977u); f_007c09fc();
    /* 0075c977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c979: je 0x75c982 */ if (fZ) goto L_0075c982;
L_0075c97b:; BB(0x0075c97b);
    /* 0075c97b: add byte ptr [ebp + 0x87], 0xff */ { u32 ad = (u32)(r_ebp+0x87u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075c982:; BB(0x0075c982);
    /* 0075c982: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75c987u); f_00694c6c();
    /* 0075c987: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c989: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075c98b: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075c98e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c990: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075c996: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c998: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c99a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075c9a1: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75c9a6u); f_007c09fc();
    /* 0075c9a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075c9a8: jne 0x75c9b3 */ if (!fZ) goto L_0075c9b3;
L_0075c9aa:; BB(0x0075c9aa);
    /* 0075c9aa: movsx eax, byte ptr [ebp + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x87u));
    /* 0075c9b1: jmp 0x75c9c3 */ goto L_0075c9c3;
L_0075c9b3:; BB(0x0075c9b3);
    /* 0075c9b3: movsx eax, byte ptr [ebp + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x87u));
    /* 0075c9ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075c9bd: mov byte ptr [ebp + 0x87], al */ W8((u32)(r_ebp+0x87u), (u8)r_eax);
L_0075c9c3:; BB(0x0075c9c3);
    /* 0075c9c3: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0075c9c6: movsx eax, byte ptr [ebp + 0x88] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x88u));
    /* 0075c9cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075c9cf: jl 0x75c9df */ if ((fS!=fO)) goto L_0075c9df;
L_0075c9d1:; BB(0x0075c9d1);
    /* 0075c9d1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075c9d3: jl 0x75c9dd */ if ((fS!=fO)) goto L_0075c9dd;
L_0075c9d5:; BB(0x0075c9d5);
    /* 0075c9d5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075c9d7: mov byte ptr [ebp + 0x87], dl */ W8((u32)(r_ebp+0x87u), (u8)r_edx);
L_0075c9dd:; BB(0x0075c9dd);
    /* 0075c9dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075c9de: ret  */ FN_RET(0x0075c870); r_esp += 4; return;
L_0075c9df:; BB(0x0075c9df);
    /* 0075c9df: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075c9e1: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0075c9e4: mov byte ptr [ebp + 0x87], dl */ W8((u32)(r_ebp+0x87u), (u8)r_edx);
    /* 0075c9ea: jmp 0x75c9d1 */ goto L_0075c9d1;
}

void f_0075c9ec(void) /* sub_75C9EC */
{
    FN_ENTER(0x0075c9ec);
    /* 0075c9ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075c9ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075c9ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c9f1: call 0x75ca48 */ r_esp -= 4; W32(r_esp, 0x75c9f6u); f_0075ca48();
    /* 0075c9f6: movsx edx, word ptr [ebx + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8au));
    /* 0075c9fd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075c9ff: jl 0x75ca15 */ if ((fS!=fO)) goto L_0075ca15;
L_0075ca01:; BB(0x0075ca01);
    /* 0075ca01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ca03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca06: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca0b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75ca10u); f_00814298();
    /* 0075ca10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ca13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ca14: ret  */ FN_RET(0x0075c9ec); r_esp += 4; return;
L_0075ca15:; BB(0x0075ca15);
    /* 0075ca15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ca17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca1a: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca1f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75ca24u); f_00814298();
    /* 0075ca24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ca27: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca29: movzx eax, byte ptr [ebx + 0x84] */ r_eax = (u32)R8((u32)(r_ebx+0x84u));
    /* 0075ca30: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0075ca33: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ca38: mov byte ptr [ebx + 0x84], al */ W8((u32)(r_ebx+0x84u), (u8)r_eax);
    /* 0075ca3e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ca43u); f_00760acc();
    /* 0075ca43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ca44: ret  */ FN_RET(0x0075c9ec); r_esp += 4; return;
}

void f_0075ca48(void) /* sub_75CA48 */
{
    FN_ENTER(0x0075ca48);
    /* 0075ca48: movsx eax, byte ptr [ecx + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x87u));
    /* 0075ca4f: movsx edx, byte ptr [ecx + 0x86] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x86u));
    /* 0075ca56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ca58: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ca5a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075ca5c: ret  */ FN_RET(0x0075ca48); r_esp += 4; return;
}

void f_0075ca60(void) /* sub_75CA60 */
{
    FN_ENTER(0x0075ca60);
    /* 0075ca60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca61: mov esi, ecx */ r_esi = r_ecx;
    /* 0075ca63: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ca65: call 0x75ca48 */ r_esp -= 4; W32(r_esp, 0x75ca6au); f_0075ca48();
    /* 0075ca6a: movsx edx, byte ptr [esi + 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x85u));
    /* 0075ca71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ca73: jne 0x75cac7 */ if (!fZ) goto L_0075cac7;
L_0075ca75:; BB(0x0075ca75);
    /* 0075ca75: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 0075ca7c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ca7e: jge 0x75cac7 */ if ((fS==fO)) goto L_0075cac7;
L_0075ca80:; BB(0x0075ca80);
    /* 0075ca80: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75ca85u); f_0077d9f0();
    /* 0075ca85: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ca88: jl 0x75cac7 */ if ((fS!=fO)) goto L_0075cac7;
L_0075ca8a:; BB(0x0075ca8a);
    /* 0075ca8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ca8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca8f: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca94: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75ca99u); f_00814298();
    /* 0075ca99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ca9c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ca9e: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 0075caa4: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 0075caaa: movzx edx, byte ptr [esi + 0x84] */ r_edx = (u32)R8((u32)(r_esi+0x84u));
    /* 0075cab1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0075cab4: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075caba: mov byte ptr [esi + 0x84], dl */ W8((u32)(r_esi+0x84u), (u8)r_edx);
    /* 0075cac0: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75cac5u); f_00760acc();
    /* 0075cac5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075cac6: ret  */ FN_RET(0x0075ca60); r_esp += 4; return;
L_0075cac7:; BB(0x0075cac7);
    /* 0075cac7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075cac9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075caca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cacc: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 0075cad1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75cad6u); f_00814298();
    /* 0075cad6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075cad9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075cada: ret  */ FN_RET(0x0075ca60); r_esp += 4; return;
}

void f_0075cadc(void) /* sub_75CADC */
{
    FN_ENTER(0x0075cadc);
    /* 0075cadc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cadd: mov edi, ecx */ r_edi = r_ecx;
    /* 0075cadf: movzx eax, byte ptr [edi + 0x84] */ r_eax = (u32)R8((u32)(r_edi+0x84u));
    /* 0075cae6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075cae8: je 0x75caec */ if (fZ) goto L_0075caec;
L_0075caea:; BB(0x0075caea);
    /* 0075caea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075caeb: ret  */ FN_RET(0x0075cadc); r_esp += 4; return;
L_0075caec:; BB(0x0075caec);
    /* 0075caec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075caee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075caef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075caf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075caf1: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075caf6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75cafbu); f_00814298();
    /* 0075cafb: movzx eax, byte ptr [edi + 0x84] */ r_eax = (u32)R8((u32)(r_edi+0x84u));
    /* 0075cb02: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075cb07: mov byte ptr [edi + 0x84], al */ W8((u32)(r_edi+0x84u), (u8)r_eax);
    /* 0075cb0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075cb10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075cb11: ret  */ FN_RET(0x0075cadc); r_esp += 4; return;
}

void f_0075cb14(void) /* sub_75CB14 */
{
    FN_ENTER(0x0075cb14);
    /* 0075cb14: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075cb17: fld dword ptr [0x974968] */ FPUSH(R_F32((u32)(0x974968u)));
    /* 0075cb1d: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0075cb20: movsx eax, byte ptr [ecx + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x87u));
    /* 0075cb27: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0075cb2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075cb2c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0075cb30: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 0075cb32: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0075cb36: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cb3a: fmul dword ptr [0x974974] */ ST(0) = ST(0) * R_F32((u32)(0x974974u));
    /* 0075cb40: fadd dword ptr [0x974978] */ ST(0) = ST(0) + R_F32((u32)(0x974978u));
    /* 0075cb46: fadd dword ptr [0x974970] */ ST(0) = ST(0) + R_F32((u32)(0x974970u));
    /* 0075cb4c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0075cb53: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075cb55: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0075cb58: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0075cb5b: lea eax, [ecx + 0x70] */ r_eax = (u32)(r_ecx+0x70u);
    /* 0075cb5e: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0075cb61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb63: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x75cb68u); f_0073f8a4();
    /* 0075cb68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075cb6b: ret  */ FN_RET(0x0075cb14); r_esp += 4; return;
}

void f_0075cb6c(void) /* sub_75CB6C */
{
    FN_ENTER(0x0075cb6c);
    /* 0075cb6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb70: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075cb73: mov edi, ecx */ r_edi = r_ecx;
    /* 0075cb75: mov ecx, edi */ r_ecx = r_edi;
    /* 0075cb77: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x75cb7cu); f_007108f4();
    /* 0075cb7c: mov esi, eax */ r_esi = r_eax;
    /* 0075cb7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cb7f: mov ecx, edi */ r_ecx = r_edi;
    /* 0075cb81: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x75cb86u); f_00710f80();
    /* 0075cb86: movsx edx, byte ptr [edi + 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x85u));
    /* 0075cb8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075cb8f: je 0x75cf50 */ if (fZ) goto L_0075cf50;
L_0075cb95:; BB(0x0075cb95);
    /* 0075cb95: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075cb98: jne 0x75ccf9 */ if (!fZ) goto L_0075ccf9;
L_0075cb9e:; BB(0x0075cb9e);
    /* 0075cb9e: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 0075cba1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0075cba4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0075cba6: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0075cbaa: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0075cbad: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0075cbaf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075cbb1: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0075cbb5: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
    /* 0075cbbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075cbbe: jle 0x75d076 */ if ((fZ||fS!=fO)) goto L_0075d076;
L_0075cbc4:; BB(0x0075cbc4);
    /* 0075cbc4: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0075cbc8: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0075cbcc: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0075cbd0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0075cbd4: lea ecx, [edi + 0x24] */ r_ecx = (u32)(r_edi+0x24u);
    /* 0075cbd7: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0075cbdb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_0075cbdf:; BB(0x0075cbdf);
    /* 0075cbdf: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cbe5: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cbeb: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0075cbee: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075cbf0: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0075cbf3: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0075cbf6: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0075cbf8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075cbfa: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0075cbfc: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 0075cbff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075cc01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075cc02: jb 0x75cc16 */ if (fC) goto L_0075cc16;
L_0075cc04:; BB(0x0075cc04);
    /* 0075cc04: fld dword ptr [0x974944] */ FPUSH(R_F32((u32)(0x974944u)));
    /* 0075cc0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075cc0c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075cc0e: fcom dword ptr [esi + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x48u))); 
    /* 0075cc11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075cc13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075cc14: jbe 0x75cc24 */ if ((fC||fZ)) goto L_0075cc24;
L_0075cc16:; BB(0x0075cc16);
    /* 0075cc16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cc18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cc1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cc1c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075cc1f: jmp 0x75cce9 */ goto L_0075cce9;
L_0075cc24:; BB(0x0075cc24);
    /* 0075cc24: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0075cc26: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0075cc28: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0075cc2c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0075cc30: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cc32: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0075cc36: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0075cc3a: jmp 0x75cc47 */ goto L_0075cc47;
L_0075cc3c:; BB(0x0075cc3c);
    /* 0075cc3c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0075cc40: movsx edx, word ptr [eax + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
L_0075cc47:; BB(0x0075cc47);
    /* 0075cc47: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075cc49: jge 0x75d09c */ if ((fS==fO)) goto L_0075d09c;
L_0075cc4f:; BB(0x0075cc4f);
    /* 0075cc4f: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cc55: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0075cc59: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075cc5d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0075cc61: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cc65: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0075cc67: fadd dword ptr [0x974954] */ ST(0) = ST(0) + R_F32((u32)(0x974954u));
    /* 0075cc6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075cc6f: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0075cc73: fadd dword ptr [0x97494c] */ ST(0) = ST(0) + R_F32((u32)(0x97494cu));
    /* 0075cc79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075cc7b: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0075cc7e: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0075cc81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075cc83: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0075cc89: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0075cc8c: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 0075cc92: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 0075cc98: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0075cc9a: movzx esi, bp */ r_esi = (u32)(u16)r_ebp;
    /* 0075cc9d: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0075cc9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cca0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cca1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0075cca5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cca6: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0075ccaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccac: call 0x714198 */ r_esp -= 4; W32(r_esp, 0x75ccb1u); f_00714198();
    /* 0075ccb1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ccb4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0075ccb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccb9: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0075ccbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccbe: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0075ccc2: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75ccc7u); f_0072a648();
    /* 0075ccc7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075ccca: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cccd: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ccd0: jl 0x75cc3c */ if ((fS!=fO)) goto L_0075cc3c;
L_0075ccd6:; BB(0x0075ccd6);
    /* 0075ccd6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0075ccda: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075ccde: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0075cce2: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
L_0075cce9:; BB(0x0075cce9);
    /* 0075cce9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0075ccec: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ccee: jl 0x75cbdf */ if ((fS!=fO)) goto L_0075cbdf;
L_0075ccf4:; BB(0x0075ccf4);
    /* 0075ccf4: jmp 0x75d076 */ goto L_0075d076;
L_0075ccf9:; BB(0x0075ccf9);
    /* 0075ccf9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ccfc: jne 0x75d076 */ if (!fZ) goto L_0075d076;
L_0075cd02:; BB(0x0075cd02);
    /* 0075cd02: mov edx, dword ptr [0xa9b418] */ r_edx = R32((u32)(0xa9b418u));
    /* 0075cd08: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0075cd0b: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0075cd0f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0075cd12: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cd14: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0075cd18: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0075cd1a: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0075cd1e: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0075cd21: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0075cd25: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075cd2a: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0075cd2c: push 0x43390000 */ { u32 v = 0x43390000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075cd31: mov dword ptr [edx + 0x34], 0xc */ W32((u32)(r_edx+0x34u), 0xcu);
    /* 0075cd38: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0075cd3d: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0075cd40: mov dword ptr [ebp + 0x10], 0x42000000 */ W32((u32)(r_ebp+0x10u), 0x42000000u);
    /* 0075cd47: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0075cd4a: mov dword ptr [ebp + 0x14], 0x42000000 */ W32((u32)(r_ebp+0x14u), 0x42000000u);
    /* 0075cd51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075cd53: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x75cd58u); f_0072e7e4();
    /* 0075cd58: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0075cd5c: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 0075cd63: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075cd69: mov dword ptr [ebp + 0x18], 0x3f000000 */ W32((u32)(r_ebp+0x18u), 0x3f000000u);
    /* 0075cd70: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0075cd74: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0075cd78: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 0075cd7b: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0075cd7f: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75cd84u); f_0077d9f0();
    /* 0075cd84: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075cd88: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0075cd8c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075cd8e: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075cd91: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075cd97: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 0075cd9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075cd9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075cd9f: jle 0x75ce74 */ if ((fZ||fS!=fO)) goto L_0075ce74;
L_0075cda5:; BB(0x0075cda5);
    /* 0075cda5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0075cda9: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0075cdad: mov ebp, edx */ r_ebp = r_edx;
    /* 0075cdaf: lea ecx, [edi + 0x24] */ r_ecx = (u32)(r_edi+0x24u);
    /* 0075cdb2: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0075cdb6: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0075cdba: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0075cdbe: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
L_0075cdc2:; BB(0x0075cdc2);
    /* 0075cdc2: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cdc8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0075cdcc: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0075cdd0: fld dword ptr [0x974948] */ FPUSH(R_F32((u32)(0x974948u)));
    /* 0075cdd6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0075cdda: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0075cdde: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cde2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0075cde4: fadd dword ptr [0x974954] */ ST(0) = ST(0) + R_F32((u32)(0x974954u));
    /* 0075cdea: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0075cdee: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cdf2: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0075cdf4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075cdf6: fadd dword ptr [0x97494c] */ ST(0) = ST(0) + R_F32((u32)(0x97494cu));
    /* 0075cdfc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075cdfe: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 0075ce01: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075ce03: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0075ce06: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075ce08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ce0a: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0075ce0d: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0075ce10: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075ce12: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0075ce15: movzx ecx, byte ptr [esi + 3] */ r_ecx = (u32)R8((u32)(r_esi+0x3u));
    /* 0075ce19: mov edi, ecx */ r_edi = r_ecx;
    /* 0075ce1b: movsx edx, byte ptr [esi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0075ce1e: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0075ce21: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0075ce23: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0075ce26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ce27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ce28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ce29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ce2a: call 0x714374 */ r_esp -= 4; W32(r_esp, 0x75ce2fu); f_00714374();
    /* 0075ce2f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ce32: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0075ce36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ce37: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0075ce3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ce3c: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0075ce40: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75ce45u); f_0072a648();
    /* 0075ce45: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075ce48: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ce4b: jl 0x75ce54 */ if ((fS!=fO)) goto L_0075ce54;
L_0075ce4d:; BB(0x0075ce4d);
    /* 0075ce4d: add dword ptr [esp + 0x34], 1 */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ce52: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0075ce54:; BB(0x0075ce54);
    /* 0075ce54: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0075ce58: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075ce5b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075ce5e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ce60: jl 0x75cdc2 */ if ((fS!=fO)) goto L_0075cdc2;
L_0075ce66:; BB(0x0075ce66);
    /* 0075ce66: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075ce6a: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0075ce6e: mov edx, ebp */ r_edx = r_ebp;
    /* 0075ce70: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_0075ce74:; BB(0x0075ce74);
    /* 0075ce74: mov dword ptr [ebp + 0x34], 0xc */ W32((u32)(r_ebp+0x34u), 0xcu);
    /* 0075ce7b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075ce7d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ce80: jge 0x75d076 */ if ((fS==fO)) goto L_0075d076;
L_0075ce86:; BB(0x0075ce86);
    /* 0075ce86: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0075ce8a: mov ebp, edx */ r_ebp = r_edx;
    /* 0075ce8c: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0075ce90: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
L_0075ce94:; BB(0x0075ce94);
    /* 0075ce94: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0075ce98: movzx eax, word ptr [eax + ebp*2 + 0x30] */ r_eax = (u32)R16((u32)(r_eax+r_ebp*2+0x30u));
    /* 0075ce9d: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 0075cea0: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075cea6: je 0x75cf37 */ if (fZ) goto L_0075cf37;
L_0075ceac:; BB(0x0075ceac);
    /* 0075ceac: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075ceb2: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0075ceb6: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0075ceba: mov ecx, eax */ r_ecx = r_eax;
    /* 0075cebc: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0075cec0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cec4: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0075cec8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0075ceca: fadd dword ptr [0x974954] */ ST(0) = ST(0) + R_F32((u32)(0x974954u));
    /* 0075ced0: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0075ced3: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0075ced7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cedb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0075cedd: fadd dword ptr [0x97494c] */ ST(0) = ST(0) + R_F32((u32)(0x97494cu));
    /* 0075cee3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075cee4: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0075cee7: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0075ceea: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0075ceed: mov edx, eax */ r_edx = r_eax;
    /* 0075ceef: sar edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0075cef2: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075cef5: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0075cef8: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075cefb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cefc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cefd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cefe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ceff: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0075cf03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cf04: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0075cf08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cf09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cf0a: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0075cf0e: call 0x714198 */ r_esp -= 4; W32(r_esp, 0x75cf13u); f_00714198();
    /* 0075cf13: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075cf16: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075cf1a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0075cf1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cf1f: lea esi, [ecx + 0x24] */ r_esi = (u32)(r_ecx+0x24u);
    /* 0075cf22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cf23: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75cf28u); f_0072a648();
    /* 0075cf28: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cf2b: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075cf2e: jl 0x75cf37 */ if ((fS!=fO)) goto L_0075cf37;
L_0075cf30:; BB(0x0075cf30);
    /* 0075cf30: add dword ptr [esp + 0x34], 1 */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075cf35: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0075cf37:; BB(0x0075cf37);
    /* 0075cf37: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075cf3a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075cf3d: jl 0x75ce94 */ if ((fS!=fO)) goto L_0075ce94;
L_0075cf43:; BB(0x0075cf43);
    /* 0075cf43: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075cf47: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0075cf4b: jmp 0x75d076 */ goto L_0075d076;
L_0075cf50:; BB(0x0075cf50);
    /* 0075cf50: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0075cf53: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0075cf56: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0075cf58: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
    /* 0075cf5f: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0075cf63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0075cf65: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cf67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075cf69: jle 0x75d076 */ if ((fZ||fS!=fO)) goto L_0075d076;
L_0075cf6f:; BB(0x0075cf6f);
    /* 0075cf6f: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0075cf72: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0075cf76:; BB(0x0075cf76);
    /* 0075cf76: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cf7c: fld dword ptr [0x974964] */ FPUSH(R_F32((u32)(0x974964u)));
    /* 0075cf82: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0075cf85: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075cf87: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0075cf8b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cf8f: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0075cf91: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075cf93: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0075cf95: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 0075cf98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075cf9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075cf9b: jb 0x75cfa7 */ if (fC) goto L_0075cfa7;
L_0075cf9d:; BB(0x0075cf9d);
    /* 0075cf9d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075cf9f: fcom dword ptr [esi + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x48u))); 
    /* 0075cfa2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075cfa4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075cfa5: jbe 0x75cfb5 */ if ((fC||fZ)) goto L_0075cfb5;
L_0075cfa7:; BB(0x0075cfa7);
    /* 0075cfa7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cfa9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cfab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cfad: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cfb0: jmp 0x75d06b */ goto L_0075d06b;
L_0075cfb5:; BB(0x0075cfb5);
    /* 0075cfb5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0075cfb7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0075cfb9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0075cfbd: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0075cfc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075cfc3: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0075cfc7: mov esi, eax */ r_esi = r_eax;
    /* 0075cfc9: jmp 0x75cfd2 */ goto L_0075cfd2;
L_0075cfcb:; BB(0x0075cfcb);
    /* 0075cfcb: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
L_0075cfd2:; BB(0x0075cfd2);
    /* 0075cfd2: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075cfd4: jge 0x75d0ad */ if ((fS==fO)) goto L_0075d0ad;
L_0075cfda:; BB(0x0075cfda);
    /* 0075cfda: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cfe0: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0075cfe4: fld dword ptr [0x974948] */ FPUSH(R_F32((u32)(0x974948u)));
    /* 0075cfea: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0075cfee: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cff2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0075cff4: fadd dword ptr [0x974954] */ ST(0) = ST(0) + R_F32((u32)(0x974954u));
    /* 0075cffa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075cffc: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0075d000: fadd dword ptr [0x97494c] */ ST(0) = ST(0) + R_F32((u32)(0x97494cu));
    /* 0075d006: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075d008: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0075d00b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075d00d: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0075d010: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075d012: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075d014: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0075d017: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0075d01a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075d01c: movsx ecx, bx */ r_ecx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0075d01f: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0075d022: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0075d028: mov edx, dword ptr [edi + 0x94] */ r_edx = R32((u32)(r_edi+0x94u));
    /* 0075d02e: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d030: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0075d032: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d033: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075d034: call 0x714374 */ r_esp -= 4; W32(r_esp, 0x75d039u); f_00714374();
    /* 0075d039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075d03c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0075d040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d041: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0075d045: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d048: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75d04du); f_0072a648();
    /* 0075d04d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075d050: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075d053: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d056: jl 0x75cfcb */ if ((fS!=fO)) goto L_0075cfcb;
L_0075d05c:; BB(0x0075d05c);
    /* 0075d05c: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075d060: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075d064: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
L_0075d06b:; BB(0x0075d06b);
    /* 0075d06b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0075d06e: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075d070: jl 0x75cf76 */ if ((fS!=fO)) goto L_0075cf76;
L_0075d076:; BB(0x0075d076);
    /* 0075d076: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 0075d079: lea edx, [edi + 0x70] */ r_edx = (u32)(r_edi+0x70u);
    /* 0075d07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d07d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d07e: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x75d083u); f_0073f694();
    /* 0075d083: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d084: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d086: call 0x75d0b8 */ r_esp -= 4; W32(r_esp, 0x75d08bu); f_0075d0b8();
    /* 0075d08b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d08c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0075d08f: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x75d094u); f_00761390();
    /* 0075d094: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d097: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d099: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d09a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d09b: ret  */ FN_RET(0x0075cb6c); r_esp += 4; return;
L_0075d09c:; BB(0x0075d09c);
    /* 0075d09c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0075d0a0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075d0a4: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0075d0a8: jmp 0x75cce9 */ goto L_0075cce9;
L_0075d0ad:; BB(0x0075d0ad);
    /* 0075d0ad: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0075d0b1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075d0b5: jmp 0x75d06b */ goto L_0075d06b;
}

void f_0075cbff(void)
{
    FN_ENTER(0x0075cbff);
    goto L_0075cbff;
L_0075cbdf:; BB(0x0075cbdf);
    /* 0075cbdf: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cbe5: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cbeb: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0075cbee: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075cbf0: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0075cbf3: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0075cbf6: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0075cbf8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075cbfa: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0075cbfc: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
L_0075cbff:; BB(0x0075cbff);
    /* 0075cbff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075cc01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075cc02: jb 0x75cc16 */ if (fC) goto L_0075cc16;
L_0075cc04:; BB(0x0075cc04);
    /* 0075cc04: fld dword ptr [0x974944] */ FPUSH(R_F32((u32)(0x974944u)));
    /* 0075cc0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075cc0c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075cc0e: fcom dword ptr [esi + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x48u))); 
    /* 0075cc11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075cc13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075cc14: jbe 0x75cc24 */ if ((fC||fZ)) goto L_0075cc24;
L_0075cc16:; BB(0x0075cc16);
    /* 0075cc16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cc18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cc1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075cc1c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075cc1f: jmp 0x75cce9 */ goto L_0075cce9;
L_0075cc24:; BB(0x0075cc24);
    /* 0075cc24: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0075cc26: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0075cc28: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0075cc2c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0075cc30: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cc32: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0075cc36: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0075cc3a: jmp 0x75cc47 */ goto L_0075cc47;
L_0075cc3c:; BB(0x0075cc3c);
    /* 0075cc3c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0075cc40: movsx edx, word ptr [eax + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
L_0075cc47:; BB(0x0075cc47);
    /* 0075cc47: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075cc49: jge 0x75d09c */ if ((fS==fO)) goto L_0075d09c;
L_0075cc4f:; BB(0x0075cc4f);
    /* 0075cc4f: fld dword ptr [0x974950] */ FPUSH(R_F32((u32)(0x974950u)));
    /* 0075cc55: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0075cc59: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0075cc5d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0075cc61: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075cc65: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0075cc67: fadd dword ptr [0x974954] */ ST(0) = ST(0) + R_F32((u32)(0x974954u));
    /* 0075cc6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075cc6f: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0075cc73: fadd dword ptr [0x97494c] */ ST(0) = ST(0) + R_F32((u32)(0x97494cu));
    /* 0075cc79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075cc7b: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0075cc7e: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0075cc81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075cc83: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0075cc89: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0075cc8c: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 0075cc92: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 0075cc98: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0075cc9a: movzx esi, bp */ r_esi = (u32)(u16)r_ebp;
    /* 0075cc9d: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0075cc9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075cca0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075cca1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0075cca5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075cca6: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0075ccaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccac: call 0x714198 */ r_esp -= 4; W32(r_esp, 0x75ccb1u); f_00714198();
    /* 0075ccb1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ccb4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0075ccb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccb9: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0075ccbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ccbe: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0075ccc2: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75ccc7u); f_0072a648();
    /* 0075ccc7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075ccca: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075cccd: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ccd0: jl 0x75cc3c */ if ((fS!=fO)) goto L_0075cc3c;
L_0075ccd6:; BB(0x0075ccd6);
    /* 0075ccd6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0075ccda: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075ccde: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0075cce2: movsx edx, word ptr [edi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8au));
L_0075cce9:; BB(0x0075cce9);
    /* 0075cce9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0075ccec: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ccee: jl 0x75cbdf */ if ((fS!=fO)) goto L_0075cbdf;
L_0075ccf4:; BB(0x0075ccf4);
    /* 0075ccf4: jmp 0x75d076 */ goto L_0075d076;
L_0075d076:; BB(0x0075d076);
    /* 0075d076: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 0075d079: lea edx, [edi + 0x70] */ r_edx = (u32)(r_edi+0x70u);
    /* 0075d07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075d07d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d07e: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x75d083u); f_0073f694();
    /* 0075d083: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d084: mov ecx, edi */ r_ecx = r_edi;
    /* 0075d086: call 0x75d0b8 */ r_esp -= 4; W32(r_esp, 0x75d08bu); f_0075d0b8();
    /* 0075d08b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075d08c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0075d08f: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x75d094u); f_00761390();
    /* 0075d094: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075d097: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075d098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075d099: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075d09a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075d09b: ret  */ FN_RET(0x0075cbff); r_esp += 4; return;
L_0075d09c:; BB(0x0075d09c);
    /* 0075d09c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0075d0a0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0075d0a4: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0075d0a8: jmp 0x75cce9 */ goto L_0075cce9;
}

