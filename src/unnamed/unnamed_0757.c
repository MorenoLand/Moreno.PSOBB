#include "protos.h"

void f_007570f4(void) /* sub_7570F4 */
{
    FN_ENTER(0x007570f4);
    /* 007570f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007570f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007570f6: mov edi, ecx */ r_edi = r_ecx;
    /* 007570f8: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 007570fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00757100: jle 0x75711b */ if ((fZ||fS!=fO)) goto L_0075711b;
L_00757102:; BB(0x00757102);
    /* 00757102: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00757104: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x757109u); f_0073ec50();
    /* 00757109: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075710c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075710e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075710f: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x757114u); f_007354fc();
    /* 00757114: mov ebx, eax */ r_ebx = r_eax;
    /* 00757116: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757119: jmp 0x75713c */ goto L_0075713c;
L_0075711b:; BB(0x0075711b);
    /* 0075711b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0075711d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x757122u); f_0073ec50();
    /* 00757122: mov ebx, eax */ r_ebx = r_eax;
    /* 00757124: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00757126: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75712bu); f_0079317c();
    /* 0075712b: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075712e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075712f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00757131: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757132: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x757137u); f_0073566c();
    /* 00757137: mov ebx, eax */ r_ebx = r_eax;
    /* 00757139: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0075713c:; BB(0x0075713c);
    /* 0075713c: push 0x132 */ { u32 v = 0x132u; r_esp -= 4; W32(r_esp, v); }
    /* 00757141: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757146u); f_0079317c();
    /* 00757146: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757147: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757149: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0075714b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075714d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075714e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x757153u); f_00735c90();
    /* 00757153: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 00757158: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75715du); f_0079317c();
    /* 0075715d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075715e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757160: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00757162: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00757164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757165: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75716au); f_00735c90();
    /* 0075716a: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 0075716f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757174u); f_0079317c();
    /* 00757174: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757175: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00757177: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00757179: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075717b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075717c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x757181u); f_00735c90();
    /* 00757181: push 0x434a0000 */ { u32 v = 0x434a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00757186: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075718d: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757193: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 0075719a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075719c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7571a1u); f_00736138();
    /* 007571a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007571a3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7571a8u); f_00736458();
    /* 007571a8: mov eax, ebx */ r_eax = r_ebx;
    /* 007571aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007571ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007571ac: ret  */ FN_RET(0x007570f4); r_esp += 4; return;
}

void f_007571b0(void) /* sub_7571B0 */
{
    FN_ENTER(0x007571b0);
    /* 007571b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007571b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007571b3: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007571b6: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7571bbu); f_00719140();
    /* 007571bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007571bc: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 007571bf: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007571c6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007571c8: je 0x7571d5 */ if (fZ) goto L_007571d5;
L_007571ca:; BB(0x007571ca);
    /* 007571ca: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 007571cd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007571cf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x7571d2u); call_ind(t); }
    /* 007571d2: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
L_007571d5:; BB(0x007571d5);
    /* 007571d5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7571dau); f_007365f4();
    /* 007571da: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007571dd: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007571e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007571e1: call 0x757794 */ r_esp -= 4; W32(r_esp, 0x7571e6u); f_00757794();
    /* 007571e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007571e7: ret  */ FN_RET(0x007571b0); r_esp += 4; return;
}

void f_007571e8(void) /* sub_7571E8 */
{
    FN_ENTER(0x007571e8);
    /* 007571e8: mov dword ptr [0xa9acc4], 0x3f800000 */ W32((u32)(0xa9acc4u), 0x3f800000u);
    /* 007571f2: mov dword ptr [0xa9acc8], 0x41000000 */ W32((u32)(0xa9acc8u), 0x41000000u);
    /* 007571fc: mov dword ptr [0xa9accc], 0x3fc00000 */ W32((u32)(0xa9acccu), 0x3fc00000u);
    /* 00757206: ret  */ FN_RET(0x007571e8); r_esp += 4; return;
}

void f_00757208(void) /* sub_757208 */
{
    FN_ENTER(0x00757208);
    /* 00757208: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757209: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075720b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075720d: call 0x75722c */ r_esp -= 4; W32(r_esp, 0x757212u); f_0075722c();
    /* 00757212: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00757216: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00757218: jne 0x75721e */ if (!fZ) goto L_0075721e;
L_0075721a:; BB(0x0075721a);
    /* 0075721a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075721b: ret 4 */ FN_RET(0x00757208); r_esp += 8; return;
L_0075721e:; BB(0x0075721e);
    /* 0075721e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075721f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x757224u); f_005c2f74();
    /* 00757224: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757225: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757226: ret 4 */ FN_RET(0x00757208); r_esp += 8; return;
}

void f_0075722c(void) /* sub_75722C */
{
    FN_ENTER(0x0075722c);
    /* 0075722c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075722d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075722f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00757231: push 0x8f3060 */ { u32 v = 0x8f3060u; r_esp -= 4; W32(r_esp, v); }
    /* 00757236: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075723c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075723d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00757244: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00757247: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075724a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075724d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00757250: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00757253: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00757256: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075725d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00757260: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00757263: mov dword ptr [eax], 0xb428c0 */ W32((u32)(r_eax), 0xb428c0u);
    /* 00757269: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075726b: je 0x757277 */ if (fZ) goto L_00757277;
L_0075726d:; BB(0x0075726d);
    /* 0075726d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075726f: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x757274u); f_00721474();
    /* 00757274: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00757277:; BB(0x00757277);
    /* 00757277: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075727e: mov ecx, eax */ r_ecx = r_eax;
    /* 00757280: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x757285u); f_00710c28();
    /* 00757285: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00757288: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075728f: mov esp, ebp */ r_esp = r_ebp;
    /* 00757291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757292: ret  */ FN_RET(0x0075722c); r_esp += 4; return;
}

void f_00757294(void) /* sub_757294 */
{
    FN_ENTER(0x00757294);
    /* 00757294: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00757295: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757296: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757297: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757298: mov edi, ecx */ r_edi = r_ecx;
    /* 0075729a: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0075729e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075729f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7572a4u); f_0068d5a8();
    /* 007572a4: mov ebx, eax */ r_ebx = r_eax;
    /* 007572a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007572a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007572ab: je 0x7572f7 */ if (fZ) goto L_007572f7;
L_007572ad:; BB(0x007572ad);
    /* 007572ad: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 007572b3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007572b5: je 0x7572f7 */ if (fZ) goto L_007572f7;
L_007572b7:; BB(0x007572b7);
    /* 007572b7: mov esi, dword ptr [edi + 0x28] */ r_esi = R32((u32)(r_edi+0x28u));
    /* 007572ba: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 007572bd: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007572bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007572c1: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x7572c4u); call_ind(t); }
    /* 007572c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007572c7: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007572ca: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007572cd: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 007572d0: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 007572d3: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 007572d6: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007572d9: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 007572dc: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 007572df: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 007572e2: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 007572e5: mov esi, dword ptr [edi + 0x30] */ r_esi = R32((u32)(r_edi+0x30u));
    /* 007572e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007572ea: call 0x6947a4 */ r_esp -= 4; W32(r_esp, 0x7572efu); f_006947a4();
    /* 007572ef: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 007572f2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007572f4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
L_007572f7:; BB(0x007572f7);
    /* 007572f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007572f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007572f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007572fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007572fb: ret  */ FN_RET(0x00757294); r_esp += 4; return;
}

