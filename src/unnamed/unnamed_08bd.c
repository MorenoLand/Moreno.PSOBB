#include "protos.h"

void f_008bd0f5(void) /* sub_8BD0F5 */
{
    FN_ENTER(0x008bd0f5);
    /* 008bd0f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bd0f6: mov ebp, esp */ r_ebp = r_esp;
    /* 008bd0f8: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bd0fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bd0fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bd0fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bd0fe: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008bd101: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008bd104: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008bd107: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 008bd10a: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 008bd10d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 008bd110: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 008bd117: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008bd119: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 008bd11c: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 008bd11f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 008bd122: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008bd124: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 008bd127: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 008bd12a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
L_008bd12d:; BB(0x008bd12d);
    /* 008bd12d: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 008bd130: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 008bd133: mov ax, word ptr [esi + 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x20u))) & 0xffffu);
    /* 008bd137: mov bx, word ptr [edi + 0x20] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_edi+0x20u))) & 0xffffu);
    /* 008bd13b: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd13e: mov cx, word ptr [esi + 0x60] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x60u))) & 0xffffu);
    /* 008bd142: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bd145: mov dx, word ptr [edi + 0x60] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi+0x60u))) & 0xffffu);
    /* 008bd149: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd14c: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd14f: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd152: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd155: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd158: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd15b: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bd15e: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd161: mov ebx, eax */ r_ebx = r_eax;
    /* 008bd163: imul eax, eax, 0x187e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x187eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd169: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd16b: imul ecx, ecx, 0xffffc4df */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffc4dfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd171: imul ebx, ebx, 0x1151 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1151u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd177: mov dx, word ptr [edi + 0x40] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi+0x40u))) & 0xffffu);
    /* 008bd17b: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd17d: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd17f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008bd182: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008bd185: mov cx, word ptr [esi + 0x40] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x40u))) & 0xffffu);
    /* 008bd189: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008bd18c: mov bx, word ptr [edi] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 008bd18f: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008bd192: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 008bd195: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 008bd198: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 008bd19b: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd19e: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd1a1: mov edx, ecx */ r_edx = r_ecx;
    /* 008bd1a3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd1a5: shl ecx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd1a8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bd1aa: shl eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd1ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008bd1af: add ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd1b2: mov edx, eax */ r_edx = r_eax;
    /* 008bd1b4: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd1b7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008bd1ba: sub ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd1bd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008bd1c0: sub edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bd1c3: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008bd1c6: mov ax, word ptr [esi + 0x70] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x70u))) & 0xffffu);
    /* 008bd1ca: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008bd1cd: mov bx, word ptr [edi + 0x70] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_edi+0x70u))) & 0xffffu);
    /* 008bd1d1: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd1d4: mov cx, word ptr [esi + 0x30] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x30u))) & 0xffffu);
    /* 008bd1d8: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bd1db: mov dx, word ptr [edi + 0x30] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi+0x30u))) & 0xffffu);
    /* 008bd1df: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd1e2: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd1e5: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd1e8: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd1eb: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd1ee: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd1f1: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bd1f4: mov bx, word ptr [esi + 0x10] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0x10u))) & 0xffffu);
    /* 008bd1f8: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd1fb: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd1fe: mov dx, word ptr [edi + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi+0x10u))) & 0xffffu);
    /* 008bd202: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd205: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd208: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bd20b: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd20e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008bd211: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008bd214: mov ax, word ptr [esi + 0x50] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x50u))) & 0xffffu);
    /* 008bd218: mov dx, word ptr [edi + 0x50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi+0x50u))) & 0xffffu);
    /* 008bd21c: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd21f: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bd222: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd225: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bd228: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd22b: imul ecx, ecx, 0x6254 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6254u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd231: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 008bd234: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008bd237: imul ebx, ebx, 0x300b */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x300bu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd23d: imul edx, edx, 0x98e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd243: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008bd246: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008bd249: imul eax, eax, 0x41b3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x41b3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd24f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008bd252: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008bd255: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008bd258: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008bd25b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008bd25e: mov ecx, eax */ r_ecx = r_eax;
    /* 008bd260: mov edx, ebx */ r_edx = r_ebx;
    /* 008bd262: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd265: add ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd268: add ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd26b: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd26e: mov esi, ecx */ r_esi = r_ecx;
    /* 008bd270: imul eax, eax, 0xffffe333 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffe333u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd276: imul edx, edx, 0xffffadfd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffadfdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd27c: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bd27e: imul esi, esi, 0x25a1 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x25a1u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd284: imul ecx, ecx, 0xffffc13b */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffc13bu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd28a: imul ebx, ebx, 0xfffff384 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0xfffff384u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd290: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd292: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd294: mov esi, eax */ r_esi = r_eax;
    /* 008bd296: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd298: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bd29a: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd29c: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd29e: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd2a1: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd2a4: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd2a7: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bd2aa: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008bd2ad: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd2af: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd2b2: add ebx, 0x400 */ {  u32 a = r_ebx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd2b8: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 008bd2bb: sar ebx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd2be: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd2c3: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bd2c6: mov dword ptr [edi + 0x80], ebx */ W32((u32)(r_edi+0x80u), r_ebx);
    /* 008bd2cc: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 008bd2cf: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008bd2d2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008bd2d5: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd2d7: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd2da: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bd2dc: add ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd2df: add ebx, 0x400 */ {  u32 a = r_ebx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd2e5: sar ebx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd2e8: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd2ed: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bd2f0: add edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd2f6: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd2fc: mov dword ptr [edi + 0xa0], ebx */ W32((u32)(r_edi+0xa0u), r_ebx);
    /* 008bd302: sar edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bd305: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 008bd30b: sar ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd30e: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 008bd311: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008bd314: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 008bd317: mov ebx, eax */ r_ebx = r_eax;
    /* 008bd319: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bd31b: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd31d: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd322: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bd325: add ebx, 0x400 */ {  u32 a = r_ebx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd32b: sar ebx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd32e: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 008bd334: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008bd336: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 008bd339: add dword ptr [ebp - 0x44], 2 */ { u32 ad = (u32)(r_ebp+0xffffffbcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd33d: add dword ptr [ebp - 0x3c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd341: add dword ptr [ebp - 0x40], 2 */ { u32 ad = (u32)(r_ebp+0xffffffc0u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd345: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008bd346: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 008bd349: jne 0x8bd12d */ if (!fZ) goto L_008bd12d;
L_008bd34f:; BB(0x008bd34f);
    /* 008bd34f: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008bd352: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 008bd359: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 008bd360: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
L_008bd363:; BB(0x008bd363);
    /* 008bd363: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 008bd366: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 008bd369: add edi, dword ptr [ebp - 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bd36c: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 008bd36e: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd372: add edi, dword ptr [ebp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bd375: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008bd378: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 008bd37b: mov ebx, eax */ r_ebx = r_eax;
    /* 008bd37d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008bd37f: imul eax, eax, 0x187e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x187eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd385: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd387: imul ecx, ecx, 0xffffc4df */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffc4dfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd38d: imul ebx, ebx, 0x1151 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1151u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd393: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd395: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd397: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008bd39a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008bd39d: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008bd3a0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008bd3a2: mov edx, ecx */ r_edx = r_ecx;
    /* 008bd3a4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd3a6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bd3a8: shl ecx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd3ab: shl eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd3ae: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008bd3b0: add ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd3b3: mov edx, eax */ r_edx = r_eax;
    /* 008bd3b5: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd3b8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008bd3bb: sub ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd3be: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008bd3c1: sub edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bd3c4: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008bd3c7: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008bd3ca: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008bd3cd: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008bd3d0: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008bd3d3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008bd3d6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008bd3d9: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008bd3dc: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 008bd3df: imul ecx, ecx, 0x6254 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6254u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd3e5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008bd3e8: imul ebx, ebx, 0x300b */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x300bu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd3ee: imul edx, edx, 0x98e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd3f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008bd3f7: imul eax, eax, 0x41b3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x41b3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd3fd: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008bd400: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008bd403: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008bd406: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008bd409: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008bd40c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008bd40f: mov ecx, eax */ r_ecx = r_eax;
    /* 008bd411: mov edx, ebx */ r_edx = r_ebx;
    /* 008bd413: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd416: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd419: add ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd41c: add ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd41f: mov esi, ecx */ r_esi = r_ecx;
    /* 008bd421: imul eax, eax, 0xffffe333 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffe333u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd427: imul edx, edx, 0xffffadfd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffadfdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd42d: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bd42f: imul esi, esi, 0x25a1 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x25a1u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd435: imul ecx, ecx, 0xffffc13b */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffc13bu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd43b: imul ebx, ebx, 0xfffff384 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0xfffff384u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bd441: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd443: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd445: mov esi, eax */ r_esi = r_eax;
    /* 008bd447: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd449: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bd44b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd44d: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd44f: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bd452: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bd455: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd458: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bd45b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008bd45e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 008bd461: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008bd464: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 008bd467: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008bd46a: add ebx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd46d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008bd470: sub ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd473: add ebx, 0x20000 */ {  u32 a = r_ebx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd479: sar ebx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd47c: add ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd482: sar ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd485: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008bd488: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd48e: and ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd494: mov al, byte ptr [esi + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bd497: mov dl, byte ptr [esi + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008bd49a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008bd49d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008bd4a0: add ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd4a3: sub ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd4a6: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd4a9: add ebx, 0x20000 */ {  u32 a = r_ebx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd4af: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd4b2: add ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd4b8: sar ebx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd4bb: sar ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd4be: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd4c4: and ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd4ca: mov al, byte ptr [esi + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bd4cd: mov dl, byte ptr [esi + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008bd4d0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008bd4d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008bd4d6: add ebx, dword ptr [ebp - 0x34] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd4d9: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd4dc: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd4df: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd4e2: add ebx, 0x20000 */ {  u32 a = r_ebx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd4e8: sar ebx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd4eb: add ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd4f1: sar ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd4f4: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd4fa: and ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd500: mov al, byte ptr [esi + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bd503: mov dl, byte ptr [esi + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008bd506: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008bd509: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008bd50c: add ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd50f: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bd512: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd515: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bd518: add ebx, 0x20000 */ {  u32 a = r_ebx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd51e: sar ebx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bd521: add ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd527: sar ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bd52a: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bd530: and ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd536: mov al, byte ptr [esi + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bd539: mov dl, byte ptr [esi + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008bd53c: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008bd53e: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 008bd541: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 008bd544: add dword ptr [ebp - 0x3c], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008bd548: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bd549: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 008bd54c: jne 0x8bd363 */ if (!fZ) goto L_008bd363;
L_008bd552:; BB(0x008bd552);
    /* 008bd552: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bd553: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bd554: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bd555: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bd556: ret  */ FN_RET(0x008bd0f5); r_esp += 4; return;
}

void f_008bd557(void) /* sub_8BD557 */
{
    FN_ENTER(0x008bd557);
    /* 008bd557: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bd558: lea ebp, [esp - 0x60] */ r_ebp = (u32)(r_esp+0xffffffa0u);
    /* 008bd55c: sub esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bd562: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bd563: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bd564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bd565: mov esi, dword ptr [ebp + 0x68] */ r_esi = R32((u32)(r_ebp+0x68u));
    /* 008bd568: mov edi, dword ptr [ebp + 0x6c] */ r_edi = R32((u32)(r_ebp+0x6cu));
    /* 008bd56b: mov dword ptr [ebp + 0x4c], esi */ W32((u32)(r_ebp+0x4cu), r_esi);
    /* 008bd56e: mov dword ptr [ebp + 0x54], edi */ W32((u32)(r_ebp+0x54u), r_edi);
    /* 008bd571: mov esi, dword ptr [ebp + 0x70] */ r_esi = R32((u32)(r_ebp+0x70u));
    /* 008bd574: mov dword ptr [ebp + 0x5c], 2 */ W32((u32)(r_ebp+0x5cu), 0x2u);
    /* 008bd57b: mov dword ptr [ebp + 0x50], esi */ W32((u32)(r_ebp+0x50u), r_esi);
L_008bd57e:; BB(0x008bd57e);
    /* 008bd57e: mov esi, dword ptr [ebp + 0x4c] */ r_esi = R32((u32)(r_ebp+0x4cu));
    /* 008bd581: mov edi, dword ptr [ebp + 0x54] */ r_edi = R32((u32)(r_ebp+0x54u));
    /* 008bd584: movq mm0, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd588: movq mm1, qword ptr [edi + 0x20] */ { MM64 r; r.q = R64((u32)(r_edi+0x20u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd58c: movq mm2, qword ptr [esi + 0x60] */ { MM64 r; r.q = R64((u32)(r_esi+0x60u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd590: pmullw mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd593: movq mm3, qword ptr [edi + 0x60] */ { MM64 r; r.q = R64((u32)(r_edi+0x60u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bd597: movq mm6, qword ptr [0x99f140] */ { MM64 r; r.q = R64((u32)(0x99f140u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd59e: pmullw mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd5a1: movq mm7, qword ptr [0x99f160] */ { MM64 r; r.q = R64((u32)(0x99f160u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd5a8: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd5ab: pmaddwd mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd5ae: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd5b1: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd5b4: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bd5b8: movq mm1, qword ptr [0x99f138] */ { MM64 r; r.q = R64((u32)(0x99f138u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd5bf: pmaddwd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd5c2: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bd5c6: paddw mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd5c9: pmaddwd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd5cc: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd5cf: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd5d3: pmaddwd mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd5d6: movq mm7, qword ptr [0x99f188] */ { MM64 r; r.q = R64((u32)(0x99f188u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd5dd: pmaddwd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd5e0: pmaddwd mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd5e3: pxor mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd5e6: movq mm1, qword ptr [0x99f190] */ { MM64 r; r.q = R64((u32)(0x99f190u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd5ed: pxor mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd5f0: paddd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd5f3: paddd mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd5f6: paddd mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd5f9: paddd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd5fc: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd5ff: paddd mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd602: movq mm1, qword ptr [edi] */ { MM64 r; r.q = R64((u32)(r_edi)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd605: paddd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd608: movq mm6, qword ptr [esi + 0x40] */ { MM64 r; r.q = R64((u32)(r_esi+0x40u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd60c: pmullw mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd60f: movq mm7, qword ptr [edi + 0x40] */ { MM64 r; r.q = R64((u32)(r_edi+0x40u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd613: nop  */ ;
    /* 008bd614: movq qword ptr [ebp - 0x9c], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffff64u), r.q); }
    /* 008bd61b: pmullw mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd61e: movq mm7, qword ptr [0x99f198] */ { MM64 r; r.q = R64((u32)(0x99f198u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd625: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd628: paddw mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd62b: nop  */ ;
    /* 008bd62c: psubw mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd62f: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd632: pmaddwd mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd635: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd639: pmaddwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd63c: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd63f: pmaddwd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd642: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd646: pmaddwd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd649: pslld mm0, 0xd */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xdu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd64d: movq mm7, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd650: pslld mm6, 0xd */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xdu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd654: paddd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd657: psubd mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd65a: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd65d: pslld mm2, 0xd */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xdu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd661: movq qword ptr [ebp - 0x8c], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffff74u), r.q); }
    /* 008bd668: paddd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd66b: movq mm0, qword ptr [ebp - 0x9c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffff64u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd672: psubd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd675: movq qword ptr [ebp - 0x7c], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_ebp+0xffffff84u), r.q); }
    /* 008bd679: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd67c: movq qword ptr [ebp - 0x6c], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_ebp+0xffffff94u), r.q); }
    /* 008bd680: paddd mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd683: movq qword ptr [ebp - 0x5c], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_ebp+0xffffffa4u), r.q); }
    /* 008bd687: pslld mm1, 0xd */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xdu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd68b: movq qword ptr [ebp - 0x4c], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_ebp+0xffffffb4u), r.q); }
    /* 008bd68f: psubd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd692: movq mm6, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd696: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd699: movq qword ptr [ebp - 0x3c], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffc4u), r.q); }
    /* 008bd69d: paddd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd6a0: movq mm7, qword ptr [edi + 0x10] */ { MM64 r; r.q = R64((u32)(r_edi+0x10u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd6a4: movq qword ptr [ebp - 0x2c], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffffd4u), r.q); }
    /* 008bd6a8: psubd mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd6ab: movq mm0, qword ptr [esi + 0x70] */ { MM64 r; r.q = R64((u32)(r_esi+0x70u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd6af: pmullw mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd6b2: movq qword ptr [ebp - 0x1c], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ebp+0xffffffe4u), r.q); }
    /* 008bd6b6: movq mm1, qword ptr [edi + 0x70] */ { MM64 r; r.q = R64((u32)(r_edi+0x70u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd6ba: movq mm2, qword ptr [esi + 0x50] */ { MM64 r; r.q = R64((u32)(r_esi+0x50u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd6be: pmullw mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd6c1: movq mm3, qword ptr [edi + 0x50] */ { MM64 r; r.q = R64((u32)(r_edi+0x50u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bd6c5: movq mm4, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd6c9: pmullw mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd6cc: movq mm5, qword ptr [edi + 0x30] */ { MM64 r; r.q = R64((u32)(r_edi+0x30u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008bd6d0: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd6d3: movq qword ptr [ebp - 0xc], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_ebp+0xfffffff4u), r.q); }
    /* 008bd6d7: pmullw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd6da: movq qword ptr [ebp + 4], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0x4u), r.q); }
    /* 008bd6de: paddw mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd6e1: movq qword ptr [ebp + 0x14], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0x14u), r.q); }
    /* 008bd6e5: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd6e8: movq qword ptr [ebp + 0x24], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_ebp+0x24u), r.q); }
    /* 008bd6ec: paddw mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd6ef: paddw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd6f2: movq mm4, qword ptr [0x99f150] */ { MM64 r; r.q = R64((u32)(0x99f150u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd6f9: paddw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd6fc: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd6ff: movq mm7, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd702: psrlq mm7, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd706: paddw mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd709: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd70c: pmaddwd mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd70f: pmaddwd mm0, qword ptr [0x99f148] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f148u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd716: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd71a: pmaddwd mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd71d: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd720: movq qword ptr [ebp + 0x34], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_ebp+0x34u), r.q); }
    /* 008bd724: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd728: pxor mm0, qword ptr [0x99f188] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f188u)); MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd72f: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd732: movq qword ptr [ebp + 0x3c], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_ebp+0x3cu), r.q); }
    /* 008bd736: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bd73a: movq mm6, qword ptr [0x99f178] */ { MM64 r; r.q = R64((u32)(0x99f178u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd741: nop  */ ;
    /* 008bd742: paddd mm0, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd749: pmaddwd mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd74c: movq qword ptr [ebp - 0x64], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffff9cu), r.q); }
    /* 008bd750: pmaddwd mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd753: pmaddwd mm7, qword ptr [0x99f148] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99f148u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd75a: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd75d: movq mm6, qword ptr [0x99f168] */ { MM64 r; r.q = R64((u32)(0x99f168u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd764: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd768: pxor mm2, qword ptr [0x99f188] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f188u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd76f: pmaddwd mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd772: paddd mm2, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd779: pmaddwd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd77c: movq mm6, qword ptr [0x99f130] */ { MM64 r; r.q = R64((u32)(0x99f130u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd783: nop  */ ;
    /* 008bd784: pxor mm4, qword ptr [0x99f188] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f188u)); MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd78b: pmaddwd mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd78e: paddd mm4, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd795: pmaddwd mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd798: movq mm6, qword ptr [0x99f188] */ { MM64 r; r.q = R64((u32)(0x99f188u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd79f: nop  */ ;
    /* 008bd7a0: pxor mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd7a3: pxor mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd7a6: paddd mm1, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd7ad: pxor mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd7b0: paddd mm7, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd7b7: pxor mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd7ba: paddd mm5, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd7c1: nop  */ ;
    /* 008bd7c2: movq qword ptr [ebp - 0x24], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_ebp+0xffffffdcu), r.q); }
    /* 008bd7c6: pxor mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd7c9: paddd mm1, qword ptr [ebp + 0x34] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ebp+0x34u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd7cd: nop  */ ;
    /* 008bd7ce: movq mm6, qword ptr [ebp - 0x64] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffff9cu)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd7d2: nop  */ ;
    /* 008bd7d3: paddd mm5, qword ptr [ebp + 0x3c] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_ebp+0x3cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd7d7: paddd mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd7da: paddd mm3, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd7e1: paddd mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd7e4: paddd mm0, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd7eb: paddd mm7, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd7ee: paddd mm3, qword ptr [ebp + 0x34] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_ebp+0x34u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd7f2: paddd mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd7f5: paddd mm0, qword ptr [ebp + 0x3c] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0x3cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd7f9: paddd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd7fc: paddd mm3, qword ptr [ebp - 0x64] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff9cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd800: paddd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd803: paddd mm0, qword ptr [ebp - 0x24] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffdcu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd807: movq qword ptr [ebp + 0x44], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ebp+0x44u), r.q); }
    /* 008bd80b: nop  */ ;
    /* 008bd80c: movq qword ptr [ebp - 0x14], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffffecu), r.q); }
    /* 008bd810: nop  */ ;
    /* 008bd811: movq mm0, qword ptr [ebp + 4] */ { MM64 r; r.q = R64((u32)(r_ebp+0x4u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd815: nop  */ ;
    /* 008bd816: movq qword ptr [ebp - 0x54], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffacu), r.q); }
    /* 008bd81a: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd81d: movq mm2, qword ptr [0x99f128] */ { MM64 r; r.q = R64((u32)(0x99f128u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd824: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd828: movq qword ptr [ebp - 4], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_ebp+0xfffffffcu), r.q); }
    /* 008bd82c: pmaddwd mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd82f: movq mm3, qword ptr [ebp + 0x14] */ { MM64 r; r.q = R64((u32)(r_ebp+0x14u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bd833: pmaddwd mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd836: movq qword ptr [ebp - 0x74], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_ebp+0xffffff8cu), r.q); }
    /* 008bd83a: movq mm2, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd83d: movq mm4, qword ptr [0x99f170] */ { MM64 r; r.q = R64((u32)(0x99f170u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd844: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd848: movq qword ptr [ebp + 0xc], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_ebp+0xcu), r.q); }
    /* 008bd84c: pmaddwd mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd84f: movq mm5, qword ptr [ebp + 0x24] */ { MM64 r; r.q = R64((u32)(r_ebp+0x24u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008bd853: pmaddwd mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd856: movq qword ptr [ebp - 0x44], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_ebp+0xffffffbcu), r.q); }
    /* 008bd85a: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd85d: movq mm6, qword ptr [0x99f180] */ { MM64 r; r.q = R64((u32)(0x99f180u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd864: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd868: movq qword ptr [ebp + 0x1c], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_ebp+0x1cu), r.q); }
    /* 008bd86c: pmaddwd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd86f: movq mm7, qword ptr [ebp - 0xc] */ { MM64 r; r.q = R64((u32)(r_ebp+0xfffffff4u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd873: pmaddwd mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd876: paddd mm0, qword ptr [ebp - 0x44] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffbcu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd87a: movq mm6, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd87d: paddd mm1, qword ptr [ebp + 0x1c] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ebp+0x1cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd881: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd885: movq qword ptr [ebp - 0x84], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffff7cu), r.q); }
    /* 008bd88c: nop  */ ;
    /* 008bd88d: movq mm0, qword ptr [0x99f158] */ { MM64 r; r.q = R64((u32)(0x99f158u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd894: nop  */ ;
    /* 008bd895: movq qword ptr [ebp + 0x2c], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ebp+0x2cu), r.q); }
    /* 008bd899: pmaddwd mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd89c: paddd mm3, qword ptr [ebp - 0x54] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffacu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bd8a0: pmaddwd mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd8a3: movq mm0, qword ptr [ebp - 0x5c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffa4u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd8a7: nop  */ ;
    /* 008bd8a8: paddd mm7, qword ptr [ebp - 4] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(r_ebp+0xfffffffcu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd8ac: nop  */ ;
    /* 008bd8ad: paddd mm6, qword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd8b1: psubd mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd8b4: movq mm1, qword ptr [ebp - 0x7c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffff84u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd8b8: nop  */ ;
    /* 008bd8b9: movq qword ptr [ebp - 0x34], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_ebp+0xffffffccu), r.q); }
    /* 008bd8bd: psubd mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd8c0: movq mm3, qword ptr [0x99f1a0] */ { MM64 r; r.q = R64((u32)(0x99f1a0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bd8c7: nop  */ ;
    /* 008bd8c8: paddd mm2, qword ptr [ebp - 0x74] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff8cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd8cc: paddd mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd8cf: paddd mm7, qword ptr [ebp - 0x5c] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffa4u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd8d3: psrad mm0, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd8d7: movq qword ptr [ebp - 0x94], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffff6cu), r.q); }
    /* 008bd8de: paddd mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd8e1: paddd mm6, qword ptr [ebp - 0x7c] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff84u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd8e5: psrad mm1, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd8e9: paddd mm5, qword ptr [ebp + 0x44] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_ebp+0x44u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd8ed: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd8f0: paddd mm4, qword ptr [ebp + 0xc] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_ebp+0xcu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd8f4: punpcklwd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd8f7: paddd mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd8fa: punpckhwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd8fd: paddd mm7, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd900: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd903: mov edi, dword ptr [ebp + 0x50] */ r_edi = R32((u32)(r_ebp+0x50u));
    /* 008bd906: movq qword ptr [edi + 0x70], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edi+0x70u), r.q); }
    /* 008bd90a: psrad mm6, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd90e: movq mm2, qword ptr [ebp - 0x2c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffd4u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd912: psrad mm7, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd916: psubd mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd919: movq mm0, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd91c: movq mm1, qword ptr [ebp - 0x4c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffb4u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd920: punpcklwd mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd923: psubd mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd926: punpckhwd mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd929: paddd mm5, qword ptr [ebp - 0x2c] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffd4u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd92d: punpckldq mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd930: paddd mm4, qword ptr [ebp - 0x4c] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffb4u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd934: paddd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd937: paddd mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd93a: paddd mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd93d: paddd mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd940: psrad mm2, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd944: movq qword ptr [edi], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_edi), r.q); }
    /* 008bd947: psrad mm1, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bd94b: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd94e: psrad mm5, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bd952: movq mm6, qword ptr [ebp - 0x1c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffe4u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd956: punpcklwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd959: punpckhwd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd95c: movq mm1, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd95f: movq mm7, qword ptr [ebp - 0x3c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffc4u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd963: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd966: movq qword ptr [edi + 0x60], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edi+0x60u), r.q); }
    /* 008bd96a: psrad mm4, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd96e: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd971: punpcklwd mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd974: paddd mm6, qword ptr [ebp - 0x34] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffccu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd978: punpckhwd mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd97b: psubd mm2, qword ptr [ebp - 0x34] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffccu)); MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd97f: punpckldq mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd982: movq qword ptr [edi + 0x10], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_edi+0x10u), r.q); }
    /* 008bd986: movq mm0, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd989: paddd mm7, qword ptr [ebp - 0x94] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff6cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd990: paddd mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd993: psubd mm0, qword ptr [ebp - 0x94] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff6cu)); MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd99a: paddd mm7, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bd99d: paddd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd9a0: psrad mm7, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008bd9a4: paddd mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd9a7: psrad mm6, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bd9ab: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd9ae: psrad mm2, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bd9b2: movq mm4, qword ptr [ebp - 0x8c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffff74u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd9b9: punpcklwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd9bc: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd9bf: punpckhwd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd9c2: paddd mm4, qword ptr [ebp - 0x84] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff7cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd9c9: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd9cc: psubd mm5, qword ptr [ebp - 0x84] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_ebp+0xffffff7cu)); MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd9d3: psrad mm0, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd9d7: movq qword ptr [edi + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_edi+0x20u), r.q); }
    /* 008bd9db: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd9de: paddd mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bd9e1: punpcklwd mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd9e4: paddd mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bd9e7: punpckhwd mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bd9ea: movq mm0, qword ptr [ebp - 0x6c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffff94u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bd9ee: punpckldq mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bd9f1: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bd9f4: psrad mm4, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bd9f8: paddd mm0, qword ptr [ebp + 0x2c] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0x2cu)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bd9fc: psrad mm5, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bda00: paddd mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bda03: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bda06: psubd mm1, qword ptr [ebp + 0x2c] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ebp+0x2cu)); MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bda0a: psrad mm0, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bda0e: paddd mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bda11: punpcklwd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bda14: movq mm3, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bda17: punpckhwd mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bda1a: movq qword ptr [edi + 0x50], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edi+0x50u), r.q); }
    /* 008bda1e: punpckldq mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bda21: psrad mm1, 0xb */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0xbu; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bda25: movq qword ptr [edi + 0x30], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_edi+0x30u), r.q); }
    /* 008bda29: punpcklwd mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bda2c: punpckhwd mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bda2f: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bda32: add dword ptr [ebp + 0x4c], 8 */ { u32 ad = (u32)(r_ebp+0x4cu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bda36: add dword ptr [ebp + 0x54], 8 */ { u32 ad = (u32)(r_ebp+0x54u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bda3a: movq qword ptr [edi + 0x40], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_edi+0x40u), r.q); }
    /* 008bda3e: add dword ptr [ebp + 0x50], 8 */ { u32 ad = (u32)(r_ebp+0x50u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bda42: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 008bda45: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008bda46: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 008bda49: jne 0x8bd57e */ if (!fZ) goto L_008bd57e;
L_008bda4f:; BB(0x008bda4f);
    /* 008bda4f: mov esi, dword ptr [ebp + 0x70] */ r_esi = R32((u32)(r_ebp+0x70u));
    /* 008bda52: mov dword ptr [ebp + 0x5c], 8 */ W32((u32)(r_ebp+0x5cu), 0x8u);
    /* 008bda59: mov dword ptr [ebp + 0x50], esi */ W32((u32)(r_ebp+0x50u), r_esi);
    /* 008bda5c: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
L_008bda63:; BB(0x008bda63);
    /* 008bda63: mov esi, dword ptr [ebp + 0x50] */ r_esi = R32((u32)(r_ebp+0x50u));
    /* 008bda66: mov edi, dword ptr [ebp + 0x74] */ r_edi = R32((u32)(r_ebp+0x74u));
    /* 008bda69: movq mm0, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bda6c: movq mm1, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bda70: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bda73: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bda76: paddw mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bda79: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bda7c: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bda7f: pmaddwd mm3, qword ptr [0x99f1b8] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f1b8u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bda86: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bda89: pmaddwd mm2, qword ptr [0x99f1c0] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f1c0u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bda90: psubw mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bda93: punpckldq mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bda96: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bda99: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bda9c: pslld mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bdaa0: pxor mm3, qword ptr [0x99f188] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f188u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdaa7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdaaa: paddd mm3, qword ptr [0x99f190] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f190u)); MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdab1: psrad mm4, 3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x3u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bdab5: psrlq mm3, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bdab9: movq mm7, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bdabc: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdabf: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdac2: paddd mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdac5: paddw mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdac8: paddd mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bdacb: psubd mm7, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bdace: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdad1: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdad4: pmaddwd mm0, qword ptr [0x99f1c8] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f1c8u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bdadb: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdade: paddw mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdae1: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdae4: pmaddwd mm5, qword ptr [0x99f1e8] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99f1e8u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdaeb: punpckhdq mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdaee: pmaddwd mm3, qword ptr [0x99f1e0] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f1e0u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdaf5: paddw mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdaf8: pmaddwd mm6, qword ptr [0x99f1d8] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f1d8u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdaff: nop  */ ;
    /* 008bdb00: pmaddwd mm1, qword ptr [0x99f1d0] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f1d0u)); MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb07: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdb0a: movq mm2, qword ptr [0x99f190] */ { MM64 r; r.q = R64((u32)(0x99f190u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb11: nop  */ ;
    /* 008bdb12: pxor mm3, qword ptr [0x99f188] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f188u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb19: nop  */ ;
    /* 008bdb1a: pxor mm6, qword ptr [0x99f188] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f188u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdb21: paddd mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb24: paddd mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdb27: paddd mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb2a: movq mm5, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdb2d: paddd mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdb30: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb33: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdb36: punpckhdq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb39: paddd mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb3c: paddd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb3f: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdb42: movq mm3, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb45: paddd mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bdb48: movq mm2, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb4b: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdb4e: punpckhdq mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb51: psubd mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb54: movq mm5, qword ptr [0x99f1a8] */ { MM64 r; r.q = R64((u32)(0x99f1a8u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008bdb5b: paddd mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bdb5e: movq mm6, qword ptr [0x99f1b0] */ { MM64 r; r.q = R64((u32)(0x99f1b0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bdb65: psubd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb68: paddd mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bdb6b: paddd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb6e: paddd mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb71: psrad mm0, 0x12 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x12u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bdb75: paddd mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb78: psrad mm1, 0x12 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x12u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb7c: paddd mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb7f: psrad mm3, 0x12 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x12u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bdb83: pand mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb86: psrad mm2, 0x12 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x12u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bdb8a: movd ebx, mm1 */ r_ebx = (u32)(u64)(i64)fpr[1];
    /* 008bdb8d: psrlq mm1, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bdb91: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 008bdb94: add edi, dword ptr [ebp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bdb97: movd edx, mm1 */ r_edx = (u32)(u64)(i64)fpr[1];
    /* 008bdb9a: pand mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bdb9d: mov ah, byte ptr [ecx + ebx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ecx+r_ebx))) & 0xffu) << 8);
    /* 008bdba0: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 008bdba2: movd ebx, mm0 */ r_ebx = (u32)(u64)(i64)fpr[0];
    /* 008bdba5: psrlq mm0, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bdba9: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 008bdbac: add dword ptr [ebp + 0x58], 4 */ { u32 ad = (u32)(r_ebp+0x58u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bdbb0: movd edx, mm0 */ r_edx = (u32)(u64)(i64)fpr[0];
    /* 008bdbb3: pand mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdbb6: add edi, dword ptr [ebp + 0x78] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x78u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bdbb9: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bdbbc: mov al, byte ptr [ecx + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx))) & 0xffu);
    /* 008bdbbf: mov ah, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ecx+r_edx))) & 0xffu) << 8);
    /* 008bdbc2: movd mm4, eax */ { u64 v = r_eax; fpr[4] = (long double)(i64)v; }
    /* 008bdbc5: pand mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdbc8: movd ebx, mm3 */ r_ebx = (u32)(u64)(i64)fpr[3];
    /* 008bdbcb: psrlq mm3, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bdbcf: movd edx, mm3 */ r_edx = (u32)(u64)(i64)fpr[3];
    /* 008bdbd2: mov ah, byte ptr [ecx + ebx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ecx+r_ebx))) & 0xffu) << 8);
    /* 008bdbd5: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 008bdbd8: movd ebx, mm2 */ r_ebx = (u32)(u64)(i64)fpr[2];
    /* 008bdbdb: psrlq mm2, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008bdbdf: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bdbe2: movd edx, mm2 */ r_edx = (u32)(u64)(i64)fpr[2];
    /* 008bdbe5: mov al, byte ptr [ecx + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx))) & 0xffu);
    /* 008bdbe8: mov ah, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ecx+r_edx))) & 0xffu) << 8);
    /* 008bdbeb: movd mm5, eax */ { u64 v = r_eax; fpr[5] = (long double)(i64)v; }
    /* 008bdbee: punpckldq mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bdbf1: add dword ptr [ebp + 0x50], 0x10 */ { u32 ad = (u32)(r_ebp+0x50u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bdbf5: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 008bdbf8: movq qword ptr [edi], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_edi), r.q); }
    /* 008bdbfb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008bdbfc: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 008bdbff: jne 0x8bda63 */ if (!fZ) goto L_008bda63;
L_008bdc05:; BB(0x008bdc05);
    /* 008bdc05: emms  */ ; /* the MMX tag state is not modelled */
    /* 008bdc07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bdc08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bdc09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bdc0a: add ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bdc0d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bdc0e: ret  */ FN_RET(0x008bd557); r_esp += 4; return;
}

void f_008bdc0f(void) /* sub_8BDC0F */
{
    FN_ENTER(0x008bdc0f);
    /* 008bdc0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bdc10: mov ebp, esp */ r_ebp = r_esp;
    /* 008bdc12: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bdc15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bdc16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bdc17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bdc18: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008bdc1b: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008bdc1e: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 008bdc21: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bdc24: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008bdc27: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008bdc2a: mov word ptr [ebp - 0x1c], 8 */ W16((u32)(r_ebp+0xffffffe4u), 0x8u);
L_008bdc30:; BB(0x008bdc30);
    /* 008bdc30: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 008bdc33: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008bdc36: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008bdc39: mov bx, word ptr [esi + 0x40] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0x40u))) & 0xffffu);
    /* 008bdc3d: imul ax, word ptr [edi] */ { i32 t = (i32)(i16)(u16)r_eax * (i32)(i16)R16((u32)(r_edi)); r_eax = (r_eax & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdc41: mov cx, word ptr [esi + 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x20u))) & 0xffffu);
    /* 008bdc45: imul bx, word ptr [edi + 0x40] */ { i32 t = (i32)(i16)(u16)r_ebx * (i32)(i16)R16((u32)(r_edi+0x40u)); r_ebx = (r_ebx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdc4a: mov dx, word ptr [esi + 0x60] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x60u))) & 0xffffu);
    /* 008bdc4e: imul cx, word ptr [edi + 0x20] */ { i32 t = (i32)(i16)(u16)r_ecx * (i32)(i16)R16((u32)(r_edi+0x20u)); r_ecx = (r_ecx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdc53: imul dx, word ptr [edi + 0x60] */ { i32 t = (i32)(i16)(u16)r_edx * (i32)(i16)R16((u32)(r_edi+0x60u)); r_edx = (r_edx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdc58: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 008bdc5c: add ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc5f: sub word ptr [ebp - 0x18], bx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; W16(ad, r);  }
    /* 008bdc63: mov bx, cx */ r_ebx = (r_ebx & 0xffff0000u) | (((u16)r_ecx) & 0xffffu);
    /* 008bdc66: add cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc69: sub bx, dx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc6c: mov dx, ax */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 008bdc6f: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 008bdc72: add ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc75: imul ebx, ebx, 0x16a */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x16au; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bdc7b: sub dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc7e: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 008bdc82: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 008bdc86: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bdc89: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 008bdc8d: sub bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc90: add ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdc93: sub word ptr [ebp - 0x18], bx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; W16(ad, r);  }
    /* 008bdc97: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 008bdc9b: mov ax, word ptr [esi + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x10u))) & 0xffffu);
    /* 008bdc9f: imul ax, word ptr [edi + 0x10] */ { i32 t = (i32)(i16)(u16)r_eax * (i32)(i16)R16((u32)(r_edi+0x10u)); r_eax = (r_eax & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdca4: mov bx, word ptr [esi + 0x70] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0x70u))) & 0xffffu);
    /* 008bdca8: mov cx, word ptr [esi + 0x30] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x30u))) & 0xffffu);
    /* 008bdcac: imul bx, word ptr [edi + 0x70] */ { i32 t = (i32)(i16)(u16)r_ebx * (i32)(i16)R16((u32)(r_edi+0x70u)); r_ebx = (r_ebx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdcb1: mov dx, word ptr [esi + 0x50] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x50u))) & 0xffffu);
    /* 008bdcb5: imul cx, word ptr [edi + 0x30] */ { i32 t = (i32)(i16)(u16)r_ecx * (i32)(i16)R16((u32)(r_edi+0x30u)); r_ecx = (r_ecx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdcba: imul dx, word ptr [edi + 0x50] */ { i32 t = (i32)(i16)(u16)r_edx * (i32)(i16)R16((u32)(r_edi+0x50u)); r_edx = (r_edx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bdcbf: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 008bdcc3: add ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdcc6: sub word ptr [ebp - 8], bx */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; W16(ad, r);  }
    /* 008bdcca: mov bx, dx */ r_ebx = (r_ebx & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008bdccd: add dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdcd0: sub bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdcd3: mov cx, ax */ r_ecx = (r_ecx & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 008bdcd6: add ax, dx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdcd9: sub cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdcdc: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 008bdcdf: mov dx, bx */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 008bdce2: add bx, word ptr [ebp - 8] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdce6: imul ecx, ecx, 0x16a */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16au; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bdcec: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008bdcef: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 008bdcf2: imul edx, edx, 0xfffffd63 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfffffd63u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bdcf8: imul ebx, ebx, 0x1d9 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1d9u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bdcfe: mov di, word ptr [ebp - 8] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 008bdd02: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 008bdd05: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bdd08: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bdd0b: imul edi, edi, 0x115 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x115u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bdd11: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bdd14: sar edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008bdd17: sub di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd1a: add dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd1d: sub dx, ax */ {  u32 a = (u16)r_edx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd20: sub cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd23: add di, cx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd26: mov word ptr [ebp - 4], di */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edi);
    /* 008bdd2a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008bdd2d: mov si, ax */ r_esi = (r_esi & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 008bdd30: mov bx, word ptr [ebp - 0x14] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 008bdd34: add ax, word ptr [ebp - 0x14] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd38: sub bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd3b: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 008bdd3e: mov word ptr [edi + 0x70], bx */ W16((u32)(r_edi+0x70u), (u16)r_ebx);
    /* 008bdd42: mov ax, dx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008bdd45: mov bx, word ptr [ebp - 0xc] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 008bdd49: add dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd4c: sub bx, ax */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd4f: mov word ptr [edi + 0x10], dx */ W16((u32)(r_edi+0x10u), (u16)r_edx);
    /* 008bdd53: mov word ptr [edi + 0x60], bx */ W16((u32)(r_edi+0x60u), (u16)r_ebx);
    /* 008bdd57: mov dx, cx */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_ecx) & 0xffffu);
    /* 008bdd5a: mov bx, word ptr [ebp - 0x18] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 008bdd5e: add cx, bx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd61: sub bx, dx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd64: mov word ptr [edi + 0x20], cx */ W16((u32)(r_edi+0x20u), (u16)r_ecx);
    /* 008bdd68: mov word ptr [edi + 0x50], bx */ W16((u32)(r_edi+0x50u), (u16)r_ebx);
    /* 008bdd6c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 008bdd70: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 008bdd74: add word ptr [ebp - 4], ax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 008bdd78: sub ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdd7b: mov bx, word ptr [ebp - 4] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 008bdd7f: mov word ptr [edi + 0x40], bx */ W16((u32)(r_edi+0x40u), (u16)r_ebx);
    /* 008bdd83: mov word ptr [edi + 0x30], ax */ W16((u32)(r_edi+0x30u), (u16)r_eax);
    /* 008bdd87: add dword ptr [ebp - 0x2c], 2 */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bdd8b: add dword ptr [ebp - 0x28], 2 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bdd8f: add dword ptr [ebp - 0x24], 2 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bdd93: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 008bdd97: dec ax */ { u32 x = (u16)r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); }
    /* 008bdd99: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 008bdd9d: jne 0x8bdc30 */ if (!fZ) goto L_008bdc30;
L_008bdda3:; BB(0x008bdda3);
    /* 008bdda3: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008bdda6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 008bddad: mov word ptr [ebp - 0x1c], 8 */ W16((u32)(r_ebp+0xffffffe4u), 0x8u);
    /* 008bddb3: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
L_008bddb6:; BB(0x008bddb6);
    /* 008bddb6: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 008bddb9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008bddbc: add edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bddbf: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 008bddc1: add edi, dword ptr [ebp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bddc4: add dword ptr [ebp - 0x20], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bddc8: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008bddcb: mov bx, word ptr [esi + 8] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0x8u))) & 0xffffu);
    /* 008bddcf: mov cx, word ptr [esi + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x4u))) & 0xffffu);
    /* 008bddd3: mov dx, word ptr [esi + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0xcu))) & 0xffffu);
    /* 008bddd7: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 008bdddb: add ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bddde: sub word ptr [ebp - 0x18], bx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; W16(ad, r);  }
    /* 008bdde2: mov bx, cx */ r_ebx = (r_ebx & 0xffff0000u) | (((u16)r_ecx) & 0xffffu);
    /* 008bdde5: add cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdde8: sub bx, dx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bddeb: mov dx, ax */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 008bddee: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 008bddf1: add ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bddf4: imul ebx, ebx, 0x16a */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x16au; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bddfa: sub dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bddfd: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 008bde01: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 008bde05: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bde08: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 008bde0c: sub bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde0f: add ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde12: sub word ptr [ebp - 0x18], bx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; W16(ad, r);  }
    /* 008bde16: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 008bde1a: mov ax, word ptr [esi + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x2u))) & 0xffffu);
    /* 008bde1e: mov bx, word ptr [esi + 0xe] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0xeu))) & 0xffffu);
    /* 008bde22: mov cx, word ptr [esi + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x6u))) & 0xffffu);
    /* 008bde26: mov dx, word ptr [esi + 0xa] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0xau))) & 0xffffu);
    /* 008bde2a: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 008bde2e: add ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde31: sub word ptr [ebp - 8], bx */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; W16(ad, r);  }
    /* 008bde35: mov bx, dx */ r_ebx = (r_ebx & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008bde38: add dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde3b: sub bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde3e: mov cx, ax */ r_ecx = (r_ecx & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 008bde41: add ax, dx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde44: sub cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde47: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 008bde4a: mov dx, bx */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 008bde4d: add bx, word ptr [ebp - 8] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde51: imul ecx, ecx, 0x16a */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16au; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bde57: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008bde5a: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 008bde5d: imul edx, edx, 0xfffffd63 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfffffd63u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bde63: imul ebx, ebx, 0x1d9 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1d9u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bde69: mov si, word ptr [ebp - 8] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 008bde6d: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 008bde70: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bde73: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bde76: imul esi, esi, 0x115 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x115u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bde7c: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bde7f: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008bde82: sub si, bx */ {  u32 a = (u16)r_esi; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde85: add dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde88: sub dx, ax */ {  u32 a = (u16)r_edx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde8b: sub cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde8e: add si, cx */ {  u32 a = (u16)r_esi; u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bde91: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 008bde95: mov si, ax */ r_esi = (r_esi & 0xffff0000u) | (((u16)r_eax) & 0xffffu);
    /* 008bde98: mov bx, word ptr [ebp - 0x14] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 008bde9c: add ax, word ptr [ebp - 0x14] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdea0: sub bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdea3: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008bdea6: sar ax, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_eax; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bdeaa: sar bx, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_ebx; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bdeae: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bdeb3: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bdeb9: mov al, byte ptr [esi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax))) & 0xffu);
    /* 008bdebc: mov bl, byte ptr [esi + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bdebf: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 008bdec1: mov byte ptr [edi + 7], bl */ W8((u32)(r_edi+0x7u), (u8)r_ebx);
    /* 008bdec4: mov ax, dx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008bdec7: mov bx, word ptr [ebp - 0xc] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 008bdecb: add dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdece: sub bx, ax */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bded1: sar dx, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_edx; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bded5: sar bx, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_ebx; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bded9: and edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008bdedf: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bdee5: mov dl, byte ptr [esi + edx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_edx))) & 0xffu);
    /* 008bdee8: mov bl, byte ptr [esi + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bdeeb: mov byte ptr [edi + 1], dl */ W8((u32)(r_edi+0x1u), (u8)r_edx);
    /* 008bdeee: mov byte ptr [edi + 6], bl */ W8((u32)(r_edi+0x6u), (u8)r_ebx);
    /* 008bdef1: mov dx, cx */ r_edx = (r_edx & 0xffff0000u) | (((u16)r_ecx) & 0xffffu);
    /* 008bdef4: mov bx, word ptr [ebp - 0x18] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 008bdef8: add cx, bx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdefb: sub bx, dx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdefe: sar cx, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_ecx; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bdf02: sar bx, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_ebx; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bdf06: and ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bdf0c: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bdf12: mov cl, byte ptr [esi + ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008bdf15: mov bl, byte ptr [esi + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx))) & 0xffu);
    /* 008bdf18: mov byte ptr [edi + 2], cl */ W8((u32)(r_edi+0x2u), (u8)r_ecx);
    /* 008bdf1b: mov byte ptr [edi + 5], bl */ W8((u32)(r_edi+0x5u), (u8)r_ebx);
    /* 008bdf1e: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 008bdf22: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 008bdf26: add word ptr [ebp - 4], ax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 008bdf2a: sub ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008bdf2d: sar word ptr [ebp - 4], 5 */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = (5u) & 31; u32 a = R16(ad); u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; W16(ad, r);  } }
    /* 008bdf32: sar ax, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_eax; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008bdf36: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 008bdf3a: and ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bdf40: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bdf45: mov bl, byte ptr [esi + ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008bdf48: mov al, byte ptr [esi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax))) & 0xffu);
    /* 008bdf4b: mov byte ptr [edi + 4], bl */ W8((u32)(r_edi+0x4u), (u8)r_ebx);
    /* 008bdf4e: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 008bdf51: add dword ptr [ebp - 0x24], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008bdf55: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 008bdf59: dec ax */ { u32 x = (u16)r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 008bdf5b: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 008bdf5f: jne 0x8bddb6 */ if (!fZ) goto L_008bddb6;
L_008bdf65:; BB(0x008bdf65);
    /* 008bdf65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bdf66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bdf67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bdf68: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bdf69: ret  */ FN_RET(0x008bdc0f); r_esp += 4; return;
}

void f_008bdf6a(void) /* sub_8BDF6A */
{
    FN_ENTER(0x008bdf6a);
    /* 008bdf6a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bdf6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bdf6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bdf6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bdf70: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 008bdf74: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 008bdf78: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 008bdf7c: movq mm0, qword ptr [ebx + 0x60] */ { MM64 r; r.q = R64((u32)(r_ebx+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bdf80: pmullw mm0, qword ptr [edi + 0x60] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_edi+0x60u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 008bdf84: movq mm1, qword ptr [ebx + 0x20] */ { MM64 r; r.q = R64((u32)(r_ebx+0x20u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bdf88: pmullw mm1, qword ptr [edi + 0x20] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_edi+0x20u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[1] = (long double)(i64)(r.q); }
    /* 008bdf8c: movq mm3, qword ptr [ebx] */ { MM64 r; r.q = R64((u32)(r_ebx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bdf8f: pmullw mm3, qword ptr [edi] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_edi)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[3] = (long double)(i64)(r.q); }
    /* 008bdf92: movq mm5, qword ptr [ebx + 0x40] */ { MM64 r; r.q = R64((u32)(r_ebx+0x40u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008bdf96: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdf99: pmullw mm5, qword ptr [edi + 0x40] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edi+0x40u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[5] = (long double)(i64)(r.q); }
    /* 008bdf9d: psubw mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfa0: movq mm7, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bdfa7: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdfaa: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfb1: paddw mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bdfb4: pmaddwd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfb7: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bdfba: punpckhwd mm6, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdfc1: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bdfc4: pmaddwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdfc7: paddw mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdfca: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfce: psubw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bdfd1: psrad mm6, 8 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008bdfd5: packssdw mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfd8: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdfdb: psubw mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfde: paddw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bdfe1: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bdfe4: paddw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bdfe7: movq qword ptr [esi + 0x20], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x20u), r.q); }
    /* 008bdfeb: psubw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bdfee: movq qword ptr [esi + 0x60], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x60u), r.q); }
    /* 008bdff2: psubw mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bdff5: movq qword ptr [esi], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esi), r.q); }
    /* 008bdff8: movq mm7, qword ptr [ebx + 0x50] */ { MM64 r; r.q = R64((u32)(r_ebx+0x50u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bdffc: pmullw mm7, qword ptr [edi + 0x50] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(r_edi+0x50u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[7] = (long double)(i64)(r.q); }
    /* 008be000: movq mm0, qword ptr [ebx + 0x30] */ { MM64 r; r.q = R64((u32)(r_ebx+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be004: pmullw mm0, qword ptr [edi + 0x30] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_edi+0x30u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 008be008: movq mm3, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be00b: movq mm5, qword ptr [ebx + 0x10] */ { MM64 r; r.q = R64((u32)(r_ebx+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be00f: pmullw mm5, qword ptr [edi + 0x10] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edi+0x10u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[5] = (long double)(i64)(r.q); }
    /* 008be013: psubw mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be016: movq mm4, qword ptr [ebx + 0x70] */ { MM64 r; r.q = R64((u32)(r_ebx+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be01a: pmullw mm4, qword ptr [edi + 0x70] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_edi+0x70u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[4] = (long double)(i64)(r.q); }
    /* 008be01e: paddw mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be021: movq mm1, qword ptr [0x99f208] */ { MM64 r; r.q = R64((u32)(0x99f208u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be028: movq qword ptr [esp + 0x1c], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x1cu), r.q); }
    /* 008be02d: movq mm2, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be030: punpcklwd mm7, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be037: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be03a: pmaddwd mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be03d: paddw mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be040: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be047: psubw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be04a: pmaddwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be04d: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be050: punpcklwd mm0, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be057: psrad mm7, 8 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008be05b: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be05f: movq mm1, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be062: punpckhwd mm4, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be069: packssdw mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[7] = (long double)(i64)(r.q); }
    /* 008be06c: movq mm2, qword ptr [0x99f210] */ { MM64 r; r.q = R64((u32)(0x99f210u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be073: pmaddwd mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be076: pmaddwd mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be079: psrad mm0, 8 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be07d: movq mm2, qword ptr [0x99f218] */ { MM64 r; r.q = R64((u32)(0x99f218u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be084: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be088: packssdw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[0] = (long double)(i64)(r.q); }
    /* 008be08b: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be08e: movq mm1, qword ptr [esp + 0x1c] */ { MM64 r; r.q = R64((u32)(r_esp+0x1cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be093: movq qword ptr [esp + 0x14], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x14u), r.q); }
    /* 008be098: paddw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be09b: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be09e: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be0a5: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be0a8: pmaddwd mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be0ab: paddw mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be0ae: punpckhwd mm0, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be0b5: psubw mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be0b8: movq mm3, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be0bf: pmaddwd mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be0c2: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be0c6: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be0c9: punpcklwd mm4, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be0d0: psrad mm0, 8 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be0d4: pmaddwd mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be0d7: packssdw mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be0da: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be0e1: movq mm0, qword ptr [esp + 0x14] */ { MM64 r; r.q = R64((u32)(r_esp+0x14u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be0e6: pmaddwd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be0e9: psubw mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be0ec: paddw mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be0ef: movq mm7, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be0f3: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be0f7: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be0fb: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be0fe: packssdw mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[4] = (long double)(i64)(r.q); }
    /* 008be101: psubw mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be104: movq mm2, qword ptr [esi + 0x60] */ { MM64 r; r.q = R64((u32)(r_esi+0x60u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be108: psubw mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be10b: paddw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be10e: psubw mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be111: paddw mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be114: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be117: movq mm1, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be11a: movq qword ptr [esi + 0x40], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x40u), r.q); }
    /* 008be11e: paddw mm7, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be121: movq qword ptr [esi + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esi+0x30u), r.q); }
    /* 008be125: psubw mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be128: movq mm6, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be12b: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be12e: movq qword ptr [esi], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esi), r.q); }
    /* 008be131: paddw mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be134: movq qword ptr [esi + 0x70], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x70u), r.q); }
    /* 008be138: psubw mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be13b: movq qword ptr [esi + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esi+0x10u), r.q); }
    /* 008be13f: movq mm0, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be142: movq qword ptr [esi + 0x60], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x60u), r.q); }
    /* 008be146: paddw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be149: movq mm1, qword ptr [ebx + 0x28] */ { MM64 r; r.q = R64((u32)(r_ebx+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be14d: psubw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be150: pmullw mm1, qword ptr [edi + 0x28] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_edi+0x28u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be154: movq qword ptr [esi + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esi+0x20u), r.q); }
    /* 008be158: movq qword ptr [esi + 0x50], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x50u), r.q); }
    /* 008be15c: movq mm7, qword ptr [ebx + 0x68] */ { MM64 r; r.q = R64((u32)(r_ebx+0x68u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be160: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be163: pmullw mm7, qword ptr [edi + 0x68] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(r_edi+0x68u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[7] = (long double)(i64)(r.q); }
    /* 008be167: movq mm3, qword ptr [ebx + 8] */ { MM64 r; r.q = R64((u32)(r_ebx+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be16b: pmullw mm3, qword ptr [edi + 8] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_edi+0x8u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[3] = (long double)(i64)(r.q); }
    /* 008be16f: movq mm5, qword ptr [ebx + 0x48] */ { MM64 r; r.q = R64((u32)(r_ebx+0x48u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be173: psubw mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be176: pmullw mm5, qword ptr [edi + 0x48] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edi+0x48u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[5] = (long double)(i64)(r.q); }
    /* 008be17a: paddw mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be17d: movq mm7, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be184: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be187: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be18e: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be191: pmaddwd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be194: punpckhwd mm4, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be19b: movq mm0, qword ptr [ebx + 0x58] */ { MM64 r; r.q = R64((u32)(r_ebx+0x58u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be19f: pmaddwd mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be1a2: pmullw mm0, qword ptr [edi + 0x58] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_edi+0x58u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 008be1a6: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be1aa: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be1ae: packssdw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be1b1: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be1b4: paddw mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be1b7: psubw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be1ba: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be1bd: psubw mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be1c0: movq mm6, qword ptr [ebx + 0x38] */ { MM64 r; r.q = R64((u32)(r_ebx+0x38u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be1c4: paddw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be1c7: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be1ca: paddw mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be1cd: movq qword ptr [esi + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x28u), r.q); }
    /* 008be1d1: psubw mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be1d4: pmullw mm6, qword ptr [edi + 0x38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_edi+0x38u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[6] = (long double)(i64)(r.q); }
    /* 008be1d8: psubw mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be1db: movq qword ptr [esi + 0x68], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esi+0x68u), r.q); }
    /* 008be1df: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be1e2: movq qword ptr [esi + 0x48], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esi+0x48u), r.q); }
    /* 008be1e6: paddw mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be1e9: movq mm4, qword ptr [ebx + 0x78] */ { MM64 r; r.q = R64((u32)(r_ebx+0x78u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be1ed: psubw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be1f0: pmullw mm4, qword ptr [edi + 0x78] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_edi+0x78u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[4] = (long double)(i64)(r.q); }
    /* 008be1f4: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be1f7: movq mm5, qword ptr [ebx + 0x18] */ { MM64 r; r.q = R64((u32)(r_ebx+0x18u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be1fb: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be1fe: pmullw mm5, qword ptr [edi + 0x18] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edi+0x18u)); MM64 r; r.w[0] = (u16)(a.w[0] * b.w[0]); r.w[1] = (u16)(a.w[1] * b.w[1]); r.w[2] = (u16)(a.w[2] * b.w[2]); r.w[3] = (u16)(a.w[3] * b.w[3]); fpr[5] = (long double)(i64)(r.q); }
    /* 008be202: movq qword ptr [esp + 0x1c], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x1cu), r.q); }
    /* 008be207: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be20a: movq mm7, qword ptr [0x99f208] */ { MM64 r; r.q = R64((u32)(0x99f208u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be211: paddw mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be214: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be21b: psubw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be21e: pmaddwd mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be221: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be224: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be22b: paddw mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be22e: pmaddwd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be231: psubw mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be234: movq qword ptr [esp + 0xc], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0xcu), r.q); }
    /* 008be239: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be23d: movq mm3, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be244: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be248: packssdw mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be24b: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be24e: punpcklwd mm4, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be255: pmaddwd mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be258: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be25f: pmaddwd mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be262: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be266: movq mm3, qword ptr [esp + 0xc] */ { MM64 r; r.q = R64((u32)(r_esp+0xcu)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be26b: movq mm0, qword ptr [0x99f218] */ { MM64 r; r.q = R64((u32)(0x99f218u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be272: paddw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be275: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be279: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be27c: packssdw mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[4] = (long double)(i64)(r.q); }
    /* 008be27f: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be282: punpcklwd mm3, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be289: pmaddwd mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be28c: punpckhwd mm7, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be293: pmaddwd mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be296: movq mm0, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be299: psrad mm3, 8 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be29d: punpcklwd mm6, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be2a4: psrad mm7, 8 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008be2a8: packssdw mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[3] = (long double)(i64)(r.q); }
    /* 008be2ab: movq mm7, qword ptr [0x99f210] */ { MM64 r; r.q = R64((u32)(0x99f210u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be2b2: punpckhwd mm0, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be2b9: pmaddwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be2bc: pmaddwd mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be2bf: psrad mm6, 8 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be2c3: psrad mm0, 8 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be2c7: packssdw mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[6] = (long double)(i64)(r.q); }
    /* 008be2ca: movq mm0, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be2ce: psubw mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be2d1: paddw mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be2d4: psubw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be2d7: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be2da: psubw mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be2dd: paddw mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be2e0: movq mm2, qword ptr [esi + 0x68] */ { MM64 r; r.q = R64((u32)(r_esi+0x68u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be2e4: paddw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be2e7: movq mm7, qword ptr [esp + 0x1c] */ { MM64 r; r.q = R64((u32)(r_esp+0x1cu)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be2ec: psubw mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be2ef: movq qword ptr [esi + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x8u), r.q); }
    /* 008be2f3: movq mm5, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be2f6: movq mm0, qword ptr [esi + 0x48] */ { MM64 r; r.q = R64((u32)(r_esi+0x48u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be2fa: psubw mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be2fd: paddw mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be300: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be303: movq qword ptr [esi + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esi+0x38u), r.q); }
    /* 008be307: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be30a: psubw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be30d: paddw mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be310: movq qword ptr [esi + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esi+0x18u), r.q); }
    /* 008be314: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be317: paddw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be31a: psubw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be31d: movq qword ptr [esi + 0x28], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x28u), r.q); }
    /* 008be321: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be324: punpcklwd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be327: punpckhwd mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be32a: movq mm6, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be32d: movq mm2, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be330: punpcklwd mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be333: movq mm7, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be337: punpckhwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be33a: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be33d: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be340: movq qword ptr [esi + 0x48], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esi+0x48u), r.q); }
    /* 008be344: punpckhdq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be347: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be34a: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be34d: movq qword ptr [esi + 0x58], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esi+0x58u), r.q); }
    /* 008be351: punpckhdq mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be354: movq qword ptr [esi + 0x68], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x68u), r.q); }
    /* 008be358: movq mm5, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be35b: movq qword ptr [esi + 0x78], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x78u), r.q); }
    /* 008be35f: punpcklwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be362: punpckhwd mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be365: movq mm7, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be369: movq mm4, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be36d: movq mm3, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be370: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be373: punpcklwd mm7, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be376: punpckhwd mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be379: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be37c: movq mm1, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be37f: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be382: movq qword ptr [esi], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esi), r.q); }
    /* 008be385: punpckhdq mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be388: movq qword ptr [esi + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esi+0x10u), r.q); }
    /* 008be38c: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be38f: movq qword ptr [esi + 0x20], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esi+0x20u), r.q); }
    /* 008be393: punpckhdq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be396: movq qword ptr [esi + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x30u), r.q); }
    /* 008be39a: movq mm0, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be39e: movq mm1, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be3a2: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be3a5: movq mm3, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be3a9: punpcklwd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be3ac: punpckhwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be3af: movq mm1, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be3b3: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be3b6: punpcklwd mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be3b9: punpckhwd mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be3bc: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be3bf: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be3c2: punpckldq mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be3c5: punpckhdq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be3c8: movq mm3, qword ptr [esi + 0x40] */ { MM64 r; r.q = R64((u32)(r_esi+0x40u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be3cc: movq qword ptr [esi + 0x40], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x40u), r.q); }
    /* 008be3d0: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be3d3: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be3d6: movq mm4, qword ptr [esi + 0x50] */ { MM64 r; r.q = R64((u32)(r_esi+0x50u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be3da: movq qword ptr [esi + 0x50], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x50u), r.q); }
    /* 008be3de: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be3e1: movq mm0, qword ptr [esi + 0x60] */ { MM64 r; r.q = R64((u32)(r_esi+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be3e5: punpcklwd mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be3e8: punpckhwd mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be3eb: movq mm4, qword ptr [esi + 0x70] */ { MM64 r; r.q = R64((u32)(r_esi+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be3ef: movq qword ptr [esi + 0x60], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esi+0x60u), r.q); }
    /* 008be3f3: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be3f6: movq qword ptr [esi + 0x70], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esi+0x70u), r.q); }
    /* 008be3fa: punpcklwd mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be3fd: punpckhwd mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be400: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be403: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be406: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be409: movq qword ptr [esi + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x8u), r.q); }
    /* 008be40d: punpckhdq mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be410: movq qword ptr [esi + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esi+0x18u), r.q); }
    /* 008be414: punpckldq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be417: movq qword ptr [esi + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x28u), r.q); }
    /* 008be41b: punpckhdq mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be41e: movq qword ptr [esi + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esi+0x38u), r.q); }
    /* 008be422: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 008be426: movq mm0, qword ptr [esi + 0x60] */ { MM64 r; r.q = R64((u32)(r_esi+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be42a: movq mm1, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be42e: movq mm3, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be431: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be434: movq mm5, qword ptr [esi + 0x40] */ { MM64 r; r.q = R64((u32)(r_esi+0x40u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be438: psubw mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be43b: movq mm6, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be442: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be445: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be44c: paddw mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be44f: pmaddwd mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be452: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be455: punpckhwd mm4, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be45c: pmaddwd mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be45f: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be463: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be467: packssdw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be46a: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be46d: paddw mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be470: psubw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be473: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be476: psubw mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be479: paddw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be47c: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be47f: paddw mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be482: movq qword ptr [esi + 0x20], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x20u), r.q); }
    /* 008be486: psubw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be489: movq qword ptr [esi + 0x60], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x60u), r.q); }
    /* 008be48d: psubw mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be490: movq qword ptr [esi], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esi), r.q); }
    /* 008be493: movq mm7, qword ptr [esi + 0x50] */ { MM64 r; r.q = R64((u32)(r_esi+0x50u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be497: movq mm0, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be49b: movq mm3, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be49e: movq mm5, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be4a2: psubw mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be4a5: movq mm4, qword ptr [esi + 0x70] */ { MM64 r; r.q = R64((u32)(r_esi+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be4a9: paddw mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be4ac: movq mm2, qword ptr [0x99f208] */ { MM64 r; r.q = R64((u32)(0x99f208u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be4b3: movq mm1, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be4b6: movq qword ptr [esp + 0x14], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x14u), r.q); }
    /* 008be4bb: movq mm0, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4be: punpcklwd mm7, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be4c5: pmaddwd mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be4c8: punpckhwd mm0, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4cf: pmaddwd mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4d2: psrad mm7, 8 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008be4d6: movq mm6, qword ptr [0x99f210] */ { MM64 r; r.q = R64((u32)(0x99f210u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be4dd: psrad mm0, 8 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be4e1: packssdw mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[7] = (long double)(i64)(r.q); }
    /* 008be4e4: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4e7: paddw mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be4ea: psubw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4ed: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be4f0: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be4f3: punpcklwd mm0, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4fa: pmaddwd mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be4fd: punpckhwd mm4, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be504: pmaddwd mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be507: paddw mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be50a: movq mm2, qword ptr [0x99f218] */ { MM64 r; r.q = R64((u32)(0x99f218u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be511: psrad mm0, 8 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be515: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be519: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be51c: packssdw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[0] = (long double)(i64)(r.q); }
    /* 008be51f: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be522: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be529: paddw mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be52c: pmaddwd mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be52f: psubw mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be532: punpckhwd mm6, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be539: pmaddwd mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be53c: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be540: psrad mm6, 8 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be544: packssdw mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be547: psubw mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be54a: paddw mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be54d: movq mm7, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be554: movq mm3, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be557: punpcklwd mm4, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be55e: psubw mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be561: pmaddwd mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be564: punpckhwd mm3, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be56b: movq mm6, qword ptr [esp + 0x14] */ { MM64 r; r.q = R64((u32)(r_esp+0x14u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be570: pmaddwd mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be573: movq mm2, qword ptr [esi + 0x60] */ { MM64 r; r.q = R64((u32)(r_esi+0x60u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be577: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be57b: movq mm7, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be57f: psrad mm3, 8 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be583: packssdw mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[4] = (long double)(i64)(r.q); }
    /* 008be586: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be589: psubw mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be58c: paddw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be58f: psubw mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be592: paddw mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be595: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be598: movq mm1, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be59b: movq qword ptr [esi + 0x40], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x40u), r.q); }
    /* 008be59f: paddw mm7, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be5a2: movq qword ptr [esi + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esi+0x30u), r.q); }
    /* 008be5a6: psubw mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be5a9: movq mm6, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be5ac: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be5af: movq qword ptr [esi], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esi), r.q); }
    /* 008be5b2: paddw mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be5b5: movq qword ptr [esi + 0x70], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esi+0x70u), r.q); }
    /* 008be5b9: psubw mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be5bc: movq qword ptr [esi + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esi+0x10u), r.q); }
    /* 008be5c0: movq mm0, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be5c3: movq qword ptr [esi + 0x60], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x60u), r.q); }
    /* 008be5c7: paddw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be5ca: movq mm1, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008be5ce: psubw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be5d1: movq qword ptr [esi + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esi+0x20u), r.q); }
    /* 008be5d5: movq qword ptr [esi + 0x50], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x50u), r.q); }
    /* 008be5d9: movq mm7, qword ptr [esi + 0x68] */ { MM64 r; r.q = R64((u32)(r_esi+0x68u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be5dd: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be5e0: movq mm3, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008be5e4: psubw mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be5e7: movq mm5, qword ptr [esi + 0x48] */ { MM64 r; r.q = R64((u32)(r_esi+0x48u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be5eb: paddw mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be5ee: movq mm4, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be5f5: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be5f8: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be5ff: pmaddwd mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be602: punpckhwd mm6, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be609: pmaddwd mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be60c: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be60f: paddw mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be612: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be616: psubw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be619: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be61c: psrad mm6, 8 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be620: packssdw mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be623: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be626: psubw mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be629: paddw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be62c: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be62f: paddw mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be632: movq qword ptr [esi + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esi+0x28u), r.q); }
    /* 008be636: psubw mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be639: movq qword ptr [esi + 0x68], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esi+0x68u), r.q); }
    /* 008be63d: psubw mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be640: movq qword ptr [esi + 0x48], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esi+0x48u), r.q); }
    /* 008be644: movq mm0, qword ptr [esi + 0x58] */ { MM64 r; r.q = R64((u32)(r_esi+0x58u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be648: movq mm6, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be64c: movq mm4, qword ptr [esi + 0x78] */ { MM64 r; r.q = R64((u32)(r_esi+0x78u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be650: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be653: movq mm5, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008be657: paddw mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be65a: movq qword ptr [esp + 0x1c], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x1cu), r.q); }
    /* 008be65f: psubw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be662: movq mm6, qword ptr [0x99f208] */ { MM64 r; r.q = R64((u32)(0x99f208u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be669: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be66c: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be66f: punpcklwd mm1, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be676: pmaddwd mm1, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be679: punpckhwd mm7, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be680: pmaddwd mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be683: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be686: paddw mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be689: psrad mm1, 8 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008be68d: psubw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be690: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be693: psrad mm7, 8 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008be697: paddw mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be69a: packssdw mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[1] = (long double)(i64)(r.q); }
    /* 008be69d: psubw mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be6a0: movq mm7, qword ptr [0x99f200] */ { MM64 r; r.q = R64((u32)(0x99f200u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be6a7: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6aa: punpcklwd mm4, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be6b1: paddw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be6b4: pmaddwd mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be6b7: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6be: pmaddwd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6c1: movq mm7, qword ptr [0x99f218] */ { MM64 r; r.q = R64((u32)(0x99f218u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be6c8: psrad mm4, 8 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be6cc: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be6d0: packssdw mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[4] = (long double)(i64)(r.q); }
    /* 008be6d3: movq mm2, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6d6: punpcklwd mm3, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be6dd: pmaddwd mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be6e0: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6e7: pmaddwd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6ea: movq mm7, qword ptr [0x99f210] */ { MM64 r; r.q = R64((u32)(0x99f210u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be6f1: psrad mm3, 8 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be6f5: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be6f9: packssdw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[3] = (long double)(i64)(r.q); }
    /* 008be6fc: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be6ff: punpcklwd mm6, dword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be706: pmaddwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be709: punpckhwd mm2, qword ptr [0x99f220] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99f220u)); MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be710: pmaddwd mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.sd[0] = (i32)(i16)a.w[0] * (i32)(i16)b.w[0] + (i32)(i16)a.w[1] * (i32)(i16)b.w[1]; r.sd[1] = (i32)(i16)a.w[2] * (i32)(i16)b.w[2] + (i32)(i16)a.w[3] * (i32)(i16)b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be713: movq mm0, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be717: psrad mm6, 8 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be71b: movq mm7, qword ptr [esp + 0x1c] */ { MM64 r; r.q = R64((u32)(r_esp+0x1cu)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be720: psrad mm2, 8 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be724: packssdw mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[6] = (long double)(i64)(r.q); }
    /* 008be727: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be72a: psubw mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be72d: paddw mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be730: psubw mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be733: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be736: psubw mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be739: paddw mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be73c: movq mm2, qword ptr [esi + 0x68] */ { MM64 r; r.q = R64((u32)(r_esi+0x68u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008be740: paddw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be743: movq qword ptr [esi + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x8u), r.q); }
    /* 008be747: psubw mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be74a: movq mm5, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be74d: psubw mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be750: paddw mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be753: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be756: movq mm0, qword ptr [esi + 0x48] */ { MM64 r; r.q = R64((u32)(r_esi+0x48u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008be75a: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be75d: movq qword ptr [esi + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esi+0x38u), r.q); }
    /* 008be761: psubw mm3, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be764: paddw mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be767: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be76a: movq qword ptr [esi + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esi+0x18u), r.q); }
    /* 008be76e: paddw mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be771: psubw mm6, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0] - b.w[0]; r.w[1] = a.w[1] - b.w[1]; r.w[2] = a.w[2] - b.w[2]; r.w[3] = a.w[3] - b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be774: movq qword ptr [esi + 0x28], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esi+0x28u), r.q); }
    /* 008be778: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 008be77c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008be780: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 008be783: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008be787: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be78a: punpcklwd mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be78d: punpckhwd mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be790: movq mm2, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be793: movq mm6, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[6] = (long double)(i64)(r.q); }
    /* 008be796: punpcklwd mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be799: movq mm7, qword ptr [esi + 0x10] */ { MM64 r; r.q = R64((u32)(r_esi+0x10u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be79d: punpckhwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be7a0: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be7a3: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be7a6: psrlw mm5, 5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be7aa: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be7ad: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be7b2: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be7b5: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 008be7b8: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be7bc: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be7bf: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be7c4: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be7c7: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 008be7ca: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be7ce: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be7d1: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be7d6: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be7d9: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 008be7dc: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be7e0: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be7e3: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be7e8: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be7eb: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 008be7ee: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 008be7f1: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008be7f5: punpckhdq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be7f8: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be7fb: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008be7fe: psrlw mm4, 5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be802: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008be805: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be80a: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be80d: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 008be810: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be814: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008be817: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be81c: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be81f: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 008be822: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be826: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008be829: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be82e: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be831: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 008be834: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008be838: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008be83b: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be840: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be843: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 008be846: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 008be849: add ecx, dword ptr [esp + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008be84d: punpckhdq mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be850: psrlw mm0, 5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be854: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008be857: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be85c: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be85f: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 008be862: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be866: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008be869: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be86e: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be871: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 008be874: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be878: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008be87b: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be880: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be883: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 008be886: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008be88a: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008be88d: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be892: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be895: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 008be898: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 008be89b: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008be89f: movq mm5, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be8a2: psrlw mm3, 5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be8a6: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008be8a9: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be8ae: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be8b1: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 008be8b4: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be8b8: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008be8bb: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be8c0: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be8c3: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 008be8c6: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be8ca: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008be8cd: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be8d2: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be8d5: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 008be8d8: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008be8dc: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008be8df: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be8e4: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be8e7: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 008be8ea: punpcklwd mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be8ed: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008be8f1: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 008be8f3: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008be8f7: movq mm4, qword ptr [esi + 0x30] */ { MM64 r; r.q = R64((u32)(r_esi+0x30u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008be8fb: punpckhwd mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be8fe: movq mm7, qword ptr [esi + 0x20] */ { MM64 r; r.q = R64((u32)(r_esi+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008be902: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be905: movq mm3, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be908: punpcklwd mm7, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008be90b: punpckhwd mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[3] = (long double)(i64)(r.q); }
    /* 008be90e: movq mm4, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[4] = (long double)(i64)(r.q); }
    /* 008be911: movq mm1, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[1] = (long double)(i64)(r.q); }
    /* 008be914: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008be917: psrlw mm6, 5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be91b: movd eax, mm6 */ r_eax = (u32)(u64)(i64)fpr[6];
    /* 008be91e: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be923: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be926: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008be928: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be92c: movd eax, mm6 */ r_eax = (u32)(u64)(i64)fpr[6];
    /* 008be92f: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be934: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be937: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 008be93a: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be93e: movd eax, mm6 */ r_eax = (u32)(u64)(i64)fpr[6];
    /* 008be941: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be946: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be949: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 008be94c: psrlq mm6, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[6] = (long double)(i64)(r.q); }
    /* 008be950: movd eax, mm6 */ r_eax = (u32)(u64)(i64)fpr[6];
    /* 008be953: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be958: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be95b: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 008be95e: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 008be961: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008be965: punpckhdq mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008be968: psrlw mm2, 5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be96c: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008be96f: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be974: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be977: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008be979: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be97d: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008be980: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be985: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be988: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 008be98b: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be98f: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008be992: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be997: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be99a: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 008be99d: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008be9a1: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008be9a4: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be9a9: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be9ac: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 008be9af: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 008be9b2: add ecx, dword ptr [esp + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008be9b6: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008be9b9: psrlw mm5, 5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be9bd: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be9c0: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be9c5: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be9c8: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 008be9ca: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be9ce: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be9d1: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be9d6: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be9d9: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 008be9dc: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be9e0: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be9e3: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be9e8: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be9eb: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 008be9ee: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008be9f2: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008be9f5: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008be9fa: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008be9fd: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 008bea00: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 008bea03: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bea07: punpckhdq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bea0a: psrlw mm1, 5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bea0e: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008bea11: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bea16: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bea19: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008bea1b: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bea1f: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008bea22: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bea27: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bea2a: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 008bea2d: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bea31: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008bea34: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bea39: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bea3c: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 008bea3f: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bea43: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008bea46: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bea4b: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bea4e: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 008bea51: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008bea55: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 008bea58: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bea5c: movq mm0, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008bea60: movq mm1, qword ptr [esi + 0x18] */ { MM64 r; r.q = R64((u32)(r_esi+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bea64: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bea67: movq mm3, qword ptr [esi + 0x28] */ { MM64 r; r.q = R64((u32)(r_esi+0x28u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bea6b: punpcklwd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bea6e: punpckhwd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bea71: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bea74: movq mm1, qword ptr [esi + 0x38] */ { MM64 r; r.q = R64((u32)(r_esi+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008bea78: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bea7b: punpcklwd mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bea7e: punpckhwd mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bea81: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bea84: punpckldq mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bea87: punpckhdq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bea8a: movq mm3, qword ptr [esi + 0x40] */ { MM64 r; r.q = R64((u32)(r_esi+0x40u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bea8e: psrlw mm0, 5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008bea92: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008bea95: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bea9a: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bea9d: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008bea9f: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008beaa3: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008beaa6: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beaab: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beaae: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 008beab1: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008beab5: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008beab8: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beabd: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beac0: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 008beac3: psrlq mm0, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 008beac7: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008beaca: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beacf: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bead2: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 008bead5: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 008bead8: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008beadc: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008beadf: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008beae2: movq mm4, qword ptr [esi + 0x50] */ { MM64 r; r.q = R64((u32)(r_esi+0x50u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008beae6: psrlw mm1, 5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008beaea: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008beaed: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beaf2: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beaf5: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008beaf7: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008beafb: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008beafe: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb03: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb06: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 008beb09: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008beb0d: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008beb10: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb15: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb18: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 008beb1b: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008beb1f: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008beb22: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb27: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb2a: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 008beb2d: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 008beb30: add ecx, dword ptr [esp + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008beb34: movq mm0, qword ptr [esi + 0x60] */ { MM64 r; r.q = R64((u32)(r_esi+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008beb38: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008beb3b: punpcklwd mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008beb3e: punpckhwd mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008beb41: movq mm4, qword ptr [esi + 0x70] */ { MM64 r; r.q = R64((u32)(r_esi+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008beb45: psrlw mm2, 5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008beb49: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008beb4c: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb51: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb54: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 008beb56: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008beb5a: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008beb5d: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb62: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb65: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 008beb68: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008beb6c: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008beb6f: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb74: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb77: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 008beb7a: psrlq mm2, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[2] = (long double)(i64)(r.q); }
    /* 008beb7e: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008beb81: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beb86: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beb89: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 008beb8c: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 008beb8f: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008beb93: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008beb96: psrlw mm5, 5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008beb9a: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008beb9d: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beba2: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beba5: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008beba7: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bebab: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008bebae: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bebb3: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bebb6: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 008bebb9: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bebbd: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008bebc0: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bebc5: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bebc8: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 008bebcb: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bebcf: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008bebd2: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bebd7: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bebda: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 008bebdd: punpcklwd mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[0]; r.w[1] = b.w[0]; r.w[2] = a.w[1]; r.w[3] = b.w[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bebe0: punpckhwd mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.w[0] = a.w[2]; r.w[1] = b.w[2]; r.w[2] = a.w[3]; r.w[3] = b.w[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bebe3: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bebe6: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bebe9: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bebec: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008bebf0: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 008bebf2: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bebf6: psrlw mm3, 5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bebfa: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008bebfd: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec02: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec05: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 008bec08: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bec0c: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008bec0f: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec14: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec17: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 008bec1a: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bec1e: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008bec21: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec26: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec29: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 008bec2c: psrlq mm3, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008bec30: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008bec33: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec38: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec3b: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 008bec3e: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 008bec41: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bec45: punpckhdq mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bec48: psrlw mm4, 5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bec4c: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008bec4f: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec54: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec57: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 008bec5a: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bec5e: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008bec61: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec66: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec69: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 008bec6c: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bec70: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008bec73: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec78: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec7b: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 008bec7e: psrlq mm4, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bec82: movd eax, mm4 */ r_eax = (u32)(u64)(i64)fpr[4];
    /* 008bec85: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bec8a: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bec8d: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 008bec90: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 008bec93: add ecx, dword ptr [esp + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bec97: punpckldq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bec9a: psrlw mm1, 5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008bec9e: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008beca1: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008beca6: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beca9: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 008becac: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008becb0: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008becb3: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008becb8: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008becbb: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 008becbe: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008becc2: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008becc5: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008becca: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008beccd: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 008becd0: psrlq mm1, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 008becd4: movd eax, mm1 */ r_eax = (u32)(u64)(i64)fpr[1];
    /* 008becd7: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008becdc: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008becdf: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 008bece2: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 008bece5: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bece9: punpckhdq mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008becec: psrlw mm5, 5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x5u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008becf0: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008becf3: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008becf8: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008becfb: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 008becfe: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bed02: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008bed05: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bed0a: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bed0d: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 008bed10: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bed14: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008bed17: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bed1c: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bed1f: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 008bed22: psrlq mm5, 0x10 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x10u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bed26: movd eax, mm5 */ r_eax = (u32)(u64)(i64)fpr[5];
    /* 008bed29: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bed2e: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008bed31: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 008bed34: emms  */ ; /* the MMX tag state is not modelled */
    /* 008bed36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bed37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bed38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bed39: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bed3c: ret  */ FN_RET(0x008bdf6a); r_esp += 4; return;
}

