#include "protos.h"

void f_008a0053(void)
{
    FN_ENTER(0x008a0053);
    goto L_008a0053;
L_0089ff83:; BB(0x0089ff83);
    /* 0089ff83: mov eax, 0x109 */ r_eax = 0x109u;
    /* 0089ff88: jmp 0x8a0090 */ goto L_008a0090;
L_008a0029:; BB(0x008a0029);
    /* 008a0029: div byte ptr [edx + edx*2 - 0x75] */ { u32 d = R8((u32)(r_edx+r_edx*2+0xffffff8bu)); if (!d) UNSUP(0x008a0029, "divide by zero"); { u32 n = r_eax & 0xffffu; u32 q = n / d; if (q >> 8) UNSUP(0x008a0029, "divide overflow"); r_eax = (r_eax & 0xffff0000u) | ((n % d) << 8) | q; } }
    /* 008a002d: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008a002e: clc  */ fC = 0;
    /* 008a002f: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0036: je 0x89ff83 */ if (fZ) goto L_0089ff83;
L_008a003c:; BB(0x008a003c);
    /* 008a003c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a003f: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0041: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0044: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008a0047: ja 0x89ff83 */ if ((!fC&&!fZ)) goto L_0089ff83;
L_008a004d:; BB(0x008a004d);
    /* 008a004d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a004f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0052: lea edi, [ebp - 0x2c] */ r_edi = (u32)(r_ebp+0xffffffd4u);
L_008a0053:; BB(0x008a0053);
    /* 008a0053: jge 0x8a0029 */ if ((fS==fO)) goto L_008a0029;
L_008a0055:; BB(0x008a0055);
    /* 008a0055: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0059: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a005c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a005e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0060: and byte ptr [ebp + ecx - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+r_ecx+0xffffffd4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0065: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0067: mov edi, 0x99bea8 */ r_edi = 0x99bea8u;
    /* 008a006c: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 008a006f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0070: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0072: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0074: jne 0x89ff83 */ if (!fZ) goto L_0089ff83;
L_008a007a:; BB(0x008a007a);
    /* 008a007a: or byte ptr [ebp - 2], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffffeu);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a007e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0081: mov dword ptr [ecx + 0x1c8], edx */ W32((u32)(r_ecx+0x1c8u), r_edx);
    /* 008a0087: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a008a: mov dword ptr [ecx + 0x1cc], edx */ W32((u32)(r_ecx+0x1ccu), r_edx);
L_008a0090:; BB(0x008a0090);
    /* 008a0090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a0092: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0093: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a0094: ret  */ FN_RET(0x008a0053); r_esp += 4; return;
}

void f_008a0059(void)
{
    FN_ENTER(0x008a0059);
    goto L_008a0059;
L_0089ff83:; BB(0x0089ff83);
    /* 0089ff83: mov eax, 0x109 */ r_eax = 0x109u;
    /* 0089ff88: jmp 0x8a0090 */ goto L_008a0090;
L_008a0059:; BB(0x008a0059);
    /* 008a0059: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a005c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a005e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0060: and byte ptr [ebp + ecx - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+r_ecx+0xffffffd4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0065: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0067: mov edi, 0x99bea8 */ r_edi = 0x99bea8u;
    /* 008a006c: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 008a006f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0070: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0072: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0074: jne 0x89ff83 */ if (!fZ) goto L_0089ff83;
L_008a007a:; BB(0x008a007a);
    /* 008a007a: or byte ptr [ebp - 2], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffffeu);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a007e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0081: mov dword ptr [ecx + 0x1c8], edx */ W32((u32)(r_ecx+0x1c8u), r_edx);
    /* 008a0087: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a008a: mov dword ptr [ecx + 0x1cc], edx */ W32((u32)(r_ecx+0x1ccu), r_edx);
L_008a0090:; BB(0x008a0090);
    /* 008a0090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a0092: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0093: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a0094: ret  */ FN_RET(0x008a0059); r_esp += 4; return;
}