void f_007572fc(void) /* sub_7572FC */
{
    FN_ENTER(0x007572fc);
    /* 007572fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007572fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007572fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007572ff: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00757302: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00757304: movsx edx, word ptr [ebp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00757308: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075730a: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0075730f: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00757314: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00757319: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0075731e: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00757323: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00757327: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 0075732c: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00757331: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00757336: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0075733b: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00757340: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 00757345: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 0075734a: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 0075734f: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 00757354: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00757359: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 0075735e: mov word ptr [esp + 0x2c], ax */ W16((u32)(r_esp+0x2cu), (u16)r_eax);
    /* 00757363: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 00757368: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 0075736d: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 00757372: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 00757377: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757378: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75737du); f_0068d5a8();
    /* 0075737d: mov ebx, eax */ r_ebx = r_eax;
    /* 0075737f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757382: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757384: je 0x757401 */ if (fZ) goto L_00757401;
L_00757386:; BB(0x00757386);
    /* 00757386: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00757389: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0075738c: movsx esi, word ptr [ebx + 0x2cc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 00757393: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00757399: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0075739c: movsx eax, word ptr [ebx + 0x2ce] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ceu));
    /* 007573a3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007573a5: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007573a7: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 007573aa: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007573ad: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 007573b0: movsx edx, word ptr [ebx + 0x2d2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2d2u));
    /* 007573b7: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 007573ba: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007573bd: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 007573c0: movsx edx, word ptr [ebx + 0x2d4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2d4u));
    /* 007573c7: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 007573ca: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007573cd: mov esi, dword ptr [edx + 0x68] */ r_esi = R32((u32)(r_edx+0x68u));
    /* 007573d0: movsx edx, word ptr [ebx + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2d0u));
    /* 007573d7: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 007573da: mov edx, dword ptr [ebx + 0x2b4] */ r_edx = R32((u32)(r_ebx+0x2b4u));
    /* 007573e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007573e2: je 0x757401 */ if (fZ) goto L_00757401;
L_007573e4:; BB(0x007573e4);
    /* 007573e4: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 007573e7: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 007573ea: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 007573ee: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 007573f1: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 007573f4: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 007573fa: movsx edx, word ptr [edx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 007573fe: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
L_00757401:; BB(0x00757401);
    /* 00757401: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00757404: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757405: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00757407: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x75740cu); f_00695340();
    /* 0075740c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075740e: je 0x757507 */ if (fZ) goto L_00757507;
L_00757414:; BB(0x00757414);
    /* 00757414: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00757418: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757419: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075741a: call 0x693620 */ r_esp -= 4; W32(r_esp, 0x75741fu); f_00693620();
    /* 0075741f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757422: movsx edx, word ptr [esp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 00757426: cmp dx, word ptr [esp + 0x18] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0075742b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075742e: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00757431: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00757434: jl 0x75743f */ if ((fS!=fO)) goto L_0075743f;
L_00757436:; BB(0x00757436);
    /* 00757436: mov dword ptr [eax + 0x1c], 0xffffff00 */ W32((u32)(r_eax+0x1cu), 0xffffff00u);
    /* 0075743d: jmp 0x757446 */ goto L_00757446;
L_0075743f:; BB(0x0075743f);
    /* 0075743f: mov dword ptr [eax + 0x1c], 0xffffffff */ W32((u32)(r_eax+0x1cu), 0xffffffffu);
L_00757446:; BB(0x00757446);
    /* 00757446: movsx edx, word ptr [esp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x2u));
    /* 0075744b: cmp dx, word ptr [esp + 0x1a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x1au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00757450: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00757453: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00757456: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00757459: jl 0x757464 */ if ((fS!=fO)) goto L_00757464;
L_0075745b:; BB(0x0075745b);
    /* 0075745b: mov dword ptr [eax + 0x1c], 0xffffff00 */ W32((u32)(r_eax+0x1cu), 0xffffff00u);
    /* 00757462: jmp 0x75746b */ goto L_0075746b;
L_00757464:; BB(0x00757464);
    /* 00757464: mov dword ptr [eax + 0x1c], 0xffffffff */ W32((u32)(r_eax+0x1cu), 0xffffffffu);
L_0075746b:; BB(0x0075746b);
    /* 0075746b: movsx edx, word ptr [esp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00757470: cmp dx, word ptr [esp + 0x1e] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x1eu)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00757475: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00757478: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 0075747b: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0075747e: jl 0x757489 */ if ((fS!=fO)) goto L_00757489;
L_00757480:; BB(0x00757480);
    /* 00757480: mov dword ptr [eax + 0x1c], 0xffffff00 */ W32((u32)(r_eax+0x1cu), 0xffffff00u);
    /* 00757487: jmp 0x757490 */ goto L_00757490;
L_00757489:; BB(0x00757489);
    /* 00757489: mov dword ptr [eax + 0x1c], 0xffffffff */ W32((u32)(r_eax+0x1cu), 0xffffffffu);
L_00757490:; BB(0x00757490);
    /* 00757490: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00757495: cmp dx, word ptr [esp + 0x20] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0075749a: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075749d: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 007574a0: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 007574a3: jl 0x7574ae */ if ((fS!=fO)) goto L_007574ae;
L_007574a5:; BB(0x007574a5);
    /* 007574a5: mov dword ptr [eax + 0x1c], 0xffffff00 */ W32((u32)(r_eax+0x1cu), 0xffffff00u);
    /* 007574ac: jmp 0x7574b5 */ goto L_007574b5;
L_007574ae:; BB(0x007574ae);
    /* 007574ae: mov dword ptr [eax + 0x1c], 0xffffffff */ W32((u32)(r_eax+0x1cu), 0xffffffffu);
L_007574b5:; BB(0x007574b5);
    /* 007574b5: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 007574ba: cmp dx, word ptr [esp + 0x1c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 007574bf: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007574c2: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007574c5: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 007574c8: jl 0x7574d3 */ if ((fS!=fO)) goto L_007574d3;
L_007574ca:; BB(0x007574ca);
    /* 007574ca: mov dword ptr [eax + 0x1c], 0xffffff00 */ W32((u32)(r_eax+0x1cu), 0xffffff00u);
    /* 007574d1: jmp 0x7574da */ goto L_007574da;
L_007574d3:; BB(0x007574d3);
    /* 007574d3: mov dword ptr [eax + 0x1c], 0xffffffff */ W32((u32)(r_eax+0x1cu), 0xffffffffu);
L_007574da:; BB(0x007574da);
    /* 007574da: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 007574df: cmp dx, word ptr [esp + 0x22] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x22u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 007574e4: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007574e7: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 007574ed: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 007574f0: jl 0x757500 */ if ((fS!=fO)) goto L_00757500;
L_007574f2:; BB(0x007574f2);
    /* 007574f2: mov dword ptr [eax + 0x1c], 0xffffff00 */ W32((u32)(r_eax+0x1cu), 0xffffff00u);
    /* 007574f9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007574fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007574fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007574fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007574ff: ret  */ FN_RET(0x007572fc); r_esp += 4; return;
L_00757500:; BB(0x00757500);
    /* 00757500: mov dword ptr [eax + 0x1c], 0xffffffff */ W32((u32)(r_eax+0x1cu), 0xffffffffu);
L_00757507:; BB(0x00757507);
    /* 00757507: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075750a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075750b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075750c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075750d: ret  */ FN_RET(0x007572fc); r_esp += 4; return;
}

void f_00757510(void) /* sub_757510 */
{
    FN_ENTER(0x00757510);
    /* 00757510: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757511: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00757513: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00757517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757518: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75751du); f_0068d5a8();
    /* 0075751d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075751e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00757520: je 0x757572 */ if (fZ) goto L_00757572;
L_00757522:; BB(0x00757522);
    /* 00757522: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00757525: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00757528: movsx edx, word ptr [eax + 0x2f6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2f6u));
    /* 0075752f: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00757532: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00757535: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00757538: movsx edx, word ptr [eax + 0x2fa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2fau));
    /* 0075753f: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00757542: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00757545: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00757548: movsx edx, word ptr [eax + 0x2f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2f8u));
    /* 0075754f: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00757552: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00757555: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00757558: movsx edx, word ptr [eax + 0x2fc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2fcu));
    /* 0075755f: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00757562: mov ebx, dword ptr [ebx + 0x28] */ r_ebx = R32((u32)(r_ebx+0x28u));
    /* 00757565: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 00757568: movsx eax, word ptr [eax + 0x2fe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2feu));
    /* 0075756f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
L_00757572:; BB(0x00757572);
    /* 00757572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757573: ret  */ FN_RET(0x00757510); r_esp += 4; return;
}

