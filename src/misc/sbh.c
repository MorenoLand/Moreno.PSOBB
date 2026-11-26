#include "protos.h"

void f_0085f5e0(void) /* ___sbh_heap_init */
{
    FN_ENTER(0x0085f5e0);
    /* 0085f5e0: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f5e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f5e7: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f5ed: call dword ptr [0x8f8190] */ { u32 t = R32((u32)(0x8f8190u)); r_esp -= 4; W32(r_esp, 0x85f5f3u); call_ind(t); }
    /* 0085f5f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f5f5: mov dword ptr [0xaf0b88], eax */ W32((u32)(0xaf0b88u), r_eax);
    /* 0085f5fa: jne 0x85f5fd */ if (!fZ) goto L_0085f5fd;
L_0085f5fc:; BB(0x0085f5fc);
    /* 0085f5fc: ret  */ FN_RET(0x0085f5e0); r_esp += 4; return;
L_0085f5fd:; BB(0x0085f5fd);
    /* 0085f5fd: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085f601: and dword ptr [0xaf0b80], 0 */ { u32 ad = (u32)(0xaf0b80u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f608: and dword ptr [0xaf0b84], 0 */ { u32 ad = (u32)(0xaf0b84u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f60f: mov dword ptr [0xaf0b90], eax */ W32((u32)(0xaf0b90u), r_eax);
    /* 0085f614: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085f616: mov dword ptr [0xaf0b8c], ecx */ W32((u32)(0xaf0b8cu), r_ecx);
    /* 0085f61c: mov dword ptr [0xaf0b94], 0x10 */ W32((u32)(0xaf0b94u), 0x10u);
    /* 0085f626: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085f627: ret  */ FN_RET(0x0085f5e0); r_esp += 4; return;
}

void f_0085f628(void) /* ___sbh_find_block */
{
    FN_ENTER(0x0085f628);
    /* 0085f628: mov eax, dword ptr [0xaf0b84] */ r_eax = R32((u32)(0xaf0b84u));
    /* 0085f62d: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0085f630: mov eax, dword ptr [0xaf0b88] */ r_eax = R32((u32)(0xaf0b88u));
    /* 0085f635: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 0085f638: jmp 0x85f64c */ goto L_0085f64c;
L_0085f63a:; BB(0x0085f63a);
    /* 0085f63a: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0085f63e: sub edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085f641: cmp edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f647: jb 0x85f652 */ if (fC) goto L_0085f652;
L_0085f649:; BB(0x0085f649);
    /* 0085f649: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085f64c:; BB(0x0085f64c);
    /* 0085f64c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085f64e: jb 0x85f63a */ if (fC) goto L_0085f63a;
L_0085f650:; BB(0x0085f650);
    /* 0085f650: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085f652:; BB(0x0085f652);
    /* 0085f652: ret  */ FN_RET(0x0085f628); r_esp += 4; return;
}

void f_0085f653(void) /* ___sbh_free_block */
{
    FN_ENTER(0x0085f653);
    /* 0085f653: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085f654: mov ebp, esp */ r_ebp = r_esp;
    /* 0085f656: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085f659: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f65c: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0085f65f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f660: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085f663: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f664: mov edi, esi */ r_edi = r_esi;
    /* 0085f666: sub edi, dword ptr [ecx + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0085f669: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085f66c: shr edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0085f66f: mov ecx, edi */ r_ecx = r_edi;
    /* 0085f671: imul ecx, ecx, 0x204 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x204u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085f677: lea ecx, [ecx + eax + 0x144] */ r_ecx = (u32)(r_ecx+r_eax+0x144u);
    /* 0085f67e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0085f681: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0085f683: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f684: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f687: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0085f68a: jne 0x85f967 */ if (!fZ) goto L_0085f967;
L_0085f690:; BB(0x0085f690);
    /* 0085f690: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f691: lea ebx, [ecx + esi] */ r_ebx = (u32)(r_ecx+r_esi);
    /* 0085f694: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0085f696: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0085f699: mov edx, dword ptr [esi - 4] */ r_edx = R32((u32)(r_esi+0xfffffffcu));
    /* 0085f69c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0085f69f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085f6a2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f6a5: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0085f6a8: jne 0x85f71e */ if (!fZ) goto L_0085f71e;
L_0085f6aa:; BB(0x0085f6aa);
    /* 0085f6aa: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0085f6ad: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085f6ae: cmp edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085f6b1: jbe 0x85f6b6 */ if ((fC||fZ)) goto L_0085f6b6;
L_0085f6b3:; BB(0x0085f6b3);
    /* 0085f6b3: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085f6b5: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0085f6b6:; BB(0x0085f6b6);
    /* 0085f6b6: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0085f6b9: cmp ecx, dword ptr [ebx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f6bc: jne 0x85f700 */ if (!fZ) goto L_0085f700;
L_0085f6be:; BB(0x0085f6be);
    /* 0085f6be: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f6c1: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085f6c6: jae 0x85f6e1 */ if (!fC) goto L_0085f6e1;
L_0085f6c8:; BB(0x0085f6c8);
    /* 0085f6c8: mov ecx, edx */ r_ecx = r_edx;
    /* 0085f6ca: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085f6cc: lea ecx, [edx + eax + 4] */ r_ecx = (u32)(r_edx+r_eax+0x4u);
    /* 0085f6d0: not ebx */ r_ebx = ~r_ebx;
    /* 0085f6d2: and dword ptr [eax + edi*4 + 0x44], ebx */ { u32 ad = (u32)(r_eax+r_edi*4+0x44u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f6d6: dec byte ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085f6d8: jne 0x85f6fd */ if (!fZ) goto L_0085f6fd;
L_0085f6da:; BB(0x0085f6da);
    /* 0085f6da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f6dd: and dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f6df: jmp 0x85f6fd */ goto L_0085f6fd;
L_0085f6e1:; BB(0x0085f6e1);
    /* 0085f6e1: lea ecx, [edx - 0x20] */ r_ecx = (u32)(r_edx+0xffffffe0u);
    /* 0085f6e4: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085f6e6: lea ecx, [edx + eax + 4] */ r_ecx = (u32)(r_edx+r_eax+0x4u);
    /* 0085f6ea: not ebx */ r_ebx = ~r_ebx;
    /* 0085f6ec: and dword ptr [eax + edi*4 + 0xc4], ebx */ { u32 ad = (u32)(r_eax+r_edi*4+0xc4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f6f3: dec byte ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085f6f5: jne 0x85f6fd */ if (!fZ) goto L_0085f6fd;
L_0085f6f7:; BB(0x0085f6f7);
    /* 0085f6f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f6fa: and dword ptr [ecx + 4], ebx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085f6fd:; BB(0x0085f6fd);
    /* 0085f6fd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_0085f700:; BB(0x0085f700);
    /* 0085f700: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085f703: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0085f706: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085f709: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f70c: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0085f70f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0085f712: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0085f715: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0085f718: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0085f71b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0085f71e:; BB(0x0085f71e);
    /* 0085f71e: mov edx, ecx */ r_edx = r_ecx;
    /* 0085f720: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0085f723: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085f724: cmp edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085f727: jbe 0x85f72c */ if ((fC||fZ)) goto L_0085f72c;
L_0085f729:; BB(0x0085f729);
    /* 0085f729: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085f72b: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0085f72c:; BB(0x0085f72c);
    /* 0085f72c: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085f72f: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0085f732: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0085f735: jne 0x85f7ca */ if (!fZ) goto L_0085f7ca;
L_0085f73b:; BB(0x0085f73b);
    /* 0085f73b: sub esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085f73e: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085f741: sar ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0085f744: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085f746: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0085f749: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0085f74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085f74b: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085f74d: jbe 0x85f751 */ if ((fC||fZ)) goto L_0085f751;
L_0085f74f:; BB(0x0085f74f);
    /* 0085f74f: mov ebx, esi */ r_ebx = r_esi;
L_0085f751:; BB(0x0085f751);
    /* 0085f751: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f754: mov edx, ecx */ r_edx = r_ecx;
    /* 0085f756: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0085f759: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085f75a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085f75c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0085f75f: jbe 0x85f763 */ if ((fC||fZ)) goto L_0085f763;
L_0085f761:; BB(0x0085f761);
    /* 0085f761: mov edx, esi */ r_edx = r_esi;
L_0085f763:; BB(0x0085f763);
    /* 0085f763: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f765: je 0x85f7c5 */ if (fZ) goto L_0085f7c5;
L_0085f767:; BB(0x0085f767);
    /* 0085f767: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085f76a: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0085f76d: cmp esi, dword ptr [ecx + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f770: jne 0x85f7ad */ if (!fZ) goto L_0085f7ad;
L_0085f772:; BB(0x0085f772);
    /* 0085f772: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f775: mov esi, 0x80000000 */ r_esi = 0x80000000u;
    /* 0085f77a: jae 0x85f793 */ if (!fC) goto L_0085f793;
L_0085f77c:; BB(0x0085f77c);
    /* 0085f77c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0085f77e: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0085f780: not esi */ r_esi = ~r_esi;
    /* 0085f782: and dword ptr [eax + edi*4 + 0x44], esi */ { u32 ad = (u32)(r_eax+r_edi*4+0x44u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f786: dec byte ptr [ebx + eax + 4] */ { u32 ad = (u32)(r_ebx+r_eax+0x4u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085f78a: jne 0x85f7ad */ if (!fZ) goto L_0085f7ad;
L_0085f78c:; BB(0x0085f78c);
    /* 0085f78c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f78f: and dword ptr [ecx], esi */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f791: jmp 0x85f7ad */ goto L_0085f7ad;
L_0085f793:; BB(0x0085f793);
    /* 0085f793: lea ecx, [ebx - 0x20] */ r_ecx = (u32)(r_ebx+0xffffffe0u);
    /* 0085f796: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0085f798: not esi */ r_esi = ~r_esi;
    /* 0085f79a: and dword ptr [eax + edi*4 + 0xc4], esi */ { u32 ad = (u32)(r_eax+r_edi*4+0xc4u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f7a1: dec byte ptr [ebx + eax + 4] */ { u32 ad = (u32)(r_ebx+r_eax+0x4u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085f7a5: jne 0x85f7ad */ if (!fZ) goto L_0085f7ad;
L_0085f7a7:; BB(0x0085f7a7);
    /* 0085f7a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f7aa: and dword ptr [ecx + 4], esi */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085f7ad:; BB(0x0085f7ad);
    /* 0085f7ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085f7b0: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0085f7b3: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0085f7b6: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0085f7b9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085f7bc: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0085f7bf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0085f7c2: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
L_0085f7c5:; BB(0x0085f7c5);
    /* 0085f7c5: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085f7c8: jmp 0x85f7cd */ goto L_0085f7cd;
L_0085f7ca:; BB(0x0085f7ca);
    /* 0085f7ca: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_0085f7cd:; BB(0x0085f7cd);
    /* 0085f7cd: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f7d1: jne 0x85f7db */ if (!fZ) goto L_0085f7db;
L_0085f7d3:; BB(0x0085f7d3);
    /* 0085f7d3: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085f7d5: je 0x85f85b */ if (fZ) goto L_0085f85b;
L_0085f7db:; BB(0x0085f7db);
    /* 0085f7db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0085f7de: lea ecx, [ecx + edx*8] */ r_ecx = (u32)(r_ecx+r_edx*8);
    /* 0085f7e1: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0085f7e4: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0085f7e7: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0085f7ea: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0085f7ed: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0085f7f0: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 0085f7f3: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0085f7f6: cmp ecx, dword ptr [esi + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085f7f9: jne 0x85f85b */ if (!fZ) goto L_0085f85b;
L_0085f7fb:; BB(0x0085f7fb);
    /* 0085f7fb: mov cl, byte ptr [edx + eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x4u))) & 0xffu);
    /* 0085f7ff: mov byte ptr [ebp + 0xf], cl */ W8((u32)(r_ebp+0xfu), (u8)r_ecx);
    /* 0085f802: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085f804: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085f807: mov byte ptr [edx + eax + 4], cl */ W8((u32)(r_edx+r_eax+0x4u), (u8)r_ecx);
    /* 0085f80b: jae 0x85f832 */ if (!fC) goto L_0085f832;
L_0085f80d:; BB(0x0085f80d);
    /* 0085f80d: cmp byte ptr [ebp + 0xf], 0 */ {  u32 a = R8((u32)(r_ebp+0xfu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085f811: jne 0x85f821 */ if (!fZ) goto L_0085f821;
L_0085f813:; BB(0x0085f813);
    /* 0085f813: mov ecx, edx */ r_ecx = r_edx;
    /* 0085f815: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085f81a: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085f81c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f81f: or dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085f821:; BB(0x0085f821);
    /* 0085f821: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085f826: mov ecx, edx */ r_ecx = r_edx;
    /* 0085f828: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085f82a: lea eax, [eax + edi*4 + 0x44] */ r_eax = (u32)(r_eax+r_edi*4+0x44u);
    /* 0085f82e: or dword ptr [eax], ebx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 0085f830: jmp 0x85f85b */ goto L_0085f85b;
L_0085f832:; BB(0x0085f832);
    /* 0085f832: cmp byte ptr [ebp + 0xf], 0 */ {  u32 a = R8((u32)(r_ebp+0xfu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085f836: jne 0x85f848 */ if (!fZ) goto L_0085f848;
L_0085f838:; BB(0x0085f838);
    /* 0085f838: lea ecx, [edx - 0x20] */ r_ecx = (u32)(r_edx+0xffffffe0u);
    /* 0085f83b: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085f840: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085f842: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085f845: or dword ptr [ecx + 4], ebx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085f848:; BB(0x0085f848);
    /* 0085f848: lea ecx, [edx - 0x20] */ r_ecx = (u32)(r_edx+0xffffffe0u);
    /* 0085f84b: mov edx, 0x80000000 */ r_edx = 0x80000000u;
    /* 0085f850: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0085f852: lea eax, [eax + edi*4 + 0xc4] */ r_eax = (u32)(r_eax+r_edi*4+0xc4u);
    /* 0085f859: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fC = 0; }
L_0085f85b:; BB(0x0085f85b);
    /* 0085f85b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085f85e: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0085f860: mov dword ptr [eax + esi - 4], eax */ W32((u32)(r_eax+r_esi+0xfffffffcu), r_eax);
    /* 0085f864: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0085f867: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085f869: jne 0x85f966 */ if (!fZ) goto L_0085f966;
L_0085f86f:; BB(0x0085f86f);
    /* 0085f86f: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f876: je 0x85f958 */ if (fZ) goto L_0085f958;
L_0085f87c:; BB(0x0085f87c);
    /* 0085f87c: mov ecx, dword ptr [0xaf0b98] */ r_ecx = R32((u32)(0xaf0b98u));
    /* 0085f882: mov esi, dword ptr [0x8f8238] */ r_esi = R32((u32)(0x8f8238u));
    /* 0085f888: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f88d: shl ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0085f890: add ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f893: mov ebx, 0x8000 */ r_ebx = 0x8000u;
    /* 0085f898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f89a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x85f89cu); call_ind(t); }
    /* 0085f89c: mov ecx, dword ptr [0xaf0b98] */ r_ecx = R32((u32)(0xaf0b98u));
    /* 0085f8a2: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f8a7: mov edx, 0x80000000 */ r_edx = 0x80000000u;
    /* 0085f8ac: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0085f8ae: or dword ptr [eax + 8], edx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f8b1: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f8b6: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0085f8b9: mov ecx, dword ptr [0xaf0b98] */ r_ecx = R32((u32)(0xaf0b98u));
    /* 0085f8bf: and dword ptr [eax + ecx*4 + 0xc4], 0 */ { u32 ad = (u32)(r_eax+r_ecx*4+0xc4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f8c7: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f8cc: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0085f8cf: dec byte ptr [eax + 0x43] */ { u32 ad = (u32)(r_eax+0x43u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0085f8d2: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f8d7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0085f8da: cmp byte ptr [ecx + 0x43], 0 */ {  u32 a = R8((u32)(r_ecx+0x43u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f8de: jne 0x85f8e9 */ if (!fZ) goto L_0085f8e9;
L_0085f8e0:; BB(0x0085f8e0);
    /* 0085f8e0: and dword ptr [eax + 4], 0xfffffffe */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f8e4: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
L_0085f8e9:; BB(0x0085f8e9);
    /* 0085f8e9: cmp dword ptr [eax + 8], -1 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f8ed: jne 0x85f958 */ if (!fZ) goto L_0085f958;
L_0085f8ef:; BB(0x0085f8ef);
    /* 0085f8ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f8f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f8f2: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f8f5: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x85f8f7u); call_ind(t); }
    /* 0085f8f7: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f8fc: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f8ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f901: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f907: call dword ptr [0x8f81dc] */ { u32 t = R32((u32)(0x8f81dcu)); r_esp -= 4; W32(r_esp, 0x85f90du); call_ind(t); }
    /* 0085f90d: mov eax, dword ptr [0xaf0b84] */ r_eax = R32((u32)(0xaf0b84u));
    /* 0085f912: mov edx, dword ptr [0xaf0b88] */ r_edx = R32((u32)(0xaf0b88u));
    /* 0085f918: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085f91b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f91e: mov ecx, eax */ r_ecx = r_eax;
    /* 0085f920: mov eax, dword ptr [0xaf0b80] */ r_eax = R32((u32)(0xaf0b80u));
    /* 0085f925: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f927: lea ecx, [ecx + edx - 0x14] */ r_ecx = (u32)(r_ecx+r_edx+0xffffffecu);
    /* 0085f92b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f92c: lea ecx, [eax + 0x14] */ r_ecx = (u32)(r_eax+0x14u);
    /* 0085f92f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f931: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x85f936u); f_00858c80();
    /* 0085f936: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085f939: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085f93c: dec dword ptr [0xaf0b84] */ { u32 ad = (u32)(0xaf0b84u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f942: cmp eax, dword ptr [0xaf0b80] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0b80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f948: jbe 0x85f94e */ if ((fC||fZ)) goto L_0085f94e;
L_0085f94a:; BB(0x0085f94a);
    /* 0085f94a: sub dword ptr [ebp + 8], 0x14 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
L_0085f94e:; BB(0x0085f94e);
    /* 0085f94e: mov eax, dword ptr [0xaf0b88] */ r_eax = R32((u32)(0xaf0b88u));
    /* 0085f953: mov dword ptr [0xaf0b90], eax */ W32((u32)(0xaf0b90u), r_eax);
L_0085f958:; BB(0x0085f958);
    /* 0085f958: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085f95b: mov dword ptr [0xaf0b80], eax */ W32((u32)(0xaf0b80u), r_eax);
    /* 0085f960: mov dword ptr [0xaf0b98], edi */ W32((u32)(0xaf0b98u), r_edi);
L_0085f966:; BB(0x0085f966);
    /* 0085f966: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085f967:; BB(0x0085f967);
    /* 0085f967: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085f968: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085f969: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085f96a: ret  */ FN_RET(0x0085f653); r_esp += 4; return;
}

void f_0085f96b(void) /* ___sbh_alloc_new_region */
{
    FN_ENTER(0x0085f96b);
    /* 0085f96b: mov eax, dword ptr [0xaf0b84] */ r_eax = R32((u32)(0xaf0b84u));
    /* 0085f970: mov ecx, dword ptr [0xaf0b94] */ r_ecx = R32((u32)(0xaf0b94u));
    /* 0085f976: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f977: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085f979: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f97b: jne 0x85f9b1 */ if (!fZ) goto L_0085f9b1;
L_0085f97d:; BB(0x0085f97d);
    /* 0085f97d: lea eax, [ecx + ecx*4 + 0x50] */ r_eax = (u32)(r_ecx+r_ecx*4+0x50u);
    /* 0085f981: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f985: push dword ptr [0xaf0b88] */ { u32 v = R32((u32)(0xaf0b88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f98b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f98c: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f992: call dword ptr [0x8f8240] */ { u32 t = R32((u32)(0x8f8240u)); r_esp -= 4; W32(r_esp, 0x85f998u); call_ind(t); }
    /* 0085f998: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f99a: jne 0x85f9a0 */ if (!fZ) goto L_0085f9a0;
L_0085f99c:; BB(0x0085f99c);
    /* 0085f99c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f99e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085f99f: ret  */ FN_RET(0x0085f96b); r_esp += 4; return;
L_0085f9a0:; BB(0x0085f9a0);
    /* 0085f9a0: add dword ptr [0xaf0b94], 0x10 */ { u32 ad = (u32)(0xaf0b94u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f9a7: mov dword ptr [0xaf0b88], eax */ W32((u32)(0xaf0b88u), r_eax);
    /* 0085f9ac: mov eax, dword ptr [0xaf0b84] */ r_eax = R32((u32)(0xaf0b84u));
L_0085f9b1:; BB(0x0085f9b1);
    /* 0085f9b1: mov ecx, dword ptr [0xaf0b88] */ r_ecx = R32((u32)(0xaf0b88u));
    /* 0085f9b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9b8: push 0x41c4 */ { u32 v = 0x41c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9bd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9bf: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f9c5: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085f9c8: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 0085f9cb: call dword ptr [0x8f8190] */ { u32 t = R32((u32)(0x8f8190u)); r_esp -= 4; W32(r_esp, 0x85f9d1u); call_ind(t); }
    /* 0085f9d1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f9d3: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0085f9d6: jne 0x85f9dc */ if (!fZ) goto L_0085f9dc;
L_0085f9d8:; BB(0x0085f9d8);
    /* 0085f9d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f9da: jmp 0x85fa1f */ goto L_0085fa1f;
L_0085f9dc:; BB(0x0085f9dc);
    /* 0085f9dc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9de: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9e3: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9e9: call dword ptr [0x8f823c] */ { u32 t = R32((u32)(0x8f823cu)); r_esp -= 4; W32(r_esp, 0x85f9efu); call_ind(t); }
    /* 0085f9ef: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f9f1: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0085f9f4: jne 0x85fa08 */ if (!fZ) goto L_0085fa08;
L_0085f9f6:; BB(0x0085f9f6);
    /* 0085f9f6: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f9f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085f9fa: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085fa00: call dword ptr [0x8f81dc] */ { u32 t = R32((u32)(0x8f81dcu)); r_esp -= 4; W32(r_esp, 0x85fa06u); call_ind(t); }
    /* 0085fa06: jmp 0x85f9d8 */ goto L_0085f9d8;
L_0085fa08:; BB(0x0085fa08);
    /* 0085fa08: or dword ptr [esi + 8], 0xffffffff */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fa0c: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 0085fa0e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0085fa11: inc dword ptr [0xaf0b84] */ { u32 ad = (u32)(0xaf0b84u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fa17: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0085fa1a: or dword ptr [eax], 0xffffffff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085fa1d: mov eax, esi */ r_eax = r_esi;
L_0085fa1f:; BB(0x0085fa1f);
    /* 0085fa1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085fa20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085fa21: ret  */ FN_RET(0x0085f96b); r_esp += 4; return;
}

void f_0085fa22(void) /* ___sbh_alloc_new_group */
{
    FN_ENTER(0x0085fa22);
    /* 0085fa22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa23: mov ebp, esp */ r_ebp = r_esp;
    /* 0085fa25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fa2a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0085fa2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa2f: mov esi, dword ptr [ecx + 0x10] */ r_esi = R32((u32)(r_ecx+0x10u));
    /* 0085fa32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa33: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085fa35: jmp 0x85fa3a */ goto L_0085fa3a;
L_0085fa37:; BB(0x0085fa37);
    /* 0085fa37: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085fa39: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085fa3a:; BB(0x0085fa3a);
    /* 0085fa3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085fa3c: jge 0x85fa37 */ if ((fS==fO)) goto L_0085fa37;
L_0085fa3e:; BB(0x0085fa3e);
    /* 0085fa3e: mov eax, ebx */ r_eax = r_ebx;
    /* 0085fa40: imul eax, eax, 0x204 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x204u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085fa46: lea eax, [eax + esi + 0x144] */ r_eax = (u32)(r_eax+r_esi+0x144u);
    /* 0085fa4d: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa4f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085fa52: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0085fa53:; BB(0x0085fa53);
    /* 0085fa53: mov dword ptr [eax + 8], eax */ W32((u32)(r_eax+0x8u), r_eax);
    /* 0085fa56: mov dword ptr [eax + 4], eax */ W32((u32)(r_eax+0x4u), r_eax);
    /* 0085fa59: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085fa5c: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0085fa5d: jne 0x85fa53 */ if (!fZ) goto L_0085fa53;
L_0085fa5f:; BB(0x0085fa5f);
    /* 0085fa5f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa61: mov edi, ebx */ r_edi = r_ebx;
    /* 0085fa63: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa68: shl edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0085fa6b: add edi, dword ptr [ecx + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085fa6e: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fa74: call dword ptr [0x8f823c] */ { u32 t = R32((u32)(0x8f823cu)); r_esp -= 4; W32(r_esp, 0x85fa7au); call_ind(t); }
    /* 0085fa7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fa7c: jne 0x85fa86 */ if (!fZ) goto L_0085fa86;
L_0085fa7e:; BB(0x0085fa7e);
    /* 0085fa7e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085fa81: jmp 0x85fb23 */ goto L_0085fb23;
L_0085fa86:; BB(0x0085fa86);
    /* 0085fa86: lea edx, [edi + 0x7000] */ r_edx = (u32)(r_edi+0x7000u);
    /* 0085fa8c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085fa8e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0085fa91: ja 0x85fad6 */ if ((!fC&&!fZ)) goto L_0085fad6;
L_0085fa93:; BB(0x0085fa93);
    /* 0085fa93: mov ecx, edx */ r_ecx = r_edx;
    /* 0085fa95: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fa97: shr ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0085fa9a: lea eax, [edi + 0x10] */ r_eax = (u32)(r_edi+0x10u);
    /* 0085fa9d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0085fa9e:; BB(0x0085fa9e);
    /* 0085fa9e: or dword ptr [eax - 8], 0xffffffff */ { u32 ad = (u32)(r_eax+0xfffffff8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085faa2: or dword ptr [eax + 0xfec], 0xffffffff */ { u32 ad = (u32)(r_eax+0xfecu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085faa9: lea edx, [eax + 0xffc] */ r_edx = (u32)(r_eax+0xffcu);
    /* 0085faaf: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0085fab1: lea edx, [eax - 0x1004] */ r_edx = (u32)(r_eax+0xffffeffcu);
    /* 0085fab7: mov dword ptr [eax - 4], 0xff0 */ W32((u32)(r_eax+0xfffffffcu), 0xff0u);
    /* 0085fabe: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0085fac1: mov dword ptr [eax + 0xfe8], 0xff0 */ W32((u32)(r_eax+0xfe8u), 0xff0u);
    /* 0085facb: add eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085fad0: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085fad1: jne 0x85fa9e */ if (!fZ) goto L_0085fa9e;
L_0085fad3:; BB(0x0085fad3);
    /* 0085fad3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
L_0085fad6:; BB(0x0085fad6);
    /* 0085fad6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085fad9: add eax, 0x1f8 */ {  u32 a = r_eax; u32 b = 0x1f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085fade: lea ecx, [edi + 0xc] */ r_ecx = (u32)(r_edi+0xcu);
    /* 0085fae1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0085fae4: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0085fae7: lea ecx, [edx + 0xc] */ r_ecx = (u32)(r_edx+0xcu);
    /* 0085faea: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0085faed: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0085faf0: and dword ptr [esi + ebx*4 + 0x44], 0 */ { u32 ad = (u32)(r_esi+r_ebx*4+0x44u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085faf5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085faf7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085faf8: mov dword ptr [esi + ebx*4 + 0xc4], edi */ W32((u32)(r_esi+r_ebx*4+0xc4u), r_edi);
    /* 0085faff: mov al, byte ptr [esi + 0x43] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x43u))) & 0xffu);
    /* 0085fb02: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0085fb04: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085fb06: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085fb08: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085fb0b: mov byte ptr [esi + 0x43], cl */ W8((u32)(r_esi+0x43u), (u8)r_ecx);
    /* 0085fb0e: jne 0x85fb13 */ if (!fZ) goto L_0085fb13;
L_0085fb10:; BB(0x0085fb10);
    /* 0085fb10: or dword ptr [eax + 4], edi */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085fb13:; BB(0x0085fb13);
    /* 0085fb13: mov edx, 0x80000000 */ r_edx = 0x80000000u;
    /* 0085fb18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0085fb1a: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0085fb1c: not edx */ r_edx = ~r_edx;
    /* 0085fb1e: and dword ptr [eax + 8], edx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085fb21: mov eax, ebx */ r_eax = r_ebx;
L_0085fb23:; BB(0x0085fb23);
    /* 0085fb23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085fb24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085fb25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085fb26: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085fb27: ret  */ FN_RET(0x0085fa22); r_esp += 4; return;
}

void f_0085fb28(void) /* ___sbh_resize_block */
{
    FN_ENTER(0x0085fb28);
    /* 0085fb28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085fb29: mov ebp, esp */ r_ebp = r_esp;
    /* 0085fb2b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085fb2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fb31: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0085fb34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085fb35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fb36: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0085fb39: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fb3a: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085fb3d: mov edx, edi */ r_edx = r_edi;
    /* 0085fb3f: sub edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085fb42: add esi, 0x17 */ {  u32 a = r_esi; u32 b = 0x17u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085fb45: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0085fb48: mov ecx, edx */ r_ecx = r_edx;
    /* 0085fb4a: imul ecx, ecx, 0x204 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x204u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085fb50: lea ecx, [ecx + eax + 0x144] */ r_ecx = (u32)(r_ecx+r_eax+0x144u);
    /* 0085fb57: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0085fb5a: mov ecx, dword ptr [edi - 4] */ r_ecx = R32((u32)(r_edi+0xfffffffcu));
    /* 0085fb5d: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0085fb60: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fb61: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085fb63: lea edi, [ecx + edi - 4] */ r_edi = (u32)(r_ecx+r_edi+0xfffffffcu);
    /* 0085fb67: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0085fb69: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0085fb6c: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0085fb6f: jle 0x85fcca */ if ((fZ||fS!=fO)) goto L_0085fcca;
L_0085fb75:; BB(0x0085fb75);
    /* 0085fb75: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085fb78: jne 0x85fcc3 */ if (!fZ) goto L_0085fcc3;
L_0085fb7e:; BB(0x0085fb7e);
    /* 0085fb7e: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085fb80: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085fb82: jg 0x85fcc3 */ if ((!fZ&&fS==fO)) goto L_0085fcc3;
L_0085fb88:; BB(0x0085fb88);
    /* 0085fb88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085fb8b: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0085fb8e: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fb8f: cmp ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085fb92: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0085fb95: jbe 0x85fb9d */ if ((fC||fZ)) goto L_0085fb9d;
L_0085fb97:; BB(0x0085fb97);
    /* 0085fb97: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085fb99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085fb9a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0085fb9d:; BB(0x0085fb9d);
    /* 0085fb9d: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0085fba0: cmp ebx, dword ptr [edi + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fba3: jne 0x85fbe8 */ if (!fZ) goto L_0085fbe8;
L_0085fba5:; BB(0x0085fba5);
    /* 0085fba5: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085fba8: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085fbad: jae 0x85fbc9 */ if (!fC) goto L_0085fbc9;
L_0085fbaf:; BB(0x0085fbaf);
    /* 0085fbaf: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085fbb1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085fbb4: lea ecx, [ecx + eax + 4] */ r_ecx = (u32)(r_ecx+r_eax+0x4u);
    /* 0085fbb8: not ebx */ r_ebx = ~r_ebx;
    /* 0085fbba: and dword ptr [eax + edx*4 + 0x44], ebx */ { u32 ad = (u32)(r_eax+r_edx*4+0x44u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fbbe: dec byte ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085fbc0: jne 0x85fbe8 */ if (!fZ) goto L_0085fbe8;
L_0085fbc2:; BB(0x0085fbc2);
    /* 0085fbc2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fbc5: and dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fbc7: jmp 0x85fbe8 */ goto L_0085fbe8;
L_0085fbc9:; BB(0x0085fbc9);
    /* 0085fbc9: add ecx, -0x20 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085fbcc: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085fbce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085fbd1: lea ecx, [ecx + eax + 4] */ r_ecx = (u32)(r_ecx+r_eax+0x4u);
    /* 0085fbd5: not ebx */ r_ebx = ~r_ebx;
    /* 0085fbd7: and dword ptr [eax + edx*4 + 0xc4], ebx */ { u32 ad = (u32)(r_eax+r_edx*4+0xc4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fbde: dec byte ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085fbe0: jne 0x85fbe8 */ if (!fZ) goto L_0085fbe8;
L_0085fbe2:; BB(0x0085fbe2);
    /* 0085fbe2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fbe5: and dword ptr [ecx + 4], ebx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085fbe8:; BB(0x0085fbe8);
    /* 0085fbe8: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0085fbeb: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0085fbee: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0085fbf1: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0085fbf4: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 0085fbf7: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0085fbfa: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0085fbfd: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fbff: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fc02: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085fc06: jle 0x85fcb1 */ if ((fZ||fS!=fO)) goto L_0085fcb1;
L_0085fc0c:; BB(0x0085fc0c);
    /* 0085fc0c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085fc0f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085fc12: sar edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0085fc15: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0085fc16: cmp edi, 0x3f */ {  u32 a = r_edi; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085fc19: lea ecx, [ecx + esi - 4] */ r_ecx = (u32)(r_ecx+r_esi+0xfffffffcu);
    /* 0085fc1d: jbe 0x85fc22 */ if ((fC||fZ)) goto L_0085fc22;
L_0085fc1f:; BB(0x0085fc1f);
    /* 0085fc1f: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085fc21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085fc22:; BB(0x0085fc22);
    /* 0085fc22: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085fc25: lea ebx, [ebx + edi*8] */ r_ebx = (u32)(r_ebx+r_edi*8);
    /* 0085fc28: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0085fc2b: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0085fc2e: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0085fc31: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0085fc34: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 0085fc37: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0085fc3a: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0085fc3d: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0085fc40: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0085fc43: cmp ebx, dword ptr [ecx + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fc46: jne 0x85fc9f */ if (!fZ) goto L_0085fc9f;
L_0085fc48:; BB(0x0085fc48);
    /* 0085fc48: mov cl, byte ptr [edi + eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+r_eax+0x4u))) & 0xffu);
    /* 0085fc4c: mov byte ptr [ebp + 0x13], cl */ W8((u32)(r_ebp+0x13u), (u8)r_ecx);
    /* 0085fc4f: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085fc51: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085fc54: mov byte ptr [edi + eax + 4], cl */ W8((u32)(r_edi+r_eax+0x4u), (u8)r_ecx);
    /* 0085fc58: jae 0x85fc76 */ if (!fC) goto L_0085fc76;
L_0085fc5a:; BB(0x0085fc5a);
    /* 0085fc5a: cmp byte ptr [ebp + 0x13], 0 */ {  u32 a = R8((u32)(r_ebp+0x13u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085fc5e: jne 0x85fc6e */ if (!fZ) goto L_0085fc6e;
L_0085fc60:; BB(0x0085fc60);
    /* 0085fc60: mov ecx, edi */ r_ecx = r_edi;
    /* 0085fc62: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085fc67: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085fc69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fc6c: or dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085fc6e:; BB(0x0085fc6e);
    /* 0085fc6e: lea eax, [eax + edx*4 + 0x44] */ r_eax = (u32)(r_eax+r_edx*4+0x44u);
    /* 0085fc72: mov ecx, edi */ r_ecx = r_edi;
    /* 0085fc74: jmp 0x85fc96 */ goto L_0085fc96;
L_0085fc76:; BB(0x0085fc76);
    /* 0085fc76: cmp byte ptr [ebp + 0x13], 0 */ {  u32 a = R8((u32)(r_ebp+0x13u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085fc7a: jne 0x85fc8c */ if (!fZ) goto L_0085fc8c;
L_0085fc7c:; BB(0x0085fc7c);
    /* 0085fc7c: lea ecx, [edi - 0x20] */ r_ecx = (u32)(r_edi+0xffffffe0u);
    /* 0085fc7f: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085fc84: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085fc86: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fc89: or dword ptr [ecx + 4], ebx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085fc8c:; BB(0x0085fc8c);
    /* 0085fc8c: lea eax, [eax + edx*4 + 0xc4] */ r_eax = (u32)(r_eax+r_edx*4+0xc4u);
    /* 0085fc93: lea ecx, [edi - 0x20] */ r_ecx = (u32)(r_edi+0xffffffe0u);
L_0085fc96:; BB(0x0085fc96);
    /* 0085fc96: mov edx, 0x80000000 */ r_edx = 0x80000000u;
    /* 0085fc9b: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0085fc9d: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085fc9f:; BB(0x0085fc9f);
    /* 0085fc9f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0085fca2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085fca5: lea eax, [edx + esi - 4] */ r_eax = (u32)(r_edx+r_esi+0xfffffffcu);
    /* 0085fca9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0085fcab: mov dword ptr [ecx + eax - 4], ecx */ W32((u32)(r_ecx+r_eax+0xfffffffcu), r_ecx);
    /* 0085fcaf: jmp 0x85fcb4 */ goto L_0085fcb4;
L_0085fcb1:; BB(0x0085fcb1);
    /* 0085fcb1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_0085fcb4:; BB(0x0085fcb4);
    /* 0085fcb4: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0085fcb7: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 0085fcba: mov dword ptr [edx + esi - 8], eax */ W32((u32)(r_edx+r_esi+0xfffffff8u), r_eax);
    /* 0085fcbe: jmp 0x85fdff */ goto L_0085fdff;
L_0085fcc3:; BB(0x0085fcc3);
    /* 0085fcc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085fcc5: jmp 0x85fe02 */ goto L_0085fe02;
L_0085fcca:; BB(0x0085fcca);
    /* 0085fcca: jge 0x85fdff */ if ((fS==fO)) goto L_0085fdff;
L_0085fcd0:; BB(0x0085fcd0);
    /* 0085fcd0: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085fcd3: sub dword ptr [ebp + 0x10], esi */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fcd6: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 0085fcd9: mov dword ptr [ebx - 4], ecx */ W32((u32)(r_ebx+0xfffffffcu), r_ecx);
    /* 0085fcdc: lea ebx, [ebx + esi - 4] */ r_ebx = (u32)(r_ebx+r_esi+0xfffffffcu);
    /* 0085fce0: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0085fce3: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085fce6: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085fce7: cmp esi, 0x3f */ {  u32 a = r_esi; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085fcea: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0085fced: mov dword ptr [ebx - 4], ecx */ W32((u32)(r_ebx+0xfffffffcu), r_ecx);
    /* 0085fcf0: jbe 0x85fcf5 */ if ((fC||fZ)) goto L_0085fcf5;
L_0085fcf2:; BB(0x0085fcf2);
    /* 0085fcf2: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085fcf4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085fcf5:; BB(0x0085fcf5);
    /* 0085fcf5: test byte ptr [ebp - 4], 1 */ {  u32 a = R8((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085fcf9: jne 0x85fd7f */ if (!fZ) goto L_0085fd7f;
L_0085fcff:; BB(0x0085fcff);
    /* 0085fcff: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085fd02: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085fd05: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085fd06: cmp esi, 0x3f */ {  u32 a = r_esi; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085fd09: jbe 0x85fd0e */ if ((fC||fZ)) goto L_0085fd0e;
L_0085fd0b:; BB(0x0085fd0b);
    /* 0085fd0b: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085fd0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085fd0e:; BB(0x0085fd0e);
    /* 0085fd0e: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0085fd11: cmp ecx, dword ptr [edi + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fd14: jne 0x85fd58 */ if (!fZ) goto L_0085fd58;
L_0085fd16:; BB(0x0085fd16);
    /* 0085fd16: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085fd19: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085fd1e: jae 0x85fd39 */ if (!fC) goto L_0085fd39;
L_0085fd20:; BB(0x0085fd20);
    /* 0085fd20: mov ecx, esi */ r_ecx = r_esi;
    /* 0085fd22: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085fd24: lea esi, [esi + eax + 4] */ r_esi = (u32)(r_esi+r_eax+0x4u);
    /* 0085fd28: not ebx */ r_ebx = ~r_ebx;
    /* 0085fd2a: and dword ptr [eax + edx*4 + 0x44], ebx */ { u32 ad = (u32)(r_eax+r_edx*4+0x44u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fd2e: dec byte ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085fd30: jne 0x85fd55 */ if (!fZ) goto L_0085fd55;
L_0085fd32:; BB(0x0085fd32);
    /* 0085fd32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fd35: and dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fd37: jmp 0x85fd55 */ goto L_0085fd55;
L_0085fd39:; BB(0x0085fd39);
    /* 0085fd39: lea ecx, [esi - 0x20] */ r_ecx = (u32)(r_esi+0xffffffe0u);
    /* 0085fd3c: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085fd3e: lea ecx, [esi + eax + 4] */ r_ecx = (u32)(r_esi+r_eax+0x4u);
    /* 0085fd42: not ebx */ r_ebx = ~r_ebx;
    /* 0085fd44: and dword ptr [eax + edx*4 + 0xc4], ebx */ { u32 ad = (u32)(r_eax+r_edx*4+0xc4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fd4b: dec byte ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085fd4d: jne 0x85fd55 */ if (!fZ) goto L_0085fd55;
L_0085fd4f:; BB(0x0085fd4f);
    /* 0085fd4f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fd52: and dword ptr [ecx + 4], ebx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085fd55:; BB(0x0085fd55);
    /* 0085fd55: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_0085fd58:; BB(0x0085fd58);
    /* 0085fd58: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0085fd5b: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0085fd5e: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0085fd61: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 0085fd64: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0085fd67: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 0085fd6a: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0085fd6d: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085fd70: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0085fd73: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085fd76: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085fd77: cmp esi, 0x3f */ {  u32 a = r_esi; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085fd7a: jbe 0x85fd7f */ if ((fC||fZ)) goto L_0085fd7f;
L_0085fd7c:; BB(0x0085fd7c);
    /* 0085fd7c: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085fd7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085fd7f:; BB(0x0085fd7f);
    /* 0085fd7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085fd82: lea ecx, [ecx + esi*8] */ r_ecx = (u32)(r_ecx+r_esi*8);
    /* 0085fd85: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0085fd88: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0085fd8b: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 0085fd8e: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0085fd91: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0085fd94: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 0085fd97: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0085fd9a: cmp ecx, dword ptr [ebx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fd9d: jne 0x85fdf6 */ if (!fZ) goto L_0085fdf6;
L_0085fd9f:; BB(0x0085fd9f);
    /* 0085fd9f: mov cl, byte ptr [esi + eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_eax+0x4u))) & 0xffu);
    /* 0085fda3: mov byte ptr [ebp + 0xf], cl */ W8((u32)(r_ebp+0xfu), (u8)r_ecx);
    /* 0085fda6: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085fda8: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085fdab: mov byte ptr [esi + eax + 4], cl */ W8((u32)(r_esi+r_eax+0x4u), (u8)r_ecx);
    /* 0085fdaf: jae 0x85fdcd */ if (!fC) goto L_0085fdcd;
L_0085fdb1:; BB(0x0085fdb1);
    /* 0085fdb1: cmp byte ptr [ebp + 0xf], 0 */ {  u32 a = R8((u32)(r_ebp+0xfu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085fdb5: jne 0x85fdc5 */ if (!fZ) goto L_0085fdc5;
L_0085fdb7:; BB(0x0085fdb7);
    /* 0085fdb7: mov ecx, esi */ r_ecx = r_esi;
    /* 0085fdb9: mov edi, 0x80000000 */ r_edi = 0x80000000u;
    /* 0085fdbe: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0085fdc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fdc3: or dword ptr [ecx], edi */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085fdc5:; BB(0x0085fdc5);
    /* 0085fdc5: lea eax, [eax + edx*4 + 0x44] */ r_eax = (u32)(r_eax+r_edx*4+0x44u);
    /* 0085fdc9: mov ecx, esi */ r_ecx = r_esi;
    /* 0085fdcb: jmp 0x85fded */ goto L_0085fded;
L_0085fdcd:; BB(0x0085fdcd);
    /* 0085fdcd: cmp byte ptr [ebp + 0xf], 0 */ {  u32 a = R8((u32)(r_ebp+0xfu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085fdd1: jne 0x85fde3 */ if (!fZ) goto L_0085fde3;
L_0085fdd3:; BB(0x0085fdd3);
    /* 0085fdd3: lea ecx, [esi - 0x20] */ r_ecx = (u32)(r_esi+0xffffffe0u);
    /* 0085fdd6: mov edi, 0x80000000 */ r_edi = 0x80000000u;
    /* 0085fddb: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0085fddd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fde0: or dword ptr [ecx + 4], edi */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_0085fde3:; BB(0x0085fde3);
    /* 0085fde3: lea eax, [eax + edx*4 + 0xc4] */ r_eax = (u32)(r_eax+r_edx*4+0xc4u);
    /* 0085fdea: lea ecx, [esi - 0x20] */ r_ecx = (u32)(r_esi+0xffffffe0u);
L_0085fded:; BB(0x0085fded);
    /* 0085fded: mov edx, 0x80000000 */ r_edx = 0x80000000u;
    /* 0085fdf2: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0085fdf4: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085fdf6:; BB(0x0085fdf6);
    /* 0085fdf6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0085fdf9: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0085fdfb: mov dword ptr [eax + ebx - 4], eax */ W32((u32)(r_eax+r_ebx+0xfffffffcu), r_eax);
L_0085fdff:; BB(0x0085fdff);
    /* 0085fdff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085fe01: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_0085fe02:; BB(0x0085fe02);
    /* 0085fe02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085fe03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085fe04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085fe05: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085fe06: ret  */ FN_RET(0x0085fb28); r_esp += 4; return;
}

void f_0085fe07(void) /* ___sbh_alloc_block */
{
    FN_ENTER(0x0085fe07);
    /* 0085fe07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085fe08: mov ebp, esp */ r_ebp = r_esp;
    /* 0085fe0a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085fe0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085fe10: mov eax, dword ptr [0xaf0b84] */ r_eax = R32((u32)(0xaf0b84u));
    /* 0085fe15: mov edx, dword ptr [0xaf0b88] */ r_edx = R32((u32)(0xaf0b88u));
    /* 0085fe1b: add ecx, 0x17 */ {  u32 a = r_ecx; u32 b = 0x17u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fe1e: and ecx, 0xfffffff0 */ {  u32 a = r_ecx; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fe21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085fe22: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0085fe25: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0085fe28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fe29: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085fe2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085fe2d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fe2e: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085fe31: lea edi, [edx + eax*4] */ r_edi = (u32)(r_edx+r_eax*4);
    /* 0085fe34: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0085fe37: jge 0x85fe44 */ if ((fS==fO)) goto L_0085fe44;
L_0085fe39:; BB(0x0085fe39);
    /* 0085fe39: or esi, 0xffffffff */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085fe3c: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0085fe3e: or dword ptr [ebp - 8], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fe42: jmp 0x85fe51 */ goto L_0085fe51;
L_0085fe44:; BB(0x0085fe44);
    /* 0085fe44: add ecx, -0x20 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fe47: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0085fe4a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085fe4c: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085fe4e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0085fe51:; BB(0x0085fe51);
    /* 0085fe51: mov eax, dword ptr [0xaf0b90] */ r_eax = R32((u32)(0xaf0b90u));
    /* 0085fe56: mov ebx, eax */ r_ebx = r_eax;
    /* 0085fe58: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0085fe5b: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085fe5d: jmp 0x85fe73 */ goto L_0085fe73;
L_0085fe5f:; BB(0x0085fe5f);
    /* 0085fe5f: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0085fe62: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0085fe64: and ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fe67: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0085fe69: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085fe6b: jne 0x85fe78 */ if (!fZ) goto L_0085fe78;
L_0085fe6d:; BB(0x0085fe6d);
    /* 0085fe6d: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085fe70: cmp ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
L_0085fe73:; BB(0x0085fe73);
    /* 0085fe73: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0085fe76: jb 0x85fe5f */ if (fC) goto L_0085fe5f;
L_0085fe78:; BB(0x0085fe78);
    /* 0085fe78: cmp ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fe7b: jne 0x85fea1 */ if (!fZ) goto L_0085fea1;
L_0085fe7d:; BB(0x0085fe7d);
    /* 0085fe7d: mov ebx, edx */ r_ebx = r_edx;
    /* 0085fe7f: jmp 0x85fe92 */ goto L_0085fe92;
L_0085fe81:; BB(0x0085fe81);
    /* 0085fe81: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0085fe84: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0085fe86: and ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fe89: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0085fe8b: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085fe8d: jne 0x85fe99 */ if (!fZ) goto L_0085fe99;
L_0085fe8f:; BB(0x0085fe8f);
    /* 0085fe8f: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085fe92:; BB(0x0085fe92);
    /* 0085fe92: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085fe94: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0085fe97: jb 0x85fe81 */ if (fC) goto L_0085fe81;
L_0085fe99:; BB(0x0085fe99);
    /* 0085fe99: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085fe9b: je 0x85ff35 */ if (fZ) goto L_0085ff35;
L_0085fea1:; BB(0x0085fea1);
    /* 0085fea1: mov dword ptr [0xaf0b90], ebx */ W32((u32)(0xaf0b90u), r_ebx);
    /* 0085fea7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085feaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085feac: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085feaf: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0085feb2: je 0x85fec8 */ if (fZ) goto L_0085fec8;
L_0085feb4:; BB(0x0085feb4);
    /* 0085feb4: mov ecx, dword ptr [eax + edx*4 + 0xc4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 0085febb: mov edi, dword ptr [eax + edx*4 + 0x44] */ r_edi = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0085febf: and ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fec2: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0085fec4: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085fec6: jne 0x85fefe */ if (!fZ) goto L_0085fefe;
L_0085fec8:; BB(0x0085fec8);
    /* 0085fec8: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0085fece: and edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0085fed1: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fed5: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 0085fed8: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0085feda: and esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0085fedd: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0085fedf: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085fee2: jne 0x85fefb */ if (!fZ) goto L_0085fefb;
L_0085fee4:; BB(0x0085fee4);
    /* 0085fee4: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0085feea: and edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0085feed: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085fef0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085fef3: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0085fef5: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0085fef7: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0085fef9: je 0x85fee4 */ if (fZ) goto L_0085fee4;
L_0085fefb:; BB(0x0085fefb);
    /* 0085fefb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
L_0085fefe:; BB(0x0085fefe);
    /* 0085fefe: mov ecx, edx */ r_ecx = r_edx;
    /* 0085ff00: imul ecx, ecx, 0x204 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x204u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085ff06: lea ecx, [ecx + eax + 0x144] */ r_ecx = (u32)(r_ecx+r_eax+0x144u);
    /* 0085ff0d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0085ff10: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0085ff14: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085ff16: and ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0085ff18: jne 0x85ff87 */ if (!fZ) goto L_0085ff87;
L_0085ff1a:; BB(0x0085ff1a);
    /* 0085ff1a: mov ecx, dword ptr [eax + edx*4 + 0xc4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc4u));
    /* 0085ff21: and ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ff24: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ff26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085ff27: jmp 0x85ff87 */ goto L_0085ff87;
L_0085ff29:; BB(0x0085ff29);
    /* 0085ff29: cmp dword ptr [ebx + 8], 0 */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ff2d: jne 0x85ff3a */ if (!fZ) goto L_0085ff3a;
L_0085ff2f:; BB(0x0085ff2f);
    /* 0085ff2f: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085ff32: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_0085ff35:; BB(0x0085ff35);
    /* 0085ff35: cmp ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085ff38: jb 0x85ff29 */ if (fC) goto L_0085ff29;
L_0085ff3a:; BB(0x0085ff3a);
    /* 0085ff3a: cmp ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ff3d: jne 0x85ff65 */ if (!fZ) goto L_0085ff65;
L_0085ff3f:; BB(0x0085ff3f);
    /* 0085ff3f: mov ebx, edx */ r_ebx = r_edx;
    /* 0085ff41: jmp 0x85ff4c */ goto L_0085ff4c;
L_0085ff43:; BB(0x0085ff43);
    /* 0085ff43: cmp dword ptr [ebx + 8], 0 */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ff47: jne 0x85ff53 */ if (!fZ) goto L_0085ff53;
L_0085ff49:; BB(0x0085ff49);
    /* 0085ff49: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085ff4c:; BB(0x0085ff4c);
    /* 0085ff4c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085ff4e: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0085ff51: jb 0x85ff43 */ if (fC) goto L_0085ff43;
L_0085ff53:; BB(0x0085ff53);
    /* 0085ff53: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ff55: jne 0x85ff65 */ if (!fZ) goto L_0085ff65;
L_0085ff57:; BB(0x0085ff57);
    /* 0085ff57: call 0x85f96b */ r_esp -= 4; W32(r_esp, 0x85ff5cu); f_0085f96b();
    /* 0085ff5c: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ff5e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ff60: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0085ff63: je 0x85ff7d */ if (fZ) goto L_0085ff7d;
L_0085ff65:; BB(0x0085ff65);
    /* 0085ff65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ff66: call 0x85fa22 */ r_esp -= 4; W32(r_esp, 0x85ff6bu); f_0085fa22();
    /* 0085ff6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ff6c: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085ff6f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0085ff71: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085ff74: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ff77: jne 0x85fea1 */ if (!fZ) goto L_0085fea1;
L_0085ff7d:; BB(0x0085ff7d);
    /* 0085ff7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085ff7f: jmp 0x8600fe */ goto L_008600fe;
L_0085ff84:; BB(0x0085ff84);
    /* 0085ff84: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0085ff86: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0085ff87:; BB(0x0085ff87);
    /* 0085ff87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085ff89: jge 0x85ff84 */ if ((fS==fO)) goto L_0085ff84;
L_0085ff8b:; BB(0x0085ff8b);
    /* 0085ff8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085ff8e: mov edx, dword ptr [ecx + edi*8 + 4] */ r_edx = R32((u32)(r_ecx+r_edi*8+0x4u));
    /* 0085ff92: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0085ff94: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ff97: mov esi, ecx */ r_esi = r_ecx;
    /* 0085ff99: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085ff9c: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085ff9d: cmp esi, 0x3f */ {  u32 a = r_esi; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ffa0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0085ffa3: jle 0x85ffa8 */ if ((fZ||fS!=fO)) goto L_0085ffa8;
L_0085ffa5:; BB(0x0085ffa5);
    /* 0085ffa5: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085ffa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085ffa8:; BB(0x0085ffa8);
    /* 0085ffa8: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ffaa: je 0x8600b1 */ if (fZ) goto L_008600b1;
L_0085ffb0:; BB(0x0085ffb0);
    /* 0085ffb0: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0085ffb3: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ffb6: jne 0x860014 */ if (!fZ) goto L_00860014;
L_0085ffb8:; BB(0x0085ffb8);
    /* 0085ffb8: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085ffbb: mov ebx, 0x80000000 */ r_ebx = 0x80000000u;
    /* 0085ffc0: jge 0x85ffe8 */ if ((fS==fO)) goto L_0085ffe8;
L_0085ffc2:; BB(0x0085ffc2);
    /* 0085ffc2: mov ecx, edi */ r_ecx = r_edi;
    /* 0085ffc4: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085ffc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085ffc9: lea edi, [eax + edi + 4] */ r_edi = (u32)(r_eax+r_edi+0x4u);
    /* 0085ffcd: not ebx */ r_ebx = ~r_ebx;
    /* 0085ffcf: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0085ffd2: and ebx, dword ptr [eax + ecx*4 + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_ecx*4+0x44u)); u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0085ffd6: mov dword ptr [eax + ecx*4 + 0x44], ebx */ W32((u32)(r_eax+r_ecx*4+0x44u), r_ebx);
    /* 0085ffda: dec byte ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085ffdc: jne 0x860011 */ if (!fZ) goto L_00860011;
L_0085ffde:; BB(0x0085ffde);
    /* 0085ffde: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0085ffe1: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085ffe4: and dword ptr [ebx], ecx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ffe6: jmp 0x860014 */ goto L_00860014;
L_0085ffe8:; BB(0x0085ffe8);
    /* 0085ffe8: lea ecx, [edi - 0x20] */ r_ecx = (u32)(r_edi+0xffffffe0u);
    /* 0085ffeb: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0085ffed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085fff0: lea ecx, [eax + ecx*4 + 0xc4] */ r_ecx = (u32)(r_eax+r_ecx*4+0xc4u);
    /* 0085fff7: lea edi, [eax + edi + 4] */ r_edi = (u32)(r_eax+r_edi+0x4u);
    /* 0085fffb: not ebx */ r_ebx = ~r_ebx;
    /* 0085fffd: and dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ffff: dec byte ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00860001: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00860004: jne 0x860011 */ if (!fZ) goto L_00860011;
L_00860006:; BB(0x00860006);
    /* 00860006: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00860009: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0086000c: and dword ptr [ebx + 4], ecx */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086000f: jmp 0x860014 */ goto L_00860014;
L_00860011:; BB(0x00860011);
    /* 00860011: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_00860014:; BB(0x00860014);
    /* 00860014: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860018: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0086001b: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0086001e: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 00860021: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00860024: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00860027: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0086002a: je 0x8600bd */ if (fZ) goto L_008600bd;
L_00860030:; BB(0x00860030);
    /* 00860030: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00860033: lea ecx, [ecx + esi*8] */ r_ecx = (u32)(r_ecx+r_esi*8);
    /* 00860036: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00860039: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0086003c: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 0086003f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00860042: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00860045: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00860048: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0086004b: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086004e: jne 0x8600ae */ if (!fZ) goto L_008600ae;
L_00860050:; BB(0x00860050);
    /* 00860050: mov cl, byte ptr [esi + eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_eax+0x4u))) & 0xffu);
    /* 00860054: mov byte ptr [ebp + 0xb], cl */ W8((u32)(r_ebp+0xbu), (u8)r_ecx);
    /* 00860057: inc cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00860059: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086005c: mov byte ptr [esi + eax + 4], cl */ W8((u32)(r_esi+r_eax+0x4u), (u8)r_ecx);
    /* 00860060: jge 0x860085 */ if ((fS==fO)) goto L_00860085;
L_00860062:; BB(0x00860062);
    /* 00860062: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00860066: jne 0x860073 */ if (!fZ) goto L_00860073;
L_00860068:; BB(0x00860068);
    /* 00860068: mov edi, 0x80000000 */ r_edi = 0x80000000u;
    /* 0086006d: mov ecx, esi */ r_ecx = r_esi;
    /* 0086006f: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00860071: or dword ptr [ebx], edi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_00860073:; BB(0x00860073);
    /* 00860073: mov ecx, esi */ r_ecx = r_esi;
    /* 00860075: mov edi, 0x80000000 */ r_edi = 0x80000000u;
    /* 0086007a: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086007c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086007f: or dword ptr [eax + ecx*4 + 0x44], edi */ { u32 ad = (u32)(r_eax+r_ecx*4+0x44u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860083: jmp 0x8600ae */ goto L_008600ae;
L_00860085:; BB(0x00860085);
    /* 00860085: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00860089: jne 0x860098 */ if (!fZ) goto L_00860098;
L_0086008b:; BB(0x0086008b);
    /* 0086008b: lea ecx, [esi - 0x20] */ r_ecx = (u32)(r_esi+0xffffffe0u);
    /* 0086008e: mov edi, 0x80000000 */ r_edi = 0x80000000u;
    /* 00860093: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00860095: or dword ptr [ebx + 4], edi */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_00860098:; BB(0x00860098);
    /* 00860098: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086009b: lea edi, [eax + ecx*4 + 0xc4] */ r_edi = (u32)(r_eax+r_ecx*4+0xc4u);
    /* 008600a2: lea ecx, [esi - 0x20] */ r_ecx = (u32)(r_esi+0xffffffe0u);
    /* 008600a5: mov esi, 0x80000000 */ r_esi = 0x80000000u;
    /* 008600aa: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008600ac: or dword ptr [edi], esi */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008600ae:; BB(0x008600ae);
    /* 008600ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
L_008600b1:; BB(0x008600b1);
    /* 008600b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008600b3: je 0x8600c0 */ if (fZ) goto L_008600c0;
L_008600b5:; BB(0x008600b5);
    /* 008600b5: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008600b7: mov dword ptr [ecx + edx - 4], ecx */ W32((u32)(r_ecx+r_edx+0xfffffffcu), r_ecx);
    /* 008600bb: jmp 0x8600c0 */ goto L_008600c0;
L_008600bd:; BB(0x008600bd);
    /* 008600bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
L_008600c0:; BB(0x008600c0);
    /* 008600c0: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008600c3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008600c5: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 008600c8: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008600ca: mov dword ptr [edx + esi - 4], ecx */ W32((u32)(r_edx+r_esi+0xfffffffcu), r_ecx);
    /* 008600ce: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008600d1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008600d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008600d5: lea edi, [ecx + 1] */ r_edi = (u32)(r_ecx+0x1u);
    /* 008600d8: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008600da: jne 0x8600f6 */ if (!fZ) goto L_008600f6;
L_008600dc:; BB(0x008600dc);
    /* 008600dc: cmp ebx, dword ptr [0xaf0b80] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0b80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008600e2: jne 0x8600f6 */ if (!fZ) goto L_008600f6;
L_008600e4:; BB(0x008600e4);
    /* 008600e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008600e7: cmp ecx, dword ptr [0xaf0b98] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaf0b98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008600ed: jne 0x8600f6 */ if (!fZ) goto L_008600f6;
L_008600ef:; BB(0x008600ef);
    /* 008600ef: and dword ptr [0xaf0b80], 0 */ { u32 ad = (u32)(0xaf0b80u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008600f6:; BB(0x008600f6);
    /* 008600f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008600f9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008600fb: lea eax, [edx + 4] */ r_eax = (u32)(r_edx+0x4u);
L_008600fe:; BB(0x008600fe);
    /* 008600fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008600ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00860100: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00860101: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00860102: ret  */ FN_RET(0x0085fe07); r_esp += 4; return;
}