void f_008a0095(void) /* sub_8A0095 */
{
    FN_ENTER(0x008a0095);
    /* 008a0095: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a0096: mov ebp, esp */ r_ebp = r_esp;
    /* 008a0098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0099: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a009a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a009d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a009f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a00a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a00a3: je 0x8a0133 */ if (fZ) goto L_008a0133;
L_008a00a9:; BB(0x008a00a9);
    /* 008a00a9: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a00ab: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a00ad: je 0x8a0133 */ if (fZ) goto L_008a0133;
L_008a00b3:; BB(0x008a00b3);
    /* 008a00b3: mov edx, esi */ r_edx = r_esi;
L_008a00b5:; BB(0x008a00b5);
    /* 008a00b5: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 008a00b8: cmp ecx, 0x77 */ {  u32 a = r_ecx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a00bb: jg 0x8a00f7 */ if ((!fZ&&fS==fO)) goto L_008a00f7;
L_008a00bd:; BB(0x008a00bd);
    /* 008a00bd: je 0x8a00ed */ if (fZ) goto L_008a00ed;
L_008a00bf:; BB(0x008a00bf);
    /* 008a00bf: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00c2: je 0x8a00ed */ if (fZ) goto L_008a00ed;
L_008a00c4:; BB(0x008a00c4);
    /* 008a00c4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00c5: je 0x8a0102 */ if (fZ) goto L_008a0102;
L_008a00c7:; BB(0x008a00c7);
    /* 008a00c7: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00ca: je 0x8a010c */ if (fZ) goto L_008a010c;
L_008a00cc:; BB(0x008a00cc);
    /* 008a00cc: sub ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00cf: jne 0x8a0116 */ if (!fZ) goto L_008a0116;
L_008a00d1:; BB(0x008a00d1);
    /* 008a00d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a00d3: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008a00d8:; BB(0x008a00d8);
    /* 008a00d8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a00da: je 0x8a00e1 */ if (fZ) goto L_008a00e1;
L_008a00dc:; BB(0x008a00dc);
    /* 008a00dc: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a00df: jbe 0x8a0116 */ if ((fC||fZ)) goto L_008a0116;
L_008a00e1:; BB(0x008a00e1);
    /* 008a00e1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a00e2: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a00e5: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a00e7: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a00e9: jne 0x8a00b5 */ if (!fZ) goto L_008a00b5;
L_008a00eb:; BB(0x008a00eb);
    /* 008a00eb: jmp 0x8a0138 */ goto L_008a0138;
L_008a00ed:; BB(0x008a00ed);
    /* 008a00ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a00ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a00f0: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a00f5: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a00f7:; BB(0x008a00f7);
    /* 008a00f7: sub ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00fa: je 0x8a00d1 */ if (fZ) goto L_008a00d1;
L_008a00fc:; BB(0x008a00fc);
    /* 008a00fc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00fd: je 0x8a010c */ if (fZ) goto L_008a010c;
L_008a00ff:; BB(0x008a00ff);
    /* 008a00ff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a0100: jne 0x8a0116 */ if (!fZ) goto L_008a0116;
L_008a0102:; BB(0x008a0102);
    /* 008a0102: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0105: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a010a: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a010c:; BB(0x008a010c);
    /* 008a010c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a010e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a010f: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0114: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a0116:; BB(0x008a0116);
    /* 008a0116: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0117: push 0x99c040 */ { u32 v = 0x99c040u; r_esp -= 4; W32(r_esp, v); }
    /* 008a011c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a011d: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0122u); f_0089f848();
    /* 008a0122: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a0125: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
    /* 008a012f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0131: jmp 0x8a0138 */ goto L_008a0138;
L_008a0133:; BB(0x008a0133);
    /* 008a0133: mov eax, 0xf0000 */ r_eax = 0xf0000u;
L_008a0138:; BB(0x008a0138);
    /* 008a0138: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a013a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a013b: ret 4 */ FN_RET(0x008a0095); r_esp += 8; return;
}

void f_008a009c(void)
{
    FN_ENTER(0x008a009c);
    /* 008a009c: or byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a009e: rol byte ptr [ebp + 0xfd98bf6], 0x84 */ { u32 ad = (u32)(r_ebp+0xfd98bf6u); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 008a00a5: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a00a7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008a00a9: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a00ab: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a00ad: je 0x8a0133 */ if (fZ) goto L_008a0133;
L_008a00b3:; BB(0x008a00b3);
    /* 008a00b3: mov edx, esi */ r_edx = r_esi;
L_008a00b5:; BB(0x008a00b5);
    /* 008a00b5: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 008a00b8: cmp ecx, 0x77 */ {  u32 a = r_ecx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a00bb: jg 0x8a00f7 */ if ((!fZ&&fS==fO)) goto L_008a00f7;
L_008a00bd:; BB(0x008a00bd);
    /* 008a00bd: je 0x8a00ed */ if (fZ) goto L_008a00ed;
L_008a00bf:; BB(0x008a00bf);
    /* 008a00bf: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00c2: je 0x8a00ed */ if (fZ) goto L_008a00ed;
L_008a00c4:; BB(0x008a00c4);
    /* 008a00c4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00c5: je 0x8a0102 */ if (fZ) goto L_008a0102;
L_008a00c7:; BB(0x008a00c7);
    /* 008a00c7: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00ca: je 0x8a010c */ if (fZ) goto L_008a010c;
L_008a00cc:; BB(0x008a00cc);
    /* 008a00cc: sub ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00cf: jne 0x8a0116 */ if (!fZ) goto L_008a0116;
L_008a00d1:; BB(0x008a00d1);
    /* 008a00d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a00d3: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008a00d8:; BB(0x008a00d8);
    /* 008a00d8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a00da: je 0x8a00e1 */ if (fZ) goto L_008a00e1;
L_008a00dc:; BB(0x008a00dc);
    /* 008a00dc: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a00df: jbe 0x8a0116 */ if ((fC||fZ)) goto L_008a0116;
L_008a00e1:; BB(0x008a00e1);
    /* 008a00e1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a00e2: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a00e5: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a00e7: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a00e9: jne 0x8a00b5 */ if (!fZ) goto L_008a00b5;
L_008a00eb:; BB(0x008a00eb);
    /* 008a00eb: jmp 0x8a0138 */ goto L_008a0138;
L_008a00ed:; BB(0x008a00ed);
    /* 008a00ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a00ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a00f0: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a00f5: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a00f7:; BB(0x008a00f7);
    /* 008a00f7: sub ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00fa: je 0x8a00d1 */ if (fZ) goto L_008a00d1;
L_008a00fc:; BB(0x008a00fc);
    /* 008a00fc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00fd: je 0x8a010c */ if (fZ) goto L_008a010c;
L_008a00ff:; BB(0x008a00ff);
    /* 008a00ff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a0100: jne 0x8a0116 */ if (!fZ) goto L_008a0116;
L_008a0102:; BB(0x008a0102);
    /* 008a0102: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0105: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a010a: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a010c:; BB(0x008a010c);
    /* 008a010c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a010e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a010f: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0114: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a0116:; BB(0x008a0116);
    /* 008a0116: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0117: push 0x99c040 */ { u32 v = 0x99c040u; r_esp -= 4; W32(r_esp, v); }
    /* 008a011c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a011d: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0122u); f_0089f848();
    /* 008a0122: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a0125: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
    /* 008a012f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0131: jmp 0x8a0138 */ goto L_008a0138;
L_008a0133:; BB(0x008a0133);
    /* 008a0133: mov eax, 0xf0000 */ r_eax = 0xf0000u;
L_008a0138:; BB(0x008a0138);
    /* 008a0138: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a013a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a013b: ret 4 */ FN_RET(0x008a009c); r_esp += 8; return;
}

void f_008a00b5(void)
{
    FN_ENTER(0x008a00b5);
L_008a00b5:; BB(0x008a00b5);
    /* 008a00b5: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 008a00b8: cmp ecx, 0x77 */ {  u32 a = r_ecx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a00bb: jg 0x8a00f7 */ if ((!fZ&&fS==fO)) goto L_008a00f7;
L_008a00bd:; BB(0x008a00bd);
    /* 008a00bd: je 0x8a00ed */ if (fZ) goto L_008a00ed;
L_008a00bf:; BB(0x008a00bf);
    /* 008a00bf: sub ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00c2: je 0x8a00ed */ if (fZ) goto L_008a00ed;
L_008a00c4:; BB(0x008a00c4);
    /* 008a00c4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00c5: je 0x8a0102 */ if (fZ) goto L_008a0102;
L_008a00c7:; BB(0x008a00c7);
    /* 008a00c7: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00ca: je 0x8a010c */ if (fZ) goto L_008a010c;
L_008a00cc:; BB(0x008a00cc);
    /* 008a00cc: sub ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00cf: jne 0x8a0116 */ if (!fZ) goto L_008a0116;
L_008a00d1:; BB(0x008a00d1);
    /* 008a00d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a00d3: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008a00d8:; BB(0x008a00d8);
    /* 008a00d8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a00da: je 0x8a00e1 */ if (fZ) goto L_008a00e1;
L_008a00dc:; BB(0x008a00dc);
    /* 008a00dc: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a00df: jbe 0x8a0116 */ if ((fC||fZ)) goto L_008a0116;
L_008a00e1:; BB(0x008a00e1);
    /* 008a00e1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a00e2: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a00e5: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a00e7: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a00e9: jne 0x8a00b5 */ if (!fZ) goto L_008a00b5;
L_008a00eb:; BB(0x008a00eb);
    /* 008a00eb: jmp 0x8a0138 */ goto L_008a0138;
L_008a00ed:; BB(0x008a00ed);
    /* 008a00ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a00ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a00f0: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a00f5: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a00f7:; BB(0x008a00f7);
    /* 008a00f7: sub ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00fa: je 0x8a00d1 */ if (fZ) goto L_008a00d1;
L_008a00fc:; BB(0x008a00fc);
    /* 008a00fc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a00fd: je 0x8a010c */ if (fZ) goto L_008a010c;
L_008a00ff:; BB(0x008a00ff);
    /* 008a00ff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a0100: jne 0x8a0116 */ if (!fZ) goto L_008a0116;
L_008a0102:; BB(0x008a0102);
    /* 008a0102: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0105: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a010a: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a010c:; BB(0x008a010c);
    /* 008a010c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a010e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a010f: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0114: jmp 0x8a00d8 */ goto L_008a00d8;
L_008a0116:; BB(0x008a0116);
    /* 008a0116: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0117: push 0x99c040 */ { u32 v = 0x99c040u; r_esp -= 4; W32(r_esp, v); }
    /* 008a011c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a011d: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0122u); f_0089f848();
    /* 008a0122: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a0125: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
    /* 008a012f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0131: jmp 0x8a0138 */ goto L_008a0138;
L_008a0138:; BB(0x008a0138);
    /* 008a0138: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a013a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a013b: ret 4 */ FN_RET(0x008a00b5); r_esp += 8; return;
}

void f_008a00c0(void)
{
    FN_ENTER(0x008a00c0);
    /* 008a00c0: jmp 0x49b37526 */ UNSUP(0x008a00c0, "jump to code that was not decoded");
}

void f_008a013e(void) /* sub_8A013E */
{
    FN_ENTER(0x008a013e);
    /* 008a013e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a013f: mov ebp, esp */ r_ebp = r_esp;
    /* 008a0141: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0143: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a0146: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0147: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a0149: and dword ptr [ebp - 4], esi */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a014c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a014e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a014f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008a0152: mov edi, eax */ r_edi = r_eax;
    /* 008a0154: je 0x8a01d4 */ if (fZ) goto L_008a01d4;
L_008a0156:; BB(0x008a0156);
    /* 008a0156: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a0159: je 0x8a01d4 */ if (fZ) goto L_008a01d4;
L_008a015b:; BB(0x008a015b);
    /* 008a015b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a015d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a015e:; BB(0x008a015e);
    /* 008a015e: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a0160: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a0162: je 0x8a0183 */ if (fZ) goto L_008a0183;
L_008a0164:; BB(0x008a0164);
    /* 008a0164: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 008a0167: cmp edx, 0x77 */ {  u32 a = r_edx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a016a: jg 0x8a01bb */ if ((!fZ&&fS==fO)) goto L_008a01bb;
L_008a016c:; BB(0x008a016c);
    /* 008a016c: je 0x8a01b6 */ if (fZ) goto L_008a01b6;
L_008a016e:; BB(0x008a016e);
    /* 008a016e: sub edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fC = (a < b); }
    /* 008a0171: je 0x8a01b6 */ if (fZ) goto L_008a01b6;
L_008a0173:; BB(0x008a0173);
    /* 008a0173: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a0174: je 0x8a01c6 */ if (fZ) goto L_008a01c6;
L_008a0176:; BB(0x008a0176);
    /* 008a0176: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a0179: je 0x8a01ca */ if (fZ) goto L_008a01ca;
L_008a017b:; BB(0x008a017b);
    /* 008a017b: sub edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a017e: jne 0x8a0196 */ if (!fZ) goto L_008a0196;
L_008a0180:; BB(0x008a0180);
    /* 008a0180: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fC = 0; }
L_008a0182:; BB(0x008a0182);
    /* 008a0182: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008a0183:; BB(0x008a0183);
    /* 008a0183: mov edx, esi */ r_edx = r_esi;
    /* 008a0185: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008a0187: or dword ptr [ebp - 4], edx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a018a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a018b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a018c: cmp ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a018f: jb 0x8a015e */ if (fC) goto L_008a015e;
L_008a0191:; BB(0x008a0191);
    /* 008a0191: cmp byte ptr [edi], 0 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a0194: je 0x8a01cf */ if (fZ) goto L_008a01cf;
L_008a0196:; BB(0x008a0196);
    /* 008a0196: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a019a: push 0x99c054 */ { u32 v = 0x99c054u; r_esp -= 4; W32(r_esp, v); }
    /* 008a019f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a01a0: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a01a5u); f_0089f848();
    /* 008a01a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a01a8: mov dword ptr [esi + 0x98], 1 */ W32((u32)(r_esi+0x98u), 0x1u);
    /* 008a01b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a01b4: jmp 0x8a01d9 */ goto L_008a01d9;
L_008a01b6:; BB(0x008a01b6);
    /* 008a01b6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
L_008a01b8:; BB(0x008a01b8);
    /* 008a01b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a01b9: jmp 0x8a0182 */ goto L_008a0182;
L_008a01bb:; BB(0x008a01bb);
    /* 008a01bb: sub edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fC = (a < b); }
    /* 008a01be: je 0x8a0180 */ if (fZ) goto L_008a0180;
L_008a01c0:; BB(0x008a01c0);
    /* 008a01c0: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a01c1: je 0x8a01ca */ if (fZ) goto L_008a01ca;
L_008a01c3:; BB(0x008a01c3);
    /* 008a01c3: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a01c4: jne 0x8a0196 */ if (!fZ) goto L_008a0196;
L_008a01c6:; BB(0x008a01c6);
    /* 008a01c6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a01c8: jmp 0x8a01b8 */ goto L_008a01b8;
L_008a01ca:; BB(0x008a01ca);
    /* 008a01ca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fC = 0; }
    /* 008a01cc: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a01cd: jmp 0x8a0182 */ goto L_008a0182;
L_008a01cf:; BB(0x008a01cf);
    /* 008a01cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a01d2: jmp 0x8a01d9 */ goto L_008a01d9;
L_008a01d4:; BB(0x008a01d4);
    /* 008a01d4: mov eax, 0xe40000 */ r_eax = 0xe40000u;
L_008a01d9:; BB(0x008a01d9);
    /* 008a01d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a01da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a01db: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a01dc: ret 4 */ FN_RET(0x008a013e); r_esp += 8; return;
}

void f_008a01df(void) /* sub_8A01DF */
{
    FN_ENTER(0x008a01df);
    /* 008a01df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a01e0: mov ebp, esp */ r_ebp = r_esp;
    /* 008a01e2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a01e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a01e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a01e7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a01ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a01eb: mov edi, ecx */ r_edi = r_ecx;
    /* 008a01ed: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008a01f0: jmp 0x8a0201 */ goto L_008a0201;
L_008a01f2:; BB(0x008a01f2);
    /* 008a01f2: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 008a01f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a01f6: call 0x8581d3 */ r_esp -= 4; W32(r_esp, 0x8a01fbu); f_008581d3();
    /* 008a01fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a01fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a01fe: je 0x8a0209 */ if (fZ) goto L_008a0209;
L_008a0200:; BB(0x008a0200);
    /* 008a0200: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008a0201:; BB(0x008a0201);
    /* 008a0201: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0204: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008a0207: jne 0x8a01f2 */ if (!fZ) goto L_008a01f2;
L_008a0209:; BB(0x008a0209);
    /* 008a0209: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a020c: mov ebx, esi */ r_ebx = r_esi;
    /* 008a020e: je 0x8a0224 */ if (fZ) goto L_008a0224;
L_008a0210:; BB(0x008a0210);
    /* 008a0210: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 008a0213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0214: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8a0219u); f_00858286();
    /* 008a0219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a021b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a021c: je 0x8a0224 */ if (fZ) goto L_008a0224;
L_008a021e:; BB(0x008a021e);
    /* 008a021e: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a021f: cmp byte ptr [ebx], 0 */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0222: jne 0x8a0210 */ if (!fZ) goto L_008a0210;
L_008a0224:; BB(0x008a0224);
    /* 008a0224: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a0226: cmp byte ptr [esi], al */ {  u32 a = R8((u32)(r_esi)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0228: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 008a022f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008a0232: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008a0235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a0237: cmp dword ptr [edi + 0xac], eax */ {  u32 a = R32((u32)(r_edi+0xacu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a023d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a0240: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a0243: je 0x8a02f7 */ if (fZ) goto L_008a02f7;
L_008a0249:; BB(0x008a0249);
    /* 008a0249: cmp byte ptr [ebx], 0x5f */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a024c: jne 0x8a02f7 */ if (!fZ) goto L_008a02f7;
L_008a0252:; BB(0x008a0252);
    /* 008a0252: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0254: mov edi, 0x99c114 */ r_edi = 0x99c114u;
    /* 008a0259: mov esi, ebx */ r_esi = r_ebx;
    /* 008a025b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a025c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a025e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0260: jne 0x8a0271 */ if (!fZ) goto L_008a0271;
L_008a0262:; BB(0x008a0262);
    /* 008a0262: mov dword ptr [ebp - 8], 0x2000000 */ W32((u32)(r_ebp+0xfffffff8u), 0x2000000u);
    /* 008a0269: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a026c: jmp 0x8a02f7 */ goto L_008a02f7;
L_008a0271:; BB(0x008a0271);
    /* 008a0271: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0273: mov edi, 0x99c10c */ r_edi = 0x99c10cu;
    /* 008a0278: mov esi, ebx */ r_esi = r_ebx;
    /* 008a027a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a027b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a027d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a027f: jne 0x8a028d */ if (!fZ) goto L_008a028d;
L_008a0281:; BB(0x008a0281);
    /* 008a0281: mov dword ptr [ebp - 8], 0x4000000 */ W32((u32)(r_ebp+0xfffffff8u), 0x4000000u);
    /* 008a0288: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a028b: jmp 0x8a02f7 */ goto L_008a02f7;
L_008a028d:; BB(0x008a028d);
    /* 008a028d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a028f: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a0290: mov edi, 0x99c108 */ r_edi = 0x99c108u;
    /* 008a0295: mov esi, ebx */ r_esi = r_ebx;
    /* 008a0297: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0299: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a029b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a029d: jne 0x8a02a8 */ if (!fZ) goto L_008a02a8;
L_008a029f:; BB(0x008a029f);
    /* 008a029f: mov dword ptr [ebp - 8], 0x7000000 */ W32((u32)(r_ebp+0xfffffff8u), 0x7000000u);
    /* 008a02a6: jmp 0x8a02f4 */ goto L_008a02f4;
L_008a02a8:; BB(0x008a02a8);
    /* 008a02a8: mov edi, 0x99c104 */ r_edi = 0x99c104u;
    /* 008a02ad: mov esi, ebx */ r_esi = r_ebx;
    /* 008a02af: mov ecx, eax */ r_ecx = r_eax;
    /* 008a02b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a02b3: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a02b5: je 0x8a02ed */ if (fZ) goto L_008a02ed;
L_008a02b7:; BB(0x008a02b7);
    /* 008a02b7: mov edi, 0x99c100 */ r_edi = 0x99c100u;
    /* 008a02bc: mov esi, ebx */ r_esi = r_ebx;
    /* 008a02be: mov ecx, eax */ r_ecx = r_eax;
    /* 008a02c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a02c2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a02c4: je 0x8a02ed */ if (fZ) goto L_008a02ed;
L_008a02c6:; BB(0x008a02c6);
    /* 008a02c6: mov edi, 0x99c0fc */ r_edi = 0x99c0fcu;
    /* 008a02cb: mov esi, ebx */ r_esi = r_ebx;
    /* 008a02cd: mov ecx, eax */ r_ecx = r_eax;
    /* 008a02cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a02d1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a02d3: je 0x8a02e4 */ if (fZ) goto L_008a02e4;
L_008a02d5:; BB(0x008a02d5);
    /* 008a02d5: mov ecx, eax */ r_ecx = r_eax;
    /* 008a02d7: mov edi, 0x99c0f8 */ r_edi = 0x99c0f8u;
    /* 008a02dc: mov esi, ebx */ r_esi = r_ebx;
    /* 008a02de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a02e0: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a02e2: jne 0x8a02f7 */ if (!fZ) goto L_008a02f7;
L_008a02e4:; BB(0x008a02e4);
    /* 008a02e4: mov dword ptr [ebp - 8], 0xa000000 */ W32((u32)(r_ebp+0xfffffff8u), 0xa000000u);
    /* 008a02eb: jmp 0x8a02f4 */ goto L_008a02f4;
L_008a02ed:; BB(0x008a02ed);
    /* 008a02ed: mov dword ptr [ebp - 8], 0x9000000 */ W32((u32)(r_ebp+0xfffffff8u), 0x9000000u);
L_008a02f4:; BB(0x008a02f4);
    /* 008a02f4: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a02f7:; BB(0x008a02f7);
    /* 008a02f7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a02fb: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 008a02fe: je 0x8a0315 */ if (fZ) goto L_008a0315;
L_008a0300:; BB(0x008a0300);
    /* 008a0300: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0301: call 0x85a0fa */ r_esp -= 4; W32(r_esp, 0x8a0306u); f_0085a0fa();
    /* 008a0306: test eax, 0xffffe000 */ {  u32 a = r_eax; u32 b = 0xffffe000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a030b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a030c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a030f: je 0x8a0315 */ if (fZ) goto L_008a0315;
L_008a0311:; BB(0x008a0311);
    /* 008a0311: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a0315:; BB(0x008a0315);
    /* 008a0315: cmp byte ptr [ebx], 0 */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0318: jne 0x8a051e */ if (!fZ) goto L_008a051e;
L_008a031e:; BB(0x008a031e);
    /* 008a031e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a0320: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0323: je 0x8a051e */ if (fZ) goto L_008a051e;
L_008a0329:; BB(0x008a0329);
    /* 008a0329: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a032c: jne 0x8a04fb */ if (!fZ) goto L_008a04fb;
L_008a0332:; BB(0x008a0332);
    /* 008a0332: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a0334: and byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0336: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a0339: mov byte ptr [ebp + 0x13], cl */ W8((u32)(r_ebp+0x13u), (u8)r_ecx);
    /* 008a033c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a033f: cmp dword ptr [ecx + 0xac], eax */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0345: je 0x8a03d3 */ if (fZ) goto L_008a03d3;
L_008a034b:; BB(0x008a034b);
    /* 008a034b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a034d: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a034e: mov edi, 0x99c0f4 */ r_edi = 0x99c0f4u;
    /* 008a0353: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0355: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0357: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0359: jne 0x8a036b */ if (!fZ) goto L_008a036b;
L_008a035b:; BB(0x008a035b);
    /* 008a035b: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a035e: je 0x8a036b */ if (fZ) goto L_008a036b;
L_008a0360:; BB(0x008a0360);
    /* 008a0360: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0363: or eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0366: jmp 0x8a044a */ goto L_008a044a;
L_008a036b:; BB(0x008a036b);
    /* 008a036b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a036e: mov edi, 0x99c0f0 */ r_edi = 0x99c0f0u;
    /* 008a0373: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0375: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0377: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0379: jne 0x8a038b */ if (!fZ) goto L_008a038b;
L_008a037b:; BB(0x008a037b);
    /* 008a037b: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a037e: je 0x8a038b */ if (fZ) goto L_008a038b;
L_008a0380:; BB(0x008a0380);
    /* 008a0380: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0383: or eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0386: jmp 0x8a0579 */ goto L_008a0579;
L_008a038b:; BB(0x008a038b);
    /* 008a038b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a038e: mov edi, 0x99c0ec */ r_edi = 0x99c0ecu;
    /* 008a0393: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0395: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0397: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0399: jne 0x8a03ab */ if (!fZ) goto L_008a03ab;
L_008a039b:; BB(0x008a039b);
    /* 008a039b: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a039e: je 0x8a03ab */ if (fZ) goto L_008a03ab;
L_008a03a0:; BB(0x008a03a0);
    /* 008a03a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a03a3: or eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a03a6: jmp 0x8a0517 */ goto L_008a0517;
L_008a03ab:; BB(0x008a03ab);
    /* 008a03ab: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a03ae: mov ecx, eax */ r_ecx = r_eax;
    /* 008a03b0: mov edi, 0x99c0e8 */ r_edi = 0x99c0e8u;
    /* 008a03b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a03b7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a03b9: jne 0x8a04f1 */ if (!fZ) goto L_008a04f1;
L_008a03bf:; BB(0x008a03bf);
    /* 008a03bf: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a03c2: je 0x8a04f1 */ if (fZ) goto L_008a04f1;
L_008a03c8:; BB(0x008a03c8);
    /* 008a03c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a03cb: or eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a03ce: jmp 0x8a04a3 */ goto L_008a04a3;
L_008a03d3:; BB(0x008a03d3);
    /* 008a03d3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a03d6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a03d8: mov edi, 0x99c0e0 */ r_edi = 0x99c0e0u;
    /* 008a03dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a03de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a03e0: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a03e2: jne 0x8a03f2 */ if (!fZ) goto L_008a03f2;
L_008a03e4:; BB(0x008a03e4);
    /* 008a03e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a03e6: jne 0x8a03f2 */ if (!fZ) goto L_008a03f2;
L_008a03e8:; BB(0x008a03e8);
    /* 008a03e8: mov eax, 0x40000000 */ r_eax = 0x40000000u;
    /* 008a03ed: jmp 0x8a0579 */ goto L_008a0579;
L_008a03f2:; BB(0x008a03f2);
    /* 008a03f2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a03f5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a03f7: mov edi, 0x99c0d8 */ r_edi = 0x99c0d8u;
    /* 008a03fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a03fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a03ff: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0401: jne 0x8a0411 */ if (!fZ) goto L_008a0411;
L_008a0403:; BB(0x008a0403);
    /* 008a0403: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0405: jne 0x8a0411 */ if (!fZ) goto L_008a0411;
L_008a0407:; BB(0x008a0407);
    /* 008a0407: mov eax, 0x40000002 */ r_eax = 0x40000002u;
    /* 008a040c: jmp 0x8a0579 */ goto L_008a0579;
L_008a0411:; BB(0x008a0411);
    /* 008a0411: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a0414: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0416: mov edi, 0x99c0d0 */ r_edi = 0x99c0d0u;
    /* 008a041b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a041c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a041e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0420: jne 0x8a0430 */ if (!fZ) goto L_008a0430;
L_008a0422:; BB(0x008a0422);
    /* 008a0422: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0424: jne 0x8a0430 */ if (!fZ) goto L_008a0430;
L_008a0426:; BB(0x008a0426);
    /* 008a0426: mov eax, 0x40000001 */ r_eax = 0x40000001u;
    /* 008a042b: jmp 0x8a0579 */ goto L_008a0579;
L_008a0430:; BB(0x008a0430);
    /* 008a0430: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a0433: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0435: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a0436: mov edi, 0x99c0f4 */ r_edi = 0x99c0f4u;
    /* 008a043b: mov ecx, eax */ r_ecx = r_eax;
    /* 008a043d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a043f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0441: jne 0x8a0454 */ if (!fZ) goto L_008a0454;
L_008a0443:; BB(0x008a0443);
    /* 008a0443: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0445: je 0x8a0454 */ if (fZ) goto L_008a0454;
L_008a0447:; BB(0x008a0447);
    /* 008a0447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008a044a:; BB(0x008a044a);
    /* 008a044a: or eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a044f: jmp 0x8a0579 */ goto L_008a0579;
L_008a0454:; BB(0x008a0454);
    /* 008a0454: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a0457: mov edi, 0x99c0f0 */ r_edi = 0x99c0f0u;
    /* 008a045c: mov ecx, eax */ r_ecx = r_eax;
    /* 008a045e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0460: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0462: jne 0x8a0470 */ if (!fZ) goto L_008a0470;
L_008a0464:; BB(0x008a0464);
    /* 008a0464: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0466: je 0x8a0470 */ if (fZ) goto L_008a0470;
L_008a0468:; BB(0x008a0468);
    /* 008a0468: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a046b: jmp 0x8a0579 */ goto L_008a0579;
L_008a0470:; BB(0x008a0470);
    /* 008a0470: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a0473: mov edi, 0x99c0ec */ r_edi = 0x99c0ecu;
    /* 008a0478: mov ecx, eax */ r_ecx = r_eax;
    /* 008a047a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a047c: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a047e: jne 0x8a048c */ if (!fZ) goto L_008a048c;
L_008a0480:; BB(0x008a0480);
    /* 008a0480: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0482: je 0x8a048c */ if (fZ) goto L_008a048c;
L_008a0484:; BB(0x008a0484);
    /* 008a0484: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0487: jmp 0x8a0517 */ goto L_008a0517;
L_008a048c:; BB(0x008a048c);
    /* 008a048c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a048f: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0491: mov edi, 0x99c0cc */ r_edi = 0x99c0ccu;
    /* 008a0496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0498: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a049a: jne 0x8a04ad */ if (!fZ) goto L_008a04ad;
L_008a049c:; BB(0x008a049c);
    /* 008a049c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a049e: je 0x8a04ad */ if (fZ) goto L_008a04ad;
L_008a04a0:; BB(0x008a04a0);
    /* 008a04a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008a04a3:; BB(0x008a04a3);
    /* 008a04a3: or eax, 0x30000000 */ {  u32 a = r_eax; u32 b = 0x30000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a04a8: jmp 0x8a0579 */ goto L_008a0579;
L_008a04ad:; BB(0x008a04ad);
    /* 008a04ad: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a04b0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a04b2: mov edi, 0x99c0c8 */ r_edi = 0x99c0c8u;
    /* 008a04b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a04b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a04ba: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a04bc: jne 0x8a04cf */ if (!fZ) goto L_008a04cf;
L_008a04be:; BB(0x008a04be);
    /* 008a04be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a04c0: je 0x8a04cf */ if (fZ) goto L_008a04cf;
L_008a04c2:; BB(0x008a04c2);
    /* 008a04c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a04c5: or eax, 0x50000000 */ {  u32 a = r_eax; u32 b = 0x50000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a04ca: jmp 0x8a0579 */ goto L_008a0579;
L_008a04cf:; BB(0x008a04cf);
    /* 008a04cf: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a04d2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a04d4: mov edi, 0x99c0c4 */ r_edi = 0x99c0c4u;
    /* 008a04d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a04da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a04dc: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a04de: jne 0x8a04f1 */ if (!fZ) goto L_008a04f1;
L_008a04e0:; BB(0x008a04e0);
    /* 008a04e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a04e2: je 0x8a04f1 */ if (fZ) goto L_008a04f1;
L_008a04e4:; BB(0x008a04e4);
    /* 008a04e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a04e7: or eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a04ec: jmp 0x8a0579 */ goto L_008a0579;
L_008a04f1:; BB(0x008a04f1);
    /* 008a04f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008a04f4: mov cl, byte ptr [ebp + 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x13u))) & 0xffu);
    /* 008a04f7: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a04f9: jmp 0x8a0524 */ goto L_008a0524;
L_008a04fb:; BB(0x008a04fb);
    /* 008a04fb: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a04fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0500: mov edi, 0x99c0ec */ r_edi = 0x99c0ecu;
    /* 008a0505: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0506: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0508: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a050a: jne 0x8a051e */ if (!fZ) goto L_008a051e;
L_008a050c:; BB(0x008a050c);
    /* 008a050c: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a050f: jne 0x8a051e */ if (!fZ) goto L_008a051e;
L_008a0511:; BB(0x008a0511);
    /* 008a0511: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0514: or eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008a0517:; BB(0x008a0517);
    /* 008a0517: or eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a051c: jmp 0x8a0579 */ goto L_008a0579;
L_008a051e:; BB(0x008a051e);
    /* 008a051e: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0522: jne 0x8a0539 */ if (!fZ) goto L_008a0539;
L_008a0524:; BB(0x008a0524);
    /* 008a0524: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0527: push 0x99c0ac */ { u32 v = 0x99c0acu; r_esp -= 4; W32(r_esp, v); }
    /* 008a052c: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a052f: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0534u); f_0089f848();
    /* 008a0534: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a0537: jmp 0x8a056a */ goto L_008a056a;
L_008a0539:; BB(0x008a0539);
    /* 008a0539: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a053c: test ah, 0x20 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a053f: je 0x8a0551 */ if (fZ) goto L_008a0551;
L_008a0541:; BB(0x008a0541);
    /* 008a0541: and eax, 0x1fff */ {  u32 a = r_eax; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0547: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a054a: push 0x99c088 */ { u32 v = 0x99c088u; r_esp -= 4; W32(r_esp, v); }
    /* 008a054f: jmp 0x8a055f */ goto L_008a055f;
L_008a0551:; BB(0x008a0551);
    /* 008a0551: and eax, 0x1fff */ {  u32 a = r_eax; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0557: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a055a: push 0x99c06c */ { u32 v = 0x99c06cu; r_esp -= 4; W32(r_esp, v); }
L_008a055f:; BB(0x008a055f);
    /* 008a055f: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0562: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0567u); f_0089f848();
    /* 008a0567: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a056a:; BB(0x008a056a);
    /* 008a056a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a056d: mov dword ptr [eax + 0x98], 1 */ W32((u32)(r_eax+0x98u), 0x1u);
    /* 008a0577: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a0579:; BB(0x008a0579);
    /* 008a0579: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a057a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a057b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a057c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a057d: ret 0xc */ FN_RET(0x008a01df); r_esp += 16; return;
}

void f_008a0580(void) /* sub_8A0580 */
{
    FN_ENTER(0x008a0580);
    /* 008a0580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0581: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0582: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008a0586: mov eax, edi */ r_eax = r_edi;
    /* 008a0588: and eax, 0x70000000 */ {  u32 a = r_eax; u32 b = 0x70000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a058d: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0592: mov esi, ecx */ r_esi = r_ecx;
    /* 008a0594: jne 0x8a059e */ if (!fZ) goto L_008a059e;
L_008a0596:; BB(0x008a0596);
    /* 008a0596: test edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a059c: je 0x8a05b7 */ if (fZ) goto L_008a05b7;
L_008a059e:; BB(0x008a059e);
    /* 008a059e: push 0x99c11c */ { u32 v = 0x99c11cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a05a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a05a4: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a05a9u); f_0089f848();
    /* 008a05a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a05aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a05ab: mov dword ptr [esi + 0x98], 1 */ W32((u32)(r_esi+0x98u), 0x1u);
    /* 008a05b5: jmp 0x8a0624 */ goto L_008a0624;
L_008a05b7:; BB(0x008a05b7);
    /* 008a05b7: cmp dword ptr [esi + 0xac], 0 */ {  u32 a = R32((u32)(r_esi+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a05be: je 0x8a05db */ if (fZ) goto L_008a05db;
L_008a05c0:; BB(0x008a05c0);
    /* 008a05c0: add dword ptr [esi + 0x9c], 0x18 */ { u32 ad = (u32)(r_esi+0x9cu);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a05c7: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a05ca: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 008a05cc: mov ecx, esi */ r_ecx = r_esi;
    /* 008a05ce: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a05d3u); f_008a8961();
    /* 008a05d3: or edi, 0xf0000 */ {  u32 a = r_edi; u32 b = 0xf0000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008a05d9: jmp 0x8a05f1 */ goto L_008a05f1;
L_008a05db:; BB(0x008a05db);
    /* 008a05db: add dword ptr [esi + 0x9c], 0x14 */ { u32 ad = (u32)(r_esi+0x9cu);  u32 a = R32(ad); u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a05e2: and edi, 0x1fff */ {  u32 a = r_edi; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008a05e8: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a05eb: or edi, 0x82000000 */ {  u32 a = r_edi; u32 b = 0x82000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_008a05f1:; BB(0x008a05f1);
    /* 008a05f1: mov ecx, esi */ r_ecx = r_esi;
    /* 008a05f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a05f4: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a05f9u); f_008a8961();
    /* 008a05f9: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008a05fd: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 008a05ff: mov ecx, esi */ r_ecx = r_esi;
    /* 008a0601: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0606u); f_008a8961();
    /* 008a0606: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0609: mov ecx, esi */ r_ecx = r_esi;
    /* 008a060b: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0610u); f_008a8961();
    /* 008a0610: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0613: mov ecx, esi */ r_ecx = r_esi;
    /* 008a0615: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a061au); f_008a8961();
    /* 008a061a: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a061d: mov ecx, esi */ r_ecx = r_esi;
    /* 008a061f: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0624u); f_008a8961();
L_008a0624:; BB(0x008a0624);
    /* 008a0624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0625: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0626: ret 8 */ FN_RET(0x008a0580); r_esp += 12; return;
}

void f_008a0629(void) /* sub_8A0629 */
{
    FN_ENTER(0x008a0629);
    /* 008a0629: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a062a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a062c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a062d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a062e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a062f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a0631: cmp dword ptr [ebx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ebx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0638: je 0x8a06fc */ if (fZ) goto L_008a06fc;
L_008a063e:; BB(0x008a063e);
    /* 008a063e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a063f: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 008a0645: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0646: mov edi, dword ptr [ebx + 0xc4] */ r_edi = R32((u32)(r_ebx+0xc4u));
    /* 008a064c: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a064e: lea eax, [edi + 3] */ r_eax = (u32)(r_edi+0x3u);
    /* 008a0651: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a0654: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0659: add eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a065e: and eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0663: or eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0668: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 008a066b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a066c: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008a066f: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0674u); f_008a8961();
    /* 008a0674: push 0x54584554 */ { u32 v = 0x54584554u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0679: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 008a067c: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0681u); f_008a8961();
    /* 008a0681: add dword ptr [ebx + 0xa0], 8 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0688: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a068b: jb 0x8a06b4 */ if (fC) goto L_008a06b4;
L_008a068d:; BB(0x008a068d);
    /* 008a068d: mov eax, edi */ r_eax = r_edi;
    /* 008a068f: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008a0692: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a0695:; BB(0x008a0695);
    /* 008a0695: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0697: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 008a069a: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a069fu); f_008a8961();
    /* 008a069f: add dword ptr [ebx + 0xa0], 4 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a06a6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a06a9: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a06ac: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a06af: jne 0x8a0695 */ if (!fZ) goto L_008a0695;
L_008a06b1:; BB(0x008a06b1);
    /* 008a06b1: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
L_008a06b4:; BB(0x008a06b4);
    /* 008a06b4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a06b6: je 0x8a06e4 */ if (fZ) goto L_008a06e4;
L_008a06b8:; BB(0x008a06b8);
    /* 008a06b8: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a06bc: mov ecx, edi */ r_ecx = r_edi;
    /* 008a06be: mov eax, ecx */ r_eax = r_ecx;
    /* 008a06c0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a06c3: lea edi, [ebp - 4] */ r_edi = (u32)(r_ebp+0xfffffffcu);
    /* 008a06c6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a06c8: mov ecx, eax */ r_ecx = r_eax;
    /* 008a06ca: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a06cd: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a06cf: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a06d2: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 008a06d5: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a06dau); f_008a8961();
    /* 008a06da: add dword ptr [ebx + 0xa0], 4 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a06e1: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
L_008a06e4:; BB(0x008a06e4);
    /* 008a06e4: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a06e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a06e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a06e9: jne 0x8a06fc */ if (!fZ) goto L_008a06fc;
L_008a06eb:; BB(0x008a06eb);
    /* 008a06eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a06ed: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 008a06f0: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a06f5u); f_008a8961();
    /* 008a06f5: add dword ptr [ebx + 0xa0], 4 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008a06fc:; BB(0x008a06fc);
    /* 008a06fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a06fd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a06fe: ret  */ FN_RET(0x008a0629); r_esp += 4; return;
}

void f_008a06ff(void) /* sub_8A06FF */
{
    FN_ENTER(0x008a06ff);
    /* 008a06ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a0700: mov ebp, esp */ r_ebp = r_esp;
    /* 008a0702: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0704: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0705: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a0707: cmp dword ptr [ebx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ebx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a070e: mov eax, dword ptr [ebx + 0x1d0] */ r_eax = R32((u32)(r_ebx+0x1d0u));
    /* 008a0714: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 008a071a: jne 0x8a0727 */ if (!fZ) goto L_008a0727;
L_008a071c:; BB(0x008a071c);
    /* 008a071c: mov dword ptr [ebx + 0x2d4], eax */ W32((u32)(r_ebx+0x2d4u), r_eax);
    /* 008a0722: jmp 0x8a0873 */ goto L_008a0873;
L_008a0727:; BB(0x008a0727);
    /* 008a0727: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0729: lea edi, [ebx + 0x1d4] */ r_edi = (u32)(r_ebx+0x1d4u);
    /* 008a072f: lea esi, [ebx + 0x2d8] */ r_esi = (u32)(r_ebx+0x2d8u);
L_008a0735:; BB(0x008a0735);
    /* 008a0735: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a0737: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008a0739: cmp cl, byte ptr [edi] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a073b: jne 0x8a0757 */ if (!fZ) goto L_008a0757;
L_008a073d:; BB(0x008a073d);
    /* 008a073d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a073f: je 0x8a0753 */ if (fZ) goto L_008a0753;
L_008a0741:; BB(0x008a0741);
    /* 008a0741: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 008a0744: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008a0746: cmp cl, byte ptr [edi + 1] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0749: jne 0x8a0757 */ if (!fZ) goto L_008a0757;
L_008a074b:; BB(0x008a074b);
    /* 008a074b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a074c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a074d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a074e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a074f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a0751: jne 0x8a0735 */ if (!fZ) goto L_008a0735;
L_008a0753:; BB(0x008a0753);
    /* 008a0753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a0755: jmp 0x8a075c */ goto L_008a075c;
L_008a0757:; BB(0x008a0757);
    /* 008a0757: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 008a0759: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
L_008a075c:; BB(0x008a075c);
    /* 008a075c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a075e: je 0x8a0828 */ if (fZ) goto L_008a0828;
L_008a0764:; BB(0x008a0764);
    /* 008a0764: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 008a076a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a076d: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
L_008a0770:; BB(0x008a0770);
    /* 008a0770: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0772: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0773: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a0775: jne 0x8a0770 */ if (!fZ) goto L_008a0770;
L_008a0777:; BB(0x008a0777);
    /* 008a0777: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0779: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 008a077c: lea eax, [edi + 3] */ r_eax = (u32)(r_edi+0x3u);
    /* 008a077f: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a0782: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0787: add eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a078c: and eax, 0x7fff0000 */ {  u32 a = r_eax; u32 b = 0x7fff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0791: or eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0796: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
    /* 008a0799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a079a: mov ecx, esi */ r_ecx = r_esi;
    /* 008a079c: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a07a1u); f_008a8961();
    /* 008a07a1: push 0x454c4946 */ { u32 v = 0x454c4946u; r_esp -= 4; W32(r_esp, v); }
    /* 008a07a6: mov ecx, esi */ r_ecx = r_esi;
    /* 008a07a8: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a07adu); f_008a8961();
    /* 008a07ad: add dword ptr [ebx + 0xa0], 8 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a07b4: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a07b7: jb 0x8a07e0 */ if (fC) goto L_008a07e0;
L_008a07b9:; BB(0x008a07b9);
    /* 008a07b9: mov eax, edi */ r_eax = r_edi;
    /* 008a07bb: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008a07be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a07c1:; BB(0x008a07c1);
    /* 008a07c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a07c4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008a07c6: mov ecx, esi */ r_ecx = r_esi;
    /* 008a07c8: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a07cdu); f_008a8961();
    /* 008a07cd: add dword ptr [ebx + 0xa0], 4 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a07d4: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a07d8: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a07db: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a07de: jne 0x8a07c1 */ if (!fZ) goto L_008a07c1;
L_008a07e0:; BB(0x008a07e0);
    /* 008a07e0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a07e2: je 0x8a0810 */ if (fZ) goto L_008a0810;
L_008a07e4:; BB(0x008a07e4);
    /* 008a07e4: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a07e8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a07eb: mov ecx, edi */ r_ecx = r_edi;
    /* 008a07ed: mov eax, ecx */ r_eax = r_ecx;
    /* 008a07ef: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a07f2: lea edi, [ebp - 8] */ r_edi = (u32)(r_ebp+0xfffffff8u);
    /* 008a07f5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a07f7: mov ecx, eax */ r_ecx = r_eax;
    /* 008a07f9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a07fc: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a07fe: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0801: lea ecx, [ebx + 0x74] */ r_ecx = (u32)(r_ebx+0x74u);
    /* 008a0804: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0809u); f_008a8961();
    /* 008a0809: add dword ptr [ebx + 0xa0], 4 */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008a0810:; BB(0x008a0810);
    /* 008a0810: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 008a0816: lea edx, [ebx + 0x2d8] */ r_edx = (u32)(r_ebx+0x2d8u);
    /* 008a081c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008a081e:; BB(0x008a081e);
    /* 008a081e: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0820: mov byte ptr [edx + eax], cl */ W8((u32)(r_edx+r_eax), (u8)r_ecx);
    /* 008a0823: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0824: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a0826: jne 0x8a081e */ if (!fZ) goto L_008a081e;
L_008a0828:; BB(0x008a0828);
    /* 008a0828: mov eax, dword ptr [ebx + 0x2d4] */ r_eax = R32((u32)(r_ebx+0x2d4u));
    /* 008a082e: cmp eax, dword ptr [ebx + 0x1d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0834: je 0x8a0871 */ if (fZ) goto L_008a0871;
L_008a0836:; BB(0x008a0836);
    /* 008a0836: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
    /* 008a0839: push 0x2fffe */ { u32 v = 0x2fffeu; r_esp -= 4; W32(r_esp, v); }
    /* 008a083e: mov ecx, esi */ r_ecx = r_esi;
    /* 008a0840: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0845u); f_008a8961();
    /* 008a0845: push 0x454e494c */ { u32 v = 0x454e494cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a084a: mov ecx, esi */ r_ecx = r_esi;
    /* 008a084c: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0851u); f_008a8961();
    /* 008a0851: push dword ptr [ebx + 0x1d0] */ { u32 v = R32((u32)(r_ebx+0x1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0857: mov ecx, esi */ r_ecx = r_esi;
    /* 008a0859: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a085eu); f_008a8961();
    /* 008a085e: mov eax, dword ptr [ebx + 0x1d0] */ r_eax = R32((u32)(r_ebx+0x1d0u));
    /* 008a0864: add dword ptr [ebx + 0xa0], 0xc */ { u32 ad = (u32)(r_ebx+0xa0u);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a086b: mov dword ptr [ebx + 0x2d4], eax */ W32((u32)(r_ebx+0x2d4u), r_eax);
L_008a0871:; BB(0x008a0871);
    /* 008a0871: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0872: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a0873:; BB(0x008a0873);
    /* 008a0873: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a0874: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a0875: ret  */ FN_RET(0x008a06ff); r_esp += 4; return;
}

void f_008a0876(void) /* sub_8A0876 */
{
    FN_ENTER(0x008a0876);
    /* 008a0876: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a0877: mov ebp, esp */ r_ebp = r_esp;
    /* 008a0879: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a087f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0880: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0881: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a0883: and dword ptr [ebx + 0x3d8], 0 */ { u32 ad = (u32)(r_ebx+0x3d8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a088a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a088b: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0890:; BB(0x008a0890);
    /* 008a0890: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0896: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0898: cmp cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a089b: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 008a089e: jne 0x8a08b8 */ if (!fZ) goto L_008a08b8;
L_008a08a0:; BB(0x008a08a0);
    /* 008a08a0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a08a1: inc dword ptr [ebx + 0x1d0] */ { u32 ad = (u32)(r_ebx+0x1d0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a08a7: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a08ad: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 008a08b3: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a08b8:; BB(0x008a08b8);
    /* 008a08b8: movsx eax, cl */ r_eax = (u32)(i32)(i8)(u8)r_ecx;
    /* 008a08bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a08bc: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a08c1u); f_008582ff();
    /* 008a08c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a08c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a08c4: je 0x8a08d1 */ if (fZ) goto L_008a08d1;
L_008a08c6:; BB(0x008a08c6);
    /* 008a08c6: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a08cc: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a08d1:; BB(0x008a08d1);
    /* 008a08d1: mov dl, byte ptr [ebp - 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 008a08d4: cmp dl, 0x23 */ {  u32 a = (u8)r_edx; u32 b = 0x23u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a08d7: jne 0x8a0a7b */ if (!fZ) goto L_008a0a7b;
L_008a08dd:; BB(0x008a08dd);
    /* 008a08dd: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a08e3: cmp eax, dword ptr [ebx + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a08e9: jne 0x8a0b7d */ if (!fZ) goto L_008a0b7d;
L_008a08ef:; BB(0x008a08ef);
    /* 008a08ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a08f2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a08f3: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a08f9: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a08ff: jae 0x8a0917 */ if (!fC) goto L_008a0917;
L_008a0901:; BB(0x008a0901);
    /* 008a0901: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0904: je 0x8a0917 */ if (fZ) goto L_008a0917;
L_008a0906:; BB(0x008a0906);
    /* 008a0906: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0907: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0909: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a090f: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0915: jb 0x8a0901 */ if (fC) goto L_008a0901;
L_008a0917:; BB(0x008a0917);
    /* 008a0917: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0919: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a091c: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a091f: jle 0x8a0a71 */ if ((fZ||fS!=fO)) goto L_008a0a71;
L_008a0925:; BB(0x008a0925);
    /* 008a0925: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0928: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a092a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a092b: mov edi, 0x99c188 */ r_edi = 0x99c188u;
    /* 008a0930: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0932: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0934: jne 0x8a0a71 */ if (!fZ) goto L_008a0a71;
L_008a093a:; BB(0x008a093a);
    /* 008a093a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a093d: jae 0x8a0974 */ if (!fC) goto L_008a0974;
L_008a093f:; BB(0x008a093f);
    /* 008a093f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0942: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0946: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a094bu); f_008582ff();
    /* 008a094b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a094d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a094e: jne 0x8a0974 */ if (!fZ) goto L_008a0974;
L_008a0950:; BB(0x008a0950);
    /* 008a0950: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0956: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a095c: jb 0x8a093f */ if (fC) goto L_008a093f;
L_008a095e:; BB(0x008a095e);
    /* 008a095e: jmp 0x8a0974 */ goto L_008a0974;
L_008a0960:; BB(0x008a0960);
    /* 008a0960: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0963: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0967: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a096cu); f_008582ff();
    /* 008a096c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a096e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a096f: je 0x8a097f */ if (fZ) goto L_008a097f;
L_008a0971:; BB(0x008a0971);
    /* 008a0971: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008a0974:; BB(0x008a0974);
    /* 008a0974: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0977: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a097d: jb 0x8a0960 */ if (fC) goto L_008a0960;
L_008a097f:; BB(0x008a097f);
    /* 008a097f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0982: mov esi, eax */ r_esi = r_eax;
    /* 008a0984: jmp 0x8a099d */ goto L_008a099d;
L_008a0986:; BB(0x008a0986);
    /* 008a0986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0989: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a098c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a098d: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a0992u); f_008582ff();
    /* 008a0992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0994: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0995: jne 0x8a09a5 */ if (!fZ) goto L_008a09a5;
L_008a0997:; BB(0x008a0997);
    /* 008a0997: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a099a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008a099d:; BB(0x008a099d);
    /* 008a099d: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09a3: jb 0x8a0986 */ if (fC) goto L_008a0986;
L_008a09a5:; BB(0x008a09a5);
    /* 008a09a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a09a8: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 008a09ae: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09b0: mov ecx, eax */ r_ecx = r_eax;
    /* 008a09b2: jae 0x8a09c2 */ if (!fC) goto L_008a09c2;
L_008a09b4:; BB(0x008a09b4);
    /* 008a09b4: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a09b7: je 0x8a09c2 */ if (fZ) goto L_008a09c2;
L_008a09b9:; BB(0x008a09b9);
    /* 008a09b9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a09ba: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09c0: jb 0x8a09b4 */ if (fC) goto L_008a09b4;
L_008a09c2:; BB(0x008a09c2);
    /* 008a09c2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09c4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008a09c7: jae 0x8a09dc */ if (!fC) goto L_008a09dc;
L_008a09c9:; BB(0x008a09c9);
    /* 008a09c9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a09ca: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09cc: jae 0x8a09dc */ if (!fC) goto L_008a09dc;
L_008a09ce:; BB(0x008a09ce);
    /* 008a09ce: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a09d1: je 0x8a09dc */ if (fZ) goto L_008a09dc;
L_008a09d3:; BB(0x008a09d3);
    /* 008a09d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a09d4: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09da: jb 0x8a09ce */ if (fC) goto L_008a09ce;
L_008a09dc:; BB(0x008a09dc);
    /* 008a09dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a09df: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a09e2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a09e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a09e7: mov edx, ecx */ r_edx = r_ecx;
    /* 008a09e9: mov eax, 0x100 */ r_eax = 0x100u;
    /* 008a09ee: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09f0: jb 0x8a09f7 */ if (fC) goto L_008a09f7;
L_008a09f2:; BB(0x008a09f2);
    /* 008a09f2: mov edx, 0xff */ r_edx = 0xffu;
L_008a09f7:; BB(0x008a09f7);
    /* 008a09f7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09fa: jb 0x8a0a03 */ if (fC) goto L_008a0a03;
L_008a09fc:; BB(0x008a09fc);
    /* 008a09fc: mov dword ptr [ebp - 4], 0xff */ W32((u32)(r_ebp+0xfffffffcu), 0xffu);
L_008a0a03:; BB(0x008a0a03);
    /* 008a0a03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0a05: je 0x8a0a39 */ if (fZ) goto L_008a0a39;
L_008a0a07:; BB(0x008a0a07);
    /* 008a0a07: mov ecx, edx */ r_ecx = r_edx;
    /* 008a0a09: mov eax, ecx */ r_eax = r_ecx;
    /* 008a0a0b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0a0e: lea edi, [ebp - 0x110] */ r_edi = (u32)(r_ebp+0xfffffef0u);
    /* 008a0a14: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0a16: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0a18: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0a1b: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 008a0a21: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a0a23: and byte ptr [ebp + edx - 0x110], 0 */ { u32 ad = (u32)(r_ebp+r_edx+0xfffffef0u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0a2c: call 0x85a0fa */ r_esp -= 4; W32(r_esp, 0x8a0a31u); f_0085a0fa();
    /* 008a0a31: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0a32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0a33: mov dword ptr [ebx + 0x1d0], eax */ W32((u32)(r_ebx+0x1d0u), r_eax);
L_008a0a39:; BB(0x008a0a39);
    /* 008a0a39: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0a3d: jbe 0x8a0b44 */ if ((fC||fZ)) goto L_008a0b44;
L_008a0a43:; BB(0x008a0a43);
    /* 008a0a43: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a0a46: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a0a47: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 008a0a4d: jmp 0x8a0a64 */ goto L_008a0a64;
L_008a0a4f:; BB(0x008a0a4f);
    /* 008a0a4f: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a0a51: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a0a52: cmp cl, 0x5c */ {  u32 a = (u8)r_ecx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a55: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a0a57: jne 0x8a0a63 */ if (!fZ) goto L_008a0a63;
L_008a0a59:; BB(0x008a0a59);
    /* 008a0a59: cmp esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0a5c: jae 0x8a0a63 */ if (!fC) goto L_008a0a63;
L_008a0a5e:; BB(0x008a0a5e);
    /* 008a0a5e: cmp byte ptr [esi], cl */ {  u32 a = R8((u32)(r_esi)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a60: jne 0x8a0a63 */ if (!fZ) goto L_008a0a63;
L_008a0a62:; BB(0x008a0a62);
    /* 008a0a62: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008a0a63:; BB(0x008a0a63);
    /* 008a0a63: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a0a64:; BB(0x008a0a64);
    /* 008a0a64: cmp esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0a67: jb 0x8a0a4f */ if (fC) goto L_008a0a4f;
L_008a0a69:; BB(0x008a0a69);
    /* 008a0a69: and byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0a6c: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0a71:; BB(0x008a0a71);
    /* 008a0a71: push 0x99c15c */ { u32 v = 0x99c15cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a0a76: jmp 0x8a0b07 */ goto L_008a0b07;
L_008a0a7b:; BB(0x008a0a7b);
    /* 008a0a7b: cmp dl, 0x3b */ {  u32 a = (u8)r_edx; u32 b = 0x3bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a7e: je 0x8a0b1a */ if (fZ) goto L_008a0b1a;
L_008a0a84:; BB(0x008a0a84);
    /* 008a0a84: cmp dl, 0x2f */ {  u32 a = (u8)r_edx; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a87: jne 0x8a0b7d */ if (!fZ) goto L_008a0b7d;
L_008a0a8d:; BB(0x008a0a8d);
    /* 008a0a8d: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0a93: mov esi, dword ptr [ebx + 0xc4] */ r_esi = R32((u32)(r_ebx+0xc4u));
    /* 008a0a99: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 008a0a9c: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0a9e: jae 0x8a0b7d */ if (!fC) goto L_008a0b7d;
L_008a0aa4:; BB(0x008a0aa4);
    /* 008a0aa4: cmp byte ptr [ecx], dl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0aa6: je 0x8a0b1a */ if (fZ) goto L_008a0b1a;
L_008a0aa8:; BB(0x008a0aa8);
    /* 008a0aa8: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0aaa: jae 0x8a0b7d */ if (!fC) goto L_008a0b7d;
L_008a0ab0:; BB(0x008a0ab0);
    /* 008a0ab0: cmp byte ptr [ecx], 0x2a */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ab3: jne 0x8a0b7d */ if (!fZ) goto L_008a0b7d;
L_008a0ab9:; BB(0x008a0ab9);
    /* 008a0ab9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0abc: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0abe: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0ac4: jae 0x8a0b02 */ if (!fC) goto L_008a0b02;
L_008a0ac6:; BB(0x008a0ac6);
    /* 008a0ac6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0acc: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0ace: cmp dl, 0x2a */ {  u32 a = (u8)r_edx; u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ad1: jne 0x8a0adf */ if (!fZ) goto L_008a0adf;
L_008a0ad3:; BB(0x008a0ad3);
    /* 008a0ad3: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 008a0ad6: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0ad8: jae 0x8a0adf */ if (!fC) goto L_008a0adf;
L_008a0ada:; BB(0x008a0ada);
    /* 008a0ada: cmp byte ptr [ecx], 0x2f */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0add: je 0x8a0b11 */ if (fZ) goto L_008a0b11;
L_008a0adf:; BB(0x008a0adf);
    /* 008a0adf: cmp dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ae2: jne 0x8a0af3 */ if (!fZ) goto L_008a0af3;
L_008a0ae4:; BB(0x008a0ae4);
    /* 008a0ae4: inc dword ptr [ebx + 0x1d0] */ { u32 ad = (u32)(r_ebx+0x1d0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0aea: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 008a0aed: mov dword ptr [ebx + 0xbc], ecx */ W32((u32)(r_ebx+0xbcu), r_ecx);
L_008a0af3:; BB(0x008a0af3);
    /* 008a0af3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0af4: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0afa: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b00: jb 0x8a0ac6 */ if (fC) goto L_008a0ac6;
L_008a0b02:; BB(0x008a0b02);
    /* 008a0b02: push 0x99c138 */ { u32 v = 0x99c138u; r_esp -= 4; W32(r_esp, v); }
L_008a0b07:; BB(0x008a0b07);
    /* 008a0b07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0b08: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0b0du); f_0089f848();
    /* 008a0b0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0b0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0b0f: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0b11:; BB(0x008a0b11);
    /* 008a0b11: add dword ptr [ebx + 0xc0], 2 */ { u32 ad = (u32)(r_ebx+0xc0u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0b18: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0b1a:; BB(0x008a0b1a);
    /* 008a0b1a: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0b20: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0b26: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b2c: jae 0x8a0b44 */ if (!fC) goto L_008a0b44;
L_008a0b2e:; BB(0x008a0b2e);
    /* 008a0b2e: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0b31: je 0x8a0b44 */ if (fZ) goto L_008a0b44;
L_008a0b33:; BB(0x008a0b33);
    /* 008a0b33: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0b34: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0b36: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0b3c: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b42: jb 0x8a0b2e */ if (fC) goto L_008a0b2e;
L_008a0b44:; BB(0x008a0b44);
    /* 008a0b44: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0b4a: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b50: jb 0x8a0890 */ if (fC) goto L_008a0890;
L_008a0b56:; BB(0x008a0b56);
    /* 008a0b56: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0b5c: jne 0x8a0d86 */ if (!fZ) goto L_008a0d86;
L_008a0b62:; BB(0x008a0b62);
    /* 008a0b62: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a0b63: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0b69: mov dword ptr [ebx + 0x3d8], 1 */ W32((u32)(r_ebx+0x3d8u), 0x1u);
    /* 008a0b73: mov eax, 0x10c */ r_eax = 0x10cu;
    /* 008a0b78: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0b7d:; BB(0x008a0b7d);
    /* 008a0b7d: movsx esi, dl */ r_esi = (u32)(i32)(i8)(u8)r_edx;
    /* 008a0b80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0b81: call 0x8581d3 */ r_esp -= 4; W32(r_esp, 0x8a0b86u); f_008581d3();
    /* 008a0b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0b88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0b89: je 0x8a0c83 */ if (fZ) goto L_008a0c83;
L_008a0b8f:; BB(0x008a0b8f);
    /* 008a0b8f: mov esi, dword ptr [ebx + 0xc0] */ r_esi = R32((u32)(r_ebx+0xc0u));
    /* 008a0b95: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 008a0b98: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b9e: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0ba4: jae 0x8a0bd5 */ if (!fC) goto L_008a0bd5;
L_008a0ba6:; BB(0x008a0ba6);
    /* 008a0ba6: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0baa: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x8a0bafu); f_00858339();
    /* 008a0baf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0bb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0bb2: jne 0x8a0bbf */ if (!fZ) goto L_008a0bbf;
L_008a0bb4:; BB(0x008a0bb4);
    /* 008a0bb4: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0bba: cmp byte ptr [eax], 0x5f */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0bbd: jne 0x8a0bd5 */ if (!fZ) goto L_008a0bd5;
L_008a0bbf:; BB(0x008a0bbf);
    /* 008a0bbf: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0bc5: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0bcb: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0bcd: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0bd3: jb 0x8a0ba6 */ if (fC) goto L_008a0ba6;
L_008a0bd5:; BB(0x008a0bd5);
    /* 008a0bd5: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0bdb: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0bdd: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0be2: jb 0x8a0be9 */ if (fC) goto L_008a0be9;
L_008a0be4:; BB(0x008a0be4);
    /* 008a0be4: mov eax, 0xff */ r_eax = 0xffu;
L_008a0be9:; BB(0x008a0be9);
    /* 008a0be9: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0beb: mov edx, ecx */ r_edx = r_ecx;
    /* 008a0bed: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0bf0: lea edi, [ebx + 0xc8] */ r_edi = (u32)(r_ebx+0xc8u);
    /* 008a0bf6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0bf8: mov ecx, edx */ r_ecx = r_edx;
    /* 008a0bfa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0bfd: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a0bff: and byte ptr [eax + ebx + 0xc8], 0 */ { u32 ad = (u32)(r_eax+r_ebx+0xc8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0c07: lea eax, [ebx + 0xc8] */ r_eax = (u32)(r_ebx+0xc8u);
    /* 008a0c0d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c0f: mov edi, 0x99c134 */ r_edi = 0x99c134u;
    /* 008a0c14: mov esi, eax */ r_esi = r_eax;
    /* 008a0c16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c19: mov dword ptr [ebx + 0x3d8], 1 */ W32((u32)(r_ebx+0x3d8u), 0x1u);
    /* 008a0c23: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0c25: jne 0x8a0c31 */ if (!fZ) goto L_008a0c31;
L_008a0c27:; BB(0x008a0c27);
    /* 008a0c27: mov eax, 0x101 */ r_eax = 0x101u;
    /* 008a0c2c: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c31:; BB(0x008a0c31);
    /* 008a0c31: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c33: mov edi, 0x99c130 */ r_edi = 0x99c130u;
    /* 008a0c38: mov esi, eax */ r_esi = r_eax;
    /* 008a0c3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c3d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0c3f: jne 0x8a0c4b */ if (!fZ) goto L_008a0c4b;
L_008a0c41:; BB(0x008a0c41);
    /* 008a0c41: mov eax, 0x102 */ r_eax = 0x102u;
    /* 008a0c46: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c4b:; BB(0x008a0c4b);
    /* 008a0c4b: mov esi, eax */ r_esi = r_eax;
    /* 008a0c4d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c4f: mov edi, 0x99be60 */ r_edi = 0x99be60u;
    /* 008a0c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c57: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0c59: jne 0x8a0c65 */ if (!fZ) goto L_008a0c65;
L_008a0c5b:; BB(0x008a0c5b);
    /* 008a0c5b: mov eax, 0x103 */ r_eax = 0x103u;
    /* 008a0c60: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c65:; BB(0x008a0c65);
    /* 008a0c65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0c67: call 0x89f97e */ r_esp -= 4; W32(r_esp, 0x8a0c6cu); f_0089f97e();
    /* 008a0c6c: cmp eax, 0x109 */ {  u32 a = r_eax; u32 b = 0x109u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0c71: jne 0x8a0d89 */ if (!fZ) goto L_008a0d89;
L_008a0c77:; BB(0x008a0c77);
    /* 008a0c77: and dword ptr [ebx + 0x3d8], 0 */ { u32 ad = (u32)(r_ebx+0x3d8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c7e: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c83:; BB(0x008a0c83);
    /* 008a0c83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c84: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8a0c89u); f_00858286();
    /* 008a0c89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0c8b: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0c91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c92: je 0x8a0d6c */ if (fZ) goto L_008a0d6c;
L_008a0c98:; BB(0x008a0c98);
    /* 008a0c98: mov esi, eax */ r_esi = r_eax;
    /* 008a0c9a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0c9b: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0ca1: mov dword ptr [ebp - 8], 0x10a */ W32((u32)(r_ebp+0xfffffff8u), 0x10au);
    /* 008a0ca8: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0cae: jae 0x8a0d0b */ if (!fC) goto L_008a0d0b;
L_008a0cb0:; BB(0x008a0cb0);
    /* 008a0cb0: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0cb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0cb4: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8a0cb9u); f_00858286();
    /* 008a0cb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0cbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0cbc: jne 0x8a0cf5 */ if (!fZ) goto L_008a0cf5;
L_008a0cbe:; BB(0x008a0cbe);
    /* 008a0cbe: cmp dword ptr [ebx + 0xb4], eax */ {  u32 a = R32((u32)(r_ebx+0xb4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0cc4: je 0x8a0cd6 */ if (fZ) goto L_008a0cd6;
L_008a0cc6:; BB(0x008a0cc6);
    /* 008a0cc6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0ccc: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0cce: cmp al, 0x2e */ {  u32 a = (u8)r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0cd0: je 0x8a0cee */ if (fZ) goto L_008a0cee;
L_008a0cd2:; BB(0x008a0cd2);
    /* 008a0cd2: cmp al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0cd4: je 0x8a0cee */ if (fZ) goto L_008a0cee;
L_008a0cd6:; BB(0x008a0cd6);
    /* 008a0cd6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0cdc: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0cde: cmp cl, 0x2b */ {  u32 a = (u8)r_ecx; u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ce1: je 0x8a0ce8 */ if (fZ) goto L_008a0ce8;
L_008a0ce3:; BB(0x008a0ce3);
    /* 008a0ce3: cmp cl, 0x2d */ {  u32 a = (u8)r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ce6: jne 0x8a0d0b */ if (!fZ) goto L_008a0d0b;
L_008a0ce8:; BB(0x008a0ce8);
    /* 008a0ce8: cmp byte ptr [eax - 1], 0x65 */ {  u32 a = R8((u32)(r_eax+0xffffffffu)); u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0cec: jne 0x8a0d0b */ if (!fZ) goto L_008a0d0b;
L_008a0cee:; BB(0x008a0cee);
    /* 008a0cee: mov dword ptr [ebp - 8], 0x10b */ W32((u32)(r_ebp+0xfffffff8u), 0x10bu);
L_008a0cf5:; BB(0x008a0cf5);
    /* 008a0cf5: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0cfb: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0d01: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0d03: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0d09: jb 0x8a0cb0 */ if (fC) goto L_008a0cb0;
L_008a0d0b:; BB(0x008a0d0b);
    /* 008a0d0b: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0d11: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0d13: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0d18: jb 0x8a0d1f */ if (fC) goto L_008a0d1f;
L_008a0d1a:; BB(0x008a0d1a);
    /* 008a0d1a: mov eax, 0xff */ r_eax = 0xffu;
L_008a0d1f:; BB(0x008a0d1f);
    /* 008a0d1f: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0d21: mov edx, ecx */ r_edx = r_ecx;
    /* 008a0d23: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0d26: lea edi, [ebx + 0xc8] */ r_edi = (u32)(r_ebx+0xc8u);
    /* 008a0d2c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0d2e: mov ecx, edx */ r_ecx = r_edx;
    /* 008a0d30: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0d33: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a0d35: and byte ptr [eax + ebx + 0xc8], 0 */ { u32 ad = (u32)(r_eax+r_ebx+0xc8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0d3d: cmp dword ptr [ebx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ebx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0d44: je 0x8a0d67 */ if (fZ) goto L_008a0d67;
L_008a0d46:; BB(0x008a0d46);
    /* 008a0d46: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0d4c: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0d52: jae 0x8a0d67 */ if (!fC) goto L_008a0d67;
L_008a0d54:; BB(0x008a0d54);
    /* 008a0d54: cmp byte ptr [eax], 0x66 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x66u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a0d57: jne 0x8a0d67 */ if (!fZ) goto L_008a0d67;
L_008a0d59:; BB(0x008a0d59);
    /* 008a0d59: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a0d5a: mov dword ptr [ebp - 8], 0x10b */ W32((u32)(r_ebp+0xfffffff8u), 0x10bu);
    /* 008a0d61: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
L_008a0d67:; BB(0x008a0d67);
    /* 008a0d67: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0d6a: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0d6c:; BB(0x008a0d6c);
    /* 008a0d6c: cmp byte ptr [eax], 0x2b */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0d6f: jne 0x8a0d7b */ if (!fZ) goto L_008a0d7b;
L_008a0d71:; BB(0x008a0d71);
    /* 008a0d71: mov dword ptr [ebx + 0x3d8], 1 */ W32((u32)(r_ebx+0x3d8u), 0x1u);
L_008a0d7b:; BB(0x008a0d7b);
    /* 008a0d7b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a0d7c: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0d82: mov eax, esi */ r_eax = r_esi;
    /* 008a0d84: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0d86:; BB(0x008a0d86);
    /* 008a0d86: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a0d89:; BB(0x008a0d89);
    /* 008a0d89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0d8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0d8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a0d8c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a0d8d: ret  */ FN_RET(0x008a0876); r_esp += 4; return;
}

void f_008a0a04(void)
{
    FN_ENTER(0x008a0a04);
    goto L_008a0a04;
L_008a0890:; BB(0x008a0890);
    /* 008a0890: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0896: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0898: cmp cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a089b: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 008a089e: jne 0x8a08b8 */ if (!fZ) goto L_008a08b8;
L_008a08a0:; BB(0x008a08a0);
    /* 008a08a0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a08a1: inc dword ptr [ebx + 0x1d0] */ { u32 ad = (u32)(r_ebx+0x1d0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a08a7: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a08ad: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 008a08b3: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a08b8:; BB(0x008a08b8);
    /* 008a08b8: movsx eax, cl */ r_eax = (u32)(i32)(i8)(u8)r_ecx;
    /* 008a08bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a08bc: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a08c1u); f_008582ff();
    /* 008a08c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a08c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a08c4: je 0x8a08d1 */ if (fZ) goto L_008a08d1;
L_008a08c6:; BB(0x008a08c6);
    /* 008a08c6: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a08cc: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a08d1:; BB(0x008a08d1);
    /* 008a08d1: mov dl, byte ptr [ebp - 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 008a08d4: cmp dl, 0x23 */ {  u32 a = (u8)r_edx; u32 b = 0x23u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a08d7: jne 0x8a0a7b */ if (!fZ) goto L_008a0a7b;
L_008a08dd:; BB(0x008a08dd);
    /* 008a08dd: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a08e3: cmp eax, dword ptr [ebx + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a08e9: jne 0x8a0b7d */ if (!fZ) goto L_008a0b7d;
L_008a08ef:; BB(0x008a08ef);
    /* 008a08ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a08f2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a08f3: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a08f9: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a08ff: jae 0x8a0917 */ if (!fC) goto L_008a0917;
L_008a0901:; BB(0x008a0901);
    /* 008a0901: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0904: je 0x8a0917 */ if (fZ) goto L_008a0917;
L_008a0906:; BB(0x008a0906);
    /* 008a0906: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0907: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0909: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a090f: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0915: jb 0x8a0901 */ if (fC) goto L_008a0901;
L_008a0917:; BB(0x008a0917);
    /* 008a0917: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0919: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a091c: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a091f: jle 0x8a0a71 */ if ((fZ||fS!=fO)) goto L_008a0a71;
L_008a0925:; BB(0x008a0925);
    /* 008a0925: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0928: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a092a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a092b: mov edi, 0x99c188 */ r_edi = 0x99c188u;
    /* 008a0930: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0932: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0934: jne 0x8a0a71 */ if (!fZ) goto L_008a0a71;
L_008a093a:; BB(0x008a093a);
    /* 008a093a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a093d: jae 0x8a0974 */ if (!fC) goto L_008a0974;
L_008a093f:; BB(0x008a093f);
    /* 008a093f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0942: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0946: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a094bu); f_008582ff();
    /* 008a094b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a094d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a094e: jne 0x8a0974 */ if (!fZ) goto L_008a0974;
L_008a0950:; BB(0x008a0950);
    /* 008a0950: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0956: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a095c: jb 0x8a093f */ if (fC) goto L_008a093f;
L_008a095e:; BB(0x008a095e);
    /* 008a095e: jmp 0x8a0974 */ goto L_008a0974;
L_008a0960:; BB(0x008a0960);
    /* 008a0960: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0963: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0967: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a096cu); f_008582ff();
    /* 008a096c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a096e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a096f: je 0x8a097f */ if (fZ) goto L_008a097f;
L_008a0971:; BB(0x008a0971);
    /* 008a0971: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008a0974:; BB(0x008a0974);
    /* 008a0974: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0977: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a097d: jb 0x8a0960 */ if (fC) goto L_008a0960;
L_008a097f:; BB(0x008a097f);
    /* 008a097f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0982: mov esi, eax */ r_esi = r_eax;
    /* 008a0984: jmp 0x8a099d */ goto L_008a099d;
L_008a0986:; BB(0x008a0986);
    /* 008a0986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a0989: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a098c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a098d: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8a0992u); f_008582ff();
    /* 008a0992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0994: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0995: jne 0x8a09a5 */ if (!fZ) goto L_008a09a5;
L_008a0997:; BB(0x008a0997);
    /* 008a0997: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a099a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008a099d:; BB(0x008a099d);
    /* 008a099d: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09a3: jb 0x8a0986 */ if (fC) goto L_008a0986;
L_008a09a5:; BB(0x008a09a5);
    /* 008a09a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a09a8: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 008a09ae: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09b0: mov ecx, eax */ r_ecx = r_eax;
    /* 008a09b2: jae 0x8a09c2 */ if (!fC) goto L_008a09c2;
L_008a09b4:; BB(0x008a09b4);
    /* 008a09b4: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a09b7: je 0x8a09c2 */ if (fZ) goto L_008a09c2;
L_008a09b9:; BB(0x008a09b9);
    /* 008a09b9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a09ba: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09c0: jb 0x8a09b4 */ if (fC) goto L_008a09b4;
L_008a09c2:; BB(0x008a09c2);
    /* 008a09c2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09c4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008a09c7: jae 0x8a09dc */ if (!fC) goto L_008a09dc;
L_008a09c9:; BB(0x008a09c9);
    /* 008a09c9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a09ca: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09cc: jae 0x8a09dc */ if (!fC) goto L_008a09dc;
L_008a09ce:; BB(0x008a09ce);
    /* 008a09ce: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a09d1: je 0x8a09dc */ if (fZ) goto L_008a09dc;
L_008a09d3:; BB(0x008a09d3);
    /* 008a09d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a09d4: cmp eax, dword ptr [ebx + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09da: jb 0x8a09ce */ if (fC) goto L_008a09ce;
L_008a09dc:; BB(0x008a09dc);
    /* 008a09dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a09df: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a09e2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a09e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a09e7: mov edx, ecx */ r_edx = r_ecx;
    /* 008a09e9: mov eax, 0x100 */ r_eax = 0x100u;
    /* 008a09ee: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09f0: jb 0x8a09f7 */ if (fC) goto L_008a09f7;
L_008a09f2:; BB(0x008a09f2);
    /* 008a09f2: mov edx, 0xff */ r_edx = 0xffu;
L_008a09f7:; BB(0x008a09f7);
    /* 008a09f7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a09fa: jb 0x8a0a03 */ if (fC) goto L_008a0a03;
L_008a09fc:; BB(0x008a09fc);
    /* 008a09fc: mov dword ptr [ebp - 4], 0xff */ W32((u32)(r_ebp+0xfffffffcu), 0xffu);
L_008a0a03:; BB(0x008a0a03);
    /* 008a0a03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_008a0a04:; BB(0x008a0a04);
    /* 008a0a04: sal byte ptr [edx + esi - 0x75], cl */ { u32 ad = (u32)(r_edx+r_esi+0xffffff8bu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 008a0a05: je 0x8a0a39 */ if (fZ) goto L_008a0a39;
L_008a0a07:; BB(0x008a0a07);
    /* 008a0a07: mov ecx, edx */ r_ecx = r_edx;
    /* 008a0a08: retf 0xc18b */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 008a0a09: mov eax, ecx */ r_eax = r_ecx;
    /* 008a0a0b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0a0e: lea edi, [ebp - 0x110] */ r_edi = (u32)(r_ebp+0xfffffef0u);
    /* 008a0a14: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0a16: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0a18: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0a1b: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 008a0a21: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a0a23: and byte ptr [ebp + edx - 0x110], 0 */ { u32 ad = (u32)(r_ebp+r_edx+0xfffffef0u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0a2c: call 0x85a0fa */ r_esp -= 4; W32(r_esp, 0x8a0a31u); f_0085a0fa();
    /* 008a0a31: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0a32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0a33: mov dword ptr [ebx + 0x1d0], eax */ W32((u32)(r_ebx+0x1d0u), r_eax);
L_008a0a39:; BB(0x008a0a39);
    /* 008a0a39: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0a3d: jbe 0x8a0b44 */ if ((fC||fZ)) goto L_008a0b44;
L_008a0a43:; BB(0x008a0a43);
    /* 008a0a43: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a0a46: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a0a47: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 008a0a4d: jmp 0x8a0a64 */ goto L_008a0a64;
L_008a0a4f:; BB(0x008a0a4f);
    /* 008a0a4f: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a0a51: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a0a52: cmp cl, 0x5c */ {  u32 a = (u8)r_ecx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a55: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a0a57: jne 0x8a0a63 */ if (!fZ) goto L_008a0a63;
L_008a0a59:; BB(0x008a0a59);
    /* 008a0a59: cmp esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0a5c: jae 0x8a0a63 */ if (!fC) goto L_008a0a63;
L_008a0a5e:; BB(0x008a0a5e);
    /* 008a0a5e: cmp byte ptr [esi], cl */ {  u32 a = R8((u32)(r_esi)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a60: jne 0x8a0a63 */ if (!fZ) goto L_008a0a63;
L_008a0a62:; BB(0x008a0a62);
    /* 008a0a62: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008a0a63:; BB(0x008a0a63);
    /* 008a0a63: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a0a64:; BB(0x008a0a64);
    /* 008a0a64: cmp esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0a67: jb 0x8a0a4f */ if (fC) goto L_008a0a4f;
L_008a0a69:; BB(0x008a0a69);
    /* 008a0a69: and byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0a6c: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0a71:; BB(0x008a0a71);
    /* 008a0a71: push 0x99c15c */ { u32 v = 0x99c15cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a0a76: jmp 0x8a0b07 */ goto L_008a0b07;
L_008a0a7b:; BB(0x008a0a7b);
    /* 008a0a7b: cmp dl, 0x3b */ {  u32 a = (u8)r_edx; u32 b = 0x3bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a7e: je 0x8a0b1a */ if (fZ) goto L_008a0b1a;
L_008a0a84:; BB(0x008a0a84);
    /* 008a0a84: cmp dl, 0x2f */ {  u32 a = (u8)r_edx; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0a87: jne 0x8a0b7d */ if (!fZ) goto L_008a0b7d;
L_008a0a8d:; BB(0x008a0a8d);
    /* 008a0a8d: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0a93: mov esi, dword ptr [ebx + 0xc4] */ r_esi = R32((u32)(r_ebx+0xc4u));
    /* 008a0a99: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 008a0a9c: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0a9e: jae 0x8a0b7d */ if (!fC) goto L_008a0b7d;
L_008a0aa4:; BB(0x008a0aa4);
    /* 008a0aa4: cmp byte ptr [ecx], dl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0aa6: je 0x8a0b1a */ if (fZ) goto L_008a0b1a;
L_008a0aa8:; BB(0x008a0aa8);
    /* 008a0aa8: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0aaa: jae 0x8a0b7d */ if (!fC) goto L_008a0b7d;
L_008a0ab0:; BB(0x008a0ab0);
    /* 008a0ab0: cmp byte ptr [ecx], 0x2a */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ab3: jne 0x8a0b7d */ if (!fZ) goto L_008a0b7d;
L_008a0ab9:; BB(0x008a0ab9);
    /* 008a0ab9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0abc: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0abe: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0ac4: jae 0x8a0b02 */ if (!fC) goto L_008a0b02;
L_008a0ac6:; BB(0x008a0ac6);
    /* 008a0ac6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0acc: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0ace: cmp dl, 0x2a */ {  u32 a = (u8)r_edx; u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ad1: jne 0x8a0adf */ if (!fZ) goto L_008a0adf;
L_008a0ad3:; BB(0x008a0ad3);
    /* 008a0ad3: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 008a0ad6: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0ad8: jae 0x8a0adf */ if (!fC) goto L_008a0adf;
L_008a0ada:; BB(0x008a0ada);
    /* 008a0ada: cmp byte ptr [ecx], 0x2f */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0add: je 0x8a0b11 */ if (fZ) goto L_008a0b11;
L_008a0adf:; BB(0x008a0adf);
    /* 008a0adf: cmp dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ae2: jne 0x8a0af3 */ if (!fZ) goto L_008a0af3;
L_008a0ae4:; BB(0x008a0ae4);
    /* 008a0ae4: inc dword ptr [ebx + 0x1d0] */ { u32 ad = (u32)(r_ebx+0x1d0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0aea: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 008a0aed: mov dword ptr [ebx + 0xbc], ecx */ W32((u32)(r_ebx+0xbcu), r_ecx);
L_008a0af3:; BB(0x008a0af3);
    /* 008a0af3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0af4: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0afa: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b00: jb 0x8a0ac6 */ if (fC) goto L_008a0ac6;
L_008a0b02:; BB(0x008a0b02);
    /* 008a0b02: push 0x99c138 */ { u32 v = 0x99c138u; r_esp -= 4; W32(r_esp, v); }
L_008a0b07:; BB(0x008a0b07);
    /* 008a0b07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0b08: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0b0du); f_0089f848();
    /* 008a0b0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0b0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0b0f: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0b11:; BB(0x008a0b11);
    /* 008a0b11: add dword ptr [ebx + 0xc0], 2 */ { u32 ad = (u32)(r_ebx+0xc0u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0b18: jmp 0x8a0b44 */ goto L_008a0b44;
L_008a0b1a:; BB(0x008a0b1a);
    /* 008a0b1a: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0b20: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0b26: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b2c: jae 0x8a0b44 */ if (!fC) goto L_008a0b44;
L_008a0b2e:; BB(0x008a0b2e);
    /* 008a0b2e: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0b31: je 0x8a0b44 */ if (fZ) goto L_008a0b44;
L_008a0b33:; BB(0x008a0b33);
    /* 008a0b33: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0b34: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0b36: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0b3c: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b42: jb 0x8a0b2e */ if (fC) goto L_008a0b2e;
L_008a0b44:; BB(0x008a0b44);
    /* 008a0b44: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0b4a: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b50: jb 0x8a0890 */ if (fC) goto L_008a0890;
L_008a0b56:; BB(0x008a0b56);
    /* 008a0b56: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0b5c: jne 0x8a0d86 */ if (!fZ) goto L_008a0d86;
L_008a0b62:; BB(0x008a0b62);
    /* 008a0b62: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a0b63: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0b69: mov dword ptr [ebx + 0x3d8], 1 */ W32((u32)(r_ebx+0x3d8u), 0x1u);
    /* 008a0b73: mov eax, 0x10c */ r_eax = 0x10cu;
    /* 008a0b78: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0b7d:; BB(0x008a0b7d);
    /* 008a0b7d: movsx esi, dl */ r_esi = (u32)(i32)(i8)(u8)r_edx;
    /* 008a0b80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0b81: call 0x8581d3 */ r_esp -= 4; W32(r_esp, 0x8a0b86u); f_008581d3();
    /* 008a0b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0b88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0b89: je 0x8a0c83 */ if (fZ) goto L_008a0c83;
L_008a0b8f:; BB(0x008a0b8f);
    /* 008a0b8f: mov esi, dword ptr [ebx + 0xc0] */ r_esi = R32((u32)(r_ebx+0xc0u));
    /* 008a0b95: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 008a0b98: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0b9e: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0ba4: jae 0x8a0bd5 */ if (!fC) goto L_008a0bd5;
L_008a0ba6:; BB(0x008a0ba6);
    /* 008a0ba6: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0baa: call 0x858339 */ r_esp -= 4; W32(r_esp, 0x8a0bafu); f_00858339();
    /* 008a0baf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0bb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0bb2: jne 0x8a0bbf */ if (!fZ) goto L_008a0bbf;
L_008a0bb4:; BB(0x008a0bb4);
    /* 008a0bb4: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0bba: cmp byte ptr [eax], 0x5f */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0bbd: jne 0x8a0bd5 */ if (!fZ) goto L_008a0bd5;
L_008a0bbf:; BB(0x008a0bbf);
    /* 008a0bbf: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0bc5: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0bcb: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0bcd: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0bd3: jb 0x8a0ba6 */ if (fC) goto L_008a0ba6;
L_008a0bd5:; BB(0x008a0bd5);
    /* 008a0bd5: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0bdb: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0bdd: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0be2: jb 0x8a0be9 */ if (fC) goto L_008a0be9;
L_008a0be4:; BB(0x008a0be4);
    /* 008a0be4: mov eax, 0xff */ r_eax = 0xffu;
L_008a0be9:; BB(0x008a0be9);
    /* 008a0be9: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0beb: mov edx, ecx */ r_edx = r_ecx;
    /* 008a0bed: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0bf0: lea edi, [ebx + 0xc8] */ r_edi = (u32)(r_ebx+0xc8u);
    /* 008a0bf6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0bf8: mov ecx, edx */ r_ecx = r_edx;
    /* 008a0bfa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0bfd: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a0bff: and byte ptr [eax + ebx + 0xc8], 0 */ { u32 ad = (u32)(r_eax+r_ebx+0xc8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0c07: lea eax, [ebx + 0xc8] */ r_eax = (u32)(r_ebx+0xc8u);
    /* 008a0c0d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c0f: mov edi, 0x99c134 */ r_edi = 0x99c134u;
    /* 008a0c14: mov esi, eax */ r_esi = r_eax;
    /* 008a0c16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c19: mov dword ptr [ebx + 0x3d8], 1 */ W32((u32)(r_ebx+0x3d8u), 0x1u);
    /* 008a0c23: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0c25: jne 0x8a0c31 */ if (!fZ) goto L_008a0c31;
L_008a0c27:; BB(0x008a0c27);
    /* 008a0c27: mov eax, 0x101 */ r_eax = 0x101u;
    /* 008a0c2c: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c31:; BB(0x008a0c31);
    /* 008a0c31: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c33: mov edi, 0x99c130 */ r_edi = 0x99c130u;
    /* 008a0c38: mov esi, eax */ r_esi = r_eax;
    /* 008a0c3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c3d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0c3f: jne 0x8a0c4b */ if (!fZ) goto L_008a0c4b;
L_008a0c41:; BB(0x008a0c41);
    /* 008a0c41: mov eax, 0x102 */ r_eax = 0x102u;
    /* 008a0c46: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c4b:; BB(0x008a0c4b);
    /* 008a0c4b: mov esi, eax */ r_esi = r_eax;
    /* 008a0c4d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c4f: mov edi, 0x99be60 */ r_edi = 0x99be60u;
    /* 008a0c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c57: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0c59: jne 0x8a0c65 */ if (!fZ) goto L_008a0c65;
L_008a0c5b:; BB(0x008a0c5b);
    /* 008a0c5b: mov eax, 0x103 */ r_eax = 0x103u;
    /* 008a0c60: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c65:; BB(0x008a0c65);
    /* 008a0c65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0c67: call 0x89f97e */ r_esp -= 4; W32(r_esp, 0x8a0c6cu); f_0089f97e();
    /* 008a0c6c: cmp eax, 0x109 */ {  u32 a = r_eax; u32 b = 0x109u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0c71: jne 0x8a0d89 */ if (!fZ) goto L_008a0d89;
L_008a0c77:; BB(0x008a0c77);
    /* 008a0c77: and dword ptr [ebx + 0x3d8], 0 */ { u32 ad = (u32)(r_ebx+0x3d8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0c7e: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0c83:; BB(0x008a0c83);
    /* 008a0c83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0c84: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8a0c89u); f_00858286();
    /* 008a0c89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0c8b: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0c91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0c92: je 0x8a0d6c */ if (fZ) goto L_008a0d6c;
L_008a0c98:; BB(0x008a0c98);
    /* 008a0c98: mov esi, eax */ r_esi = r_eax;
    /* 008a0c9a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0c9b: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0ca1: mov dword ptr [ebp - 8], 0x10a */ W32((u32)(r_ebp+0xfffffff8u), 0x10au);
    /* 008a0ca8: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0cae: jae 0x8a0d0b */ if (!fC) goto L_008a0d0b;
L_008a0cb0:; BB(0x008a0cb0);
    /* 008a0cb0: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008a0cb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0cb4: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8a0cb9u); f_00858286();
    /* 008a0cb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0cbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0cbc: jne 0x8a0cf5 */ if (!fZ) goto L_008a0cf5;
L_008a0cbe:; BB(0x008a0cbe);
    /* 008a0cbe: cmp dword ptr [ebx + 0xb4], eax */ {  u32 a = R32((u32)(r_ebx+0xb4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0cc4: je 0x8a0cd6 */ if (fZ) goto L_008a0cd6;
L_008a0cc6:; BB(0x008a0cc6);
    /* 008a0cc6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0ccc: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0cce: cmp al, 0x2e */ {  u32 a = (u8)r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0cd0: je 0x8a0cee */ if (fZ) goto L_008a0cee;
L_008a0cd2:; BB(0x008a0cd2);
    /* 008a0cd2: cmp al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0cd4: je 0x8a0cee */ if (fZ) goto L_008a0cee;
L_008a0cd6:; BB(0x008a0cd6);
    /* 008a0cd6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0cdc: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a0cde: cmp cl, 0x2b */ {  u32 a = (u8)r_ecx; u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ce1: je 0x8a0ce8 */ if (fZ) goto L_008a0ce8;
L_008a0ce3:; BB(0x008a0ce3);
    /* 008a0ce3: cmp cl, 0x2d */ {  u32 a = (u8)r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0ce6: jne 0x8a0d0b */ if (!fZ) goto L_008a0d0b;
L_008a0ce8:; BB(0x008a0ce8);
    /* 008a0ce8: cmp byte ptr [eax - 1], 0x65 */ {  u32 a = R8((u32)(r_eax+0xffffffffu)); u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a0cec: jne 0x8a0d0b */ if (!fZ) goto L_008a0d0b;
L_008a0cee:; BB(0x008a0cee);
    /* 008a0cee: mov dword ptr [ebp - 8], 0x10b */ W32((u32)(r_ebp+0xfffffff8u), 0x10bu);
L_008a0cf5:; BB(0x008a0cf5);
    /* 008a0cf5: inc dword ptr [ebx + 0xc0] */ { u32 ad = (u32)(r_ebx+0xc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0cfb: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0d01: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0d03: cmp ecx, dword ptr [ebx + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0d09: jb 0x8a0cb0 */ if (fC) goto L_008a0cb0;
L_008a0d0b:; BB(0x008a0d0b);
    /* 008a0d0b: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0d11: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a0d13: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a0d18: jb 0x8a0d1f */ if (fC) goto L_008a0d1f;
L_008a0d1a:; BB(0x008a0d1a);
    /* 008a0d1a: mov eax, 0xff */ r_eax = 0xffu;
L_008a0d1f:; BB(0x008a0d1f);
    /* 008a0d1f: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0d21: mov edx, ecx */ r_edx = r_ecx;
    /* 008a0d23: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0d26: lea edi, [ebx + 0xc8] */ r_edi = (u32)(r_ebx+0xc8u);
    /* 008a0d2c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0d2e: mov ecx, edx */ r_ecx = r_edx;
    /* 008a0d30: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0d33: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a0d35: and byte ptr [eax + ebx + 0xc8], 0 */ { u32 ad = (u32)(r_eax+r_ebx+0xc8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0d3d: cmp dword ptr [ebx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ebx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0d44: je 0x8a0d67 */ if (fZ) goto L_008a0d67;
L_008a0d46:; BB(0x008a0d46);
    /* 008a0d46: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 008a0d4c: cmp eax, dword ptr [ebx + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0d52: jae 0x8a0d67 */ if (!fC) goto L_008a0d67;
L_008a0d54:; BB(0x008a0d54);
    /* 008a0d54: cmp byte ptr [eax], 0x66 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x66u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a0d57: jne 0x8a0d67 */ if (!fZ) goto L_008a0d67;
L_008a0d59:; BB(0x008a0d59);
    /* 008a0d59: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a0d5a: mov dword ptr [ebp - 8], 0x10b */ W32((u32)(r_ebp+0xfffffff8u), 0x10bu);
    /* 008a0d61: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
L_008a0d67:; BB(0x008a0d67);
    /* 008a0d67: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0d6a: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0d6c:; BB(0x008a0d6c);
    /* 008a0d6c: cmp byte ptr [eax], 0x2b */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0d6f: jne 0x8a0d7b */ if (!fZ) goto L_008a0d7b;
L_008a0d71:; BB(0x008a0d71);
    /* 008a0d71: mov dword ptr [ebx + 0x3d8], 1 */ W32((u32)(r_ebx+0x3d8u), 0x1u);
L_008a0d7b:; BB(0x008a0d7b);
    /* 008a0d7b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a0d7c: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a0d82: mov eax, esi */ r_eax = r_esi;
    /* 008a0d84: jmp 0x8a0d89 */ goto L_008a0d89;
L_008a0d86:; BB(0x008a0d86);
    /* 008a0d86: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a0d89:; BB(0x008a0d89);
    /* 008a0d89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0d8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0d8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a0d8c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a0d8d: ret  */ FN_RET(0x008a0a04); r_esp += 4; return;
}

void f_008a0d8e(void) /* sub_8A0D8E */
{
    FN_ENTER(0x008a0d8e);
    /* 008a0d8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a0d8f: mov ebp, esp */ r_ebp = r_esp;
    /* 008a0d91: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a0d94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a0d97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a0d98: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a0d9b: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a0d9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0d9f: mov esi, ecx */ r_esi = r_ecx;
    /* 008a0da1: ja 0x8a15ba */ if ((!fC&&!fZ)) goto L_008a15ba;
L_008a0da7:; BB(0x008a0da7);
    /* 008a0da7: movzx eax, byte ptr [eax + 0x8a1696] */ r_eax = (u32)R8((u32)(r_eax+0x8a1696u));
    /* 008a0dae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0daf: jmp dword ptr [eax*4 + 0x8a161a] */ { u32 t = R32((u32)(r_eax*4+0x8a161au)); switch (t) { case 0x8a0db6u: goto L_008a0db6; case 0x8a0e1au: goto L_008a0e1a; case 0x8a0e52u: goto L_008a0e52; case 0x8a0ea0u: goto L_008a0ea0; case 0x8a0ed0u: goto L_008a0ed0; case 0x8a0f1cu: goto L_008a0f1c; case 0x8a0f7fu: goto L_008a0f7f; case 0x8a1022u: goto L_008a1022; case 0x8a10afu: goto L_008a10af; case 0x8a10c9u: goto L_008a10c9; case 0x8a1130u: goto L_008a1130; case 0x8a117fu: goto L_008a117f; case 0x8a1231u: goto L_008a1231; case 0x8a12a6u: goto L_008a12a6; case 0x8a12c3u: goto L_008a12c3; case 0x8a130fu: goto L_008a130f; case 0x8a1363u: goto L_008a1363; case 0x8a13acu: goto L_008a13ac; case 0x8a13ecu: goto L_008a13ec; case 0x8a1419u: goto L_008a1419; case 0x8a1471u: goto L_008a1471; case 0x8a0e09u: goto L_008a0e09; case 0x8a14c2u: goto L_008a14c2; case 0x8a14ebu: goto L_008a14eb; case 0x8a150fu: goto L_008a150f; case 0x8a152du: goto L_008a152d; case 0x8a1550u: goto L_008a1550; case 0x8a156au: goto L_008a156a; case 0x8a1583u: goto L_008a1583; case 0x8a1596u: goto L_008a1596; case 0x8a15b9u: goto L_008a15b9; default: UNSUP(0x008a0daf, "jump table entry is not a known target"); } }
L_008a0db6:; BB(0x008a0db6);
    /* 008a0db6: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008a0db9: lea edi, [esi + 0x24] */ r_edi = (u32)(r_esi+0x24u);
    /* 008a0dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0dbd: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0dbf: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0dc4u); f_008a8ace();
    /* 008a0dc4: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a0dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0dc8: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0dca: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0dcfu); f_008a8ace();
    /* 008a0dcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a0dd2: mov ecx, eax */ r_ecx = r_eax;
    /* 008a0dd4: or ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0dd7: test ecx, 0xffffff00 */ {  u32 a = r_ecx; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0ddd: je 0x8a0df1 */ if (fZ) goto L_008a0df1;
L_008a0ddf:; BB(0x008a0ddf);
    /* 008a0ddf: push 0x99c308 */ { u32 v = 0x99c308u; r_esp -= 4; W32(r_esp, v); }
L_008a0de4:; BB(0x008a0de4);
    /* 008a0de4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a0de5: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a0deau); f_0089f848();
    /* 008a0dea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0deb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0dec: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a0df1:; BB(0x008a0df1);
    /* 008a0df1: and dword ptr [esi + 0xac], 0 */ { u32 ad = (u32)(r_esi+0xacu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0df8: or eax, 0xfffffe00 */ {  u32 a = r_eax; u32 b = 0xfffffe00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008a0dfd:; BB(0x008a0dfd);
    /* 008a0dfd: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a0e00: or eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0e03: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
L_008a0e09:; BB(0x008a0e09);
    /* 008a0e09: mov eax, dword ptr [esi + 0x1d0] */ r_eax = R32((u32)(r_esi+0x1d0u));
    /* 008a0e0f: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 008a0e15: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a0e1a:; BB(0x008a0e1a);
    /* 008a0e1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008a0e1d: lea edi, [esi + 0x24] */ r_edi = (u32)(r_esi+0x24u);
    /* 008a0e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e21: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0e23: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e28u); f_008a8ace();
    /* 008a0e28: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a0e2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e2c: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0e2e: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e33u); f_008a8ace();
    /* 008a0e33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a0e36: mov edx, eax */ r_edx = r_eax;
    /* 008a0e38: or edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008a0e3b: mov ecx, 0xffffff00 */ r_ecx = 0xffffff00u;
    /* 008a0e40: test ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0e42: jne 0x8a0ddf */ if (!fZ) goto L_008a0ddf;
L_008a0e44:; BB(0x008a0e44);
    /* 008a0e44: mov dword ptr [esi + 0xac], 1 */ W32((u32)(r_esi+0xacu), 0x1u);
    /* 008a0e4e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0e50: jmp 0x8a0dfd */ goto L_008a0dfd;
L_008a0e52:; BB(0x008a0e52);
    /* 008a0e52: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a0e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e56: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 008a0e59: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e5eu); f_008a8ace();
    /* 008a0e5e: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 008a0e61: lea edi, [esi + 0x34] */ r_edi = (u32)(r_esi+0x34u);
    /* 008a0e64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e65: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0e67: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e6cu); f_008a8ace();
    /* 008a0e6c: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 008a0e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e70: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0e72: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e77u); f_008a8ace();
    /* 008a0e77: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 008a0e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e7b: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0e7d: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e82u); f_008a8ace();
    /* 008a0e82: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 008a0e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e86: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0e88: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0e8du); f_008a8ace();
    /* 008a0e8d: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 008a0e90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0e91: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0e94: mov ecx, esi */ r_ecx = r_esi;
    /* 008a0e96: call 0x8a0580 */ r_esp -= 4; W32(r_esp, 0x8a0e9bu); f_008a0580();
    /* 008a0e9b: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a0ea0:; BB(0x008a0ea0);
    /* 008a0ea0: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008a0ea3: lea edi, [esi + 0x54] */ r_edi = (u32)(r_esi+0x54u);
    /* 008a0ea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0ea7: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0ea9: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0eaeu); f_008a8ace();
    /* 008a0eae: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008a0eb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0eb2: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0eb4: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0eb9u); f_008a8ace();
    /* 008a0eb9: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0ebc: lea ecx, [esi + 0x74] */ r_ecx = (u32)(r_esi+0x74u);
    /* 008a0ebf: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0ec4u); f_008a8961();
    /* 008a0ec4: add dword ptr [esi + 0xa0], 4 */ { u32 ad = (u32)(r_esi+0xa0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0ecb: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a0ed0:; BB(0x008a0ed0);
    /* 008a0ed0: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a0ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0ed4: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 008a0ed7: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0edcu); f_008a8ace();
    /* 008a0edc: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008a0edf: lea edi, [esi + 0x54] */ r_edi = (u32)(r_esi+0x54u);
    /* 008a0ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0ee3: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0ee5: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0eeau); f_008a8ace();
    /* 008a0eea: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008a0eed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0eee: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0ef0: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0ef5u); f_008a8ace();
    /* 008a0ef5: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0ef8: lea edi, [esi + 0x74] */ r_edi = (u32)(r_esi+0x74u);
    /* 008a0efb: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0efd: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0f02u); f_008a8961();
    /* 008a0f02: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a0f05: or eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0f08: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f0b: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0f10u); f_008a8961();
    /* 008a0f10: add dword ptr [esi + 0xa0], 8 */ { u32 ad = (u32)(r_esi+0xa0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0f17: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a0f1c:; BB(0x008a0f1c);
    /* 008a0f1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008a0f1f: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a0f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f23: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f25: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0f2au); f_008a8ace();
    /* 008a0f2a: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a0f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f2e: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f30: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0f35u); f_008a8ace();
    /* 008a0f35: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008a0f38: lea edi, [esi + 0x54] */ r_edi = (u32)(r_esi+0x54u);
    /* 008a0f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f3c: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f3e: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0f43u); f_008a8ace();
    /* 008a0f43: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008a0f46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f47: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f49: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0f4eu); f_008a8ace();
    /* 008a0f4e: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0f51: lea edi, [esi + 0x74] */ r_edi = (u32)(r_esi+0x74u);
    /* 008a0f54: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f56: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0f5bu); f_008a8961();
    /* 008a0f5b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a0f5e: or eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0f61: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f64: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0f69u); f_008a8961();
    /* 008a0f69: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0f6c: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f6e: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0f73u); f_008a8961();
    /* 008a0f73: add dword ptr [esi + 0xa0], 0xc */ { u32 ad = (u32)(r_esi+0xa0u);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0f7a: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a0f7f:; BB(0x008a0f7f);
    /* 008a0f7f: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008a0f82: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a0f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f86: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f88: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0f8du); f_008a8ace();
    /* 008a0f8d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008a0f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f91: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f93: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0f98u); f_008a8ace();
    /* 008a0f98: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a0f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0f9c: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0f9e: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0fa3u); f_008a8ace();
    /* 008a0fa3: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008a0fa6: lea edi, [esi + 0x54] */ r_edi = (u32)(r_esi+0x54u);
    /* 008a0fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0faa: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0fac: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0fb1u); f_008a8ace();
    /* 008a0fb1: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008a0fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0fb5: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0fb7: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a0fbcu); f_008a8ace();
    /* 008a0fbc: cmp dword ptr [esi + 0xac], 0 */ {  u32 a = R32((u32)(r_esi+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0fc3: jne 0x8a0fe7 */ if (!fZ) goto L_008a0fe7;
L_008a0fc5:; BB(0x008a0fc5);
    /* 008a0fc5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0fc8: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0fcd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a0fd0: jne 0x8a0fe7 */ if (!fZ) goto L_008a0fe7;
L_008a0fd2:; BB(0x008a0fd2);
    /* 008a0fd2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0fd5: and eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a0fda: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0fdd: xor dword ptr [ebp - 0x1c], 0x1000000 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1000000u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 008a0fe4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a0fe7:; BB(0x008a0fe7);
    /* 008a0fe7: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a0fea: lea edi, [esi + 0x74] */ r_edi = (u32)(r_esi+0x74u);
    /* 008a0fed: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0fef: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a0ff4u); f_008a8961();
    /* 008a0ff4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a0ff7: or eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a0ffa: mov ecx, edi */ r_ecx = r_edi;
    /* 008a0ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a0ffd: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a1002u); f_008a8961();
    /* 008a1002: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1005: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1007: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a100cu); f_008a8961();
    /* 008a100c: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a100f: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1011: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a1016u); f_008a8961();
    /* 008a1016: add dword ptr [esi + 0xa0], 0x10 */ { u32 ad = (u32)(r_esi+0xa0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a101d: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a1022:; BB(0x008a1022);
    /* 008a1022: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008a1025: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a1028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1029: mov ecx, edi */ r_ecx = r_edi;
    /* 008a102b: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1030u); f_008a8ace();
    /* 008a1030: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008a1033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1034: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1036: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a103bu); f_008a8ace();
    /* 008a103b: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008a103e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a103f: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1041: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1046u); f_008a8ace();
    /* 008a1046: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a1049: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a104a: mov ecx, edi */ r_ecx = r_edi;
    /* 008a104c: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1051u); f_008a8ace();
    /* 008a1051: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008a1054: lea edi, [esi + 0x54] */ r_edi = (u32)(r_esi+0x54u);
    /* 008a1057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1058: mov ecx, edi */ r_ecx = r_edi;
    /* 008a105a: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a105fu); f_008a8ace();
    /* 008a105f: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008a1062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1063: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1065: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a106au); f_008a8ace();
    /* 008a106a: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a106d: lea edi, [esi + 0x74] */ r_edi = (u32)(r_esi+0x74u);
    /* 008a1070: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1072: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a1077u); f_008a8961();
    /* 008a1077: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a107a: or eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a107d: mov ecx, edi */ r_ecx = r_edi;
    /* 008a107f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1080: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a1085u); f_008a8961();
    /* 008a1085: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1088: mov ecx, edi */ r_ecx = r_edi;
    /* 008a108a: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a108fu); f_008a8961();
    /* 008a108f: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1092: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1094: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a1099u); f_008a8961();
    /* 008a1099: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a109c: mov ecx, edi */ r_ecx = r_edi;
    /* 008a109e: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a10a3u); f_008a8961();
    /* 008a10a3: add dword ptr [esi + 0xa0], 0x14 */ { u32 ad = (u32)(r_esi+0xa0u);  u32 a = R32(ad); u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a10aa: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a10af:; BB(0x008a10af);
    /* 008a10af: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a10b2: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a10b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a10b6: mov ecx, edi */ r_ecx = r_edi;
    /* 008a10b8: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a10bdu); f_008a8ace();
    /* 008a10bd: or byte ptr [ebp + 0xa], 0xf */ { u32 ad = (u32)(r_ebp+0xau);  u32 a = R8(ad); u32 b = 0xfu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_008a10c1:; BB(0x008a10c1);
    /* 008a10c1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a10c4: jmp 0x8a13e5 */ goto L_008a13e5;
L_008a10c9:; BB(0x008a10c9);
    /* 008a10c9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 008a10cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a10cd: mov ecx, esi */ r_ecx = r_esi;
    /* 008a10cf: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a10d4u); f_008a8ace();
    /* 008a10d4: lea eax, [esi + 0x3e4] */ r_eax = (u32)(r_esi+0x3e4u);
    /* 008a10da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a10db: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 008a10de: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a10e3u); f_008a8ace();
    /* 008a10e3: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a10e6: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a10e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a10ea: mov ecx, edi */ r_ecx = r_edi;
    /* 008a10ec: mov dword ptr [esi + 0x3e0], 1 */ W32((u32)(r_esi+0x3e0u), 0x1u);
    /* 008a10f6: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a10fbu); f_008a8ace();
    /* 008a10fb: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a10fe: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1100: call 0x8a0095 */ r_esp -= 4; W32(r_esp, 0x8a1105u); f_008a0095();
    /* 008a1105: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a1108: and ecx, 0xfff0ffff */ {  u32 a = r_ecx; u32 b = 0xfff0ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a110e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a1110: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a1113:; BB(0x008a1113);
    /* 008a1113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1114: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1116: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a111bu); f_008a8961();
    /* 008a111b: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a111e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8a1123u); f_00857e98();
    /* 008a1123: and dword ptr [esi + 0x3e0], 0 */ { u32 ad = (u32)(r_esi+0x3e0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a112a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a112b: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a1130:; BB(0x008a1130);
    /* 008a1130: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a1133: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a1136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1137: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1139: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a113eu); f_008a8ace();
    /* 008a113e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1141: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1143: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a1148u); f_008a8961();
    /* 008a1148: cmp dword ptr [esi + 0xb4], 0xffff0104 */ {  u32 a = R32((u32)(r_esi+0xb4u)); u32 b = 0xffff0104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1152: jne 0x8a15b9 */ if (!fZ) goto L_008a15b9;
L_008a1158:; BB(0x008a1158);
    /* 008a1158: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a115b: and eax, 0x70000000 */ {  u32 a = r_eax; u32 b = 0x70000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a1160: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1165: jne 0x8a15b9 */ if (!fZ) goto L_008a15b9;
L_008a116b:; BB(0x008a116b);
    /* 008a116b: test byte ptr [ebp + 0xb], 0xf */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a116f: je 0x8a15b9 */ if (fZ) goto L_008a15b9;
L_008a1175:; BB(0x008a1175);
    /* 008a1175: push 0x99c2dc */ { u32 v = 0x99c2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008a117a: jmp 0x8a0de4 */ goto L_008a0de4;
L_008a117f:; BB(0x008a117f);
    /* 008a117f: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a1182: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a1185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1186: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1188: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a118du); f_008a8ace();
    /* 008a118d: cmp dword ptr [esi + 0xb4], 0xffff0104 */ {  u32 a = R32((u32)(r_esi+0xb4u)); u32 b = 0xffff0104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1197: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a119a: jne 0x8a11bc */ if (!fZ) goto L_008a11bc;
L_008a119c:; BB(0x008a119c);
    /* 008a119c: mov eax, ecx */ r_eax = r_ecx;
    /* 008a119e: and eax, 0x70000000 */ {  u32 a = r_eax; u32 b = 0x70000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a11a3: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a11a8: jne 0x8a11bc */ if (!fZ) goto L_008a11bc;
L_008a11aa:; BB(0x008a11aa);
    /* 008a11aa: push 0x99c2dc */ { u32 v = 0x99c2dcu; r_esp -= 4; W32(r_esp, v); }
L_008a11af:; BB(0x008a11af);
    /* 008a11af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a11b0: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a11b5u); f_0089f848();
    /* 008a11b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a11b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a11b7: jmp 0x8a10c1 */ goto L_008a10c1;
L_008a11bc:; BB(0x008a11bc);
    /* 008a11bc: mov eax, ecx */ r_eax = r_ecx;
    /* 008a11be: and eax, 0xf000000 */ {  u32 a = r_eax; u32 b = 0xf000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a11c3: je 0x8a121d */ if (fZ) goto L_008a121d;
L_008a11c5:; BB(0x008a11c5);
    /* 008a11c5: cmp eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a11ca: je 0x8a120f */ if (fZ) goto L_008a120f;
L_008a11cc:; BB(0x008a11cc);
    /* 008a11cc: cmp eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a11d1: je 0x8a1201 */ if (fZ) goto L_008a1201;
L_008a11d3:; BB(0x008a11d3);
    /* 008a11d3: cmp eax, 0x7000000 */ {  u32 a = r_eax; u32 b = 0x7000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a11d8: je 0x8a11f3 */ if (fZ) goto L_008a11f3;
L_008a11da:; BB(0x008a11da);
    /* 008a11da: cmp eax, 0x9000000 */ {  u32 a = r_eax; u32 b = 0x9000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a11df: je 0x8a11ec */ if (fZ) goto L_008a11ec;
L_008a11e1:; BB(0x008a11e1);
    /* 008a11e1: cmp eax, 0xa000000 */ {  u32 a = r_eax; u32 b = 0xa000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a11e6: jne 0x8a10c1 */ if (!fZ) goto L_008a10c1;
L_008a11ec:; BB(0x008a11ec);
    /* 008a11ec: push 0x99c2ac */ { u32 v = 0x99c2acu; r_esp -= 4; W32(r_esp, v); }
    /* 008a11f1: jmp 0x8a11af */ goto L_008a11af;
L_008a11f3:; BB(0x008a11f3);
    /* 008a11f3: and ecx, 0xf8ffffff */ {  u32 a = r_ecx; u32 b = 0xf8ffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a11f9: or ecx, 0x8000000 */ {  u32 a = r_ecx; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a11ff: jmp 0x8a1229 */ goto L_008a1229;
L_008a1201:; BB(0x008a1201);
    /* 008a1201: and ecx, 0xf5ffffff */ {  u32 a = r_ecx; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1207: or ecx, 0x5000000 */ {  u32 a = r_ecx; u32 b = 0x5000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a120d: jmp 0x8a1229 */ goto L_008a1229;
L_008a120f:; BB(0x008a120f);
    /* 008a120f: and ecx, 0xf3ffffff */ {  u32 a = r_ecx; u32 b = 0xf3ffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1215: or ecx, 0x3000000 */ {  u32 a = r_ecx; u32 b = 0x3000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a121b: jmp 0x8a1229 */ goto L_008a1229;
L_008a121d:; BB(0x008a121d);
    /* 008a121d: and ecx, 0xf1ffffff */ {  u32 a = r_ecx; u32 b = 0xf1ffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1223: or ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_008a1229:; BB(0x008a1229);
    /* 008a1229: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a122c: jmp 0x8a10c1 */ goto L_008a10c1;
L_008a1231:; BB(0x008a1231);
    /* 008a1231: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a1234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1235: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a1238: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a123du); f_008a8ace();
    /* 008a123d: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a1240: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a1243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1244: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1246: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a124bu); f_008a8ace();
    /* 008a124b: cmp dword ptr [esi + 0xac], 0 */ {  u32 a = R32((u32)(r_esi+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1252: jne 0x8a125b */ if (!fZ) goto L_008a125b;
L_008a1254:; BB(0x008a1254);
    /* 008a1254: push 0x99c280 */ { u32 v = 0x99c280u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1259: jmp 0x8a1288 */ goto L_008a1288;
L_008a125b:; BB(0x008a125b);
    /* 008a125b: cmp dword ptr [esi + 0xb4], 0xffff0104 */ {  u32 a = R32((u32)(r_esi+0xb4u)); u32 b = 0xffff0104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1265: jne 0x8a127d */ if (!fZ) goto L_008a127d;
L_008a1267:; BB(0x008a1267);
    /* 008a1267: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a126a: and eax, 0x70000000 */ {  u32 a = r_eax; u32 b = 0x70000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a126f: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1274: jne 0x8a127d */ if (!fZ) goto L_008a127d;
L_008a1276:; BB(0x008a1276);
    /* 008a1276: push 0x99c2dc */ { u32 v = 0x99c2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008a127b: jmp 0x8a1288 */ goto L_008a1288;
L_008a127d:; BB(0x008a127d);
    /* 008a127d: test byte ptr [ebp + 0xb], 0xf */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a1281: je 0x8a1290 */ if (fZ) goto L_008a1290;
L_008a1283:; BB(0x008a1283);
    /* 008a1283: push 0x99c250 */ { u32 v = 0x99c250u; r_esp -= 4; W32(r_esp, v); }
L_008a1288:; BB(0x008a1288);
    /* 008a1288: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1289: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a128eu); f_0089f848();
    /* 008a128e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a128f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1290:; BB(0x008a1290);
    /* 008a1290: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a1293: and eax, 0xf6ffffff */ {  u32 a = r_eax; u32 b = 0xf6ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a1298: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a129d: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a12a0:; BB(0x008a12a0);
    /* 008a12a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a12a1: jmp 0x8a13e5 */ goto L_008a13e5;
L_008a12a6:; BB(0x008a12a6);
    /* 008a12a6: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a12a9: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a12ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a12ad: mov ecx, edi */ r_ecx = r_edi;
    /* 008a12af: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a12b4u); f_008a8ace();
    /* 008a12b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a12b7: and eax, 0xffe4ffff */ {  u32 a = r_eax; u32 b = 0xffe4ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a12bc: or eax, 0xe40000 */ {  u32 a = r_eax; u32 b = 0xe40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a12c1: jmp 0x8a12a0 */ goto L_008a12a0;
L_008a12c3:; BB(0x008a12c3);
    /* 008a12c3: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 008a12c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a12c7: mov ecx, esi */ r_ecx = r_esi;
    /* 008a12c9: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a12ceu); f_008a8ace();
    /* 008a12ce: lea eax, [esi + 0x3e4] */ r_eax = (u32)(r_esi+0x3e4u);
    /* 008a12d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a12d5: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 008a12d8: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a12ddu); f_008a8ace();
    /* 008a12dd: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a12e0: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a12e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a12e4: mov ecx, edi */ r_ecx = r_edi;
    /* 008a12e6: mov dword ptr [esi + 0x3e0], 1 */ W32((u32)(r_esi+0x3e0u), 0x1u);
    /* 008a12f0: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a12f5u); f_008a8ace();
    /* 008a12f5: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a12f8: mov ecx, esi */ r_ecx = r_esi;
    /* 008a12fa: call 0x8a013e */ r_esp -= 4; W32(r_esp, 0x8a12ffu); f_008a013e();
    /* 008a12ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a1302: and ecx, 0xff00ffff */ {  u32 a = r_ecx; u32 b = 0xff00ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1308: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a130a: jmp 0x8a1113 */ goto L_008a1113;
L_008a130f:; BB(0x008a130f);
    /* 008a130f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 008a1312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1313: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1315: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a131au); f_008a8ace();
    /* 008a131a: lea eax, [esi + 0x3e4] */ r_eax = (u32)(r_esi+0x3e4u);
    /* 008a1320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1321: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 008a1324: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1329u); f_008a8ace();
    /* 008a1329: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a132b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a132c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a132d: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1330: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1332: mov dword ptr [esi + 0x3e0], 1 */ W32((u32)(r_esi+0x3e0u), 0x1u);
    /* 008a133c: call 0x8a01df */ r_esp -= 4; W32(r_esp, 0x8a1341u); f_008a01df();
    /* 008a1341: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a1346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1347: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 008a134a: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a134fu); f_008a8961();
    /* 008a134f: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1352: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8a1357u); f_00857e98();
    /* 008a1357: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1358: mov dword ptr [esi + 0x3e0], edi */ W32((u32)(r_esi+0x3e0u), r_edi);
    /* 008a135e: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a1363:; BB(0x008a1363);
    /* 008a1363: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 008a1366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1367: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1369: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a136eu); f_008a8ace();
    /* 008a136e: lea eax, [esi + 0x3e4] */ r_eax = (u32)(r_esi+0x3e4u);
    /* 008a1374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1375: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 008a1378: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a137du); f_008a8ace();
    /* 008a137d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a137f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a1382: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a1385: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a1386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1387: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1389: mov dword ptr [esi + 0x3e0], ebx */ W32((u32)(r_esi+0x3e0u), r_ebx);
    /* 008a138f: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1394u); f_008a8ace();
    /* 008a1394: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a1395: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1398: mov ecx, esi */ r_ecx = r_esi;
    /* 008a139a: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a139d: call 0x8a01df */ r_esp -= 4; W32(r_esp, 0x8a13a2u); f_008a01df();
    /* 008a13a2: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a13a7: jmp 0x8a1113 */ goto L_008a1113;
L_008a13ac:; BB(0x008a13ac);
    /* 008a13ac: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a13af: lea edi, [esi + 0x44] */ r_edi = (u32)(r_esi+0x44u);
    /* 008a13b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a13b3: mov ecx, edi */ r_ecx = r_edi;
    /* 008a13b5: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a13bau); f_008a8ace();
    /* 008a13ba: cmp dword ptr [esi + 0xac], 0 */ {  u32 a = R32((u32)(r_esi+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a13c1: je 0x8a13ca */ if (fZ) goto L_008a13ca;
L_008a13c3:; BB(0x008a13c3);
    /* 008a13c3: push 0x99be98 */ { u32 v = 0x99be98u; r_esp -= 4; W32(r_esp, v); }
    /* 008a13c8: jmp 0x8a13d8 */ goto L_008a13d8;
L_008a13ca:; BB(0x008a13ca);
    /* 008a13ca: cmp dword ptr [ebp - 4], 0xb0000000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xb0000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a13d1: je 0x8a13e0 */ if (fZ) goto L_008a13e0;
L_008a13d3:; BB(0x008a13d3);
    /* 008a13d3: push 0x99c228 */ { u32 v = 0x99c228u; r_esp -= 4; W32(r_esp, v); }
L_008a13d8:; BB(0x008a13d8);
    /* 008a13d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a13d9: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a13deu); f_0089f848();
    /* 008a13de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a13df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a13e0:; BB(0x008a13e0);
    /* 008a13e0: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
L_008a13e5:; BB(0x008a13e5);
    /* 008a13e5: mov ecx, edi */ r_ecx = r_edi;
    /* 008a13e7: jmp 0x8a15b4 */ goto L_008a15b4;
L_008a13ec:; BB(0x008a13ec);
    /* 008a13ec: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a13ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a13f0: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a13f3: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a13f8u); f_008a8ace();
    /* 008a13f8: test dword ptr [ebp - 4], 0xffffe000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffe000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a13ff: je 0x8a140e */ if (fZ) goto L_008a140e;
L_008a1401:; BB(0x008a1401);
    /* 008a1401: push 0x99c210 */ { u32 v = 0x99c210u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1406: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1407: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a140cu); f_0089f848();
    /* 008a140c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a140d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a140e:; BB(0x008a140e);
    /* 008a140e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1411: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 008a1414: jmp 0x8a15b4 */ goto L_008a15b4;
L_008a1419:; BB(0x008a1419);
    /* 008a1419: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a141c: lea ebx, [esi + 0x44] */ r_ebx = (u32)(r_esi+0x44u);
    /* 008a141f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1420: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a1422: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1427u); f_008a8ace();
    /* 008a1427: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a142a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a142b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a142d: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1432u); f_008a8ace();
    /* 008a1432: cmp dword ptr [esi + 0xac], 0 */ {  u32 a = R32((u32)(r_esi+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1439: mov edi, 0x2000 */ r_edi = 0x2000u;
    /* 008a143e: je 0x8a1447 */ if (fZ) goto L_008a1447;
L_008a1440:; BB(0x008a1440);
    /* 008a1440: push 0x99be98 */ { u32 v = 0x99be98u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1445: jmp 0x8a1461 */ goto L_008a1461;
L_008a1447:; BB(0x008a1447);
    /* 008a1447: cmp dword ptr [ebp - 4], 0xb0000000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xb0000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a144e: je 0x8a1457 */ if (fZ) goto L_008a1457;
L_008a1450:; BB(0x008a1450);
    /* 008a1450: push 0x99c228 */ { u32 v = 0x99c228u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1455: jmp 0x8a1461 */ goto L_008a1461;
L_008a1457:; BB(0x008a1457);
    /* 008a1457: test dword ptr [ebp + 8], edi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a145a: je 0x8a1469 */ if (fZ) goto L_008a1469;
L_008a145c:; BB(0x008a145c);
    /* 008a145c: push 0x99c1dc */ { u32 v = 0x99c1dcu; r_esp -= 4; W32(r_esp, v); }
L_008a1461:; BB(0x008a1461);
    /* 008a1461: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1462: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a1467u); f_0089f848();
    /* 008a1467: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1469:; BB(0x008a1469);
    /* 008a1469: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a146c: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a146e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a146f: jmp 0x8a14bb */ goto L_008a14bb;
L_008a1471:; BB(0x008a1471);
    /* 008a1471: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a1474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1475: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a1478: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a147du); f_008a8ace();
    /* 008a147d: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a1480: lea ebx, [esi + 0x44] */ r_ebx = (u32)(r_esi+0x44u);
    /* 008a1483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1484: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a1486: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a148bu); f_008a8ace();
    /* 008a148b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a148e: mov edi, 0x1fff */ r_edi = 0x1fffu;
    /* 008a1493: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a1495: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1498: test eax, 0xffffe000 */ {  u32 a = r_eax; u32 b = 0xffffe000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a149d: je 0x8a14ac */ if (fZ) goto L_008a14ac;
L_008a149f:; BB(0x008a149f);
    /* 008a149f: push 0x99c210 */ { u32 v = 0x99c210u; r_esp -= 4; W32(r_esp, v); }
    /* 008a14a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a14a5: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a14aau); f_0089f848();
    /* 008a14aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a14ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a14ac:; BB(0x008a14ac);
    /* 008a14ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a14af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a14b2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a14b4: xor ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a14b6: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a14b8: xor ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a14ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
L_008a14bb:; BB(0x008a14bb);
    /* 008a14bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a14bd: jmp 0x8a15b4 */ goto L_008a15b4;
L_008a14c2:; BB(0x008a14c2);
    /* 008a14c2: push dword ptr [esi + 0x1c8] */ { u32 v = R32((u32)(r_esi+0x1c8u)); r_esp -= 4; W32(r_esp, v); }
L_008a14c8:; BB(0x008a14c8);
    /* 008a14c8: lea edi, [esi + 0x54] */ r_edi = (u32)(r_esi+0x54u);
    /* 008a14cb: mov ecx, edi */ r_ecx = r_edi;
    /* 008a14cd: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a14d2u); f_008a8961();
    /* 008a14d2: push dword ptr [esi + 0x1cc] */ { u32 v = R32((u32)(r_esi+0x1ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a14d8: mov ecx, edi */ r_ecx = r_edi;
    /* 008a14da: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a14dfu); f_008a8961();
    /* 008a14df: mov ecx, esi */ r_ecx = r_esi;
    /* 008a14e1: call 0x8a06ff */ r_esp -= 4; W32(r_esp, 0x8a14e6u); f_008a06ff();
    /* 008a14e6: jmp 0x8a15b9 */ goto L_008a15b9;
L_008a14eb:; BB(0x008a14eb);
    /* 008a14eb: cmp dword ptr [esi + 0xac], 0 */ {  u32 a = R32((u32)(r_esi+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a14f2: jne 0x8a1501 */ if (!fZ) goto L_008a1501;
L_008a14f4:; BB(0x008a14f4);
    /* 008a14f4: push 0x99c1b4 */ { u32 v = 0x99c1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a14f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a14fa: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a14ffu); f_0089f848();
    /* 008a14ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1501:; BB(0x008a1501);
    /* 008a1501: mov eax, dword ptr [esi + 0x1c8] */ r_eax = R32((u32)(r_esi+0x1c8u));
    /* 008a1507: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a150c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a150d: jmp 0x8a14c8 */ goto L_008a14c8;
L_008a150f:; BB(0x008a150f);
    /* 008a150f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a1512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1513: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a1516: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a151bu); f_008a8ace();
    /* 008a151b: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008a151e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a1521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a1523: jge 0x8a154b */ if ((fS==fO)) goto L_008a154b;
L_008a1525:; BB(0x008a1525);
    /* 008a1525: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
    /* 008a152b: jmp 0x8a154b */ goto L_008a154b;
L_008a152d:; BB(0x008a152d);
    /* 008a152d: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008a1530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1531: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a1534: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1539u); f_008a8ace();
    /* 008a1539: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008a153c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a153f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a1541: jge 0x8a1549 */ if ((fS==fO)) goto L_008a1549;
L_008a1543:; BB(0x008a1543);
    /* 008a1543: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008a1549:; BB(0x008a1549);
    /* 008a1549: fchs  */ ST(0) = -ST(0);
L_008a154b:; BB(0x008a154b);
    /* 008a154b: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a154e: jmp 0x8a15ae */ goto L_008a15ae;
L_008a1550:; BB(0x008a1550);
    /* 008a1550: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 008a1553: lea edi, [esi + 0x34] */ r_edi = (u32)(r_esi+0x34u);
    /* 008a1556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1557: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1559: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a155eu); f_008a8ace();
    /* 008a155e: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008a1561: fchs  */ ST(0) = -ST(0);
    /* 008a1563: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1565: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008a1568: jmp 0x8a15b1 */ goto L_008a15b1;
L_008a156a:; BB(0x008a156a);
    /* 008a156a: lea eax, [esi + 0xc8] */ r_eax = (u32)(r_esi+0xc8u);
    /* 008a1570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1571: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1573: call 0x8a8a1b */ r_esp -= 4; W32(r_esp, 0x8a1578u); f_008a8a1b();
    /* 008a1578: push dword ptr [esi + 0x1d0] */ { u32 v = R32((u32)(r_esi+0x1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a157e: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 008a1581: jmp 0x8a15b4 */ goto L_008a15b4;
L_008a1583:; BB(0x008a1583);
    /* 008a1583: lea eax, [esi + 0xc8] */ r_eax = (u32)(r_esi+0xc8u);
    /* 008a1589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a158a: call 0x85a0fa */ r_esp -= 4; W32(r_esp, 0x8a158fu); f_0085a0fa();
    /* 008a158f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1591: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a1594: jmp 0x8a15b4 */ goto L_008a15b4;
L_008a1596:; BB(0x008a1596);
    /* 008a1596: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 008a1599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a159a: lea eax, [esi + 0xc8] */ r_eax = (u32)(r_esi+0xc8u);
    /* 008a15a0: push 0x99c1b0 */ { u32 v = 0x99c1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a15a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a15a6: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x8a15abu); f_00859b7a();
    /* 008a15ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a15ae:; BB(0x008a15ae);
    /* 008a15ae: lea ecx, [esi + 0x34] */ r_ecx = (u32)(r_esi+0x34u);
L_008a15b1:; BB(0x008a15b1);
    /* 008a15b1: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
L_008a15b4:; BB(0x008a15b4);
    /* 008a15b4: call 0x8a8961 */ r_esp -= 4; W32(r_esp, 0x8a15b9u); f_008a8961();
L_008a15b9:; BB(0x008a15b9);
    /* 008a15b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a15ba:; BB(0x008a15ba);
    /* 008a15ba: mov ecx, esi */ r_ecx = r_esi;
    /* 008a15bc: call 0x8a89cf */ r_esp -= 4; W32(r_esp, 0x8a15c1u); f_008a89cf();
    /* 008a15c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a15c3: jl 0x8a1601 */ if ((fS!=fO)) goto L_008a1601;
L_008a15c5:; BB(0x008a15c5);
    /* 008a15c5: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 008a15c8: call 0x8a89cf */ r_esp -= 4; W32(r_esp, 0x8a15cdu); f_008a89cf();
    /* 008a15cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a15cf: jl 0x8a1601 */ if ((fS!=fO)) goto L_008a1601;
L_008a15d1:; BB(0x008a15d1);
    /* 008a15d1: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008a15d4: call 0x8a89cf */ r_esp -= 4; W32(r_esp, 0x8a15d9u); f_008a89cf();
    /* 008a15d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a15db: jl 0x8a1601 */ if ((fS!=fO)) goto L_008a1601;
L_008a15dd:; BB(0x008a15dd);
    /* 008a15dd: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 008a15e0: call 0x8a89cf */ r_esp -= 4; W32(r_esp, 0x8a15e5u); f_008a89cf();
    /* 008a15e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a15e7: jl 0x8a1601 */ if ((fS!=fO)) goto L_008a1601;
L_008a15e9:; BB(0x008a15e9);
    /* 008a15e9: lea ecx, [esi + 0x74] */ r_ecx = (u32)(r_esi+0x74u);
    /* 008a15ec: call 0x8a89cf */ r_esp -= 4; W32(r_esp, 0x8a15f1u); f_008a89cf();
    /* 008a15f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a15f3: jl 0x8a1601 */ if ((fS!=fO)) goto L_008a1601;
L_008a15f5:; BB(0x008a15f5);
    /* 008a15f5: lea ecx, [esi + 0x34] */ r_ecx = (u32)(r_esi+0x34u);
    /* 008a15f8: call 0x8a89cf */ r_esp -= 4; W32(r_esp, 0x8a15fdu); f_008a89cf();
    /* 008a15fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a15ff: jge 0x8a1614 */ if ((fS==fO)) goto L_008a1614;
L_008a1601:; BB(0x008a1601);
    /* 008a1601: push 0x3bb */ { u32 v = 0x3bbu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1606: push 0x99c190 */ { u32 v = 0x99c190u; r_esp -= 4; W32(r_esp, v); }
    /* 008a160b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a160c: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a1611u); f_0089f848();
    /* 008a1611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008a1614:; BB(0x008a1614);
    /* 008a1614: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a1615: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a1616: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a1617: ret 4 */ FN_RET(0x008a0d8e); r_esp += 8; return;
}