void f_00757574(void) /* sub_757574 */
{
    FN_ENTER(0x00757574);
    /* 00757574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757575: mov ebp, esp */ r_ebp = r_esp;
    /* 00757577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00757579: push 0x8f3096 */ { u32 v = 0x8f3096u; r_esp -= 4; W32(r_esp, v); }
    /* 0075757e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00757584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075758c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075758f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00757592: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00757595: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00757598: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075759b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0075759e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007575a1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007575a4: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 007575a6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7575abu); f_0073ec50();
    /* 007575ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007575ac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007575af: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007575b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007575b3: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 007575b6: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007575b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007575ba: push 0x9f55a4 */ { u32 v = 0x9f55a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007575bf: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7575c4u); f_00710d30();
    /* 007575c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007575cb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007575ce: mov edx, ebx */ r_edx = r_ebx;
    /* 007575d0: mov dword ptr [ecx], 0xb428c0 */ W32((u32)(r_ecx), 0xb428c0u);
    /* 007575d6: mov eax, dword ptr [0x9f55a0] */ r_eax = R32((u32)(0x9f55a0u));
    /* 007575db: mov dword ptr [ecx + 0x6c], 0x3f800000 */ W32((u32)(r_ecx+0x6cu), 0x3f800000u);
    /* 007575e2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007575e5: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 007575e9: mov dword ptr [ecx + 0x70], 0x3f800000 */ W32((u32)(r_ecx+0x70u), 0x3f800000u);
    /* 007575f0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007575f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007575f4: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 007575f7: mov word ptr [ecx + 0x60], bx */ W16((u32)(r_ecx+0x60u), (u16)r_ebx);
    /* 007575fb: mov word ptr [ecx + 0x62], bx */ W16((u32)(r_ecx+0x62u), (u16)r_ebx);
    /* 007575ff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x757604u); f_008581c5();
    /* 00757604: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757605: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00757608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075760a: je 0x75765c */ if (fZ) goto L_0075765c;
L_0075760c:; BB(0x0075760c);
    /* 0075760c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00757613: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0075761a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075761d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00757620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757621: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00757623: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757625: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x75762au); f_0073e5d4();
    /* 0075762a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075762d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00757634:; BB(0x00757634);
    /* 00757634: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00757637: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0075763a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00757641: call 0x758280 */ r_esp -= 4; W32(r_esp, 0x757646u); f_00758280();
    /* 00757646: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00757649: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075764c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075764f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00757656: mov esp, ebp */ r_esp = r_ebp;
    /* 00757658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757659: ret 4 */ FN_RET(0x00757574); r_esp += 8; return;
L_0075765c:; BB(0x0075765c);
    /* 0075765c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075765e: jmp 0x757634 */ goto L_00757634;
}

void f_00757660(void) /* sub_757660 */
{
    FN_ENTER(0x00757660);
    /* 00757660: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757661: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757662: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00757664: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00757667: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00757669: jne 0x757672 */ if (!fZ) goto L_00757672;
L_0075766b:; BB(0x0075766b);
    /* 0075766b: mov dword ptr [ebp + 0x5c], 0x1000000 */ W32((u32)(r_ebp+0x5cu), 0x1000000u);
L_00757672:; BB(0x00757672);
    /* 00757672: lea eax, [ebp + 0x6c] */ r_eax = (u32)(r_ebp+0x6cu);
    /* 00757675: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757676: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00757678: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x75767du); f_00712658();
    /* 0075767d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075767e: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 00757681: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x757686u); f_0073e60c();
    /* 00757686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757688: jne 0x75769b */ if (!fZ) goto L_0075769b;
L_0075768a:; BB(0x0075768a);
    /* 0075768a: movsx eax, word ptr [ebp + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 0075768e: movsx edx, word ptr [ebp + 0x62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x62u));
    /* 00757692: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757694: jne 0x7576a3 */ if (!fZ) goto L_007576a3;
L_00757696:; BB(0x00757696);
    /* 00757696: lea esi, [ebp + 0x24] */ r_esi = (u32)(r_ebp+0x24u);
    /* 00757699: jmp 0x7576cc */ goto L_007576cc;
L_0075769b:; BB(0x0075769b);
    /* 0075769b: movsx eax, word ptr [ebp + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 0075769f: movsx edx, word ptr [ebp + 0x62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x62u));
L_007576a3:; BB(0x007576a3);
    /* 007576a3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007576a5: je 0x7576bb */ if (fZ) goto L_007576bb;
L_007576a7:; BB(0x007576a7);
    /* 007576a7: movsx eax, byte ptr [edx + 0x974134] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x974134u));
    /* 007576ae: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 007576b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007576b2: mov word ptr [ebp + 0x60], dx */ W16((u32)(r_ebp+0x60u), (u16)r_edx);
    /* 007576b6: call 0x73e984 */ r_esp -= 4; W32(r_esp, 0x7576bbu); f_0073e984();
L_007576bb:; BB(0x007576bb);
    /* 007576bb: lea esi, [ebp + 0x24] */ r_esi = (u32)(r_ebp+0x24u);
    /* 007576be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007576bf: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x7576c4u); f_0072a590();
    /* 007576c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007576c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007576c7: call 0x758280 */ r_esp -= 4; W32(r_esp, 0x7576ccu); f_00758280();
L_007576cc:; BB(0x007576cc);
    /* 007576cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007576ce: call 0x7576e8 */ r_esp -= 4; W32(r_esp, 0x7576d3u); f_007576e8();
    /* 007576d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007576d5: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7576dau); f_00710db4();
    /* 007576da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007576db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007576dd: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7576e2u); f_0072a5ec();
    /* 007576e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007576e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007576e4: ret  */ FN_RET(0x00757660); r_esp += 4; return;
}

void f_007576e8(void) /* sub_7576E8 */
{
    FN_ENTER(0x007576e8);
    /* 007576e8: movsx eax, word ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x60u));
    /* 007576ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007576ee: je 0x757716 */ if (fZ) goto L_00757716;
L_007576f0:; BB(0x007576f0);
    /* 007576f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007576f3: jne 0x757703 */ if (!fZ) goto L_00757703;
L_007576f5:; BB(0x007576f5);
    /* 007576f5: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 007576f8: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 007576fb: call dword ptr [edx*4 + 0x9f46dc] */ { u32 t = R32((u32)(r_edx*4+0x9f46dcu)); r_esp -= 4; W32(r_esp, 0x757702u); call_ind(t); }
    /* 00757702: ret  */ FN_RET(0x007576e8); r_esp += 4; return;
L_00757703:; BB(0x00757703);
    /* 00757703: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00757706: jne 0x757723 */ if (!fZ) goto L_00757723;
L_00757708:; BB(0x00757708);
    /* 00757708: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0075770b: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0075770e: call dword ptr [edx*4 + 0x9f46ec] */ { u32 t = R32((u32)(r_edx*4+0x9f46ecu)); r_esp -= 4; W32(r_esp, 0x757715u); call_ind(t); }
    /* 00757715: ret  */ FN_RET(0x007576e8); r_esp += 4; return;
L_00757716:; BB(0x00757716);
    /* 00757716: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00757719: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0075771c: call dword ptr [edx*4 + 0x9f46c0] */ { u32 t = R32((u32)(r_edx*4+0x9f46c0u)); r_esp -= 4; W32(r_esp, 0x757723u); call_ind(t); }
L_00757723:; BB(0x00757723);
    /* 00757723: ret  */ FN_RET(0x007576e8); r_esp += 4; return;
}

