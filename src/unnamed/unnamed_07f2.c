#include "protos.h"

void f_007f264c(void) /* sub_7F264C */
{
    FN_ENTER(0x007f264c);
    /* 007f264c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f264d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f264e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f264f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007f2653: movsx eax, byte ptr [0xa46b95] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa46b95u));
    /* 007f265a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f265b: mov dword ptr [ecx + 0x12130], 1 */ W32((u32)(r_ecx+0x12130u), 0x1u);
    /* 007f2665: call 0x6c1a80 */ r_esp -= 4; W32(r_esp, 0x7f266au); f_006c1a80();
    /* 007f266a: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f266f: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7f2674u); f_006c1bcc();
    /* 007f2674: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f2677: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 007f267a: mov edi, eax */ r_edi = r_eax;
    /* 007f267c: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007f2681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2682: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f2685: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f2687: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2688: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f268b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f268d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2692: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7f2697u); f_006c1bd4();
    /* 007f2697: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2698: lea esi, [ebx + 0x4e4] */ r_esi = (u32)(r_ebx+0x4e4u);
    /* 007f269e: mov edi, eax */ r_edi = r_eax;
    /* 007f26a0: mov ecx, 0x29c8 */ r_ecx = 0x29c8u;
    /* 007f26a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f26a6: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f26a9: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f26ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f26ac: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f26af: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f26b1: mov edi, dword ptr [0xa95df0] */ r_edi = R32((u32)(0xa95df0u));
    /* 007f26b7: lea esi, [ebx + 0x2eac] */ r_esi = (u32)(r_ebx+0x2eacu);
    /* 007f26bd: mov ecx, 0xaf0 */ r_ecx = 0xaf0u;
    /* 007f26c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f26c3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f26c6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f26c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f26c9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f26cc: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f26ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f26cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f26d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f26d1: ret 4 */ FN_RET(0x007f264c); r_esp += 8; return;
}

void f_007f26d4(void) /* sub_7F26D4 */
{
    FN_ENTER(0x007f26d4);
    /* 007f26d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f26d5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f26d8: mov esi, ecx */ r_esi = r_ecx;
    /* 007f26da: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f26df: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7f26e4u); f_006c1bd4();
    /* 007f26e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f26e5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007f26e8: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f26f0: mov edx, 0xc */ r_edx = 0xcu;
    /* 007f26f5: mov ecx, esi */ r_ecx = r_esi;
    /* 007f26f7: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f26fc: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f2700: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007f2704: mov byte ptr [esp + 3], 1 */ W8((u32)(r_esp+0x3u), 0x1u);
    /* 007f2709: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f270c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007f270e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f270f: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2714u); f_0077fd10();
    /* 007f2714: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2717: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f2718: ret  */ FN_RET(0x007f26d4); r_esp += 4; return;
}

