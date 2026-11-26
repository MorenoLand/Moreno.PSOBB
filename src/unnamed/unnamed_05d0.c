#include "protos.h"

void f_005d0000(void)
{
    FN_ENTER(0x005d0000);
    /* 005d0000: int3  */ UNSUP(0x005d0000, "int3");
}

void f_005d002d(void)
{
    FN_ENTER(0x005d002d);
    /* 005d002d: std  */ rt_df = 1;
    UNSUP(0x005d002e, "falls out of decoded code");
}

void f_005d002e(void)
{
    FN_ENTER(0x005d002e);
}

void f_005d003e(void)
{
    FN_ENTER(0x005d003e);
    /* 005d003e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0043: je 0x5d0059 */ if (fZ) goto L_005d0059;
L_005d0045:; BB(0x005d0045);
    /* 005d0045: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0048: mov ebx, eax */ r_ebx = r_eax;
    /* 005d004a: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 005d0050: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005d0053: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005d0056: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_005d0059:; BB(0x005d0059);
    /* 005d0059: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d005c: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 005d005f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0061: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d0063: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d0066: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0068: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d006b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d006e: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0073: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005d0076: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005d0079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d007a: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5d007fu); f_0050a984();
    /* 005d007f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0082: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0085: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0095: ret  */ FN_RET(0x005d003e); r_esp += 4; return;
}