void f_00757724(void) /* sub_757724 */
{
    FN_ENTER(0x00757724);
    /* 00757724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757725: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757726: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00757728: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0075772c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075772d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x757732u); f_0068d5a8();
    /* 00757732: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00757735: je 0x757791 */ if (fZ) goto L_00757791;
L_00757737:; BB(0x00757737);
    /* 00757737: mov edx, dword ptr [eax + 0xdf0] */ r_edx = R32((u32)(r_eax+0xdf0u));
    /* 0075773d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075773f: jne 0x757791 */ if (!fZ) goto L_00757791;
L_00757741:; BB(0x00757741);
    /* 00757741: movsx edx, word ptr [ebx + 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00757745: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757747: jne 0x757767 */ if (!fZ) goto L_00757767;
L_00757749:; BB(0x00757749);
    /* 00757749: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 0075774c: movsx ebp, byte ptr [edx] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0075774f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757751: jne 0x757767 */ if (!fZ) goto L_00757767;
L_00757753:; BB(0x00757753);
    /* 00757753: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00757756: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 00757759: lea ebp, [ebx + 0x64] */ r_ebp = (u32)(r_ebx+0x64u);
    /* 0075775c: mov dword ptr [edx + 0x30], ebp */ W32((u32)(r_edx+0x30u), r_ebp);
    /* 0075775f: add eax, 0xde8 */ {  u32 a = r_eax; u32 b = 0xde8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00757764: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
L_00757767:; BB(0x00757767);
    /* 00757767: lea eax, [ebx + 0x6c] */ r_eax = (u32)(r_ebx+0x6cu);
    /* 0075776a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075776b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075776d: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x757772u); f_00712658();
    /* 00757772: mov ebp, eax */ r_ebp = r_eax;
    /* 00757774: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757775: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00757777: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x75777cu); f_00710f80();
    /* 0075777c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075777d: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00757780: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757781: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00757783: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x757788u); f_0072a648();
    /* 00757788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757789: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0075778c: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x757791u); f_0073e6b4();
L_00757791:; BB(0x00757791);
    /* 00757791: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757792: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757793: ret  */ FN_RET(0x00757724); r_esp += 4; return;
}

void f_00757794(void) /* sub_757794 */
{
    FN_ENTER(0x00757794);
    /* 00757794: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00757799: mov word ptr [ecx + 0x62], ax */ W16((u32)(r_ecx+0x62u), (u16)r_eax);
    /* 0075779d: ret 4 */ FN_RET(0x00757794); r_esp += 8; return;
}

void f_007577a0(void) /* sub_7577A0 */
{
    FN_ENTER(0x007577a0);
    /* 007577a0: mov dword ptr [0xa9acd4], 0x3f800000 */ W32((u32)(0xa9acd4u), 0x3f800000u);
    /* 007577aa: mov dword ptr [0xa9acd8], 0x41000000 */ W32((u32)(0xa9acd8u), 0x41000000u);
    /* 007577b4: mov dword ptr [0xa9acdc], 0x3fc00000 */ W32((u32)(0xa9acdcu), 0x3fc00000u);
    /* 007577be: ret  */ FN_RET(0x007577a0); r_esp += 4; return;
}

void f_007577c0(void) /* sub_7577C0 */
{
    FN_ENTER(0x007577c0);
    /* 007577c0: movsx eax, word ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x60u));
    /* 007577c4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007577c7: je 0x7577da */ if (fZ) goto L_007577da;
L_007577c9:; BB(0x007577c9);
    /* 007577c9: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 007577cc: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 007577cf: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007577d2: je 0x7577e0 */ if (fZ) goto L_007577e0;
L_007577d4:; BB(0x007577d4);
    /* 007577d4: mov eax, 1 */ r_eax = 0x1u;
    /* 007577d9: ret  */ FN_RET(0x007577c0); r_esp += 4; return;
L_007577da:; BB(0x007577da);
    /* 007577da: mov eax, 2 */ r_eax = 0x2u;
    /* 007577df: ret  */ FN_RET(0x007577c0); r_esp += 4; return;
L_007577e0:; BB(0x007577e0);
    /* 007577e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007577e2: ret  */ FN_RET(0x007577c0); r_esp += 4; return;
}

void f_007577e4(void) /* sub_7577E4 */
{
    FN_ENTER(0x007577e4);
    /* 007577e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007577e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007577e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007577e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007577e8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007577eb: mov esi, ecx */ r_esi = r_ecx;
    /* 007577ed: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 007577f0: fcomp dword ptr [0x97415c] */ fx_compare(ST(0), R_F32((u32)(0x97415cu))); FPOP();
    /* 007577f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007577f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007577f9: jbe 0x757802 */ if ((fC||fZ)) goto L_00757802;
L_007577fb:; BB(0x007577fb);
    /* 007577fb: mov dword ptr [esi + 0x5c], 7 */ W32((u32)(r_esi+0x5cu), 0x7u);
L_00757802:; BB(0x00757802);
    /* 00757802: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 00757806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757807: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0075780a: push 0x9f5480 */ { u32 v = 0x9f5480u; r_esp -= 4; W32(r_esp, v); }
    /* 0075780f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757810: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x757815u); f_0072a68c();
    /* 00757815: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757818: mov ecx, esi */ r_ecx = r_esi;
    /* 0075781a: call 0x7577c0 */ r_esp -= 4; W32(r_esp, 0x75781fu); f_007577c0();
    /* 0075781f: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00757822: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00757824: mov edi, eax */ r_edi = r_eax;
    /* 00757826: push dword ptr [edi*4 + 0x974138] */ { u32 v = R32((u32)(r_edi*4+0x974138u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075782d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757832u); f_0079317c();
    /* 00757832: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757833: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757836: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00757838: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75783du); f_0072db60();
    /* 0075783d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075783e: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x757843u); f_004da158();
    /* 00757843: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757844: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00757848: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0075784b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0075784d:; BB(0x0075784d);
    /* 0075784d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00757851: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00757854: mov edi, dword ptr [edi + ebx*4 + 4] */ r_edi = R32((u32)(r_edi+r_ebx*4+0x4u));
    /* 00757858: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075785a: jg 0x75786e */ if ((!fZ&&fS==fO)) goto L_0075786e;
L_0075785c:; BB(0x0075785c);
    /* 0075785c: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757860: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757865: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757869: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075786c: jmp 0x757896 */ goto L_00757896;
L_0075786e:; BB(0x0075786e);
    /* 0075786e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00757871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757872: movzx edx, word ptr [esi + 0x20] */ r_edx = (u32)R16((u32)(r_esi+0x20u));
    /* 00757876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757877: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757878: call 0x4da42c */ r_esp -= 4; W32(r_esp, 0x75787du); f_004da42c();
    /* 0075787d: mov ebp, eax */ r_ebp = r_eax;
    /* 0075787f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757882: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757884: jne 0x7578a3 */ if (!fZ) goto L_007578a3;
L_00757886:; BB(0x00757886);
    /* 00757886: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0075788a: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075788f: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757893: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00757896:; BB(0x00757896);
    /* 00757896: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00757899: jl 0x75784d */ if ((fS!=fO)) goto L_0075784d;
L_0075789b:; BB(0x0075789b);
    /* 0075789b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075789e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075789f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007578a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007578a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007578a2: ret  */ FN_RET(0x007577e4); r_esp += 4; return;
L_007578a3:; BB(0x007578a3);
    /* 007578a3: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007578a7: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007578ad: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 007578b1: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x7578b6u); f_00816d30();
    /* 007578b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007578b8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007578bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007578bc: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x7578c1u); f_00816684();
    /* 007578c1: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 007578c6: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7578cbu); f_00816cb8();
    /* 007578cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007578cc: call 0x8169ec */ r_esp -= 4; W32(r_esp, 0x7578d1u); f_008169ec();
    /* 007578d1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007578d4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007578d6: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007578db: mov ecx, edi */ r_ecx = r_edi;
    /* 007578dd: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7578e2u); f_0072db60();
    /* 007578e2: jmp 0x757896 */ goto L_00757896;
}

void f_007578e4(void) /* sub_7578E4 */
{
    FN_ENTER(0x007578e4);
    /* 007578e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007578e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007578e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007578e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007578e8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007578eb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007578ed: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 007578f0: fcomp dword ptr [0x974158] */ fx_compare(ST(0), R_F32((u32)(0x974158u))); FPOP();
    /* 007578f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007578f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007578f9: jbe 0x757902 */ if ((fC||fZ)) goto L_00757902;
L_007578fb:; BB(0x007578fb);
    /* 007578fb: mov dword ptr [ebp + 0x5c], 7 */ W32((u32)(r_ebp+0x5cu), 0x7u);
L_00757902:; BB(0x00757902);
    /* 00757902: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00757906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757907: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 0075790a: push 0x9f52a0 */ { u32 v = 0x9f52a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075790f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757910: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x757915u); f_0072a68c();
    /* 00757915: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757918: movsx eax, word ptr [ebp + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 0075791c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075791f: je 0x757d2c */ if (fZ) goto L_00757d2c;
L_00757925:; BB(0x00757925);
    /* 00757925: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00757927:; BB(0x00757927);
    /* 00757927: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075792a: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0075792c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075792e: jne 0x757947 */ if (!fZ) goto L_00757947;
L_00757930:; BB(0x00757930);
    /* 00757930: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 00757935: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75793au); f_0079317c();
    /* 0075793a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075793b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075793d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075793e: mov ecx, esi */ r_ecx = r_esi;
    /* 00757940: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757945u); f_0072db60();
    /* 00757945: jmp 0x75795c */ goto L_0075795c;
L_00757947:; BB(0x00757947);
    /* 00757947: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0075794c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757951u); f_0079317c();
    /* 00757951: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757952: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757955: mov ecx, esi */ r_ecx = r_esi;
    /* 00757957: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75795cu); f_0072db60();
L_0075795c:; BB(0x0075795c);
    /* 0075795c: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075795f: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00757962: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00757965: movzx edx, word ptr [ebp + 0x20] */ r_edx = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757969: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0075796c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075796d: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00757970: call 0x4da5f0 */ r_esp -= 4; W32(r_esp, 0x757975u); f_004da5f0();
    /* 00757975: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00757979: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075797c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075797e: jne 0x7579e9 */ if (!fZ) goto L_007579e9;
L_00757980:; BB(0x00757980);
    /* 00757980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757982: je 0x7579e9 */ if (fZ) goto L_007579e9;
L_00757984:; BB(0x00757984);
    /* 00757984: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00757987: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757989: je 0x7579e9 */ if (fZ) goto L_007579e9;
L_0075798b:; BB(0x0075798b);
    /* 0075798b: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0075798f: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00757994: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757998: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0075799b: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 007579a0: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007579a4: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007579aa: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 007579ae: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007579b2: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007579b7: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 007579bb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7579c0u); f_0079317c();
    /* 007579c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007579c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007579c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007579c4: mov ecx, edi */ r_ecx = r_edi;
    /* 007579c6: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7579cbu); f_0072db60();
    /* 007579cb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007579cd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007579d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007579d2: mov ecx, esi */ r_ecx = r_esi;
    /* 007579d4: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7579d9u); f_0072db60();
    /* 007579d9: movzx eax, word ptr [ebp + 0x20] */ r_eax = (u32)R16((u32)(r_ebp+0x20u));
    /* 007579dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007579de: call 0x4da640 */ r_esp -= 4; W32(r_esp, 0x7579e3u); f_004da640();
    /* 007579e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007579e4: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 007579e7: jmp 0x757a14 */ goto L_00757a14;
L_007579e9:; BB(0x007579e9);
    /* 007579e9: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007579ed: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007579f2: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 007579f6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007579f9: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007579fd: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757a03: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757a07: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00757a0b: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757a10: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
L_00757a14:; BB(0x00757a14);
    /* 00757a14: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00757a17: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00757a1a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00757a1d: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00757a20: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00757a23: movzx eax, word ptr [ebp + 0x20] */ r_eax = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757a27: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00757a2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757a2d: call 0x4da5bc */ r_esp -= 4; W32(r_esp, 0x757a32u); f_004da5bc();
    /* 00757a32: mov esi, eax */ r_esi = r_eax;
    /* 00757a34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757a37: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757a39: jne 0x757a6d */ if (!fZ) goto L_00757a6d;
L_00757a3b:; BB(0x00757a3b);
    /* 00757a3b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00757a3e: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757a42: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757a47: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757a4b: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757a4f: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757a55: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00757a59: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00757a5d: movzx edi, word ptr [eax + 4] */ r_edi = (u32)R16((u32)(r_eax+0x4u));
    /* 00757a61: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00757a67: mov word ptr [eax + 4], di */ W16((u32)(r_eax+0x4u), (u16)r_edi);
    /* 00757a6b: jmp 0x757ae0 */ goto L_00757ae0;
L_00757a6d:; BB(0x00757a6d);
    /* 00757a6d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00757a70: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757a74: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757a7a: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757a7e: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757a82: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757a88: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757a8c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00757a90: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757a94: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757a9a: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757a9e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757aa0: jne 0x757ab9 */ if (!fZ) goto L_00757ab9;
L_00757aa2:; BB(0x00757aa2);
    /* 00757aa2: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757aa7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757aacu); f_0079317c();
    /* 00757aac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757aaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ab0: mov ecx, edi */ r_ecx = r_edi;
    /* 00757ab2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ab7u); f_0072db60();
    /* 00757ab7: jmp 0x757ace */ goto L_00757ace;
L_00757ab9:; BB(0x00757ab9);
    /* 00757ab9: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 00757abe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757ac3u); f_0079317c();
    /* 00757ac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757ac4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ac7: mov ecx, edi */ r_ecx = r_edi;
    /* 00757ac9: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757aceu); f_0072db60();
L_00757ace:; BB(0x00757ace);
    /* 00757ace: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ad0: push dword ptr [esi*4 + 0x9f46f8] */ { u32 v = R32((u32)(r_esi*4+0x9f46f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00757ad7: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00757adb: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ae0u); f_0072db60();
L_00757ae0:; BB(0x00757ae0);
    /* 00757ae0: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00757ae3: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00757ae6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00757ae9: movzx esi, word ptr [ebp + 0x20] */ r_esi = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757aed: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00757af1: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00757af4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00757af7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757af8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757af9: call 0x4da47c */ r_esp -= 4; W32(r_esp, 0x757afeu); f_004da47c();
    /* 00757afe: mov esi, eax */ r_esi = r_eax;
    /* 00757b00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757b03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757b05: jne 0x757b3b */ if (!fZ) goto L_00757b3b;
L_00757b07:; BB(0x00757b07);
    /* 00757b07: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00757b0b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00757b0e: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00757b12: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757b17: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00757b1b: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757b1f: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00757b25: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00757b29: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757b2d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757b32: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757b36: jmp 0x757bba */ goto L_00757bba;
L_00757b3b:; BB(0x00757b3b);
    /* 00757b3b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00757b3f: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757b43: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757b49: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757b4d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00757b50: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757b54: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757b5a: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757b5e: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757b62: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757b68: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757b6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757b6e: jne 0x757b89 */ if (!fZ) goto L_00757b89;
L_00757b70:; BB(0x00757b70);
    /* 00757b70: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 00757b75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757b7au); f_0079317c();
    /* 00757b7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757b7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757b7e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00757b82: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757b87u); f_0072db60();
    /* 00757b87: jmp 0x757ba0 */ goto L_00757ba0;
L_00757b89:; BB(0x00757b89);
    /* 00757b89: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757b8e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757b93u); f_0079317c();
    /* 00757b93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757b94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757b96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757b97: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00757b9b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ba0u); f_0072db60();
L_00757ba0:; BB(0x00757ba0);
    /* 00757ba0: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x757ba5u); f_00816d30();
    /* 00757ba5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757ba6: call 0x8169ec */ r_esp -= 4; W32(r_esp, 0x757babu); f_008169ec();
    /* 00757bab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757bac: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00757bae: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00757bb3: mov ecx, edi */ r_ecx = r_edi;
    /* 00757bb5: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757bbau); f_0072db60();
L_00757bba:; BB(0x00757bba);
    /* 00757bba: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00757bbd: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00757bc0: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 00757bc3: movzx edx, word ptr [ebp + 0x20] */ r_edx = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757bc7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00757bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757bcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757bcd: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 00757bd0: call 0x4da5bc */ r_esp -= 4; W32(r_esp, 0x757bd5u); f_004da5bc();
    /* 00757bd5: mov ebx, eax */ r_ebx = r_eax;
    /* 00757bd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757bda: movsx edx, word ptr [ebp + 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 00757bde: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757be1: je 0x757be7 */ if (fZ) goto L_00757be7;
L_00757be3:; BB(0x00757be3);
    /* 00757be3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757be5: jne 0x757c15 */ if (!fZ) goto L_00757c15;
L_00757be7:; BB(0x00757be7);
    /* 00757be7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00757bea: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757bee: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757bf3: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757bf7: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00757bfb: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757c01: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 00757c05: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 00757c09: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00757c0f: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 00757c13: jmp 0x757c67 */ goto L_00757c67;
L_00757c15:; BB(0x00757c15);
    /* 00757c15: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00757c18: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c1d: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757c21: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757c27: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757c2b: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757c2f: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757c35: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757c39: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757c3d: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757c43: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00757c47: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757c4cu); f_0079317c();
    /* 00757c4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757c4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757c50: mov ecx, edi */ r_ecx = r_edi;
    /* 00757c52: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757c57u); f_0072db60();
    /* 00757c57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c59: push dword ptr [ebx*4 + 0x9f46f8] */ { u32 v = R32((u32)(r_ebx*4+0x9f46f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00757c60: mov ecx, esi */ r_ecx = r_esi;
    /* 00757c62: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757c67u); f_0072db60();
L_00757c67:; BB(0x00757c67);
    /* 00757c67: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00757c6a: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 00757c6d: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 00757c70: movzx edx, word ptr [ebp + 0x20] */ r_edx = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757c74: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00757c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757c7a: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 00757c7d: call 0x4da47c */ r_esp -= 4; W32(r_esp, 0x757c82u); f_004da47c();
    /* 00757c82: mov ebx, eax */ r_ebx = r_eax;
    /* 00757c84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757c87: movsx edx, word ptr [ebp + 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 00757c8b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757c8e: je 0x757c94 */ if (fZ) goto L_00757c94;
L_00757c90:; BB(0x00757c90);
    /* 00757c90: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757c92: jne 0x757cc8 */ if (!fZ) goto L_00757cc8;
L_00757c94:; BB(0x00757c94);
    /* 00757c94: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00757c97: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757c9b: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757ca0: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757ca4: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00757ca8: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757cae: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00757cb2: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757cb6: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00757cbc: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00757cc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00757cc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757cc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00757cc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00757cc7: ret  */ FN_RET(0x007578e4); r_esp += 4; return;
L_00757cc8:; BB(0x00757cc8);
    /* 00757cc8: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757ccc: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757cd2: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757cd6: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00757cd9: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00757cde: movzx ebp, word ptr [edx + 4] */ r_ebp = (u32)R16((u32)(r_edx+0x4u));
    /* 00757ce2: and ebp, 0xfffd */ {  u32 a = r_ebp; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00757ce8: mov word ptr [edx + 4], bp */ W16((u32)(r_edx+0x4u), (u16)r_ebp);
    /* 00757cec: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757cf0: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757cf6: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00757cfa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757cffu); f_0079317c();
    /* 00757cff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757d00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757d03: mov ecx, edi */ r_ecx = r_edi;
    /* 00757d05: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757d0au); f_0072db60();
    /* 00757d0a: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x757d0fu); f_00816d30();
    /* 00757d0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757d10: call 0x8169ec */ r_esp -= 4; W32(r_esp, 0x757d15u); f_008169ec();
    /* 00757d15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757d16: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d18: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d1d: mov ecx, esi */ r_ecx = r_esi;
    /* 00757d1f: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757d24u); f_0072db60();
    /* 00757d24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00757d27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757d28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757d29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00757d2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00757d2b: ret  */ FN_RET(0x007578e4); r_esp += 4; return;
L_00757d2c:; BB(0x00757d2c);
    /* 00757d2c: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00757d31: jmp 0x757927 */ goto L_00757927;
}

void f_00757a90(void)
{
    FN_ENTER(0x00757a90);
    /* 00757a90: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757a94: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757a9a: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757a9e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757aa0: jne 0x757ab9 */ if (!fZ) goto L_00757ab9;
L_00757aa2:; BB(0x00757aa2);
    /* 00757aa2: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757aa7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757aacu); f_0079317c();
    /* 00757aac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757aaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ab0: mov ecx, edi */ r_ecx = r_edi;
    /* 00757ab2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ab7u); f_0072db60();
    /* 00757ab7: jmp 0x757ace */ goto L_00757ace;
L_00757ab9:; BB(0x00757ab9);
    /* 00757ab9: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 00757abe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757ac3u); f_0079317c();
    /* 00757ac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757ac4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ac7: mov ecx, edi */ r_ecx = r_edi;
    /* 00757ac9: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757aceu); f_0072db60();
L_00757ace:; BB(0x00757ace);
    /* 00757ace: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ad0: push dword ptr [esi*4 + 0x9f46f8] */ { u32 v = R32((u32)(r_esi*4+0x9f46f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00757ad7: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00757adb: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ae0u); f_0072db60();
    /* 00757ae0: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00757ae3: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00757ae6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00757ae9: movzx esi, word ptr [ebp + 0x20] */ r_esi = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757aed: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00757af1: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00757af4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00757af7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757af8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757af9: call 0x4da47c */ r_esp -= 4; W32(r_esp, 0x757afeu); f_004da47c();
    /* 00757afe: mov esi, eax */ r_esi = r_eax;
    /* 00757b00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757b03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757b05: jne 0x757b3b */ if (!fZ) goto L_00757b3b;
L_00757b07:; BB(0x00757b07);
    /* 00757b07: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00757b0b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00757b0e: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00757b12: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757b17: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00757b1b: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757b1f: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00757b25: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00757b29: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757b2d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757b32: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757b36: jmp 0x757bba */ goto L_00757bba;
L_00757b3b:; BB(0x00757b3b);
    /* 00757b3b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00757b3f: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757b43: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757b49: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757b4d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00757b50: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757b54: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757b5a: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757b5e: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757b62: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757b68: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757b6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757b6e: jne 0x757b89 */ if (!fZ) goto L_00757b89;
L_00757b70:; BB(0x00757b70);
    /* 00757b70: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 00757b75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757b7au); f_0079317c();
    /* 00757b7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757b7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757b7e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00757b82: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757b87u); f_0072db60();
    /* 00757b87: jmp 0x757ba0 */ goto L_00757ba0;
L_00757b89:; BB(0x00757b89);
    /* 00757b89: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757b8e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757b93u); f_0079317c();
    /* 00757b93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757b94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757b96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757b97: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00757b9b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ba0u); f_0072db60();
L_00757ba0:; BB(0x00757ba0);
    /* 00757ba0: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x757ba5u); f_00816d30();
    /* 00757ba5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757ba6: call 0x8169ec */ r_esp -= 4; W32(r_esp, 0x757babu); f_008169ec();
    /* 00757bab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757bac: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00757bae: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00757bb3: mov ecx, edi */ r_ecx = r_edi;
    /* 00757bb5: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757bbau); f_0072db60();
L_00757bba:; BB(0x00757bba);
    /* 00757bba: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00757bbd: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00757bc0: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 00757bc3: movzx edx, word ptr [ebp + 0x20] */ r_edx = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757bc7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00757bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757bcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757bcd: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 00757bd0: call 0x4da5bc */ r_esp -= 4; W32(r_esp, 0x757bd5u); f_004da5bc();
    /* 00757bd5: mov ebx, eax */ r_ebx = r_eax;
    /* 00757bd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757bda: movsx edx, word ptr [ebp + 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 00757bde: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757be1: je 0x757be7 */ if (fZ) goto L_00757be7;
L_00757be3:; BB(0x00757be3);
    /* 00757be3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757be5: jne 0x757c15 */ if (!fZ) goto L_00757c15;
L_00757be7:; BB(0x00757be7);
    /* 00757be7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00757bea: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757bee: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757bf3: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757bf7: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00757bfb: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757c01: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 00757c05: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 00757c09: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00757c0f: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 00757c13: jmp 0x757c67 */ goto L_00757c67;
L_00757c15:; BB(0x00757c15);
    /* 00757c15: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00757c18: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c1d: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757c21: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757c27: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757c2b: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00757c2f: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757c35: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00757c39: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757c3d: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757c43: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00757c47: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757c4cu); f_0079317c();
    /* 00757c4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757c4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757c50: mov ecx, edi */ r_ecx = r_edi;
    /* 00757c52: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757c57u); f_0072db60();
    /* 00757c57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c59: push dword ptr [ebx*4 + 0x9f46f8] */ { u32 v = R32((u32)(r_ebx*4+0x9f46f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00757c60: mov ecx, esi */ r_ecx = r_esi;
    /* 00757c62: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757c67u); f_0072db60();
L_00757c67:; BB(0x00757c67);
    /* 00757c67: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00757c6a: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 00757c6d: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 00757c70: movzx edx, word ptr [ebp + 0x20] */ r_edx = (u32)R16((u32)(r_ebp+0x20u));
    /* 00757c74: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00757c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00757c79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757c7a: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 00757c7d: call 0x4da47c */ r_esp -= 4; W32(r_esp, 0x757c82u); f_004da47c();
    /* 00757c82: mov ebx, eax */ r_ebx = r_eax;
    /* 00757c84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757c87: movsx edx, word ptr [ebp + 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x60u));
    /* 00757c8b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757c8e: je 0x757c94 */ if (fZ) goto L_00757c94;
L_00757c90:; BB(0x00757c90);
    /* 00757c90: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757c92: jne 0x757cc8 */ if (!fZ) goto L_00757cc8;
L_00757c94:; BB(0x00757c94);
    /* 00757c94: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00757c97: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00757c9b: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757ca0: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00757ca4: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00757ca8: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00757cae: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00757cb2: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757cb6: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00757cbc: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00757cc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00757cc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757cc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00757cc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00757cc7: ret  */ FN_RET(0x00757a90); r_esp += 4; return;
L_00757cc8:; BB(0x00757cc8);
    /* 00757cc8: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00757ccc: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757cd2: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00757cd6: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00757cd9: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00757cde: movzx ebp, word ptr [edx + 4] */ r_ebp = (u32)R16((u32)(r_edx+0x4u));
    /* 00757ce2: and ebp, 0xfffd */ {  u32 a = r_ebp; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00757ce8: mov word ptr [edx + 4], bp */ W16((u32)(r_edx+0x4u), (u16)r_ebp);
    /* 00757cec: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00757cf0: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00757cf6: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00757cfa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757cffu); f_0079317c();
    /* 00757cff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757d00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757d03: mov ecx, edi */ r_ecx = r_edi;
    /* 00757d05: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757d0au); f_0072db60();
    /* 00757d0a: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x757d0fu); f_00816d30();
    /* 00757d0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757d10: call 0x8169ec */ r_esp -= 4; W32(r_esp, 0x757d15u); f_008169ec();
    /* 00757d15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00757d16: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d18: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d1d: mov ecx, esi */ r_ecx = r_esi;
    /* 00757d1f: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757d24u); f_0072db60();
    /* 00757d24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00757d27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757d28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00757d29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00757d2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00757d2b: ret  */ FN_RET(0x00757a90); r_esp += 4; return;
}

void f_00757d38(void) /* sub_757D38 */
{
    FN_ENTER(0x00757d38);
    /* 00757d38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00757d39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757d3a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00757d3c: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 00757d3f: fcomp dword ptr [0x974154] */ fx_compare(ST(0), R_F32((u32)(0x974154u))); FPOP();
    /* 00757d45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00757d47: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00757d48: jbe 0x757d51 */ if ((fC||fZ)) goto L_00757d51;
L_00757d4a:; BB(0x00757d4a);
    /* 00757d4a: mov dword ptr [ebx + 0x5c], 7 */ W32((u32)(r_ebx+0x5cu), 0x7u);
L_00757d51:; BB(0x00757d51);
    /* 00757d51: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00757d55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757d56: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00757d59: push 0x9f50c0 */ { u32 v = 0x9f50c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757d5f: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x757d64u); f_0072a68c();
    /* 00757d64: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d69: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757d6c: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00757d6e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757d73u); f_0079317c();
    /* 00757d73: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757d76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757d79: mov ecx, edi */ r_ecx = r_edi;
    /* 00757d7b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757d80u); f_0072db60();
    /* 00757d80: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d82: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d84: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757d87: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00757d8a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757d8fu); f_00792fe8();
    /* 00757d8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757d92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757d95: mov ecx, edi */ r_ecx = r_edi;
    /* 00757d97: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757d9cu); f_0072db60();
    /* 00757d9c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00757d9e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757da0: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757da3: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00757da6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757dabu); f_00792fe8();
    /* 00757dab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757dae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757db1: mov ecx, edi */ r_ecx = r_edi;
    /* 00757db3: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757db8u); f_0072db60();
    /* 00757db8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00757dba: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757dbc: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757dbf: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00757dc2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757dc7u); f_00792fe8();
    /* 00757dc7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757dca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757dcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00757dcf: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757dd4u); f_0072db60();
    /* 00757dd4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00757dd6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757dd8: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757ddb: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00757dde: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757de3u); f_00792fe8();
    /* 00757de3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757de6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757de9: mov ecx, edi */ r_ecx = r_edi;
    /* 00757deb: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757df0u); f_0072db60();
    /* 00757df0: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757df3: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00757df6: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00757dfa: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757dff: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00757e03: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757e06: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00757e09: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00757e0d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00757e12: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00757e16: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757e19: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00757e1c: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757e21: call 0x6c43a8 */ r_esp -= 4; W32(r_esp, 0x757e26u); f_006c43a8();
    /* 00757e26: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757e29: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757e2c: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757e2f: mov edi, dword ptr [edi + 0x18] */ r_edi = R32((u32)(r_edi+0x18u));
    /* 00757e32: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757e36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757e37: call 0x6c43bc */ r_esp -= 4; W32(r_esp, 0x757e3cu); f_006c43bc();
    /* 00757e3c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757e3f: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757e42: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757e45: mov edi, dword ptr [edi + 0x24] */ r_edi = R32((u32)(r_edi+0x24u));
    /* 00757e48: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757e4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757e4d: call 0x6c43d0 */ r_esp -= 4; W32(r_esp, 0x757e52u); f_006c43d0();
    /* 00757e52: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757e55: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757e58: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757e5b: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00757e5e: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757e62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757e63: call 0x6c43e4 */ r_esp -= 4; W32(r_esp, 0x757e68u); f_006c43e4();
    /* 00757e68: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757e6b: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757e6e: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00757e71: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00757e74: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00757e78: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00757e7e: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 00757e82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00757e85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757e86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00757e87: ret  */ FN_RET(0x00757d38); r_esp += 4; return;
}

void f_00757e88(void) /* sub_757E88 */
{
    FN_ENTER(0x00757e88);
    /* 00757e88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00757e89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00757e8a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00757e8c: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 00757e8f: fcomp dword ptr [0x974150] */ fx_compare(ST(0), R_F32((u32)(0x974150u))); FPOP();
    /* 00757e95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00757e97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00757e98: jbe 0x757ea1 */ if ((fC||fZ)) goto L_00757ea1;
L_00757e9a:; BB(0x00757e9a);
    /* 00757e9a: mov dword ptr [ebx + 0x5c], 7 */ W32((u32)(r_ebx+0x5cu), 0x7u);
L_00757ea1:; BB(0x00757ea1);
    /* 00757ea1: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00757ea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ea6: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00757ea9: push 0x9f50c0 */ { u32 v = 0x9f50c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757eae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757eaf: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x757eb4u); f_0072a68c();
    /* 00757eb4: push 0xa7 */ { u32 v = 0xa7u; r_esp -= 4; W32(r_esp, v); }
    /* 00757eb9: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757ebc: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00757ebe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x757ec3u); f_0079317c();
    /* 00757ec3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757ec6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ec9: mov ecx, edi */ r_ecx = r_edi;
    /* 00757ecb: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757ed0u); f_0072db60();
    /* 00757ed0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ed2: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ed4: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757ed7: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00757eda: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757edfu); f_00792fe8();
    /* 00757edf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757ee2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ee5: mov ecx, edi */ r_ecx = r_edi;
    /* 00757ee7: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757eecu); f_0072db60();
    /* 00757eec: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00757eee: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757ef0: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757ef3: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00757ef6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757efbu); f_00792fe8();
    /* 00757efb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757efe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757f01: mov ecx, edi */ r_ecx = r_edi;
    /* 00757f03: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757f08u); f_0072db60();
    /* 00757f08: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f0a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f0c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757f0f: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00757f12: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757f17u); f_00792fe8();
    /* 00757f17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757f1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757f1d: mov ecx, edi */ r_ecx = r_edi;
    /* 00757f1f: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757f24u); f_0072db60();
    /* 00757f24: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f26: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f28: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757f2b: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00757f2e: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757f33u); f_00792fe8();
    /* 00757f33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757f36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757f39: mov ecx, edi */ r_ecx = r_edi;
    /* 00757f3b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757f40u); f_0072db60();
    /* 00757f40: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00757f42: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f44: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757f47: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 00757f4a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x757f4fu); f_00792fe8();
    /* 00757f4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757f52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00757f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757f55: mov ecx, edi */ r_ecx = r_edi;
    /* 00757f57: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x757f5cu); f_0072db60();
    /* 00757f5c: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757f5f: mov edi, dword ptr [edi + 0xc] */ r_edi = R32((u32)(r_edi+0xcu));
    /* 00757f62: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757f67: call 0x6c4344 */ r_esp -= 4; W32(r_esp, 0x757f6cu); f_006c4344();
    /* 00757f6c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757f6f: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757f72: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757f75: mov edi, dword ptr [edi + 0x18] */ r_edi = R32((u32)(r_edi+0x18u));
    /* 00757f78: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757f7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757f7d: call 0x6c4358 */ r_esp -= 4; W32(r_esp, 0x757f82u); f_006c4358();
    /* 00757f82: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757f85: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757f88: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757f8b: mov edi, dword ptr [edi + 0x24] */ r_edi = R32((u32)(r_edi+0x24u));
    /* 00757f8e: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757f92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757f93: call 0x6c436c */ r_esp -= 4; W32(r_esp, 0x757f98u); f_006c436c();
    /* 00757f98: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757f9b: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757f9e: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00757fa1: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00757fa4: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757fa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757fa9: call 0x6c4380 */ r_esp -= 4; W32(r_esp, 0x757faeu); f_006c4380();
    /* 00757fae: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00757fb1: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00757fb4: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 00757fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757fb9: call 0x6c4394 */ r_esp -= 4; W32(r_esp, 0x757fbeu); f_006c4394();
    /* 00757fbe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00757fc1: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 00757fc4: call 0x6afae4 */ r_esp -= 4; W32(r_esp, 0x757fc9u); f_006afae4();
    /* 00757fc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00757fcb: je 0x757fd0 */ if (fZ) goto L_00757fd0;
L_00757fcd:; BB(0x00757fcd);
    /* 00757fcd: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00757fd0:; BB(0x00757fd0);
    /* 00757fd0: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00757fd3: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00757fd6: mov dword ptr [edx + 0x20], edi */ W32((u32)(r_edx+0x20u), r_edi);
    /* 00757fd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00757fda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00757fdb: ret  */ FN_RET(0x00757e88); r_esp += 4; return;
}

void f_00757fdc(void) /* sub_757FDC */
{
    FN_ENTER(0x00757fdc);
    /* 00757fdc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00757fdd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00757fde: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00757fe0: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 00757fe3: fcomp dword ptr [0x97414c] */ fx_compare(ST(0), R_F32((u32)(0x97414cu))); FPOP();
    /* 00757fe9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00757feb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00757fec: jbe 0x757ff5 */ if ((fC||fZ)) goto L_00757ff5;
L_00757fee:; BB(0x00757fee);
    /* 00757fee: mov dword ptr [ebp + 0x5c], 7 */ W32((u32)(r_ebp+0x5cu), 0x7u);
L_00757ff5:; BB(0x00757ff5);
    /* 00757ff5: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00757ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757ffa: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 00757ffd: push 0x9f4d60 */ { u32 v = 0x9f4d60u; r_esp -= 4; W32(r_esp, v); }
    /* 00758002: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00758003: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x758008u); f_0072a68c();
    /* 00758008: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075800d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00758010: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00758012: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758017u); f_0079317c();
    /* 00758017: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075801a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075801c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075801d: mov ecx, esi */ r_ecx = r_esi;
    /* 0075801f: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758024u); f_0072db60();
    /* 00758024: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 00758029: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075802c: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0075802f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758034u); f_0079317c();
    /* 00758034: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758035: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00758037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758038: mov ecx, esi */ r_ecx = r_esi;
    /* 0075803a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75803fu); f_0072db60();
    /* 0075803f: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00758044: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00758047: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0075804a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75804fu); f_0079317c();
    /* 0075804f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758050: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00758052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758053: mov ecx, esi */ r_ecx = r_esi;
    /* 00758055: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75805au); f_0072db60();
    /* 0075805a: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075805f: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00758062: mov esi, dword ptr [eax + 0x48] */ r_esi = R32((u32)(r_eax+0x48u));
    /* 00758065: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75806au); f_0079317c();
    /* 0075806a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075806b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075806d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075806e: mov ecx, esi */ r_ecx = r_esi;
    /* 00758070: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758075u); f_0072db60();
    /* 00758075: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075807a: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075807d: mov ebp, dword ptr [eax + 0x60] */ r_ebp = R32((u32)(r_eax+0x60u));
    /* 00758080: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758085u); f_0079317c();
    /* 00758085: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758086: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00758088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758089: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075808b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758090u); f_0072db60();
    /* 00758090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758091: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00758092: ret  */ FN_RET(0x00757fdc); r_esp += 4; return;
}