void f_007f271c(void) /* sub_7F271C */
{
    FN_ENTER(0x007f271c);
    /* 007f271c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f271d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f271e: sub esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2724: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007f2726: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f272b: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7f2730u); f_006c1bd4();
    /* 007f2730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2731: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f2739: mov edx, 0x4e8 */ r_edx = 0x4e8u;
    /* 007f273e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2740: add eax, 0x15f0 */ {  u32 a = r_eax; u32 b = 0x15f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007f2745: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f274a: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f274e: mov byte ptr [esp + 3], 2 */ W8((u32)(r_esp+0x3u), 0x2u);
L_007f2753:; BB(0x007f2753);
    /* 007f2753: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007f2757: lea edx, [edi + ecx] */ r_edx = (u32)(r_edi+r_ecx);
    /* 007f275a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007f275c: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 007f275e: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007f2761: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 007f2764: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 007f2767: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 007f276a: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 007f276d: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 007f2770: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 007f2773: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 007f2776: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 007f2779: mov dword ptr [edx + 0x14], edi */ W32((u32)(r_edx+0x14u), r_edi);
    /* 007f277c: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 007f277f: mov dword ptr [edx + 0x18], edi */ W32((u32)(r_edx+0x18u), r_edi);
    /* 007f2782: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 007f2785: mov dword ptr [edx + 0x1c], edi */ W32((u32)(r_edx+0x1cu), r_edi);
    /* 007f2788: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 007f278b: mov dword ptr [edx + 0x20], edi */ W32((u32)(r_edx+0x20u), r_edi);
    /* 007f278e: mov edi, dword ptr [eax + 0x24] */ r_edi = R32((u32)(r_eax+0x24u));
    /* 007f2791: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 007f2794: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 007f2797: mov dword ptr [edx + 0x28], edi */ W32((u32)(r_edx+0x28u), r_edi);
    /* 007f279a: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 007f279d: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 007f27a0: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 007f27a3: mov dword ptr [edx + 0x30], edi */ W32((u32)(r_edx+0x30u), r_edi);
    /* 007f27a6: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 007f27a9: mov dword ptr [edx + 0x34], edi */ W32((u32)(r_edx+0x34u), r_edi);
    /* 007f27ac: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 007f27af: mov dword ptr [edx + 0x38], edi */ W32((u32)(r_edx+0x38u), r_edi);
    /* 007f27b2: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 007f27b5: mov dword ptr [edx + 0x3c], edi */ W32((u32)(r_edx+0x3cu), r_edi);
    /* 007f27b8: mov edi, dword ptr [eax + 0x40] */ r_edi = R32((u32)(r_eax+0x40u));
    /* 007f27bb: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 007f27be: mov edi, dword ptr [eax + 0x44] */ r_edi = R32((u32)(r_eax+0x44u));
    /* 007f27c1: mov dword ptr [edx + 0x44], edi */ W32((u32)(r_edx+0x44u), r_edi);
    /* 007f27c4: mov edi, dword ptr [eax + 0x48] */ r_edi = R32((u32)(r_eax+0x48u));
    /* 007f27c7: mov dword ptr [edx + 0x48], edi */ W32((u32)(r_edx+0x48u), r_edi);
    /* 007f27ca: mov edi, dword ptr [eax + 0x4c] */ r_edi = R32((u32)(r_eax+0x4cu));
    /* 007f27cd: mov dword ptr [edx + 0x4c], edi */ W32((u32)(r_edx+0x4cu), r_edi);
    /* 007f27d0: mov edi, dword ptr [eax + 0x50] */ r_edi = R32((u32)(r_eax+0x50u));
    /* 007f27d3: mov dword ptr [edx + 0x50], edi */ W32((u32)(r_edx+0x50u), r_edi);
    /* 007f27d6: mov edi, dword ptr [eax + 0x54] */ r_edi = R32((u32)(r_eax+0x54u));
    /* 007f27d9: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 007f27dc: mov edi, dword ptr [eax + 0x58] */ r_edi = R32((u32)(r_eax+0x58u));
    /* 007f27df: mov dword ptr [edx + 0x58], edi */ W32((u32)(r_edx+0x58u), r_edi);
    /* 007f27e2: mov edi, dword ptr [eax + 0x5c] */ r_edi = R32((u32)(r_eax+0x5cu));
    /* 007f27e5: mov dword ptr [edx + 0x5c], edi */ W32((u32)(r_edx+0x5cu), r_edi);
    /* 007f27e8: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 007f27eb: mov dword ptr [edx + 0x60], edi */ W32((u32)(r_edx+0x60u), r_edi);
    /* 007f27ee: mov edi, dword ptr [eax + 0x64] */ r_edi = R32((u32)(r_eax+0x64u));
    /* 007f27f1: mov dword ptr [edx + 0x64], edi */ W32((u32)(r_edx+0x64u), r_edi);
    /* 007f27f4: add ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007f27f7: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007f27fa: cmp ecx, 0x4e0 */ {  u32 a = r_ecx; u32 b = 0x4e0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007f2800: jl 0x7f2753 */ if ((fS!=fO)) goto L_007f2753;
L_007f2806:; BB(0x007f2806);
    /* 007f2806: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f280a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f280d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f280e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007f2810: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2811: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2816u); f_0077fd10();
    /* 007f2816: add esp, 0x4e8 */ {  u32 a = r_esp; u32 b = 0x4e8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f281c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f281d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f281e: ret  */ FN_RET(0x007f271c); r_esp += 4; return;
}

void f_007f2820(void) /* sub_7F2820 */
{
    FN_ENTER(0x007f2820);
    /* 007f2820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2821: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2822: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f2823: sub esp, 0xa48 */ {  u32 a = r_esp; u32 b = 0xa48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2829: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007f282b: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2830: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7f2835u); f_006c1bd4();
    /* 007f2835: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2836: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f283e: mov edx, 0xa48 */ r_edx = 0xa48u;
    /* 007f2843: add eax, 0x1ad0 */ {  u32 a = r_eax; u32 b = 0x1ad0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007f2848: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f284d: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f2851: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007f2853: mov byte ptr [esp + 3], 3 */ W8((u32)(r_esp+0x3u), 0x3u);
L_007f2858:; BB(0x007f2858);
    /* 007f2858: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007f285c: lea edi, [ecx + edx] */ r_edi = (u32)(r_ecx+r_edx);
    /* 007f285f: mov esi, eax */ r_esi = r_eax;
    /* 007f2861: mov ecx, 0xa4 */ r_ecx = 0xa4u;
    /* 007f2866: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2867: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f286a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f286c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f286d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2870: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f2872: add edx, 0xa4 */ {  u32 a = r_edx; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007f2878: add eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007f287d: cmp edx, 0xa40 */ {  u32 a = r_edx; u32 b = 0xa40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007f2883: jl 0x7f2858 */ if ((fS!=fO)) goto L_007f2858;
L_007f2885:; BB(0x007f2885);
    /* 007f2885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f2889: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f288c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f288d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007f288f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2890: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2895u); f_0077fd10();
    /* 007f2895: add esp, 0xa48 */ {  u32 a = r_esp; u32 b = 0xa48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f289b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f289c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f289d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f289e: ret  */ FN_RET(0x007f2820); r_esp += 4; return;
}

void f_007f28a0(void) /* sub_7F28A0 */
{
    FN_ENTER(0x007f28a0);
    /* 007f28a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f28a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f28a2: sub esp, 0x174 */ {  u32 a = r_esp; u32 b = 0x174u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f28a8: mov eax, ecx */ r_eax = r_ecx;
    /* 007f28aa: mov esi, dword ptr [0xa95df0] */ r_esi = R32((u32)(0xa95df0u));
    /* 007f28b0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f28b8: mov edx, 0x174 */ r_edx = 0x174u;
    /* 007f28bd: add esi, 0x114 */ {  u32 a = r_esi; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007f28c3: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f28c7: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f28cc: mov byte ptr [esp + 3], 4 */ W8((u32)(r_esp+0x3u), 0x4u);
    /* 007f28d1: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007f28d5: mov ecx, 0x16c */ r_ecx = 0x16cu;
    /* 007f28da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f28db: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f28de: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f28e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f28e1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f28e4: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f28e6: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 007f28ea: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 007f28ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f28ee: mov ecx, eax */ r_ecx = r_eax;
    /* 007f28f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f28f1: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f28f6u); f_0077fd10();
    /* 007f28f6: add esp, 0x174 */ {  u32 a = r_esp; u32 b = 0x174u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f28fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f28fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f28fe: ret  */ FN_RET(0x007f28a0); r_esp += 4; return;
}

void f_007f2900(void) /* sub_7F2900 */
{
    FN_ENTER(0x007f2900);
    /* 007f2900: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2903: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 007f2908: mov edx, 0x40 */ r_edx = 0x40u;
    /* 007f290d: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f2911: mov edx, dword ptr [eax + 0x280] */ r_edx = R32((u32)(r_eax+0x280u));
    /* 007f2917: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f291f: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f2924: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f2928: mov edx, dword ptr [eax + 0x284] */ r_edx = R32((u32)(r_eax+0x284u));
    /* 007f292e: mov byte ptr [esp + 3], 5 */ W8((u32)(r_esp+0x3u), 0x5u);
    /* 007f2933: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007f2937: mov edx, dword ptr [eax + 0x288] */ r_edx = R32((u32)(r_eax+0x288u));
    /* 007f293d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007f2941: mov edx, dword ptr [eax + 0x28c] */ r_edx = R32((u32)(r_eax+0x28cu));
    /* 007f2947: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007f294b: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 007f2951: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007f2955: mov edx, dword ptr [eax + 0x294] */ r_edx = R32((u32)(r_eax+0x294u));
    /* 007f295b: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007f295f: mov edx, dword ptr [eax + 0x298] */ r_edx = R32((u32)(r_eax+0x298u));
    /* 007f2965: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007f2969: mov edx, dword ptr [eax + 0x29c] */ r_edx = R32((u32)(r_eax+0x29cu));
    /* 007f296f: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 007f2973: mov edx, dword ptr [eax + 0x2a0] */ r_edx = R32((u32)(r_eax+0x2a0u));
    /* 007f2979: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007f297d: mov edx, dword ptr [eax + 0x2a4] */ r_edx = R32((u32)(r_eax+0x2a4u));
    /* 007f2983: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007f2987: mov edx, dword ptr [eax + 0x2a8] */ r_edx = R32((u32)(r_eax+0x2a8u));
    /* 007f298d: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 007f2991: mov edx, dword ptr [eax + 0x2ac] */ r_edx = R32((u32)(r_eax+0x2acu));
    /* 007f2997: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007f299b: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 007f29a1: mov eax, dword ptr [eax + 0x2b4] */ r_eax = R32((u32)(r_eax+0x2b4u));
    /* 007f29a7: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007f29ab: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007f29af: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f29b2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007f29b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f29b5: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f29bau); f_0077fd10();
    /* 007f29ba: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f29bd: ret  */ FN_RET(0x007f2900); r_esp += 4; return;
}

void f_007f29c0(void) /* sub_7F29C0 */
{
    FN_ENTER(0x007f29c0);
    /* 007f29c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f29c1: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f29c4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007f29c6: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f29cb: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7f29d0u); f_006c1bd4();
    /* 007f29d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f29d1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f29d9: mov edx, 0x30 */ r_edx = 0x30u;
    /* 007f29de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007f29e0: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f29e5: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f29e9: mov edx, dword ptr [eax + 0x291c] */ r_edx = R32((u32)(r_eax+0x291cu));
    /* 007f29ef: mov byte ptr [esp + 3], 6 */ W8((u32)(r_esp+0x3u), 0x6u);
    /* 007f29f4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f29f8: mov edx, dword ptr [eax + 0x2920] */ r_edx = R32((u32)(r_eax+0x2920u));
    /* 007f29fe: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007f2a02: mov edx, dword ptr [eax + 0x2924] */ r_edx = R32((u32)(r_eax+0x2924u));
    /* 007f2a08: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007f2a0c: mov edx, dword ptr [eax + 0x2928] */ r_edx = R32((u32)(r_eax+0x2928u));
    /* 007f2a12: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007f2a16: mov edx, dword ptr [eax + 0x292c] */ r_edx = R32((u32)(r_eax+0x292cu));
    /* 007f2a1c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007f2a20: mov edx, dword ptr [eax + 0x2930] */ r_edx = R32((u32)(r_eax+0x2930u));
    /* 007f2a26: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007f2a2a: mov edx, dword ptr [eax + 0x2934] */ r_edx = R32((u32)(r_eax+0x2934u));
    /* 007f2a30: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007f2a34: mov edx, dword ptr [eax + 0x2938] */ r_edx = R32((u32)(r_eax+0x2938u));
    /* 007f2a3a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 007f2a3e: mov edx, dword ptr [eax + 0x293c] */ r_edx = R32((u32)(r_eax+0x293cu));
    /* 007f2a44: mov eax, dword ptr [eax + 0x2940] */ r_eax = R32((u32)(r_eax+0x2940u));
    /* 007f2a4a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007f2a4e: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007f2a52: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f2a55: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2a58: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2a5du); f_0077fd10();
    /* 007f2a5d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2a60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f2a61: ret  */ FN_RET(0x007f29c0); r_esp += 4; return;
}

void f_007f2a64(void) /* sub_7F2A64 */
{
    FN_ENTER(0x007f2a64);
    /* 007f2a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f2a65: mov ebp, esp */ r_ebp = r_esp;
    /* 007f2a67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2a69: push 0x8f6e60 */ { u32 v = 0x8f6e60u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2a6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007f2a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2a75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007f2a7c: sub esp, 0x13c */ {  u32 a = r_esp; u32 b = 0x13cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2a82: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007f2a85: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007f2a88: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007f2a8b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007f2a8e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 007f2a91: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007f2a94: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7f2a99u); f_0068d5a8();
    /* 007f2a99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007f2a9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f2a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f2aa1: je 0x7f2c76 */ if (fZ) goto L_007f2c76;
L_007f2aa7:; BB(0x007f2aa7);
    /* 007f2aa7: add eax, 0x538 */ {  u32 a = r_eax; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2aac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007f2aaf: je 0x7f2c76 */ if (fZ) goto L_007f2c76;
L_007f2ab5:; BB(0x007f2ab5);
    /* 007f2ab5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2aba: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2abf: lea edx, [ebp - 0x10c] */ r_edx = (u32)(r_ebp+0xfffffef4u);
    /* 007f2ac5: mov dword ptr [ebp - 0x148], edx */ W32((u32)(r_ebp+0xfffffeb8u), r_edx);
    /* 007f2acb: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 007f2ad1: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 007f2ad7: lea ebx, [ebp - 0x108] */ r_ebx = (u32)(r_ebp+0xfffffef8u);
    /* 007f2add: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2adf: mov esi, 8 */ r_esi = 0x8u;
    /* 007f2ae4: mov word ptr [ebp - 0x114], si */ W16((u32)(r_ebp+0xfffffeecu), (u16)r_esi);
    /* 007f2aeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2aed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f2aef: mov byte ptr [ebp - 0x112], al */ W8((u32)(r_ebp+0xfffffeeeu), (u8)r_eax);
    /* 007f2af5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2af6: mov byte ptr [ebp - 0x111], al */ W8((u32)(r_ebp+0xfffffeefu), (u8)r_eax);
    /* 007f2afc: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 007f2b02: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7f2b07u); f_00858736();
    /* 007f2b07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007f2b0e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b13: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b18: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 007f2b1e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b20: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b23: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7f2b28u); f_00858736();
    /* 007f2b28: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 007f2b32: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007f2b39: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b3e: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b43: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 007f2b49: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 007f2b4f: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 007f2b55: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b57: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b5a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7f2b5fu); f_00858736();
    /* 007f2b5f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007f2b66: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b6b: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b70: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 007f2b73: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b75: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2b78: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7f2b7du); f_00858736();
    /* 007f2b7d: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 007f2b87: mov eax, 0xf0 */ r_eax = 0xf0u;
    /* 007f2b8c: mov word ptr [ebp - 0x114], ax */ W16((u32)(r_ebp+0xfffffeecu), (u16)r_eax);
    /* 007f2b93: mov byte ptr [ebp - 0x112], 0xed */ W8((u32)(r_ebp+0xfffffeeeu), 0xedu);
    /* 007f2b9a: mov byte ptr [ebp - 0x111], 7 */ W8((u32)(r_ebp+0xfffffeefu), 0x7u);
    /* 007f2ba1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007f2ba8: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 007f2bab: lea edi, [ebp - 0x10c] */ r_edi = (u32)(r_ebp+0xfffffef4u);
    /* 007f2bb1: mov ecx, 0xe8 */ r_ecx = 0xe8u;
    /* 007f2bb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2bb7: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f2bba: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f2bbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2bbd: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2bc0: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f2bc2: movzx eax, word ptr [ebp - 0x114] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffeecu));
    /* 007f2bc9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007f2bcc: lea edx, [ebp - 0x114] */ r_edx = (u32)(r_ebp+0xfffffeecu);
    /* 007f2bd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2bd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2bd4: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2bd9u); f_0077fd10();
    /* 007f2bd9: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 007f2bdf: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 007f2be5: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 007f2beb: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 007f2bf1: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 007f2bf7: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 007f2bfd: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 007f2c04: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c09: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 007f2c0c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c0e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c11: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7f2c16u); f_008586d6();
    /* 007f2c16: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 007f2c1d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c22: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 007f2c28: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c2a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c2d: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7f2c32u); f_008586d6();
    /* 007f2c32: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 007f2c38: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 007f2c3e: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 007f2c45: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c4a: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 007f2c50: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c52: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c55: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7f2c5au); f_008586d6();
    /* 007f2c5a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007f2c61: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c66: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 007f2c6c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c6e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2c71: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7f2c76u); f_008586d6();
L_007f2c76:; BB(0x007f2c76);
    /* 007f2c76: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007f2c79: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007f2c7c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007f2c7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007f2c82: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007f2c89: mov esp, ebp */ r_esp = r_ebp;
    /* 007f2c8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f2c8c: ret 4 */ FN_RET(0x007f2a64); r_esp += 8; return;
}

void f_007f2d50(void) /* sub_7F2D50 */
{
    FN_ENTER(0x007f2d50);
    /* 007f2d50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2d51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2d52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2d53: sub esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2d59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007f2d5b: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f2d60: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7f2d65u); f_006c1bd4();
    /* 007f2d65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2d66: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f2d6e: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007f2d72: mov edx, 0x148 */ r_edx = 0x148u;
    /* 007f2d77: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007f2d7c: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f2d80: mov byte ptr [esp + 2], 0xed */ W8((u32)(r_esp+0x2u), 0xedu);
    /* 007f2d85: mov esi, eax */ r_esi = r_eax;
    /* 007f2d87: mov byte ptr [esp + 3], 8 */ W8((u32)(r_esp+0x3u), 0x8u);
    /* 007f2d8c: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 007f2d91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2d92: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f2d95: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f2d97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2d98: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2d9b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f2d9d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f2da1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f2da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2da5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007f2da7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2da8: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2dadu); f_0077fd10();
    /* 007f2dad: add esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2db3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f2db4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f2db5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f2db6: ret  */ FN_RET(0x007f2d50); r_esp += 4; return;
}

void f_007f2db8(void) /* sub_7F2DB8 */
{
    FN_ENTER(0x007f2db8);
    /* 007f2db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2db9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2dba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f2dbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2dbc: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007f2dc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f2dc2: je 0x7f2e3d */ if (fZ) goto L_007f2e3d;
L_007f2dc4:; BB(0x007f2dc4);
    /* 007f2dc4: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 007f2dc7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f2dc9: jl 0x7f2e3d */ if ((fS!=fO)) goto L_007f2e3d;
L_007f2dcb:; BB(0x007f2dcb);
    /* 007f2dcb: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007f2dce: jae 0x7f2e3d */ if (!fC) goto L_007f2e3d;
L_007f2dd0:; BB(0x007f2dd0);
    /* 007f2dd0: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 007f2dd3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007f2dd5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007f2dd7: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 007f2ddb: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 007f2dde: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2de0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2de2: lea ecx, [ebp + ecx + 0xaaacc0] */ r_ecx = (u32)(r_ebp+r_ecx+0xaaacc0u);
    /* 007f2de9: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 007f2deb: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 007f2dee: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007f2df1: lea edx, [ecx + 8] */ r_edx = (u32)(r_ecx+0x8u);
    /* 007f2df4: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 007f2df7: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007f2df9: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 007f2dfb: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007f2dfe: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 007f2e01: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 007f2e04: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007f2e07: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 007f2e0a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007f2e0d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2e0f: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 007f2e12: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2e15: lea edi, [esi + 0x28] */ r_edi = (u32)(r_esi+0x28u);
    /* 007f2e18: mov dword ptr [ebp + ebx*8 + 0xaaacd8], eax */ W32((u32)(r_ebp+r_ebx*8+0xaaacd8u), r_eax);
    /* 007f2e1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2e20: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007f2e23: mov dword ptr [ebp + ebx*8 + 0xaaacdc], edx */ W32((u32)(r_ebp+r_ebx*8+0xaaacdcu), r_edx);
    /* 007f2e2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2e2b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7f2e30u); f_00857dec();
    /* 007f2e30: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2e33: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 007f2e36: mov dword ptr [ebp + ebx*8 + 0xaaad00], eax */ W32((u32)(r_ebp+r_ebx*8+0xaaad00u), r_eax);
L_007f2e3d:; BB(0x007f2e3d);
    /* 007f2e3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f2e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f2e3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f2e40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f2e41: ret 4 */ FN_RET(0x007f2db8); r_esp += 8; return;
}

void f_007f2e44(void)
{
    FN_ENTER(0x007f2e44);
    /* 007f2e44: mov edx, dword ptr [ecx + 0x1e148] */ r_edx = R32((u32)(r_ecx+0x1e148u));
    /* 007f2e4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f2e4c: je 0x7f2e58 */ if (fZ) goto L_007f2e58;
L_007f2e4e:; BB(0x007f2e4e);
    /* 007f2e4e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007f2e52: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007f2e55: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7f2e57u); call_ind(t); }
    /* 007f2e57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007f2e58:; BB(0x007f2e58);
    /* 007f2e58: ret 4 */ FN_RET(0x007f2e44); r_esp += 8; return;
}

void f_007f2e5c(void)
{
    FN_ENTER(0x007f2e5c);
    /* 007f2e5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007f2e60: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007f2e63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2e64: call 0x82d298 */ r_esp -= 4; W32(r_esp, 0x7f2e69u); f_0082d298();
    /* 007f2e69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2e6a: ret 4 */ FN_RET(0x007f2e5c); r_esp += 8; return;
}

void f_007f2e70(void) /* sub_7F2E70 */
{
    FN_ENTER(0x007f2e70);
    /* 007f2e70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2e73: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007f2e77: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007f2e79: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f2e7d: mov byte ptr [esp + 2], 0x22 */ W8((u32)(r_esp+0x2u), 0x22u);
    /* 007f2e82: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007f2e86: mov edx, 0x18 */ r_edx = 0x18u;
    /* 007f2e8b: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f2e8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007f2e91: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f2e95: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007f2e98: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007f2e9c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007f2e9f: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007f2ea2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007f2ea6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007f2eaa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f2ead: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2eae: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7f2eb3u); f_007c4fb4();
    /* 007f2eb3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2eb6: ret 4 */ FN_RET(0x007f2e70); r_esp += 8; return;
}

void f_007f2ebc(void) /* sub_7F2EBC */
{
    FN_ENTER(0x007f2ebc);
    /* 007f2ebc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2ebf: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007f2ec3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f2ec7: mov eax, 0x18 */ r_eax = 0x18u;
    /* 007f2ecc: mov byte ptr [esp + 2], 0x22 */ W8((u32)(r_esp+0x2u), 0x22u);
    /* 007f2ed1: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f2ed5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f2ed8: mov byte ptr [esp + 3], 1 */ W8((u32)(r_esp+0x3u), 0x1u);
    /* 007f2edd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2ede: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7f2ee3u); f_007c4fb4();
    /* 007f2ee3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2ee6: ret 4 */ FN_RET(0x007f2ebc); r_esp += 8; return;
}

void f_007f2eec(void) /* sub_7F2EEC */
{
    FN_ENTER(0x007f2eec);
    /* 007f2eec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007f2ef0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007f2ef3: mov dword ptr [0xa95f0c], edx */ W32((u32)(0xa95f0cu), r_edx);
    /* 007f2ef9: mov dword ptr [0xa95f10], 1 */ W32((u32)(0xa95f10u), 0x1u);
    /* 007f2f03: ret 4 */ FN_RET(0x007f2eec); r_esp += 8; return;
}

void f_007f2f08(void) /* sub_7F2F08 */
{
    FN_ENTER(0x007f2f08);
    /* 007f2f08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f2f0c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007f2f10: mov ebx, eax */ r_ebx = r_eax;
    /* 007f2f12: mov esi, edx */ r_esi = r_edx;
L_007f2f14:; BB(0x007f2f14);
    /* 007f2f14: push dword ptr [esi + ebx*4 + 0xc] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007f2f18: movzx ecx, byte ptr [esi + 0xa] */ r_ecx = (u32)R8((u32)(r_esi+0xau));
    /* 007f2f1c: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f1f: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007f2f25: call 0x6bc278 */ r_esp -= 4; W32(r_esp, 0x7f2f2au); f_006bc278();
    /* 007f2f2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f2f2d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007f2f30: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007f2f33: jl 0x7f2f14 */ if ((fS!=fO)) goto L_007f2f14;
L_007f2f35:; BB(0x007f2f35);
    /* 007f2f35: mov edx, esi */ r_edx = r_esi;
    /* 007f2f37: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007f2f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f3c: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x7f2f41u); f_006bc76c();
    /* 007f2f41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2f42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f2f43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f2f44: ret 4 */ FN_RET(0x007f2f08); r_esp += 8; return;
}

void f_007f2f48(void)
{
    FN_ENTER(0x007f2f48);
    /* 007f2f48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f49: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007f2f4d: movzx edx, byte ptr [esi + 0xa] */ r_edx = (u32)R8((u32)(r_esi+0xau));
    /* 007f2f51: movzx eax, byte ptr [esi + 0xc] */ r_eax = (u32)R8((u32)(r_esi+0xcu));
    /* 007f2f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f57: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007f2f5d: call 0x6bc278 */ r_esp -= 4; W32(r_esp, 0x7f2f62u); f_006bc278();
    /* 007f2f62: movzx edx, byte ptr [esi + 0xb] */ r_edx = (u32)R8((u32)(r_esi+0xbu));
    /* 007f2f66: movzx eax, byte ptr [esi + 0xd] */ r_eax = (u32)R8((u32)(r_esi+0xdu));
    /* 007f2f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f6c: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007f2f72: call 0x6bc278 */ r_esp -= 4; W32(r_esp, 0x7f2f77u); f_006bc278();
    /* 007f2f77: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007f2f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2f7c: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x7f2f81u); f_006bc76c();
    /* 007f2f81: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2f84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f2f85: ret 4 */ FN_RET(0x007f2f48); r_esp += 8; return;
}

void f_007f2f88(void) /* sub_7F2F88 */
{
    FN_ENTER(0x007f2f88);
    /* 007f2f88: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2f8b: mov byte ptr [esp + 2], 0x1d */ W8((u32)(r_esp+0x2u), 0x1du);
    /* 007f2f90: mov eax, 8 */ r_eax = 0x8u;
    /* 007f2f95: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f2f99: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f2f9c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007f2f9e: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007f2fa2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007f2fa6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007f2fa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f2fa9: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f2faeu); f_0077fd10();
    /* 007f2fae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f2fb1: ret  */ FN_RET(0x007f2f88); r_esp += 4; return;
}

void f_007f2fb4(void) /* sub_7F2FB4 */
{
    FN_ENTER(0x007f2fb4);
    /* 007f2fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2fb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f2fb6: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f2fbc: mov eax, ecx */ r_eax = r_ecx;
    /* 007f2fbe: mov esi, dword ptr [esp + 0x11c] */ r_esi = R32((u32)(r_esp+0x11cu));
    /* 007f2fc5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f2fc7: je 0x7f3009 */ if (fZ) goto L_007f3009;
L_007f2fc9:; BB(0x007f2fc9);
    /* 007f2fc9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f2fd1: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007f2fd5: mov edx, 0x110 */ r_edx = 0x110u;
    /* 007f2fda: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f2fdf: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f2fe3: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 007f2fe8: mov byte ptr [esp + 3], 6 */ W8((u32)(r_esp+0x3u), 0x6u);
    /* 007f2fed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f2fee: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f2ff1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f2ff3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f2ff4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f2ff7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f2ff9: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 007f2ffd: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 007f3000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f3001: mov ecx, eax */ r_ecx = r_eax;
    /* 007f3003: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3004: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f3009u); f_0077fd10();
L_007f3009:; BB(0x007f3009);
    /* 007f3009: add esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f300f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f3010: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f3011: ret 4 */ FN_RET(0x007f2fb4); r_esp += 8; return;
}

