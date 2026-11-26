#include "protos.h"

void f_007d7640(void) /* sub_7D7640 */
{
    FN_ENTER(0x007d7640);
    /* 007d7640: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7641: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7642: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d7643: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007d7645: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007d7649: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 007d764c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d764e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d764f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7650: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7655u); f_0077fd10();
    /* 007d7655: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 007d7658: movzx edx, word ptr [esi + 0xc] */ r_edx = (u32)R16((u32)(r_esi+0xcu));
    /* 007d765c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007d7660: mov dword ptr [0xaaecc4], eax */ W32((u32)(0xaaecc4u), r_eax);
    /* 007d7665: mov edi, 0xaaec20 */ r_edi = 0xaaec20u;
    /* 007d766a: mov word ptr [0xaaecc0], dx */ W16((u32)(0xaaecc0u), (u16)r_edx);
    /* 007d7671: mov ecx, 0x84 */ r_ecx = 0x84u;
    /* 007d7676: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7677: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007d767a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007d767c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d767d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007d7680: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007d7682: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007d7685: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d7687: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7d768au); call_ind(t); }
    /* 007d768a: push dword ptr [0xaaecc4] */ { u32 v = R32((u32)(0xaaecc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d7690: mov dword ptr [ebp + 0x12138], 1 */ W32((u32)(r_ebp+0x12138u), 0x1u);
    /* 007d769a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d769c: mov dword ptr [ebp + 0x1211c], eax */ W32((u32)(r_ebp+0x1211cu), r_eax);
    /* 007d76a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d76a4: mov dword ptr [ebp + 0x12130], eax */ W32((u32)(r_ebp+0x12130u), r_eax);
    /* 007d76aa: mov dword ptr [ebp + 0x1641c], eax */ W32((u32)(r_ebp+0x1641cu), r_eax);
    /* 007d76b0: mov dword ptr [ebp + 0x16420], eax */ W32((u32)(r_ebp+0x16420u), r_eax);
    /* 007d76b6: call 0x77f8c8 */ r_esp -= 4; W32(r_esp, 0x7d76bbu); f_0077f8c8();
    /* 007d76bb: movsx eax, word ptr [0xaaecc0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaaecc0u));
    /* 007d76c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d76c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d76c5: call 0x77f8ec */ r_esp -= 4; W32(r_esp, 0x7d76cau); f_0077f8ec();
    /* 007d76ca: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007d76cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d76cf: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x7d76d2u); call_ind(t); }
    /* 007d76d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007d76d4: jge 0x7d76e3 */ if ((fS==fO)) goto L_007d76e3;
L_007d76d6:; BB(0x007d76d6);
    /* 007d76d6: mov byte ptr [ebp + 0x10074], 1 */ W8((u32)(r_ebp+0x10074u), 0x1u);
    /* 007d76dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d76de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007d76df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d76e0: ret 8 */ FN_RET(0x007d7640); r_esp += 12; return;
L_007d76e3:; BB(0x007d76e3);
    /* 007d76e3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007d76e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d76e8: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7d76ebu); call_ind(t); }
    /* 007d76eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d76ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007d76ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d76ee: ret 8 */ FN_RET(0x007d7640); r_esp += 12; return;
}

void f_007d76f4(void) /* sub_7D76F4 */
{
    FN_ENTER(0x007d76f4);
    /* 007d76f4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d76f7: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d76fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d76ff: je 0x7d7727 */ if (fZ) goto L_007d7727;
L_007d7701:; BB(0x007d7701);
    /* 007d7701: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007d7705: mov byte ptr [esp + 2], 0xa2 */ W8((u32)(r_esp+0x2u), 0xa2u);
    /* 007d770a: mov eax, 8 */ r_eax = 0x8u;
    /* 007d770f: mov byte ptr [esp + 3], 0 */ W8((u32)(r_esp+0x3u), 0x0u);
    /* 007d7714: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d7718: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d771c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d771f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7722: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7727u); f_0077fd10();
L_007d7727:; BB(0x007d7727);
    /* 007d7727: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d772a: ret 4 */ FN_RET(0x007d76f4); r_esp += 8; return;
}

void f_007d7730(void) /* sub_7D7730 */
{
    FN_ENTER(0x007d7730);
    /* 007d7730: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7733: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007d7737: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007d773b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007d773f: mov byte ptr [esp + 2], 0x96 */ W8((u32)(r_esp+0x2u), 0x96u);
    /* 007d7744: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d7748: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d774a: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d774e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d7752: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7755: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d775a: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007d775e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7761: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7766u); f_0077fd10();
    /* 007d7766: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7769: ret 8 */ FN_RET(0x007d7730); r_esp += 12; return;
}

void f_007d776c(void) /* sub_7D776C */
{
    FN_ENTER(0x007d776c);
    /* 007d776c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d776f: mov byte ptr [esp + 2], 0xa9 */ W8((u32)(r_esp+0x2u), 0xa9u);
    /* 007d7774: mov eax, 8 */ r_eax = 0x8u;
    /* 007d7779: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d777d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7780: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d7782: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d7786: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d778a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d778c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d778d: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7792u); f_0077fd10();
    /* 007d7792: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7795: ret  */ FN_RET(0x007d776c); r_esp += 4; return;
}

void f_007d7798(void) /* sub_7D7798 */
{
    FN_ENTER(0x007d7798);
    /* 007d7798: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d779b: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d77a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d77a3: je 0x7d77c8 */ if (fZ) goto L_007d77c8;
L_007d77a5:; BB(0x007d77a5);
    /* 007d77a5: mov byte ptr [esp + 2], 0xb1 */ W8((u32)(r_esp+0x2u), 0xb1u);
    /* 007d77aa: mov eax, 8 */ r_eax = 0x8u;
    /* 007d77af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d77b1: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d77b5: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d77b9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d77bd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d77c0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d77c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d77c3: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d77c8u); f_0077fd10();
L_007d77c8:; BB(0x007d77c8);
    /* 007d77c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d77cb: ret  */ FN_RET(0x007d7798); r_esp += 4; return;
}

void f_007d77cc(void) /* sub_7D77CC */
{
    FN_ENTER(0x007d77cc);
    /* 007d77cc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d77cf: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d77d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d77d7: je 0x7d77fc */ if (fZ) goto L_007d77fc;
L_007d77d9:; BB(0x007d77d9);
    /* 007d77d9: mov byte ptr [esp + 2], 0xc0 */ W8((u32)(r_esp+0x2u), 0xc0u);
    /* 007d77de: mov eax, 8 */ r_eax = 0x8u;
    /* 007d77e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d77e5: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d77e9: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d77ed: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d77f1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d77f4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d77f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d77f7: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d77fcu); f_0077fd10();
L_007d77fc:; BB(0x007d77fc);
    /* 007d77fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d77ff: ret  */ FN_RET(0x007d77cc); r_esp += 4; return;
}

void f_007d7800(void) /* sub_7D7800 */
{
    FN_ENTER(0x007d7800);
    /* 007d7800: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7803: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007d7807: mov edx, dword ptr [ecx + 0x12130] */ r_edx = R32((u32)(r_ecx+0x12130u));
    /* 007d780d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d780f: je 0x7d7886 */ if (fZ) goto L_007d7886;
L_007d7811:; BB(0x007d7811);
    /* 007d7811: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007d7813: mov dword ptr [ecx + 0x1e070], edx */ W32((u32)(r_ecx+0x1e070u), r_edx);
    /* 007d7819: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d781b: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d781f: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d7823: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d7825: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007d7828: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d782c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d7830: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d7834: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d7838: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d783c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d7840: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007d7844: mov byte ptr [esp + 2], 0xc2 */ W8((u32)(r_esp+0x2u), 0xc2u);
    /* 007d7849: mov edx, 0x20 */ r_edx = 0x20u;
    /* 007d784e: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007d7852: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007d7854: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d7858: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007d785b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d785f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007d7862: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d7866: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007d7869: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d786d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007d7870: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 007d7873: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d7877: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007d787b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d787e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7881: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7886u); f_0077fd10();
L_007d7886:; BB(0x007d7886);
    /* 007d7886: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7889: ret 4 */ FN_RET(0x007d7800); r_esp += 8; return;
}

void f_007d788c(void) /* sub_7D788C */
{
    FN_ENTER(0x007d788c);
    /* 007d788c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d788f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007d7893: mov edx, dword ptr [ecx + 0x12130] */ r_edx = R32((u32)(r_ecx+0x12130u));
    /* 007d7899: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d789b: je 0x7d790a */ if (fZ) goto L_007d790a;
L_007d789d:; BB(0x007d789d);
    /* 007d789d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d789f: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d78a3: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d78a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d78a9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007d78ac: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d78b0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d78b4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d78b8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d78bc: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d78c0: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d78c4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007d78c8: mov byte ptr [esp + 2], 0xc3 */ W8((u32)(r_esp+0x2u), 0xc3u);
    /* 007d78cd: mov edx, 0x20 */ r_edx = 0x20u;
    /* 007d78d2: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007d78d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007d78d8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d78dc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007d78df: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d78e3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007d78e6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d78ea: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007d78ed: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d78f1: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007d78f4: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 007d78f7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d78fb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007d78ff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7902: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7905: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d790au); f_0077fd10();
L_007d790a:; BB(0x007d790a);
    /* 007d790a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d790d: ret 4 */ FN_RET(0x007d788c); r_esp += 8; return;
}

void f_007d7910(void) /* sub_7D7910 */
{
    FN_ENTER(0x007d7910);
    /* 007d7910: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d7916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007d7918: jne 0x7d791d */ if (!fZ) goto L_007d791d;
L_007d791a:; BB(0x007d791a);
    /* 007d791a: ret 4 */ FN_RET(0x007d7910); r_esp += 8; return;
L_007d791d:; BB(0x007d791d);
    /* 007d791d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007d7921: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007d7925: mov byte ptr [eax + 2], 0xc6 */ W8((u32)(r_eax+0x2u), 0xc6u);
    /* 007d7929: mov eax, 0x78 */ r_eax = 0x78u;
    /* 007d792e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d792f: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007d7932: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007d7936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7937: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d793cu); f_0077fd10();
    /* 007d793c: ret 4 */ FN_RET(0x007d7910); r_esp += 8; return;
}

void f_007d7940(void) /* sub_7D7940 */
{
    FN_ENTER(0x007d7940);
    /* 007d7940: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7941: sub esp, 0x408 */ {  u32 a = r_esp; u32 b = 0x408u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7947: mov esi, ecx */ r_esi = r_ecx;
    /* 007d7949: mov eax, dword ptr [esi + 0x12130] */ r_eax = R32((u32)(r_esi+0x12130u));
    /* 007d794f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d7951: je 0x7d79bb */ if (fZ) goto L_007d79bb;
L_007d7953:; BB(0x007d7953);
    /* 007d7953: mov eax, 8 */ r_eax = 0x8u;
    /* 007d7958: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d795c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d795f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d7961: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d7965: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d7969: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d796d: push 0x408 */ { u32 v = 0x408u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7975: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7d797au); f_0086b688();
    /* 007d797a: mov byte ptr [esp + 0xe], 0xc7 */ W8((u32)(r_esp+0xeu), 0xc7u);
    /* 007d797f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007d7983: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d7988: push dword ptr [esp + 0x420] */ { u32 v = R32((u32)(r_esp+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d798f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7990: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d7995u); f_00857dec();
    /* 007d7995: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 007d7999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d799a: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7d799fu); f_00858009();
    /* 007d799f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d79a2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d79a5: lea eax, [eax + eax + 0xd] */ r_eax = (u32)(r_eax+r_eax+0xdu);
    /* 007d79a9: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007d79ae: mov ecx, esi */ r_ecx = r_esi;
    /* 007d79b0: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d79b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d79b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d79b6: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d79bbu); f_0077fd10();
L_007d79bb:; BB(0x007d79bb);
    /* 007d79bb: add esp, 0x408 */ {  u32 a = r_esp; u32 b = 0x408u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d79c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007d79c2: ret 4 */ FN_RET(0x007d7940); r_esp += 8; return;
}

void f_007d79c8(void) /* sub_7D79C8 */
{
    FN_ENTER(0x007d79c8);
    /* 007d79c8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d79cb: mov byte ptr [esp + 2], 0xc8 */ W8((u32)(r_esp+0x2u), 0xc8u);
    /* 007d79d0: mov eax, 8 */ r_eax = 0x8u;
    /* 007d79d5: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d79d9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d79dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d79de: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d79e2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d79e6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d79e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d79e9: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d79eeu); f_0077fd10();
    /* 007d79ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d79f1: ret  */ FN_RET(0x007d79c8); r_esp += 4; return;
}

void f_007d79f4(void) /* sub_7D79F4 */
{
    FN_ENTER(0x007d79f4);
    /* 007d79f4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d79f7: mov byte ptr [esp + 2], 0xd8 */ W8((u32)(r_esp+0x2u), 0xd8u);
    /* 007d79fc: mov eax, 8 */ r_eax = 0x8u;
    /* 007d7a01: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d7a05: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7a08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d7a0a: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d7a0e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d7a12: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a15: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7a1au); f_0077fd10();
    /* 007d7a1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7a1d: ret  */ FN_RET(0x007d79f4); r_esp += 4; return;
}

void f_007d7a20(void) /* sub_7D7A20 */
{
    FN_ENTER(0x007d7a20);
    /* 007d7a20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a24: mov eax, 0x11a4 */ r_eax = 0x11a4u;
    /* 007d7a29: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7d7a2eu); f_00858020();
    /* 007d7a2e: mov ecx, dword ptr [esp + 0x11a4] */ r_ecx = R32((u32)(r_esp+0x11a4u));
    /* 007d7a35: mov eax, ecx */ r_eax = r_ecx;
    /* 007d7a37: mov esi, dword ptr [esp + 0x11b8] */ r_esi = R32((u32)(r_esp+0x11b8u));
    /* 007d7a3e: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007d7a41: mov ecx, 0x11a8 */ r_ecx = 0x11a8u;
    /* 007d7a46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a47: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007d7a4a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007d7a4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d7a4d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007d7a50: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007d7a52: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007d7a54: mov ebp, eax */ r_ebp = r_eax;
L_007d7a56:; BB(0x007d7a56);
    /* 007d7a56: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007d7a5a: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 007d7a5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a5f: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7d7a64u); f_00813a78();
    /* 007d7a64: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 007d7a68: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 007d7a6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a6d: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7d7a72u); f_00813a78();
    /* 007d7a72: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d7a75: add esi, 0x178 */ {  u32 a = r_esi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007d7a7b: cmp esi, 0x11a0 */ {  u32 a = r_esi; u32 b = 0x11a0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007d7a81: jl 0x7d7a56 */ if ((fS!=fO)) goto L_007d7a56;
L_007d7a83:; BB(0x007d7a83);
    /* 007d7a83: mov eax, ebp */ r_eax = r_ebp;
    /* 007d7a85: mov edx, dword ptr [eax + 0x1e0ec] */ r_edx = R32((u32)(r_eax+0x1e0ecu));
    /* 007d7a8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d7a8d: je 0x7d7a96 */ if (fZ) goto L_007d7a96;
L_007d7a8f:; BB(0x007d7a8f);
    /* 007d7a8f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7a93: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7d7a95u); call_ind(t); }
    /* 007d7a95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007d7a96:; BB(0x007d7a96);
    /* 007d7a96: add esp, 0x11a8 */ {  u32 a = r_esp; u32 b = 0x11a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7a9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d7a9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007d7a9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d7a9f: ret 4 */ FN_RET(0x007d7a20); r_esp += 8; return;
}

void f_007d7aa4(void) /* sub_7D7AA4 */
{
    FN_ENTER(0x007d7aa4);
    /* 007d7aa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d7aa5: sub esp, 0x160 */ {  u32 a = r_esp; u32 b = 0x160u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7aab: mov edi, ecx */ r_edi = r_ecx;
    /* 007d7aad: mov eax, 8 */ r_eax = 0x8u;
    /* 007d7ab2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d7ab4: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d7ab8: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d7abc: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d7ac0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d7ac4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7ac7: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7acc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7ace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7acf: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7d7ad4u); f_0086b688();
    /* 007d7ad4: mov byte ptr [esp + 0xe], 0xd9 */ W8((u32)(r_esp+0xeu), 0xd9u);
    /* 007d7ad9: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007d7add: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007d7ae2: push dword ptr [esp + 0x178] */ { u32 v = R32((u32)(r_esp+0x178u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d7ae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7aea: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d7aefu); f_00857dec();
    /* 007d7aef: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 007d7af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7af4: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7d7af9u); f_00858009();
    /* 007d7af9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d7afc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d7aff: lea eax, [eax + eax + 0xd] */ r_eax = (u32)(r_eax+r_eax+0xdu);
    /* 007d7b03: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007d7b08: mov ecx, edi */ r_ecx = r_edi;
    /* 007d7b0a: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d7b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7b0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d7b10: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7b15u); f_0077fd10();
    /* 007d7b15: add esp, 0x160 */ {  u32 a = r_esp; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7b1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d7b1c: ret 4 */ FN_RET(0x007d7aa4); r_esp += 8; return;
}

void f_007d7b20(void) /* sub_7D7B20 */
{
    FN_ENTER(0x007d7b20);
    /* 007d7b20: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7b23: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007d7b27: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d7b2b: mov eax, 8 */ r_eax = 0x8u;
    /* 007d7b30: mov byte ptr [esp + 2], 0x89 */ W8((u32)(r_esp+0x2u), 0x89u);
    /* 007d7b35: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d7b39: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7b3c: mov byte ptr [esp + 3], 0 */ W8((u32)(r_esp+0x3u), 0x0u);
    /* 007d7b41: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7b43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7b44: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7b49u); f_0077fd10();
    /* 007d7b49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7b4c: ret 4 */ FN_RET(0x007d7b20); r_esp += 8; return;
}

void f_007d7b50(void) /* sub_7D7B50 */
{
    FN_ENTER(0x007d7b50);
    /* 007d7b50: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7b53: mov byte ptr [esp + 2], 0x8a */ W8((u32)(r_esp+0x2u), 0x8au);
    /* 007d7b58: mov eax, 8 */ r_eax = 0x8u;
    /* 007d7b5d: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d7b61: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d7b64: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d7b66: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d7b6a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d7b6e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7b71: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d7b76u); f_0077fd10();
    /* 007d7b76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7b79: ret  */ FN_RET(0x007d7b50); r_esp += 4; return;
}

void f_007d7b7c(void) /* sub_7D7B7C */
{
    FN_ENTER(0x007d7b7c);
    /* 007d7b7c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7b7f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 007d7b83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007d7b85: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007d7b88: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007d7b8b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d7b8f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007d7b92: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d7b96: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007d7b99: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d7b9d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007d7ba0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d7ba4: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007d7ba7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d7bab: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007d7bae: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d7bb2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007d7bb5: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007d7bb9: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007d7bbc: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 007d7bbf: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007d7bc3: mov edx, dword ptr [ecx + 0x1e124] */ r_edx = R32((u32)(r_ecx+0x1e124u));
    /* 007d7bc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d7bcb: je 0x7d7bd9 */ if (fZ) goto L_007d7bd9;
L_007d7bcd:; BB(0x007d7bcd);
    /* 007d7bcd: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007d7bd1: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007d7bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d7bd6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7d7bd8u); call_ind(t); }
    /* 007d7bd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007d7bd9:; BB(0x007d7bd9);
    /* 007d7bd9: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d7bdc: ret 4 */ FN_RET(0x007d7b7c); r_esp += 8; return;
}

void f_007d7be0(void) /* sub_7D7BE0 */
{
    FN_ENTER(0x007d7be0);
    /* 007d7be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d7be1: mov ebp, esp */ r_ebp = r_esp;
    /* 007d7be3: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d7be9: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 007d7bec: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 007d7bef: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 007d7bf2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007d7bf5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007d7bf6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7bf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7bfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d7bfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d7bfe: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7d7c04u); call_ind(t); }
    /* 007d7c04: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007d7c05: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007d7c06: jmp 0x7dae27 */ goto L_007dae27;
L_007dae27:; BB(0x007dae27);
    /* 007dae27: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007dae28: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 007dae2e: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 007dae33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007dae35: mov esi, 8 */ r_esi = 0x8u;
    /* 007dae3a: mov word ptr [ebp - 0xb0], si */ W16((u32)(r_ebp+0xffffff50u), (u16)r_esi);
    /* 007dae41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007dae42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007dae44: mov byte ptr [ebp - 0xae], al */ W8((u32)(r_ebp+0xffffff52u), (u8)r_eax);
    /* 007dae4a: mov byte ptr [ebp - 0xad], al */ W8((u32)(r_ebp+0xffffff53u), (u8)r_eax);
    /* 007dae50: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 007dae56: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7dae5bu); f_0086b688();
    /* 007dae5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007dae5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007dae61: movzx edi, word ptr [edx + 0x12128] */ r_edi = (u32)R16((u32)(r_edx+0x12128u));
    /* 007dae68: mov eax, dword ptr [edx + 0x12154] */ r_eax = R32((u32)(r_edx+0x12154u));
    /* 007dae6e: mov dword ptr [ebp - 0xa8], edi */ W32((u32)(r_ebp+0xffffff58u), r_edi);
    /* 007dae74: mov esi, 0xa0 */ r_esi = 0xa0u;
    /* 007dae79: mov byte ptr [ebp - 0xae], 0x9c */ W8((u32)(r_ebp+0xffffff52u), 0x9cu);
    /* 007dae80: mov word ptr [ebp - 0xb0], si */ W16((u32)(r_ebp+0xffffff50u), (u16)r_esi);
    /* 007dae87: mov byte ptr [ebp - 0xa3], al */ W8((u32)(r_ebp+0xffffff5du), (u8)r_eax);
    /* 007dae8d: lea ebx, [ebp - 0xa0] */ r_ebx = (u32)(r_ebp+0xffffff60u);
    /* 007dae93: lea ecx, [edx + 0x16322] */ r_ecx = (u32)(r_edx+0x16322u);
    /* 007dae99: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007dae9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007dae9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007dae9d: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7daea2u); f_00858900();
    /* 007daea2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007daea5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007daea8: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 007daeab: lea edx, [eax + 0x16352] */ r_edx = (u32)(r_eax+0x16352u);
    /* 007daeb1: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007daeb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007daeb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007daeb5: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7daebau); f_00858900();
    /* 007daeba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007daebd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007daec0: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 007daec3: lea edx, [eax + 0x16382] */ r_edx = (u32)(r_eax+0x16382u);
    /* 007daec9: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007daecb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007daecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007daecd: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7daed2u); f_00858900();
    /* 007daed2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007daed5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007daed8: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 007daede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007daedf: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7daee4u); f_007c4fb4();
    /* 007daee4: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007daee5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007daee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007daee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007daeeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007daeed: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7daef3u); call_ind(t); }
    /* 007daef3: jmp 0x7daf13 */ goto L_007daf13;
L_007daf13:; BB(0x007daf13);
    /* 007daf13: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007daf14: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007daf17: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007daf1a: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007daf1d: mov esp, ebp */ r_esp = r_ebp;
    /* 007daf1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007daf20: ret  */ FN_RET(0x007d7be0); r_esp += 4; return;
}

