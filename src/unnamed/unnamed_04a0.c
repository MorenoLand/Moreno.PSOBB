#include "protos.h"

void f_004a0000(void)
{
    FN_ENTER(0x004a0000);
    /* 004a0000: or al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x004a0002, "falls out of decoded code");
}

void f_004a0004(void)
{
    FN_ENTER(0x004a0004);
    goto L_004a0004;
L_0049ff47:; BB(0x0049ff47);
    /* 0049ff47: mov ecx, dword ptr [edx - 8] */ r_ecx = R32((u32)(r_edx+0xfffffff8u));
    /* 0049ff4a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0049ff4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ff4e: je 0x4a000b */ if (fZ) goto L_004a000b;
L_0049ff54:; BB(0x0049ff54);
    /* 0049ff54: mov edi, dword ptr [edx - 4] */ r_edi = R32((u32)(r_edx+0xfffffffcu));
    /* 0049ff57: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0049ff5a: mov ebx, dword ptr [ebp + 0x24] */ r_ebx = R32((u32)(r_ebp+0x24u));
    /* 0049ff5d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff5f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff61: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff63: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff65: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff67: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049ff69: jae 0x4a000b */ if (!fC) goto L_004a000b;
L_0049ff6f:; BB(0x0049ff6f);
    /* 0049ff6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049ff71: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049ff73: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049ff76: jb 0x49ffeb */ if (fC) goto L_0049ffeb;
L_0049ff78:; BB(0x0049ff78);
    /* 0049ff78: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0049ff7c: lea ecx, [ebx - 0x50] */ r_ecx = (u32)(r_ebx+0xffffffb0u);
L_0049ff7f:; BB(0x0049ff7f);
    /* 0049ff7f: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0049ff81: mov dword ptr [esi], ebp */ W32((u32)(r_esi), r_ebp);
    /* 0049ff83: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 0049ff86: mov dword ptr [esi + 4], ebp */ W32((u32)(r_esi+0x4u), r_ebp);
    /* 0049ff89: mov ebp, dword ptr [edi + 8] */ r_ebp = R32((u32)(r_edi+0x8u));
    /* 0049ff8c: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0049ff8f: mov ebp, dword ptr [edi + 0xc] */ r_ebp = R32((u32)(r_edi+0xcu));
    /* 0049ff92: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 0049ff95: mov ebp, dword ptr [edi + 0x10] */ r_ebp = R32((u32)(r_edi+0x10u));
    /* 0049ff98: mov dword ptr [esi + 0x10], ebp */ W32((u32)(r_esi+0x10u), r_ebp);
    /* 0049ff9b: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 0049ff9e: mov dword ptr [esi + 0x14], ebp */ W32((u32)(r_esi+0x14u), r_ebp);
    /* 0049ffa1: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 0049ffa4: mov dword ptr [esi + 0x18], ebp */ W32((u32)(r_esi+0x18u), r_ebp);
    /* 0049ffa7: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 0049ffaa: mov dword ptr [esi + 0x1c], ebp */ W32((u32)(r_esi+0x1cu), r_ebp);
    /* 0049ffad: mov ebp, dword ptr [edi + 0x20] */ r_ebp = R32((u32)(r_edi+0x20u));
    /* 0049ffb0: mov dword ptr [esi + 0x20], ebp */ W32((u32)(r_esi+0x20u), r_ebp);
    /* 0049ffb3: mov ebp, dword ptr [edi + 0x24] */ r_ebp = R32((u32)(r_edi+0x24u));
    /* 0049ffb6: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 0049ffb9: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0049ffbc: mov dword ptr [esi + 0x28], ebp */ W32((u32)(r_esi+0x28u), r_ebp);
    /* 0049ffbf: mov ebp, dword ptr [edi + 0x2c] */ r_ebp = R32((u32)(r_edi+0x2cu));
    /* 0049ffc2: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 0049ffc5: mov ebp, dword ptr [edi + 0x30] */ r_ebp = R32((u32)(r_edi+0x30u));
    /* 0049ffc8: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 0049ffcb: mov ebp, dword ptr [edi + 0x34] */ r_ebp = R32((u32)(r_edi+0x34u));
    /* 0049ffce: mov dword ptr [esi + 0x34], ebp */ W32((u32)(r_esi+0x34u), r_ebp);
    /* 0049ffd1: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 0049ffd4: mov dword ptr [esi + 0x38], ebp */ W32((u32)(r_esi+0x38u), r_ebp);
    /* 0049ffd7: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 0049ffda: mov dword ptr [esi + 0x3c], ebp */ W32((u32)(r_esi+0x3cu), r_ebp);
    /* 0049ffdd: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049ffe0: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049ffe3: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ffe5: jbe 0x49ff7f */ if ((fC||fZ)) goto L_0049ff7f;
L_0049ffe7:; BB(0x0049ffe7);
    /* 0049ffe7: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0049ffeb:; BB(0x0049ffeb);
    /* 0049ffeb: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0049ffed: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0049ffef: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0049fff2: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0049fff5: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0049fff8: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0049fffb: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0049fffe: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004a0001: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004a0004:; BB(0x004a0004);
    /* 004a0004: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0007: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0009: jb 0x49ffeb */ if (fC) goto L_0049ffeb;
L_004a000b:; BB(0x004a000b);
    /* 004a000b: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a000e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a0010: ja 0x49ff47 */ if ((!fC&&!fZ)) goto L_0049ff47;
L_004a0016:; BB(0x004a0016);
    /* 004a0016: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004a001a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004a001d: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 004a0020: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004a0022: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004a0024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0026: je 0x4a00e1 */ if (fZ) goto L_004a00e1;
L_004a002c:; BB(0x004a002c);
    /* 004a002c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004a002f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a0032: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004a0035: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0037: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0039: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003d: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003f: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0041: jae 0x4a00e1 */ if (!fC) goto L_004a00e1;
L_004a0047:; BB(0x004a0047);
    /* 004a0047: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0049: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a004b: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a004e: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a0050:; BB(0x004a0050);
    /* 004a0050: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004a0053: lea edx, [ecx - 0x50] */ r_edx = (u32)(r_ecx+0xffffffb0u);
L_004a0056:; BB(0x004a0056);
    /* 004a0056: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004a0058: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004a005a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004a005d: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004a0060: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 004a0063: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 004a0066: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004a0069: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004a006c: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 004a006f: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004a0072: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 004a0075: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004a0078: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 004a007b: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 004a007e: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 004a0081: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004a0084: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 004a0087: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004a008a: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 004a008d: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004a0090: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 004a0093: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 004a0096: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 004a0099: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004a009c: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 004a009f: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 004a00a2: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 004a00a5: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004a00a8: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 004a00ab: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 004a00ae: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 004a00b1: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 004a00b4: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00b7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00ba: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a00bc: jbe 0x4a0056 */ if ((fC||fZ)) goto L_004a0056;
L_004a00be:; BB(0x004a00be);
    /* 004a00be: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004a00c1:; BB(0x004a00c1);
    /* 004a00c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004a00c3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004a00c5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a00c8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004a00cb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a00ce: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 004a00d1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004a00d4: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004a00d7: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00da: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00dd: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a00df: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a00e1:; BB(0x004a00e1);
    /* 004a00e1: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004a00e4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004a00ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a00ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a00ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a00ef: ret  */ FN_RET(0x004a0004); r_esp += 4; return;
}

void f_004a0009(void)
{
    FN_ENTER(0x004a0009);
    goto L_004a0009;
L_0049ff47:; BB(0x0049ff47);
    /* 0049ff47: mov ecx, dword ptr [edx - 8] */ r_ecx = R32((u32)(r_edx+0xfffffff8u));
    /* 0049ff4a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0049ff4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ff4e: je 0x4a000b */ if (fZ) goto L_004a000b;
L_0049ff54:; BB(0x0049ff54);
    /* 0049ff54: mov edi, dword ptr [edx - 4] */ r_edi = R32((u32)(r_edx+0xfffffffcu));
    /* 0049ff57: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0049ff5a: mov ebx, dword ptr [ebp + 0x24] */ r_ebx = R32((u32)(r_ebp+0x24u));
    /* 0049ff5d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff5f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff61: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff63: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff65: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff67: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049ff69: jae 0x4a000b */ if (!fC) goto L_004a000b;
L_0049ff6f:; BB(0x0049ff6f);
    /* 0049ff6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049ff71: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049ff73: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049ff76: jb 0x49ffeb */ if (fC) goto L_0049ffeb;
L_0049ff78:; BB(0x0049ff78);
    /* 0049ff78: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0049ff7c: lea ecx, [ebx - 0x50] */ r_ecx = (u32)(r_ebx+0xffffffb0u);
L_0049ff7f:; BB(0x0049ff7f);
    /* 0049ff7f: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0049ff81: mov dword ptr [esi], ebp */ W32((u32)(r_esi), r_ebp);
    /* 0049ff83: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 0049ff86: mov dword ptr [esi + 4], ebp */ W32((u32)(r_esi+0x4u), r_ebp);
    /* 0049ff89: mov ebp, dword ptr [edi + 8] */ r_ebp = R32((u32)(r_edi+0x8u));
    /* 0049ff8c: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0049ff8f: mov ebp, dword ptr [edi + 0xc] */ r_ebp = R32((u32)(r_edi+0xcu));
    /* 0049ff92: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 0049ff95: mov ebp, dword ptr [edi + 0x10] */ r_ebp = R32((u32)(r_edi+0x10u));
    /* 0049ff98: mov dword ptr [esi + 0x10], ebp */ W32((u32)(r_esi+0x10u), r_ebp);
    /* 0049ff9b: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 0049ff9e: mov dword ptr [esi + 0x14], ebp */ W32((u32)(r_esi+0x14u), r_ebp);
    /* 0049ffa1: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 0049ffa4: mov dword ptr [esi + 0x18], ebp */ W32((u32)(r_esi+0x18u), r_ebp);
    /* 0049ffa7: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 0049ffaa: mov dword ptr [esi + 0x1c], ebp */ W32((u32)(r_esi+0x1cu), r_ebp);
    /* 0049ffad: mov ebp, dword ptr [edi + 0x20] */ r_ebp = R32((u32)(r_edi+0x20u));
    /* 0049ffb0: mov dword ptr [esi + 0x20], ebp */ W32((u32)(r_esi+0x20u), r_ebp);
    /* 0049ffb3: mov ebp, dword ptr [edi + 0x24] */ r_ebp = R32((u32)(r_edi+0x24u));
    /* 0049ffb6: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 0049ffb9: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0049ffbc: mov dword ptr [esi + 0x28], ebp */ W32((u32)(r_esi+0x28u), r_ebp);
    /* 0049ffbf: mov ebp, dword ptr [edi + 0x2c] */ r_ebp = R32((u32)(r_edi+0x2cu));
    /* 0049ffc2: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 0049ffc5: mov ebp, dword ptr [edi + 0x30] */ r_ebp = R32((u32)(r_edi+0x30u));
    /* 0049ffc8: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 0049ffcb: mov ebp, dword ptr [edi + 0x34] */ r_ebp = R32((u32)(r_edi+0x34u));
    /* 0049ffce: mov dword ptr [esi + 0x34], ebp */ W32((u32)(r_esi+0x34u), r_ebp);
    /* 0049ffd1: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 0049ffd4: mov dword ptr [esi + 0x38], ebp */ W32((u32)(r_esi+0x38u), r_ebp);
    /* 0049ffd7: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 0049ffda: mov dword ptr [esi + 0x3c], ebp */ W32((u32)(r_esi+0x3cu), r_ebp);
    /* 0049ffdd: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049ffe0: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049ffe3: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ffe5: jbe 0x49ff7f */ if ((fC||fZ)) goto L_0049ff7f;
L_0049ffe7:; BB(0x0049ffe7);
    /* 0049ffe7: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0049ffeb:; BB(0x0049ffeb);
    /* 0049ffeb: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0049ffed: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0049ffef: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0049fff2: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0049fff5: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0049fff8: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0049fffb: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0049fffe: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004a0001: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0004: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0007: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
L_004a0009:; BB(0x004a0009);
    /* 004a0009: jb 0x49ffeb */ if (fC) goto L_0049ffeb;
L_004a000b:; BB(0x004a000b);
    /* 004a000b: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a000e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a0010: ja 0x49ff47 */ if ((!fC&&!fZ)) goto L_0049ff47;
L_004a0016:; BB(0x004a0016);
    /* 004a0016: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004a001a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004a001d: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 004a0020: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004a0022: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004a0024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0026: je 0x4a00e1 */ if (fZ) goto L_004a00e1;
L_004a002c:; BB(0x004a002c);
    /* 004a002c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004a002f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a0032: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004a0035: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0037: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0039: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003d: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003f: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0041: jae 0x4a00e1 */ if (!fC) goto L_004a00e1;
L_004a0047:; BB(0x004a0047);
    /* 004a0047: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0049: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a004b: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a004e: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a0050:; BB(0x004a0050);
    /* 004a0050: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004a0053: lea edx, [ecx - 0x50] */ r_edx = (u32)(r_ecx+0xffffffb0u);
L_004a0056:; BB(0x004a0056);
    /* 004a0056: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004a0058: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004a005a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004a005d: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004a0060: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 004a0063: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 004a0066: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004a0069: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004a006c: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 004a006f: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004a0072: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 004a0075: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004a0078: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 004a007b: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 004a007e: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 004a0081: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004a0084: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 004a0087: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004a008a: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 004a008d: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004a0090: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 004a0093: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 004a0096: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 004a0099: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004a009c: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 004a009f: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 004a00a2: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 004a00a5: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004a00a8: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 004a00ab: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 004a00ae: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 004a00b1: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 004a00b4: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00b7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00ba: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a00bc: jbe 0x4a0056 */ if ((fC||fZ)) goto L_004a0056;
L_004a00be:; BB(0x004a00be);
    /* 004a00be: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004a00c1:; BB(0x004a00c1);
    /* 004a00c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004a00c3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004a00c5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a00c8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004a00cb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a00ce: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 004a00d1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004a00d4: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004a00d7: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00da: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00dd: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a00df: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a00e1:; BB(0x004a00e1);
    /* 004a00e1: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004a00e4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004a00ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a00ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a00ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a00ef: ret  */ FN_RET(0x004a0009); r_esp += 4; return;
}

