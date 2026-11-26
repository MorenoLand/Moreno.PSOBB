#include "protos.h"

void f_007f65f4(void) /* sub_7F65F4 */
{
    FN_ENTER(0x007f65f4);
    /* 007f65f4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f65f7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f65ff: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6604: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6609: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007f660d: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6611: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f6614: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6616: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6617: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f661cu); f_0077fd10();
    /* 007f661c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f661f: ret  */ FN_RET(0x007f65f4); r_esp += 4; return;
}

void f_007f6620(void) /* sub_7F6620 */
{
    FN_ENTER(0x007f6620);
    /* 007f6620: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f6623: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f662b: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6630: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6635: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6639: mov byte ptr [esp + 3], 0xd */ W8((u32)(r_esp+0x3u), 0xdu);
    /* 007f663e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f6641: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6644: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6649u); f_0077fd10();
    /* 007f6649: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f664c: ret  */ FN_RET(0x007f6620); r_esp += 4; return;
}

void f_007f6650(void) /* sub_7F6650 */
{
    FN_ENTER(0x007f6650);
    /* 007f6650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f6651: mov ebp, esp */ r_ebp = r_esp;
    /* 007f6653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f6655: push 0x8f6ef0 */ { u32 v = 0x8f6ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f665a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007f6660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f6661: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007f6668: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f666b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007f666e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007f6671: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007f6674: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007f6677: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 007f667a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007f6681: push 0x808 */ { u32 v = 0x808u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6686: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6688: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x7f668du); f_008587c7();
    /* 007f668d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007f6690: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f6693: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007f6696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f6698: je 0x7f6710 */ if (fZ) goto L_007f6710;
L_007f669a:; BB(0x007f669a);
    /* 007f669a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007f66a1: mov edx, eax */ r_edx = r_eax;
    /* 007f66a3: mov byte ptr [edx + 2], 0xea */ W8((u32)(r_edx+0x2u), 0xeau);
    /* 007f66a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007f66a9: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007f66ac: mov byte ptr [edx + 3], 0xf */ W8((u32)(r_edx+0x3u), 0xfu);
    /* 007f66b0: mov eax, 0x808 */ r_eax = 0x808u;
    /* 007f66b5: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007f66b8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_007f66bb:; BB(0x007f66bb);
    /* 007f66bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007f66c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007f66c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f66c7: je 0x7f66f7 */ if (fZ) goto L_007f66f7;
L_007f66c9:; BB(0x007f66c9);
    /* 007f66c9: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007f66ce: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007f66d1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007f66d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f66d5: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7f66dau); f_0086b6b8();
    /* 007f66da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f66dd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007f66e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007f66e3: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 007f66e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f66e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f66e8: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f66edu); f_0077fd10();
    /* 007f66ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007f66f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f66f1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7f66f6u); f_00858882();
    /* 007f66f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007f66f7:; BB(0x007f66f7);
    /* 007f66f7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007f66fa: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007f66fd: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007f6700: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007f6703: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007f670a: mov esp, ebp */ r_esp = r_ebp;
    /* 007f670c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f670d: ret 4 */ FN_RET(0x007f6650); r_esp += 8; return;
L_007f6710:; BB(0x007f6710);
    /* 007f6710: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f6712: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007f6715: jmp 0x7f66bb */ goto L_007f66bb;
}

void f_007f6718(void) /* sub_7F6718 */
{
    FN_ENTER(0x007f6718);
    /* 007f6718: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f671b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f6723: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6728: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f672d: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6731: mov byte ptr [esp + 3], 0x10 */ W8((u32)(r_esp+0x3u), 0x10u);
    /* 007f6736: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f6739: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f673b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f673c: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6741u); f_0077fd10();
    /* 007f6741: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f6744: ret  */ FN_RET(0x007f6718); r_esp += 4; return;
}

void f_007f6748(void) /* sub_7F6748 */
{
    FN_ENTER(0x007f6748);
    /* 007f6748: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f674b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007f674f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007f6753: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007f6757: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f675c: mov eax, 0xc */ r_eax = 0xcu;
    /* 007f6761: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f6765: mov byte ptr [esp + 3], 0x11 */ W8((u32)(r_esp+0x3u), 0x11u);
    /* 007f676a: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f676e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f6771: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007f6773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f6774: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6779u); f_0077fd10();
    /* 007f6779: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f677c: ret 8 */ FN_RET(0x007f6748); r_esp += 12; return;
}

void f_007f6780(void) /* sub_7F6780 */
{
    FN_ENTER(0x007f6780);
    /* 007f6780: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f6783: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f678b: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6790: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6795: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6799: mov byte ptr [esp + 3], 0x13 */ W8((u32)(r_esp+0x3u), 0x13u);
    /* 007f679e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f67a1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f67a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f67a4: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f67a9u); f_0077fd10();
    /* 007f67a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f67ac: ret  */ FN_RET(0x007f6780); r_esp += 4; return;
}

void f_007f67b0(void) /* sub_7F67B0 */
{
    FN_ENTER(0x007f67b0);
    /* 007f67b0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f67b3: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f67b8: mov eax, 8 */ r_eax = 0x8u;
    /* 007f67bd: mov byte ptr [esp + 3], 0x14 */ W8((u32)(r_esp+0x3u), 0x14u);
    /* 007f67c2: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f67c6: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 007f67ce: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f67d1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f67d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f67d4: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f67d9u); f_0077fd10();
    /* 007f67d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f67dc: ret  */ FN_RET(0x007f67b0); r_esp += 4; return;
}

void f_007f67e0(void) /* sub_7F67E0 */
{
    FN_ENTER(0x007f67e0);
    /* 007f67e0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f67e3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f67eb: mov eax, 8 */ r_eax = 0x8u;
    /* 007f67f0: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f67f5: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f67f9: mov byte ptr [esp + 3], 0x18 */ W8((u32)(r_esp+0x3u), 0x18u);
    /* 007f67fe: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f6801: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6804: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6809u); f_0077fd10();
    /* 007f6809: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f680c: ret  */ FN_RET(0x007f67e0); r_esp += 4; return;
}

void f_007f6810(void) /* sub_7F6810 */
{
    FN_ENTER(0x007f6810);
    /* 007f6810: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f6813: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f681b: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6820: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6825: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6829: mov byte ptr [esp + 3], 0x19 */ W8((u32)(r_esp+0x3u), 0x19u);
    /* 007f682e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f6831: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6833: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6834: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6839u); f_0077fd10();
    /* 007f6839: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f683c: ret  */ FN_RET(0x007f6810); r_esp += 4; return;
}

void f_007f6840(void) /* sub_7F6840 */
{
    FN_ENTER(0x007f6840);
    /* 007f6840: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f6843: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f684b: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6850: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6855: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6859: mov byte ptr [esp + 3], 0x1a */ W8((u32)(r_esp+0x3u), 0x1au);
    /* 007f685e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f6861: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6863: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6864: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6869u); f_0077fd10();
    /* 007f6869: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f686c: ret  */ FN_RET(0x007f6840); r_esp += 4; return;
}

void f_007f6870(void) /* sub_7F6870 */
{
    FN_ENTER(0x007f6870);
    /* 007f6870: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f6873: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007f6877: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f687b: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6880: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6885: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6889: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f688c: mov byte ptr [esp + 3], 0x1b */ W8((u32)(r_esp+0x3u), 0x1bu);
    /* 007f6891: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f6894: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6899u); f_0077fd10();
    /* 007f6899: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f689c: ret 4 */ FN_RET(0x007f6870); r_esp += 8; return;
}

void f_007f68a0(void) /* sub_7F68A0 */
{
    FN_ENTER(0x007f68a0);
    /* 007f68a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f68a3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f68ab: mov eax, 8 */ r_eax = 0x8u;
    /* 007f68b0: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f68b5: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f68b9: mov byte ptr [esp + 3], 0x1c */ W8((u32)(r_esp+0x3u), 0x1cu);
    /* 007f68be: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f68c1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f68c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f68c4: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f68c9u); f_0077fd10();
    /* 007f68c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f68cc: ret  */ FN_RET(0x007f68a0); r_esp += 4; return;
}

void f_007f68d0(void) /* sub_7F68D0 */
{
    FN_ENTER(0x007f68d0);
    /* 007f68d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f68d1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f68d4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007f68d6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007f68da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f68dc: je 0x7f6917 */ if (fZ) goto L_007f6917;
L_007f68de:; BB(0x007f68de);
    /* 007f68de: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f68e3: mov edx, 0x28 */ r_edx = 0x28u;
    /* 007f68e8: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f68ec: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007f68f0: mov byte ptr [esp + 3], 0x1e */ W8((u32)(r_esp+0x3u), 0x1eu);
    /* 007f68f5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f68f9: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007f68fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f68fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f68ff: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x7f6904u); f_00857fed();
    /* 007f6904: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f6907: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f690b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f690e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f690f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007f6911: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6912: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6917u); f_0077fd10();
L_007f6917:; BB(0x007f6917);
    /* 007f6917: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f691a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f691b: ret 8 */ FN_RET(0x007f68d0); r_esp += 12; return;
}

void f_007f6920(void) /* sub_7F6920 */
{
    FN_ENTER(0x007f6920);
    /* 007f6920: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f6923: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007f6927: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f692b: mov eax, 8 */ r_eax = 0x8u;
    /* 007f6930: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f6935: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f6939: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f693c: mov byte ptr [esp + 3], 0x20 */ W8((u32)(r_esp+0x3u), 0x20u);
    /* 007f6941: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f6944: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f6949u); f_0077fd10();
    /* 007f6949: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f694c: ret 4 */ FN_RET(0x007f6920); r_esp += 8; return;
}

void f_007f6950(void) /* sub_7F6950 */
{
    FN_ENTER(0x007f6950);
    /* 007f6950: mov dword ptr [0xaaeca4], 0x3f800000 */ W32((u32)(0xaaeca4u), 0x3f800000u);
    /* 007f695a: mov dword ptr [0xaaeca8], 0x41000000 */ W32((u32)(0xaaeca8u), 0x41000000u);
    /* 007f6964: mov dword ptr [0xaaecac], 0x3fc00000 */ W32((u32)(0xaaecacu), 0x3fc00000u);
    /* 007f696e: ret  */ FN_RET(0x007f6950); r_esp += 4; return;
}

void f_007f6970(void)
{
    FN_ENTER(0x007f6970);
    /* 007f6970: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007f6974: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007f6977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6978: call 0x812ff8 */ r_esp -= 4; W32(r_esp, 0x7f697du); f_00812ff8();
    /* 007f697d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f697e: ret 4 */ FN_RET(0x007f6970); r_esp += 8; return;
}

void f_007f6984(void) /* sub_7F6984 */
{
    FN_ENTER(0x007f6984);
    /* 007f6984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f6985: mov ebp, esp */ r_ebp = r_esp;
    /* 007f6987: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f698a: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 007f698d: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 007f6990: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 007f6993: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007f6996: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f6997: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6999: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f699b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f699d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f699f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7f69a5u); call_ind(t); }
    /* 007f69a5: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f69a6: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f69a7: jmp 0x7f9bc8 */ goto L_007f9bc8;
L_007f9bc8:; BB(0x007f9bc8);
    /* 007f9bc8: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f9bc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f9bcc: mov byte ptr [ebp - 0x16], 0xd4 */ W8((u32)(r_ebp+0xffffffeau), 0xd4u);
    /* 007f9bd0: mov esi, 8 */ r_esi = 0x8u;
    /* 007f9bd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f9bd7: mov word ptr [ebp - 0x18], si */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_esi);
    /* 007f9bdb: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 007f9bde: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007f9be1: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 007f9be4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f9be5: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7f9beau); f_007c4fb4();
    /* 007f9bea: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f9beb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f9bed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f9bef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f9bf1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f9bf3: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7f9bf9u); call_ind(t); }
    /* 007f9bf9: jmp 0x7f9c19 */ goto L_007f9c19;
L_007f9c19:; BB(0x007f9c19);
    /* 007f9c19: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f9c1a: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007f9c1d: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007f9c20: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007f9c23: mov esp, ebp */ r_esp = r_ebp;
    /* 007f9c25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f9c26: ret  */ FN_RET(0x007f6984); r_esp += 4; return;
}

