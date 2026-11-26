#include "protos.h"

void f_006eb020(void)
{
    FN_ENTER(0x006eb020);
    goto L_006eb020;
L_006eafcc:; BB(0x006eafcc);
    /* 006eafcc: test eax, 0xe83d8900 */ {  u32 a = r_eax; u32 b = 0xe83d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eafd2: test eax, 0xac3d8900 */ {  u32 a = r_eax; u32 b = 0xac3d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eafd8: test eax, 0xec3d8900 */ {  u32 a = r_eax; u32 b = 0xec3d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eafde: test eax, 0xb03d8900 */ {  u32 a = r_eax; u32 b = 0xb03d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eafe4: test eax, 0xf03d8900 */ {  u32 a = r_eax; u32 b = 0xf03d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eafea: test eax, 0xb43d8900 */ {  u32 a = r_eax; u32 b = 0xb43d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eaff0: test eax, 0xf43d8900 */ {  u32 a = r_eax; u32 b = 0xf43d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eaff6: test eax, 0xb83d8900 */ {  u32 a = r_eax; u32 b = 0xb83d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eaffc: test eax, 0xf83d8900 */ {  u32 a = r_eax; u32 b = 0xf83d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eb002: test eax, 0xbc3d8900 */ {  u32 a = r_eax; u32 b = 0xbc3d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eb008: test eax, 0xfc3d8900 */ {  u32 a = r_eax; u32 b = 0xfc3d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eb00e: test eax, 0x3d8900 */ {  u32 a = r_eax; u32 b = 0x3d8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006eb014: push 0x840f00a9 */ { u32 v = 0x840f00a9u; r_esp -= 4; W32(r_esp, v); }
    /* 006eb019: mov ah, 0 */ r_eax = (r_eax & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 006eb01b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006eb01d: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
L_006eb020:; BB(0x006eb020);
    /* 006eb020: loope 0x6eafcc */ r_ecx--; if (r_ecx && fZ) goto L_006eafcc;
    /* 006eb022: add byte ptr [ecx - 0x76f7dbb4], cl */ { u32 ad = (u32)(r_ecx+0x8908244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006eb023: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006eb027: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006eb028: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eb029: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006eb02b: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006eb02e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eb031: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006eb034: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb039: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 006eb03c: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb03e: jge 0x6eb0b1 */ if ((fS==fO)) goto L_006eb0b1;
L_006eb040:; BB(0x006eb040);
    /* 006eb040: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 006eb047: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb049: je 0x6eb0aa */ if (fZ) goto L_006eb0aa;
L_006eb04b:; BB(0x006eb04b);
    /* 006eb04b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006eb04e: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb054: je 0x6eb0aa */ if (fZ) goto L_006eb0aa;
L_006eb056:; BB(0x006eb056);
    /* 006eb056: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb057: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb058: mov ecx, esi */ r_ecx = r_esi;
    /* 006eb05a: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eb05fu); f_007b65b4();
    /* 006eb05f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb061: je 0x6eb0ca */ if (fZ) goto L_006eb0ca;
L_006eb063:; BB(0x006eb063);
    /* 006eb063: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006eb066: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006eb069: jne 0x6eb07a */ if (!fZ) goto L_006eb07a;
L_006eb06b:; BB(0x006eb06b);
    /* 006eb06b: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb071: je 0x6eb07a */ if (fZ) goto L_006eb07a;
L_006eb073:; BB(0x006eb073);
    /* 006eb073: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb078: jmp 0x6eb0aa */ goto L_006eb0aa;
L_006eb07a:; BB(0x006eb07a);
    /* 006eb07a: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb080: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eb087: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb08c: mov dword ptr [eax*4 + 0xa96780], ebp */ W32((u32)(r_eax*4+0xa96780u), r_ebp);
    /* 006eb093: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb098: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb09b: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb09e: jge 0x6eb0be */ if ((fS==fO)) goto L_006eb0be;
L_006eb0a0:; BB(0x006eb0a0);
    /* 006eb0a0: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
    /* 006eb0a5: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_006eb0aa:; BB(0x006eb0aa);
    /* 006eb0aa: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eb0ad: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb0af: jl 0x6eb040 */ if ((fS!=fO)) goto L_006eb040;
L_006eb0b1:; BB(0x006eb0b1);
    /* 006eb0b1: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eb0b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb0b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb0ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb0bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb0bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb0bd: ret  */ FN_RET(0x006eb020); r_esp += 4; return;
L_006eb0be:; BB(0x006eb0be);
    /* 006eb0be: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eb0c8: jmp 0x6eb0b1 */ goto L_006eb0b1;
L_006eb0ca:; BB(0x006eb0ca);
    /* 006eb0ca: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb0cf: jmp 0x6eb0aa */ goto L_006eb0aa;
}

void f_006eb0d7(void)
{
    FN_ENTER(0x006eb0d7);
    /* 006eb0d7: les ecx, ptr [ebx + ebx*2] */ UNSUP(0x006eb0d7, "les ecx, ptr [ebx + ebx*2]");
    /* 006eb0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb0db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb0dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb0dd: ret  */ FN_RET(0x006eb0d7); r_esp += 4; return;
}

void f_006eb0e8(void) /* sub_6EB0E8 */
{
    FN_ENTER(0x006eb0e8);
    /* 006eb0e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb0e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb0ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb0eb: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eb0ee: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 006eb0f2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006eb0f6: mov esi, dword ptr [edi + 0xe8] */ r_esi = R32((u32)(r_edi+0xe8u));
    /* 006eb0fc: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 006eb0ff: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 006eb102: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006eb105: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006eb107: mov dword ptr [0xa96780], edi */ W32((u32)(0xa96780u), r_edi);
    /* 006eb10d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb10f: mov dword ptr [0xa967c0], edi */ W32((u32)(0xa967c0u), r_edi);
    /* 006eb115: mov dword ptr [0xa96784], edi */ W32((u32)(0xa96784u), r_edi);
    /* 006eb11b: mov dword ptr [0xa967c4], edi */ W32((u32)(0xa967c4u), r_edi);
    /* 006eb121: mov dword ptr [0xa96788], edi */ W32((u32)(0xa96788u), r_edi);
    /* 006eb127: mov dword ptr [0xa967c8], edi */ W32((u32)(0xa967c8u), r_edi);
    /* 006eb12d: mov dword ptr [0xa9678c], edi */ W32((u32)(0xa9678cu), r_edi);
    /* 006eb133: mov dword ptr [0xa967cc], edi */ W32((u32)(0xa967ccu), r_edi);
    /* 006eb139: mov dword ptr [0xa96790], edi */ W32((u32)(0xa96790u), r_edi);
    /* 006eb13f: mov dword ptr [0xa967d0], edi */ W32((u32)(0xa967d0u), r_edi);
    /* 006eb145: mov dword ptr [0xa96794], edi */ W32((u32)(0xa96794u), r_edi);
    /* 006eb14b: mov dword ptr [0xa967d4], edi */ W32((u32)(0xa967d4u), r_edi);
    /* 006eb151: mov dword ptr [0xa96798], edi */ W32((u32)(0xa96798u), r_edi);
    /* 006eb157: mov dword ptr [0xa967d8], edi */ W32((u32)(0xa967d8u), r_edi);
    /* 006eb15d: mov dword ptr [0xa9679c], edi */ W32((u32)(0xa9679cu), r_edi);
    /* 006eb163: mov dword ptr [0xa967dc], edi */ W32((u32)(0xa967dcu), r_edi);
    /* 006eb169: mov dword ptr [0xa967a0], edi */ W32((u32)(0xa967a0u), r_edi);
    /* 006eb16f: mov dword ptr [0xa967e0], edi */ W32((u32)(0xa967e0u), r_edi);
    /* 006eb175: mov dword ptr [0xa967a4], edi */ W32((u32)(0xa967a4u), r_edi);
    /* 006eb17b: mov dword ptr [0xa967e4], edi */ W32((u32)(0xa967e4u), r_edi);
    /* 006eb181: mov dword ptr [0xa967a8], edi */ W32((u32)(0xa967a8u), r_edi);
    /* 006eb187: mov dword ptr [0xa967e8], edi */ W32((u32)(0xa967e8u), r_edi);
    /* 006eb18d: mov dword ptr [0xa967ac], edi */ W32((u32)(0xa967acu), r_edi);
    /* 006eb193: mov dword ptr [0xa967ec], edi */ W32((u32)(0xa967ecu), r_edi);
    /* 006eb199: mov dword ptr [0xa967b0], edi */ W32((u32)(0xa967b0u), r_edi);
    /* 006eb19f: mov dword ptr [0xa967f0], edi */ W32((u32)(0xa967f0u), r_edi);
    /* 006eb1a5: mov dword ptr [0xa967b4], edi */ W32((u32)(0xa967b4u), r_edi);
    /* 006eb1ab: mov dword ptr [0xa967f4], edi */ W32((u32)(0xa967f4u), r_edi);
    /* 006eb1b1: mov dword ptr [0xa967b8], edi */ W32((u32)(0xa967b8u), r_edi);
    /* 006eb1b7: mov dword ptr [0xa967f8], edi */ W32((u32)(0xa967f8u), r_edi);
    /* 006eb1bd: mov dword ptr [0xa967bc], edi */ W32((u32)(0xa967bcu), r_edi);
    /* 006eb1c3: mov dword ptr [0xa967fc], edi */ W32((u32)(0xa967fcu), r_edi);
    /* 006eb1c9: mov dword ptr [0xa96800], edi */ W32((u32)(0xa96800u), r_edi);
    /* 006eb1cf: je 0x6eb34c */ if (fZ) goto L_006eb34c;
L_006eb1d5:; BB(0x006eb1d5);
    /* 006eb1d5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006eb1d9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006eb1dd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006eb1e1: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006eb1e4: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006eb1e7: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 006eb1ea: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006eb1ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb1f1: jge 0x6eb2af */ if ((fS==fO)) goto L_006eb2af;
L_006eb1f7:; BB(0x006eb1f7);
    /* 006eb1f7: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb1fc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006eb1fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006eb200: jle 0x6eb322 */ if ((fZ||fS!=fO)) goto L_006eb322;
L_006eb206:; BB(0x006eb206);
    /* 006eb206: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006eb20a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006eb20d: mov ebp, ebx */ r_ebp = r_ebx;
    /* 006eb20f: mov ebx, eax */ r_ebx = r_eax;
L_006eb211:; BB(0x006eb211);
    /* 006eb211: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 006eb218: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb21a: je 0x6eb29f */ if (fZ) goto L_006eb29f;
L_006eb220:; BB(0x006eb220);
    /* 006eb220: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 006eb224: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006eb228: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb22a: je 0x6eb29f */ if (fZ) goto L_006eb29f;
L_006eb22c:; BB(0x006eb22c);
    /* 006eb22c: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb22f: jge 0x6eb23f */ if ((fS==fO)) goto L_006eb23f;
L_006eb231:; BB(0x006eb231);
    /* 006eb231: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 006eb237: cmp edx, dword ptr [esi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb23d: jne 0x6eb29f */ if (!fZ) goto L_006eb29f;
L_006eb23f:; BB(0x006eb23f);
    /* 006eb23f: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006eb242: test edx, 0x30000000 */ {  u32 a = r_edx; u32 b = 0x30000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb248: je 0x6eb29f */ if (fZ) goto L_006eb29f;
L_006eb24a:; BB(0x006eb24a);
    /* 006eb24a: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 006eb24f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb250: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006eb254: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eb259u); f_007b65b4();
    /* 006eb259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb25b: je 0x6eb29f */ if (fZ) goto L_006eb29f;
L_006eb25d:; BB(0x006eb25d);
    /* 006eb25d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006eb260: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006eb263: jne 0x6eb26d */ if (!fZ) goto L_006eb26d;
L_006eb265:; BB(0x006eb265);
    /* 006eb265: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb26b: jne 0x6eb29f */ if (!fZ) goto L_006eb29f;
L_006eb26d:; BB(0x006eb26d);
    /* 006eb26d: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb273: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eb27a: mov ecx, dword ptr [0xa96800] */ r_ecx = R32((u32)(0xa96800u));
    /* 006eb280: mov dword ptr [ecx*4 + 0xa96780], esi */ W32((u32)(r_ecx*4+0xa96780u), r_esi);
    /* 006eb287: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb28d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006eb290: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb293: jge 0x6eb32e */ if ((fS==fO)) goto L_006eb32e;
L_006eb299:; BB(0x006eb299);
    /* 006eb299: mov dword ptr [0xa96800], edx */ W32((u32)(0xa96800u), r_edx);
L_006eb29f:; BB(0x006eb29f);
    /* 006eb29f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eb2a2: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb2a4: jl 0x6eb211 */ if ((fS!=fO)) goto L_006eb211;
L_006eb2aa:; BB(0x006eb2aa);
    /* 006eb2aa: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006eb2ad: jmp 0x6eb322 */ goto L_006eb322;
L_006eb2af:; BB(0x006eb2af);
    /* 006eb2af: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006eb2b2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006eb2b4:; BB(0x006eb2b4);
    /* 006eb2b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb2b5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6eb2bau); f_007b4d18();
    /* 006eb2ba: mov ebp, eax */ r_ebp = r_eax;
    /* 006eb2bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eb2bf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb2c1: je 0x6eb317 */ if (fZ) goto L_006eb317;
L_006eb2c3:; BB(0x006eb2c3);
    /* 006eb2c3: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006eb2c7: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006eb2cb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb2cd: je 0x6eb317 */ if (fZ) goto L_006eb317;
L_006eb2cf:; BB(0x006eb2cf);
    /* 006eb2cf: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006eb2d2: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb2d8: je 0x6eb317 */ if (fZ) goto L_006eb317;
L_006eb2da:; BB(0x006eb2da);
    /* 006eb2da: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 006eb2df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb2e0: mov ecx, esi */ r_ecx = r_esi;
    /* 006eb2e2: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eb2e7u); f_007b65b4();
    /* 006eb2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb2e9: je 0x6eb317 */ if (fZ) goto L_006eb317;
L_006eb2eb:; BB(0x006eb2eb);
    /* 006eb2eb: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb2f1: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eb2f8: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb2fe: mov dword ptr [edx*4 + 0xa96780], ebp */ W32((u32)(r_edx*4+0xa96780u), r_ebp);
    /* 006eb305: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb30a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb30d: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb310: jge 0x6eb33d */ if ((fS==fO)) goto L_006eb33d;
L_006eb312:; BB(0x006eb312);
    /* 006eb312: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
L_006eb317:; BB(0x006eb317);
    /* 006eb317: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eb31a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb31d: jl 0x6eb2b4 */ if ((fS!=fO)) goto L_006eb2b4;
L_006eb31f:; BB(0x006eb31f);
    /* 006eb31f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006eb322:; BB(0x006eb322);
    /* 006eb322: mov eax, 0xa96780 */ r_eax = 0xa96780u;
L_006eb327:; BB(0x006eb327);
    /* 006eb327: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb32a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb32b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb32c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb32d: ret  */ FN_RET(0x006eb0e8); r_esp += 4; return;
L_006eb32e:; BB(0x006eb32e);
    /* 006eb32e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006eb331: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eb33b: jmp 0x6eb322 */ goto L_006eb322;
L_006eb33d:; BB(0x006eb33d);
    /* 006eb33d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006eb340: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eb34a: jmp 0x6eb322 */ goto L_006eb322;
L_006eb34c:; BB(0x006eb34c);
    /* 006eb34c: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eb351: jmp 0x6eb327 */ goto L_006eb327;
}

void f_006eb354(void) /* sub_6EB354 */
{
    FN_ENTER(0x006eb354);
    /* 006eb354: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb355: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb356: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eb359: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 006eb35d: mov esi, dword ptr [ebx + 0xe8] */ r_esi = R32((u32)(r_ebx+0xe8u));
    /* 006eb363: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6eb368u); f_00807ac0();
    /* 006eb368: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 006eb36b: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 006eb36e: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 006eb371: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006eb373: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb375: mov dword ptr [0xa96780], ebx */ W32((u32)(0xa96780u), r_ebx);
    /* 006eb37b: mov dword ptr [0xa967c0], ebx */ W32((u32)(0xa967c0u), r_ebx);
    /* 006eb381: mov dword ptr [0xa96784], ebx */ W32((u32)(0xa96784u), r_ebx);
    /* 006eb387: mov dword ptr [0xa967c4], ebx */ W32((u32)(0xa967c4u), r_ebx);
    /* 006eb38d: mov dword ptr [0xa96788], ebx */ W32((u32)(0xa96788u), r_ebx);
    /* 006eb393: mov dword ptr [0xa967c8], ebx */ W32((u32)(0xa967c8u), r_ebx);
    /* 006eb399: mov dword ptr [0xa9678c], ebx */ W32((u32)(0xa9678cu), r_ebx);
    /* 006eb39f: mov dword ptr [0xa967cc], ebx */ W32((u32)(0xa967ccu), r_ebx);
    /* 006eb3a5: mov dword ptr [0xa96790], ebx */ W32((u32)(0xa96790u), r_ebx);
    /* 006eb3ab: mov dword ptr [0xa967d0], ebx */ W32((u32)(0xa967d0u), r_ebx);
    /* 006eb3b1: mov dword ptr [0xa96794], ebx */ W32((u32)(0xa96794u), r_ebx);
    /* 006eb3b7: mov dword ptr [0xa967d4], ebx */ W32((u32)(0xa967d4u), r_ebx);
    /* 006eb3bd: mov dword ptr [0xa96798], ebx */ W32((u32)(0xa96798u), r_ebx);
    /* 006eb3c3: mov dword ptr [0xa967d8], ebx */ W32((u32)(0xa967d8u), r_ebx);
    /* 006eb3c9: mov dword ptr [0xa9679c], ebx */ W32((u32)(0xa9679cu), r_ebx);
    /* 006eb3cf: mov dword ptr [0xa967dc], ebx */ W32((u32)(0xa967dcu), r_ebx);
    /* 006eb3d5: mov dword ptr [0xa967a0], ebx */ W32((u32)(0xa967a0u), r_ebx);
    /* 006eb3db: mov dword ptr [0xa967e0], ebx */ W32((u32)(0xa967e0u), r_ebx);
    /* 006eb3e1: mov dword ptr [0xa967a4], ebx */ W32((u32)(0xa967a4u), r_ebx);
    /* 006eb3e7: mov dword ptr [0xa967e4], ebx */ W32((u32)(0xa967e4u), r_ebx);
    /* 006eb3ed: mov dword ptr [0xa967a8], ebx */ W32((u32)(0xa967a8u), r_ebx);
    /* 006eb3f3: mov dword ptr [0xa967e8], ebx */ W32((u32)(0xa967e8u), r_ebx);
    /* 006eb3f9: mov dword ptr [0xa967ac], ebx */ W32((u32)(0xa967acu), r_ebx);
    /* 006eb3ff: mov dword ptr [0xa967ec], ebx */ W32((u32)(0xa967ecu), r_ebx);
    /* 006eb405: mov dword ptr [0xa967b0], ebx */ W32((u32)(0xa967b0u), r_ebx);
    /* 006eb40b: mov dword ptr [0xa967f0], ebx */ W32((u32)(0xa967f0u), r_ebx);
    /* 006eb411: mov dword ptr [0xa967b4], ebx */ W32((u32)(0xa967b4u), r_ebx);
    /* 006eb417: mov dword ptr [0xa967f4], ebx */ W32((u32)(0xa967f4u), r_ebx);
    /* 006eb41d: mov dword ptr [0xa967b8], ebx */ W32((u32)(0xa967b8u), r_ebx);
    /* 006eb423: mov dword ptr [0xa967f8], ebx */ W32((u32)(0xa967f8u), r_ebx);
    /* 006eb429: mov dword ptr [0xa967bc], ebx */ W32((u32)(0xa967bcu), r_ebx);
    /* 006eb42f: mov dword ptr [0xa967fc], ebx */ W32((u32)(0xa967fcu), r_ebx);
    /* 006eb435: mov dword ptr [0xa96800], ebx */ W32((u32)(0xa96800u), r_ebx);
    /* 006eb43b: je 0x6eb525 */ if (fZ) goto L_006eb525;
L_006eb441:; BB(0x006eb441);
    /* 006eb441: mov ebx, dword ptr [0xaae168] */ r_ebx = R32((u32)(0xaae168u));
    /* 006eb447: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006eb44b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006eb44f: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006eb452: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006eb456: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006eb459: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb45e: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 006eb461: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb463: jge 0x6eb500 */ if ((fS==fO)) goto L_006eb500;
L_006eb469:; BB(0x006eb469);
    /* 006eb469: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006eb46d: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 006eb471: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006eb474:; BB(0x006eb474);
    /* 006eb474: mov ebp, dword ptr [ebx*4 + 0xaad720] */ r_ebp = R32((u32)(r_ebx*4+0xaad720u));
    /* 006eb47b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb47d: je 0x6eb4ee */ if (fZ) goto L_006eb4ee;
L_006eb47f:; BB(0x006eb47f);
    /* 006eb47f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006eb482: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb488: je 0x6eb4ee */ if (fZ) goto L_006eb4ee;
L_006eb48a:; BB(0x006eb48a);
    /* 006eb48a: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006eb48e: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006eb492: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb494: je 0x6eb4ee */ if (fZ) goto L_006eb4ee;
L_006eb496:; BB(0x006eb496);
    /* 006eb496: push 0x47742400 */ { u32 v = 0x47742400u; r_esp -= 4; W32(r_esp, v); }
    /* 006eb49b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb49c: mov ecx, esi */ r_ecx = r_esi;
    /* 006eb49e: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6eb4a3u); f_007b65b4();
    /* 006eb4a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb4a5: je 0x6eb51e */ if (fZ) goto L_006eb51e;
L_006eb4a7:; BB(0x006eb4a7);
    /* 006eb4a7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006eb4aa: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006eb4ad: jne 0x6eb4b7 */ if (!fZ) goto L_006eb4b7;
L_006eb4af:; BB(0x006eb4af);
    /* 006eb4af: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb4b5: jne 0x6eb4e9 */ if (!fZ) goto L_006eb4e9;
L_006eb4b7:; BB(0x006eb4b7);
    /* 006eb4b7: mov edx, dword ptr [0xa96800] */ r_edx = R32((u32)(0xa96800u));
    /* 006eb4bd: mov dword ptr [edx*4 + 0xa967c0], eax */ W32((u32)(r_edx*4+0xa967c0u), r_eax);
    /* 006eb4c4: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb4c9: mov dword ptr [eax*4 + 0xa96780], ebp */ W32((u32)(r_eax*4+0xa96780u), r_ebp);
    /* 006eb4d0: mov eax, dword ptr [0xa96800] */ r_eax = R32((u32)(0xa96800u));
    /* 006eb4d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb4d8: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb4db: jge 0x6eb50b */ if ((fS==fO)) goto L_006eb50b;
L_006eb4dd:; BB(0x006eb4dd);
    /* 006eb4dd: mov dword ptr [0xa96800], eax */ W32((u32)(0xa96800u), r_eax);
    /* 006eb4e2: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb4e7: jmp 0x6eb4ee */ goto L_006eb4ee;
L_006eb4e9:; BB(0x006eb4e9);
    /* 006eb4e9: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_006eb4ee:; BB(0x006eb4ee);
    /* 006eb4ee: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eb4f1: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb4f3: jl 0x6eb474 */ if ((fS!=fO)) goto L_006eb474;
L_006eb4f9:; BB(0x006eb4f9);
    /* 006eb4f9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006eb4fd: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006eb500:; BB(0x006eb500);
    /* 006eb500: mov eax, 0xa96780 */ r_eax = 0xa96780u;
L_006eb505:; BB(0x006eb505);
    /* 006eb505: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb508: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb509: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb50a: ret  */ FN_RET(0x006eb354); r_esp += 4; return;
L_006eb50b:; BB(0x006eb50b);
    /* 006eb50b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006eb50f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006eb512: mov dword ptr [0xa96800], 0xf */ W32((u32)(0xa96800u), 0xfu);
    /* 006eb51c: jmp 0x6eb500 */ goto L_006eb500;
L_006eb51e:; BB(0x006eb51e);
    /* 006eb51e: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006eb523: jmp 0x6eb4ee */ goto L_006eb4ee;
L_006eb525:; BB(0x006eb525);
    /* 006eb525: mov eax, 0xa96780 */ r_eax = 0xa96780u;
    /* 006eb52a: jmp 0x6eb505 */ goto L_006eb505;
}

void f_006eb52c(void) /* sub_6EB52C */
{
    FN_ENTER(0x006eb52c);
    /* 006eb52c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb52d: mov ebp, esp */ r_ebp = r_esp;
    /* 006eb52f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb531: push 0x8ef4a4 */ { u32 v = 0x8ef4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006eb536: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eb53c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb53d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eb544: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eb547: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eb54a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006eb54d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006eb550: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006eb553: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006eb556: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006eb559: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006eb55c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006eb55f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006eb562: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006eb565: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006eb568: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006eb56b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006eb56e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006eb571: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006eb574: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006eb577: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6eb57cu); f_008193cc();
    /* 006eb57c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eb583: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006eb586: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006eb589: mov dword ptr [eax], 0xb3dd18 */ W32((u32)(r_eax), 0xb3dd18u);
    /* 006eb58f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006eb591: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006eb594: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 006eb597: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006eb59a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006eb59d: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 006eb5a0: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 006eb5a3: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006eb5a6: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 006eb5a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006eb5ab: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 006eb5ae: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006eb5b1: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 006eb5b4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006eb5b7: mov dword ptr [eax + 0x58], 0x3f800000 */ W32((u32)(r_eax+0x58u), 0x3f800000u);
    /* 006eb5be: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 006eb5c1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006eb5c4: mov dword ptr [eax + 0x5c], 0x3f800000 */ W32((u32)(r_eax+0x5cu), 0x3f800000u);
    /* 006eb5cb: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006eb5ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006eb5d0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eb5d3: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 006eb5d6: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 006eb5d9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006eb5dc: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 006eb5df: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006eb5e2: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006eb5e5: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006eb5e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb5ea: mov word ptr [eax + 0x60], dx */ W16((u32)(r_eax+0x60u), (u16)r_edx);
    /* 006eb5ee: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb5f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb5f3: call 0x7947dc */ r_esp -= 4; W32(r_esp, 0x6eb5f8u); f_007947dc();
    /* 006eb5f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb5fb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006eb5fe: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006eb601: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006eb604: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eb607: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006eb60a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006eb611: mov esp, ebp */ r_esp = r_ebp;
    /* 006eb613: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb614: ret 0x18 */ FN_RET(0x006eb52c); r_esp += 28; return;
}

void f_006eb618(void) /* sub_6EB618 */
{
    FN_ENTER(0x006eb618);
    /* 006eb618: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb619: mov ebp, esp */ r_ebp = r_esp;
    /* 006eb61b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb61d: push 0x8ef4c0 */ { u32 v = 0x8ef4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006eb622: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eb628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb629: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eb630: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eb633: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eb636: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 006eb639: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 006eb63c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 006eb63f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006eb642: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eb645: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006eb648: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006eb64b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006eb64e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006eb651: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006eb654: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006eb657: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006eb65a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006eb65d: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006eb660: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006eb663: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006eb666: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006eb669: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006eb66c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006eb66f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6eb674u); f_008193cc();
    /* 006eb674: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eb67b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006eb67e: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006eb681: mov dword ptr [eax], 0xb3dd18 */ W32((u32)(r_eax), 0xb3dd18u);
    /* 006eb687: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006eb689: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006eb68c: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 006eb68f: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006eb692: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006eb695: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 006eb698: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 006eb69b: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006eb69e: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 006eb6a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006eb6a3: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 006eb6a6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006eb6a9: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 006eb6ac: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006eb6af: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006eb6b2: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 006eb6b9: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 006eb6bc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006eb6bf: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006eb6c6: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006eb6c9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eb6cc: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 006eb6cf: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006eb6d2: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 006eb6d5: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 006eb6d8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eb6db: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 006eb6de: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006eb6e2: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 006eb6e5: mov word ptr [eax + 0x60], dx */ W16((u32)(r_eax+0x60u), (u16)r_edx);
    /* 006eb6e9: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb6ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb6ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb6ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb6ef: call 0x7947dc */ r_esp -= 4; W32(r_esp, 0x6eb6f4u); f_007947dc();
    /* 006eb6f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb6f7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006eb6fa: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 006eb6fd: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 006eb700: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006eb703: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006eb706: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006eb70d: mov esp, ebp */ r_esp = r_ebp;
    /* 006eb70f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb710: ret 0x20 */ FN_RET(0x006eb618); r_esp += 36; return;
}

void f_006eb714(void) /* sub_6EB714 */
{
    FN_ENTER(0x006eb714);
    /* 006eb714: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb715: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb716: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb717: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eb71a: mov edi, ecx */ r_edi = r_ecx;
    /* 006eb71c: movzx eax, word ptr [edi + 0x60] */ r_eax = (u32)R16((u32)(r_edi+0x60u));
    /* 006eb720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb721: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6eb726u); f_0068d5a8();
    /* 006eb726: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eb727: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eb729: je 0x6eb8b1 */ if (fZ) goto L_006eb8b1;
L_006eb72f:; BB(0x006eb72f);
    /* 006eb72f: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 006eb733: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006eb737: movzx eax, word ptr [edi + 0x60] */ r_eax = (u32)R16((u32)(r_edi+0x60u));
    /* 006eb73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb73c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb73d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb73e: call 0x7947dc */ r_esp -= 4; W32(r_esp, 0x6eb743u); f_007947dc();
    /* 006eb743: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eb746: fild dword ptr [edi + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x1cu)));
    /* 006eb749: fmul dword ptr [0x96dacc] */ ST(0) = ST(0) * R_F32((u32)(0x96daccu));
    /* 006eb74f: mov edx, dword ptr [edi + 0x4c] */ r_edx = R32((u32)(r_edi+0x4cu));
    /* 006eb752: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 006eb756: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 006eb75b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006eb760: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006eb764: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006eb768: fist dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0)));
    /* 006eb76c: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 006eb770: cmp edx, dword ptr [esp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb774: jge 0x6eb80a */ if ((fS==fO)) goto L_006eb80a;
L_006eb77a:; BB(0x006eb77a);
    /* 006eb77a: fld dword ptr [0xa9d480] */ FPUSH(R_F32((u32)(0xa9d480u)));
    /* 006eb780: fld dword ptr [edi + 0x58] */ FPUSH(R_F32((u32)(r_edi+0x58u)));
    /* 006eb783: fld dword ptr [edi + 0x5c] */ FPUSH(R_F32((u32)(r_edi+0x5cu)));
    /* 006eb786: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006eb789: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eb78b: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006eb78d: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006eb791: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 006eb795: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 006eb797: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006eb799: fld dword ptr [0xa9d47c] */ FPUSH(R_F32((u32)(0xa9d47cu)));
    /* 006eb79f: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 006eb7a1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006eb7a3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006eb7a5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006eb7a7: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006eb7ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eb7ad: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006eb7b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006eb7b3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006eb7b7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eb7ba: call 0x794984 */ r_esp -= 4; W32(r_esp, 0x6eb7bfu); f_00794984();
    /* 006eb7bf: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 006eb7c3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006eb7c7: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006eb7cb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006eb7cf: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 006eb7d3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006eb7d7: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 006eb7db: lea ebp, [edi + 0x40] */ r_ebp = (u32)(r_edi+0x40u);
    /* 006eb7de: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006eb7e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb7e3: push dword ptr [edi + 0x50] */ { u32 v = R32((u32)(r_edi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eb7e6: lea eax, [edi + 0x34] */ r_eax = (u32)(r_edi+0x34u);
    /* 006eb7e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb7ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb7eb: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x6eb7f0u); f_007a8f28();
    /* 006eb7f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006eb7f2: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 006eb7f6: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb7fb: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
    /* 006eb7fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb7ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb800: call 0x501a10 */ r_esp -= 4; W32(r_esp, 0x6eb805u); f_00501a10();
    /* 006eb805: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eb808: jmp 0x6eb87d */ goto L_006eb87d;
L_006eb80a:; BB(0x006eb80a);
    /* 006eb80a: fld dword ptr [0xa9d480] */ FPUSH(R_F32((u32)(0xa9d480u)));
    /* 006eb810: fld dword ptr [edi + 0x58] */ FPUSH(R_F32((u32)(r_edi+0x58u)));
    /* 006eb813: fld dword ptr [edi + 0x5c] */ FPUSH(R_F32((u32)(r_edi+0x5cu)));
    /* 006eb816: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006eb819: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006eb81b: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 006eb81d: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006eb821: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 006eb825: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 006eb827: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 006eb829: fld dword ptr [0xa9d47c] */ FPUSH(R_F32((u32)(0xa9d47cu)));
    /* 006eb82f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006eb831: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 006eb833: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006eb835: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 006eb837: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006eb839: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 006eb83b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006eb83d: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006eb841: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006eb845: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006eb847: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006eb84b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eb84e: call 0x794984 */ r_esp -= 4; W32(r_esp, 0x6eb853u); f_00794984();
    /* 006eb853: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006eb857: lea ebp, [edi + 0x40] */ r_ebp = (u32)(r_edi+0x40u);
    /* 006eb85a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb85b: push dword ptr [edi + 0x50] */ { u32 v = R32((u32)(r_edi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eb85e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb85f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb860: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x6eb865u); f_007a8f28();
    /* 006eb865: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006eb867: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 006eb86b: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb871: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
    /* 006eb874: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb875: call 0x501a10 */ r_esp -= 4; W32(r_esp, 0x6eb87au); f_00501a10();
    /* 006eb87a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006eb87d:; BB(0x006eb87d);
    /* 006eb87d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb87e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb87f: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006eb882: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006eb886: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb887: call 0x794418 */ r_esp -= 4; W32(r_esp, 0x6eb88cu); f_00794418();
    /* 006eb88c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eb88f: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006eb892: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb895: cmp eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eb898: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006eb89b: jle 0x6eb8aa */ if ((fZ||fS!=fO)) goto L_006eb8aa;
L_006eb89d:; BB(0x006eb89d);
    /* 006eb89d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006eb8a1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006eb8a6: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006eb8aa:; BB(0x006eb8aa);
    /* 006eb8aa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb8b0: ret  */ FN_RET(0x006eb714); r_esp += 4; return;
L_006eb8b1:; BB(0x006eb8b1);
    /* 006eb8b1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006eb8b5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006eb8ba: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006eb8be: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eb8c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eb8c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb8c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eb8c4: ret  */ FN_RET(0x006eb714); r_esp += 4; return;
}

void f_006eb8c8(void) /* sub_6EB8C8 */
{
    FN_ENTER(0x006eb8c8);
    /* 006eb8c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb8c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb8ca: mov esi, ecx */ r_esi = r_ecx;
    /* 006eb8cc: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 006eb8d0: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eb8d4: mov ecx, esi */ r_ecx = r_esi;
    /* 006eb8d6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6eb8dbu); f_008193cc();
    /* 006eb8db: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 006eb8e0: mov dword ptr [esi], 0xb3dd28 */ W32((u32)(r_esi), 0xb3dd28u);
    /* 006eb8e6: mov word ptr [esi + 0x1c], dx */ W16((u32)(r_esi+0x1cu), (u16)r_edx);
    /* 006eb8ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eb8ec: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 006eb8f0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006eb8f4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006eb8f7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006eb8fa: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006eb8fd: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006eb900: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 006eb903: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 006eb906: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 006eb909: mov eax, esi */ r_eax = r_esi;
    /* 006eb90b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb90c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb90d: ret 0x10 */ FN_RET(0x006eb8c8); r_esp += 20; return;
}

void f_006eb910(void) /* sub_6EB910 */
{
    FN_ENTER(0x006eb910);
    /* 006eb910: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eb911: mov esi, ecx */ r_esi = r_ecx;
    /* 006eb913: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 006eb917: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb91a: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 006eb91e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006eb921: cmp dx, word ptr [esi + 0x1c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 006eb925: jle 0x6eb947 */ if ((fZ||fS!=fO)) goto L_006eb947;
L_006eb927:; BB(0x006eb927);
    /* 006eb927: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 006eb92a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006eb92c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb92d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb92e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eb92f: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eb932: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6eb937u); f_00814298();
    /* 006eb937: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eb93a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006eb93e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eb943: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_006eb947:; BB(0x006eb947);
    /* 006eb947: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eb948: ret  */ FN_RET(0x006eb910); r_esp += 4; return;
}

void f_006eb94c(void) /* sub_6EB94C */
{
    FN_ENTER(0x006eb94c);
    /* 006eb94c: mov dword ptr [0xa96804], 0x3f800000 */ W32((u32)(0xa96804u), 0x3f800000u);
    /* 006eb956: mov dword ptr [0xa96808], 0x41000000 */ W32((u32)(0xa96808u), 0x41000000u);
    /* 006eb960: mov dword ptr [0xa9680c], 0x3fc00000 */ W32((u32)(0xa9680cu), 0x3fc00000u);
    /* 006eb96a: ret  */ FN_RET(0x006eb94c); r_esp += 4; return;
}

void f_006eb96c(void) /* sub_6EB96C */
{
    FN_ENTER(0x006eb96c);
    /* 006eb96c: movsx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1eu));
    /* 006eb970: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eb973: mov word ptr [ecx + 0x1e], ax */ W16((u32)(r_ecx+0x1eu), (u16)r_eax);
    /* 006eb977: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006eb97a: cmp dx, word ptr [ecx + 0x1c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 006eb97e: jle 0x6eb98d */ if ((fZ||fS!=fO)) goto L_006eb98d;
L_006eb980:; BB(0x006eb980);
    /* 006eb980: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006eb984: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eb989: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_006eb98d:; BB(0x006eb98d);
    /* 006eb98d: ret  */ FN_RET(0x006eb96c); r_esp += 4; return;
}

void f_006eb990(void) /* sub_6EB990 */
{
    FN_ENTER(0x006eb990);
    /* 006eb990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb991: mov ebp, esp */ r_ebp = r_esp;
    /* 006eb993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb995: push 0x8ef4dc */ { u32 v = 0x8ef4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eb9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb9a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eb9a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eb9ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eb9ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006eb9b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006eb9b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006eb9b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006eb9ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eb9c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eb9c4: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 006eb9c7: mov dword ptr [ecx], 0xb3dd38 */ W32((u32)(r_ecx), 0xb3dd38u);
    /* 006eb9cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006eb9cf: jl 0x6eb9db */ if ((fS!=fO)) goto L_006eb9db;
L_006eb9d1:; BB(0x006eb9d1);
    /* 006eb9d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eb9d2: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6eb9d7u); f_008148d4();
    /* 006eb9d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eb9d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006eb9db:; BB(0x006eb9db);
    /* 006eb9db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006eb9e2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6eb9e7u); f_008171e8();
    /* 006eb9e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006eb9ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006eb9f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006eb9f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eb9f4: ret  */ FN_RET(0x006eb990); r_esp += 4; return;
}

void f_006eb9f8(void) /* sub_6EB9F8 */
{
    FN_ENTER(0x006eb9f8);
    /* 006eb9f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eb9f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006eb9fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eb9fd: push 0x8ef4f8 */ { u32 v = 0x8ef4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006eba02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eba08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eba09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eba10: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eba13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eba16: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006eba19: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006eba1c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006eba1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006eba22: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eba25: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 006eba29: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006eba2c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006eba2f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006eba32: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006eba35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006eba38: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006eba3b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006eba3e: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6eba43u); f_008193cc();
    /* 006eba43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eba4a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006eba4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eba50: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006eba53: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006eba56: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 006eba5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006eba5c: mov dword ptr [edx], 0xb3dd38 */ W32((u32)(r_edx), 0xb3dd38u);
    /* 006eba62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006eba63: mov word ptr [edx + 0x1e], cx */ W16((u32)(r_edx+0x1eu), (u16)r_ecx);
    /* 006eba67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006eba68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eba69: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 006eba6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eba6d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6eba72u); f_00814298();
    /* 006eba72: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eba75: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006eba78: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006eba7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eba7d: jl 0x6eba95 */ if ((fS!=fO)) goto L_006eba95;
L_006eba7f:; BB(0x006eba7f);
    /* 006eba7f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006eba82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eba84: je 0x6eba95 */ if (fZ) goto L_006eba95;
L_006eba86:; BB(0x006eba86);
    /* 006eba86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006eba88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eba89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eba8a: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6eba8fu); f_00814664();
    /* 006eba8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eba92: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
L_006eba95:; BB(0x006eba95);
    /* 006eba95: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eba98: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006eba9b: mov eax, ecx */ r_eax = r_ecx;
    /* 006eba9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ebaa0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ebaa7: mov esp, ebp */ r_esp = r_ebp;
    /* 006ebaa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ebaaa: ret 0x14 */ FN_RET(0x006eb9f8); r_esp += 24; return;
}

void f_006ebab0(void) /* sub_6EBAB0 */
{
    FN_ENTER(0x006ebab0);
    /* 006ebab0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebab1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ebab3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ebab5: call 0x6eb990 */ r_esp -= 4; W32(r_esp, 0x6ebabau); f_006eb990();
    /* 006ebaba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ebabe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ebac0: jne 0x6ebac6 */ if (!fZ) goto L_006ebac6;
L_006ebac2:; BB(0x006ebac2);
    /* 006ebac2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebac3: ret 4 */ FN_RET(0x006ebab0); r_esp += 8; return;
L_006ebac6:; BB(0x006ebac6);
    /* 006ebac6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebac7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ebaccu); f_005c2f74();
    /* 006ebacc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ebacd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebace: ret 4 */ FN_RET(0x006ebab0); r_esp += 8; return;
}

void f_006ebad4(void) /* sub_6EBAD4 */
{
    FN_ENTER(0x006ebad4);
    /* 006ebad4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebad5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ebad7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ebad9: call 0x6ebaf8 */ r_esp -= 4; W32(r_esp, 0x6ebadeu); f_006ebaf8();
    /* 006ebade: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ebae2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ebae4: jne 0x6ebaea */ if (!fZ) goto L_006ebaea;
L_006ebae6:; BB(0x006ebae6);
    /* 006ebae6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebae7: ret 4 */ FN_RET(0x006ebad4); r_esp += 8; return;
L_006ebaea:; BB(0x006ebaea);
    /* 006ebaea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebaeb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ebaf0u); f_005c2f74();
    /* 006ebaf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ebaf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebaf2: ret 4 */ FN_RET(0x006ebad4); r_esp += 8; return;
}

void f_006ebaf8(void) /* sub_6EBAF8 */
{
    FN_ENTER(0x006ebaf8);
    /* 006ebaf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ebaf9: mov ebp, esp */ r_ebp = r_esp;
    /* 006ebafb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebafd: push 0x8ef514 */ { u32 v = 0x8ef514u; r_esp -= 4; W32(r_esp, v); }
    /* 006ebb02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ebb08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ebb09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ebb10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebb13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ebb16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ebb19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ebb1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ebb1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ebb22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ebb29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ebb2c: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ebb2f: mov dword ptr [eax], 0xb3dd98 */ W32((u32)(r_eax), 0xb3dd98u);
    /* 006ebb35: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6ebb3au); f_008148d4();
    /* 006ebb3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ebb3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ebb42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ebb45: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ebb4au); f_008171e8();
    /* 006ebb4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ebb4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ebb54: mov esp, ebp */ r_esp = r_ebp;
    /* 006ebb56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ebb57: ret  */ FN_RET(0x006ebaf8); r_esp += 4; return;
}

void f_006ebb58(void) /* sub_6EBB58 */
{
    FN_ENTER(0x006ebb58);
    /* 006ebb58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ebb59: mov ebp, esp */ r_ebp = r_esp;
    /* 006ebb5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebb5d: push 0x8ef530 */ { u32 v = 0x8ef530u; r_esp -= 4; W32(r_esp, v); }
    /* 006ebb62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ebb68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ebb69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ebb70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebb73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ebb76: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ebb79: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ebb7c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ebb7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ebb82: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ebb85: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ebb88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ebb8b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6ebb90u); f_008193cc();
    /* 006ebb90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ebb97: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ebb9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ebb9d: mov dword ptr [edi], 0xb3dd98 */ W32((u32)(r_edi), 0xb3dd98u);
    /* 006ebba3: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006ebba6: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006ebbac: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006ebbaf: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006ebbb5: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006ebbb8: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006ebbbe: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006ebbc1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ebbc3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ebbc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ebbc5: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006ebbc8: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ebbcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ebbcc: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ebbd1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ebbd6u); f_00814298();
    /* 006ebbd6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ebbd9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ebbdc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ebbdf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ebbe2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ebbe5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006ebbe8: mov eax, edx */ r_eax = r_edx;
    /* 006ebbea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ebbed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ebbf4: mov esp, ebp */ r_esp = r_ebp;
    /* 006ebbf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ebbf7: ret 8 */ FN_RET(0x006ebb58); r_esp += 12; return;
}

void f_006ebbfc(void) /* sub_6EBBFC */
{
    FN_ENTER(0x006ebbfc);
    /* 006ebbfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ebbfd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebc00: mov edi, ecx */ r_edi = r_ecx;
    /* 006ebc02: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006ebc05: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ebc08: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006ebc0d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ebc0f: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 006ebc12: mov eax, ecx */ r_eax = r_ecx;
    /* 006ebc14: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006ebc17: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006ebc1a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006ebc1c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006ebc1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ebc21: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ebc23: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ebc25: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ebc27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebc29: jne 0x6ebc59 */ if (!fZ) goto L_006ebc59;
L_006ebc2b:; BB(0x006ebc2b);
    /* 006ebc2b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006ebc2e: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006ebc32: lea edx, [edi + 0x20] */ r_edx = (u32)(r_edi+0x20u);
    /* 006ebc35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ebc37: mov ebp, eax */ r_ebp = r_eax;
    /* 006ebc39: mov esi, edx */ r_esi = r_edx;
L_006ebc3b:; BB(0x006ebc3b);
    /* 006ebc3b: push dword ptr [ebp + 0x9cf98c] */ { u32 v = R32((u32)(r_ebp+0x9cf98cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ebc41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ebc42: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ebc47u); f_0050b510();
    /* 006ebc47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ebc4a: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ebc4d: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ebc50: jl 0x6ebc3b */ if ((fS!=fO)) goto L_006ebc3b;
L_006ebc52:; BB(0x006ebc52);
    /* 006ebc52: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006ebc55: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_006ebc59:; BB(0x006ebc59);
    /* 006ebc59: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 006ebc5c: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006ebc62: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebc68: je 0x6ebc71 */ if (fZ) goto L_006ebc71;
L_006ebc6a:; BB(0x006ebc6a);
    /* 006ebc6a: mov eax, 1 */ r_eax = 0x1u;
    /* 006ebc6f: jmp 0x6ebc73 */ goto L_006ebc73;
L_006ebc71:; BB(0x006ebc71);
    /* 006ebc71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ebc73:; BB(0x006ebc73);
    /* 006ebc73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebc75: je 0x6ebc98 */ if (fZ) goto L_006ebc98;
L_006ebc77:; BB(0x006ebc77);
    /* 006ebc77: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006ebc7a: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ebc7f: jl 0x6ebc93 */ if ((fS!=fO)) goto L_006ebc93;
L_006ebc81:; BB(0x006ebc81);
    /* 006ebc81: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ebc85: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ebc8a: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ebc8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ebc91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ebc92: ret  */ FN_RET(0x006ebbfc); r_esp += 4; return;
L_006ebc93:; BB(0x006ebc93);
    /* 006ebc93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ebc96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ebc97: ret  */ FN_RET(0x006ebbfc); r_esp += 4; return;
L_006ebc98:; BB(0x006ebc98);
    /* 006ebc98: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ebc9c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ebca1: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ebca5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ebca8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ebca9: ret  */ FN_RET(0x006ebbfc); r_esp += 4; return;
}

void f_006ebcac(void) /* sub_6EBCAC */
{
    FN_ENTER(0x006ebcac);
    /* 006ebcac: mov dword ptr [0xa96820], 0x3f800000 */ W32((u32)(0xa96820u), 0x3f800000u);
    /* 006ebcb6: mov dword ptr [0xa96824], 0x41000000 */ W32((u32)(0xa96824u), 0x41000000u);
    /* 006ebcc0: mov dword ptr [0xa96828], 0x3fc00000 */ W32((u32)(0xa96828u), 0x3fc00000u);
    /* 006ebcca: ret  */ FN_RET(0x006ebcac); r_esp += 4; return;
}

void f_006ebccc(void) /* sub_6EBCCC */
{
    FN_ENTER(0x006ebccc);
    /* 006ebccc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebccd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ebccf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ebcd1: call 0x6ebcf0 */ r_esp -= 4; W32(r_esp, 0x6ebcd6u); f_006ebcf0();
    /* 006ebcd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ebcda: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ebcdc: jne 0x6ebce2 */ if (!fZ) goto L_006ebce2;
L_006ebcde:; BB(0x006ebcde);
    /* 006ebcde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebcdf: ret 4 */ FN_RET(0x006ebccc); r_esp += 8; return;
L_006ebce2:; BB(0x006ebce2);
    /* 006ebce2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebce3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ebce8u); f_005c2f74();
    /* 006ebce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ebce9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebcea: ret 4 */ FN_RET(0x006ebccc); r_esp += 8; return;
}

void f_006ebcf0(void) /* sub_6EBCF0 */
{
    FN_ENTER(0x006ebcf0);
    /* 006ebcf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ebcf1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ebcf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebcf5: push 0x8ef54c */ { u32 v = 0x8ef54cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebcfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ebd00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ebd01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ebd08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebd0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ebd0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ebd11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ebd14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ebd17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ebd1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ebd21: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ebd24: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 006ebd2a: mov dword ptr [eax], 0xb3de00 */ W32((u32)(r_eax), 0xb3de00u);
    /* 006ebd30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebd32: je 0x6ebd3c */ if (fZ) goto L_006ebd3c;
L_006ebd34:; BB(0x006ebd34);
    /* 006ebd34: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6ebd39u); f_007b9c8c();
    /* 006ebd39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006ebd3c:; BB(0x006ebd3c);
    /* 006ebd3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ebd43: mov ecx, eax */ r_ecx = r_eax;
    /* 006ebd45: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x6ebd4au); f_005017b0();
    /* 006ebd4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ebd4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ebd54: mov esp, ebp */ r_esp = r_ebp;
    /* 006ebd56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ebd57: ret  */ FN_RET(0x006ebcf0); r_esp += 4; return;
}

void f_006ebd58(void) /* sub_6EBD58 */
{
    FN_ENTER(0x006ebd58);
    /* 006ebd58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ebd59: mov ebp, esp */ r_ebp = r_esp;
    /* 006ebd5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebd5d: push 0x8ef582 */ { u32 v = 0x8ef582u; r_esp -= 4; W32(r_esp, v); }
    /* 006ebd62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ebd68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ebd69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ebd70: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebd73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ebd76: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006ebd79: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006ebd7c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006ebd7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ebd82: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006ebd85: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006ebd88: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006ebd8b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006ebd8e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006ebd91: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006ebd94: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x6ebd99u); f_00501860();
    /* 006ebd99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ebda0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ebda3: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006ebda6: mov dword ptr [eax], 0xb3de00 */ W32((u32)(r_eax), 0xb3de00u);
    /* 006ebdac: mov edx, dword ptr [0x9cf994] */ r_edx = R32((u32)(0x9cf994u));
    /* 006ebdb2: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006ebdb7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006ebdba: mov word ptr [eax + 0xa8], cx */ W16((u32)(r_eax+0xa8u), (u16)r_ecx);
    /* 006ebdc1: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 006ebdc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ebdc6: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 006ebdc9: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 006ebdcc: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 006ebdcf: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 006ebdd2: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006ebdd5: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 006ebdda: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ebddd: jl 0x6ebde1 */ if ((fS!=fO)) goto L_006ebde1;
L_006ebddf:; BB(0x006ebddf);
    /* 006ebddf: mov ecx, edx */ r_ecx = r_edx;
L_006ebde1:; BB(0x006ebde1);
    /* 006ebde1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ebde3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ebde5: jg 0x6ebde9 */ if ((!fZ&&fS==fO)) goto L_006ebde9;
L_006ebde7:; BB(0x006ebde7);
    /* 006ebde7: mov ecx, edx */ r_ecx = r_edx;
L_006ebde9:; BB(0x006ebde9);
    /* 006ebde9: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 006ebdec: mov word ptr [eax + 0xa4], dx */ W16((u32)(r_eax+0xa4u), (u16)r_edx);
    /* 006ebdf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebdf4: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6ebdf9u); f_006e1cec();
    /* 006ebdf9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ebdfc: mov dword ptr [edx + 0x64], 0x40400000 */ W32((u32)(r_edx+0x64u), 0x40400000u);
    /* 006ebe03: mov word ptr [edx + 0xa6], ax */ W16((u32)(r_edx+0xa6u), (u16)r_eax);
    /* 006ebe0a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ebe0d: mov dword ptr [edx + 0x70], 0x42b40000 */ W32((u32)(r_edx+0x70u), 0x42b40000u);
    /* 006ebe14: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006ebe17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ebe19: mov dword ptr [edx + 0x3c], 0x3f800000 */ W32((u32)(r_edx+0x3cu), 0x3f800000u);
    /* 006ebe20: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006ebe23: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 006ebe29: mov dword ptr [edx + 0x40], 0x3f800000 */ W32((u32)(r_edx+0x40u), 0x3f800000u);
    /* 006ebe30: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebe35: mov dword ptr [edx + 0xc4], ecx */ W32((u32)(r_edx+0xc4u), r_ecx);
    /* 006ebe3b: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 006ebe42: mov dword ptr [edx + 0x2c], 0x3e4ccccd */ W32((u32)(r_edx+0x2cu), 0x3e4ccccdu);
    /* 006ebe49: mov dword ptr [edx + 0x30], 0x3f800000 */ W32((u32)(r_edx+0x30u), 0x3f800000u);
    /* 006ebe50: mov dword ptr [edx + 0x34], 0x3f800000 */ W32((u32)(r_edx+0x34u), 0x3f800000u);
    /* 006ebe57: mov dword ptr [edx + 0x38], 0x3f800000 */ W32((u32)(r_edx+0x38u), 0x3f800000u);
    /* 006ebe5e: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 006ebe68: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 006ebe72: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 006ebe7c: mov dword ptr [edx + 0xbc], 0x41200000 */ W32((u32)(r_edx+0xbcu), 0x41200000u);
    /* 006ebe86: mov dword ptr [edx + 0xc0], 0x3f800000 */ W32((u32)(r_edx+0xc0u), 0x3f800000u);
    /* 006ebe90: mov dword ptr [edx + 0xc8], 0x40107 */ W32((u32)(r_edx+0xc8u), 0x40107u);
    /* 006ebe9a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ebe9fu); f_005caba4();
    /* 006ebe9f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ebea2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ebea5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006ebea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebeaa: je 0x6ebf42 */ if (fZ) goto L_006ebf42;
L_006ebeb0:; BB(0x006ebeb0);
    /* 006ebeb0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006ebeb7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ebebe: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ebec1: mov ecx, eax */ r_ecx = r_eax;
    /* 006ebec3: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6ebec8u); f_007b4b48();
    /* 006ebec8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006ebecf:; BB(0x006ebecf);
    /* 006ebecf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ebed2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ebed5: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 006ebedb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ebee2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebee4: je 0x6ebef9 */ if (fZ) goto L_006ebef9;
L_006ebee6:; BB(0x006ebee6);
    /* 006ebee6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ebee8: add ecx, 0xb0 */ {  u32 a = r_ecx; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ebeee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebeef: mov ecx, eax */ r_ecx = r_eax;
    /* 006ebef1: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6ebef6u); f_007b9a88();
    /* 006ebef6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
L_006ebef9:; BB(0x006ebef9);
    /* 006ebef9: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006ebefc: mov dword ptr [ecx + 0xac], 1 */ W32((u32)(r_ecx+0xacu), 0x1u);
    /* 006ebf06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ebf08: je 0x6ebf27 */ if (fZ) goto L_006ebf27;
L_006ebf0a:; BB(0x006ebf0a);
    /* 006ebf0a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ebf0e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ebf11: jge 0x6ebf27 */ if ((fS==fO)) goto L_006ebf27;
L_006ebf13:; BB(0x006ebf13);
    /* 006ebf13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006ebf16: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ebf1b: je 0x6ebf27 */ if (fZ) goto L_006ebf27;
L_006ebf1d:; BB(0x006ebf1d);
    /* 006ebf1d: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
L_006ebf27:; BB(0x006ebf27);
    /* 006ebf27: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ebf2a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ebf2d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ebf30: mov eax, ecx */ r_eax = r_ecx;
    /* 006ebf32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ebf35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ebf3c: mov esp, ebp */ r_esp = r_ebp;
    /* 006ebf3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ebf3f: ret 0xc */ FN_RET(0x006ebd58); r_esp += 16; return;
L_006ebf42:; BB(0x006ebf42);
    /* 006ebf42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ebf44: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ebf47: jmp 0x6ebecf */ goto L_006ebecf;
}

void f_006ebf4c(void) /* sub_6EBF4C */
{
    FN_ENTER(0x006ebf4c);
    /* 006ebf4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebf4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ebf4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ebf51: call 0x6ebf60 */ r_esp -= 4; W32(r_esp, 0x6ebf56u); f_006ebf60();
    /* 006ebf56: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ebf58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ebf5a: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6ebf5du); call_ind(t); }
    /* 006ebf5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ebf5e: ret  */ FN_RET(0x006ebf4c); r_esp += 4; return;
}

void f_006ebf60(void) /* sub_6EBF60 */
{
    FN_ENTER(0x006ebf60);
    /* 006ebf60: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 006ebf63: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 006ebf69: ret  */ FN_RET(0x006ebf60); r_esp += 4; return;
}

void f_006ebf6c(void) /* sub_6EBF6C */
{
    FN_ENTER(0x006ebf6c);
    /* 006ebf6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ebf6d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebf70: mov esi, ecx */ r_esi = r_ecx;
    /* 006ebf72: lea edx, [esi + 0x3c] */ r_edx = (u32)(r_esi+0x3cu);
    /* 006ebf75: mov dword ptr [esp], 0x42480000 */ W32((u32)(r_esp), 0x42480000u);
    /* 006ebf7c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006ebf7f: mov dword ptr [esp + 4], 0x42480000 */ W32((u32)(r_esp+0x4u), 0x42480000u);
    /* 006ebf87: mov dword ptr [esp + 8], 0x42480000 */ W32((u32)(r_esp+0x8u), 0x42480000u);
    /* 006ebf8f: push 0x402ccccd */ { u32 v = 0x402ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006ebf94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ebf95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebf96: call 0x501bb0 */ r_esp -= 4; W32(r_esp, 0x6ebf9bu); f_00501bb0();
    /* 006ebf9b: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 006ebf9e: lea eax, [esi + 0x2c] */ r_eax = (u32)(r_esi+0x2cu);
    /* 006ebfa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ebfa2: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ebfa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebfa6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ebfabu); f_0061cdb0();
    /* 006ebfab: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ebfae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ebfaf: ret  */ FN_RET(0x006ebf6c); r_esp += 4; return;
}

void f_006ebfb0(void) /* sub_6EBFB0 */
{
    FN_ENTER(0x006ebfb0);
    /* 006ebfb0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebfb3: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 006ebfb6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ebfb9: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 006ebfbc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ebfbf: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ebfc2: fcomp dword ptr [ecx + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x70u))); FPOP();
    /* 006ebfc5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006ebfc7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006ebfc8: jbe 0x6ebfd7 */ if ((fC||fZ)) goto L_006ebfd7;
L_006ebfca:; BB(0x006ebfca);
    /* 006ebfca: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006ebfce: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ebfd3: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_006ebfd7:; BB(0x006ebfd7);
    /* 006ebfd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ebfda: ret  */ FN_RET(0x006ebfb0); r_esp += 4; return;
}

void f_006ebfdc(void) /* sub_6EBFDC */
{
    FN_ENTER(0x006ebfdc);
    /* 006ebfdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebfdd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ebfe0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ebfe2: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 006ebfe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ebfea: je 0x6ec059 */ if (fZ) goto L_006ec059;
L_006ebfec:; BB(0x006ebfec);
    /* 006ebfec: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006ebfef: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ebff3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ebff6: jge 0x6ec006 */ if ((fS==fO)) goto L_006ec006;
L_006ebff8:; BB(0x006ebff8);
    /* 006ebff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebff9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebffa: call 0x6eada8 */ r_esp -= 4; W32(r_esp, 0x6ebfffu); f_006eada8();
    /* 006ebfff: mov edx, eax */ r_edx = r_eax;
    /* 006ec001: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec004: jmp 0x6ec012 */ goto L_006ec012;
L_006ec006:; BB(0x006ec006);
    /* 006ec006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec007: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec008: call 0x6eaf20 */ r_esp -= 4; W32(r_esp, 0x6ec00du); f_006eaf20();
    /* 006ec00d: mov edx, eax */ r_edx = r_eax;
    /* 006ec00f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006ec012:; BB(0x006ec012);
    /* 006ec012: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006ec018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec01a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ec01c: jle 0x6ec054 */ if ((fZ||fS!=fO)) goto L_006ec054;
L_006ec01e:; BB(0x006ec01e);
    /* 006ec01e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006ec022: mov esi, edx */ r_esi = r_edx;
    /* 006ec024: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006ec027: mov edi, ebx */ r_edi = r_ebx;
    /* 006ec029: mov ebx, eax */ r_ebx = r_eax;
L_006ec02b:; BB(0x006ec02b);
    /* 006ec02b: push dword ptr [esi + ebx*4] */ { u32 v = R32((u32)(r_esi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec02e: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6ec033u); f_006ea71c();
    /* 006ec033: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec036: je 0x6ec042 */ if (fZ) goto L_006ec042;
L_006ec038:; BB(0x006ec038);
    /* 006ec038: push dword ptr [esi + ebx*4] */ { u32 v = R32((u32)(r_esi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec03b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006ec03d: mov ecx, edi */ r_ecx = r_edi;
    /* 006ec03f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ec042u); call_ind(t); }
L_006ec042:; BB(0x006ec042);
    /* 006ec042: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec045: cmp ebx, dword ptr [esi + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec04b: jl 0x6ec02b */ if ((fS!=fO)) goto L_006ec02b;
L_006ec04d:; BB(0x006ec04d);
    /* 006ec04d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006ec051: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006ec054:; BB(0x006ec054);
    /* 006ec054: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec057: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec058: ret  */ FN_RET(0x006ebfdc); r_esp += 4; return;
L_006ec059:; BB(0x006ec059);
    /* 006ec059: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006ec05d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ec062: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006ec066: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec069: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec06a: ret  */ FN_RET(0x006ebfdc); r_esp += 4; return;
}

void f_006ebfed(void)
{
    FN_ENTER(0x006ebfed);
    /* 006ebfed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebfee: sbb al, 0xf */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 006ebff0: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006ebff2: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006ebff4: clc  */ fC = 0;
    /* 006ebff5: add al, 0x7d */ {  u32 a = (u8)r_eax; u32 b = 0x7du; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006ebff7: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006ebff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebff9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ebffa: call 0x6eada8 */ r_esp -= 4; W32(r_esp, 0x6ebfffu); f_006eada8();
    /* 006ebfff: mov edx, eax */ r_edx = r_eax;
    /* 006ec001: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec004: jmp 0x6ec012 */ goto L_006ec012;
L_006ec012:; BB(0x006ec012);
    /* 006ec012: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006ec018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec01a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ec01c: jle 0x6ec054 */ if ((fZ||fS!=fO)) goto L_006ec054;
L_006ec01e:; BB(0x006ec01e);
    /* 006ec01e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006ec022: mov esi, edx */ r_esi = r_edx;
    /* 006ec024: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006ec027: mov edi, ebx */ r_edi = r_ebx;
    /* 006ec029: mov ebx, eax */ r_ebx = r_eax;
L_006ec02b:; BB(0x006ec02b);
    /* 006ec02b: push dword ptr [esi + ebx*4] */ { u32 v = R32((u32)(r_esi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec02e: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6ec033u); f_006ea71c();
    /* 006ec033: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec036: je 0x6ec042 */ if (fZ) goto L_006ec042;
L_006ec038:; BB(0x006ec038);
    /* 006ec038: push dword ptr [esi + ebx*4] */ { u32 v = R32((u32)(r_esi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec03b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006ec03d: mov ecx, edi */ r_ecx = r_edi;
    /* 006ec03f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ec042u); call_ind(t); }
L_006ec042:; BB(0x006ec042);
    /* 006ec042: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec045: cmp ebx, dword ptr [esi + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec04b: jl 0x6ec02b */ if ((fS!=fO)) goto L_006ec02b;
L_006ec04d:; BB(0x006ec04d);
    /* 006ec04d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006ec051: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006ec054:; BB(0x006ec054);
    /* 006ec054: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec057: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec058: ret  */ FN_RET(0x006ebfed); r_esp += 4; return;
}