void f_004a005f(void)
{
    FN_ENTER(0x004a005f);
    goto L_004a005f;
L_004a0056:; BB(0x004a0056);
    /* 004a0056: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004a0058: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004a005a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004a005d: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
L_004a005f:; BB(0x004a005f);
    /* 004a005f: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 004a0060: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 004a0061: jo 0x4a006b */ if (fO) goto L_004a006b;
L_004a0063:; BB(0x004a0063);
    /* 004a0063: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 004a0066: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004a0069: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
L_004a006b:; BB(0x004a006b);
    /* 004a006b: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fO = 0; }
    /* 004a006c: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 004a006d: jo 0x4a007f */ if (fO) goto L_004a007f;
L_004a006f:; BB(0x004a006f);
    /* 004a006f: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004a0072: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 004a0075: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004a0078: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 004a007b: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 004a007e: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
L_004a007f:; BB(0x004a007f);
    /* 004a007f: jo 0x4a009d */ if (fO) goto L_004a009d;
L_004a0081:; BB(0x004a0081);
    /* 004a0081: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004a0084: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 004a0087: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004a008a: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 004a008d: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004a0090: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 004a0093: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 004a0096: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 004a0099: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004a009c: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
L_004a009d:; BB(0x004a009d);
    /* 004a009d: jo 0x4a00cf */ if (fO) goto L_004a00cf;
L_004a009f:; BB(0x004a009f);
    /* 004a009f: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 004a00a2: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 004a00a5: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004a00a8: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 004a00ab: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 004a00ae: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 004a00b1: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 004a00b4: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00b7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00ba: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a00bc: jbe 0x4a0056 */ if ((fC||fZ)) goto L_004a0056;
L_004a00be:; BB(0x004a00be);
    /* 004a00be: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004a00c1:; BB(0x004a00c1);
    /* 004a00c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004a00c3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004a00c5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a00c8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004a00cb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a00ce: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
L_004a00cf:; BB(0x004a00cf);
    /* 004a00cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a00d0: or byte ptr [ebx + 0x57890c50], cl */ { u32 ad = (u32)(r_ebx+0x57890c50u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004a00d1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004a00d4: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004a00d6: or al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x004a00d8, "falls out of decoded code");
    /* 004a00d7: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00da: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00dd: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a00df: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a00e1:; BB(0x004a00e1);
    /* 004a00e1: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004a00e4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004a00ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a00ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a00ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a00ef: ret  */ FN_RET(0x004a005f); r_esp += 4; return;
}

void f_004a00f8(void) /* sub_4A00F8 */
{
    FN_ENTER(0x004a00f8);
    /* 004a00f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a00f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a00fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a00fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a00fc: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a0102: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a0104: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4a0109u); f_007a9380();
    /* 004a0109: fild dword ptr [ebx + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x28u)));
    /* 004a010c: fld dword ptr [0x9037a8] */ FPUSH(R_F32((u32)(0x9037a8u)));
    /* 004a0112: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 004a0114: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004a0117: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004a011a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004a011c: mov edx, ecx */ r_edx = r_ecx;
    /* 004a011e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0120: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0122: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0124: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0126: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0128: jae 0x4a03ea */ if (!fC) goto L_004a03ea;
L_004a012e:; BB(0x004a012e);
    /* 004a012e: fldz  */ FPUSH(0.0);
    /* 004a0130: lea edi, [eax - 8] */ r_edi = (u32)(r_eax+0xfffffff8u);
    /* 004a0133: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004a0137: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a0139: jmp 0x4a013e */ goto L_004a013e;
L_004a013b:; BB(0x004a013b);
    /* 004a013b: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_004a013e:; BB(0x004a013e);
    /* 004a013e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0140: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a0146:; BB(0x004a0146);
    /* 004a0146: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a0148: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a014a: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a0150:; BB(0x004a0150);
    /* 004a0150: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 004a0153: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0155: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a015b:; BB(0x004a015b);
    /* 004a015b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a015d: jne 0x4a0169 */ if (!fZ) goto L_004a0169;
L_004a015f:; BB(0x004a015f);
    /* 004a015f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a0161: fld dword ptr [0x9037a4] */ FPUSH(R_F32((u32)(0x9037a4u)));
    /* 004a0167: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004a0169:; BB(0x004a0169);
    /* 004a0169: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004a016b: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 004a016f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0171: je 0x4a03ca */ if (fZ) goto L_004a03ca;
L_004a0177:; BB(0x004a0177);
    /* 004a0177: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 004a017a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004a017c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a017e: jne 0x4a0188 */ if (!fZ) goto L_004a0188;
L_004a0180:; BB(0x004a0180);
    /* 004a0180: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a0182:; BB(0x004a0182);
    /* 004a0182: fld dword ptr [0x9037a4] */ FPUSH(R_F32((u32)(0x9037a4u)));
L_004a0188:; BB(0x004a0188);
    /* 004a0188: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 004a0193: lea edi, [esp + 0x4c] */ r_edi = (u32)(r_esp+0x4cu);
    /* 004a0197: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 004a019e: mov dword ptr [esp + 0x98], 4 */ W32((u32)(r_esp+0x98u), 0x4u);
    /* 004a01a9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a01ab: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004a01af: mov dword ptr [esp + 0x8c], esi */ W32((u32)(r_esp+0x8cu), r_esi);
    /* 004a01b6: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 004a01b9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a01be: jle 0x4a03f0 */ if ((fZ||fS!=fO)) goto L_004a03f0;
L_004a01c4:; BB(0x004a01c4);
    /* 004a01c4: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004a01c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a01ca: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a01ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a01d0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004a01d4: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004a01d8: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 004a01dc: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004a01df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004a01e3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01e5: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004a01e9: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 004a01ed: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01ef: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004a01f1:; BB(0x004a01f1);
    /* 004a01f1: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004a01f5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004a01f9: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 004a01fc: mov eax, dword ptr [esi + ecx] */ r_eax = R32((u32)(r_esi+r_ecx));
    /* 004a01ff: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004a0203: movzx eax, byte ptr [esi + ecx + 3] */ r_eax = (u32)R8((u32)(r_esi+r_ecx+0x3u));
    /* 004a0208: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a020b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a020e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004a0210: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a0214: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a021e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a0222: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0226: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a022a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a022e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004a0232: mov byte ptr [esp + 0x4f], dl */ W8((u32)(r_esp+0x4fu), (u8)r_edx);
    /* 004a0236: mov eax, dword ptr [esi + ecx + 4] */ r_eax = R32((u32)(r_esi+r_ecx+0x4u));
    /* 004a023a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004a023e: mov eax, dword ptr [esi + ecx + 8] */ r_eax = R32((u32)(r_esi+r_ecx+0x8u));
    /* 004a0242: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004a0246: mov eax, dword ptr [esi + ecx + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx+0xcu));
    /* 004a024a: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004a024e: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004a0251: mov eax, dword ptr [esi + edx + 0x10] */ r_eax = R32((u32)(r_esi+r_edx+0x10u));
    /* 004a0255: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004a0259: movzx eax, byte ptr [esi + edx + 0x13] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x13u));
    /* 004a025e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a0262: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a0266: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a0268: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a026a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a026e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0273: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0278: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a027c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0280: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a0284: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a0288: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004a028c: mov byte ptr [esp + 0x53], cl */ W8((u32)(r_esp+0x53u), (u8)r_ecx);
    /* 004a0290: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004a0294: mov eax, dword ptr [esi + edx + 0x14] */ r_eax = R32((u32)(r_esi+r_edx+0x14u));
    /* 004a0298: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004a029c: mov eax, dword ptr [esi + edx + 0x18] */ r_eax = R32((u32)(r_esi+r_edx+0x18u));
    /* 004a02a0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 004a02a4: mov eax, dword ptr [esi + edx + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx+0x1cu));
    /* 004a02a8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 004a02ac: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a02af: mov eax, dword ptr [esi + edx + 0x10] */ r_eax = R32((u32)(r_esi+r_edx+0x10u));
    /* 004a02b3: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004a02b7: movzx eax, byte ptr [esi + edx + 0x13] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x13u));
    /* 004a02bc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a02c0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a02c4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a02c6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a02ca: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a02cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a02d4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a02d8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a02dc: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a02e0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a02e4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 004a02e8: mov byte ptr [esp + 0x57], bl */ W8((u32)(r_esp+0x57u), (u8)r_ebx);
    /* 004a02ec: mov eax, dword ptr [esi + edx + 0x14] */ r_eax = R32((u32)(r_esi+r_edx+0x14u));
    /* 004a02f0: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004a02f4: mov eax, dword ptr [esi + edx + 0x18] */ r_eax = R32((u32)(r_esi+r_edx+0x18u));
    /* 004a02f8: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004a02fc: mov eax, dword ptr [esi + edx + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx+0x1cu));
    /* 004a0300: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004a0304: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a0307: mov eax, dword ptr [esi + edx] */ r_eax = R32((u32)(r_esi+r_edx));
    /* 004a030a: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004a030e: movzx eax, byte ptr [esi + edx + 3] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x3u));
    /* 004a0313: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a0317: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a031b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a031d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a0321: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0326: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a032b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a032f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0333: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a0337: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a033b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a033f: mov byte ptr [esp + 0x5b], al */ W8((u32)(r_esp+0x5bu), (u8)r_eax);
    /* 004a0343: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 004a0347: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 004a034e: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 004a0352: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004a0359: mov eax, dword ptr [esi + edx + 0xc] */ r_eax = R32((u32)(r_esi+r_edx+0xcu));
    /* 004a035d: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 004a0364: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 004a036b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004a036d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a036f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0370: call 0x82c0d8 */ r_esp -= 4; W32(r_esp, 0x4a0375u); f_0082c0d8();
    /* 004a0375: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0378: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004a037c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004a037f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0382: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0385: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a0388: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a038a: jl 0x4a01f1 */ if ((fS!=fO)) goto L_004a01f1;
L_004a0390:; BB(0x004a0390);
    /* 004a0390: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 004a0394: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004a0398: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004a039c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004a03a0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004a03a4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
L_004a03a8:; BB(0x004a03a8);
    /* 004a03a8: mov esi, 1 */ r_esi = 0x1u;
    /* 004a03ad: jmp 0x4a03b6 */ goto L_004a03b6;
L_004a03af:; BB(0x004a03af);
    /* 004a03af: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03b1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004a03b3: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
L_004a03b6:; BB(0x004a03b6);
    /* 004a03b6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004a03b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a03ba: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004a03bc: mov ebp, edx */ r_ebp = r_edx;
    /* 004a03be: mov edx, ecx */ r_edx = r_ecx;
    /* 004a03c0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a03c2: jb 0x4a013b */ if (fC) goto L_004a013b;
L_004a03c8:; BB(0x004a03c8);
    /* 004a03c8: jmp 0x4a03d4 */ goto L_004a03d4;
L_004a03ca:; BB(0x004a03ca);
    /* 004a03ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a03cc: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 004a03cf: jmp 0x4a0182 */ goto L_004a0182;
L_004a03d4:; BB(0x004a03d4);
    /* 004a03d4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03d6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03d8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a03da:; BB(0x004a03da);
    /* 004a03da: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4a03dfu); f_007a9318();
    /* 004a03df: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a03e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a03e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a03e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a03e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a03e9: ret  */ FN_RET(0x004a00f8); r_esp += 4; return;
L_004a03ea:; BB(0x004a03ea);
    /* 004a03ea: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a03ee: jmp 0x4a03da */ goto L_004a03da;
L_004a03f0:; BB(0x004a03f0);
    /* 004a03f0: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004a03f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03f4: jmp 0x4a03a8 */ goto L_004a03a8;
}

void f_004a0208(void)
{
    FN_ENTER(0x004a0208);
    goto L_004a0208;
L_004a013b:; BB(0x004a013b);
    /* 004a013b: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004a013e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0140: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a0146:; BB(0x004a0146);
    /* 004a0146: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a0148: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a014a: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a0150:; BB(0x004a0150);
    /* 004a0150: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 004a0153: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0155: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a015b:; BB(0x004a015b);
    /* 004a015b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a015d: jne 0x4a0169 */ if (!fZ) goto L_004a0169;
L_004a015f:; BB(0x004a015f);
    /* 004a015f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a0161: fld dword ptr [0x9037a4] */ FPUSH(R_F32((u32)(0x9037a4u)));
    /* 004a0167: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004a0169:; BB(0x004a0169);
    /* 004a0169: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004a016b: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 004a016f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0171: je 0x4a03ca */ if (fZ) goto L_004a03ca;
L_004a0177:; BB(0x004a0177);
    /* 004a0177: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 004a017a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004a017c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a017e: jne 0x4a0188 */ if (!fZ) goto L_004a0188;
L_004a0180:; BB(0x004a0180);
    /* 004a0180: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a0182:; BB(0x004a0182);
    /* 004a0182: fld dword ptr [0x9037a4] */ FPUSH(R_F32((u32)(0x9037a4u)));
L_004a0188:; BB(0x004a0188);
    /* 004a0188: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 004a0193: lea edi, [esp + 0x4c] */ r_edi = (u32)(r_esp+0x4cu);
    /* 004a0197: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 004a019e: mov dword ptr [esp + 0x98], 4 */ W32((u32)(r_esp+0x98u), 0x4u);
    /* 004a01a9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a01ab: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004a01af: mov dword ptr [esp + 0x8c], esi */ W32((u32)(r_esp+0x8cu), r_esi);
    /* 004a01b6: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 004a01b9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a01be: jle 0x4a03f0 */ if ((fZ||fS!=fO)) goto L_004a03f0;
L_004a01c4:; BB(0x004a01c4);
    /* 004a01c4: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004a01c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a01ca: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a01ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a01d0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004a01d4: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004a01d8: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 004a01dc: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004a01df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004a01e3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01e5: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004a01e9: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 004a01ed: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01ef: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004a01f1:; BB(0x004a01f1);
    /* 004a01f1: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004a01f5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004a01f9: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 004a01fc: mov eax, dword ptr [esi + ecx] */ r_eax = R32((u32)(r_esi+r_ecx));
    /* 004a01ff: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004a0203: movzx eax, byte ptr [esi + ecx + 3] */ r_eax = (u32)R8((u32)(r_esi+r_ecx+0x3u));
L_004a0208:; BB(0x004a0208);
    /* 004a0208: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a020b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a020e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004a0210: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a0214: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a021e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a0222: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0226: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a022a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a022e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004a0232: mov byte ptr [esp + 0x4f], dl */ W8((u32)(r_esp+0x4fu), (u8)r_edx);
    /* 004a0236: mov eax, dword ptr [esi + ecx + 4] */ r_eax = R32((u32)(r_esi+r_ecx+0x4u));
    /* 004a023a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004a023e: mov eax, dword ptr [esi + ecx + 8] */ r_eax = R32((u32)(r_esi+r_ecx+0x8u));
    /* 004a0242: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004a0246: mov eax, dword ptr [esi + ecx + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx+0xcu));
    /* 004a024a: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004a024e: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004a0251: mov eax, dword ptr [esi + edx + 0x10] */ r_eax = R32((u32)(r_esi+r_edx+0x10u));
    /* 004a0255: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004a0259: movzx eax, byte ptr [esi + edx + 0x13] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x13u));
    /* 004a025e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a0262: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a0266: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a0268: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a026a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a026e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0273: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0278: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a027c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0280: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a0284: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a0288: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004a028c: mov byte ptr [esp + 0x53], cl */ W8((u32)(r_esp+0x53u), (u8)r_ecx);
    /* 004a0290: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004a0294: mov eax, dword ptr [esi + edx + 0x14] */ r_eax = R32((u32)(r_esi+r_edx+0x14u));
    /* 004a0298: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004a029c: mov eax, dword ptr [esi + edx + 0x18] */ r_eax = R32((u32)(r_esi+r_edx+0x18u));
    /* 004a02a0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 004a02a4: mov eax, dword ptr [esi + edx + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx+0x1cu));
    /* 004a02a8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 004a02ac: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a02af: mov eax, dword ptr [esi + edx + 0x10] */ r_eax = R32((u32)(r_esi+r_edx+0x10u));
    /* 004a02b3: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004a02b7: movzx eax, byte ptr [esi + edx + 0x13] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x13u));
    /* 004a02bc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a02c0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a02c4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a02c6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a02ca: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a02cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a02d4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a02d8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a02dc: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a02e0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a02e4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 004a02e8: mov byte ptr [esp + 0x57], bl */ W8((u32)(r_esp+0x57u), (u8)r_ebx);
    /* 004a02ec: mov eax, dword ptr [esi + edx + 0x14] */ r_eax = R32((u32)(r_esi+r_edx+0x14u));
    /* 004a02f0: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004a02f4: mov eax, dword ptr [esi + edx + 0x18] */ r_eax = R32((u32)(r_esi+r_edx+0x18u));
    /* 004a02f8: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004a02fc: mov eax, dword ptr [esi + edx + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx+0x1cu));
    /* 004a0300: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004a0304: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a0307: mov eax, dword ptr [esi + edx] */ r_eax = R32((u32)(r_esi+r_edx));
    /* 004a030a: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004a030e: movzx eax, byte ptr [esi + edx + 3] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x3u));
    /* 004a0313: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a0317: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a031b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a031d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a0321: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0326: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a032b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a032f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0333: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a0337: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a033b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a033f: mov byte ptr [esp + 0x5b], al */ W8((u32)(r_esp+0x5bu), (u8)r_eax);
    /* 004a0343: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 004a0347: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 004a034e: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 004a0352: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004a0359: mov eax, dword ptr [esi + edx + 0xc] */ r_eax = R32((u32)(r_esi+r_edx+0xcu));
    /* 004a035d: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 004a0364: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 004a036b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004a036d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a036f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0370: call 0x82c0d8 */ r_esp -= 4; W32(r_esp, 0x4a0375u); f_0082c0d8();
    /* 004a0375: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0378: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004a037c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004a037f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0382: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0385: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a0388: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a038a: jl 0x4a01f1 */ if ((fS!=fO)) goto L_004a01f1;
L_004a0390:; BB(0x004a0390);
    /* 004a0390: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 004a0394: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004a0398: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004a039c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004a03a0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004a03a4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
L_004a03a8:; BB(0x004a03a8);
    /* 004a03a8: mov esi, 1 */ r_esi = 0x1u;
    /* 004a03ad: jmp 0x4a03b6 */ goto L_004a03b6;
L_004a03af:; BB(0x004a03af);
    /* 004a03af: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03b1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004a03b3: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
L_004a03b6:; BB(0x004a03b6);
    /* 004a03b6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004a03b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a03ba: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004a03bc: mov ebp, edx */ r_ebp = r_edx;
    /* 004a03be: mov edx, ecx */ r_edx = r_ecx;
    /* 004a03c0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a03c2: jb 0x4a013b */ if (fC) goto L_004a013b;
L_004a03c8:; BB(0x004a03c8);
    /* 004a03c8: jmp 0x4a03d4 */ goto L_004a03d4;
L_004a03ca:; BB(0x004a03ca);
    /* 004a03ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a03cc: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 004a03cf: jmp 0x4a0182 */ goto L_004a0182;
L_004a03d4:; BB(0x004a03d4);
    /* 004a03d4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03d6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a03da: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4a03dfu); f_007a9318();
    /* 004a03df: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a03e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a03e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a03e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a03e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a03e9: ret  */ FN_RET(0x004a0208); r_esp += 4; return;
L_004a03f0:; BB(0x004a03f0);
    /* 004a03f0: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004a03f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03f4: jmp 0x4a03a8 */ goto L_004a03a8;
}

void f_004a023f(void)
{
    FN_ENTER(0x004a023f);
    goto L_004a023f;
L_004a013b:; BB(0x004a013b);
    /* 004a013b: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004a013e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0140: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a0146:; BB(0x004a0146);
    /* 004a0146: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a0148: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a014a: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a0150:; BB(0x004a0150);
    /* 004a0150: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 004a0153: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0155: je 0x4a03af */ if (fZ) goto L_004a03af;
L_004a015b:; BB(0x004a015b);
    /* 004a015b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a015d: jne 0x4a0169 */ if (!fZ) goto L_004a0169;
L_004a015f:; BB(0x004a015f);
    /* 004a015f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a0161: fld dword ptr [0x9037a4] */ FPUSH(R_F32((u32)(0x9037a4u)));
    /* 004a0167: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004a0169:; BB(0x004a0169);
    /* 004a0169: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004a016b: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 004a016f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0171: je 0x4a03ca */ if (fZ) goto L_004a03ca;
L_004a0177:; BB(0x004a0177);
    /* 004a0177: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 004a017a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004a017c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a017e: jne 0x4a0188 */ if (!fZ) goto L_004a0188;
L_004a0180:; BB(0x004a0180);
    /* 004a0180: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a0182:; BB(0x004a0182);
    /* 004a0182: fld dword ptr [0x9037a4] */ FPUSH(R_F32((u32)(0x9037a4u)));
L_004a0188:; BB(0x004a0188);
    /* 004a0188: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 004a0193: lea edi, [esp + 0x4c] */ r_edi = (u32)(r_esp+0x4cu);
    /* 004a0197: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 004a019e: mov dword ptr [esp + 0x98], 4 */ W32((u32)(r_esp+0x98u), 0x4u);
    /* 004a01a9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a01ab: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004a01af: mov dword ptr [esp + 0x8c], esi */ W32((u32)(r_esp+0x8cu), r_esi);
    /* 004a01b6: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 004a01b9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a01be: jle 0x4a03f0 */ if ((fZ||fS!=fO)) goto L_004a03f0;
L_004a01c4:; BB(0x004a01c4);
    /* 004a01c4: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004a01c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a01ca: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a01ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a01d0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004a01d4: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004a01d8: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 004a01dc: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 004a01df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004a01e3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01e5: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004a01e9: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 004a01ed: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a01ef: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004a01f1:; BB(0x004a01f1);
    /* 004a01f1: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004a01f5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004a01f9: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 004a01fc: mov eax, dword ptr [esi + ecx] */ r_eax = R32((u32)(r_esi+r_ecx));
    /* 004a01ff: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004a0203: movzx eax, byte ptr [esi + ecx + 3] */ r_eax = (u32)R8((u32)(r_esi+r_ecx+0x3u));
    /* 004a0208: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a020b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a020e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004a0210: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a0214: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a021e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a0222: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0226: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a022a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a022e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004a0232: mov byte ptr [esp + 0x4f], dl */ W8((u32)(r_esp+0x4fu), (u8)r_edx);
    /* 004a0236: mov eax, dword ptr [esi + ecx + 4] */ r_eax = R32((u32)(r_esi+r_ecx+0x4u));
    /* 004a023a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004a023e: mov eax, dword ptr [esi + ecx + 8] */ r_eax = R32((u32)(r_esi+r_ecx+0x8u));
L_004a023f:; BB(0x004a023f);
    /* 004a023f: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0240: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0241: or byte ptr [ecx - 0x749fdbbc], cl */ { u32 ad = (u32)(r_ecx+0x8b602444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004a0242: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004a0246: mov eax, dword ptr [esi + ecx + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx+0xcu));
    /* 004a0247: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0248: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0249: or al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004a024a: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004a024b: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a024c: and al, 0x64 */ {  u32 a = (u8)r_eax; u32 b = 0x64u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004a024e: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004a0251: mov eax, dword ptr [esi + edx + 0x10] */ r_eax = R32((u32)(r_esi+r_edx+0x10u));
    /* 004a0255: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004a0259: movzx eax, byte ptr [esi + edx + 0x13] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x13u));
    /* 004a025e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a0262: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a0266: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a0268: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a026a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a026e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0273: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0278: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a027c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0280: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a0284: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a0288: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004a028c: mov byte ptr [esp + 0x53], cl */ W8((u32)(r_esp+0x53u), (u8)r_ecx);
    /* 004a0290: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004a0294: mov eax, dword ptr [esi + edx + 0x14] */ r_eax = R32((u32)(r_esi+r_edx+0x14u));
    /* 004a0298: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004a029c: mov eax, dword ptr [esi + edx + 0x18] */ r_eax = R32((u32)(r_esi+r_edx+0x18u));
    /* 004a02a0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 004a02a4: mov eax, dword ptr [esi + edx + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx+0x1cu));
    /* 004a02a8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 004a02ac: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a02af: mov eax, dword ptr [esi + edx + 0x10] */ r_eax = R32((u32)(r_esi+r_edx+0x10u));
    /* 004a02b3: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004a02b7: movzx eax, byte ptr [esi + edx + 0x13] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x13u));
    /* 004a02bc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a02c0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a02c4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a02c6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a02ca: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a02cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a02d4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a02d8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a02dc: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a02e0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a02e4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 004a02e8: mov byte ptr [esp + 0x57], bl */ W8((u32)(r_esp+0x57u), (u8)r_ebx);
    /* 004a02ec: mov eax, dword ptr [esi + edx + 0x14] */ r_eax = R32((u32)(r_esi+r_edx+0x14u));
    /* 004a02f0: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004a02f4: mov eax, dword ptr [esi + edx + 0x18] */ r_eax = R32((u32)(r_esi+r_edx+0x18u));
    /* 004a02f8: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004a02fc: mov eax, dword ptr [esi + edx + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx+0x1cu));
    /* 004a0300: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004a0304: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a0307: mov eax, dword ptr [esi + edx] */ r_eax = R32((u32)(r_esi+r_edx));
    /* 004a030a: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004a030e: movzx eax, byte ptr [esi + edx + 3] */ r_eax = (u32)R8((u32)(r_esi+r_edx+0x3u));
    /* 004a0313: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a0317: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004a031b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a031d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004a0321: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004a0326: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a032b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a032f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a0333: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a0337: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a033b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a033f: mov byte ptr [esp + 0x5b], al */ W8((u32)(r_esp+0x5bu), (u8)r_eax);
    /* 004a0343: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 004a0347: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 004a034e: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 004a0352: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004a0359: mov eax, dword ptr [esi + edx + 0xc] */ r_eax = R32((u32)(r_esi+r_edx+0xcu));
    /* 004a035d: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 004a0364: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 004a036b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004a036d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a036f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0370: call 0x82c0d8 */ r_esp -= 4; W32(r_esp, 0x4a0375u); f_0082c0d8();
    /* 004a0375: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0378: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004a037c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004a037f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0382: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0385: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a0388: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a038a: jl 0x4a01f1 */ if ((fS!=fO)) goto L_004a01f1;
L_004a0390:; BB(0x004a0390);
    /* 004a0390: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 004a0394: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004a0398: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004a039c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004a03a0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004a03a4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
L_004a03a8:; BB(0x004a03a8);
    /* 004a03a8: mov esi, 1 */ r_esi = 0x1u;
    /* 004a03ad: jmp 0x4a03b6 */ goto L_004a03b6;
L_004a03af:; BB(0x004a03af);
    /* 004a03af: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03b1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004a03b3: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
L_004a03b6:; BB(0x004a03b6);
    /* 004a03b6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004a03b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a03ba: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004a03bc: mov ebp, edx */ r_ebp = r_edx;
    /* 004a03be: mov edx, ecx */ r_edx = r_ecx;
    /* 004a03c0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a03c2: jb 0x4a013b */ if (fC) goto L_004a013b;
L_004a03c8:; BB(0x004a03c8);
    /* 004a03c8: jmp 0x4a03d4 */ goto L_004a03d4;
L_004a03ca:; BB(0x004a03ca);
    /* 004a03ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a03cc: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 004a03cf: jmp 0x4a0182 */ goto L_004a0182;
L_004a03d4:; BB(0x004a03d4);
    /* 004a03d4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03d6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a03da: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4a03dfu); f_007a9318();
    /* 004a03df: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a03e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a03e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a03e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a03e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a03e9: ret  */ FN_RET(0x004a023f); r_esp += 4; return;
L_004a03f0:; BB(0x004a03f0);
    /* 004a03f0: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004a03f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a03f4: jmp 0x4a03a8 */ goto L_004a03a8;
}

void f_004a03f8(void) /* sub_4A03F8 */
{
    FN_ENTER(0x004a03f8);
    /* 004a03f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a03f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004a03fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a03fd: push 0x8d03b6 */ { u32 v = 0x8d03b6u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0402: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a0408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0409: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a0410: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a0413: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a0416: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a0419: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a041c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a041f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a0421: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a0428: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a042du); f_005caba4();
    /* 004a042d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a0430: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0433: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004a0436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0438: je 0x4a0532 */ if (fZ) goto L_004a0532;
L_004a043e:; BB(0x004a043e);
    /* 004a043e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004a0445: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a044c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a044f: mov ecx, eax */ r_ecx = r_eax;
    /* 004a0451: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004a0454: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4a0459u); f_008193cc();
    /* 004a0459: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004a0460: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a0463: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004a0466: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 004a0469: mov ebx, 2 */ r_ebx = 0x2u;
    /* 004a046e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a0471: mov dword ptr [eax], 0xaf9bb8 */ W32((u32)(r_eax), 0xaf9bb8u);
    /* 004a0477: mov edx, dword ptr [0x9a79e0] */ r_edx = R32((u32)(0x9a79e0u));
    /* 004a047d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004a0480: jg 0x4a0484 */ if ((!fZ&&fS==fO)) goto L_004a0484;
L_004a0482:; BB(0x004a0482);
    /* 004a0482: mov ecx, ebx */ r_ecx = r_ebx;
L_004a0484:; BB(0x004a0484);
    /* 004a0484: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 004a0487: mov edi, 2 */ r_edi = 0x2u;
    /* 004a048c: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a048f: jg 0x4a0493 */ if ((!fZ&&fS==fO)) goto L_004a0493;
L_004a0491:; BB(0x004a0491);
    /* 004a0491: mov esi, edi */ r_esi = r_edi;
L_004a0493:; BB(0x004a0493);
    /* 004a0493: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 004a0496: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0498: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a049a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a049c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a049d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4a04a2u); f_008581c5();
    /* 004a04a2: mov esi, eax */ r_esi = r_eax;
    /* 004a04a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a04a7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a04aa: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 004a04ad: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 004a04b0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a04b2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a04b4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a04b6: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a04b8: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a04ba: jae 0x4a04e1 */ if (!fC) goto L_004a04e1;
L_004a04bc:; BB(0x004a04bc);
    /* 004a04bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a04bf: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 004a04c5: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004a04c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a04ca: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a04cc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a04ce: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a04d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a04d1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4a04d6u); f_008581c5();
    /* 004a04d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a04d7: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004a04da: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a04dd: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a04df: jb 0x4a04bc */ if (fC) goto L_004a04bc;
L_004a04e1:; BB(0x004a04e1);
    /* 004a04e1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004a04e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4a04e8u); f_008581c5();
    /* 004a04e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a04eb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004a04ee: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004a04f4: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004a04f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a04f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a04fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a04fd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a04ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0500: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4a0505u); f_008581c5();
    /* 004a0505: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a0508: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a050b: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004a050e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a0515: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_004a0518:; BB(0x004a0518);
    /* 004a0518: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a051b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a051e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a0521: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a0524: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a0527: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a052e: mov esp, ebp */ r_esp = r_ebp;
    /* 004a0530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a0531: ret  */ FN_RET(0x004a03f8); r_esp += 4; return;
L_004a0532:; BB(0x004a0532);
    /* 004a0532: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0534: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004a0537: jmp 0x4a0518 */ goto L_004a0518;
}

void f_004a053c(void) /* sub_4A053C */
{
    FN_ENTER(0x004a053c);
    /* 004a053c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a053d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a053e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a053f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a0541: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a0545: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004a0549: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004a054c: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 004a0552: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004a0555: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004a0558: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 004a055b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a055d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a055f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0561: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0563: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0565: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a0567: jae 0x4a05f3 */ if (!fC) goto L_004a05f3;
L_004a056d:; BB(0x004a056d);
    /* 004a056d: mov ebx, esi */ r_ebx = r_esi;
    /* 004a056f: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004a0571: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0574: jb 0x4a05d1 */ if (fC) goto L_004a05d1;
L_004a0576:; BB(0x004a0576);
    /* 004a0576: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004a0579: lea ebx, [esi - 0x40] */ r_ebx = (u32)(r_esi+0xffffffc0u);
L_004a057c:; BB(0x004a057c);
    /* 004a057c: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 004a057e: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 004a0581: mov ebp, dword ptr [ecx + 4] */ r_ebp = R32((u32)(r_ecx+0x4u));
    /* 004a0584: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 004a0587: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 004a058a: mov dword ptr [edx + 0xc], ebp */ W32((u32)(r_edx+0xcu), r_ebp);
    /* 004a058d: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004a058f: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 004a0591: mov ebp, dword ptr [ecx + 0xc] */ r_ebp = R32((u32)(r_ecx+0xcu));
    /* 004a0594: mov dword ptr [edx + 0x14], ebp */ W32((u32)(r_edx+0x14u), r_ebp);
    /* 004a0597: mov ebp, dword ptr [ecx + 0x10] */ r_ebp = R32((u32)(r_ecx+0x10u));
    /* 004a059a: mov dword ptr [edx + 0x18], ebp */ W32((u32)(r_edx+0x18u), r_ebp);
    /* 004a059d: mov ebp, dword ptr [ecx + 0x14] */ r_ebp = R32((u32)(r_ecx+0x14u));
    /* 004a05a0: mov dword ptr [edx + 0x1c], ebp */ W32((u32)(r_edx+0x1cu), r_ebp);
    /* 004a05a3: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004a05a6: mov dword ptr [edx + 0x10], ebp */ W32((u32)(r_edx+0x10u), r_ebp);
    /* 004a05a9: mov ebp, dword ptr [ecx + 0x18] */ r_ebp = R32((u32)(r_ecx+0x18u));
    /* 004a05ac: mov dword ptr [edx + 0x24], ebp */ W32((u32)(r_edx+0x24u), r_ebp);
    /* 004a05af: mov ebp, dword ptr [ecx + 0x1c] */ r_ebp = R32((u32)(r_ecx+0x1cu));
    /* 004a05b2: mov dword ptr [edx + 0x28], ebp */ W32((u32)(r_edx+0x28u), r_ebp);
    /* 004a05b5: mov ebp, dword ptr [ecx + 0x20] */ r_ebp = R32((u32)(r_ecx+0x20u));
    /* 004a05b8: mov dword ptr [edx + 0x2c], ebp */ W32((u32)(r_edx+0x2cu), r_ebp);
    /* 004a05bb: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 004a05be: mov dword ptr [edx + 0x20], ebp */ W32((u32)(r_edx+0x20u), r_ebp);
    /* 004a05c1: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a05c4: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a05c7: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a05ca: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a05cc: jbe 0x4a057c */ if ((fC||fZ)) goto L_004a057c;
L_004a05ce:; BB(0x004a05ce);
    /* 004a05ce: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004a05d1:; BB(0x004a05d1);
    /* 004a05d1: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 004a05d3: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 004a05d6: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 004a05d9: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 004a05dc: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 004a05df: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 004a05e2: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 004a05e4: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 004a05e6: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a05e9: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a05ec: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a05ef: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a05f1: jb 0x4a05d1 */ if (fC) goto L_004a05d1;
L_004a05f3:; BB(0x004a05f3);
    /* 004a05f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a05f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a05f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a05f6: ret 8 */ FN_RET(0x004a053c); r_esp += 12; return;
}

void f_004a05fc(void) /* sub_4A05FC */
{
    FN_ENTER(0x004a05fc);
    /* 004a05fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a05fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004a05ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a0601: push 0x8d0418 */ { u32 v = 0x8d0418u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0606: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a060c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a060d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a0614: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a0617: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a061a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a061d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a0620: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a0623: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a0626: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004a0629: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004a0630: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0632: mov edx, dword ptr [eax + 0x778] */ r_edx = R32((u32)(r_eax+0x778u));
    /* 004a0638: mov dword ptr [eax], 0xaf9d40 */ W32((u32)(r_eax), 0xaf9d40u);
    /* 004a063e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0640: je 0x4a065b */ if (fZ) goto L_004a065b;
L_004a0642:; BB(0x004a0642);
    /* 004a0642: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0646: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a064b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a064f: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0651: mov dword ptr [edx + 0x778], 0 */ W32((u32)(r_edx+0x778u), 0x0u);
L_004a065b:; BB(0x004a065b);
    /* 004a065b: mov eax, ecx */ r_eax = r_ecx;
    /* 004a065d: mov edx, dword ptr [eax + 0x774] */ r_edx = R32((u32)(r_eax+0x774u));
    /* 004a0663: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0665: je 0x4a0680 */ if (fZ) goto L_004a0680;
L_004a0667:; BB(0x004a0667);
    /* 004a0667: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a066b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0670: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0674: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0676: mov dword ptr [edx + 0x774], 0 */ W32((u32)(r_edx+0x774u), 0x0u);
L_004a0680:; BB(0x004a0680);
    /* 004a0680: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0682: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004a0688: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a068a: je 0x4a06a5 */ if (fZ) goto L_004a06a5;
L_004a068c:; BB(0x004a068c);
    /* 004a068c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0690: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0695: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0699: mov edx, ecx */ r_edx = r_ecx;
    /* 004a069b: mov dword ptr [edx + 0x770], 0 */ W32((u32)(r_edx+0x770u), 0x0u);
L_004a06a5:; BB(0x004a06a5);
    /* 004a06a5: mov eax, ecx */ r_eax = r_ecx;
    /* 004a06a7: mov edx, dword ptr [eax + 0x76c] */ r_edx = R32((u32)(r_eax+0x76cu));
    /* 004a06ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a06af: je 0x4a06ca */ if (fZ) goto L_004a06ca;
L_004a06b1:; BB(0x004a06b1);
    /* 004a06b1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a06b5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a06ba: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a06be: mov edx, ecx */ r_edx = r_ecx;
    /* 004a06c0: mov dword ptr [edx + 0x76c], 0 */ W32((u32)(r_edx+0x76cu), 0x0u);
L_004a06ca:; BB(0x004a06ca);
    /* 004a06ca: mov eax, ecx */ r_eax = r_ecx;
    /* 004a06cc: mov edx, dword ptr [eax + 0x768] */ r_edx = R32((u32)(r_eax+0x768u));
    /* 004a06d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a06d4: je 0x4a06ef */ if (fZ) goto L_004a06ef;
L_004a06d6:; BB(0x004a06d6);
    /* 004a06d6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a06da: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a06df: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a06e3: mov edx, ecx */ r_edx = r_ecx;
    /* 004a06e5: mov dword ptr [edx + 0x768], 0 */ W32((u32)(r_edx+0x768u), 0x0u);
L_004a06ef:; BB(0x004a06ef);
    /* 004a06ef: mov eax, ecx */ r_eax = r_ecx;
    /* 004a06f1: mov edx, dword ptr [eax + 0x764] */ r_edx = R32((u32)(r_eax+0x764u));
    /* 004a06f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a06f9: je 0x4a0714 */ if (fZ) goto L_004a0714;
L_004a06fb:; BB(0x004a06fb);
    /* 004a06fb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a06ff: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0704: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0708: mov edx, ecx */ r_edx = r_ecx;
    /* 004a070a: mov dword ptr [edx + 0x764], 0 */ W32((u32)(r_edx+0x764u), 0x0u);
L_004a0714:; BB(0x004a0714);
    /* 004a0714: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0716: mov edx, dword ptr [eax + 0x760] */ r_edx = R32((u32)(r_eax+0x760u));
    /* 004a071c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a071e: je 0x4a0739 */ if (fZ) goto L_004a0739;
L_004a0720:; BB(0x004a0720);
    /* 004a0720: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0724: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0729: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a072d: mov edx, ecx */ r_edx = r_ecx;
    /* 004a072f: mov dword ptr [edx + 0x760], 0 */ W32((u32)(r_edx+0x760u), 0x0u);
L_004a0739:; BB(0x004a0739);
    /* 004a0739: mov eax, ecx */ r_eax = r_ecx;
    /* 004a073b: mov edx, dword ptr [eax + 0x75c] */ r_edx = R32((u32)(r_eax+0x75cu));
    /* 004a0741: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0743: je 0x4a075e */ if (fZ) goto L_004a075e;
L_004a0745:; BB(0x004a0745);
    /* 004a0745: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0749: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a074e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0752: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0754: mov dword ptr [edx + 0x75c], 0 */ W32((u32)(r_edx+0x75cu), 0x0u);
L_004a075e:; BB(0x004a075e);
    /* 004a075e: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0760: mov edx, dword ptr [eax + 0x758] */ r_edx = R32((u32)(r_eax+0x758u));
    /* 004a0766: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0768: je 0x4a0783 */ if (fZ) goto L_004a0783;
L_004a076a:; BB(0x004a076a);
    /* 004a076a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a076e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0773: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0777: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0779: mov dword ptr [edx + 0x758], 0 */ W32((u32)(r_edx+0x758u), 0x0u);
L_004a0783:; BB(0x004a0783);
    /* 004a0783: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0785: mov edx, dword ptr [eax + 0x754] */ r_edx = R32((u32)(r_eax+0x754u));
    /* 004a078b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a078d: je 0x4a07a8 */ if (fZ) goto L_004a07a8;
L_004a078f:; BB(0x004a078f);
    /* 004a078f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0793: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0798: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a079c: mov edx, ecx */ r_edx = r_ecx;
    /* 004a079e: mov dword ptr [edx + 0x754], 0 */ W32((u32)(r_edx+0x754u), 0x0u);
L_004a07a8:; BB(0x004a07a8);
    /* 004a07a8: mov eax, ecx */ r_eax = r_ecx;
    /* 004a07aa: mov edx, dword ptr [eax + 0x750] */ r_edx = R32((u32)(r_eax+0x750u));
    /* 004a07b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a07b2: je 0x4a07cd */ if (fZ) goto L_004a07cd;
L_004a07b4:; BB(0x004a07b4);
    /* 004a07b4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a07b8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a07bd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a07c1: mov edx, ecx */ r_edx = r_ecx;
    /* 004a07c3: mov dword ptr [edx + 0x750], 0 */ W32((u32)(r_edx+0x750u), 0x0u);
L_004a07cd:; BB(0x004a07cd);
    /* 004a07cd: mov eax, ecx */ r_eax = r_ecx;
    /* 004a07cf: mov edx, dword ptr [eax + 0x74c] */ r_edx = R32((u32)(r_eax+0x74cu));
    /* 004a07d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a07d7: je 0x4a07f2 */ if (fZ) goto L_004a07f2;
L_004a07d9:; BB(0x004a07d9);
    /* 004a07d9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a07dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a07e2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a07e6: mov edx, ecx */ r_edx = r_ecx;
    /* 004a07e8: mov dword ptr [edx + 0x74c], 0 */ W32((u32)(r_edx+0x74cu), 0x0u);
L_004a07f2:; BB(0x004a07f2);
    /* 004a07f2: mov eax, ecx */ r_eax = r_ecx;
    /* 004a07f4: mov edx, dword ptr [eax + 0x748] */ r_edx = R32((u32)(r_eax+0x748u));
    /* 004a07fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a07fc: je 0x4a0817 */ if (fZ) goto L_004a0817;
L_004a07fe:; BB(0x004a07fe);
    /* 004a07fe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0802: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0807: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a080b: mov edx, ecx */ r_edx = r_ecx;
    /* 004a080d: mov dword ptr [edx + 0x748], 0 */ W32((u32)(r_edx+0x748u), 0x0u);
L_004a0817:; BB(0x004a0817);
    /* 004a0817: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0819: mov edx, dword ptr [eax + 0x744] */ r_edx = R32((u32)(r_eax+0x744u));
    /* 004a081f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0821: je 0x4a083c */ if (fZ) goto L_004a083c;
L_004a0823:; BB(0x004a0823);
    /* 004a0823: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0827: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a082c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0830: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0832: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
L_004a083c:; BB(0x004a083c);
    /* 004a083c: mov eax, ecx */ r_eax = r_ecx;
    /* 004a083e: mov edx, dword ptr [eax + 0x740] */ r_edx = R32((u32)(r_eax+0x740u));
    /* 004a0844: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0846: je 0x4a0861 */ if (fZ) goto L_004a0861;
L_004a0848:; BB(0x004a0848);
    /* 004a0848: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a084c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0851: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a0855: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0857: mov dword ptr [edx + 0x740], 0 */ W32((u32)(r_edx+0x740u), 0x0u);
L_004a0861:; BB(0x004a0861);
    /* 004a0861: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0863: mov edx, dword ptr [eax + 0x73c] */ r_edx = R32((u32)(r_eax+0x73cu));
    /* 004a0869: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a086b: je 0x4a0886 */ if (fZ) goto L_004a0886;
L_004a086d:; BB(0x004a086d);
    /* 004a086d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a0871: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0876: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a087a: mov edx, ecx */ r_edx = r_ecx;
    /* 004a087c: mov dword ptr [edx + 0x73c], 0 */ W32((u32)(r_edx+0x73cu), 0x0u);
L_004a0886:; BB(0x004a0886);
    /* 004a0886: mov eax, ecx */ r_eax = r_ecx;
    /* 004a0888: mov ecx, dword ptr [eax + 0x584] */ r_ecx = R32((u32)(r_eax+0x584u));
    /* 004a088e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0890: je 0x4a08a7 */ if (fZ) goto L_004a08a7;
L_004a0892:; BB(0x004a0892);
    /* 004a0892: je 0x4a089a */ if (fZ) goto L_004a089a;
L_004a0894:; BB(0x004a0894);
    /* 004a0894: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0896: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004a0898: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4a089au); call_ind(t); }
L_004a089a:; BB(0x004a089a);
    /* 004a089a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a089d: mov dword ptr [eax + 0x584], 0 */ W32((u32)(r_eax+0x584u), 0x0u);
L_004a08a7:; BB(0x004a08a7);
    /* 004a08a7: mov ecx, dword ptr [eax + 0x580] */ r_ecx = R32((u32)(r_eax+0x580u));
    /* 004a08ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a08af: je 0x4a08c7 */ if (fZ) goto L_004a08c7;
L_004a08b1:; BB(0x004a08b1);
    /* 004a08b1: je 0x4a08ba */ if (fZ) goto L_004a08ba;
L_004a08b3:; BB(0x004a08b3);
    /* 004a08b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a08b5: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4a08bau); f_00418aa8();
L_004a08ba:; BB(0x004a08ba);
    /* 004a08ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a08bd: mov dword ptr [eax + 0x580], 0 */ W32((u32)(r_eax+0x580u), 0x0u);
L_004a08c7:; BB(0x004a08c7);
    /* 004a08c7: mov ecx, eax */ r_ecx = r_eax;
    /* 004a08c9: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4a08ceu); f_007b9c8c();
    /* 004a08ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a08d1: cmp eax, dword ptr [0xa47660] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa47660u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a08d7: jne 0x4a08e7 */ if (!fZ) goto L_004a08e7;
L_004a08dd:; BB(0x004a08dd);
    /* 004a08dd: mov dword ptr [0xa47660], 0 */ W32((u32)(0xa47660u), 0x0u);
L_004a08e7:; BB(0x004a08e7);
    /* 004a08e7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004a08ee: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004a08f3: lea edx, [eax + 0x588] */ r_edx = (u32)(r_eax+0x588u);
    /* 004a08f9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a08fb: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a08fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a08fe: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4a0903u); f_008586d6();
    /* 004a0903: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a090a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a090d: lea ecx, [eax + 0x4cc] */ r_ecx = (u32)(r_eax+0x4ccu);
    /* 004a0913: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4a0918u); f_008171e8();
    /* 004a0918: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a091b: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4a0920u); f_0051f4fc();
    /* 004a0920: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a0923: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0925: jne 0x4a0937 */ if (!fZ) goto L_004a0937;
L_004a0927:; BB(0x004a0927);
    /* 004a0927: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a092a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a0931: mov esp, ebp */ r_esp = r_ebp;
    /* 004a0933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a0934: ret 4 */ FN_RET(0x004a05fc); r_esp += 8; return;
L_004a0937:; BB(0x004a0937);
    /* 004a0937: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a093a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a093b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a0940u); f_005c2f74();
    /* 004a0940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a0941: jmp 0x4a0927 */ goto L_004a0927;
}

void f_004a0944(void) /* sub_4A0944 */
{
    FN_ENTER(0x004a0944);
    /* 004a0944: mov edx, dword ptr [0xa47698] */ r_edx = R32((u32)(0xa47698u));
    /* 004a094a: mov eax, dword ptr [0xa47688] */ r_eax = R32((u32)(0xa47688u));
    /* 004a094f: cmp edx, dword ptr [eax*4 + 0x9039e0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x9039e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0956: je 0x4a0962 */ if (fZ) goto L_004a0962;
L_004a0958:; BB(0x004a0958);
    /* 004a0958: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a095b: mov dword ptr [0xa47698], edx */ W32((u32)(0xa47698u), r_edx);
    /* 004a0961: ret  */ FN_RET(0x004a0944); r_esp += 4; return;
L_004a0962:; BB(0x004a0962);
    /* 004a0962: mov edx, dword ptr [0xa47684] */ r_edx = R32((u32)(0xa47684u));
    /* 004a0968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a0969: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 004a096c: mov dword ptr [0xa47684], eax */ W32((u32)(0xa47684u), r_eax);
    /* 004a0971: push 0xa4768c */ { u32 v = 0xa4768cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a0976: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x4a097bu); f_00520c5c();
    /* 004a097b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a097e: mov edx, dword ptr [0xa47698] */ r_edx = R32((u32)(0xa47698u));
    /* 004a0984: add dword ptr [0xa47688], 1 */ { u32 ad = (u32)(0xa47688u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004a098b: jmp 0x4a0958 */ goto L_004a0958;
}

void f_004a0990(void) /* sub_4A0990 */
{
    FN_ENTER(0x004a0990);
    /* 004a0990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a0991: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0992: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a0994: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a099a: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a099f: je 0x4a0a68 */ if (fZ) goto L_004a0a68;
L_004a09a5:; BB(0x004a09a5);
    /* 004a09a5: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a09ab: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004a09ae: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a09b1: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004a09b4: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a09ba: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004a09bd: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a09c0: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004a09c3: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a09c9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004a09cc: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a09cf: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004a09d2: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a09d8: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004a09de: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a09e1: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 004a09e7: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a09ed: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 004a09f3: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a09f6: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 004a09fc: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a02: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004a0a08: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0a0b: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 004a0a11: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a17: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 004a0a1d: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0a20: mov dword ptr [edx + 0x120], eax */ W32((u32)(r_edx+0x120u), r_eax);
    /* 004a0a26: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a2c: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 004a0a32: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0a35: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 004a0a3b: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a41: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004a0a47: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0a4a: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 004a0a50: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a56: mov ecx, dword ptr [ebx + 0x1a4] */ r_ecx = R32((u32)(r_ebx+0x1a4u));
    /* 004a0a5c: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0a5f: mov dword ptr [ebx + 0x1a4], ecx */ W32((u32)(r_ebx+0x1a4u), r_ecx);
    /* 004a0a65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a0a66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a0a67: ret  */ FN_RET(0x004a0990); r_esp += 4; return;
L_004a0a68:; BB(0x004a0a68);
    /* 004a0a68: lea eax, [ebx + 0x4f0] */ r_eax = (u32)(r_ebx+0x4f0u);
    /* 004a0a6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0a6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a0a71: call 0x520158 */ r_esp -= 4; W32(r_esp, 0x4a0a76u); f_00520158();
    /* 004a0a76: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004a0a79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a0a7b: mov esi, eax */ r_esi = r_eax;
L_004a0a7d:; BB(0x004a0a7d);
    /* 004a0a7d: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a83: mov edx, dword ptr [esi + ecx + 0x18] */ r_edx = R32((u32)(r_esi+r_ecx+0x18u));
    /* 004a0a87: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a0a8a: mov dword ptr [esi + ecx + 0x18], edx */ W32((u32)(r_esi+r_ecx+0x18u), r_edx);
    /* 004a0a8e: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0a94: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a0a96: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a0a99: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 004a0a9c: fcomp dword ptr [0x903ff0] */ fx_compare(ST(0), R_F32((u32)(0x903ff0u))); FPOP();
    /* 004a0aa2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a0aa4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a0aa5: jb 0x4a0ab0 */ if (fC) goto L_004a0ab0;
L_004a0aa7:; BB(0x004a0aa7);
    /* 004a0aa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a0aa8: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x4a0aadu); f_0052033c();
    /* 004a0aad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a0aae: jmp 0x4a0ab7 */ goto L_004a0ab7;
L_004a0ab0:; BB(0x004a0ab0);
    /* 004a0ab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a0ab1: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4a0ab6u); f_00520328();
    /* 004a0ab6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004a0ab7:; BB(0x004a0ab7);
    /* 004a0ab7: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0aba: cmp esi, 0x1b8 */ {  u32 a = r_esi; u32 b = 0x1b8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a0ac0: jl 0x4a0a7d */ if ((fS!=fO)) goto L_004a0a7d;
L_004a0ac2:; BB(0x004a0ac2);
    /* 004a0ac2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004a0ac5: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a0acb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0ace: je 0x4a0c28 */ if (fZ) goto L_004a0c28;
L_004a0ad4:; BB(0x004a0ad4);
    /* 004a0ad4: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0ada: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004a0add: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0ae2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004a0ae5: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0aeb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004a0aee: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0af3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004a0af6: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0afc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004a0aff: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0b04: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004a0b07: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b0d: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004a0b13: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0b18: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 004a0b1e: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b24: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004a0b27: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0b2c: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004a0b2f: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b35: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 004a0b3b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0b3e: mov dword ptr [edx + 0x120], eax */ W32((u32)(r_edx+0x120u), r_eax);
    /* 004a0b44: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b4a: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 004a0b50: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0b53: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 004a0b59: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b5f: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004a0b65: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0b68: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 004a0b6e: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b74: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 004a0b7a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0b7d: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
    /* 004a0b83: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004a0b89: mov dword ptr [eax + 0xc], 0x41200000 */ W32((u32)(r_eax+0xcu), 0x41200000u);
L_004a0b90:; BB(0x004a0b90);
    /* 004a0b90: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a0b95: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 004a0b98: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0b9e: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 004a0ba1: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 004a0ba4: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0baa: fstp dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0)); FPOP();
    /* 004a0bad: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 004a0bb0: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0bb6: fstp dword ptr [edx + 0x80] */ W_F32((u32)(r_edx+0x80u), ST(0)); FPOP();
    /* 004a0bbc: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 004a0bbf: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0bc5: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 004a0bcb: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 004a0bce: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0bd4: fstp dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0)); FPOP();
    /* 004a0bda: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 004a0bdd: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0be3: fstp dword ptr [edx + 0x104] */ W_F32((u32)(r_edx+0x104u), ST(0)); FPOP();
    /* 004a0be9: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 004a0bec: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0bf2: fstp dword ptr [edx + 0x130] */ W_F32((u32)(r_edx+0x130u), ST(0)); FPOP();
    /* 004a0bf8: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 004a0bfb: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c01: fstp dword ptr [edx + 0x15c] */ W_F32((u32)(r_edx+0x15cu), ST(0)); FPOP();
    /* 004a0c07: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 004a0c0a: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c10: fstp dword ptr [edx + 0x188] */ W_F32((u32)(r_edx+0x188u), ST(0)); FPOP();
    /* 004a0c16: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 004a0c19: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c1f: fstp dword ptr [ecx + 0x1b4] */ W_F32((u32)(r_ecx+0x1b4u), ST(0)); FPOP();
    /* 004a0c25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a0c26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a0c27: ret  */ FN_RET(0x004a0990); r_esp += 4; return;
L_004a0c28:; BB(0x004a0c28);
    /* 004a0c28: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c2e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004a0c31: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0c36: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004a0c39: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c3f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004a0c42: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0c47: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004a0c4a: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c50: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004a0c53: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0c58: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004a0c5b: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c61: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004a0c67: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0c6c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 004a0c72: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c78: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004a0c7b: or eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a0c80: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004a0c83: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c89: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 004a0c8f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0c92: mov dword ptr [edx + 0x120], eax */ W32((u32)(r_edx+0x120u), r_eax);
    /* 004a0c98: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0c9e: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 004a0ca4: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0ca7: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 004a0cad: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0cb3: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004a0cb9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0cbc: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 004a0cc2: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004a0cc8: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 004a0cce: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a0cd1: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
    /* 004a0cd7: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004a0cdd: mov dword ptr [eax + 0xc], 0x42dc0000 */ W32((u32)(r_eax+0xcu), 0x42dc0000u);
    /* 004a0ce4: push dword ptr [ebx + 0xa4] */ { u32 v = R32((u32)(r_ebx+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a0cea: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4a0cefu); f_00520328();
    /* 004a0cef: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004a0cf5: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0cf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0cf9: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4a0cfeu); f_00520328();
    /* 004a0cfe: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004a0d04: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0d07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d08: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4a0d0du); f_00520328();
    /* 004a0d0d: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004a0d13: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d19: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4a0d1eu); f_00520328();
    /* 004a0d1e: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004a0d24: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a0d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d28: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4a0d2du); f_00520328();
    /* 004a0d2d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a0d30: jmp 0x4a0b90 */ goto L_004a0b90;
}

void f_004a0d38(void) /* sub_4A0D38 */
{
    FN_ENTER(0x004a0d38);
    /* 004a0d38: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a0d3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d3d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d3f: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d45: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a0d4au); f_0050b7a4();
    /* 004a0d4a: mov esi, eax */ r_esi = r_eax;
    /* 004a0d4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0d4f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0d51: je 0x4a0d88 */ if (fZ) goto L_004a0d88;
L_004a0d53:; BB(0x004a0d53);
    /* 004a0d53: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004a0d59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d5b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4a0d60u); f_005b8610();
    /* 004a0d60: mov edx, dword ptr [0xa4762c] */ r_edx = R32((u32)(0xa4762cu));
    /* 004a0d66: movzx ecx, word ptr [esi + 0x2c] */ r_ecx = (u32)R16((u32)(r_esi+0x2cu));
    /* 004a0d6a: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 004a0d71: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 004a0d74: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 004a0d7b: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 004a0d7e: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0d84: mov word ptr [esi + 0x2c], cx */ W16((u32)(r_esi+0x2cu), (u16)r_ecx);
L_004a0d88:; BB(0x004a0d88);
    /* 004a0d88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a0d89: ret  */ FN_RET(0x004a0d38); r_esp += 4; return;
}

void f_004a0d3c(void) /* sub_4A0D3C */
{
    FN_ENTER(0x004a0d3c);
    /* 004a0d3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d3d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d3f: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d45: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a0d4au); f_0050b7a4();
    /* 004a0d4a: mov esi, eax */ r_esi = r_eax;
    /* 004a0d4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a0d4f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0d51: je 0x4a0d88 */ if (fZ) goto L_004a0d88;
L_004a0d53:; BB(0x004a0d53);
    /* 004a0d53: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004a0d59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d5b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4a0d60u); f_005b8610();
    /* 004a0d60: mov edx, dword ptr [0xa4762c] */ r_edx = R32((u32)(0xa4762cu));
    /* 004a0d66: movzx ecx, word ptr [esi + 0x2c] */ r_ecx = (u32)R16((u32)(r_esi+0x2cu));
    /* 004a0d6a: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 004a0d71: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 004a0d74: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 004a0d7b: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 004a0d7e: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0d84: mov word ptr [esi + 0x2c], cx */ W16((u32)(r_esi+0x2cu), (u16)r_ecx);
L_004a0d88:; BB(0x004a0d88);
    /* 004a0d88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a0d89: ret  */ FN_RET(0x004a0d3c); r_esp += 4; return;
}

void f_004a0d8c(void) /* sub_4A0D8C */
{
    FN_ENTER(0x004a0d8c);
    /* 004a0d8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a0d8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a0d8f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a0d93: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a0d96: ja 0x4a0dd2 */ if ((!fC&&!fZ)) goto L_004a0dd2;
L_004a0d98:; BB(0x004a0d98);
    /* 004a0d98: mov eax, dword ptr [eax*4 + 0x9037e4] */ r_eax = R32((u32)(r_eax*4+0x9037e4u));
    /* 004a0d9f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004a0dd2:; BB(0x004a0dd2);
    /* 004a0dd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a0dd3: ret 4 */ FN_RET(0x004a0d8c); r_esp += 8; return;
}

void f_004a0da1(void)
{
    FN_ENTER(0x004a0da1);
    /* 004a0da1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a0da4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a0da6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a0dad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a0daf: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a0db5u); call_ind(t); }
    /* 004a0db5: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a0dba: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 004a0dc4: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a0dc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a0dc8: ret 4 */ FN_RET(0x004a0da1); r_esp += 8; return;
}

void f_004a0dcb(void)
{
    FN_ENTER(0x004a0dcb);
    /* 004a0dcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a0dcd: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a0dd2u); f_007aa094();
    /* 004a0dd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a0dd3: ret 4 */ FN_RET(0x004a0dcb); r_esp += 8; return;
}

void f_004a0dd2(void)
{
    FN_ENTER(0x004a0dd2);
    /* 004a0dd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a0dd3: ret 4 */ FN_RET(0x004a0dd2); r_esp += 8; return;
}

void f_004a0dd8(void) /* sub_4A0DD8 */
{
    FN_ENTER(0x004a0dd8);
    /* 004a0dd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0dd9: mov edi, ecx */ r_edi = r_ecx;
    /* 004a0ddb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a0ddf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0de2: je 0x4a0ecf */ if (fZ) goto L_004a0ecf;
L_004a0de8:; BB(0x004a0de8);
    /* 004a0de8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a0deb: je 0x4a0ecb */ if (fZ) goto L_004a0ecb;
L_004a0df1:; BB(0x004a0df1);
    /* 004a0df1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a0df4: je 0x4a0ecb */ if (fZ) goto L_004a0ecb;
L_004a0dfa:; BB(0x004a0dfa);
    /* 004a0dfa: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a0dfd: je 0x4a0ecb */ if (fZ) goto L_004a0ecb;
L_004a0e03:; BB(0x004a0e03);
    /* 004a0e03: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0e06: je 0x4a0ec4 */ if (fZ) goto L_004a0ec4;
L_004a0e0c:; BB(0x004a0e0c);
    /* 004a0e0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0e0e: jne 0x4a0eac */ if (!fZ) goto L_004a0eac;
L_004a0e14:; BB(0x004a0e14);
    /* 004a0e14: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e16: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a0e1bu); f_007aa094();
    /* 004a0e1b: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e1d: call 0x4a0f10 */ r_esp -= 4; W32(r_esp, 0x4a0e22u); f_004a0f10();
    /* 004a0e22: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e24: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4a0e29u); f_00521410();
    /* 004a0e29: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e2b: call 0x4a0f70 */ r_esp -= 4; W32(r_esp, 0x4a0e30u); f_004a0f70();
    /* 004a0e30: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e32: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a0e37u); f_007aabd8();
    /* 004a0e37: fcom dword ptr [0x903fc4] */ fx_compare(ST(0), R_F32((u32)(0x903fc4u))); 
    /* 004a0e3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a0e3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a0e40: jb 0x4a0e95 */ if (fC) goto L_004a0e95;
L_004a0e42:; BB(0x004a0e42);
    /* 004a0e42: fcom dword ptr [0x903fc0] */ fx_compare(ST(0), R_F32((u32)(0x903fc0u))); 
    /* 004a0e48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a0e4a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a0e4b: jae 0x4a0e53 */ if (!fC) goto L_004a0e53;
L_004a0e4d:; BB(0x004a0e4d);
    /* 004a0e4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a0e4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0e50: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
L_004a0e53:; BB(0x004a0e53);
    /* 004a0e53: fcom dword ptr [0x903fbc] */ fx_compare(ST(0), R_F32((u32)(0x903fbcu))); 
    /* 004a0e59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a0e5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a0e5c: jb 0x4a0e7e */ if (fC) goto L_004a0e7e;
L_004a0e5e:; BB(0x004a0e5e);
    /* 004a0e5e: fcomp dword ptr [0x903fb8] */ fx_compare(ST(0), R_F32((u32)(0x903fb8u))); FPOP();
    /* 004a0e64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a0e66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a0e67: jb 0x4a0ecb */ if (fC) goto L_004a0ecb;
L_004a0e69:; BB(0x004a0e69);
    /* 004a0e69: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0e6e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0e73: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e75: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x4a0e7au); f_00521454();
    /* 004a0e7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0e7b: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
L_004a0e7e:; BB(0x004a0e7e);
    /* 004a0e7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a0e80: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0e85: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0e8a: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0e8c: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x4a0e91u); f_00521454();
    /* 004a0e91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0e92: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
L_004a0e95:; BB(0x004a0e95);
    /* 004a0e95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a0e97: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0e9c: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0ea1: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0ea3: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x4a0ea8u); f_00521454();
    /* 004a0ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0ea9: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
L_004a0eac:; BB(0x004a0eac);
    /* 004a0eac: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a0eaf: jne 0x4a0ecb */ if (!fZ) goto L_004a0ecb;
L_004a0eb1:; BB(0x004a0eb1);
    /* 004a0eb1: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a0eb7: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0eba: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 004a0ec0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0ec1: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
L_004a0ec4:; BB(0x004a0ec4);
    /* 004a0ec4: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0ec6: call 0x4a12dc */ r_esp -= 4; W32(r_esp, 0x4a0ecbu); f_004a12dc();
L_004a0ecb:; BB(0x004a0ecb);
    /* 004a0ecb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0ecc: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
L_004a0ecf:; BB(0x004a0ecf);
    /* 004a0ecf: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004a0ed1: mov eax, 1 */ r_eax = 0x1u;
    /* 004a0ed6: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a0edd: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0edf: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a0ee5u); call_ind(t); }
    /* 004a0ee5: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a0eea: mov edx, dword ptr [edi + 0x4c8] */ r_edx = R32((u32)(r_edi+0x4c8u));
    /* 004a0ef0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0ef2: mov dword ptr [edi + 0x4ec], ecx */ W32((u32)(r_edi+0x4ecu), r_ecx);
    /* 004a0ef8: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a0efb: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0efe: mov dword ptr [edi + 0x4c8], edx */ W32((u32)(r_edi+0x4c8u), r_edx);
    /* 004a0f04: mov dword ptr [edi + 0x498], ecx */ W32((u32)(r_edi+0x498u), r_ecx);
    /* 004a0f0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0f0b: ret 4 */ FN_RET(0x004a0dd8); r_esp += 8; return;
}

void f_004a0f10(void) /* sub_4A0F10 */
{
    FN_ENTER(0x004a0f10);
    /* 004a0f10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f11: mov edi, ecx */ r_edi = r_ecx;
    /* 004a0f13: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0f15: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f1a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0f1fu); f_007aaa30();
    /* 004a0f1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0f21: jne 0x4a0f53 */ if (!fZ) goto L_004a0f53;
L_004a0f23:; BB(0x004a0f23);
    /* 004a0f23: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f28: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0f2a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0f2fu); f_007aaa30();
    /* 004a0f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0f31: jne 0x4a0f53 */ if (!fZ) goto L_004a0f53;
L_004a0f33:; BB(0x004a0f33);
    /* 004a0f33: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f38: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0f3a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0f3fu); f_007aaa30();
    /* 004a0f3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0f41: jne 0x4a0f53 */ if (!fZ) goto L_004a0f53;
L_004a0f43:; BB(0x004a0f43);
    /* 004a0f43: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f48: mov ecx, edi */ r_ecx = r_edi;
    /* 004a0f4a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0f4fu); f_007aaa30();
    /* 004a0f4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0f51: je 0x4a0f6b */ if (fZ) goto L_004a0f6b;
L_004a0f53:; BB(0x004a0f53);
    /* 004a0f53: add edi, 0x568 */ {  u32 a = r_edi; u32 b = 0x568u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0f59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a0f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f5e: push 0x3a2 */ { u32 v = 0x3a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f63: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a0f68u); f_00814298();
    /* 004a0f68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004a0f6b:; BB(0x004a0f6b);
    /* 004a0f6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a0f6c: ret  */ FN_RET(0x004a0f10); r_esp += 4; return;
}

void f_004a0f70(void) /* sub_4A0F70 */
{
    FN_ENTER(0x004a0f70);
    /* 004a0f70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0f71: mov esi, ecx */ r_esi = r_ecx;
    /* 004a0f73: push dword ptr [0xa47568] */ { u32 v = R32((u32)(0xa47568u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a0f79: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0f7b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0f80u); f_007aaa30();
    /* 004a0f80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0f82: je 0x4a0f8d */ if (fZ) goto L_004a0f8d;
L_004a0f84:; BB(0x004a0f84);
    /* 004a0f84: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0f86: call 0x4a121c */ r_esp -= 4; W32(r_esp, 0x4a0f8bu); f_004a121c();
    /* 004a0f8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a0f8c: ret  */ FN_RET(0x004a0f70); r_esp += 4; return;
L_004a0f8d:; BB(0x004a0f8d);
    /* 004a0f8d: push dword ptr [0xa4756c] */ { u32 v = R32((u32)(0xa4756cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a0f93: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0f95: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0f9au); f_007aaa30();
    /* 004a0f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0f9c: je 0x4a0fa7 */ if (fZ) goto L_004a0fa7;
L_004a0f9e:; BB(0x004a0f9e);
    /* 004a0f9e: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0fa0: call 0x4a115c */ r_esp -= 4; W32(r_esp, 0x4a0fa5u); f_004a115c();
    /* 004a0fa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a0fa6: ret  */ FN_RET(0x004a0f70); r_esp += 4; return;
L_004a0fa7:; BB(0x004a0fa7);
    /* 004a0fa7: push dword ptr [0xa47570] */ { u32 v = R32((u32)(0xa47570u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a0fad: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0faf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0fb4u); f_007aaa30();
    /* 004a0fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0fb6: je 0x4a0fc1 */ if (fZ) goto L_004a0fc1;
L_004a0fb8:; BB(0x004a0fb8);
    /* 004a0fb8: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0fba: call 0x4a109c */ r_esp -= 4; W32(r_esp, 0x4a0fbfu); f_004a109c();
    /* 004a0fbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a0fc0: ret  */ FN_RET(0x004a0f70); r_esp += 4; return;
L_004a0fc1:; BB(0x004a0fc1);
    /* 004a0fc1: push dword ptr [0xa47574] */ { u32 v = R32((u32)(0xa47574u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a0fc7: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0fc9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a0fceu); f_007aaa30();
    /* 004a0fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a0fd0: je 0x4a0fd9 */ if (fZ) goto L_004a0fd9;
L_004a0fd2:; BB(0x004a0fd2);
    /* 004a0fd2: mov ecx, esi */ r_ecx = r_esi;
    /* 004a0fd4: call 0x4a0fdc */ r_esp -= 4; W32(r_esp, 0x4a0fd9u); f_004a0fdc();
L_004a0fd9:; BB(0x004a0fd9);
    /* 004a0fd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a0fda: ret  */ FN_RET(0x004a0f70); r_esp += 4; return;
}

void f_004a0fdc(void) /* sub_4A0FDC */
{
    FN_ENTER(0x004a0fdc);
    /* 004a0fdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a0fdd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a0fde: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a0fe1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a0fe3: mov eax, dword ptr [0x903814] */ r_eax = R32((u32)(0x903814u));
    /* 004a0fe8: mov edx, dword ptr [0x903824] */ r_edx = R32((u32)(0x903824u));
    /* 004a0fee: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004a0ff6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a0ffa: mov dword ptr [esp + 0xc], 0x41700000 */ W32((u32)(r_esp+0xcu), 0x41700000u);
    /* 004a1002: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a1004: mov dword ptr [esp + 0x10], 0x41000000 */ W32((u32)(r_esp+0x10u), 0x41000000u);
    /* 004a100c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a1010: mov edx, dword ptr [ebp + 0x580] */ r_edx = R32((u32)(r_ebp+0x580u));
    /* 004a1016: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a1019: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a101b: jle 0x4a102d */ if ((fZ||fS!=fO)) goto L_004a102d;
L_004a101d:; BB(0x004a101d);
    /* 004a101d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a101f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a1022: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004a1025: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a1028: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a102b: jl 0x4a101d */ if ((fS!=fO)) goto L_004a101d;
L_004a102d:; BB(0x004a102d);
    /* 004a102d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a102f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1030: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a1033: lea edi, [ebp + 0x464] */ r_edi = (u32)(r_ebp+0x464u);
    /* 004a1039: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a103b: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1042: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a1047u); f_00520c70();
    /* 004a1047: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a104b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a104c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a104d: call 0x4ab96c */ r_esp -= 4; W32(r_esp, 0x4a1052u); f_004ab96c();
    /* 004a1052: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1055: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a1059: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a105f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1060: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1062: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1063: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a1068u); f_0051fdf8();
    /* 004a1068: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a106a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a106b: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1072: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1074: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a1079u); f_00520c70();
    /* 004a1079: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a107b: mov eax, dword ptr [ebp + 0x5f8] */ r_eax = R32((u32)(r_ebp+0x5f8u));
    /* 004a1081: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1085: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a108au); f_0050b7a4();
    /* 004a108a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a108d: mov eax, edi */ r_eax = r_edi;
    /* 004a108f: call 0x4a0d3c */ r_esp -= 4; W32(r_esp, 0x4a1094u); f_004a0d3c();
    /* 004a1094: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1098: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1099: ret  */ FN_RET(0x004a0fdc); r_esp += 4; return;
}