void f_005d005b(void)
{
    FN_ENTER(0x005d005b);
    goto L_005d005b;
L_005d002f:; BB(0x005d002f);
    /* 005d002f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d0031: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d0032: enter 0, 0 */ { u32 f = 0x0u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 005d0036: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005d0038: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d0039: cld  */ rt_df = 0;
    UNSUP(0x005d003a, "falls out of decoded code");
L_005d005b:; BB(0x005d005b);
    /* 005d005b: or al, 0x8d */ {  u32 a = (u8)r_eax; u32 b = 0x8du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005d005d: jne 0x5d002f */ if (!fZ) goto L_005d002f;
L_005d005f:; BB(0x005d005f);
    /* 005d005f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0061: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d0063: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d0066: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0068: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d006b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d006e: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0073: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005d0076: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005d0079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d007a: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5d007fu); f_0050a984();
    /* 005d007f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0082: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0085: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0095: ret  */ FN_RET(0x005d005b); r_esp += 4; return;
}

void f_005d0073(void)
{
    FN_ENTER(0x005d0073);
    /* 005d0073: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005d0076: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005d0079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d007a: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5d007fu); f_0050a984();
    /* 005d007f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0082: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0085: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0095: ret  */ FN_RET(0x005d0073); r_esp += 4; return;
}

void f_005d00a0(void) /* sub_5D00A0 */
{
    FN_ENTER(0x005d00a0);
    /* 005d00a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d00a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d00a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d00a5: call 0x5d00c4 */ r_esp -= 4; W32(r_esp, 0x5d00aau); f_005d00c4();
    /* 005d00aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d00ae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d00b0: jne 0x5d00b6 */ if (!fZ) goto L_005d00b6;
L_005d00b2:; BB(0x005d00b2);
    /* 005d00b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d00b3: ret 4 */ FN_RET(0x005d00a0); r_esp += 8; return;
L_005d00b6:; BB(0x005d00b6);
    /* 005d00b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d00b7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d00bcu); f_005c2f74();
    /* 005d00bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d00bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d00be: ret 4 */ FN_RET(0x005d00a0); r_esp += 8; return;
}

void f_005d00c4(void) /* sub_5D00C4 */
{
    FN_ENTER(0x005d00c4);
    /* 005d00c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d00c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d00c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d00c9: push 0x8da414 */ { u32 v = 0x8da414u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d00d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d00d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d00dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d00df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d00e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d00e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d00e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d00eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d00ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d00f1: mov dword ptr [ecx], 0xb0cfb8 */ W32((u32)(r_ecx), 0xb0cfb8u);
    /* 005d00f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d00fe: call 0x5c5a94 */ r_esp -= 4; W32(r_esp, 0x5d0103u); f_005c5a94();
    /* 005d0103: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0106: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d010d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d010f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0110: ret  */ FN_RET(0x005d00c4); r_esp += 4; return;
}

void f_005d0114(void) /* sub_5D0114 */
{
    FN_ENTER(0x005d0114);
    /* 005d0114: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0115: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d0117: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d0119: call 0x5c5b44 */ r_esp -= 4; W32(r_esp, 0x5d011eu); f_005c5b44();
    /* 005d011e: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 005d0125: mov eax, ebp */ r_eax = r_ebp;
    /* 005d0127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0128: ret  */ FN_RET(0x005d0114); r_esp += 4; return;
}

void f_005d012c(void) /* sub_5D012C */
{
    FN_ENTER(0x005d012c);
    /* 005d012c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d012d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d012f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0131: push 0x8da43c */ { u32 v = 0x8da43cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0136: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d013c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d013d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0144: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0147: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d014a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d014d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d0150: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d0153: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0158: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d015f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d0164u); f_005caba4();
    /* 005d0164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0165: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d0168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d016a: je 0x5d018f */ if (fZ) goto L_005d018f;
L_005d016c:; BB(0x005d016c);
    /* 005d016c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005d0173: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d017a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d017d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0180: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0183: call 0x5d01a0 */ r_esp -= 4; W32(r_esp, 0x5d0188u); f_005d01a0();
    /* 005d0188: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d018f:; BB(0x005d018f);
    /* 005d018f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0192: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0199: mov esp, ebp */ r_esp = r_ebp;
    /* 005d019b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d019c: ret  */ FN_RET(0x005d012c); r_esp += 4; return;
}

void f_005d01a0(void) /* sub_5D01A0 */
{
    FN_ENTER(0x005d01a0);
    /* 005d01a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d01a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d01a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d01a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d01a4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d01a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d01a8: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 005d01ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d01ad: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d01b1: call 0x5c6a78 */ r_esp -= 4; W32(r_esp, 0x5d01b6u); f_005c6a78();
    /* 005d01b6: mov dword ptr [ebp], 0xb0cfb8 */ W32((u32)(r_ebp), 0xb0cfb8u);
    /* 005d01bd: mov eax, dword ptr [0x9c273c] */ r_eax = R32((u32)(0x9c273cu));
    /* 005d01c2: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 005d01c5: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 005d01cf: mov dword ptr [ebp + 0x48], 1 */ W32((u32)(r_ebp+0x48u), 0x1u);
    /* 005d01d6: mov dword ptr [ebp + 0x44], 0x41200000 */ W32((u32)(r_ebp+0x44u), 0x41200000u);
    /* 005d01dd: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 005d01e0: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005d01e3: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 005d01e6: mov dword ptr [ebp + 0x190], 0 */ W32((u32)(r_ebp+0x190u), 0x0u);
    /* 005d01f0: mov dword ptr [ebp + 0x188], ecx */ W32((u32)(r_ebp+0x188u), r_ecx);
    /* 005d01f6: mov dword ptr [ebp + 0x18c], 0x43480000 */ W32((u32)(r_ebp+0x18cu), 0x43480000u);
    /* 005d0200: mov dword ptr [ebp + 0x194], 0 */ W32((u32)(r_ebp+0x194u), 0x0u);
    /* 005d020a: mov dword ptr [ebp + 0x19c], 0x14 */ W32((u32)(r_ebp+0x19cu), 0x14u);
    /* 005d0214: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5d0219u); f_0082dcbc();
    /* 005d0219: mov ecx, dword ptr [ebp + 0x188] */ r_ecx = R32((u32)(r_ebp+0x188u));
    /* 005d021f: fstp dword ptr [ebp + 0x17c] */ W_F32((u32)(r_ebp+0x17cu), ST(0)); FPOP();
    /* 005d0225: mov dword ptr [ebp + 0x180], 0 */ W32((u32)(r_ebp+0x180u), 0x0u);
    /* 005d022f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5d0234u); f_0082ddd8();
    /* 005d0234: fstp dword ptr [ebp + 0x184] */ W_F32((u32)(r_ebp+0x184u), ST(0)); FPOP();
    /* 005d023a: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 005d023d: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 005d0240: fstp dword ptr [ebp + 0x164] */ W_F32((u32)(r_ebp+0x164u), ST(0)); FPOP();
    /* 005d0246: lea ecx, [ebp + 0x164] */ r_ecx = (u32)(r_ebp+0x164u);
    /* 005d024c: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 005d024f: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 005d0252: fstp dword ptr [ebp + 0x168] */ W_F32((u32)(r_ebp+0x168u), ST(0)); FPOP();
    /* 005d0258: fld dword ptr [ebx + 0x34] */ FPUSH(R_F32((u32)(r_ebx+0x34u)));
    /* 005d025b: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 005d025e: fstp dword ptr [ebp + 0x16c] */ W_F32((u32)(r_ebp+0x16cu), ST(0)); FPOP();
    /* 005d0264: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5d0269u); f_0082df08();
    /* 005d0269: fld dword ptr [0x92bffc] */ FPUSH(R_F32((u32)(0x92bffcu)));
    /* 005d026f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005d0271: fstp dword ptr [ebp + 0x198] */ W_F32((u32)(r_ebp+0x198u), ST(0)); FPOP();
    /* 005d0277: fld dword ptr [ebx + 0x5c] */ FPUSH(R_F32((u32)(r_ebx+0x5cu)));
    /* 005d027a: lea ecx, [ebp + 0x170] */ r_ecx = (u32)(r_ebp+0x170u);
    /* 005d0280: fsub dword ptr [ebx + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x50u));
    /* 005d0283: fstp dword ptr [ebp + 0x170] */ W_F32((u32)(r_ebp+0x170u), ST(0)); FPOP();
    /* 005d0289: fld dword ptr [ebx + 0x60] */ FPUSH(R_F32((u32)(r_ebx+0x60u)));
    /* 005d028c: fsub dword ptr [ebx + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x54u));
    /* 005d028f: fstp dword ptr [ebp + 0x174] */ W_F32((u32)(r_ebp+0x174u), ST(0)); FPOP();
    /* 005d0295: fld dword ptr [ebx + 0x64] */ FPUSH(R_F32((u32)(r_ebx+0x64u)));
    /* 005d0298: fsub dword ptr [ebx + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x58u));
    /* 005d029b: fstp dword ptr [ebp + 0x178] */ W_F32((u32)(r_ebp+0x178u), ST(0)); FPOP();
    /* 005d02a1: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5d02a6u); f_0082df08();
    /* 005d02a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d02a8: mov edi, 0x6040ff40 */ r_edi = 0x6040ff40u;
    /* 005d02ad: mov esi, 0x408840 */ r_esi = 0x408840u;
    /* 005d02b2: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 005d02b5: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005d02b8: fld dword ptr [ebp + 0x194] */ FPUSH(R_F32((u32)(r_ebp+0x194u)));
    /* 005d02be: fld dword ptr [ebp + 0x164] */ FPUSH(R_F32((u32)(r_ebp+0x164u)));
    /* 005d02c4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005d02c6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005d02c8: fld dword ptr [ebp + 0x168] */ FPUSH(R_F32((u32)(r_ebp+0x168u)));
    /* 005d02ce: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005d02d0: mov dword ptr [ebp + 0xf4], eax */ W32((u32)(r_ebp+0xf4u), r_eax);
    /* 005d02d6: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 005d02d9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d02db: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 005d02de: fld dword ptr [ebp + 0x16c] */ FPUSH(R_F32((u32)(r_ebp+0x16cu)));
    /* 005d02e4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005d02e6: mov dword ptr [ebp + 0xf8], ecx */ W32((u32)(r_ebp+0xf8u), r_ecx);
    /* 005d02ec: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005d02ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d02f1: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005d02f4: fld dword ptr [ebp + 0x170] */ FPUSH(R_F32((u32)(r_ebp+0x170u)));
    /* 005d02fa: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005d02fc: mov dword ptr [ebp + 0xfc], eax */ W32((u32)(r_ebp+0xfcu), r_eax);
    /* 005d0302: mov dword ptr [ebp + 0x100], edi */ W32((u32)(r_ebp+0x100u), r_edi);
    /* 005d0308: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 005d030b: mov dword ptr [ebp + 0x114], eax */ W32((u32)(r_ebp+0x114u), r_eax);
    /* 005d0311: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 005d0314: mov dword ptr [ebp + 0x118], eax */ W32((u32)(r_ebp+0x118u), r_eax);
    /* 005d031a: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 005d031d: mov dword ptr [ebp + 0x11c], edx */ W32((u32)(r_ebp+0x11cu), r_edx);
    /* 005d0323: mov dword ptr [ebp + 0x120], esi */ W32((u32)(r_ebp+0x120u), r_esi);
    /* 005d0329: fld dword ptr [ebx + 0x50] */ FPUSH(R_F32((u32)(r_ebx+0x50u)));
    /* 005d032c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d032e: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 005d0331: fld dword ptr [ebp + 0x174] */ FPUSH(R_F32((u32)(r_ebp+0x174u)));
    /* 005d0337: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005d0339: mov dword ptr [ebp + 0x134], edx */ W32((u32)(r_ebp+0x134u), r_edx);
    /* 005d033f: fld dword ptr [ebx + 0x54] */ FPUSH(R_F32((u32)(r_ebx+0x54u)));
    /* 005d0342: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d0344: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 005d0347: fld dword ptr [ebp + 0x184] */ FPUSH(R_F32((u32)(r_ebp+0x184u)));
    /* 005d034d: mov dword ptr [ebp + 0x138], edx */ W32((u32)(r_ebp+0x138u), r_edx);
    /* 005d0353: fld dword ptr [ebx + 0x58] */ FPUSH(R_F32((u32)(r_ebx+0x58u)));
    /* 005d0356: mov ebx, dword ptr [ebx + 0x58] */ r_ebx = R32((u32)(r_ebx+0x58u));
    /* 005d0359: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 005d035b: fst dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0));
    /* 005d0361: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005d0363: fstp dword ptr [ebp + 0xd8] */ W_F32((u32)(r_ebp+0xd8u), ST(0)); FPOP();
    /* 005d0369: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005d036b: fst dword ptr [ebp + 0xdc] */ W_F32((u32)(r_ebp+0xdcu), ST(0));
    /* 005d0371: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d0373: fst dword ptr [ebp + 0x154] */ W_F32((u32)(r_ebp+0x154u), ST(0));
    /* 005d0379: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d037b: fstp dword ptr [ebp + 0x158] */ W_F32((u32)(r_ebp+0x158u), ST(0)); FPOP();
    /* 005d0381: fld dword ptr [ebp + 0x178] */ FPUSH(R_F32((u32)(r_ebp+0x178u)));
    /* 005d0387: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 005d0389: fld dword ptr [ebp + 0x190] */ FPUSH(R_F32((u32)(r_ebp+0x190u)));
    /* 005d038f: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005d0391: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005d0393: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 005d0395: fld dword ptr [ebp + 0x17c] */ FPUSH(R_F32((u32)(r_ebp+0x17cu)));
    /* 005d039b: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 005d039d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005d039f: fst dword ptr [ebp + 0x15c] */ W_F32((u32)(r_ebp+0x15cu), ST(0));
    /* 005d03a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d03a7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005d03a9: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 005d03af: fld dword ptr [ebp + 0xf4] */ FPUSH(R_F32((u32)(r_ebp+0xf4u)));
    /* 005d03b5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005d03b7: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005d03b9: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 005d03bf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d03c1: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d03c3: fstp dword ptr [ebp + 0xe4] */ W_F32((u32)(r_ebp+0xe4u), ST(0)); FPOP();
    /* 005d03c9: fld dword ptr [ebp + 0xfc] */ FPUSH(R_F32((u32)(r_ebp+0xfcu)));
    /* 005d03cf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005d03d1: fstp dword ptr [ebp + 0xec] */ W_F32((u32)(r_ebp+0xecu), ST(0)); FPOP();
    /* 005d03d7: fld dword ptr [ebp + 0x114] */ FPUSH(R_F32((u32)(r_ebp+0x114u)));
    /* 005d03dd: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d03df: fstp dword ptr [ebp + 0x104] */ W_F32((u32)(r_ebp+0x104u), ST(0)); FPOP();
    /* 005d03e5: fld dword ptr [ebp + 0x11c] */ FPUSH(R_F32((u32)(r_ebp+0x11cu)));
    /* 005d03eb: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005d03ed: fstp dword ptr [ebp + 0x10c] */ W_F32((u32)(r_ebp+0x10cu), ST(0)); FPOP();
    /* 005d03f3: fld dword ptr [ebp + 0x134] */ FPUSH(R_F32((u32)(r_ebp+0x134u)));
    /* 005d03f9: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d03fb: fstp dword ptr [ebp + 0x124] */ W_F32((u32)(r_ebp+0x124u), ST(0)); FPOP();
    /* 005d0401: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005d0403: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005d0405: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0407: fstp dword ptr [ebp + 0x144] */ W_F32((u32)(r_ebp+0x144u), ST(0)); FPOP();
    /* 005d040d: mov dword ptr [ebp + 0x13c], ebx */ W32((u32)(r_ebp+0x13cu), r_ebx);
    /* 005d0413: mov ebx, dword ptr [ebp + 0xd8] */ r_ebx = R32((u32)(r_ebp+0xd8u));
    /* 005d0419: fld dword ptr [ebp + 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0x13cu)));
    /* 005d041f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005d0421: fstp dword ptr [ebp + 0x12c] */ W_F32((u32)(r_ebp+0x12cu), ST(0)); FPOP();
    /* 005d0427: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d0429: fstp dword ptr [ebp + 0x14c] */ W_F32((u32)(r_ebp+0x14cu), ST(0)); FPOP();
    /* 005d042f: mov dword ptr [ebp + 0xd0], 0x408840 */ W32((u32)(r_ebp+0xd0u), 0x408840u);
    /* 005d0439: mov dword ptr [ebp + 0x140], edi */ W32((u32)(r_ebp+0x140u), r_edi);
    /* 005d043f: mov dword ptr [ebp + 0xf0], 0x6040ff40 */ W32((u32)(r_ebp+0xf0u), 0x6040ff40u);
    /* 005d0449: mov dword ptr [ebp + 0xe0], esi */ W32((u32)(r_ebp+0xe0u), r_esi);
    /* 005d044f: mov dword ptr [ebp + 0x160], esi */ W32((u32)(r_ebp+0x160u), r_esi);
    /* 005d0455: mov dword ptr [ebp + 0xc8], ebx */ W32((u32)(r_ebp+0xc8u), r_ebx);
    /* 005d045b: mov dword ptr [ebp + 0x110], 0x408840 */ W32((u32)(r_ebp+0x110u), 0x408840u);
    /* 005d0465: mov dword ptr [ebp + 0xe8], ecx */ W32((u32)(r_ebp+0xe8u), r_ecx);
    /* 005d046b: mov dword ptr [ebp + 0x108], eax */ W32((u32)(r_ebp+0x108u), r_eax);
    /* 005d0471: mov eax, dword ptr [ebp + 0x158] */ r_eax = R32((u32)(r_ebp+0x158u));
    /* 005d0477: mov dword ptr [ebp + 0x130], 0x6040ff40 */ W32((u32)(r_ebp+0x130u), 0x6040ff40u);
    /* 005d0481: mov dword ptr [ebp + 0x128], edx */ W32((u32)(r_ebp+0x128u), r_edx);
    /* 005d0487: mov dword ptr [ebp + 0x148], eax */ W32((u32)(r_ebp+0x148u), r_eax);
    /* 005d048d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d048f: mov dword ptr [ebp + 0x150], 0x408840 */ W32((u32)(r_ebp+0x150u), 0x408840u);
    /* 005d0499: call 0x5d04a8 */ r_esp -= 4; W32(r_esp, 0x5d049eu); f_005d04a8();
    /* 005d049e: mov eax, ebp */ r_eax = r_ebp;
    /* 005d04a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d04a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d04a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d04a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d04a4: ret 8 */ FN_RET(0x005d01a0); r_esp += 12; return;
}

void f_005d04a8(void) /* sub_5D04A8 */
{
    FN_ENTER(0x005d04a8);
    /* 005d04a8: fld dword ptr [0x92bff4] */ FPUSH(R_F32((u32)(0x92bff4u)));
    /* 005d04ae: fadd dword ptr [ecx + 0x194] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x194u));
    /* 005d04b4: fld dword ptr [ecx + 0x190] */ FPUSH(R_F32((u32)(r_ecx+0x190u)));
    /* 005d04ba: fmul dword ptr [0x92bff8] */ ST(0) = ST(0) * R_F32((u32)(0x92bff8u));
    /* 005d04c0: fld dword ptr [ecx + 0x17c] */ FPUSH(R_F32((u32)(r_ecx+0x17cu)));
    /* 005d04c6: mov eax, dword ptr [ecx + 0x118] */ r_eax = R32((u32)(r_ecx+0x118u));
    /* 005d04cc: fld dword ptr [ecx + 0x184] */ FPUSH(R_F32((u32)(r_ecx+0x184u)));
    /* 005d04d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d04d4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005d04d6: fadd dword ptr [ecx + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x114u));
    /* 005d04dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d04de: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005d04e0: fadd dword ptr [ecx + 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x11cu));
    /* 005d04e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d04e8: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 005d04eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d04ed: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 005d04f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d04f2: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 005d04f5: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 005d04f8: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005d04fb: ret  */ FN_RET(0x005d04a8); r_esp += 4; return;
}

void f_005d04fc(void) /* sub_5D04FC */
{
    FN_ENTER(0x005d04fc);
    /* 005d04fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d04fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d04fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d04ff: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d0501: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d0503: call 0x5c6f80 */ r_esp -= 4; W32(r_esp, 0x5d0508u); f_005c6f80();
    /* 005d0508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d050a: je 0x5d0515 */ if (fZ) goto L_005d0515;
L_005d050c:; BB(0x005d050c);
    /* 005d050c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d050e: call 0x5c5b94 */ r_esp -= 4; W32(r_esp, 0x5d0513u); f_005c5b94();
    /* 005d0513: jmp 0x5d0522 */ goto L_005d0522;
L_005d0515:; BB(0x005d0515);
    /* 005d0515: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005d0519: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d051e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_005d0522:; BB(0x005d0522);
    /* 005d0522: push dword ptr [ebp + 0x18c] */ { u32 v = R32((u32)(r_ebp+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0528: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d052d: lea eax, [ebp + 0x190] */ r_eax = (u32)(r_ebp+0x190u);
    /* 005d0533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0534: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5d0539u); f_005dd728();
    /* 005d0539: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d053c: fld dword ptr [ebp + 0x190] */ FPUSH(R_F32((u32)(r_ebp+0x190u)));
    /* 005d0542: fcomp dword ptr [ebp + 0x18c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x18cu))); FPOP();
    /* 005d0548: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d054a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d054b: je 0x5d0754 */ if (fZ) goto L_005d0754;
L_005d0551:; BB(0x005d0551);
    /* 005d0551: lea edx, [ebp + 0xd0] */ r_edx = (u32)(r_ebp+0xd0u);
    /* 005d0557: lea eax, [ebp + 0x170] */ r_eax = (u32)(r_ebp+0x170u);
    /* 005d055d: mov esi, eax */ r_esi = r_eax;
    /* 005d055f: mov edi, edx */ r_edi = r_edx;
L_005d0561:; BB(0x005d0561);
    /* 005d0561: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0563: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d0564: call 0x782ca4 */ r_esp -= 4; W32(r_esp, 0x5d0569u); f_00782ca4();
    /* 005d0569: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d056c: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d056f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0571: jg 0x5d0561 */ if ((!fZ&&fS==fO)) goto L_005d0561;
L_005d0573:; BB(0x005d0573);
    /* 005d0573: fld dword ptr [ebp + 0x194] */ FPUSH(R_F32((u32)(r_ebp+0x194u)));
    /* 005d0579: fcom dword ptr [ebp + 0x198] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x198u))); 
    /* 005d057f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0581: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0582: je 0x5d072b */ if (fZ) goto L_005d072b;
L_005d0588:; BB(0x005d0588);
    /* 005d0588: fld dword ptr [ebp + 0x164] */ FPUSH(R_F32((u32)(r_ebp+0x164u)));
    /* 005d058e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005d0590: fadd dword ptr [ebp + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xf4u));
    /* 005d0596: fld dword ptr [ebp + 0x168] */ FPUSH(R_F32((u32)(r_ebp+0x168u)));
    /* 005d059c: fld dword ptr [ebp + 0x16c] */ FPUSH(R_F32((u32)(r_ebp+0x16cu)));
    /* 005d05a2: fld dword ptr [ebp + 0x170] */ FPUSH(R_F32((u32)(r_ebp+0x170u)));
    /* 005d05a8: fld dword ptr [ebp + 0x174] */ FPUSH(R_F32((u32)(r_ebp+0x174u)));
    /* 005d05ae: fld dword ptr [ebp + 0x178] */ FPUSH(R_F32((u32)(r_ebp+0x178u)));
    /* 005d05b4: fld dword ptr [ebp + 0x184] */ FPUSH(R_F32((u32)(r_ebp+0x184u)));
    /* 005d05ba: mov edx, dword ptr [ebp + 0xe0] */ r_edx = R32((u32)(r_ebp+0xe0u));
    /* 005d05c0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005d05c2: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005d05c4: fadd dword ptr [ebp + 0xf8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xf8u));
    /* 005d05ca: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005d05cc: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005d05ce: fadd dword ptr [ebp + 0xfc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfcu));
    /* 005d05d4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005d05d6: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005d05d8: fadd dword ptr [ebp + 0x134] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x134u));
    /* 005d05de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d05e0: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 005d05e2: fadd dword ptr [ebp + 0x138] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x138u));
    /* 005d05e8: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 005d05ea: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005d05ec: fadd dword ptr [ebp + 0x13c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x13cu));
    /* 005d05f2: fld dword ptr [ebp + 0x17c] */ FPUSH(R_F32((u32)(r_ebp+0x17cu)));
    /* 005d05f8: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005d05fa: fst dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0));
    /* 005d0600: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005d0602: fstp dword ptr [ebp + 0xd8] */ W_F32((u32)(r_ebp+0xd8u), ST(0)); FPOP();
    /* 005d0608: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 005d060e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d0610: fst dword ptr [ebp + 0xdc] */ W_F32((u32)(r_ebp+0xdcu), ST(0));
    /* 005d0616: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0618: fst dword ptr [ebp + 0x154] */ W_F32((u32)(r_ebp+0x154u), ST(0));
    /* 005d061e: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005d0620: fstp dword ptr [ebp + 0x158] */ W_F32((u32)(r_ebp+0x158u), ST(0)); FPOP();
    /* 005d0626: fld dword ptr [ebp + 0x190] */ FPUSH(R_F32((u32)(r_ebp+0x190u)));
    /* 005d062c: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 005d062e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005d0630: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0632: fst dword ptr [ebp + 0x15c] */ W_F32((u32)(r_ebp+0x15cu), ST(0));
    /* 005d0638: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d063a: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005d063c: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 005d0642: fld dword ptr [ebp + 0xf4] */ FPUSH(R_F32((u32)(r_ebp+0xf4u)));
    /* 005d0648: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d064a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d064c: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 005d0652: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d0654: fstp dword ptr [ebp + 0xe4] */ W_F32((u32)(r_ebp+0xe4u), ST(0)); FPOP();
    /* 005d065a: fld dword ptr [ebp + 0xfc] */ FPUSH(R_F32((u32)(r_ebp+0xfcu)));
    /* 005d0660: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005d0662: fstp dword ptr [ebp + 0xec] */ W_F32((u32)(r_ebp+0xecu), ST(0)); FPOP();
    /* 005d0668: fld dword ptr [ebp + 0x114] */ FPUSH(R_F32((u32)(r_ebp+0x114u)));
    /* 005d066e: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d0670: fstp dword ptr [ebp + 0x104] */ W_F32((u32)(r_ebp+0x104u), ST(0)); FPOP();
    /* 005d0676: fld dword ptr [ebp + 0x11c] */ FPUSH(R_F32((u32)(r_ebp+0x11cu)));
    /* 005d067c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005d067e: fstp dword ptr [ebp + 0x10c] */ W_F32((u32)(r_ebp+0x10cu), ST(0)); FPOP();
    /* 005d0684: fld dword ptr [ebp + 0x134] */ FPUSH(R_F32((u32)(r_ebp+0x134u)));
    /* 005d068a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005d068c: fstp dword ptr [ebp + 0x124] */ W_F32((u32)(r_ebp+0x124u), ST(0)); FPOP();
    /* 005d0692: fld dword ptr [ebp + 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0x13cu)));
    /* 005d0698: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005d069a: fstp dword ptr [ebp + 0x12c] */ W_F32((u32)(r_ebp+0x12cu), ST(0)); FPOP();
    /* 005d06a0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005d06a2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005d06a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d06a6: fstp dword ptr [ebp + 0x144] */ W_F32((u32)(r_ebp+0x144u), ST(0)); FPOP();
    /* 005d06ac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d06ae: fstp dword ptr [ebp + 0x14c] */ W_F32((u32)(r_ebp+0x14cu), ST(0)); FPOP();
    /* 005d06b4: mov dword ptr [ebp + 0xc8], eax */ W32((u32)(r_ebp+0xc8u), r_eax);
    /* 005d06ba: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005d06c0: mov dword ptr [ebp + 0xd0], edx */ W32((u32)(r_ebp+0xd0u), r_edx);
    /* 005d06c6: mov dword ptr [ebp + 0xe8], eax */ W32((u32)(r_ebp+0xe8u), r_eax);
    /* 005d06cc: mov eax, dword ptr [ebp + 0x100] */ r_eax = R32((u32)(r_ebp+0x100u));
    /* 005d06d2: mov dword ptr [ebp + 0xf0], eax */ W32((u32)(r_ebp+0xf0u), r_eax);
    /* 005d06d8: mov eax, dword ptr [ebp + 0x118] */ r_eax = R32((u32)(r_ebp+0x118u));
    /* 005d06de: mov dword ptr [ebp + 0x108], eax */ W32((u32)(r_ebp+0x108u), r_eax);
    /* 005d06e4: mov eax, dword ptr [ebp + 0x120] */ r_eax = R32((u32)(r_ebp+0x120u));
    /* 005d06ea: mov dword ptr [ebp + 0x110], eax */ W32((u32)(r_ebp+0x110u), r_eax);
    /* 005d06f0: mov eax, dword ptr [ebp + 0x138] */ r_eax = R32((u32)(r_ebp+0x138u));
    /* 005d06f6: mov dword ptr [ebp + 0x128], eax */ W32((u32)(r_ebp+0x128u), r_eax);
    /* 005d06fc: mov eax, dword ptr [ebp + 0x140] */ r_eax = R32((u32)(r_ebp+0x140u));
    /* 005d0702: mov dword ptr [ebp + 0x130], eax */ W32((u32)(r_ebp+0x130u), r_eax);
    /* 005d0708: mov eax, dword ptr [ebp + 0x158] */ r_eax = R32((u32)(r_ebp+0x158u));
    /* 005d070e: mov dword ptr [ebp + 0x148], eax */ W32((u32)(r_ebp+0x148u), r_eax);
    /* 005d0714: mov eax, dword ptr [ebp + 0x160] */ r_eax = R32((u32)(r_ebp+0x160u));
    /* 005d071a: mov dword ptr [ebp + 0x150], eax */ W32((u32)(r_ebp+0x150u), r_eax);
    /* 005d0720: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d0722: call 0x5d04a8 */ r_esp -= 4; W32(r_esp, 0x5d0727u); f_005d04a8();
    /* 005d0727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0728: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0729: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d072a: ret  */ FN_RET(0x005d04fc); r_esp += 4; return;
L_005d072b:; BB(0x005d072b);
    /* 005d072b: mov edx, dword ptr [ebp + 0x19c] */ r_edx = R32((u32)(r_ebp+0x19cu));
    /* 005d0731: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 005d0734: mov dword ptr [ebp + 0x19c], eax */ W32((u32)(r_ebp+0x19cu), r_eax);
    /* 005d073a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d073c: jne 0x5d0588 */ if (!fZ) goto L_005d0588;
L_005d0742:; BB(0x005d0742);
    /* 005d0742: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005d0746: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d074b: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005d074f: jmp 0x5d0588 */ goto L_005d0588;
L_005d0754:; BB(0x005d0754);
    /* 005d0754: push dword ptr [ebp + 0x198] */ { u32 v = R32((u32)(r_ebp+0x198u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d075a: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005d075f: lea eax, [ebp + 0x194] */ r_eax = (u32)(r_ebp+0x194u);
    /* 005d0765: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0766: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5d076bu); f_005dd728();
    /* 005d076b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d076e: jmp 0x5d0551 */ goto L_005d0551;
}

void f_005d0774(void) /* sub_5D0774 */
{
    FN_ENTER(0x005d0774);
    /* 005d0774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0775: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d0777: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5d077cu); f_0082dbac();
    /* 005d077c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005d0781: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005d0786: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x5d078bu); f_007a9380();
    /* 005d078b: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x5d0790u); f_007a902c();
    /* 005d0790: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0792: call 0x82b23c */ r_esp -= 4; W32(r_esp, 0x5d0797u); f_0082b23c();
    /* 005d0797: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005d0799: add ebx, 0xc4 */ {  u32 a = r_ebx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d079f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07a0: call 0x82b284 */ r_esp -= 4; W32(r_esp, 0x5d07a5u); f_0082b284();
    /* 005d07a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d07a8: call 0x82b2e8 */ r_esp -= 4; W32(r_esp, 0x5d07adu); f_0082b2e8();
    /* 005d07ad: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5d07b2u); f_007a9044();
    /* 005d07b2: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x5d07b7u); f_007a9318();
    /* 005d07b7: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005d07bc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005d07c1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5d07c6u); f_0082dab0();
    /* 005d07c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d07c7: ret  */ FN_RET(0x005d0774); r_esp += 4; return;
}

void f_005d07c8(void) /* sub_5D07C8 */
{
    FN_ENTER(0x005d07c8);
    /* 005d07c8: mov dword ptr [0xa8d98c], 0x3f800000 */ W32((u32)(0xa8d98cu), 0x3f800000u);
    /* 005d07d2: mov dword ptr [0xa8d990], 0x41000000 */ W32((u32)(0xa8d990u), 0x41000000u);
    /* 005d07dc: mov dword ptr [0xa8d994], 0x3fc00000 */ W32((u32)(0xa8d994u), 0x3fc00000u);
    /* 005d07e6: ret  */ FN_RET(0x005d07c8); r_esp += 4; return;
}

void f_005d07e8(void) /* sub_5D07E8 */
{
    FN_ENTER(0x005d07e8);
    /* 005d07e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d07eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d07ed: call 0x5d0880 */ r_esp -= 4; W32(r_esp, 0x5d07f2u); f_005d0880();
    /* 005d07f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d07f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d07f8: jne 0x5d07fe */ if (!fZ) goto L_005d07fe;
L_005d07fa:; BB(0x005d07fa);
    /* 005d07fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d07fb: ret 4 */ FN_RET(0x005d07e8); r_esp += 8; return;
L_005d07fe:; BB(0x005d07fe);
    /* 005d07fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d0804u); f_005c2f74();
    /* 005d0804: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0805: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0806: ret 4 */ FN_RET(0x005d07e8); r_esp += 8; return;
}

void f_005d080c(void) /* sub_5D080C */
{
    FN_ENTER(0x005d080c);
    /* 005d080c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d080d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d080f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d0811: call 0x5d0830 */ r_esp -= 4; W32(r_esp, 0x5d0816u); f_005d0830();
    /* 005d0816: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d081a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d081c: jne 0x5d0822 */ if (!fZ) goto L_005d0822;
L_005d081e:; BB(0x005d081e);
    /* 005d081e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d081f: ret 4 */ FN_RET(0x005d080c); r_esp += 8; return;
L_005d0822:; BB(0x005d0822);
    /* 005d0822: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0823: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d0828u); f_005c2f74();
    /* 005d0828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0829: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d082a: ret 4 */ FN_RET(0x005d080c); r_esp += 8; return;
}

void f_005d0830(void) /* sub_5D0830 */
{
    FN_ENTER(0x005d0830);
    /* 005d0830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0831: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0835: push 0x8da458 */ { u32 v = 0x8da458u; r_esp -= 4; W32(r_esp, v); }
    /* 005d083a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0848: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d084b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d084e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d0851: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d0854: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d0857: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d085a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d085d: mov dword ptr [ecx], 0xb0d118 */ W32((u32)(r_ecx), 0xb0d118u);
    /* 005d0863: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d086a: call 0x5d0880 */ r_esp -= 4; W32(r_esp, 0x5d086fu); f_005d0880();
    /* 005d086f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0879: mov esp, ebp */ r_esp = r_ebp;
    /* 005d087b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d087c: ret  */ FN_RET(0x005d0830); r_esp += 4; return;
}

void f_005d0880(void) /* sub_5D0880 */
{
    FN_ENTER(0x005d0880);
    /* 005d0880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0881: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0885: push 0x8da474 */ { u32 v = 0x8da474u; r_esp -= 4; W32(r_esp, v); }
    /* 005d088a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0891: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0898: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d089b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d089e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d08a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d08a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d08a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d08aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d08ad: mov dword ptr [ecx], 0xb0d0f0 */ W32((u32)(r_ecx), 0xb0d0f0u);
    /* 005d08b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d08ba: call 0x5c5a94 */ r_esp -= 4; W32(r_esp, 0x5d08bfu); f_005c5a94();
    /* 005d08bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d08c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d08c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d08cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d08cc: ret  */ FN_RET(0x005d0880); r_esp += 4; return;
}

void f_005d08d0(void) /* sub_5D08D0 */
{
    FN_ENTER(0x005d08d0);
    /* 005d08d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d08d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d08d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d08d5: call 0x5d08f4 */ r_esp -= 4; W32(r_esp, 0x5d08dau); f_005d08f4();
    /* 005d08da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d08de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d08e0: jne 0x5d08e6 */ if (!fZ) goto L_005d08e6;
L_005d08e2:; BB(0x005d08e2);
    /* 005d08e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d08e3: ret 4 */ FN_RET(0x005d08d0); r_esp += 8; return;
L_005d08e6:; BB(0x005d08e6);
    /* 005d08e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d08e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d08ecu); f_005c2f74();
    /* 005d08ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d08ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d08ee: ret 4 */ FN_RET(0x005d08d0); r_esp += 8; return;
}

void f_005d08f4(void) /* sub_5D08F4 */
{
    FN_ENTER(0x005d08f4);
    /* 005d08f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d08f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005d08f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d08f9: push 0x8da490 */ { u32 v = 0x8da490u; r_esp -= 4; W32(r_esp, v); }
    /* 005d08fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d090c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d090f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d0912: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d0915: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d0918: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d091b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d091e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0921: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005d0924: mov dword ptr [ecx], 0xb0d108 */ W32((u32)(r_ecx), 0xb0d108u);
    /* 005d092a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d092c: je 0x5d0945 */ if (fZ) goto L_005d0945;
L_005d092e:; BB(0x005d092e);
    /* 005d092e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0931: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d0935: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d093a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d093e: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_005d0945:; BB(0x005d0945);
    /* 005d0945: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d094c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d0951u); f_008171e8();
    /* 005d0951: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0954: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d095b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d095d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d095e: ret  */ FN_RET(0x005d08f4); r_esp += 4; return;
}

void f_005d0960(void) /* sub_5D0960 */
{
    FN_ENTER(0x005d0960);
    /* 005d0960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0961: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d0965: call 0x5c5b44 */ r_esp -= 4; W32(r_esp, 0x5d096au); f_005c5b44();
    /* 005d096a: mov dword ptr [ebp + 0x10], 0xa */ W32((u32)(r_ebp+0x10u), 0xau);
    /* 005d0971: mov eax, ebp */ r_eax = r_ebp;
    /* 005d0973: mov dword ptr [ebp + 0x28], 0x42480000 */ W32((u32)(r_ebp+0x28u), 0x42480000u);
    /* 005d097a: mov dword ptr [ebp + 0x2c], 0x3f800000 */ W32((u32)(r_ebp+0x2cu), 0x3f800000u);
    /* 005d0981: mov dword ptr [ebp + 0x30], 0x40200000 */ W32((u32)(r_ebp+0x30u), 0x40200000u);
    /* 005d0988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0989: ret  */ FN_RET(0x005d0960); r_esp += 4; return;
}

void f_005d098c(void) /* sub_5D098C */
{
    FN_ENTER(0x005d098c);
    /* 005d098c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d098d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0990: mov edi, ecx */ r_edi = r_ecx;
    /* 005d0992: movzx eax, word ptr [edi + 0xa8] */ r_eax = (u32)R16((u32)(r_edi+0xa8u));
    /* 005d0999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d099a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d099fu); f_0068d5a8();
    /* 005d099f: mov ecx, eax */ r_ecx = r_eax;
    /* 005d09a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d09a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d09a6: je 0x5d09de */ if (fZ) goto L_005d09de;
L_005d09a8:; BB(0x005d09a8);
    /* 005d09a8: fld dword ptr [ecx + 0x520] */ FPUSH(R_F32((u32)(r_ecx+0x520u)));
    /* 005d09ae: mov edx, dword ptr [edi + 0xcc] */ r_edx = R32((u32)(r_edi+0xccu));
    /* 005d09b4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005d09b7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005d09bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d09c0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005d09c4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d09c8: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d09cc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005d09cf: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005d09d3: fcomp dword ptr [edi + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xccu))); FPOP();
    /* 005d09d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d09db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d09dc: jae 0x5d09e5 */ if (!fC) goto L_005d09e5;
L_005d09de:; BB(0x005d09de);
    /* 005d09de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d09e0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d09e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d09e4: ret  */ FN_RET(0x005d098c); r_esp += 4; return;
L_005d09e5:; BB(0x005d09e5);
    /* 005d09e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d09e6: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005d09e8: call dword ptr [edi + 0x138] */ { u32 t = R32((u32)(r_edi+0x138u)); r_esp -= 4; W32(r_esp, 0x5d09eeu); call_ind(t); }
    /* 005d09ee: mov eax, 1 */ r_eax = 0x1u;
    /* 005d09f3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d09f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d09f7: ret  */ FN_RET(0x005d098c); r_esp += 4; return;
}

void f_005d09f8(void) /* sub_5D09F8 */
{
    FN_ENTER(0x005d09f8);
    /* 005d09f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d09f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d09fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d09fd: push 0x8da4b8 */ { u32 v = 0x8da4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0a10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0a13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d0a16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d0a19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d0a1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d0a1f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a24: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d0a2b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d0a30u); f_005caba4();
    /* 005d0a30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0a31: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d0a34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0a36: je 0x5d0a5b */ if (fZ) goto L_005d0a5b;
L_005d0a38:; BB(0x005d0a38);
    /* 005d0a38: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005d0a3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0a46: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0a49: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0a4c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0a4f: call 0x5d0a6c */ r_esp -= 4; W32(r_esp, 0x5d0a54u); f_005d0a6c();
    /* 005d0a54: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d0a5b:; BB(0x005d0a5b);
    /* 005d0a5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0a5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0a65: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a68: ret  */ FN_RET(0x005d09f8); r_esp += 4; return;
}

void f_005d0a6c(void) /* sub_5D0A6C */
{
    FN_ENTER(0x005d0a6c);
    /* 005d0a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a6d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0a6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a71: push 0x8da4ee */ { u32 v = 0x8da4eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0a84: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0a87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d0a8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d0a8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d0a90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d0a93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d0a96: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d0a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0a9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d0aa0: call 0x5c6a78 */ r_esp -= 4; W32(r_esp, 0x5d0aa5u); f_005c6a78();
    /* 005d0aa5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0aac: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0aaf: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0ab2: fld dword ptr [0x92c028] */ FPUSH(R_F32((u32)(0x92c028u)));
    /* 005d0ab8: fld dword ptr [edi + 0xb0] */ FPUSH(R_F32((u32)(r_edi+0xb0u)));
    /* 005d0abe: fmul dword ptr [0x92c024] */ ST(0) = ST(0) * R_F32((u32)(0x92c024u));
    /* 005d0ac4: mov dword ptr [edi], 0xb0d0f0 */ W32((u32)(r_edi), 0xb0d0f0u);
    /* 005d0aca: mov edx, dword ptr [0x9c2740] */ r_edx = R32((u32)(0x9c2740u));
    /* 005d0ad0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005d0ad7: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ad9: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005d0adc: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 005d0adf: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005d0ae1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0ae3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0ae4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005d0ae6: jb 0x5d0aea */ if (fC) goto L_005d0aea;
L_005d0ae8:; BB(0x005d0ae8);
    /* 005d0ae8: fst st(2) */ ST(2) = ST(0);
L_005d0aea:; BB(0x005d0aea);
    /* 005d0aea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d0aec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0aee: fstp dword ptr [edi + 0xc4] */ W_F32((u32)(r_edi+0xc4u), ST(0)); FPOP();
    /* 005d0af4: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005d0af7: mov dword ptr [edi + 0xc8], ecx */ W32((u32)(r_edi+0xc8u), r_ecx);
    /* 005d0afd: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005d0b00: fstp dword ptr [edi + 0xb0] */ W_F32((u32)(r_edi+0xb0u), ST(0)); FPOP();
    /* 005d0b06: mov dword ptr [edi + 0xcc], esi */ W32((u32)(r_edi+0xccu), r_esi);
    /* 005d0b0c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d0b11u); f_005caba4();
    /* 005d0b11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0b12: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d0b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0b17: je 0x5d0b61 */ if (fZ) goto L_005d0b61;
L_005d0b19:; BB(0x005d0b19);
    /* 005d0b19: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005d0b20: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d0b27: mov eax, ebx */ r_eax = r_ebx;
    /* 005d0b29: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d0b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b2d: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0b30: call 0x5d0b68 */ r_esp -= 4; W32(r_esp, 0x5d0b35u); f_005d0b68();
    /* 005d0b35: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d0b38: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005d0b3f:; BB(0x005d0b3f);
    /* 005d0b3f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0b42: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0b45: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0b48: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0b4b: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 005d0b51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0b54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0b5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0b5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0b5e: ret 8 */ FN_RET(0x005d0a6c); r_esp += 12; return;
L_005d0b61:; BB(0x005d0b61);
    /* 005d0b61: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0b63: jmp 0x5d0b3f */ goto L_005d0b3f;
}

void f_005d0b68(void) /* sub_5D0B68 */
{
    FN_ENTER(0x005d0b68);
    /* 005d0b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b69: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0b6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b6d: push 0x8da508 */ { u32 v = 0x8da508u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0b80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0b83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d0b86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d0b89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d0b8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d0b8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d0b92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0b95: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d0b98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d0b9b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d0ba0u); f_008193cc();
    /* 005d0ba0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0ba7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0baa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0bad: mov dword ptr [edx], 0xb0d108 */ W32((u32)(r_edx), 0xb0d108u);
    /* 005d0bb3: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005d0bb6: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bbb: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 005d0bbe: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 005d0bc1: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 005d0bc4: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 005d0bc7: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 005d0bca: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 005d0bcd: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 005d0bd0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005d0bd3: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 005d0bd6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d0bd8: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 005d0bdb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0bde: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 005d0be1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d0be4: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 005d0be7: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005d0bea: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 005d0bf1: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005d0bf4: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005d0bf7: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005d0bfa: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 005d0c01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d0c03: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005d0c06: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005d0c09: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 005d0c10: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 005d0c17: add edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d0c1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c1b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5d0c20u); f_00509590();
    /* 005d0c20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0c23: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0c26: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0c29: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0c2c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0c2f: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005d0c32: mov eax, edx */ r_eax = r_edx;
    /* 005d0c34: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 005d0c3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0c3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0c45: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0c47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0c48: ret 8 */ FN_RET(0x005d0b68); r_esp += 12; return;
}

void f_005d0c4c(void) /* sub_5D0C4C */
{
    FN_ENTER(0x005d0c4c);
    /* 005d0c4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c4e: mov esi, ecx */ r_esi = r_ecx;
    /* 005d0c50: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005d0c55: mov ecx, esi */ r_ecx = r_esi;
    /* 005d0c57: call 0x5c6f80 */ r_esp -= 4; W32(r_esp, 0x5d0c5cu); f_005c6f80();
    /* 005d0c5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c5e: jne 0x5d0c62 */ if (!fZ) goto L_005d0c62;
L_005d0c60:; BB(0x005d0c60);
    /* 005d0c60: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005d0c62:; BB(0x005d0c62);
    /* 005d0c62: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005d0c64: mov ecx, esi */ r_ecx = r_esi;
    /* 005d0c66: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5d0c69u); call_ind(t); }
    /* 005d0c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c6b: jne 0x5d0c92 */ if (!fZ) goto L_005d0c92;
L_005d0c6d:; BB(0x005d0c6d);
    /* 005d0c6d: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 005d0c70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c72: je 0x5d0ccc */ if (fZ) goto L_005d0ccc;
L_005d0c74:; BB(0x005d0c74);
    /* 005d0c74: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 005d0c7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0c7c: je 0x5d0cc9 */ if (fZ) goto L_005d0cc9;
L_005d0c7e:; BB(0x005d0c7e);
    /* 005d0c7e: mov dword ptr [eax + 0x58], 1 */ W32((u32)(r_eax+0x58u), 0x1u);
    /* 005d0c85: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 005d0c8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0c90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0c91: ret  */ FN_RET(0x005d0c4c); r_esp += 4; return;
L_005d0c92:; BB(0x005d0c92);
    /* 005d0c92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0c94: je 0x5d0c6d */ if (fZ) goto L_005d0c6d;
L_005d0c96:; BB(0x005d0c96);
    /* 005d0c96: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 005d0c99: fld dword ptr [esi + 0xc4] */ FPUSH(R_F32((u32)(r_esi+0xc4u)));
    /* 005d0c9f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d0ca1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0ca3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0ca4: jbe 0x5d0cbe */ if ((fC||fZ)) goto L_005d0cbe;
L_005d0ca6:; BB(0x005d0ca6);
    /* 005d0ca6: fld dword ptr [esi + 0xc8] */ FPUSH(R_F32((u32)(r_esi+0xc8u)));
    /* 005d0cac: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005d0cae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d0cb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0cb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0cb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0cb5: jb 0x5d0cb9 */ if (fC) goto L_005d0cb9;
L_005d0cb7:; BB(0x005d0cb7);
    /* 005d0cb7: fst st(1) */ ST(1) = ST(0);
L_005d0cb9:; BB(0x005d0cb9);
    /* 005d0cb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0cbb: fst dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0));
L_005d0cbe:; BB(0x005d0cbe);
    /* 005d0cbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d0cc0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d0cc2: mov ecx, esi */ r_ecx = r_esi;
    /* 005d0cc4: call 0x5c5b94 */ r_esp -= 4; W32(r_esp, 0x5d0cc9u); f_005c5b94();
L_005d0cc9:; BB(0x005d0cc9);
    /* 005d0cc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0cca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0ccb: ret  */ FN_RET(0x005d0c4c); r_esp += 4; return;
L_005d0ccc:; BB(0x005d0ccc);
    /* 005d0ccc: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005d0cd0: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0cd5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005d0cd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0cda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0cdb: ret  */ FN_RET(0x005d0c4c); r_esp += 4; return;
}

void f_005d0cdc(void) /* sub_5D0CDC */
{
    FN_ENTER(0x005d0cdc);
    /* 005d0cdc: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 005d0ce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d0ce4: jle 0x5d0cf5 */ if ((fZ||fS!=fO)) goto L_005d0cf5;
L_005d0ce6:; BB(0x005d0ce6);
    /* 005d0ce6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0ce9: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 005d0cef: mov eax, 1 */ r_eax = 0x1u;
    /* 005d0cf4: ret  */ FN_RET(0x005d0cdc); r_esp += 4; return;
L_005d0cf5:; BB(0x005d0cf5);
    /* 005d0cf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0cf7: ret  */ FN_RET(0x005d0cdc); r_esp += 4; return;
}

void f_005d0cf8(void) /* sub_5D0CF8 */
{
    FN_ENTER(0x005d0cf8);
    /* 005d0cf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cf9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0cfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cfd: push 0x8da530 */ { u32 v = 0x8da530u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0d10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0d13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d0d16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d0d19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d0d1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d0d1f: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d24: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d0d2b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d0d30u); f_005caba4();
    /* 005d0d30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0d31: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d0d34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0d36: je 0x5d0d5e */ if (fZ) goto L_005d0d5e;
L_005d0d38:; BB(0x005d0d38);
    /* 005d0d38: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005d0d3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0d46: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0d49: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0d4c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0d4f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0d52: call 0x5d0d6c */ r_esp -= 4; W32(r_esp, 0x5d0d57u); f_005d0d6c();
    /* 005d0d57: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d0d5e:; BB(0x005d0d5e);
    /* 005d0d5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0d61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0d68: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0d6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0d6b: ret  */ FN_RET(0x005d0cf8); r_esp += 4; return;
}

void f_005d0d6c(void) /* sub_5D0D6C */
{
    FN_ENTER(0x005d0d6c);
    /* 005d0d6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d0d6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0d73: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0d77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d0d79: call 0x5d0a6c */ r_esp -= 4; W32(r_esp, 0x5d0d7eu); f_005d0a6c();
    /* 005d0d7e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005d0d82: mov dword ptr [ebx], 0xb0d118 */ W32((u32)(r_ebx), 0xb0d118u);
    /* 005d0d88: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 005d0d8e: mov eax, ebx */ r_eax = r_ebx;
    /* 005d0d90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0d91: ret 0xc */ FN_RET(0x005d0d6c); r_esp += 16; return;
}

void f_005d0d94(void) /* sub_5D0D94 */
{
    FN_ENTER(0x005d0d94);
    /* 005d0d94: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 005d0d97: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005d0d9a: add eax, 0x71c */ {  u32 a = r_eax; u32 b = 0x71cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0d9f: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 005d0da2: mov eax, dword ptr [ecx + 0x58] */ r_eax = R32((u32)(r_ecx+0x58u));
    /* 005d0da5: add edx, 0xfffff1c8 */ {  u32 a = r_edx; u32 b = 0xfffff1c8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d0dab: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 005d0dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0db0: jne 0x5d0dde */ if (!fZ) goto L_005d0dde;
L_005d0db2:; BB(0x005d0db2);
    /* 005d0db2: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 005d0db5: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 005d0db8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d0dba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0dbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0dbd: jbe 0x5d0dd4 */ if ((fC||fZ)) goto L_005d0dd4;
L_005d0dbf:; BB(0x005d0dbf);
    /* 005d0dbf: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 005d0dc2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005d0dc4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d0dc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0dc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0dc9: jae 0x5d0dcd */ if (!fC) goto L_005d0dcd;
L_005d0dcb:; BB(0x005d0dcb);
    /* 005d0dcb: fst st(1) */ ST(1) = ST(0);
L_005d0dcd:; BB(0x005d0dcd);
    /* 005d0dcd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d0dcf: fst dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0));
    /* 005d0dd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_005d0dd4:; BB(0x005d0dd4);
    /* 005d0dd4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d0dd6: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 005d0dd9: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 005d0ddc: jmp 0x5d0e08 */ goto L_005d0e08;
L_005d0dde:; BB(0x005d0dde);
    /* 005d0dde: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 005d0de1: fcom dword ptr [0x92c01c] */ fx_compare(ST(0), R_F32((u32)(0x92c01cu))); 
    /* 005d0de7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d0de9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d0dea: jbe 0x5d0df9 */ if ((fC||fZ)) goto L_005d0df9;
L_005d0dec:; BB(0x005d0dec);
    /* 005d0dec: fld dword ptr [0x92c018] */ FPUSH(R_F32((u32)(0x92c018u)));
    /* 005d0df2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d0df4: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 005d0df7: jmp 0x5d0e08 */ goto L_005d0e08;
L_005d0df9:; BB(0x005d0df9);
    /* 005d0df9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d0dfb: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005d0dff: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d0e04: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_005d0e08:; BB(0x005d0e08);
    /* 005d0e08: lea edx, [ecx + 0x5c] */ r_edx = (u32)(r_ecx+0x5cu);
    /* 005d0e0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d0e0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e11: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e13: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5d0e18u); f_008144b0();
    /* 005d0e18: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d0e1b: ret  */ FN_RET(0x005d0d94); r_esp += 4; return;
}

void f_005d0e1c(void) /* sub_5D0E1C */
{
    FN_ENTER(0x005d0e1c);
    /* 005d0e1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e1e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d0e20: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d0e22: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5d0e27u); f_008173b4();
    /* 005d0e27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0e29: jne 0x5d0e2e */ if (!fZ) goto L_005d0e2e;
L_005d0e2b:; BB(0x005d0e2b);
    /* 005d0e2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0e2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0e2d: ret  */ FN_RET(0x005d0e1c); r_esp += 4; return;
L_005d0e2e:; BB(0x005d0e2e);
    /* 005d0e2e: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0e31: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5d0e36u); f_005c57ac();
    /* 005d0e36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0e37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0e39: je 0x5d0e2b */ if (fZ) goto L_005d0e2b;
L_005d0e3b:; BB(0x005d0e3b);
    /* 005d0e3b: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005d0e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0e40: je 0x5d0e4c */ if (fZ) goto L_005d0e4c;
L_005d0e42:; BB(0x005d0e42);
    /* 005d0e42: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 005d0e47: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d0e4a: je 0x5d0e4f */ if (fZ) goto L_005d0e4f;
L_005d0e4c:; BB(0x005d0e4c);
    /* 005d0e4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0e4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0e4e: ret  */ FN_RET(0x005d0e1c); r_esp += 4; return;
L_005d0e4f:; BB(0x005d0e4f);
    /* 005d0e4f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e51: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5d0e56u); f_007a94a0();
    /* 005d0e56: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005d0e5b: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005d0e61: mov esi, dword ptr [0xaf0364] */ r_esi = R32((u32)(0xaf0364u));
    /* 005d0e67: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005d0e6c: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d0e6f: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005d0e75: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005d0e7b: mov dword ptr [0xaab500], esi */ W32((u32)(0xaab500u), r_esi);
    /* 005d0e81: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 005d0e87: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 005d0e8d: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 005d0e93: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 005d0e99: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 005d0e9f: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 005d0ea5: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 005d0eab: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005d0eb0: lea eax, [ebx + 0x28] */ r_eax = (u32)(r_ebx+0x28u);
    /* 005d0eb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0eb4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5d0eb9u); f_0082d710();
    /* 005d0eb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0ebc: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5d0ec1u); f_0082dbac();
    /* 005d0ec1: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005d0ec4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5d0ec9u); f_00829cc8();
    /* 005d0ec9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5d0eceu); f_0082d7b0();
    /* 005d0ece: lea ecx, [ebx + 0x5c] */ r_ecx = (u32)(r_ebx+0x5cu);
    /* 005d0ed1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5d0ed6u); f_0082d838();
    /* 005d0ed6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5d0edbu); f_0082d7b0();
    /* 005d0edb: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005d0ede: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0ee0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5d0ee5u); f_0082d8bc();
    /* 005d0ee5: lea esi, [ebx + 0x48] */ r_esi = (u32)(r_ebx+0x48u);
    /* 005d0ee8: mov ecx, esi */ r_ecx = r_esi;
    /* 005d0eea: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5d0eefu); f_00831290();
    /* 005d0eef: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005d0ef2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0ef5: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x5d0efau); f_008321d8();
    /* 005d0efa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0efb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5d0f00u); f_0082da80();
    /* 005d0f00: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5d0f05u); f_0082d7b0();
    /* 005d0f05: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 005d0f08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0f0a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5d0f0fu); f_0082d8bc();
    /* 005d0f0f: mov ecx, esi */ r_ecx = r_esi;
    /* 005d0f11: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5d0f16u); f_00831290();
    /* 005d0f16: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005d0f19: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005d0f1c: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d0f1f: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x5d0f24u); f_008321d8();
    /* 005d0f24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0f25: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5d0f2au); f_0082da80();
    /* 005d0f2a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5d0f2fu); f_0082da80();
    /* 005d0f2f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5d0f34u); f_0082dab0();
    /* 005d0f34: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005d0f39: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005d0f3f: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005d0f45: mov ebx, dword ptr [0xaab514] */ r_ebx = R32((u32)(0xaab514u));
    /* 005d0f4b: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 005d0f51: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005d0f56: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 005d0f5b: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005d0f61: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005d0f67: mov dword ptr [0xaf037c], ebx */ W32((u32)(0xaf037cu), r_ebx);
    /* 005d0f6d: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 005d0f73: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 005d0f78: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005d0f7d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005d0f82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d0f83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d0f84: ret  */ FN_RET(0x005d0e1c); r_esp += 4; return;
}

void f_005d0f88(void) /* sub_5D0F88 */
{
    FN_ENTER(0x005d0f88);
    /* 005d0f88: mov dword ptr [0xa8d99c], 0x3f800000 */ W32((u32)(0xa8d99cu), 0x3f800000u);
    /* 005d0f92: mov dword ptr [0xa8d9a0], 0x41000000 */ W32((u32)(0xa8d9a0u), 0x41000000u);
    /* 005d0f9c: mov dword ptr [0xa8d9a4], 0x3fc00000 */ W32((u32)(0xa8d9a4u), 0x3fc00000u);
    /* 005d0fa6: ret  */ FN_RET(0x005d0f88); r_esp += 4; return;
}

void f_005d0fa8(void) /* sub_5D0FA8 */
{
    FN_ENTER(0x005d0fa8);
    /* 005d0fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fa9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0fab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fad: push 0x8da54c */ { u32 v = 0x8da54cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d0fc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0fc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d0fc6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d0fc9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d0fcc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d0fcf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d0fd2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d0fd5: mov eax, ecx */ r_eax = r_ecx;
    /* 005d0fd7: mov dword ptr [eax], 0xb0d220 */ W32((u32)(r_eax), 0xb0d220u);
    /* 005d0fdd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d0fe4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d0fe9u); f_008171e8();
    /* 005d0fe9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0fec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d0fee: jne 0x5d1000 */ if (!fZ) goto L_005d1000;
L_005d0ff0:; BB(0x005d0ff0);
    /* 005d0ff0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0ff3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0ffa: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0ffd: ret 4 */ FN_RET(0x005d0fa8); r_esp += 8; return;
L_005d1000:; BB(0x005d1000);
    /* 005d1000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1004: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d1009u); f_005c2f74();
    /* 005d1009: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d100a: jmp 0x5d0ff0 */ goto L_005d0ff0;
}

